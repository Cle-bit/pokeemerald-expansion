#ifndef GUARD_FISHING_GAME_H
#define GUARD_FISHING_GAME_H

//extern const u16 gBirchBagGrass_Pal[];
//extern const u32 gBirchBagTilemap[];
//extern const u32 gBirchGrassTilemap[];
//extern const u32 gBirchBagGrass_Gfx[];
//extern const u32 gPokeballSelection_Gfx[];

#define MON_ICON_WIDTH          16
#define MON_ICON_START_X        36
#define MON_ICON_MIN_X          26
#define MON_ICON_MAX_X          ((FISHING_AREA_WIDTH - MON_ICON_WIDTH) * 10)
#define MON_ICON_AREA_MIDDLE    (((MON_ICON_MAX_X - MON_ICON_MIN_X) / 2) + MON_ICON_MIN_X)
#define FISHING_BAR_Y           93
#define FISHING_BAR_START_X     51
#define FISHING_BAR_WIDTH       36
#define FISHING_AREA_WIDTH      202
#define FISHING_BAR_BOUNCINESS  1.3 // The greater the number, the less the bar will bounce when it hits the left side.
#define POSITION_ADJUSTMENT     10
#define FISHING_BAR_MAX_SPEED   50
#define BAR_SPEED_MODIFIER      (FISHING_BAR_MAX_SPEED / 25)
#define FISHING_BAR_MAX         ((FISHING_AREA_WIDTH - FISHING_BAR_WIDTH) * 10)

#define FISH_DIR_LEFT           0
#define FISH_DIR_RIGHT          1

enum {
    FISHING_MON_SPEED,
    FISHING_MON_SPEED_VARIABILITY,
    FISHING_MON_MOVE_DELAY,
    FISHING_MON_DELAY_VARIABILITY,
    FISHING_MON_DISTANCE,
    FISHING_MON_DIST_VARIABILITY
};

void CB2_InitFishingGame(void);

#endif // GUARD_FISHING_GAME_H
