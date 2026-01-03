#include "global.h"
#include "test/battle.h"

TO_DO_BATTLE_TEST("Arena Trap doesn't prevent switch outs via Shed Shell, but not via Teleport");

SINGLE_BATTLE_TEST("Arena Trap prevents grounded adjacent opponents from switching out")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_ARENA_TRAP); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        u32 trapper = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        EXPECT_EQ(IsAbilityPreventingEscape(battler), trapper + 1);
    }
}

SINGLE_BATTLE_TEST("Arena Trap doesn't prevent switch outs if the Pokémon is switched in the same turn the opponent decided to switch out")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(10); }
        PLAYER(SPECIES_WYNAUT) { Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); }
        OPPONENT(SPECIES_DIGLETT) { Ability(ABILITY_ARENA_TRAP); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
    } SCENE {
        SWITCH_OUT_MESSAGE("Wobbuffet");
        SEND_IN_MESSAGE("Wynaut");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_WYNAUT);
        EXPECT_EQ(opponent->species, SPECIES_DIGLETT);
    }
}

SINGLE_BATTLE_TEST("Arena Trap doesn't prevent switch outs via moves that switch out")
{
    u16 move;
    u16 effect;
    PARAMETRIZE { move = MOVE_BATON_PASS; effect = EFFECT_BATON_PASS; }
    PARAMETRIZE { move = MOVE_U_TURN; effect = EFFECT_HIT_ESCAPE; }
    PARAMETRIZE { move = MOVE_VOLT_SWITCH; effect = EFFECT_HIT_ESCAPE; }
    PARAMETRIZE { move = MOVE_FLIP_TURN; effect = EFFECT_HIT_ESCAPE; }
    PARAMETRIZE { move = MOVE_PARTING_SHOT; effect = EFFECT_PARTING_SHOT; }
    GIVEN {
        ASSUME(GetMoveEffect(move) == effect);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_ARENA_TRAP); }
    } WHEN {
        TURN { MOVE(player, move); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        SEND_IN_MESSAGE("Wynaut");
    }
}

WILD_BATTLE_TEST("Arena Trap doesn't prevent switch outs via Run Away")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_RUN_AWAY); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_ARENA_TRAP); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        EXPECT_EQ(IsRunningFromBattleImpossible(battler), BATTLE_RUN_SUCCESS);
    }
}

WILD_BATTLE_TEST("Arena Trap doesn't prevent switch outs via Smoke Ball")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_SMOKE_BALL].holdEffect == HOLD_EFFECT_CAN_ALWAYS_RUN);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_SMOKE_BALL); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_ARENA_TRAP); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        EXPECT_EQ(IsRunningFromBattleImpossible(battler), BATTLE_RUN_SUCCESS);
    }
}

SINGLE_BATTLE_TEST("Arena Trap prevents switch outs from Ghost-type Pokémon (Gen3-5)")
{
    bool32 trapsGhost = (B_GHOSTS_ESCAPE < GEN_6);
    GIVEN {
        ASSUME(GetSpeciesType(SPECIES_SHUPPET, 0) == TYPE_GHOST);
        PLAYER(SPECIES_SHUPPET);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_ARENA_TRAP); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        u32 trapper = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        if (trapsGhost)
            EXPECT_EQ(IsAbilityPreventingEscape(battler), trapper + 1);
        else
            EXPECT_EQ(IsAbilityPreventingEscape(battler), 0);
    }
}

SINGLE_BATTLE_TEST("Arena Trap doesn't prevent switch outs from Ghost-type Pokémon (Gen6+)")
{
    GIVEN {
        ASSUME(B_GHOSTS_ESCAPE >= GEN_6);
        ASSUME(GetSpeciesType(SPECIES_SHUPPET, 0) == TYPE_GHOST);
        PLAYER(SPECIES_SHUPPET);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_ARENA_TRAP); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } THEN {
        u32 battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        EXPECT_EQ(IsAbilityPreventingEscape(battler), 0);
    }
}
