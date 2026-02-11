#include "global.h"
#include "dynamic_puddles.h"
#include "event_data.h"
#include "field_camera.h"
#include "fieldmap.h"
#include "overworld.h"
#include "random.h"
#include "constants/flags.h"
#include "constants/map_types.h"
#include "constants/metatile_labels.h"

#define DYNAMIC_PUDDLE_ENABLE_FLAG FLAG_UNUSED_0x020

#define METATILE_PUDDLE_2X2_TL     0x0C8
#define METATILE_PUDDLE_2X2_TR     0x0CA
#define METATILE_PUDDLE_2X2_BL     0x0D8
#define METATILE_PUDDLE_2X2_BR     0x0DA

#define METATILE_PUDDLE_3X3_TL     0x0C8
#define METATILE_PUDDLE_3X3_TM     0x0C9
#define METATILE_PUDDLE_3X3_TR     0x0CA
#define METATILE_PUDDLE_3X3_ML     0x0D0
#define METATILE_PUDDLE_3X3_MM     0x0D1
#define METATILE_PUDDLE_3X3_MR     0x0D2
#define METATILE_PUDDLE_3X3_BL     0x0D8
#define METATILE_PUDDLE_3X3_BM     0x0D9
#define METATILE_PUDDLE_3X3_BR     0x0DA

#define DYNAMIC_PUDDLE_INTERSECTION_METATILE 0x0D1
#define MAX_DYNAMIC_PUDDLE_RECORDS 384
#define MAX_SHAPE_PLACEMENT_ATTEMPTS 256

enum PuddleShape
{
    PUDDLE_SHAPE_2X2,
    PUDDLE_SHAPE_3X3,
};

struct DynamicPuddleRecord
{
    u16 x;
    u16 y;
    u16 originalMetatile;
};

struct DynamicPuddleState
{
    bool8 active;
    u8 mapGroup;
    u8 mapNum;
    u16 recordCount;
};

static const u16 sPuddle2x2Metatiles[2][2] =
{
    {METATILE_PUDDLE_2X2_TL, METATILE_PUDDLE_2X2_TR},
    {METATILE_PUDDLE_2X2_BL, METATILE_PUDDLE_2X2_BR},
};

static const u16 sPuddle3x3Metatiles[3][3] =
{
    {METATILE_PUDDLE_3X3_TL, METATILE_PUDDLE_3X3_TM, METATILE_PUDDLE_3X3_TR},
    {METATILE_PUDDLE_3X3_ML, METATILE_PUDDLE_3X3_MM, METATILE_PUDDLE_3X3_MR},
    {METATILE_PUDDLE_3X3_BL, METATILE_PUDDLE_3X3_BM, METATILE_PUDDLE_3X3_BR},
};

EWRAM_DATA static struct DynamicPuddleState sDynamicPuddleState = {0};
EWRAM_DATA static struct DynamicPuddleRecord sDynamicPuddleRecords[MAX_DYNAMIC_PUDDLE_RECORDS] = {0};
EWRAM_DATA static u8 sPuddleCoverage[MAX_MAP_DATA_SIZE] = {0};
EWRAM_DATA static u16 sPuddleOverlay[MAX_MAP_DATA_SIZE] = {0};

static bool8 IsSupportedOutdoorsLandMap(void);
static bool8 IsStateOnCurrentMap(void);
static void ResetDynamicPuddleState(void);
static bool8 IsLegalPuddleBaseTile(u16 localX, u16 localY);
static bool8 CanPlaceShapeAt(enum PuddleShape shape, u16 mapWidth, u16 mapHeight, u16 originX, u16 originY);
static void StampShapeAt(enum PuddleShape shape, u16 mapWidth, u16 originX, u16 originY);
static bool8 TryPlaceRandomShape(enum PuddleShape shape, u16 mapWidth, u16 mapHeight);
static void RestorePuddles(bool8 redraw);
static void ApplyPuddles(bool8 redraw);

static bool8 IsSupportedOutdoorsLandMap(void)
{
    if (gMapHeader.mapLayout == NULL)
        return FALSE;

    switch (GetCurrentMapType())
    {
    case MAP_TYPE_ROUTE:
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
        return TRUE;
    default:
        return FALSE;
    }
}

static bool8 IsStateOnCurrentMap(void)
{
    return (sDynamicPuddleState.mapGroup == gSaveBlock1Ptr->location.mapGroup
         && sDynamicPuddleState.mapNum == gSaveBlock1Ptr->location.mapNum);
}

static void ResetDynamicPuddleState(void)
{
    sDynamicPuddleState.active = FALSE;
    sDynamicPuddleState.recordCount = 0;
}

static bool8 IsLegalPuddleBaseTile(u16 localX, u16 localY)
{
    u16 gridX = localX + MAP_OFFSET;
    u16 gridY = localY + MAP_OFFSET;
    u16 metatileId = MapGridGetMetatileIdAt(gridX, gridY);

    if (MapGridGetCollisionAt(gridX, gridY) != COLLISION_NONE)
        return FALSE;
    if (metatileId != METATILE_General_Grass)
        return FALSE;
    return TRUE;
}

static bool8 CanPlaceShapeAt(enum PuddleShape shape, u16 mapWidth, u16 mapHeight, u16 originX, u16 originY)
{
    u16 x, y;
    u16 shapeSize = (shape == PUDDLE_SHAPE_3X3) ? 3 : 2;

    if (originX + shapeSize > mapWidth || originY + shapeSize > mapHeight)
        return FALSE;

    for (y = 0; y < shapeSize; y++)
    {
        for (x = 0; x < shapeSize; x++)
        {
            u16 localX = originX + x;
            u16 localY = originY + y;
            if (!IsLegalPuddleBaseTile(localX, localY))
                return FALSE;
        }
    }

    return TRUE;
}

static void StampShapeAt(enum PuddleShape shape, u16 mapWidth, u16 originX, u16 originY)
{
    u16 x, y;
    u16 shapeSize = (shape == PUDDLE_SHAPE_3X3) ? 3 : 2;

    for (y = 0; y < shapeSize; y++)
    {
        for (x = 0; x < shapeSize; x++)
        {
            u16 localX = originX + x;
            u16 localY = originY + y;
            u32 index = localY * mapWidth + localX;
            u16 metatile = (shape == PUDDLE_SHAPE_3X3) ? sPuddle3x3Metatiles[y][x] : sPuddle2x2Metatiles[y][x];

            if (sPuddleCoverage[index] == 0)
                sPuddleOverlay[index] = metatile;
            else
                sPuddleOverlay[index] = DYNAMIC_PUDDLE_INTERSECTION_METATILE;

            sPuddleCoverage[index]++;
        }
    }
}

static bool8 TryPlaceRandomShape(enum PuddleShape shape, u16 mapWidth, u16 mapHeight)
{
    u16 attempt;
    u16 shapeSize = (shape == PUDDLE_SHAPE_3X3) ? 3 : 2;

    if (mapWidth < shapeSize || mapHeight < shapeSize)
        return FALSE;

    for (attempt = 0; attempt < MAX_SHAPE_PLACEMENT_ATTEMPTS; attempt++)
    {
        u16 maxX = mapWidth - shapeSize;
        u16 maxY = mapHeight - shapeSize;
        u16 originX = (maxX == 0) ? 0 : Random() % (maxX + 1);
        u16 originY = (maxY == 0) ? 0 : Random() % (maxY + 1);

        if (CanPlaceShapeAt(shape, mapWidth, mapHeight, originX, originY))
        {
            StampShapeAt(shape, mapWidth, originX, originY);
            return TRUE;
        }
    }

    return FALSE;
}

static void RestorePuddles(bool8 redraw)
{
    u16 i;

    if (!sDynamicPuddleState.active)
        return;

    if (!IsStateOnCurrentMap())
    {
        ResetDynamicPuddleState();
        return;
    }

    for (i = 0; i < sDynamicPuddleState.recordCount; i++)
    {
        MapGridSetMetatileIdAt(sDynamicPuddleRecords[i].x,
                               sDynamicPuddleRecords[i].y,
                               sDynamicPuddleRecords[i].originalMetatile);
    }

    ResetDynamicPuddleState();

    if (redraw)
        DrawWholeMapView();
}

static void ApplyPuddles(bool8 redraw)
{
    u16 i;
    u16 target2x2;
    u16 target3x3;
    u16 mapWidth;
    u16 mapHeight;
    u32 area;

    if (!IsSupportedOutdoorsLandMap())
        return;
    if (!FlagGet(DYNAMIC_PUDDLE_ENABLE_FLAG))
        return;

    mapWidth = gMapHeader.mapLayout->width;
    mapHeight = gMapHeader.mapLayout->height;
    area = mapWidth * mapHeight;
    if (area == 0 || area > MAX_MAP_DATA_SIZE)
        return;

    memset(sPuddleCoverage, 0, area * sizeof(sPuddleCoverage[0]));
    memset(sPuddleOverlay, 0, area * sizeof(sPuddleOverlay[0]));

    target2x2 = 1 + (Random() % 6); // 1..6
    target3x3 = (mapWidth >= 3 && mapHeight >= 3) ? (Random() % 3) : 0; // 0..2

    for (i = 0; i < target3x3; i++)
        TryPlaceRandomShape(PUDDLE_SHAPE_3X3, mapWidth, mapHeight);
    for (i = 0; i < target2x2; i++)
        TryPlaceRandomShape(PUDDLE_SHAPE_2X2, mapWidth, mapHeight);

    sDynamicPuddleState.mapGroup = gSaveBlock1Ptr->location.mapGroup;
    sDynamicPuddleState.mapNum = gSaveBlock1Ptr->location.mapNum;
    sDynamicPuddleState.recordCount = 0;

    for (i = 0; i < area; i++)
    {
        if (sPuddleCoverage[i] != 0)
        {
            u16 localX = i % mapWidth;
            u16 localY = i / mapWidth;
            u16 gridX = localX + MAP_OFFSET;
            u16 gridY = localY + MAP_OFFSET;
            u16 oldMetatile = MapGridGetMetatileIdAt(gridX, gridY) | PACK_COLLISION(MapGridGetCollisionAt(gridX, gridY));
            u16 newMetatile = sPuddleOverlay[i];

            if (oldMetatile != newMetatile && sDynamicPuddleState.recordCount < MAX_DYNAMIC_PUDDLE_RECORDS)
            {
                u16 recordIndex = sDynamicPuddleState.recordCount++;
                sDynamicPuddleRecords[recordIndex].x = gridX;
                sDynamicPuddleRecords[recordIndex].y = gridY;
                sDynamicPuddleRecords[recordIndex].originalMetatile = oldMetatile;
                MapGridSetMetatileIdAt(gridX, gridY, newMetatile);
            }
        }
    }

    sDynamicPuddleState.active = (sDynamicPuddleState.recordCount != 0);

    if (redraw && sDynamicPuddleState.active)
        DrawWholeMapView();
}

void DynamicPuddles_OnMapInit(void)
{
    ResetDynamicPuddleState();
    ApplyPuddles(FALSE);
}

void DynamicPuddles_OnFlagChanged(u16 flagId)
{
    bool8 redraw;

    if (flagId != DYNAMIC_PUDDLE_ENABLE_FLAG)
        return;
    if (gMapHeader.mapLayout == NULL)
        return;
    redraw = (gMain.callback1 == CB1_Overworld || IsOverworldLinkActive());
    if (!IsSupportedOutdoorsLandMap())
    {
        ResetDynamicPuddleState();
        return;
    }

    if (FlagGet(DYNAMIC_PUDDLE_ENABLE_FLAG))
    {
        if (!sDynamicPuddleState.active)
            ApplyPuddles(redraw);
    }
    else
    {
        RestorePuddles(redraw);
    }
}
