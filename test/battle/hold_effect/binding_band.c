#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_BINDING_BAND].holdEffect == HOLD_EFFECT_BINDING_BAND);
    ASSUME(MoveHasAdditionalEffect(MOVE_INFESTATION, MOVE_EFFECT_WRAP));
}

SINGLE_BATTLE_TEST("Binding Band increases residual trapping damage", s16 damage)
{
    enum Item item;

    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_BINDING_BAND; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(item); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(240); }
    } WHEN {
        TURN { MOVE(player, MOVE_INFESTATION); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INFESTATION, player);
        HP_BAR(opponent);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(4.0 / 3.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Binding Band does not increase residual trapping damage if obtained after trapping was applied")
{
    s16 damage1;
    s16 damage2;

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TRICK) == EFFECT_TRICK);
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); Item(ITEM_BINDING_BAND); }
    } WHEN {
        TURN { MOVE(player, MOVE_INFESTATION); }
        TURN { MOVE(opponent, MOVE_TRICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INFESTATION, player);
        HP_BAR(opponent);
        HP_BAR(opponent, captureDamage: &damage1);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRICK, opponent);
        HP_BAR(opponent, captureDamage: &damage2);
    } THEN {
        EXPECT_EQ(player->item, ITEM_BINDING_BAND);
        EXPECT_EQ(damage1, damage2);
    }
}

SINGLE_BATTLE_TEST("Binding Band residual trapping damage does not decrease if the holder loses it after trapping was applied")
{
    s16 damage1;
    s16 damage2;

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_KNOCK_OFF) == EFFECT_KNOCK_OFF);
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); Item(ITEM_BINDING_BAND); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_INFESTATION); }
        TURN { MOVE(opponent, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INFESTATION, player);
        HP_BAR(opponent);
        HP_BAR(opponent, captureDamage: &damage1);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, opponent);
        HP_BAR(opponent, captureDamage: &damage2);
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(damage1, damage2);
    }
}
