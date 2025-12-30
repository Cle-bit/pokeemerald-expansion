#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Cute Charm inflicts infatuation on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SCRATCH; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        ASSUME(!MoveMakesContact(MOVE_SWIFT));
        PLAYER(SPECIES_WOBBUFFET) { Gender(MON_MALE); }
        OPPONENT(SPECIES_CLEFAIRY) { Gender(MON_FEMALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, move); }
    } SCENE {
        if (MoveMakesContact(move)) {
            ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
            MESSAGE("The opposing Clefairy's Cute Charm infatuated Wobbuffet!");
            MESSAGE("Wobbuffet is in love with the opposing Clefairy!");
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
                MESSAGE("The opposing Clefairy's Cute Charm infatuated Wobbuffet!");
                MESSAGE("Wobbuffet is in love with the opposing Clefairy!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Cute Charm cannot infatuate same gender")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Gender(MON_MALE); }
        OPPONENT(SPECIES_CLEFAIRY) { Gender(MON_MALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        NOT ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
    }
}

SINGLE_BATTLE_TEST("Cute Charm cannot infatuate if either Pokémon are Gender-unknown")
{
    bool32 playerGenderless;

    PARAMETRIZE { playerGenderless = TRUE; }
    PARAMETRIZE { playerGenderless = FALSE; }

    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_STARMIE].genderRatio == MON_GENDERLESS);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        if (playerGenderless) {
            PLAYER(SPECIES_STARMIE);
            OPPONENT(SPECIES_CLEFAIRY) { Gender(MON_FEMALE); Ability(ABILITY_CUTE_CHARM); }
        } else {
            PLAYER(SPECIES_WOBBUFFET) { Gender(MON_MALE); }
            OPPONENT(SPECIES_STARMIE) { Ability(ABILITY_CUTE_CHARM); }
        }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH, WITH_RNG(RNG_CUTE_CHARM, 1)); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        NOT ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Cute Charm triggers 1/3 of the time (Gen 3)")
{
    u32 passes = (B_ABILITY_TRIGGER_CHANCE == GEN_3) ? 1 : 3;
    u32 outOf = (B_ABILITY_TRIGGER_CHANCE == GEN_3) ? 3 : 10;

    PASSES_RANDOMLY(passes, outOf, RNG_CUTE_CHARM);
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET) { Gender(MON_MALE); }
        OPPONENT(SPECIES_CLEFAIRY) { Gender(MON_FEMALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
        MESSAGE("The opposing Clefairy's Cute Charm infatuated Wobbuffet!");
        MESSAGE("Wobbuffet is in love with the opposing Clefairy!");
    }
}

SINGLE_BATTLE_TEST("Cute Charm triggers 30% of the time (Gen 4+)")
{
    PASSES_RANDOMLY(3, 10, RNG_CUTE_CHARM);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_4);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET) { Gender(MON_MALE); }
        OPPONENT(SPECIES_CLEFAIRY) { Gender(MON_FEMALE); Ability(ABILITY_CUTE_CHARM); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_CUTE_CHARM);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player);
        MESSAGE("The opposing Clefairy's Cute Charm infatuated Wobbuffet!");
        MESSAGE("Wobbuffet is in love with the opposing Clefairy!");
    }
}
