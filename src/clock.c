#include "global.h"
#include "event_data.h"
#include "rtc.h"
#include "time_events.h"
#include "field_specials.h"
#include "lottery_corner.h"
#include "dewford_trend.h"
#include "tv.h"
#include "field_weather.h"
#include "berry.h"
#include "main.h"
#include "overworld.h"
#include "wallclock.h"
#include "constants/form_change_types.h"
#include "random.h"
#include "constants/weather.h"

static void UpdatePerDay(struct Time *localTime);
static void UpdatePerHour(struct Time *localTime);
static void UpdatePerMinute(struct Time *localTime);
static void UpdateSeason(struct Time *localTime);
static void UpdateWeatherPerHour(u16 hours);
static void FormChangeTimeUpdate();

#define VAR_HOURS VAR_UNUSED_0x4055

void InitTimeBasedEvents(void)
{
    FlagSet(FLAG_SYS_CLOCK_SET);
    RtcCalcLocalTime();
    gSaveBlock2Ptr->lastBerryTreeUpdate = gLocalTime;
    VarSet(VAR_DAYS, gLocalTime.days);
    VarSet(VAR_HOURS, gLocalTime.hours);
}

void DoTimeBasedEvents(void)
{
    if (FlagGet(FLAG_SYS_CLOCK_SET) && !InPokemonCenter())
    {
        RtcCalcLocalTime();
        UpdatePerDay(&gLocalTime);
        UpdatePerHour(&gLocalTime); 
        UpdatePerMinute(&gLocalTime);
        UpdateSeason(&gLocalTime);
    }
}

static void UpdatePerDay(struct Time *localTime)
{
    u16 *days = GetVarPointer(VAR_DAYS);
    u16 daysSince;

    if (*days != localTime->days && *days <= localTime->days)
    {
        daysSince = localTime->days - *days;
        ClearDailyFlags();
        UpdateDewfordTrendPerDay(daysSince);
        UpdateTVShowsPerDay(daysSince);
        UpdateWeatherPerDay(daysSince);
        UpdatePartyPokerusTime(daysSince);
        UpdateMirageRnd(daysSince);
        UpdateBirchState(daysSince);
        UpdateFrontierManiac(daysSince);
        UpdateFrontierGambler(daysSince);
        SetShoalItemFlag(daysSince);
        SetRandomLotteryNumber(daysSince);
        UpdateDaysPassedSinceFormChange(daysSince);
        *days = localTime->days;
    }
}

static void UpdatePerHour(struct Time *localTime)
{
    u16 hours = VarGet(VAR_HOURS);
    u16 hoursSince;

    if (hours != localTime->hours)
    {
        hoursSince = (localTime->hours - hours + 24) % 24;
        UpdateWeatherPerHour(hoursSince);
        VarSet(VAR_HOURS, localTime->hours);
    }
}

static void UpdatePerMinute(struct Time *localTime)
{
    struct Time difference;
    int minutes;

    CalcTimeDifference(&difference, &gSaveBlock2Ptr->lastBerryTreeUpdate, localTime);
    minutes = 24 * 60 * difference.days + 60 * difference.hours + difference.minutes;
    if (minutes != 0)
    {
        if (minutes >= 0)
        {
            BerryTreeTimeUpdate(minutes);
            gSaveBlock2Ptr->lastBerryTreeUpdate = *localTime;
            FormChangeTimeUpdate();
        }
    }
}

#define DEBUG_SEASON_DURATION

static void UpdateSeason(struct Time *localTime)
{
    u16 currentDays = localTime->days;
    u16 currentSeason = VarGet(VAR_CURRENT_SEASON);
    u16 seasonEndDay = VarGet(VAR_SEASON_END_DAY);

#ifdef DEBUG_SEASON_DURATION
    // 调试模式：季节持续 1/2/3 天
    #define MIN_DURATION 1
    #define MAX_DURATION 3
#else
    // 正式模式：季节持续 6/7/8 天
    #define MIN_DURATION 6
    #define MAX_DURATION 8
#endif

    if (seasonEndDay == 0) // 初始化处理
    {
        u16 duration = MIN_DURATION + (Random() % (MAX_DURATION - MIN_DURATION + 1));
        seasonEndDay = duration;
        VarSet(VAR_SEASON_END_DAY, seasonEndDay);
    }

    if (currentDays >= seasonEndDay)
    {
        u16 duration = MIN_DURATION + (Random() % (MAX_DURATION - MIN_DURATION + 1));
        currentSeason = (currentSeason + 1) % 4;
        VarSet(VAR_CURRENT_SEASON, currentSeason);
        VarSet(VAR_SEASON_END_DAY, currentDays + duration);
    }
}

static void UpdateWeatherPerHour(u16 hours)
{
    if (hours >= 1)
    {
        static const u8 sValidWeathers[] = 
        {
            WEATHER_SUNNY_CLOUDS,
            WEATHER_SUNNY,
            WEATHER_RAIN,
            WEATHER_SNOW,
            WEATHER_RAIN_THUNDERSTORM,
            //WEATHER_FOG_HORIZONTAL,
            WEATHER_SANDSTORM,
            //WEATHER_FOG_DIAGONAL,
            WEATHER_SHADE,
            WEATHER_DROUGHT,
            WEATHER_DOWNPOUR
        };

        // 生成随机索引并设置天气
        u8 index = Random() % (sizeof(sValidWeathers) / sizeof(sValidWeathers[0]));
        VarSet(VAR_CURRENT_WEATHER, sValidWeathers[index]);
    }
}

static void FormChangeTimeUpdate()
{
    s32 i;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &gPlayerParty[i];
        u32 targetSpecies = GetFormChangeTargetSpecies(mon, FORM_CHANGE_TIME_OF_DAY, 0);
        u32 currentSpecies = GetMonData(mon, MON_DATA_SPECIES);

        if (targetSpecies != currentSpecies)
        {
            SetMonData(mon, MON_DATA_SPECIES, &targetSpecies);
            CalculateMonStats(mon);
        }
    }
}

static void ReturnFromStartWallClock(void)
{
    InitTimeBasedEvents();
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void StartWallClock(void)
{
    SetMainCallback2(CB2_StartWallClock);
    gMain.savedCallback = ReturnFromStartWallClock;
}
