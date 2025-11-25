#include "global.h"
#include "ui_stat_editor.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "text_window.h"
#include "window.h"
#include "text.h"
#include "evolution_scene.h"
#include "overworld.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/abilities.h"
#include "constants/characters.h"
#include "pokemon_icon.h"
#include "pokedex.h"
#include "trainer_pokemon_sprites.h"
#include "field_effect.h"
#include "field_screen_effect.h"
#include "pokemon.h"
#include "random.h"
#include "constants/pokemon.h"
#include "battle_main.h"
#include "caps.h"

/*
 * 
 */
 
//==========DEFINES==========//
struct StatEditorResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 gfxLoadState;
    u8 mode;
    u8 monIconSpriteId;
    u16 speciesID;
    u16 selectedStat;
    u16 selector_x;
    u16 selector_y;
    u32 editingStat;
    u16 normalTotal;
    u16 evTotal;
    u16 ivTotal;
    u16 partyid;
    u16 inputMode;
    u16 editingFriendship;
    u8 editingAbility;
    u8 highlightFillTarget;
    u8 highlightOutlineTarget;
};

#define INPUT_SELECT_STAT 0
#define INPUT_EDIT_STAT 1
#define INPUT_EDIT_ABILITY 2
#define INPUT_EDIT_GENDER 3
#define INPUT_EDIT_LEVEL  4
#define INPUT_EDIT_NATURE 5
#define INPUT_EDIT_FRIENDSHIP 6

enum WindowIds
{
    WINDOW_1,
    WINDOW_2,
    WINDOW_3,
    WINDOW_4,
};

//==========EWRAM==========//
static EWRAM_DATA struct StatEditorResources *sStatEditorDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static MainCallback sStatEditorEvolutionReturnCallback;
static u16 sStatEditorEvolutionPartyId;

//==========STATIC=DEFINES==========//
static void StatEditor_RunSetup(void);
static bool8 StatEditor_DoGfxSetup(void);
static bool8 StatEditor_InitBgs(void);
static void StatEditor_FadeAndBail(void);
static bool8 StatEditor_LoadGraphics(void);
static void StatEditor_InitWindows(void);
static void PrintTitleToWindowMainState();
static void Task_StatEditorWaitFadeIn(u8 taskId);
static void Task_StatEditorMain(u8 taskId);
static void Task_MenuEditingStat(u8 taskId);
static void SampleUi_DrawMonIcon(void);
static void PrintMonStats(void);
static struct Pokemon *ReturnPartyMon(void);
static void StatEditor_UpdateSelectedStat(void);
static void StatEditor_UpdateStatSelectionDisplay(void);
static void ChangeLevel(s8 delta);
static void Task_MenuEditingLevel(u8 taskId);
static void ChangeGender(bool8 goingRight);
static void Task_MenuEditingGender(u8 taskId);
static void ChangeAbility(bool8 goingRight);
static void Task_MenuEditingAbility(u8 taskId);
static void ChangeNature(bool8 goingRight);
static void Task_MenuEditingNature(u8 taskId);
static bool8 StatEditor_SetFriendshipValue(u16 value);
static void ChangeFriendshipByDelta(s16 delta);
static void Task_MenuEditingFriendship(u8 taskId);
static void StatEditor_ToggleShiny(u8 taskId);
static bool8 StatEditor_CanEvolve(void);
static bool8 StatEditor_TryStartEvolution(u8 taskId);
static void CB2_ReturnToStatEditorFromEvolution(void);
static void StatEditor_UpdateHighlight(u8 outlineTarget, u8 fillTarget, bool32 updateOutline, bool32 updateFill);

//==========CONST=DATA==========//
static const struct BgTemplate sStatEditorBgTemplates[] =
{
    {
        .bg = 0,    // windows, etc
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .priority = 1
    }, 
    {
        .bg = 1,    // this bg loads the UI tilemap
        .charBaseIndex = 3,
        .mapBaseIndex = 28,
        .priority = 2
    },
    {
        .bg = 2,    // this bg loads the UI tilemap
        .charBaseIndex = 0,
        .mapBaseIndex = 26,
        .priority = 0
    }
};

static const struct WindowTemplate sMenuWindowTemplates[] = 
{
    [WINDOW_1] = 
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 1,   // position from left (per 8 pixels)
        .tilemapTop = 0,    // position from top (per 8 pixels)
        .width = 30,        // width (per 8 pixels)
        .height = 2,        // height (per 8 pixels)
        .paletteNum = 15,   // palette index to use for text
        .baseBlock = 1,     // tile start in VRAM
    },
    [WINDOW_2] = 
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 11,   // position from left (per 8 pixels)
        .tilemapTop = 2,    // position from top (per 8 pixels)
        .width = 18,        // width (per 8 pixels)
        .height = 17,        // height (per 8 pixels)
        .paletteNum = 15,   // palette index to use for text
        .baseBlock = 1 + 70,     // tile start in VRAM
    },
    [WINDOW_3] = 
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 1,   // position from left (per 8 pixels)
        .tilemapTop = 11,    // position from top (per 8 pixels)
        .width = 8,        // width (per 8 pixels)
        .height = 9,        // height (per 8 pixels)
        .paletteNum = 15,   // palette index to use for text
        .baseBlock = 1 + 70 + 306,     // tile start in VRAM
    },
    DUMMY_WIN_TEMPLATE
};

static const u32 sStatEditorBgTiles[] = INCBIN_U32("graphics/ui_menu/background_tileset.4bpp.lz");
static const u32 sStatEditorBgTilemap[] = INCBIN_U32("graphics/ui_menu/background_tileset.bin.lz");
static const u16 sStatEditorBgPalette[] = INCBIN_U16("graphics/ui_menu/background_pal.gbapal");

enum Colors
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_RED,
    FONT_BLUE,
};
static const u8 sMenuWindowFontColors[][3] =
{
    [FONT_BLACK] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY},
    [FONT_WHITE] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY},
    [FONT_RED] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED, TEXT_COLOR_LIGHT_GRAY},
    [FONT_BLUE] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_BLUE, TEXT_COLOR_LIGHT_GRAY},
};

#define HIGHLIGHT_BORDER_COLOR TEXT_COLOR_RED
#define HIGHLIGHT_FILL_COLOR TEXT_COLOR_BLUE

static void DrawHighlightFill(u8 windowId, u16 x, u16 y, u16 width, u16 height)
{
    if (width == 0 || height == 0)
        return;

    FillWindowPixelRect(windowId, PIXEL_FILL(HIGHLIGHT_FILL_COLOR), x, y, width, height);
}

static void DrawHighlightBorder(u8 windowId, u16 x, u16 y, u16 width, u16 height)
{
    if (width == 0 || height == 0)
        return;

    if (width <= 1 || height <= 1)
    {
        FillWindowPixelRect(windowId, PIXEL_FILL(HIGHLIGHT_BORDER_COLOR), x, y, width, height);
        return;
    }

    FillWindowPixelRect(windowId, PIXEL_FILL(HIGHLIGHT_BORDER_COLOR), x, y, width, 1);
    FillWindowPixelRect(windowId, PIXEL_FILL(HIGHLIGHT_BORDER_COLOR), x, y + height - 1, width, 1);
    FillWindowPixelRect(windowId, PIXEL_FILL(HIGHLIGHT_BORDER_COLOR), x, y, 1, height);
    FillWindowPixelRect(windowId, PIXEL_FILL(HIGHLIGHT_BORDER_COLOR), x + width - 1, y, 1, height);
}

#define HIGHLIGHT_NONE 0xFF

enum HighlightField
{
    HIGHLIGHT_LEVEL,
    HIGHLIGHT_GENDER,
    HIGHLIGHT_ABILITY,
    HIGHLIGHT_NATURE,
    HIGHLIGHT_FRIENDSHIP,
    HIGHLIGHT_STAT_HP_EV,
    HIGHLIGHT_STAT_HP_IV,
    HIGHLIGHT_STAT_ATK_EV,
    HIGHLIGHT_STAT_ATK_IV,
    HIGHLIGHT_STAT_DEF_EV,
    HIGHLIGHT_STAT_DEF_IV,
    HIGHLIGHT_STAT_SPATK_EV,
    HIGHLIGHT_STAT_SPATK_IV,
    HIGHLIGHT_STAT_SPDEF_EV,
    HIGHLIGHT_STAT_SPDEF_IV,
    HIGHLIGHT_STAT_SPEED_EV,
    HIGHLIGHT_STAT_SPEED_IV,
    HIGHLIGHT_COUNT,
};

struct HighlightRegion
{
    u8 windowId;
    u16 x;
    u16 y;
    u16 width;
    u16 height;
};

static const struct HighlightRegion sHighlightRegions[HIGHLIGHT_COUNT] =
{
    [HIGHLIGHT_LEVEL] = { WINDOW_3, 0, 19, 37, 14 },
    [HIGHLIGHT_GENDER] = { WINDOW_3, 40, 19, 24, 14 },
    [HIGHLIGHT_ABILITY] = { WINDOW_3, 0, 35, 64, 14 },
    [HIGHLIGHT_NATURE] = { WINDOW_3, 0, 51, 40, 14 },
    [HIGHLIGHT_FRIENDSHIP] = { WINDOW_3, 43, 51, 21, 14 },
    [HIGHLIGHT_STAT_HP_EV] = { WINDOW_2, 88, 28, 24, 12 },
    [HIGHLIGHT_STAT_HP_IV] = { WINDOW_2, 120, 28, 24, 12 },
    [HIGHLIGHT_STAT_ATK_EV] = { WINDOW_2, 88, 44, 24, 12 },
    [HIGHLIGHT_STAT_ATK_IV] = { WINDOW_2, 120, 44, 24, 12 },
    [HIGHLIGHT_STAT_DEF_EV] = { WINDOW_2, 88, 60, 24, 12 },
    [HIGHLIGHT_STAT_DEF_IV] = { WINDOW_2, 120, 60, 24, 12 },
    [HIGHLIGHT_STAT_SPATK_EV] = { WINDOW_2, 88, 76, 24, 12 },
    [HIGHLIGHT_STAT_SPATK_IV] = { WINDOW_2, 120, 76, 24, 12 },
    [HIGHLIGHT_STAT_SPDEF_EV] = { WINDOW_2, 88, 92, 24, 12 },
    [HIGHLIGHT_STAT_SPDEF_IV] = { WINDOW_2, 120, 92, 24, 12 },
    [HIGHLIGHT_STAT_SPEED_EV] = { WINDOW_2, 88, 108, 24, 12 },
    [HIGHLIGHT_STAT_SPEED_IV] = { WINDOW_2, 120, 108, 24, 12 },
};

#define STAT_GRID_ROW_COUNT 6
#define STAT_GRID_COLUMN_COUNT 2
#define HIGHLIGHT_STAT_BASE HIGHLIGHT_STAT_HP_EV

static void StatEditor_UpdateHighlight(u8 outlineTarget, u8 fillTarget, bool32 updateOutline, bool32 updateFill)
{
    if (sStatEditorDataPtr == NULL)
        return;

    bool32 changed = FALSE;

    if (updateOutline && sStatEditorDataPtr->highlightOutlineTarget != outlineTarget)
    {
        sStatEditorDataPtr->highlightOutlineTarget = outlineTarget;
        changed = TRUE;
    }

    if (updateFill && sStatEditorDataPtr->highlightFillTarget != fillTarget)
    {
        sStatEditorDataPtr->highlightFillTarget = fillTarget;
        changed = TRUE;
    }

    if (changed)
        PrintMonStats();
}


static const u8 sA_ButtonGfx[] = INCBIN_U8("graphics/ui_menu/a_button.4bpp");
static const u8 sB_ButtonGfx[] = INCBIN_U8("graphics/ui_menu/b_button.4bpp");
static const u8 sR_ButtonGfx[] = INCBIN_U8("graphics/ui_menu/r_button.4bpp");
static const u8 sDPad_ButtonGfx[] = INCBIN_U8("graphics/ui_menu/dpad_button.4bpp");
static const u8 sSelect_ButtonGfx[] = INCBIN_U8("graphics/ui_menu/select_button.4bpp");
static const u8 sStart_ButtonGfx[] = INCBIN_U8("graphics/ui_menu/start_button.4bpp");
static const u8 sFriendshipHeartGfx[] = INCBIN_U8("graphics/ui_menu/heart.4bpp");

// This is our main initialization function if you want to call the menu from elsewhere
void StatEditor_Init(MainCallback callback)
{
    if ((sStatEditorDataPtr = AllocZeroed(sizeof(struct StatEditorResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }
    
    // initialize stuff
    sStatEditorDataPtr->gfxLoadState = 0;
    sStatEditorDataPtr->savedCallback = callback;
    sStatEditorDataPtr->partyid = gSpecialVar_0x8004;
    sStatEditorDataPtr->highlightFillTarget = HIGHLIGHT_NONE;
    sStatEditorDataPtr->highlightOutlineTarget = HIGHLIGHT_NONE;
    
    SetMainCallback2(StatEditor_RunSetup);
}

static void StatEditor_RunSetup(void)
{
    while (1)
    {
        if (StatEditor_DoGfxSetup() == TRUE)
            break;
    }
}

static void StatEditor_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void StatEditor_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static bool8 StatEditor_DoGfxSetup(void)
{
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        SetVBlankHBlankCallbacksToNull();
        ResetVramOamAndBgCntRegs();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (StatEditor_InitBgs())
        {
            sStatEditorDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            StatEditor_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        if (StatEditor_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        sStatEditorDataPtr->speciesID = GetMonData(ReturnPartyMon(), MON_DATA_SPECIES);
        FreeMonIconPalettes();
        LoadMonIconPalettes();
        SampleUi_DrawMonIcon();
        gMain.state++;
        break;
    case 5:
        StatEditor_InitWindows();
        PrintTitleToWindowMainState();
        sStatEditorDataPtr->inputMode = INPUT_SELECT_STAT;
        sStatEditorDataPtr->editingAbility = GetMonData(ReturnPartyMon(), MON_DATA_ABILITY_NUM);
        PrintMonStats();
        StatEditor_UpdateStatSelectionDisplay();
        gMain.state++;
        break;
    case 6:
        CreateTask(Task_StatEditorWaitFadeIn, 0);
        BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(StatEditor_VBlankCB);
        SetMainCallback2(StatEditor_MainCB);
        return TRUE;
    }
    return FALSE;
}

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

static void StatEditor_FreeResources(void)
{
    if (sStatEditorDataPtr != NULL)
    {
        FreeResourcesAndDestroySprite(&gSprites[sStatEditorDataPtr->monIconSpriteId], sStatEditorDataPtr->monIconSpriteId);
        try_free(sStatEditorDataPtr);
        sStatEditorDataPtr = NULL;
    }

    if (sBg1TilemapBuffer != NULL)
    {
        try_free(sBg1TilemapBuffer);
        sBg1TilemapBuffer = NULL;
    }

    FreeAllWindowBuffers();
}


static void Task_StatEditorWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sStatEditorDataPtr->savedCallback);
        StatEditor_FreeResources();
        DestroyTask(taskId);
    }
}

static void StatEditor_FadeAndBail(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_StatEditorWaitFadeAndBail, 0);
    SetVBlankCallback(StatEditor_VBlankCB);
    SetMainCallback2(StatEditor_MainCB);
}

static bool8 StatEditor_InitBgs(void)
{
    ResetAllBgsCoordinates();
    sBg1TilemapBuffer = Alloc(0x800);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;
    
    memset(sBg1TilemapBuffer, 0, 0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sStatEditorBgTemplates, NELEMS(sStatEditorBgTemplates));
    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
    return TRUE;
}

static bool8 StatEditor_LoadGraphics(void)
{
    switch (sStatEditorDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sStatEditorBgTiles, 0, 0, 0);
        sStatEditorDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sStatEditorBgTilemap, sBg1TilemapBuffer);
            sStatEditorDataPtr->gfxLoadState++;
        }
        break;
    case 2:
        LoadPalette(sStatEditorBgPalette, 0, 32);
        sStatEditorDataPtr->gfxLoadState++;
        break;
    default:
        sStatEditorDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void StatEditor_InitWindows(void)
{
    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
    
    FillWindowPixelBuffer(WINDOW_1, 0);
    PutWindowTilemap(WINDOW_1);
    CopyWindowToVram(WINDOW_1, 3);
    
    ScheduleBgCopyTilemapToVram(2);
}

static void Task_StatEditorWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_StatEditorMain;
}

static void Task_StatEditorTurnOff(u8 taskId)
{
    // s16 *data = gTasks[taskId].data;

    if (!gPaletteFade.active)
    {
        SetMainCallback2(sStatEditorDataPtr->savedCallback);
        StatEditor_FreeResources();
        DestroyTask(taskId);
    }
}

//
//       Stat Editor Code
//  End of UI setup code, beginning of stat editor specific code
//
static struct Pokemon *ReturnPartyMon(void)
{
    return &gPlayerParty[sStatEditorDataPtr->partyid];
}

#define MON_ICON_X     32 + 8
#define MON_ICON_Y     32 + 24
static void SampleUi_DrawMonIcon(void)
{
    struct Pokemon *mon = ReturnPartyMon();
    u16 speciesId = sStatEditorDataPtr->speciesID;
    bool8 isShiny = GetMonData(mon, MON_DATA_IS_SHINY, NULL);
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);

    sStatEditorDataPtr->monIconSpriteId = CreateMonPicSprite_Affine(speciesId, isShiny, personality, TRUE, MON_ICON_X, MON_ICON_Y, 0, TAG_NONE);

    gSprites[sStatEditorDataPtr->monIconSpriteId].oam.priority = 0;
}

#define DISTANCE_BETWEEN_STATS_Y 16
#define SECOND_COLUMN ((8 * 4))
#define THIRD_COLUMN ((8 * 8))
#define STARTING_X 60
#define STARTING_Y 26

struct MonPrintData {
    u16 x;
    u16 y;
};

static const struct MonPrintData StatPrintData[] =
{
    [MON_DATA_MAX_HP] = {STARTING_X, STARTING_Y},
    [MON_DATA_HP_EV] = {STARTING_X + SECOND_COLUMN, STARTING_Y},
    [MON_DATA_HP_IV] = {STARTING_X + THIRD_COLUMN, STARTING_Y},

    [MON_DATA_ATK] = {STARTING_X, STARTING_Y + DISTANCE_BETWEEN_STATS_Y},
    [MON_DATA_ATK_EV] = {STARTING_X + SECOND_COLUMN, STARTING_Y + DISTANCE_BETWEEN_STATS_Y},
    [MON_DATA_ATK_IV] = {STARTING_X + THIRD_COLUMN, STARTING_Y + DISTANCE_BETWEEN_STATS_Y},

    [MON_DATA_DEF] = {STARTING_X, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 2)},
    [MON_DATA_DEF_EV] = {STARTING_X + SECOND_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 2)},
    [MON_DATA_DEF_IV] = {STARTING_X + THIRD_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 2)},

    [MON_DATA_SPATK] = {STARTING_X, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 3)},
    [MON_DATA_SPATK_EV] = {STARTING_X + SECOND_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 3)},
    [MON_DATA_SPATK_IV] = {STARTING_X + THIRD_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 3)},

    [MON_DATA_SPDEF] = {STARTING_X, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 4)},
    [MON_DATA_SPDEF_EV] = {STARTING_X + SECOND_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 4)},
    [MON_DATA_SPDEF_IV] = {STARTING_X + THIRD_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 4)},

    [MON_DATA_SPEED] = {STARTING_X, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 5)},
    [MON_DATA_SPEED_EV] = {STARTING_X + SECOND_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 5)},
    [MON_DATA_SPEED_IV] = {STARTING_X + THIRD_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 5)},
};

static const u16 statsToPrintActual[] = {
        MON_DATA_MAX_HP, MON_DATA_ATK, MON_DATA_DEF, MON_DATA_SPEED, MON_DATA_SPATK, MON_DATA_SPDEF,
};

static const u16 statsToPrintEVs[] = {
        MON_DATA_HP_EV, MON_DATA_ATK_EV, MON_DATA_DEF_EV, MON_DATA_SPEED_EV, MON_DATA_SPATK_EV, MON_DATA_SPDEF_EV,
};

static const u16 statsToPrintIVs[] = {
        MON_DATA_HP_IV, MON_DATA_ATK_IV, MON_DATA_DEF_IV, MON_DATA_SPEED_IV, MON_DATA_SPATK_IV, MON_DATA_SPDEF_IV,
};


static const u8 sGenderColors[2][3] =
{
    {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_LIGHT_BLUE, TEXT_COLOR_BLUE},
    {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_LIGHT_RED, TEXT_COLOR_RED}
};

static const u8 sText_MenuHP[] = _("HP");
static const u8 sText_MenuAttack[] = _("Attack");
static const u8 sText_MenuSpAttack[] = _("Sp. Atk");
static const u8 sText_MenuDefense[] = _("Defense");
static const u8 sText_MenuSpDefense[] = _("Sp. Def");
static const u8 sText_MenuSpeed[] = _("Speed");
static const u8 sText_MenuTotal[] = _("Total");
static const u8 sText_MenuStat[] = _("Stat");
static const u8 sText_MenuActual[] = _("Actual");
static const u8 sText_MenuEV[] = _("EV");
static const u8 sText_MenuIV[] = _("IV");
static const u8 sText_MonLevel[] = _("Lv.{CLEAR 1}{STR_VAR_1}");

static const u8 sText_MenuLRButtonTextMain[] = _("Cycle Party");
static const u8 sText_MenuAButtonTextMain[] = _("Edit Stats");
static const u8 sText_MenuBButtonTextMain[] = _("Back");
static const u8 sText_MenuDPadButtonTextMain[] = _("Change Stat");
static const u8 sText_MenuSelectButtonTextMain[] = _("Edit Shiny");
static const u8 sText_MenuStartButtonTextMain[] = _("Evolve");

#define BUTTON_ICON_Y 4
#define BUTTON_TEXT_Y 0
#define BUTTON_GROUP_SPACING 6

struct ButtonHelpEntry
{
    const u8 *iconGfx;
    u8 iconWidth;
    u8 iconHeight;
    const u8 *text;
};

static void PrintButtonHelpEntries(const struct ButtonHelpEntry *entries, u32 count)
{
    u16 x = 0;
    u32 i;

    for (i = 0; i < count; i++)
    {
        const struct ButtonHelpEntry *entry = &entries[i];

        if (entry->iconGfx != NULL && entry->iconWidth != 0 && entry->iconHeight != 0)
        {
            BlitBitmapToWindow(WINDOW_1, entry->iconGfx, x, BUTTON_ICON_Y, entry->iconWidth, entry->iconHeight);
            x += entry->iconWidth;
        }

        if (entry->text != NULL)
        {
            AddTextPrinterParameterized4(WINDOW_1, FONT_SHORT_NARROWER, x, BUTTON_TEXT_Y, 0, 0, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, entry->text);
            x += GetStringWidth(FONT_SHORT_NARROWER, entry->text, 0);
        }

        x += BUTTON_GROUP_SPACING;
    }

    PutWindowTilemap(WINDOW_1);
    CopyWindowToVram(WINDOW_1, 3);
}

static void PrintTitleToWindowMainState(void)
{
    struct ButtonHelpEntry buttonHelp[4];
    u32 buttonCount = 0;

    FillWindowPixelBuffer(WINDOW_1, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    buttonHelp[buttonCount++] = (struct ButtonHelpEntry){ sR_ButtonGfx, 24, 8, sText_MenuLRButtonTextMain };
    buttonHelp[buttonCount++] = (struct ButtonHelpEntry){ sA_ButtonGfx, 8, 8, sText_MenuAButtonTextMain };
    buttonHelp[buttonCount++] = (struct ButtonHelpEntry){ sSelect_ButtonGfx, 24, 8, sText_MenuSelectButtonTextMain };

    if (StatEditor_CanEvolve())
        buttonHelp[buttonCount++] = (struct ButtonHelpEntry){ sStart_ButtonGfx, 24, 8, sText_MenuStartButtonTextMain };

    PrintButtonHelpEntries(buttonHelp, buttonCount);
}

static void PrintTitleToWindowEditState()
{
    static const struct ButtonHelpEntry sEditButtonHelp[] =
    {
        {sDPad_ButtonGfx, 24, 8, sText_MenuDPadButtonTextMain},
        {sB_ButtonGfx, 8, 8, sText_MenuBButtonTextMain},
    };

    FillWindowPixelBuffer(WINDOW_1, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    PrintButtonHelpEntries(sEditButtonHelp, ARRAY_COUNT(sEditButtonHelp));
}

static const u8 *GetNatureStatLabelColor(u8 statId, u16 nature)
{
    if (!P_SUMMARY_SCREEN_NATURE_COLORS
        || nature >= NUM_NATURES
        || gNaturesInfo[nature].statUp == gNaturesInfo[nature].statDown)
        return sMenuWindowFontColors[FONT_BLACK];

    if (statId == gNaturesInfo[nature].statUp)
        return sMenuWindowFontColors[FONT_RED];

    if (statId == gNaturesInfo[nature].statDown)
        return sMenuWindowFontColors[FONT_BLUE];

    return sMenuWindowFontColors[FONT_BLACK];
}

static void PrintMonStats()
{
    u8 i;
    u16 currentStat;
    u16 nature;
    u8 text[2];
    u16 level = GetMonData(ReturnPartyMon(), MON_DATA_LEVEL);
    u16 personality = GetMonData(ReturnPartyMon(), MON_DATA_PERSONALITY);
    u16 gender = GetGenderFromSpeciesAndPersonality(sStatEditorDataPtr->speciesID, personality);
    u8 abilityNum;

    FillWindowPixelBuffer(WINDOW_2, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WINDOW_3, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    sStatEditorDataPtr->normalTotal = 0;
    sStatEditorDataPtr->evTotal = 0;
    sStatEditorDataPtr->ivTotal = 0;

    nature = GetMonData(ReturnPartyMon(), MON_DATA_HIDDEN_NATURE);
    if (nature >= NUM_NATURES)
        nature = GetNature(ReturnPartyMon());

    if (sStatEditorDataPtr->highlightFillTarget < HIGHLIGHT_COUNT)
    {
        const struct HighlightRegion *region = &sHighlightRegions[sStatEditorDataPtr->highlightFillTarget];
        DrawHighlightFill(region->windowId, region->x, region->y, region->width, region->height);
    }

    {
        const u8 *hpColor = GetNatureStatLabelColor(STAT_HP, nature);
        const u8 *atkColor = GetNatureStatLabelColor(STAT_ATK, nature);
        const u8 *defColor = GetNatureStatLabelColor(STAT_DEF, nature);
        const u8 *spAtkColor = GetNatureStatLabelColor(STAT_SPATK, nature);
        const u8 *spDefColor = GetNatureStatLabelColor(STAT_SPDEF, nature);
        const u8 *speedColor = GetNatureStatLabelColor(STAT_SPEED, nature);

        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 18, 7, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_MenuStat);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, STARTING_X - 6, 7, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_MenuActual);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, STARTING_X + SECOND_COLUMN + 4, 7, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_MenuEV);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, STARTING_X + THIRD_COLUMN + 5, 7, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, sText_MenuIV);

        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 24, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 0), 0, 0, hpColor, 0xFF, sText_MenuHP);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 12, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 1), 0, 0, atkColor, 0xFF, sText_MenuAttack);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 12, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 2), 0, 0, defColor, 0xFF, sText_MenuDefense);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 10, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 3), 0, 0, spAtkColor, 0xFF, sText_MenuSpAttack);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 12, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 4), 0, 0, spDefColor, 0xFF, sText_MenuSpDefense);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 16, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 5), 0, 0, speedColor, 0xFF, sText_MenuSpeed);
        AddTextPrinterParameterized4(WINDOW_2, FONT_NARROW, 16, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 6), 0, 0, sMenuWindowFontColors[FONT_BLACK], 0xFF, sText_MenuTotal);
    }

    // Print Mon Stats
    for(i = 0; i < 6; i++)
    {
        currentStat = GetMonData(ReturnPartyMon(), statsToPrintActual[i]);
        sStatEditorDataPtr->normalTotal += currentStat;
        DebugPrintf("Stat: %d", currentStat);
        ConvertIntToDecimalStringN(gStringVar2, currentStat, STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WINDOW_2, 1, StatPrintData[statsToPrintActual[i]].x, StatPrintData[statsToPrintActual[i]].y, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);
    }

    for(i = 0; i < 6; i++)
    {
        currentStat = GetMonData(ReturnPartyMon(), statsToPrintEVs[i]);
        sStatEditorDataPtr->evTotal += currentStat;
        DebugPrintf("Stat: %d", currentStat);
        ConvertIntToDecimalStringN(gStringVar2, currentStat, STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WINDOW_2, 1, StatPrintData[statsToPrintEVs[i]].x, StatPrintData[statsToPrintEVs[i]].y, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);
    }

    for(i = 0; i < 6; i++)
    {
        currentStat = GetMonData(ReturnPartyMon(), statsToPrintIVs[i]);
        sStatEditorDataPtr->ivTotal += currentStat;
        DebugPrintf("Stat: %d", currentStat);
        ConvertIntToDecimalStringN(gStringVar2, currentStat, STR_CONV_MODE_RIGHT_ALIGN, 3);
        AddTextPrinterParameterized4(WINDOW_2, 1, StatPrintData[statsToPrintIVs[i]].x, StatPrintData[statsToPrintIVs[i]].y, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);
    }

    // Calc Totals
    ConvertIntToDecimalStringN(gStringVar2, sStatEditorDataPtr->normalTotal, STR_CONV_MODE_RIGHT_ALIGN, 4);
    AddTextPrinterParameterized4(WINDOW_2, 1, STARTING_X - 6, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 6), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);

    ConvertIntToDecimalStringN(gStringVar2, sStatEditorDataPtr->evTotal, STR_CONV_MODE_RIGHT_ALIGN, 3);
    AddTextPrinterParameterized4(WINDOW_2, 1, STARTING_X + SECOND_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 6), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);

    ConvertIntToDecimalStringN(gStringVar2, sStatEditorDataPtr->ivTotal, STR_CONV_MODE_RIGHT_ALIGN, 3);
    AddTextPrinterParameterized4(WINDOW_2, 1, STARTING_X + THIRD_COLUMN, STARTING_Y + (DISTANCE_BETWEEN_STATS_Y * 6), 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);


    // Print ability / nature / name / level / gender

    //species
#ifdef POKEMON_EXPANSION
    StringCopy(gStringVar2, GetSpeciesName(sStatEditorDataPtr->speciesID));
#else
    StringCopy(gStringVar2, gSpeciesNames[sStatEditorDataPtr->speciesID]);
#endif

    AddTextPrinterParameterized4(WINDOW_3, FONT_NARROW, 4, 2, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);

    //level
    ConvertIntToDecimalStringN(gStringVar1, level, STR_CONV_MODE_RIGHT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar2, sText_MonLevel);
    AddTextPrinterParameterized4(WINDOW_3, FONT_SMALL_NARROW, 4, 18, 0, 0, sMenuWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, gStringVar2);

    //gender
    StringCopy(text, gText_MaleSymbol);
    if (gender != MON_GENDERLESS)
    {
        if (gender == MON_FEMALE)
            StringCopy(text, gText_FemaleSymbol);
        else
            StringCopy(text, gText_MaleSymbol);
        AddTextPrinterParameterized4(WINDOW_3, FONT_NORMAL, 41 + 8, 19, 0, 0, sGenderColors[(gender == MON_FEMALE)], TEXT_SKIP_DRAW, text);
    }

    //nature
    StringCopy(gStringVar2, gNaturesInfo[nature].name);
    AddTextPrinterParameterized4(WINDOW_3, FONT_SMALL_NARROW, 4, 50, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);

    // friendship (heart icon + value)
    {
        u16 friendship = GetMonData(ReturnPartyMon(), MON_DATA_FRIENDSHIP);
        BlitBitmapToWindow(WINDOW_3, sFriendshipHeartGfx, 44, 55, 8, 8);
        ConvertIntToDecimalStringN(gStringVar2, friendship, STR_CONV_MODE_LEFT_ALIGN, 3);
        AddTextPrinterParameterized4(WINDOW_3, FONT_SMALL_NARROWER, 52, 50, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);
    }

    // ability
    abilityNum = GetMonData(ReturnPartyMon(), MON_DATA_ABILITY_NUM);
    StringCopy(gStringVar2, gAbilitiesInfo[GetAbilityBySpecies(sStatEditorDataPtr->speciesID, abilityNum)].name);
    {
        u8 abilityFontId = GetFontIdToFit(gStringVar2, FONT_SMALL_NARROW, 0, WindowWidthPx(WINDOW_3) - 4);
        AddTextPrinterParameterized4(WINDOW_3, abilityFontId, 4, 34, 0, 0, sMenuWindowFontColors[FONT_WHITE], 0xFF, gStringVar2);
    }

    if (sStatEditorDataPtr->highlightOutlineTarget < HIGHLIGHT_COUNT)
    {
        const struct HighlightRegion *region = &sHighlightRegions[sStatEditorDataPtr->highlightOutlineTarget];
        DrawHighlightBorder(region->windowId, region->x, region->y, region->width, region->height);
    }

    PutWindowTilemap(WINDOW_3);
    CopyWindowToVram(WINDOW_3, 3);

    PutWindowTilemap(WINDOW_2);
    CopyWindowToVram(WINDOW_2, 3);
}

static const u16 selectedStatToStatEnum[] = {
        MON_DATA_HP_EV, MON_DATA_HP_IV, MON_DATA_ATK_EV, MON_DATA_ATK_IV, MON_DATA_DEF_EV, MON_DATA_DEF_IV,
        MON_DATA_SPATK_EV, MON_DATA_SPATK_IV, MON_DATA_SPDEF_EV, MON_DATA_SPDEF_IV, MON_DATA_SPEED_EV, MON_DATA_SPEED_IV,
};

static void Task_DelayedSpriteLoad(u8 taskId) // wait 4 frames after changing the mon you're editing so there are no palette problems
{   
    if (gTasks[taskId].data[11] >= 4)
    {
        SampleUi_DrawMonIcon();
        PrintMonStats();
        PrintTitleToWindowMainState();
        gTasks[taskId].func = Task_StatEditorMain;
        return;
    }
    else
    {
        gTasks[taskId].data[11]++;
    }
}

static void ReloadNewPokemon(u8 taskId)
{
    gSprites[sStatEditorDataPtr->monIconSpriteId].invisible = TRUE;
    FreeResourcesAndDestroySprite(&gSprites[sStatEditorDataPtr->monIconSpriteId], sStatEditorDataPtr->monIconSpriteId);
    sStatEditorDataPtr->speciesID = GetMonData(ReturnPartyMon(), MON_DATA_SPECIES);
    gTasks[taskId].func = Task_DelayedSpriteLoad;
    gTasks[taskId].data[11] = 0;
}

static void StatEditor_UpdateSelectedStat(void)
{
    if (sStatEditorDataPtr == NULL)
        return;

    sStatEditorDataPtr->selectedStat = sStatEditorDataPtr->selector_x + (sStatEditorDataPtr->selector_y * STAT_GRID_COLUMN_COUNT);
}

static void StatEditor_UpdateStatSelectionDisplay(void)
{
    u8 outlineTarget = HIGHLIGHT_NONE;
    u8 fillTarget = HIGHLIGHT_NONE;

    if (sStatEditorDataPtr == NULL)
        return;

    StatEditor_UpdateSelectedStat();

    if (sStatEditorDataPtr->inputMode != INPUT_SELECT_STAT
        && sStatEditorDataPtr->inputMode != INPUT_EDIT_STAT)
        return;

    if (sStatEditorDataPtr->selector_y < STAT_GRID_ROW_COUNT
        && sStatEditorDataPtr->selector_x < STAT_GRID_COLUMN_COUNT)
    {
        outlineTarget = HIGHLIGHT_STAT_BASE
            + (sStatEditorDataPtr->selector_y * STAT_GRID_COLUMN_COUNT)
            + sStatEditorDataPtr->selector_x;

        if (sStatEditorDataPtr->inputMode == INPUT_EDIT_STAT)
            fillTarget = outlineTarget;
    }

    StatEditor_UpdateHighlight(outlineTarget, fillTarget, TRUE, TRUE);
}

enum
{
    EXTRA_STATE_EV,
    EXTRA_STATE_GENDER,
    EXTRA_STATE_LEVEL,
    EXTRA_STATE_IV,
    EXTRA_STATE_COUNT,
};

static bool8 StatEditor_IsLevelFocus(void)
{
    return sStatEditorDataPtr->inputMode == INPUT_EDIT_LEVEL;
}

static bool8 StatEditor_IsGenderFocus(void)
{
    return sStatEditorDataPtr->inputMode == INPUT_EDIT_GENDER;
}

static bool8 StatEditor_IsAbilityFocus(void)
{
    return sStatEditorDataPtr->inputMode == INPUT_EDIT_ABILITY;
}

static bool8 StatEditor_IsNatureFocus(void)
{
    return sStatEditorDataPtr->inputMode == INPUT_EDIT_NATURE;
}

static bool8 StatEditor_IsFriendshipFocus(void)
{
    return sStatEditorDataPtr->inputMode == INPUT_EDIT_FRIENDSHIP;
}

static void StatEditor_FocusStatCell(u8 row, u8 column)
{
    sStatEditorDataPtr->selector_y = row;
    sStatEditorDataPtr->selector_x = column;
    sStatEditorDataPtr->inputMode = INPUT_SELECT_STAT;

    StatEditor_UpdateStatSelectionDisplay();
}

static void StatEditor_FocusLevel(void)
{
    sStatEditorDataPtr->selector_y = 4;
    sStatEditorDataPtr->inputMode = INPUT_EDIT_LEVEL;
    StatEditor_UpdateHighlight(HIGHLIGHT_LEVEL, HIGHLIGHT_NONE, TRUE, TRUE);
}

static void StatEditor_FocusGender(void)
{
    sStatEditorDataPtr->selector_y = 4;
    sStatEditorDataPtr->inputMode = INPUT_EDIT_GENDER;
    StatEditor_UpdateHighlight(HIGHLIGHT_GENDER, HIGHLIGHT_NONE, TRUE, TRUE);
}

static void StatEditor_FocusAbility(void)
{
    sStatEditorDataPtr->selector_y = 5;
    sStatEditorDataPtr->inputMode = INPUT_EDIT_ABILITY;
    StatEditor_UpdateHighlight(HIGHLIGHT_ABILITY, HIGHLIGHT_NONE, TRUE, TRUE);
}

static void StatEditor_FocusNature(void)
{
    sStatEditorDataPtr->selector_y = 5;
    sStatEditorDataPtr->inputMode = INPUT_EDIT_NATURE;
    StatEditor_UpdateHighlight(HIGHLIGHT_NATURE, HIGHLIGHT_NONE, TRUE, TRUE);
}

static void StatEditor_FocusFriendship(void)
{
    sStatEditorDataPtr->selector_y = 5;
    sStatEditorDataPtr->inputMode = INPUT_EDIT_FRIENDSHIP;
    StatEditor_UpdateHighlight(HIGHLIGHT_FRIENDSHIP, HIGHLIGHT_NONE, TRUE, TRUE);
}

static bool32 StatEditor_FindPersonality(u16 species, u8 desiredNature, u8 desiredGender, u32 currentPersonality, u32 *result)
{
    u8 currentNature = GetNatureFromPersonality(currentPersonality);
    u8 currentGender = GetGenderFromSpeciesAndPersonality(species, currentPersonality);
    bool8 enforceGender = (desiredGender != MON_GENDERLESS);

    if (desiredNature >= NUM_NATURES)
        desiredNature = currentNature;
    if (!enforceGender)
        desiredGender = currentGender;

    if (desiredNature == currentNature && desiredGender == currentGender)
    {
        *result = currentPersonality;
        return TRUE;
    }

    if (desiredNature == currentNature && !enforceGender)
    {
        *result = currentPersonality;
        return TRUE;
    }

    u32 basePersonality = currentPersonality - currentNature + desiredNature;

    if (!enforceGender || GetGenderFromSpeciesAndPersonality(species, basePersonality) == desiredGender)
    {
        *result = basePersonality;
        return TRUE;
    }

    for (u32 step = 1; step < 256; step++)
    {
        u32 offset = NUM_NATURES * step;
        if (basePersonality <= 0xFFFFFFFF - offset)
        {
            u32 plus = basePersonality + offset;
            if (GetGenderFromSpeciesAndPersonality(species, plus) == desiredGender)
            {
                *result = plus;
                return TRUE;
            }
        }

        if (basePersonality >= offset)
        {
            u32 minus = basePersonality - offset;
            if (GetGenderFromSpeciesAndPersonality(species, minus) == desiredGender)
            {
                *result = minus;
                return TRUE;
            }
        }
    }

    for (u32 attempt = 0; attempt < 100000; attempt++)
    {
        u32 candidate = Random32();
        if (GetNatureFromPersonality(candidate) != desiredNature)
            continue;
        if (enforceGender && GetGenderFromSpeciesAndPersonality(species, candidate) != desiredGender)
            continue;
        *result = candidate;
        return TRUE;
    }

    return FALSE;
}

static bool32 StatEditor_ApplyPersonality(struct Pokemon *mon, u16 species, u8 desiredNature, u8 desiredGender, u32 *personality)
{
    u32 newPersonality;

    if (!StatEditor_FindPersonality(species, desiredNature, desiredGender, *personality, &newPersonality))
        return FALSE;

    if (newPersonality != *personality)
    {
        UpdateMonPersonality(&mon->box, newPersonality);
        *personality = newPersonality;
    }

    return TRUE;
}

static u8 StatEditor_GetExtraRowState(void)
{
    if (sStatEditorDataPtr->inputMode == INPUT_SELECT_STAT)
        return (sStatEditorDataPtr->selector_x == 0) ? EXTRA_STATE_EV : EXTRA_STATE_IV;
    if (StatEditor_IsLevelFocus())
        return EXTRA_STATE_LEVEL;
    if (StatEditor_IsGenderFocus())
        return EXTRA_STATE_GENDER;
    return EXTRA_STATE_EV;
}

static void StatEditor_SetExtraRowState(u8 state)
{
    switch (state)
    {
    case EXTRA_STATE_EV:
        StatEditor_FocusStatCell(4, 0);
        break;
    case EXTRA_STATE_LEVEL:
        StatEditor_FocusLevel();
        break;
    case EXTRA_STATE_GENDER:
        StatEditor_FocusGender();
        break;
    case EXTRA_STATE_IV:
        StatEditor_FocusStatCell(4, 1);
        break;
    }
}

static void StatEditor_HandleExtraRowHorizontal(bool8 toRight)
{
    u8 state = StatEditor_GetExtraRowState();
    state = (state + (toRight ? EXTRA_STATE_COUNT - 1 : 1)) % EXTRA_STATE_COUNT;
    StatEditor_SetExtraRowState(state);
    PlaySE(SE_SELECT);
}

static void StatEditor_HandleAbilityHorizontal(bool8 toRight)
{
    if (toRight)
        StatEditor_FocusStatCell(5, 0);
    else
        StatEditor_FocusStatCell(5, 1);
    PlaySE(SE_SELECT);
}

static void StatEditor_HandleSpeedRowHorizontal(bool8 toRight)
{
    bool8 changed = FALSE;
    bool8 selectionChanged = FALSE;

    if (toRight)
    {
        if (sStatEditorDataPtr->selector_x == 0)
        {
            sStatEditorDataPtr->selector_x = 1;
            changed = TRUE;
            selectionChanged = TRUE;
        }
        else
        {
            StatEditor_FocusAbility();
            changed = TRUE;
        }
    }
    else
    {
        if (sStatEditorDataPtr->selector_x == 0)
        {
            StatEditor_FocusAbility();
            changed = TRUE;
        }
        else
        {
            sStatEditorDataPtr->selector_x = 0;
            changed = TRUE;
            selectionChanged = TRUE;
        }
    }

    if (selectionChanged)
        StatEditor_UpdateStatSelectionDisplay();

    if (changed)
        PlaySE(SE_SELECT);
}

static bool8 StatEditor_HandleNatureFriendshipHorizontal(void)
{
    if (StatEditor_IsNatureFocus())
    {
        StatEditor_FocusFriendship();
        PlaySE(SE_SELECT);
        return TRUE;
    }

    if (StatEditor_IsFriendshipFocus())
    {
        StatEditor_FocusNature();
        PlaySE(SE_SELECT);
        return TRUE;
    }

    return FALSE;
}

static void StatEditor_HandleHorizontalInput(bool8 toRight)
{
    if (sStatEditorDataPtr->selector_y == 4)
    {
        StatEditor_HandleExtraRowHorizontal(toRight);
        return;
    }

    if (StatEditor_IsAbilityFocus())
    {
        StatEditor_HandleAbilityHorizontal(toRight);
        return;
    }

    if (StatEditor_HandleNatureFriendshipHorizontal())
        return;

    if (StatEditor_IsLevelFocus() || StatEditor_IsGenderFocus())
        return;

    if (sStatEditorDataPtr->selector_y == 5 && sStatEditorDataPtr->inputMode == INPUT_SELECT_STAT)
    {
        StatEditor_HandleSpeedRowHorizontal(toRight);
        return;
    }

    if (sStatEditorDataPtr->inputMode == INPUT_SELECT_STAT && sStatEditorDataPtr->selector_y <= 3)
    {
        sStatEditorDataPtr->selector_x ^= 1;
        StatEditor_UpdateStatSelectionDisplay();
        PlaySE(SE_SELECT);
    }
}

static bool8 StatEditor_HandleExtendedVertical(bool8 toDown)
{
    if (toDown)
    {
        if (StatEditor_IsLevelFocus())
        {
            StatEditor_FocusGender();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsGenderFocus())
        {
            StatEditor_FocusAbility();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsAbilityFocus())
        {
            StatEditor_FocusNature();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsNatureFocus())
        {
            StatEditor_FocusFriendship();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsFriendshipFocus())
        {
            StatEditor_FocusLevel();
            PlaySE(SE_SELECT);
            return TRUE;
        }
    }
    else
    {
        if (StatEditor_IsFriendshipFocus())
        {
            StatEditor_FocusNature();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsGenderFocus())
        {
            StatEditor_FocusLevel();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsAbilityFocus())
        {
            StatEditor_FocusGender();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsNatureFocus())
        {
            StatEditor_FocusAbility();
            PlaySE(SE_SELECT);
            return TRUE;
        }
        if (StatEditor_IsLevelFocus())
        {
            StatEditor_FocusFriendship();
            PlaySE(SE_SELECT);
            return TRUE;
        }
    }
    return FALSE;
}

static void StatEditor_HandleVerticalInput(bool8 toDown)
{
    if (StatEditor_HandleExtendedVertical(toDown))
        return;

    if (toDown)
    {
        if (sStatEditorDataPtr->selector_y == 5)
            sStatEditorDataPtr->selector_y = 0;
        else
            sStatEditorDataPtr->selector_y++;
    }
    else
    {
        if (sStatEditorDataPtr->selector_y == 0)
            sStatEditorDataPtr->selector_y = 5;
        else
            sStatEditorDataPtr->selector_y--;
    }

    if (sStatEditorDataPtr->selector_y != 4 && (StatEditor_IsLevelFocus() || StatEditor_IsGenderFocus()))
    {
        sStatEditorDataPtr->inputMode = INPUT_SELECT_STAT;
        sStatEditorDataPtr->selector_x = 0;
        StatEditor_UpdateHighlight(HIGHLIGHT_NONE, HIGHLIGHT_NONE, TRUE, TRUE);
    }
    else if (sStatEditorDataPtr->selector_y != 5 && (StatEditor_IsAbilityFocus() || StatEditor_IsNatureFocus() || StatEditor_IsFriendshipFocus()))
    {
        sStatEditorDataPtr->inputMode = INPUT_SELECT_STAT;
        sStatEditorDataPtr->selector_x = 0;
        StatEditor_UpdateHighlight(HIGHLIGHT_NONE, HIGHLIGHT_NONE, TRUE, TRUE);
    }

    PlaySE(SE_SELECT);
    StatEditor_UpdateStatSelectionDisplay();
}

static bool8 StatEditor_TryBeginEditing(u8 taskId)
{
    if (!JOY_NEW(A_BUTTON))
        return FALSE;

    switch (sStatEditorDataPtr->inputMode)
    {
    case INPUT_EDIT_ABILITY:
        sStatEditorDataPtr->editingAbility = GetMonData(ReturnPartyMon(), MON_DATA_ABILITY_NUM);
        StatEditor_UpdateHighlight(HIGHLIGHT_ABILITY, HIGHLIGHT_ABILITY, TRUE, TRUE);
        PlaySE(SE_SELECT);
        PrintTitleToWindowEditState();
        gTasks[taskId].func = Task_MenuEditingAbility;
        return TRUE;
    case INPUT_EDIT_NATURE:
        StatEditor_UpdateHighlight(HIGHLIGHT_NATURE, HIGHLIGHT_NATURE, TRUE, TRUE);
        PlaySE(SE_SELECT);
        PrintTitleToWindowEditState();
        gTasks[taskId].func = Task_MenuEditingNature;
        return TRUE;
    case INPUT_EDIT_GENDER:
        StatEditor_UpdateHighlight(HIGHLIGHT_GENDER, HIGHLIGHT_GENDER, TRUE, TRUE);
        PlaySE(SE_SELECT);
        PrintTitleToWindowEditState();
        gTasks[taskId].func = Task_MenuEditingGender;
        return TRUE;
    case INPUT_EDIT_LEVEL:
        StatEditor_UpdateHighlight(HIGHLIGHT_LEVEL, HIGHLIGHT_LEVEL, TRUE, TRUE);
        PlaySE(SE_SELECT);
        PrintTitleToWindowEditState();
        gTasks[taskId].func = Task_MenuEditingLevel;
        return TRUE;
    case INPUT_EDIT_FRIENDSHIP:
        sStatEditorDataPtr->editingFriendship = GetMonData(ReturnPartyMon(), MON_DATA_FRIENDSHIP);
        StatEditor_UpdateHighlight(HIGHLIGHT_FRIENDSHIP, HIGHLIGHT_FRIENDSHIP, TRUE, TRUE);
        PlaySE(SE_SELECT);
        PrintTitleToWindowEditState();
        gTasks[taskId].func = Task_MenuEditingFriendship;
        return TRUE;
    default:
        break;
    }

    StatEditor_UpdateSelectedStat();
    sStatEditorDataPtr->editingStat = GetMonData(ReturnPartyMon(), selectedStatToStatEnum[sStatEditorDataPtr->selectedStat]);
    PlaySE(SE_SELECT);
    PrintTitleToWindowEditState();
    sStatEditorDataPtr->inputMode = INPUT_EDIT_STAT;
    StatEditor_UpdateStatSelectionDisplay();
    gTasks[taskId].func = Task_MenuEditingStat;

    return TRUE;
}

static void StatEditor_HandlePartySwitch(u8 taskId)
{
    if (JOY_NEW(L_BUTTON))
    {
        u16 partyId = sStatEditorDataPtr->partyid;
        if (partyId == 0)
            partyId = gPlayerPartyCount - 1;
        else
            partyId--;
        sStatEditorDataPtr->partyid = partyId;
        PlaySE(SE_SELECT);
        ReloadNewPokemon(taskId);
    }

    if (JOY_NEW(R_BUTTON))
    {
        u16 partyId = sStatEditorDataPtr->partyid;
        if (partyId == gPlayerPartyCount - 1)
            partyId = 0;
        else
            partyId++;
        sStatEditorDataPtr->partyid = partyId;
        PlaySE(SE_SELECT);
        ReloadNewPokemon(taskId);
    }
}

static void StatEditor_ToggleShiny(u8 taskId)
{
    struct Pokemon *mon = ReturnPartyMon();
    bool8 isShiny = GetMonData(mon, MON_DATA_IS_SHINY, NULL);

    isShiny ^= TRUE;
    SetMonData(mon, MON_DATA_IS_SHINY, &isShiny);
    PlaySE(SE_SELECT);
    ReloadNewPokemon(taskId);
}

static void Task_StatEditorMain(u8 taskId)
{
    if (StatEditor_TryBeginEditing(taskId))
        return;

    StatEditor_HandlePartySwitch(taskId);

    if (JOY_NEW(SELECT_BUTTON))
    {
        StatEditor_ToggleShiny(taskId);
        return;
    }

    if (JOY_NEW(START_BUTTON))
    {
        if (StatEditor_TryStartEvolution(taskId))
            return;
        PlaySE(SE_FAILURE);
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_StatEditorTurnOff;
        return;
    }

    if (JOY_NEW(DPAD_LEFT))
        StatEditor_HandleHorizontalInput(FALSE);

    if (JOY_NEW(DPAD_RIGHT))
        StatEditor_HandleHorizontalInput(TRUE);

    if (JOY_NEW(DPAD_UP))
        StatEditor_HandleVerticalInput(FALSE);

    if (JOY_NEW(DPAD_DOWN))
        StatEditor_HandleVerticalInput(TRUE);
}

struct StatEditorEvolutionInfo
{
    u16 targetSpecies;
    bool8 canStop;
};

static bool32 StatEditor_IsLevelMethod(u16 method)
{
    return method == EVO_LEVEL || method == EVO_LEVEL_BATTLE_ONLY;
}

static bool8 StatEditor_GetEvolutionInfo(struct StatEditorEvolutionInfo *info)
{
    const struct Evolution *evolutions;
    struct Pokemon *mon;
    u32 level;
    u32 i;

    if (sStatEditorDataPtr == NULL)
        return FALSE;

    mon = ReturnPartyMon();
    if (GetMonData(mon, MON_DATA_IS_EGG, NULL))
        return FALSE;

    evolutions = GetSpeciesEvolutions(sStatEditorDataPtr->speciesID);
    if (evolutions == NULL)
        return FALSE;

    level = GetMonData(mon, MON_DATA_LEVEL, NULL);

    for (i = 0; evolutions[i].method != EVOLUTIONS_END; i++)
    {
        const struct Evolution *evolution = &evolutions[i];
        u16 targetSpecies = evolution->targetSpecies;
        u16 method = evolution->method;
        u16 param = evolution->param;

        if (targetSpecies == SPECIES_NONE || method == EVO_NONE || method == EVO_SPLIT_FROM_EVO)
            continue;

        if (!StatEditor_IsLevelMethod(method))
            continue;

        if (level >= param)
        {
            bool32 canStopEvo = TRUE;

            if (!DoesMonMeetAdditionalConditions(mon, evolution->params, NULL, PARTY_SIZE, &canStopEvo, CHECK_EVO))
                continue;

            info->targetSpecies = targetSpecies;
            info->canStop = canStopEvo;
            return TRUE;
        }
    }

    return FALSE;
}

static bool8 StatEditor_CanEvolve(void)
{
    struct StatEditorEvolutionInfo info;
    return StatEditor_GetEvolutionInfo(&info);
}

static void CB2_ReturnToStatEditorFromEvolution(void)
{
    gSpecialVar_0x8004 = sStatEditorEvolutionPartyId;
    StatEditor_Init(sStatEditorEvolutionReturnCallback);
}

static bool8 StatEditor_TryStartEvolution(u8 taskId)
{
    struct StatEditorEvolutionInfo evoInfo;
    struct Pokemon *mon;
    MainCallback savedCallback;
    u16 partyId;

    if (!StatEditor_GetEvolutionInfo(&evoInfo))
        return FALSE;

    mon = ReturnPartyMon();
    savedCallback = sStatEditorDataPtr->savedCallback;
    partyId = sStatEditorDataPtr->partyid;

    PlaySE(SE_SELECT);

    sStatEditorEvolutionReturnCallback = savedCallback;
    sStatEditorEvolutionPartyId = partyId;
    gCB2_AfterEvolution = CB2_ReturnToStatEditorFromEvolution;

    DestroyTask(taskId);
    StatEditor_FreeResources();

    BeginEvolutionScene(mon, evoInfo.targetSpecies, evoInfo.canStop, sStatEditorEvolutionPartyId);

    return TRUE;
}


static void ChangeLevel(s8 delta)
{
    struct Pokemon *mon = ReturnPartyMon();
    u16 species = sStatEditorDataPtr->speciesID;
    u8 level = GetMonData(mon, MON_DATA_LEVEL, NULL);
    s16 tentative = (s16)level + (s16)delta;
    if (tentative < 1)
        tentative = 1;
    if (tentative > MAX_LEVEL)
        tentative = MAX_LEVEL;
    u8 newLevel = (u8)tentative;

#if B_EXP_CAP_TYPE != EXP_CAP_NONE
    {
        u32 levelCap = GetCurrentLevelCap();
        if (levelCap != 0 && newLevel > levelCap)
            newLevel = levelCap;
    }
#endif

    if (newLevel == level)
    {
        PlaySE(SE_FAILURE);
        return;
    }

    u32 currentHP = GetMonData(mon, MON_DATA_HP, NULL);
    u32 oldMaxHP = GetMonData(mon, MON_DATA_MAX_HP, NULL);
    u32 amountHPLost = (oldMaxHP > 0 && currentHP <= oldMaxHP) ? (oldMaxHP - currentHP) : 0;

    u32 newExp = gExperienceTables[gSpeciesInfo[species].growthRate][newLevel];
    SetMonData(mon, MON_DATA_EXP, &newExp);
    SetMonData(mon, MON_DATA_LEVEL, &newLevel);
    CalculateMonStats(mon);

    if (amountHPLost > 0)
    {
        s32 tempDifference = (s32)GetMonData(mon, MON_DATA_MAX_HP, NULL) - (s32)amountHPLost;
        if (tempDifference < 0)
            tempDifference = 0;
        u32 newHP = (u32)tempDifference;
        SetMonData(mon, MON_DATA_HP, &newHP);
    }

    PrintMonStats();
    PlaySE(SE_SELECT);
}

static void Task_MenuEditingLevel(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_StatEditorMain;
        PlaySE(SE_SELECT);
        sStatEditorDataPtr->inputMode = INPUT_EDIT_LEVEL;
        StatEditor_UpdateHighlight(HIGHLIGHT_LEVEL, HIGHLIGHT_NONE, TRUE, TRUE);
        PrintTitleToWindowMainState();
        return;
    }
    if (JOY_NEW(DPAD_LEFT))
        ChangeLevel(-1);
    else if (JOY_NEW(DPAD_RIGHT))
        ChangeLevel(+1);
    else if (JOY_NEW(DPAD_UP) || JOY_NEW(R_BUTTON))
        ChangeLevel(+10);
    else if (JOY_NEW(DPAD_DOWN) || JOY_NEW(L_BUTTON))
        ChangeLevel(-10);
}

static void ChangeGender(bool8 goingRight)
{
    struct Pokemon *mon = ReturnPartyMon();
    u16 species = sStatEditorDataPtr->speciesID;
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);
    u8 ratio = gSpeciesInfo[species].genderRatio;

    if (ratio == MON_GENDERLESS || ratio == MON_MALE || ratio == MON_FEMALE)
    {
        PlaySE(SE_FAILURE);
        return;
    }

    u8 currentGender = GetGenderFromSpeciesAndPersonality(species, personality);
    u8 desiredGender = (currentGender == MON_FEMALE) ? MON_MALE : MON_FEMALE;
    u8 storedNature = GetMonData(mon, MON_DATA_HIDDEN_NATURE);
    u8 desiredNature = (storedNature < NUM_NATURES) ? storedNature : GetNatureFromPersonality(personality);
    (void)goingRight;

    if (!StatEditor_ApplyPersonality(mon, species, desiredNature, desiredGender, &personality))
    {
        PlaySE(SE_FAILURE);
        return;
    }

    CalculateMonStats(mon);
    PrintMonStats();
    PlaySE(SE_SELECT);
}

static void Task_MenuEditingGender(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_StatEditorMain;
        PlaySE(SE_SELECT);
        sStatEditorDataPtr->inputMode = INPUT_EDIT_GENDER;
        StatEditor_UpdateHighlight(HIGHLIGHT_GENDER, HIGHLIGHT_NONE, TRUE, TRUE);
        PrintTitleToWindowMainState();
        return;
    }
    if (JOY_NEW(DPAD_LEFT))
        ChangeGender(FALSE);
    else if (JOY_NEW(DPAD_RIGHT))
        ChangeGender(TRUE);
}

static void ChangeAbility(bool8 goingRight)
{
    struct Pokemon *mon = ReturnPartyMon();
    u16 species = sStatEditorDataPtr->speciesID;
    u8 currentAbilNum = sStatEditorDataPtr->editingAbility;
    u8 newAbilityNum = currentAbilNum;
    bool8 hasAbility2 = (gSpeciesInfo[species].abilities[1] != ABILITY_NONE);
    bool8 hasHiddenAbility = (gSpeciesInfo[species].abilities[2] != ABILITY_NONE);

    if(!(hasAbility2 || hasHiddenAbility)) {
        PlaySE(SE_FAILURE);
        return;
    }

    if(goingRight) {
        newAbilityNum = (currentAbilNum + 1) % 3;
        if(newAbilityNum == 1 && !hasAbility2) newAbilityNum = 2;
        if(newAbilityNum == 2 && !hasHiddenAbility) newAbilityNum = 0;
    } else {
        newAbilityNum = (currentAbilNum + 2) % 3;
        if(newAbilityNum == 2 && !hasHiddenAbility) newAbilityNum = 1;
        if(newAbilityNum == 1 && !hasAbility2) newAbilityNum = 0;
    }

    sStatEditorDataPtr->editingAbility = newAbilityNum;
    
    SetMonData(mon, MON_DATA_ABILITY_NUM, &newAbilityNum);
    
    PrintMonStats();
    PlaySE(SE_SELECT);
}

static void Task_MenuEditingAbility(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_StatEditorMain;
        PlaySE(SE_SELECT);
        sStatEditorDataPtr->inputMode = INPUT_EDIT_ABILITY;
        StatEditor_UpdateHighlight(HIGHLIGHT_ABILITY, HIGHLIGHT_NONE, TRUE, TRUE);
        PrintTitleToWindowMainState();
        return;
    }
    if (JOY_NEW(DPAD_LEFT))
        ChangeAbility(FALSE);
    else if (JOY_NEW(DPAD_RIGHT))
        ChangeAbility(TRUE);
}

static void ChangeNature(bool8 goingRight)
{
    struct Pokemon *mon = ReturnPartyMon();
    u16 species = sStatEditorDataPtr->speciesID;
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);
    u8 currentGender = GetGenderFromSpeciesAndPersonality(species, personality);
    u8 storedNature = GetMonData(mon, MON_DATA_HIDDEN_NATURE);
    u8 currentNature = (storedNature < NUM_NATURES) ? storedNature : GetNatureFromPersonality(personality);
    u8 previousNature = currentNature;

    if (goingRight)
        currentNature = (currentNature + 1) % NUM_NATURES;
    else
        currentNature = (currentNature + NUM_NATURES - 1) % NUM_NATURES;

    SetMonData(mon, MON_DATA_HIDDEN_NATURE, &currentNature);

    if (!StatEditor_ApplyPersonality(mon, species, currentNature, currentGender, &personality))
    {
        SetMonData(mon, MON_DATA_HIDDEN_NATURE, &previousNature);
        PlaySE(SE_FAILURE);
        return;
    }

    CalculateMonStats(mon);
    PrintMonStats();
    PlaySE(SE_SELECT);
}

static void Task_MenuEditingNature(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_StatEditorMain;
        PlaySE(SE_SELECT);
        sStatEditorDataPtr->inputMode = INPUT_EDIT_NATURE;
        StatEditor_UpdateHighlight(HIGHLIGHT_NATURE, HIGHLIGHT_NONE, TRUE, TRUE);
        PrintTitleToWindowMainState();
        return;
    }
    if (JOY_NEW(DPAD_LEFT))
        ChangeNature(FALSE);
    else if (JOY_NEW(DPAD_RIGHT))
        ChangeNature(TRUE);
}

static bool8 StatEditor_SetFriendshipValue(u16 value)
{
    struct Pokemon *mon = ReturnPartyMon();

    if (value > MAX_FRIENDSHIP)
        value = MAX_FRIENDSHIP;

    if (sStatEditorDataPtr->editingFriendship > MAX_FRIENDSHIP)
        sStatEditorDataPtr->editingFriendship = MAX_FRIENDSHIP;

    if (sStatEditorDataPtr->editingFriendship == value)
    {
        PlaySE(SE_FAILURE);
        return FALSE;
    }

    SetMonData(mon, MON_DATA_FRIENDSHIP, &value);
    sStatEditorDataPtr->editingFriendship = value;
    PrintMonStats();
    PlaySE(SE_SELECT);
    return TRUE;
}

static void ChangeFriendshipByDelta(s16 delta)
{
    s16 friendship = (s16)sStatEditorDataPtr->editingFriendship + delta;

    if (friendship < 0)
        friendship = 0;
    else if (friendship > MAX_FRIENDSHIP)
        friendship = MAX_FRIENDSHIP;

    StatEditor_SetFriendshipValue((u16)friendship);
}

static void Task_MenuEditingFriendship(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_StatEditorMain;
        PlaySE(SE_SELECT);
        sStatEditorDataPtr->inputMode = INPUT_EDIT_FRIENDSHIP;
        StatEditor_UpdateHighlight(HIGHLIGHT_FRIENDSHIP, HIGHLIGHT_NONE, TRUE, TRUE);
        PrintTitleToWindowMainState();
        return;
    }

    if (JOY_NEW(DPAD_UP) || JOY_NEW(R_BUTTON))
    {
        StatEditor_SetFriendshipValue(MAX_FRIENDSHIP);
    }
    else if (JOY_NEW(DPAD_DOWN) || JOY_NEW(L_BUTTON))
    {
        StatEditor_SetFriendshipValue(0);
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        ChangeFriendshipByDelta(-1);
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        ChangeFriendshipByDelta(1);
    }
}

static void ChangeAndUpdateStat()
{
    u16 currentStatEnum = selectedStatToStatEnum[sStatEditorDataPtr->selectedStat];
    u32 currentHP = 0;
    u32 oldMaxHP = 0;
    u32 amountHPLost = 0;
    s32 tempDifference = 0;
    u32 newDifference = 0;

    if (currentStatEnum == MON_DATA_HP_EV || currentStatEnum == MON_DATA_HP_IV)
    {
        currentHP = GetMonData(ReturnPartyMon(), MON_DATA_HP);
        oldMaxHP = GetMonData(ReturnPartyMon(), MON_DATA_MAX_HP);
        amountHPLost = oldMaxHP - currentHP;
    }

    SetMonData(ReturnPartyMon(), currentStatEnum, &(sStatEditorDataPtr->editingStat));
    CalculateMonStats(ReturnPartyMon());

    if ((amountHPLost > 0) && (currentHP != 0))
    {
        tempDifference = GetMonData(ReturnPartyMon(), MON_DATA_MAX_HP) - amountHPLost;
        if (tempDifference < 0)
            tempDifference = 0;
        newDifference = (u32) tempDifference;
        SetMonData(ReturnPartyMon(), MON_DATA_HP, &newDifference);
    }

    PrintMonStats();
}

#define EDIT_INPUT_INCREASE_STATE           0
#define EDIT_INPUT_MAX_INCREASE_STATE       1
#define EDIT_INPUT_DECREASE_STATE           2
#define EDIT_INPUT_MAX_DECREASE_STATE       3

#define STAT_MINIMUM          0  
#define IV_MAX_SINGLE_STAT    MAX_PER_STAT_IVS   
#define EV_MAX_SINGLE_STAT    MAX_PER_STAT_EVS   
#define EV_MAX_TOTAL          MAX_TOTAL_EVS          
                
#define EDITING_EVS     0
#define EDITING_IVS     1

#define CHECK_IF_STAT_CANT_INCREASE (((sStatEditorDataPtr->editingStat == ((sStatEditorDataPtr->selector_x == EDITING_EVS) ? (EV_MAX_SINGLE_STAT) : (IV_MAX_SINGLE_STAT))) \
                                     || ((sStatEditorDataPtr->selector_x == EDITING_EVS) && (sStatEditorDataPtr->evTotal == EV_MAX_TOTAL))))
/*
Breakdown of CHECK_IF_STAT_CANT_INCREASE
TLDR: Stat can't increase if you're either: at the maximum amount a stat can have (for both EVs and IVs), or for EVs, if you already hit the max total of EVs

 | (sStatEditorDataPtr->editingStat == ((sStatEditorDataPtr->selector_x == EDITING_EVS) ? (EV_MAX_SINGLE_STAT) : (IV_MAX_SINGLE_STAT))
  \> This part checks if the current stat being raised is already at max, whether it's an EV or IV

 | (sStatEditorDataPtr->selector_x == EDITING_EVS)
  \> This part checks if you're currently editing an EV

 | (sStatEditorDataPtr->evTotal == EV_MAX_TOTAL)
  \> This part checks if the Pokemon already has the max amount of EVs

 | ((sStatEditorDataPtr->selector_x == EDITING_EVS) && (sStatEditorDataPtr->evTotal == EV_MAX_TOTAL))
  \> Together, these two check if you're editing an EV and already at the maximum amount of EVs
*/
static void HandleEditingStatInput(u32 input)
{
    u16 iterator = 0;
    if((input <= EDIT_INPUT_MAX_INCREASE_STATE) && CHECK_IF_STAT_CANT_INCREASE)
    {
        PlaySE(SE_FAILURE);
        return;
    }

    if((input >= EDIT_INPUT_DECREASE_STATE) && (sStatEditorDataPtr->editingStat == STAT_MINIMUM))
    {
        PlaySE(SE_FAILURE);
        return;
    }

    #define INCREASE_DECREASE_AMOUNT 1

    switch(input)
    {
        case EDIT_INPUT_DECREASE_STATE:
            for (iterator = 0; iterator < INCREASE_DECREASE_AMOUNT; iterator++)
            {
                if(!(sStatEditorDataPtr->editingStat == STAT_MINIMUM))
                    sStatEditorDataPtr->editingStat--;
                else
                    break;
            }
            break;
       case EDIT_INPUT_MAX_DECREASE_STATE:
            sStatEditorDataPtr->editingStat = STAT_MINIMUM;
            break;
        case EDIT_INPUT_INCREASE_STATE:
            for (iterator = 0; iterator < INCREASE_DECREASE_AMOUNT; iterator++)
            {
                if(!CHECK_IF_STAT_CANT_INCREASE)
                    sStatEditorDataPtr->editingStat++;
                else
                    break;
            }
            break;
        case EDIT_INPUT_MAX_INCREASE_STATE:
            if((sStatEditorDataPtr->selector_x == EDITING_EVS))
            {
                if (EV_MAX_TOTAL - sStatEditorDataPtr->evTotal < EV_MAX_SINGLE_STAT)
                    sStatEditorDataPtr->editingStat += EV_MAX_TOTAL - sStatEditorDataPtr->evTotal;
                else
                    sStatEditorDataPtr->editingStat = EV_MAX_SINGLE_STAT;
                if(sStatEditorDataPtr->editingStat > EV_MAX_SINGLE_STAT)
                    sStatEditorDataPtr->editingStat = EV_MAX_SINGLE_STAT;
            }
            else
            {
                sStatEditorDataPtr->editingStat = IV_MAX_SINGLE_STAT;
            }
    }

    ChangeAndUpdateStat();
}

static void Task_MenuEditingStat(u8 taskId) // This function should be refactored to not be a hot mess
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_StatEditorMain;
        PlaySE(SE_SELECT);
        sStatEditorDataPtr->inputMode = INPUT_SELECT_STAT;
        StatEditor_UpdateStatSelectionDisplay();
        PrintTitleToWindowMainState();
        return;
    }
    if (JOY_NEW(DPAD_LEFT))
        HandleEditingStatInput(EDIT_INPUT_DECREASE_STATE);
    else if (JOY_NEW(DPAD_RIGHT))
        HandleEditingStatInput(EDIT_INPUT_INCREASE_STATE);
    else if (JOY_NEW(DPAD_UP) || JOY_NEW(R_BUTTON))
        HandleEditingStatInput(EDIT_INPUT_MAX_INCREASE_STATE);
    else if (JOY_NEW(DPAD_DOWN) || JOY_NEW(L_BUTTON))
        HandleEditingStatInput(EDIT_INPUT_MAX_DECREASE_STATE);
}
