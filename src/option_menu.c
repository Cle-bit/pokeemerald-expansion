#include "global.h"
#include "option_menu.h"
#include "bg.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "start_menu.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"
#include "string_util.h"
#include "event_data.h"

#define tMenuSelection      data[CURRENT_MENU_SELECTION]
#define tTextSpeed          data[MENUITEM_TEXTSPEED]
#define tBattleSceneOff     data[MENUITEM_BATTLESCENE]
#define tBattleStyle        data[MENUITEM_BATTLESTYLE]
#define tSound              data[MENUITEM_SOUND]
#define tButtonMode         data[MENUITEM_BUTTONMODE]
#define tWindowFrameType    data[MENUITEM_FRAMETYPE]
#define tDifficulty         data[MENUITEM_DIFFICULTY]
#define tExpSharing         data[MENUITEM_EXPSHARING]
#define tWildDouble         data[MENUITEM_WILDDOUBLE]
#define tBagUse             data[MENUITEM_BAGUSE]
#define tFollower           data[MENUITEM_FOLLOWER]
#define tMoveDescription    data[MENUITEM_MOVEDESCRIPTION]

enum
{
    CURRENT_MENU_SELECTION = 15,       // Index in the task array that stores the current page number
    // Page 1
    MENUITEM_TEXTSPEED = 0,
    MENUITEM_BATTLESCENE,
    MENUITEM_BATTLESTYLE,
    MENUITEM_SOUND,
    MENUITEM_BUTTONMODE,
    MENUITEM_FRAMETYPE,
    MENUITEM_CANCEL,
    MENUITEM_COUNT,
    // Page 2
    MENUITEM_DIFFICULTY = 0,
    MENUITEM_EXPSHARING,
    MENUITEM_WILDDOUBLE,
    MENUITEM_BAGUSE,
    MENUITEM_FOLLOWER,
    MENUITEM_MOVEDESCRIPTION,
    MENUITEM_CANCEL_PAGE2,
    MENUITEM_COUNT_PAGE2,
};

enum
{
    PAGE_1,
    PAGE_2,
};

enum
{
    WIN_HEADER,
    WIN_OPTIONS
};

#define RefreshOptionMenu                               \
{                                                       \
    SaveOptionMenuDataFromTask(taskId);                 \
    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));  \
    ClearStdWindowAndFrame(WIN_OPTIONS, FALSE);         \
    sCurrentPage = Process_ChangePage(sCurrentPage);    \
    gTasks[taskId].func = Task_ChangePage;              \
}

// Page 1
#define YPOS_TEXTSPEED    (MENUITEM_TEXTSPEED * 16)
#define YPOS_BATTLESCENE  (MENUITEM_BATTLESCENE * 16)
#define YPOS_BATTLESTYLE  (MENUITEM_BATTLESTYLE * 16)
#define YPOS_SOUND        (MENUITEM_SOUND * 16)
#define YPOS_BUTTONMODE   (MENUITEM_BUTTONMODE * 16)
#define YPOS_FRAMETYPE    (MENUITEM_FRAMETYPE * 16)

// Page 2
#define YPOS_DIFFICULTY         (MENUITEM_DIFFICULTY * 16)
#define YPOS_EXPSHARING         (MENUITEM_EXPSHARING * 16)
#define YPOS_WILDDOUBLE         (MENUITEM_WILDDOUBLE * 16)
#define YPOS_BAGUSE             (MENUITEM_BAGUSE * 16)
#define YPOS_FOLLOWER           (MENUITEM_FOLLOWER * 16)
#define YPOS_MOVEDESCRIPTION    (MENUITEM_MOVEDESCRIPTION * 16)

#define PAGE_COUNT 2

static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_OptionMenuProcessInput_Page2(u8 taskId);
static void Task_OptionMenuSave(u8 taskId);
static void Task_OptionMenuFadeOut(u8 taskId);
static void HighlightOptionMenuItem(u8 selection);
static u8 TextSpeed_ProcessInput(u8 selection);
static void TextSpeed_DrawChoices(u8 selection);
static u8 BattleScene_ProcessInput(u8 selection);
static void BattleScene_DrawChoices(u8 selection);
static u8 BattleStyle_ProcessInput(u8 selection);
static void BattleStyle_DrawChoices(u8 selection);
static u8   Difficulty_ProcessInput(u8 selection);
static void Difficulty_DrawChoices(u8 selection);
static u8   ExpSharing_ProcessInput(u8 selection);
static void ExpSharing_DrawChoices(u8 selection);

static u8   DoubleWild_ProcessInput(u8 selection);
static void DoubleWild_DrawChoices(u8 selection);
static u8   BagUse_ProcessInput(u8 selection);
static void BagUse_DrawChoices(u8 selection);
static u8   Follower_ProcessInput(u8 selection);
static void Follower_DrawChoices(u8 selection);
static u8   MoveDescription_ProcessInput(u8 selection);
static void MoveDescription_DrawChoices(u8 selection);

static u8 Sound_ProcessInput(u8 selection);
static void Sound_DrawChoices(u8 selection);
static u8 FrameType_ProcessInput(u8 selection);
static void FrameType_DrawChoices(u8 selection);
static u8 ButtonMode_ProcessInput(u8 selection);
static void ButtonMode_DrawChoices(u8 selection);
static void SaveOptionMenuDataFromTask(u8 taskId);
static void DrawHeaderText(void);
static void DrawTextOption(void);
static void DrawOptionMenuTexts(void);
static void DrawBgWindowFrames(void);

EWRAM_DATA static bool8 sArrowPressed = FALSE;
EWRAM_DATA static u8 sCurrentPage = 0;

static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text.gbapal");
// note: this is only used in the Japanese release
static const u8 sEqualSignGfx[] = INCBIN_U8("graphics/interface/option_menu_equals_sign.4bpp");

static const u8 *const sOptionMenuItemsNames[MENUITEM_COUNT] =
{
    [MENUITEM_TEXTSPEED]   = gText_TextSpeed,
    [MENUITEM_BATTLESCENE] = gText_BattleScene,
    [MENUITEM_BATTLESTYLE] = gText_BattleStyle,
    [MENUITEM_SOUND]       = gText_Sound,
    [MENUITEM_BUTTONMODE]  = gText_ButtonMode,
    [MENUITEM_FRAMETYPE]   = gText_Frame,
    [MENUITEM_CANCEL]      = gText_OptionMenuCancel,
};

static const u8 *const sOptionMenuItemsNames_Page2[MENUITEM_COUNT_PAGE2] =
{
    [MENUITEM_DIFFICULTY]      = gText_Difficulty,
    [MENUITEM_EXPSHARING]      = gText_ExpSharing,
    [MENUITEM_WILDDOUBLE]      = gText_WildDouble,
    [MENUITEM_BAGUSE]          = gText_BagUse,
    [MENUITEM_FOLLOWER]        = gText_Follower,
    [MENUITEM_MOVEDESCRIPTION] = gText_MoveDescription,
    [MENUITEM_CANCEL_PAGE2]    = gText_OptionMenuCancel,
};

typedef void (*OptionMenuProcess)(u8 taskId);
struct OptionMenuData
{
    const u8 *const *itemName;
    u8 menuItemCount;
    OptionMenuProcess menuProcess;
};

// Add your extra Page item names, their total num of items and their "input process" functions here
static const struct OptionMenuData sOptionMenuDataArray[] = 
{
    [PAGE_1] = {sOptionMenuItemsNames,          MENUITEM_COUNT,         Task_OptionMenuProcessInput},
    [PAGE_2] = {sOptionMenuItemsNames_Page2,    MENUITEM_COUNT_PAGE2,   Task_OptionMenuProcessInput_Page2},
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    [WIN_HEADER] = {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 26,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    [WIN_OPTIONS] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 5,
        .width = 26,
        .height = 14,
        .paletteNum = 1,
        .baseBlock = 0x36
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 0,
        .charBaseIndex = 1,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    }
};

static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};

static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// Edit ReadAllCurrentSettings() and DrawOptions() to account for all your options
static void ReadAllCurrentSettings(u8 taskId)
{
    gTasks[taskId].tMenuSelection = 0;
    
    switch (sCurrentPage){
        case PAGE_1:
            gTasks[taskId].tTextSpeed = gSaveBlock2Ptr->optionsTextSpeed;
            gTasks[taskId].tBattleSceneOff = gSaveBlock2Ptr->optionsBattleSceneOff;
            gTasks[taskId].tBattleStyle = gSaveBlock2Ptr->optionsBattleStyle;
            gTasks[taskId].tSound = gSaveBlock2Ptr->optionsSound;
            gTasks[taskId].tButtonMode = gSaveBlock2Ptr->optionsButtonMode;
            gTasks[taskId].tWindowFrameType = gSaveBlock2Ptr->optionsWindowFrameType;
            break;
        case PAGE_2:
            gTasks[taskId].tDifficulty = VarGet(VAR_DIFFICULTY_MODE);
            gTasks[taskId].tExpSharing = FlagGet(I_EXP_SHARE_FLAG);
            gTasks[taskId].tWildDouble = FlagGet(B_FLAG_FORCE_DOUBLE_WILD);
            gTasks[taskId].tBagUse     = FlagGet(B_FLAG_NO_BAG_USE);
            gTasks[taskId].tFollower   = FlagGet(B_FLAG_FOLLOWERS_ENABLED);
            gTasks[taskId].tMoveDescription = FlagGet(B_FLAG_MOVE_DESCRIPTION);
            break;
    }
}

static void DrawOptions(u8 taskId)
{
    ReadAllCurrentSettings(taskId);

    switch(sCurrentPage)
    {
        case PAGE_1:
            TextSpeed_DrawChoices(gTasks[taskId].tTextSpeed);
            BattleScene_DrawChoices(gTasks[taskId].tBattleSceneOff);
            BattleStyle_DrawChoices(gTasks[taskId].tBattleStyle);
            Sound_DrawChoices(gTasks[taskId].tSound);
            ButtonMode_DrawChoices(gTasks[taskId].tButtonMode);
            FrameType_DrawChoices(gTasks[taskId].tWindowFrameType);
            break;
        
        case PAGE_2:
            Difficulty_DrawChoices(gTasks[taskId].tDifficulty);
            ExpSharing_DrawChoices(gTasks[taskId].tExpSharing);
            DoubleWild_DrawChoices(gTasks[taskId].tWildDouble);
            BagUse_DrawChoices(gTasks[taskId].tBagUse);
            Follower_DrawChoices(gTasks[taskId].tFollower);
            MoveDescription_DrawChoices(gTasks[taskId].tMoveDescription);
            break;
    }
  
    HighlightOptionMenuItem(gTasks[taskId].data[CURRENT_MENU_SELECTION]);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

void CB2_InitOptionMenu(void)
{
    u8 taskId;

    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void *)(VRAM), VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sOptionMenuBgTemplates, ARRAY_COUNT(sOptionMenuBgTemplates));
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(2, 0, BG_COORD_SET);
        ChangeBgY(2, 0, BG_COORD_SET);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        InitWindows(sOptionMenuWinTemplates);
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_DARKEN);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 3:
        LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1A2);
        gMain.state++;
        break;
    case 4:
        LoadPalette(sOptionMenuBg_Pal, BG_PLTT_ID(0), sizeof(sOptionMenuBg_Pal));
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        gMain.state++;
        break;
    case 5:
        LoadPalette(sOptionMenuText_Pal, BG_PLTT_ID(1), sizeof(sOptionMenuText_Pal));
        gMain.state++;
        break;
    case 6:
        PutWindowTilemap(WIN_HEADER);
        DrawHeaderText();
        gMain.state++;
        break;
    case 7:
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(WIN_OPTIONS);
        DrawOptionMenuTexts();
        gMain.state++;
    case 9:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 10:
        taskId = CreateTask(Task_OptionMenuFadeIn, 0);
        DrawOptions(taskId);
        DrawTextOption();
        gMain.state++;
        break;
    case 11:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}

// Used to alter sCurrentPage
static u8 Process_ChangePage(u8 CurrentPage)
{
    if (JOY_NEW(R_BUTTON))
    {
        if (CurrentPage < PAGE_COUNT - 1)
            CurrentPage++;
        else
            CurrentPage = 0;
    }
    if (JOY_NEW(L_BUTTON))
    {
        if (CurrentPage != 0)
            CurrentPage--;
        else
            CurrentPage = PAGE_COUNT - 1;
    }

    return CurrentPage;
}

// Load a new page
static void Task_ChangePage(u8 taskId)
{
    DrawTextOption();
    PutWindowTilemap(WIN_OPTIONS);
    DrawOptionMenuTexts();
    DrawOptions(taskId);
    gTasks[taskId].func = Task_OptionMenuFadeIn;
}

// Add Your functions for other pages here
static void Task_OptionMenuFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = sOptionMenuDataArray[sCurrentPage].menuProcess;
}

static void Task_OptionMenuProcessInput(u8 taskId)
{
    if (JOY_NEW(L_BUTTON |R_BUTTON))
    {
        RefreshOptionMenu;
    }   
    else if (JOY_NEW(A_BUTTON))
    {
        if (gTasks[taskId].tMenuSelection == MENUITEM_CANCEL)
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (gTasks[taskId].tMenuSelection > 0)
            gTasks[taskId].tMenuSelection--;
        else
            gTasks[taskId].tMenuSelection = MENUITEM_CANCEL;
        HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (gTasks[taskId].tMenuSelection < MENUITEM_CANCEL)
            gTasks[taskId].tMenuSelection++;
        else
            gTasks[taskId].tMenuSelection = 0;
        HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
    else
    {
        u8 previousOption;

        switch (gTasks[taskId].tMenuSelection)
        {
        case MENUITEM_TEXTSPEED:
            previousOption = gTasks[taskId].tTextSpeed;
            gTasks[taskId].tTextSpeed = TextSpeed_ProcessInput(gTasks[taskId].tTextSpeed);

            if (previousOption != gTasks[taskId].tTextSpeed)
                TextSpeed_DrawChoices(gTasks[taskId].tTextSpeed);
            break;
        case MENUITEM_BATTLESCENE:
            previousOption = gTasks[taskId].tBattleSceneOff;
            gTasks[taskId].tBattleSceneOff = BattleScene_ProcessInput(gTasks[taskId].tBattleSceneOff);

            if (previousOption != gTasks[taskId].tBattleSceneOff)
                BattleScene_DrawChoices(gTasks[taskId].tBattleSceneOff);
            break;
        case MENUITEM_BATTLESTYLE:
            previousOption = gTasks[taskId].tBattleStyle;
            gTasks[taskId].tBattleStyle = BattleStyle_ProcessInput(gTasks[taskId].tBattleStyle);

            if (previousOption != gTasks[taskId].tBattleStyle)
                BattleStyle_DrawChoices(gTasks[taskId].tBattleStyle);
            break;
        case MENUITEM_SOUND:
            previousOption = gTasks[taskId].tSound;
            gTasks[taskId].tSound = Sound_ProcessInput(gTasks[taskId].tSound);

            if (previousOption != gTasks[taskId].tSound)
                Sound_DrawChoices(gTasks[taskId].tSound);
            break;
        case MENUITEM_BUTTONMODE:
            previousOption = gTasks[taskId].tButtonMode;
            gTasks[taskId].tButtonMode = ButtonMode_ProcessInput(gTasks[taskId].tButtonMode);

            if (previousOption != gTasks[taskId].tButtonMode)
                ButtonMode_DrawChoices(gTasks[taskId].tButtonMode);
            break;
        case MENUITEM_FRAMETYPE:
            previousOption = gTasks[taskId].tWindowFrameType;
            gTasks[taskId].tWindowFrameType = FrameType_ProcessInput(gTasks[taskId].tWindowFrameType);

            if (previousOption != gTasks[taskId].tWindowFrameType)
                FrameType_DrawChoices(gTasks[taskId].tWindowFrameType);
            break;
        default:
            return;
        }

        if (sArrowPressed)
        {
            sArrowPressed = FALSE;
            CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
        }
    }
}

// Edit this function to account for more options on page 2
static void Task_OptionMenuProcessInput_Page2(u8 taskId)
{
    if (JOY_NEW(L_BUTTON |R_BUTTON))
    {
        RefreshOptionMenu;
    }
    else if (JOY_NEW(A_BUTTON))
    {
       if (gTasks[taskId].tMenuSelection == MENUITEM_CANCEL_PAGE2)
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (gTasks[taskId].data[CURRENT_MENU_SELECTION] > 0)
            gTasks[taskId].data[CURRENT_MENU_SELECTION]--;
        else
            gTasks[taskId].data[CURRENT_MENU_SELECTION] = MENUITEM_CANCEL_PAGE2;
        HighlightOptionMenuItem(gTasks[taskId].data[CURRENT_MENU_SELECTION]);
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (gTasks[taskId].data[CURRENT_MENU_SELECTION] < MENUITEM_CANCEL_PAGE2)
            gTasks[taskId].data[CURRENT_MENU_SELECTION]++;
        else
            gTasks[taskId].data[CURRENT_MENU_SELECTION] = 0;
        HighlightOptionMenuItem(gTasks[taskId].data[CURRENT_MENU_SELECTION]);
    }
    else
    {
        u8 previousOption;

        switch (gTasks[taskId].data[CURRENT_MENU_SELECTION])
        {
        case MENUITEM_DIFFICULTY:
            previousOption = gTasks[taskId].tDifficulty;
            gTasks[taskId].tDifficulty = Difficulty_ProcessInput(gTasks[taskId].tDifficulty);

            if (previousOption != gTasks[taskId].tDifficulty)
                Difficulty_DrawChoices(gTasks[taskId].tDifficulty);
            break;
        case MENUITEM_EXPSHARING:
            previousOption = gTasks[taskId].tExpSharing;
            gTasks[taskId].tExpSharing = ExpSharing_ProcessInput(gTasks[taskId].tExpSharing);

            if (previousOption != gTasks[taskId].tExpSharing)
                ExpSharing_DrawChoices(gTasks[taskId].tExpSharing);
            break;
        case MENUITEM_WILDDOUBLE:
            previousOption = gTasks[taskId].tWildDouble;
            gTasks[taskId].tWildDouble = DoubleWild_ProcessInput(gTasks[taskId].tWildDouble);

            if (previousOption != gTasks[taskId].tWildDouble)
                DoubleWild_DrawChoices(gTasks[taskId].tWildDouble);
            break;
        case MENUITEM_BAGUSE:
            previousOption = gTasks[taskId].tBagUse;
            gTasks[taskId].tBagUse = BagUse_ProcessInput(gTasks[taskId].tBagUse);

            if (previousOption != gTasks[taskId].tBagUse)
                BagUse_DrawChoices(gTasks[taskId].tBagUse);
            break;
        case MENUITEM_FOLLOWER:
            previousOption = gTasks[taskId].tFollower;
            gTasks[taskId].tFollower = Follower_ProcessInput(gTasks[taskId].tFollower);

            if (previousOption != gTasks[taskId].tFollower)
                Follower_DrawChoices(gTasks[taskId].tFollower);
            break;
        case MENUITEM_MOVEDESCRIPTION:
            previousOption = gTasks[taskId].tMoveDescription;
            gTasks[taskId].tMoveDescription = MoveDescription_ProcessInput(gTasks[taskId].tMoveDescription);

            if (previousOption != gTasks[taskId].tMoveDescription)
                MoveDescription_DrawChoices(gTasks[taskId].tMoveDescription);
            break;
        }

        if (sArrowPressed)
        {
            sArrowPressed = FALSE;
            CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
        }
    }
}

// Edit this to account for saving the data of your options
static void SaveOptionMenuDataFromTask(u8 taskId)
{
    switch (sCurrentPage){
        case PAGE_1:
            gSaveBlock2Ptr->optionsTextSpeed = gTasks[taskId].tTextSpeed;
            gSaveBlock2Ptr->optionsBattleSceneOff = gTasks[taskId].tBattleSceneOff;
            gSaveBlock2Ptr->optionsBattleStyle = gTasks[taskId].tBattleStyle;
            gSaveBlock2Ptr->optionsSound = gTasks[taskId].tSound;
            gSaveBlock2Ptr->optionsButtonMode = gTasks[taskId].tButtonMode;
            gSaveBlock2Ptr->optionsWindowFrameType = gTasks[taskId].tWindowFrameType;
            break;
        case PAGE_2:
            VarSet(VAR_DIFFICULTY_MODE, gTasks[taskId].tDifficulty);
            gTasks[taskId].tExpSharing == 0 ? FlagClear(I_EXP_SHARE_FLAG) : FlagSet(I_EXP_SHARE_FLAG);
            gTasks[taskId].tWildDouble == 0 ? FlagClear(B_FLAG_FORCE_DOUBLE_WILD) : FlagSet(B_FLAG_FORCE_DOUBLE_WILD);
            gTasks[taskId].tBagUse == 0 ? FlagClear(B_FLAG_NO_BAG_USE) : FlagSet(B_FLAG_NO_BAG_USE);
            gTasks[taskId].tFollower == 0 ? FlagClear(B_FLAG_FOLLOWERS_ENABLED) : FlagSet(B_FLAG_FOLLOWERS_ENABLED);
            gTasks[taskId].tMoveDescription == 0 ? FlagClear(B_FLAG_MOVE_DESCRIPTION) : FlagSet(B_FLAG_MOVE_DESCRIPTION);
            break;
    }

    return;
}

static void Task_OptionMenuSave(u8 taskId)
{
    SaveOptionMenuDataFromTask(taskId);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_OptionMenuFadeOut;
}

static void Task_OptionMenuFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        SetMainCallback2(gMain.savedCallback);
    }
}

static void HighlightOptionMenuItem(u8 index)
{
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(16, DISPLAY_WIDTH - 16));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(index * 16 + 40, index * 16 + 56));
}

static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style)
{
    u8 dst[16];
    u16 i;

    for (i = 0; *text != EOS && i < ARRAY_COUNT(dst) - 1; i++)
        dst[i] = *(text++);

    if (style != 0)
    {
        dst[2] = TEXT_COLOR_RED;
        dst[5] = TEXT_COLOR_LIGHT_RED;
    }

    dst[i] = EOS;
    AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, dst, x, y + 1, TEXT_SKIP_DRAW, NULL);
}

static u8 TextSpeed_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection <= 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = 2;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void TextSpeed_DrawChoices(u8 selection)
{
    u8 styles[3];
    s32 widthSlow, widthMid, widthFast, xMid;

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_TextSpeedSlow, 104, YPOS_TEXTSPEED, styles[0]);

    widthSlow = GetStringWidth(FONT_NORMAL, gText_TextSpeedSlow, 0);
    widthMid = GetStringWidth(FONT_NORMAL, gText_TextSpeedMid, 0);
    widthFast = GetStringWidth(FONT_NORMAL, gText_TextSpeedFast, 0);

    widthMid -= 94;
    xMid = (widthSlow - widthMid - widthFast) / 2 + 104;
    DrawOptionMenuChoice(gText_TextSpeedMid, xMid, YPOS_TEXTSPEED, styles[1]);

    DrawOptionMenuChoice(gText_TextSpeedFast, GetStringRightAlignXOffset(FONT_NORMAL, gText_TextSpeedFast, 198), YPOS_TEXTSPEED, styles[2]);
}

static u8 BattleScene_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void BattleScene_DrawChoices(u8 selection)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOn, 104, YPOS_BATTLESCENE, styles[0]);
    DrawOptionMenuChoice(gText_BattleSceneOff, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_BATTLESCENE, styles[1]);
}

static u8 BattleStyle_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void BattleStyle_DrawChoices(u8 selection)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleStyleShift, 104, YPOS_BATTLESTYLE, styles[0]);
    DrawOptionMenuChoice(gText_BattleStyleSet, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleStyleSet, 198), YPOS_BATTLESTYLE, styles[1]);
}

static u8 Sound_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        SetPokemonCryStereo(selection);
        sArrowPressed = TRUE;
    }

    return selection;
}

static void Sound_DrawChoices(u8 selection)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_SoundMono, 104, YPOS_SOUND, styles[0]);
    DrawOptionMenuChoice(gText_SoundStereo, GetStringRightAlignXOffset(FONT_NORMAL, gText_SoundStereo, 198), YPOS_SOUND, styles[1]);
}

static u8 FrameType_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < WINDOW_FRAMES_COUNT - 1)
            selection++;
        else
            selection = 0;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = WINDOW_FRAMES_COUNT - 1;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        sArrowPressed = TRUE;
    }
    return selection;
}

static void FrameType_DrawChoices(u8 selection)
{
    u8 text[16] = {EOS};
    u8 n = selection + 1;
    u16 i;

    for (i = 0; gText_FrameTypeNumber[i] != EOS && i <= 5; i++)
        text[i] = gText_FrameTypeNumber[i];

    // Convert a number to decimal string
    if (n / 10 != 0)
    {
        text[i] = n / 10 + CHAR_0;
        i++;
        text[i] = n % 10 + CHAR_0;
        i++;
    }
    else
    {
        text[i] = n % 10 + CHAR_0;
        i++;
        text[i] = CHAR_SPACER;
        i++;
    }

    text[i] = EOS;

    DrawOptionMenuChoice(gText_FrameType, 104, YPOS_FRAMETYPE, 0);
    DrawOptionMenuChoice(text, 128, YPOS_FRAMETYPE, 1);
}

static u8 ButtonMode_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection <= 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = 2;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void ButtonMode_DrawChoices(u8 selection)
{
    s32 widthNormal, widthLR, widthLA, xLR;
    u8 styles[3];

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_ButtonTypeNormal, 104, YPOS_BUTTONMODE, styles[0]);

    widthNormal = GetStringWidth(FONT_NORMAL, gText_ButtonTypeNormal, 0);
    widthLR = GetStringWidth(FONT_NORMAL, gText_ButtonTypeLR, 0);
    widthLA = GetStringWidth(FONT_NORMAL, gText_ButtonTypeLEqualsA, 0);

    widthLR -= 94;
    xLR = (widthNormal - widthLR - widthLA) / 2 + 104;
    DrawOptionMenuChoice(gText_ButtonTypeLR, xLR, YPOS_BUTTONMODE, styles[1]);

    DrawOptionMenuChoice(gText_ButtonTypeLEqualsA, GetStringRightAlignXOffset(FONT_NORMAL, gText_ButtonTypeLEqualsA, 198), YPOS_BUTTONMODE, styles[2]);
}

static u8 Difficulty_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection <= 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = 2;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void Difficulty_DrawChoices(u8 selection)
{
    u8 styles[3];
    /* FALSE = Have the middle text be exactly in between where the first text ends and second text begins.
       TRUE = Have the mid text be in the middle of the frame, ignoring the first and last text size. 
    Setting it to FALSE is how vanilla code does it for the TEST SPEED, but the layout looks off-center if there's
    multiple three-item options in one page and the length of characters for the first and last choices
    of one of the options mismatch.*/
    bool8 centerMid = TRUE;
    s32 widthEasy, widthNormal, widthHard, xMid;

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_DifficultyEasy, 104, YPOS_DIFFICULTY, styles[0]);

    widthNormal = GetStringWidth(FONT_NORMAL, gText_DifficultyNormal, 0);
    if (centerMid){
        xMid = (94 - widthNormal) / 2 + 104;
    }
    else{
        widthEasy = GetStringWidth(FONT_NORMAL, gText_DifficultyEasy, 0);
        widthHard = GetStringWidth(FONT_NORMAL, gText_DifficultyHard, 0);
        widthNormal -= 94;
        xMid = (widthEasy - widthNormal - widthHard) / 2 + 104;
    }

    DrawOptionMenuChoice(gText_DifficultyNormal, xMid, YPOS_DIFFICULTY, styles[1]);

    DrawOptionMenuChoice(gText_DifficultyHard, GetStringRightAlignXOffset(FONT_NORMAL, gText_DifficultyHard, 198), YPOS_DIFFICULTY, styles[2]);
}

static u8 ExpSharing_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void ExpSharing_DrawChoices(u8 selection)
{
    u8 styles[2];
    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;
    DrawOptionMenuChoice(gText_ExpSharingOff, 104, YPOS_EXPSHARING, styles[0]);
    DrawOptionMenuChoice(gText_ExpSharingon, GetStringRightAlignXOffset(FONT_NORMAL, gText_ExpSharingon, 198), YPOS_EXPSHARING, styles[1]);
}

static u8 DoubleWild_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void DoubleWild_DrawChoices(u8 selection)
{
    u8 styles[2];
    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;
    DrawOptionMenuChoice(gText_WildDoubleoff, 104, YPOS_WILDDOUBLE, styles[0]);
    DrawOptionMenuChoice(gText_WildDoubleon, GetStringRightAlignXOffset(FONT_NORMAL, gText_WildDoubleon, 198), YPOS_WILDDOUBLE, styles[1]);
}

static u8 BagUse_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void BagUse_DrawChoices(u8 selection)
{
    u8 styles[2];
    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;
    DrawOptionMenuChoice(gText_BagUseoff, 104, YPOS_BAGUSE, styles[0]);
    DrawOptionMenuChoice(gText_BagUseon, GetStringRightAlignXOffset(FONT_NORMAL, gText_BagUseon, 198), YPOS_BAGUSE, styles[1]);
}

static u8 Follower_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void Follower_DrawChoices(u8 selection)
{
    u8 styles[2];
    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;
    DrawOptionMenuChoice(gText_Followeroff, 104, YPOS_FOLLOWER, styles[0]);
    DrawOptionMenuChoice(gText_Followeron, GetStringRightAlignXOffset(FONT_NORMAL, gText_Followeron, 198), YPOS_FOLLOWER, styles[1]);
}

static u8 MoveDescription_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void MoveDescription_DrawChoices(u8 selection)
{
    u8 styles[2];
    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;
    DrawOptionMenuChoice(gText_MoveDescriptionoff, 104, YPOS_MOVEDESCRIPTION, styles[0]);
    DrawOptionMenuChoice(gText_MoveDescriptionon, GetStringRightAlignXOffset(FONT_NORMAL, gText_MoveDescriptionon, 198), YPOS_MOVEDESCRIPTION, styles[1]);
}

static void DrawHeaderText(void)
{
    FillWindowPixelBuffer(WIN_HEADER, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, gText_Option, 8, 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_HEADER, COPYWIN_FULL);
}

static void DrawTextOption(void)
 {
    u32 i, widthOptions, xMid;
    u8 pageDots[(2 * PAGE_COUNT) - 1] = _("");  // Array size should be at least (2 * PAGE_COUNT) -1
    widthOptions = GetStringWidth(FONT_NORMAL, gText_Option, 0);

    for (i = 0; i < PAGE_COUNT; i++)
    {
        if (i == sCurrentPage)
            StringAppend(pageDots, gText_LargeDot);
        else
            StringAppend(pageDots, gText_SmallDot);
        
        if (i < PAGE_COUNT - 1)
            StringAppend(pageDots, gText_Space);            
    }
    xMid = (8 + widthOptions + 5);
    FillWindowPixelBuffer(WIN_HEADER, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, gText_Option, 8, 1, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, pageDots, xMid, 1, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, gText_PageNav, GetStringRightAlignXOffset(FONT_NORMAL, gText_PageNav, 198), 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_HEADER, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(void)
{
    u8 i, items;
    const u8* const* menu = NULL;

    items = sOptionMenuDataArray[sCurrentPage].menuItemCount;
    menu = sOptionMenuDataArray[sCurrentPage].itemName;
 
    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < items; i++)
        AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, menu[i], 8, (i * 16) + 1, TEXT_SKIP_DRAW, NULL);
        CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

#define TILE_TOP_CORNER_L 0x1A2
#define TILE_TOP_EDGE     0x1A3
#define TILE_TOP_CORNER_R 0x1A4
#define TILE_LEFT_EDGE    0x1A5
#define TILE_RIGHT_EDGE   0x1A7
#define TILE_BOT_CORNER_L 0x1A8
#define TILE_BOT_EDGE     0x1A9
#define TILE_BOT_CORNER_R 0x1AA

static void DrawBgWindowFrames(void)
{
    //                     bg, tile,              x, y, width, height, palNum
    // Draw title window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  0, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1,  3,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2,  3, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28,  3,  1,  1,  7);

    // Draw options list window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  4, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  5,  1, 18,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  5,  1, 18,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}
