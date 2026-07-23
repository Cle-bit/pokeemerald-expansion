#include "global.h"
#include "test/battle.h"

TO_DO_BATTLE_TEST("TODO: Write Perish Body (Ability) test titles")

SINGLE_BATTLE_TEST("Perish Body affects the attacker when its holder is knocked out by a contact move")
{
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_BITE));
        PLAYER(SPECIES_CURSOLA) { HP(1); Ability(ABILITY_PERISH_BODY); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_BITE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_PERISH_BODY);
    }
}

DOUBLE_BATTLE_TEST("Perish Body does not activate if the attacker faints before hitting its holder")
{
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_BREAKING_SWIPE));
        ASSUME(GetMoveTarget(MOVE_BREAKING_SWIPE) == TARGET_BOTH);
        PLAYER(SPECIES_GARCHOMP) { Ability(ABILITY_ROUGH_SKIN); }
        PLAYER(SPECIES_CURSOLA) { Ability(ABILITY_PERISH_BODY); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_BREAKING_SWIPE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BREAKING_SWIPE, opponentLeft);
        ABILITY_POPUP(playerLeft, ABILITY_ROUGH_SKIN);
        HP_BAR(opponentLeft);
        NOT ABILITY_POPUP(playerRight, ABILITY_PERISH_BODY);
    }
}

SINGLE_BATTLE_TEST("Perish Body activates before its holder's Rocky Helmet knocks out the attacker")
{
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_BITE));
        ASSUME(GetItemHoldEffect(ITEM_ROCKY_HELMET) == HOLD_EFFECT_ROCKY_HELMET);
        PLAYER(SPECIES_CURSOLA) { HP(1); Ability(ABILITY_PERISH_BODY); Item(ITEM_ROCKY_HELMET); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_BITE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_PERISH_BODY);
        HP_BAR(opponent);
    }
}
