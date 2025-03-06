#include "global.h"
#include "battle.h"
#include "battle_factory.h"
#include "battle_factory_screen.h"
#include "event_data.h"
#include "battle_setup.h"
#include "overworld.h"
#include "frontier_util.h"
#include "battle_tower.h"
#include "random.h"
#include "constants/battle_ai.h"
#include "constants/battle_factory.h"
#include "constants/battle_frontier.h"
#include "constants/battle_frontier_mons.h"
#include "constants/battle_tent.h"
#include "constants/frontier_util.h"
#include "constants/layouts.h"
#include "constants/trainers.h"
#include "constants/moves.h"
#include "constants/items.h"

static bool8 sPerformedRentalSwap;

static void InitFactoryChallenge(void);
static void GetBattleFactoryData(void);
static void SetBattleFactoryData(void);
static void SaveFactoryChallenge(void);
static void FactoryDummy1(void);
static void FactoryDummy2(void);
static void SelectInitialRentalMons(void);
static void SwapRentalMons(void);
static void SetPerformedRentalSwap(void);
static void SetRentalsToOpponentParty(void);
static void SetPlayerAndOpponentParties(void);
static void SetOpponentGfxVar(void);
static void GenerateOpponentMons(void);
static void GenerateInitialRentalMons(void);
static void GetOpponentMostCommonMonType(void);
static void GetOpponentBattleStyle(void);
static void RestorePlayerPartyHeldItems(void);
static u16 GetFactoryMonId(u32 WinStreak, bool8 useBetterRange);
static u8 GetMoveBattleStyle(u16 move);

// Number of moves needed on the team to be considered using a certain battle style
static const u8 sRequiredMoveCounts[FACTORY_NUM_STYLES - 1] = {
    [FACTORY_STYLE_PREPARATION - 1]   = 2,
    [FACTORY_STYLE_SLOW_STEADY - 1]   = 2,
    [FACTORY_STYLE_ENDURANCE - 1]     = 2,
    [FACTORY_STYLE_HIGH_RISK - 1]     = 2,
    [FACTORY_STYLE_WEAKENING - 1]     = 2,
    [FACTORY_STYLE_UNPREDICTABLE - 1] = 2,
    [FACTORY_STYLE_WEATHER - 1]       = 2
};

static const u16 sMoves_TotalPreparation[] =
{
    MOVE_SWORDS_DANCE, MOVE_GROWTH, MOVE_MEDITATE, MOVE_AGILITY, MOVE_DOUBLE_TEAM, MOVE_HARDEN,
    MOVE_MINIMIZE, MOVE_WITHDRAW, MOVE_DEFENSE_CURL, MOVE_BARRIER, MOVE_FOCUS_ENERGY, MOVE_AMNESIA,
    MOVE_ACID_ARMOR, MOVE_SHARPEN, MOVE_CONVERSION, MOVE_CONVERSION_2, MOVE_BELLY_DRUM, MOVE_PSYCH_UP, MOVE_BATON_PASS,
    MOVE_CHARGE, MOVE_SNATCH, MOVE_TAIL_GLOW, MOVE_COSMIC_POWER, MOVE_IRON_DEFENSE, MOVE_HOWL, MOVE_BULK_UP, MOVE_CALM_MIND, MOVE_DRAGON_DANCE,
    MOVE_NONE
};

static const u16 sMoves_ImpossibleToPredict[] =
{
    MOVE_MIMIC, MOVE_METRONOME, MOVE_MIRROR_MOVE, MOVE_TRANSFORM, MOVE_SUBSTITUTE, MOVE_SKETCH, MOVE_CURSE,
    MOVE_PRESENT, MOVE_FOLLOW_ME, MOVE_TRICK, MOVE_ROLE_PLAY, MOVE_ASSIST, MOVE_SKILL_SWAP, MOVE_CAMOUFLAGE,
    MOVE_NONE
};

static const u16 sMoves_WeakeningTheFoe[] =
{
    MOVE_SAND_ATTACK, MOVE_TAIL_WHIP, MOVE_LEER, MOVE_GROWL, MOVE_STRING_SHOT, MOVE_SCREECH, MOVE_SMOKESCREEN, MOVE_KINESIS,
    MOVE_FLASH, MOVE_COTTON_SPORE, MOVE_SPITE, MOVE_SCARY_FACE, MOVE_CHARM, MOVE_KNOCK_OFF, MOVE_SWEET_SCENT, MOVE_FEATHER_DANCE,
    MOVE_FAKE_TEARS, MOVE_METAL_SOUND, MOVE_TICKLE,
    MOVE_NONE
};

static const u16 sMoves_HighRiskHighReturn[] =
{
    MOVE_GUILLOTINE, MOVE_HORN_DRILL, MOVE_DOUBLE_EDGE, MOVE_HYPER_BEAM, MOVE_COUNTER, MOVE_FISSURE,
    MOVE_BIDE, MOVE_SELF_DESTRUCT, MOVE_SKY_ATTACK, MOVE_EXPLOSION, MOVE_FLAIL, MOVE_REVERSAL, MOVE_DESTINY_BOND,
    MOVE_PERISH_SONG, MOVE_PAIN_SPLIT, MOVE_MIRROR_COAT, MOVE_MEMENTO, MOVE_GRUDGE, MOVE_FACADE, MOVE_FOCUS_PUNCH,
    MOVE_BLAST_BURN, MOVE_HYDRO_CANNON, MOVE_OVERHEAT, MOVE_FRENZY_PLANT, MOVE_PSYCHO_BOOST, MOVE_VOLT_TACKLE,
    MOVE_NONE
};

static const u16 sMoves_Endurance[] =
{
    MOVE_MIST, MOVE_RECOVER, MOVE_LIGHT_SCREEN, MOVE_HAZE, MOVE_REFLECT, MOVE_SOFT_BOILED, MOVE_REST, MOVE_PROTECT,
    MOVE_DETECT, MOVE_ENDURE, MOVE_MILK_DRINK, MOVE_HEAL_BELL, MOVE_SAFEGUARD, MOVE_MORNING_SUN,
    MOVE_SYNTHESIS, MOVE_MOONLIGHT, MOVE_SWALLOW, MOVE_WISH, MOVE_INGRAIN, MOVE_MAGIC_COAT, MOVE_RECYCLE, MOVE_REFRESH,
    MOVE_MUD_SPORT, MOVE_SLACK_OFF, MOVE_AROMATHERAPY, MOVE_WATER_SPORT,
    MOVE_NONE
};

static const u16 sMoves_SlowAndSteady[] =
{
    MOVE_SING, MOVE_SUPERSONIC, MOVE_DISABLE, MOVE_LEECH_SEED, MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER,
    MOVE_THUNDER_WAVE, MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_GLARE, MOVE_POISON_GAS, MOVE_LOVELY_KISS, MOVE_SPORE,
    MOVE_SPIDER_WEB, MOVE_SWEET_KISS, MOVE_SPIKES, MOVE_SWAGGER, MOVE_MEAN_LOOK, MOVE_ATTRACT, MOVE_ENCORE, MOVE_TORMENT,
    MOVE_FLATTER, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_YAWN, MOVE_IMPRISON, MOVE_SNATCH, MOVE_TEETER_DANCE, MOVE_GRASS_WHISTLE, MOVE_BLOCK,
    MOVE_NONE
};

static const u16 sMoves_DependsOnTheBattlesFlow[] =
{
    MOVE_SANDSTORM, MOVE_RAIN_DANCE, MOVE_SUNNY_DAY, MOVE_HAIL, MOVE_WEATHER_BALL, MOVE_TAILWIND, MOVE_TRICK_ROOM, MOVE_MAGIC_ROOM, MOVE_WONDER_ROOM,
    MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_TOXIC_SPIKES, MOVE_STICKY_WEB, 
    MOVE_NONE
};

// Excludes FACTORY_STYLE_NONE
static const u16 *const sMoveStyles[FACTORY_NUM_STYLES - 1] =
{
    [FACTORY_STYLE_PREPARATION - 1]   = sMoves_TotalPreparation,
    [FACTORY_STYLE_SLOW_STEADY - 1]   = sMoves_SlowAndSteady,
    [FACTORY_STYLE_ENDURANCE - 1]     = sMoves_Endurance,
    [FACTORY_STYLE_HIGH_RISK - 1]     = sMoves_HighRiskHighReturn,
    [FACTORY_STYLE_WEAKENING - 1]     = sMoves_WeakeningTheFoe,
    [FACTORY_STYLE_UNPREDICTABLE - 1] = sMoves_ImpossibleToPredict,
    [FACTORY_STYLE_WEATHER - 1]       = sMoves_DependsOnTheBattlesFlow,
};

static void (* const sBattleFactoryFunctions[])(void) =
{
    [BATTLE_FACTORY_FUNC_INIT]                   = InitFactoryChallenge,
    [BATTLE_FACTORY_FUNC_GET_DATA]               = GetBattleFactoryData,
    [BATTLE_FACTORY_FUNC_SET_DATA]               = SetBattleFactoryData,
    [BATTLE_FACTORY_FUNC_SAVE]                   = SaveFactoryChallenge,
    [BATTLE_FACTORY_FUNC_NULL]                   = FactoryDummy1,
    [BATTLE_FACTORY_FUNC_NULL2]                  = FactoryDummy2,
    [BATTLE_FACTORY_FUNC_SELECT_RENT_MONS]       = SelectInitialRentalMons,
    [BATTLE_FACTORY_FUNC_SWAP_RENT_MONS]         = SwapRentalMons,
    [BATTLE_FACTORY_FUNC_SET_SWAPPED]            = SetPerformedRentalSwap,
    [BATTLE_FACTORY_FUNC_SET_OPPONENT_MONS]      = SetRentalsToOpponentParty,
    [BATTLE_FACTORY_FUNC_SET_PARTIES]            = SetPlayerAndOpponentParties,
    [BATTLE_FACTORY_FUNC_SET_OPPONENT_GFX]       = SetOpponentGfxVar,
    [BATTLE_FACTORY_FUNC_GENERATE_OPPONENT_MONS] = GenerateOpponentMons,
    [BATTLE_FACTORY_FUNC_GENERATE_RENTAL_MONS]   = GenerateInitialRentalMons,
    [BATTLE_FACTORY_FUNC_GET_OPPONENT_MON_TYPE]  = GetOpponentMostCommonMonType,
    [BATTLE_FACTORY_FUNC_GET_OPPONENT_STYLE]     = GetOpponentBattleStyle,
    [BATTLE_FACTORY_FUNC_RESET_HELD_ITEMS]       = RestorePlayerPartyHeldItems,
};

static const u32 sWinStreakFlags[][2] =
{
    {STREAK_FACTORY_SINGLES_50, STREAK_FACTORY_SINGLES_OPEN},
    {STREAK_FACTORY_DOUBLES_50, STREAK_FACTORY_DOUBLES_OPEN},
};

static const u32 sWinStreakMasks[][2] =
{
    {~(STREAK_FACTORY_SINGLES_50), ~(STREAK_FACTORY_SINGLES_OPEN)},
    {~(STREAK_FACTORY_DOUBLES_50), ~(STREAK_FACTORY_DOUBLES_OPEN)},
};

static const u8 sFixedIVTable[][2] =
{
    {3, 6},
    {6, 9},
    {9, 12},
    {12, 15},
    {15, 18},
    {21, 31},
    {31, 31},
    {31, 31},
};

static const u16 sInitialRentalMonRanges[][2] =
{
    // Level 50

};

// 工厂测试模式专用宝可梦列表
static const u16 factoryMonsGen9[] = {
    FRONTIER_MON_COBALION_1, FRONTIER_MON_COBALION_2, FRONTIER_MON_COBALION_3, FRONTIER_MON_COBALION_4,
    FRONTIER_MON_TERRAKION_1, FRONTIER_MON_TERRAKION_2, FRONTIER_MON_TERRAKION_3, FRONTIER_MON_TERRAKION_4,
    FRONTIER_MON_VIRIZION_1, FRONTIER_MON_VIRIZION_2, FRONTIER_MON_VIRIZION_3, FRONTIER_MON_VIRIZION_4,
    FRONTIER_MON_TORNADUS_INCARNATE_1, FRONTIER_MON_TORNADUS_INCARNATE_2, FRONTIER_MON_TORNADUS_INCARNATE_3,
    FRONTIER_MON_THUNDURUS_INCARNATE_1, FRONTIER_MON_THUNDURUS_INCARNATE_2, FRONTIER_MON_THUNDURUS_INCARNATE_3,
    FRONTIER_MON_LANDORUS_INCARNATE_1, FRONTIER_MON_LANDORUS_INCARNATE_2, FRONTIER_MON_LANDORUS_INCARNATE_3,
    FRONTIER_MON_ENAMORUS_INCARNATE_1, FRONTIER_MON_ENAMORUS_INCARNATE_2,
    FRONTIER_MON_TAPU_KOKO_1, FRONTIER_MON_TAPU_KOKO_2, FRONTIER_MON_TAPU_KOKO_3, FRONTIER_MON_TAPU_KOKO_4,
    FRONTIER_MON_TAPU_LELE_1, FRONTIER_MON_TAPU_LELE_2, FRONTIER_MON_TAPU_LELE_3, FRONTIER_MON_TAPU_LELE_4,
    FRONTIER_MON_TAPU_BULU_1, FRONTIER_MON_TAPU_BULU_2, FRONTIER_MON_TAPU_BULU_3, FRONTIER_MON_TAPU_BULU_4,
    FRONTIER_MON_TAPU_FINI_1, FRONTIER_MON_TAPU_FINI_2, FRONTIER_MON_TAPU_FINI_3, FRONTIER_MON_TAPU_FINI_4,
    FRONTIER_MON_NIHILEGO_1, FRONTIER_MON_NIHILEGO_2, FRONTIER_MON_NIHILEGO_3, FRONTIER_MON_NIHILEGO_4,
    FRONTIER_MON_BUZZWOLE_1, FRONTIER_MON_BUZZWOLE_2, FRONTIER_MON_BUZZWOLE_3, FRONTIER_MON_BUZZWOLE_4,
    FRONTIER_MON_PHEROMOSA_1, FRONTIER_MON_PHEROMOSA_2, FRONTIER_MON_PHEROMOSA_3, FRONTIER_MON_PHEROMOSA_4, FRONTIER_MON_PHEROMOSA_5,
    FRONTIER_MON_XURKITREE_1, FRONTIER_MON_XURKITREE_2, FRONTIER_MON_XURKITREE_3, FRONTIER_MON_XURKITREE_4,
    FRONTIER_MON_CELESTEELA_1, FRONTIER_MON_CELESTEELA_2, FRONTIER_MON_CELESTEELA_3, FRONTIER_MON_CELESTEELA_4,
    FRONTIER_MON_KARTANA_1, FRONTIER_MON_KARTANA_2, FRONTIER_MON_KARTANA_3, FRONTIER_MON_KARTANA_4,
    FRONTIER_MON_GUZZLORD_1, FRONTIER_MON_GUZZLORD_2, FRONTIER_MON_GUZZLORD_3, FRONTIER_MON_GUZZLORD_4,
    FRONTIER_MON_NAGANADEL_1, FRONTIER_MON_NAGANADEL_2, FRONTIER_MON_NAGANADEL_3, FRONTIER_MON_NAGANADEL_4,
    FRONTIER_MON_STAKATAKA_1, FRONTIER_MON_STAKATAKA_2, FRONTIER_MON_STAKATAKA_3, FRONTIER_MON_STAKATAKA_4,
    FRONTIER_MON_BLACEPHALON_1, FRONTIER_MON_BLACEPHALON_2, FRONTIER_MON_BLACEPHALON_3, FRONTIER_MON_BLACEPHALON_4,
    FRONTIER_MON_MELMETAL_1, FRONTIER_MON_MELMETAL_2, FRONTIER_MON_MELMETAL_3, FRONTIER_MON_MELMETAL_4, FRONTIER_MON_MELMETAL_5, FRONTIER_MON_MELMETAL_6,
    FRONTIER_MON_KLEAVOR_1, FRONTIER_MON_KLEAVOR_2, FRONTIER_MON_KLEAVOR_3, FRONTIER_MON_KLEAVOR_4, FRONTIER_MON_KLEAVOR_5,
    FRONTIER_MON_URSALUNA_1, FRONTIER_MON_URSALUNA_2, FRONTIER_MON_URSALUNA_3, FRONTIER_MON_URSALUNA_4,
    FRONTIER_MON_BASCULEGION_M_1, FRONTIER_MON_BASCULEGION_M_2, FRONTIER_MON_BASCULEGION_M_3,
    FRONTIER_MON_SNEASLER_1, FRONTIER_MON_SNEASLER_2, FRONTIER_MON_SNEASLER_3, FRONTIER_MON_SNEASLER_4,
    FRONTIER_MON_OVERQWIL_1, FRONTIER_MON_OVERQWIL_2, FRONTIER_MON_OVERQWIL_3,
    FRONTIER_MON_ARCANINE_HISUI_1, FRONTIER_MON_ARCANINE_HISUI_2, FRONTIER_MON_ARCANINE_HISUI_3, FRONTIER_MON_ARCANINE_HISUI_4,
    FRONTIER_MON_ELECTRODE_HISUI_1, FRONTIER_MON_ELECTRODE_HISUI_2, FRONTIER_MON_ELECTRODE_HISUI_3, FRONTIER_MON_ELECTRODE_HISUI_4,
    FRONTIER_MON_TYPHLOSION_HISUI_1, FRONTIER_MON_TYPHLOSION_HISUI_2, FRONTIER_MON_TYPHLOSION_HISUI_3, FRONTIER_MON_TYPHLOSION_HISUI_4,
    FRONTIER_MON_SAMUROTT_HISUI_1, FRONTIER_MON_SAMUROTT_HISUI_2, FRONTIER_MON_SAMUROTT_HISUI_3, FRONTIER_MON_SAMUROTT_HISUI_4,
    FRONTIER_MON_LILLIGANT_HISUI_1, FRONTIER_MON_LILLIGANT_HISUI_2, FRONTIER_MON_LILLIGANT_HISUI_3, FRONTIER_MON_LILLIGANT_HISUI_4,
    FRONTIER_MON_ZOROARK_HISUI_1, FRONTIER_MON_ZOROARK_HISUI_2, FRONTIER_MON_ZOROARK_HISUI_3, FRONTIER_MON_ZOROARK_HISUI_4,
    FRONTIER_MON_BRAVIARY_HISUI_1, FRONTIER_MON_BRAVIARY_HISUI_2, FRONTIER_MON_BRAVIARY_HISUI_3, FRONTIER_MON_BRAVIARY_HISUI_4,
    FRONTIER_MON_GOODRA_HISUI_1, FRONTIER_MON_GOODRA_HISUI_2, FRONTIER_MON_GOODRA_HISUI_3, FRONTIER_MON_GOODRA_HISUI_4,
    FRONTIER_MON_AVALUGG_HISUI_1, FRONTIER_MON_AVALUGG_HISUI_2, FRONTIER_MON_AVALUGG_HISUI_3, FRONTIER_MON_AVALUGG_HISUI_4,
    FRONTIER_MON_DECIDUEYE_HISUI_1, FRONTIER_MON_DECIDUEYE_HISUI_2, FRONTIER_MON_DECIDUEYE_HISUI_3, FRONTIER_MON_DECIDUEYE_HISUI_4,
    FRONTIER_MON_ROTOM_HEAT_1, FRONTIER_MON_ROTOM_HEAT_2, FRONTIER_MON_ROTOM_HEAT_3, FRONTIER_MON_ROTOM_HEAT_4,
    FRONTIER_MON_ROTOM_WASH_1, FRONTIER_MON_ROTOM_WASH_2, FRONTIER_MON_ROTOM_WASH_3, FRONTIER_MON_ROTOM_WASH_4,
    FRONTIER_MON_ROTOM_FROST_1, FRONTIER_MON_ROTOM_FROST_2, FRONTIER_MON_ROTOM_FROST_3, FRONTIER_MON_ROTOM_FROST_4,
    FRONTIER_MON_ROTOM_FAN_1, FRONTIER_MON_ROTOM_FAN_2, FRONTIER_MON_ROTOM_FAN_3, FRONTIER_MON_ROTOM_FAN_4,
    FRONTIER_MON_ROTOM_MOW_1, FRONTIER_MON_ROTOM_MOW_2, FRONTIER_MON_ROTOM_MOW_3, FRONTIER_MON_ROTOM_MOW_4,
    FRONTIER_MON_TORNADUS_THERIAN_1, FRONTIER_MON_TORNADUS_THERIAN_2, FRONTIER_MON_TORNADUS_THERIAN_3,
    FRONTIER_MON_THUNDURUS_THERIAN_1, FRONTIER_MON_THUNDURUS_THERIAN_2, FRONTIER_MON_THUNDURUS_THERIAN_3,
    FRONTIER_MON_LANDORUS_THERIAN_1, FRONTIER_MON_LANDORUS_THERIAN_2, FRONTIER_MON_LANDORUS_THERIAN_3,
    FRONTIER_MON_ENAMORUS_THERIAN_1, FRONTIER_MON_ENAMORUS_THERIAN_2,
    FRONTIER_MON_GENESECT_1,
    FRONTIER_MON_BASCULEGION_F_1, FRONTIER_MON_BASCULEGION_F_2,
    FRONTIER_MON_URSHIFU_RAPID_STRIKE_1, FRONTIER_MON_URSHIFU_RAPID_STRIKE_2, FRONTIER_MON_URSHIFU_RAPID_STRIKE_3, FRONTIER_MON_URSHIFU_RAPID_STRIKE_4,
    FRONTIER_MON_URSHIFU_SINGLE_STRIKE_1, FRONTIER_MON_URSHIFU_SINGLE_STRIKE_2, FRONTIER_MON_URSHIFU_SINGLE_STRIKE_3, FRONTIER_MON_URSHIFU_SINGLE_STRIKE_4,
    FRONTIER_MON_MEOWSCARADA_1, FRONTIER_MON_MEOWSCARADA_2,
    FRONTIER_MON_SKELEDIRGE_1, FRONTIER_MON_SKELEDIRGE_2,
    FRONTIER_MON_QUAQUAVAL_1, FRONTIER_MON_QUAQUAVAL_2,
    FRONTIER_MON_LOKIX_1, FRONTIER_MON_LOKIX_2,
    FRONTIER_MON_PAWMOT_1, FRONTIER_MON_PAWMOT_2,
    FRONTIER_MON_DACHSBUN_1, FRONTIER_MON_DACHSBUN_2,
    FRONTIER_MON_ARBOLIVA_1, FRONTIER_MON_ARBOLIVA_2,
    FRONTIER_MON_GARGANACL_1, FRONTIER_MON_GARGANACL_2,
    FRONTIER_MON_ARMAROUGE_1, FRONTIER_MON_ARMAROUGE_2,
    FRONTIER_MON_CERULEDGE_1, FRONTIER_MON_CERULEDGE_2,
    FRONTIER_MON_BELLIBOLT_1, FRONTIER_MON_BELLIBOLT_2,
    FRONTIER_MON_KILOWATTREL_1, FRONTIER_MON_KILOWATTREL_2,
    FRONTIER_MON_MABOSSTIFF,
    FRONTIER_MON_GRAFAIAI_1, FRONTIER_MON_GRAFAIAI_2,
    FRONTIER_MON_BRAMBLEGHAST_1, FRONTIER_MON_BRAMBLEGHAST_2, FRONTIER_MON_BRAMBLEGHAST_3,
    FRONTIER_MON_TOEDSCRUEL_1, FRONTIER_MON_TOEDSCRUEL_2,
    FRONTIER_MON_KLAWF_1, FRONTIER_MON_KLAWF_2,
    FRONTIER_MON_SCOVILLAIN,
    FRONTIER_MON_ESPATHRA_1, FRONTIER_MON_ESPATHRA_2,
    FRONTIER_MON_TINKATON_1, FRONTIER_MON_TINKATON_2,
    FRONTIER_MON_WUGTRIO_1, FRONTIER_MON_WUGTRIO_2,
    FRONTIER_MON_BOMBIRDIER_1, FRONTIER_MON_BOMBIRDIER_2,
    FRONTIER_MON_PALAFIN_ZERO_1, FRONTIER_MON_PALAFIN_ZERO_2,
    FRONTIER_MON_REVAVROOM_1, FRONTIER_MON_REVAVROOM_2,
    FRONTIER_MON_CYCLIZAR_1, FRONTIER_MON_CYCLIZAR_2,
    FRONTIER_MON_ORTHWORM_1, FRONTIER_MON_ORTHWORM_2,
    FRONTIER_MON_GLIMMORA_1, FRONTIER_MON_GLIMMORA_2,
    FRONTIER_MON_HOUNDSTONE,
    FRONTIER_MON_FLAMIGO_1, FRONTIER_MON_FLAMIGO_2,
    FRONTIER_MON_CETITAN_1, FRONTIER_MON_CETITAN_2,
    FRONTIER_MON_VELUZA_1, FRONTIER_MON_VELUZA_2,
    FRONTIER_MON_DONDOZO_1, FRONTIER_MON_DONDOZO_2,
    FRONTIER_MON_TATSUGIRI_CURLY_1, FRONTIER_MON_TATSUGIRI_CURLY_2,
    FRONTIER_MON_TATSUGIRI_DROOPY_1, FRONTIER_MON_TATSUGIRI_DROOPY_2,
    FRONTIER_MON_TATSUGIRI_STRETCHY_1, FRONTIER_MON_TATSUGIRI_STRETCHY_2,
    FRONTIER_MON_ANNIHILAPE_1, FRONTIER_MON_ANNIHILAPE_2,
    FRONTIER_MON_CLODSIRE_1, FRONTIER_MON_CLODSIRE_2,
    FRONTIER_MON_FARIGIRAF_1, FRONTIER_MON_FARIGIRAF_2,
    FRONTIER_MON_DUDUNSPARCE_TWO_SEGMENT_1, FRONTIER_MON_DUDUNSPARCE_TWO_SEGMENT_2,
    FRONTIER_MON_DUDUNSPARCE_THREE_SEGMENT_1, FRONTIER_MON_DUDUNSPARCE_THREE_SEGMENT_2,
    FRONTIER_MON_KINGAMBIT_1, FRONTIER_MON_KINGAMBIT_2,
    FRONTIER_MON_GREAT_TUSK_1, FRONTIER_MON_GREAT_TUSK_2,
    FRONTIER_MON_SCREAM_TAIL_1, FRONTIER_MON_SCREAM_TAIL_2,
    FRONTIER_MON_BRUTE_BONNET_1, FRONTIER_MON_BRUTE_BONNET_2,
    FRONTIER_MON_FLUTTER_MANE_1, FRONTIER_MON_FLUTTER_MANE_2,
    FRONTIER_MON_SLITHER_WING_1, FRONTIER_MON_SLITHER_WING_2,
    FRONTIER_MON_SANDY_SHOCKS_1, FRONTIER_MON_SANDY_SHOCKS_2,
    FRONTIER_MON_IRON_TREADS_1, FRONTIER_MON_IRON_TREADS_2,
    FRONTIER_MON_IRON_BUNDLE_1, FRONTIER_MON_IRON_BUNDLE_2,
    FRONTIER_MON_IRON_HANDS_1, FRONTIER_MON_IRON_HANDS_2,
    FRONTIER_MON_IRON_JUGULIS_1, FRONTIER_MON_IRON_JUGULIS_2,
    FRONTIER_MON_IRON_MOTH_1, FRONTIER_MON_IRON_MOTH_2,
    FRONTIER_MON_IRON_THORNS_1, FRONTIER_MON_IRON_THORNS_2,
    FRONTIER_MON_BAXCALIBUR_1, FRONTIER_MON_BAXCALIBUR_2,
    FRONTIER_MON_GHOLDENGO_1, FRONTIER_MON_GHOLDENGO_2,
    FRONTIER_MON_WO_CHIEN_1, FRONTIER_MON_WO_CHIEN_2,
    FRONTIER_MON_CHIEN_PAO_1, FRONTIER_MON_CHIEN_PAO_2,
    FRONTIER_MON_TING_LU_1, FRONTIER_MON_TING_LU_2,
    FRONTIER_MON_CHI_YU_1, FRONTIER_MON_CHI_YU_2,
    FRONTIER_MON_ROARING_MOON_1, FRONTIER_MON_ROARING_MOON_2,
    FRONTIER_MON_IRON_VALIANT_1, FRONTIER_MON_IRON_VALIANT_2,
    FRONTIER_MON_KORAIDON_1, FRONTIER_MON_KORAIDON_2,
    FRONTIER_MON_MIRAIDON_1, FRONTIER_MON_MIRAIDON_2,
    FRONTIER_MON_TAUROS_PALDEA_COMBAT_1, FRONTIER_MON_TAUROS_PALDEA_COMBAT_2,
    FRONTIER_MON_TAUROS_PALDEA_BLAZE_1, FRONTIER_MON_TAUROS_PALDEA_BLAZE_2,
    FRONTIER_MON_TAUROS_PALDEA_AQUA_1, FRONTIER_MON_TAUROS_PALDEA_AQUA_2,
    FRONTIER_MON_WALKING_WAKE_1, FRONTIER_MON_WALKING_WAKE_2,
    FRONTIER_MON_IRON_LEAVES_1, FRONTIER_MON_IRON_LEAVES_2,
    FRONTIER_MON_SINISTCHA_UNREMARKABLE,
    FRONTIER_MON_SINISTCHA_MASTERPIECE,
    FRONTIER_MON_OKIDOGI_1, FRONTIER_MON_OKIDOGI_2,
    FRONTIER_MON_MUNKIDORI_1, FRONTIER_MON_MUNKIDORI_2,
    FRONTIER_MON_FEZANDIPITI_1, FRONTIER_MON_FEZANDIPITI_2,
    FRONTIER_MON_OGERPON_TEAL_1, FRONTIER_MON_OGERPON_TEAL_2, FRONTIER_MON_OGERPON_TEAL_3, FRONTIER_MON_OGERPON_TEAL_4,
    FRONTIER_MON_URSALUNA_BLOODMOON_1, FRONTIER_MON_URSALUNA_BLOODMOON_2,
    FRONTIER_MON_ARCHALUDON_1, FRONTIER_MON_ARCHALUDON_2,
    FRONTIER_MON_HYDRAPPLE_1, FRONTIER_MON_HYDRAPPLE_2,
    FRONTIER_MON_GOUGING_FIRE_1, FRONTIER_MON_GOUGING_FIRE_2,
    FRONTIER_MON_RAGING_BOLT_1, FRONTIER_MON_RAGING_BOLT_2,
    FRONTIER_MON_IRON_BOULDER_1, FRONTIER_MON_IRON_BOULDER_2,
    FRONTIER_MON_IRON_CROWN_1, FRONTIER_MON_IRON_CROWN_2,
};

// code
void CallBattleFactoryFunction(void)
{
    sBattleFactoryFunctions[gSpecialVar_0x8004]();
}

static void InitFactoryChallenge(void)
{
    u8 i;
    u32 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    gSaveBlock2Ptr->frontier.disableRecordBattle = FALSE;

    if (!(gSaveBlock2Ptr->frontier.winStreakActiveFlags & sWinStreakFlags[battleMode][lvlMode]))
    {
        gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] = 0;
        gSaveBlock2Ptr->frontier.factoryRentsCount[battleMode][lvlMode] = 0;
    }

    VarSet(VAR_FACTORY_SWAP_COUNTER, 0);
    sPerformedRentalSwap = FALSE;
    for (i = 0; i < ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons); i++)
        gSaveBlock2Ptr->frontier.rentalMons[i].monId = 0xFFFF;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        gFrontierTempParty[i] = 0xFFFF;

    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
    gTrainerBattleOpponent_A = 0;
}

static void GetBattleFactoryData(void)
{
    int lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    int battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    switch (gSpecialVar_0x8005)
    {
    case FACTORY_DATA_WIN_STREAK:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode];
        break;
    case FACTORY_DATA_WIN_STREAK_ACTIVE:
        gSpecialVar_Result = ((gSaveBlock2Ptr->frontier.winStreakActiveFlags & sWinStreakFlags[battleMode][lvlMode]) != 0);
        break;
    case FACTORY_DATA_WIN_STREAK_SWAPS:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.factoryRentsCount[battleMode][lvlMode];
        break;
    }
}

static void SetBattleFactoryData(void)
{
    int lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    int battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    switch (gSpecialVar_0x8005)
    {
    case FACTORY_DATA_WIN_STREAK:
        gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] = gSpecialVar_0x8006;
        break;
    case FACTORY_DATA_WIN_STREAK_ACTIVE:
        if (gSpecialVar_0x8006)
            gSaveBlock2Ptr->frontier.winStreakActiveFlags |= sWinStreakFlags[battleMode][lvlMode];
        else
            gSaveBlock2Ptr->frontier.winStreakActiveFlags &= sWinStreakMasks[battleMode][lvlMode];
        break;
    case FACTORY_DATA_WIN_STREAK_SWAPS:
        if (sPerformedRentalSwap == TRUE)
        {
            gSaveBlock2Ptr->frontier.factoryRentsCount[battleMode][lvlMode] = gSpecialVar_0x8006;
            sPerformedRentalSwap = FALSE;
        }
        break;
    }
}

static void SaveFactoryChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
}

static void FactoryDummy1(void)
{

}

static void FactoryDummy2(void)
{

}

static void SelectInitialRentalMons(void)
{
    ZeroPlayerPartyMons();
    DoBattleFactorySelectScreen();
}

static void SwapRentalMons(void)
{
    DoBattleFactorySwapScreen();
}

static void SetPerformedRentalSwap(void)
{
    sPerformedRentalSwap = TRUE;
}

static void GenerateOpponentMons(void)
{
    int i, j, k;
    u16 species[FRONTIER_PARTY_SIZE];
    int firstMonId = 0;
    u16 trainerId = 0;
    u32 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u32 WinStreak = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode];
    u32 challengeNum = WinStreak / FRONTIER_STAGES_PER_CHALLENGE;

    gFacilityTrainers = gBattleFrontierTrainers;

    do
    {
        // Choose a random trainer, ensuring no repeats in this challenge
        trainerId = GetRandomScaledFrontierTrainerId(challengeNum, gSaveBlock2Ptr->frontier.curChallengeBattleNum);
        for (i = 0; i < gSaveBlock2Ptr->frontier.curChallengeBattleNum; i++)
        {
            if (gSaveBlock2Ptr->frontier.trainerIds[i] == trainerId)
                break;
        }
    } while (i != gSaveBlock2Ptr->frontier.curChallengeBattleNum);

    gTrainerBattleOpponent_A = trainerId;
    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum < FRONTIER_STAGES_PER_CHALLENGE - 1)
        gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum] = trainerId;

    i = 0;
    while (i != FRONTIER_PARTY_SIZE)
    {
        u16 monId = GetFactoryMonId(WinStreak, TRUE);

        // Unown (FRONTIER_MON_UNOWN) is forbidden on opponent Factory teams.
        if (gFacilityTrainerMons[monId].species == SPECIES_UNOWN)
            continue;

        // Ensure none of the opponent's Pokémon are the same as the potential rental Pokémon for the player
        for (j = 0; j < (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons); j++)
        {
            if (gFacilityTrainerMons[monId].species == gFacilityTrainerMons[gSaveBlock2Ptr->frontier.rentalMons[j].monId].species)
                break;
        }
        if (j != (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons))
            continue;

        // Ensure this species hasn't already been chosen for the opponent
        for (k = firstMonId; k < firstMonId + i; k++)
        {
            if (species[k] == gFacilityTrainerMons[monId].species)
                break;
        }
        if (k != firstMonId + i)
            continue;

        // Successful selection
        species[i] = gFacilityTrainerMons[monId].species;
        gFrontierTempParty[i] = monId;
        i++;
    }
}

static void SetOpponentGfxVar(void)
{
    SetBattleFacilityTrainerGfxId(gTrainerBattleOpponent_A, 0);
}

static void SetRentalsToOpponentParty(void)
{
    u8 i;

    if (gSaveBlock2Ptr->frontier.lvlMode != FRONTIER_LVL_TENT)
        gFacilityTrainerMons = gBattleFrontierMons;
    else
        gFacilityTrainerMons = gSlateportBattleTentMons;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].monId = gFrontierTempParty[i];
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].ivs = GetBoxMonData(&gEnemyParty[i].box, MON_DATA_ATK_IV, NULL);
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].personality = GetMonData(&gEnemyParty[i], MON_DATA_PERSONALITY, NULL);
        gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].abilityNum = GetBoxMonData(&gEnemyParty[i].box, MON_DATA_ABILITY_NUM, NULL);
        SetMonData(&gEnemyParty[i], MON_DATA_HELD_ITEM, &gFacilityTrainerMons[gFrontierTempParty[i]].heldItem);
    }
}

static void SetPlayerAndOpponentParties(void)
{
    int i;
    u8 monLevel;
    u16 monId;
    const u8 ivs = 31;

    if (gSaveBlock2Ptr->frontier.lvlMode == FRONTIER_LVL_TENT)
    {
        gFacilityTrainerMons = gSlateportBattleTentMons;
        monLevel = TENT_MIN_LEVEL;
    }
    else
    {
        gFacilityTrainerMons = gBattleFrontierMons;
        if (gSaveBlock2Ptr->frontier.lvlMode != FRONTIER_LVL_50)
            monLevel = FRONTIER_MAX_LEVEL_OPEN;
        else
            monLevel = FRONTIER_MAX_LEVEL_50;
    }

    if (gSpecialVar_0x8005 < 2)
    {
        ZeroPlayerPartyMons();
        for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        {
            monId = gSaveBlock2Ptr->frontier.rentalMons[i].monId;
            CreateFacilityMon(&gFacilityTrainerMons[monId], monLevel, ivs, OT_ID_PLAYER_ID, FLAG_FRONTIER_MON_FACTORY, &gPlayerParty[i]);
        }
    }

    switch (gSpecialVar_0x8005)
    {
    case 0:
    case 2:
        for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        {
            monId = gSaveBlock2Ptr->frontier.rentalMons[i + FRONTIER_PARTY_SIZE].monId;
            CreateFacilityMon(&gFacilityTrainerMons[monId], monLevel, ivs, OT_ID_PLAYER_ID, FLAG_FRONTIER_MON_FACTORY, &gEnemyParty[i]);
        }
        break;
    }
}

// 定义Tatsugiri形态的随机选项（6种可能）
typedef struct
{
    u16 species;
    u16 monId;
} TatsugiriOption;

static const TatsugiriOption TATSUGIRI_OPTIONS[] = 
{
    {SPECIES_TATSUGIRI_CURLY, FRONTIER_MON_TATSUGIRI_CURLY_1},
    {SPECIES_TATSUGIRI_CURLY, FRONTIER_MON_TATSUGIRI_CURLY_2},
    {SPECIES_TATSUGIRI_DROOPY, FRONTIER_MON_TATSUGIRI_DROOPY_1},
    {SPECIES_TATSUGIRI_DROOPY, FRONTIER_MON_TATSUGIRI_DROOPY_2},
    {SPECIES_TATSUGIRI_STRETCHY, FRONTIER_MON_TATSUGIRI_STRETCHY_1},
    {SPECIES_TATSUGIRI_STRETCHY, FRONTIER_MON_TATSUGIRI_STRETCHY_2}
};

// 定义Dondozo的随机选项（4种可能）
typedef struct
{
    u16 species;
    u16 monId;
} DondozoOption;

static const DondozoOption DONDOZO_OPTIONS[] = 
{
    {SPECIES_DONDOZO, FRONTIER_MON_DONDOZO_1},
    {SPECIES_DONDOZO, FRONTIER_MON_DONDOZO_2},
    {SPECIES_DONDOZO, FRONTIER_MON_DONDOZO_3},
    {SPECIES_DONDOZO, FRONTIER_MON_DONDOZO_4}
};

static void GenerateInitialRentalMons(void)
{
    int i, j;
    u8 firstMonId;
    u8 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u8 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u16 monId;
    u16 species[PARTY_SIZE];
    u32 WinStreak = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode];

    gFacilityTrainers = gBattleFrontierTrainers;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        species[i] = SPECIES_NONE;
    }

    gFacilityTrainerMons = gBattleFrontierMons;
    firstMonId = 0;

    i = 0;
    while (i != PARTY_SIZE)
    {
        // The more challenges the player has made, the more initial rentals are generated from a commoner set of Pokémon
        monId = GetFactoryMonId(WinStreak, FALSE);

        // Unown (FRONTIER_MON_UNOWN) is forbidden on opponent Factory teams.
        if (gFacilityTrainerMons[monId].species == SPECIES_UNOWN)
            continue;

        // Cannot have two Pokémon of the same species.
        for (j = firstMonId; j < firstMonId + i; j++)
        {
            if (species[j] == gFacilityTrainerMons[monId].species)
                break;
        }
        if (j != firstMonId + i)
            continue;

        gSaveBlock2Ptr->frontier.rentalMons[i].monId = monId;
        species[i] = gFacilityTrainerMons[monId].species;
        i++;
    }

    /* 后处理校验 */
    bool8 hasTatsugiri = FALSE, hasDondozo = FALSE;
    u8 replaceSlots[PARTY_SIZE];
    u8 replaceCount = 0;

    // 步骤1：检测配对需求（扩展Tatsugiri形态检测）
    for (int k = 0; k < PARTY_SIZE; k++)
    {
        if (species[k] == SPECIES_TATSUGIRI_CURLY ||
            species[k] == SPECIES_TATSUGIRI_DROOPY ||
            species[k] == SPECIES_TATSUGIRI_STRETCHY)
        {
            hasTatsugiri = TRUE;
        }
        else if (species[k] == SPECIES_DONDOZO)
        {
            hasDondozo = TRUE;
        }
        else
        {
            replaceSlots[replaceCount++] = k; // 记录可替换的位置
        }
    }

    // 步骤2：需要补充配对的情况
    if (hasTatsugiri != hasDondozo)
    {
        u16 requiredMonId;
        u16 requiredSpecies;

        if (hasTatsugiri)
        {
            // 需要补充Dondozo（4选1逻辑）
            u8 rand = Random() % 4;
            requiredSpecies = DONDOZO_OPTIONS[rand].species;
            requiredMonId = DONDOZO_OPTIONS[rand].monId;
        }
        else
        {
            // 需要补充Tatsugiri（6选1逻辑）
            u8 rand = Random() % 6;
            requiredSpecies = TATSUGIRI_OPTIONS[rand].species;
            requiredMonId = TATSUGIRI_OPTIONS[rand].monId;
        }

        // 步骤3：随机替换一个非目标物种的位置
        if (replaceCount > 0)
        {
            u8 slot = replaceSlots[Random() % replaceCount];
            gSaveBlock2Ptr->frontier.rentalMons[slot].monId = requiredMonId;
            species[slot] = requiredSpecies;
        }
    }
}

// Determines if the upcoming opponent has a single most-common
// type in its party. If there are two different types that are
// tied, then the opponent is deemed to have no preferred type,
// and NUMBER_OF_MON_TYPES is the result.
static void GetOpponentMostCommonMonType(void)
{
    u8 i;
    u8 typeCounts[NUMBER_OF_MON_TYPES];
    u8 mostCommonTypes[2];

    gFacilityTrainerMons = gBattleFrontierMons;

    // Count the number of times each type occurs in the opponent's party.
    for (i = TYPE_NORMAL; i < NUMBER_OF_MON_TYPES; i++)
        typeCounts[i] = 0;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        u32 species = gFacilityTrainerMons[gFrontierTempParty[i]].species;
        typeCounts[gSpeciesInfo[species].types[0]]++;
        if (gSpeciesInfo[species].types[0] != gSpeciesInfo[species].types[1])
            typeCounts[gSpeciesInfo[species].types[1]]++;
    }

    // Determine which are the two most-common types.
    // The second most-common type is only updated if
    // its count is equal to the most-common type.
    mostCommonTypes[0] = 0;
    mostCommonTypes[1] = 0;
    for (i = 1; i < NUMBER_OF_MON_TYPES; i++)
    {
        if (typeCounts[mostCommonTypes[0]] < typeCounts[i])
            mostCommonTypes[0] = i;
        else if (typeCounts[mostCommonTypes[0]] == typeCounts[i])
            mostCommonTypes[1] = i;
    }

    if (typeCounts[mostCommonTypes[0]] != 0)
    {
        // The most-common type must be strictly greater than
        // the second-most-common type, or the top two must be
        // the same type.
        if (typeCounts[mostCommonTypes[0]] > typeCounts[mostCommonTypes[1]])
            gSpecialVar_Result = mostCommonTypes[0];
        else if (mostCommonTypes[0] == mostCommonTypes[1])
            gSpecialVar_Result = mostCommonTypes[0];
        else
            gSpecialVar_Result = NUMBER_OF_MON_TYPES;
    }
    else
    {
        gSpecialVar_Result = NUMBER_OF_MON_TYPES;
    }
}

static void GetOpponentBattleStyle(void)
{
    u8 i, j, count;
    u8 stylePoints[FACTORY_NUM_STYLES];

    count = 0;
    gFacilityTrainerMons = gBattleFrontierMons;
    for (i = 0; i < FACTORY_NUM_STYLES; i++)
        stylePoints[i] = 0;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        u16 monId = gFrontierTempParty[i];
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u8 battleStyle = GetMoveBattleStyle(gFacilityTrainerMons[monId].moves[j]);
            stylePoints[battleStyle]++;
        }
    }

    gSpecialVar_Result = FACTORY_STYLE_NONE;
    for (i = 1; i < FACTORY_NUM_STYLES; i++)
    {
        if (stylePoints[i] >= sRequiredMoveCounts[i - 1])
        {
            gSpecialVar_Result = i;
            count++;
        }
    }

    // Has no singular style
    if (count > 2)
        gSpecialVar_Result = FACTORY_NUM_STYLES;
}

static u8 GetMoveBattleStyle(u16 move)
{
    const u16 *moves;
    u8 i, j;

    for (i = 0; i < ARRAY_COUNT(sMoveStyles); i++)
    {
        for (j = 0, moves = sMoveStyles[i]; moves[j] != MOVE_NONE; j++)
        {
            if (moves[j] == move)
                return i + 1;
        }
    }
    return FACTORY_STYLE_NONE;
}

bool8 InBattleFactory(void)
{
    return gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM
        || gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM;
}

static void RestorePlayerPartyHeldItems(void)
{
    u8 i;

    if (gSaveBlock2Ptr->frontier.lvlMode != FRONTIER_LVL_TENT)
        gFacilityTrainerMons = gBattleFrontierMons;
    else
        gFacilityTrainerMons = gSlateportBattleTentMons;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        SetMonData(&gPlayerParty[i],
                   MON_DATA_HELD_ITEM,
                   &gFacilityTrainerMons[gSaveBlock2Ptr->frontier.rentalMons[i].monId].heldItem);
    }
}

// Get the IV to use for the opponent's pokémon.
// The IVs get higher for each subsequent challenge and for
// the last trainer in each challenge. Noland is an exception
// to this, as he uses the IVs that would be used by the regular
// trainers 2 challenges ahead of the current one.
// Due to a mistake in FillFactoryFrontierTrainerParty, the
// challenge number used to determine the IVs for regular trainers
// is Battle Tower's instead of Battle Factory's.
u8 GetFactoryMonFixedIV(u8 challengeNum, bool8 isLastBattle)
{
    u8 ivSet = 31;
    return ivSet;
}

void FillFactoryBrainParty(void)
{
    int i, j, k;
    u16 species[FRONTIER_PARTY_SIZE];
    u16 heldItems[FRONTIER_PARTY_SIZE];
    int monLevel;
    const u8 fixedIV = 31;
    u32 otId;

    u8 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u8 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u32 WinStreak = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode];
    monLevel = SetFacilityPtrsGetLevel();
    i = 0;
    otId = T1_READ_32(gSaveBlock2Ptr->playerTrainerId);

    while (i != FRONTIER_PARTY_SIZE)
    {
        u16 monId = GetFactoryMonId(WinStreak, TRUE);

        if (gFacilityTrainerMons[monId].species == SPECIES_UNOWN)
            continue;
        if (monLevel == FRONTIER_MAX_LEVEL_50) //&& monId > FRONTIER_MONS_HIGH_TIER)
            continue;

        for (j = 0; j < (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons); j++)
        {
            if (monId == gSaveBlock2Ptr->frontier.rentalMons[j].monId)
                break;
        }
        if (j != (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons))
            continue;

        for (k = 0; k < i; k++)
        {
            if (species[k] == gFacilityTrainerMons[monId].species)
                break;
        }
        if (k != i)
            continue;

        for (k = 0; k < i; k++)
        {
            if (heldItems[k] != ITEM_NONE && heldItems[k] == gFacilityTrainerMons[monId].heldItem)
                break;
        }
        if (k != i)
            continue;

        species[i] = gFacilityTrainerMons[monId].species;
        heldItems[i] = gFacilityTrainerMons[monId].heldItem;
        CreateFacilityMon(&gFacilityTrainerMons[monId],
                monLevel, fixedIV, otId, FLAG_FRONTIER_MON_FACTORY,
                &gEnemyParty[i]);
        i++;
    }
}

static u16 GetFactoryMonId(u32 WinStreak, bool8 useBetterRange)
{
    u16 numMons, monId;
    u16 betterRangeStart = 2221;
    u16 betterRangeEnd = 2516;
    u16 normalRangeEnd = 2228;

    if (useBetterRange)
    {
        u8 probability;
        if (VarGet(VAR_DIFFICULTY_MODE) == 0)
            probability = 0;
        else
        {
            if (WinStreak < 25) // 1-25
                probability = 0;
            else if (WinStreak < 50) // 26-50
                probability = 33;
            else if (WinStreak < 75) // 51-75
                probability = 66;
            else
                probability = 100;
        }

        if (Random() % 100 < probability)
        {
            numMons = betterRangeEnd - betterRangeStart + 1;
            monId = Random() % numMons + betterRangeStart;
        }
        else
        {
            numMons = normalRangeEnd + 1;
            monId = Random() % numMons;
        }
    }
    else
    {
        if (FlagGet(FLAG_FACTORY_TEST) == FALSE)
        {
            if (WinStreak < 7)
            {
                numMons = betterRangeEnd - betterRangeStart + 1;
                monId = Random() % numMons + betterRangeStart;
            }
            else if (WinStreak < 14)
            {
                if (Random() % 100 < 66)
                {
                    numMons = betterRangeEnd - betterRangeStart + 1;
                    monId = Random() % numMons + betterRangeStart;
                }
                else
                {
                    numMons = normalRangeEnd + 1;
                    monId = Random() % numMons;
                }
            }
            else if (WinStreak < 21)
            {
                if (Random() % 100 < 33)
                {
                    numMons = betterRangeEnd - betterRangeStart + 1; 
                    monId = Random() % numMons + betterRangeStart; 
                }
                else
                {
                    numMons = normalRangeEnd + 1;
                    monId = Random() % numMons;
                }
            }
            else
            {
                numMons = normalRangeEnd + 1;
                monId = Random() % numMons;
            }
        }
        else // 工厂测试模式
        {
            const u16 arrSize = sizeof(factoryMonsGen9) / sizeof(factoryMonsGen9[0]);
            monId = factoryMonsGen9[Random() % arrSize];
        }
    }
    return monId;
}

u8 GetNumPastRentalsRank(u8 battleMode, u8 lvlMode)
{
    u8 ret;
    u8 rents = gSaveBlock2Ptr->frontier.factoryRentsCount[battleMode][lvlMode];

    if (rents < 15)
        ret = 0;
    else if (rents < 22)
        ret = 1;
    else if (rents < 29)
        ret = 2;
    else if (rents < 36)
        ret = 3;
    else if (rents < 43)
        ret = 4;
    else
        ret = 5;

    return ret;
}

u32 GetAiScriptsInBattleFactory(void)
{
    u8 gameMode = VarGet(VAR_DIFFICULTY_MODE);
    if (gameMode != 1 && gameMode != 2)
        return 0;

    GetOpponentBattleStyle();
    u8 battleStyle = gSpecialVar_Result;

    if (gameMode == 1)
    {
        if (battleStyle == FACTORY_STYLE_HIGH_RISK)
            return AI_FLAG_BASIC_TRAINER_RISKY;
        else if (battleStyle == FACTORY_STYLE_ENDURANCE || battleStyle == FACTORY_STYLE_WEAKENING)
            return AI_FLAG_BASIC_TRAINER_CONSERVATIVE;
        else if (battleStyle == FACTORY_STYLE_SLOW_STEADY)
            return AI_FLAG_BASIC_TRAINER_DEFEND;
        else if (battleStyle == FACTORY_STYLE_WEATHER)
            return AI_FLAG_BASIC_TRAINER_POWERSTAGE;
        else if (battleStyle == FACTORY_STYLE_PREPARATION)
            return AI_FLAG_BASIC_TRAINER_STRENGTHEN;
        else
            return AI_FLAG_BASIC_TRAINER;
    }
    else // gameMode == 2
    {
        if (battleStyle == FACTORY_STYLE_HIGH_RISK)
            return AI_FLAG_SMART_TRAINER_RISKY;
        else if (battleStyle == FACTORY_STYLE_ENDURANCE || battleStyle == FACTORY_STYLE_WEAKENING)
            return AI_FLAG_SMART_TRAINER_CONSERVATIVE;
        else if (battleStyle == FACTORY_STYLE_SLOW_STEADY)
            return AI_FLAG_SMART_TRAINER_DEFEND;
        else if (battleStyle == FACTORY_STYLE_WEATHER)
            return AI_FLAG_SMART_TRAINER_POWERSTAGE;
        else if (battleStyle == FACTORY_STYLE_PREPARATION)
            return AI_FLAG_SMART_TRAINER_STRENGTHEN;
        else
            return AI_FLAG_SMART_TRAINER;
    }
}

void SetMonMoveAvoidReturn(struct Pokemon *mon, u16 moveArg, u8 moveSlot)
{
    u16 move = moveArg;
    if (moveArg == MOVE_RETURN)
        move = MOVE_FRUSTRATION;
    SetMonMoveSlot(mon, move, moveSlot);
}
