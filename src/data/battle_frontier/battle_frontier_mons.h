const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
        .heldItem = ITEM_VENUSAURITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 132, 112, 0, 12),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_INGRAIN},
        .heldItem = ITEM_VENUSAURITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VENUSAUR_5] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT},
        .heldItem = ITEM_VENUSAURITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_BLAZE_KICK, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_CHARIZARDITE_X,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_ROOST, MOVE_WILL_O_WISP},
        .heldItem = ITEM_CHARIZARDITE_X,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_WEATHER_BALL, MOVE_SOLARBEAM, MOVE_AIR_SLASH, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHARIZARDITE_Y,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHARIZARD_5] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLARBEAM, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_CHARIZARDITE_Y,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAPID_SPIN, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_SHELL_SMASH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(176, 252, 0, 0, 0, 80),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_BODY_PRESS, MOVE_AQUA_RING, MOVE_SUBSTITUTE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLASTOISE_5] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_FLIP_TURN, MOVE_FAKE_OUT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_SUBSTITUTE, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BUTTERFREE_3] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_INFESTATION, MOVE_SLEEP_POWDER, MOVE_NIGHTMARE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BUTTERFREE_4] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_POLLEN_PUFF, MOVE_ROOST, MOVE_TAILWIND, MOVE_SAFEGUARD},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEEDRILL_1] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_FELL_STINGER, MOVE_DRILL_RUN, MOVE_NEEDLE_ARM, MOVE_THIEF},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEEDRILL_2] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEEDRILL_3] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_FELL_STINGER, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEEDRILL_4] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_PROTECT},
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_STEEL_WING, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_MIRROR_MOVE, MOVE_FEATHERDANCE, MOVE_ROOST},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEOT_3] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PIDGEOT_4] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_HYPER_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RATICATE_3] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_WILD_CHARGE, MOVE_THROAT_CHOP, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_4] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_BODY_SLAM, MOVE_ASSURANCE, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_ALOLA_1] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_PSYCHIC_FANGS, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_ALOLA_2] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_COUNTER, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RATICATE_ALOLA_3] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_SUPER_FANG, MOVE_FINAL_GAMBIT, MOVE_TOXIC, MOVE_SCARY_FACE},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RATICATE_ALOLA_4] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_SNARL, MOVE_U_TURN, MOVE_ENDEAVOR, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_BEAK_BLAST, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_ROOST},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_U_TURN, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_BEAK_BLAST, MOVE_TAILWIND, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GUNK_SHOT, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SCALE_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_TOXIC},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARBOK_3] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GUNK_SHOT, MOVE_DRAGON_TAIL, MOVE_COIL, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ARBOK_4] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_PURSUIT, MOVE_GLARE, MOVE_PROTECT},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_VOLT_TACKLE, MOVE_EXTREMESPEED, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_CHARGE_BEAM, MOVE_CHARM, MOVE_SWEET_KISS, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_EXTREMESPEED, MOVE_KNOCK_OFF, MOVE_ENCORE, MOVE_FAKE_OUT},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_ALOLA_1] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_ALORAICHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAICHU_ALOLA_2] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAICHU_ALOLA_3] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_YAWN, MOVE_ENCORE, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAICHU_ALOLA_4] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_FAKE_OUT, MOVE_PROTECT},
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SANDSLASH_3] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_X_SCISSOR, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SANDSLASH_4] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_1] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_2] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_3] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_DOUBLE_TEAM, MOVE_DEFENSE_CURL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_4] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_EARTH_POWER, MOVE_SHELL_SIDE_ARM, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_ABSORB_BULB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_ICY_WIND, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_HELPING_HAND},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_POISON_TAIL, MOVE_DRILL_RUN, MOVE_SHADOW_CLAW, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTH_POWER, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_HEAD_SMASH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK, MOVE_SANDSTORM},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_SOFTBOILED},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_HEAL_BELL, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_SOFTBOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_FOLLOW_ME, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 164, 0, 92, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLARBEAM, MOVE_PSYSHOCK, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_SCORCHING_SANDS, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FOUL_PLAY, MOVE_SNORE, MOVE_TOXIC, MOVE_REST},
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 8, 252, 248),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_HIDDEN_POWER, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_ALOLA_1] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_ALOLA_2] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_AURORA_VEIL},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_ALOLA_3] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_BLIZZARD, MOVE_TOXIC, MOVE_AURORA_VEIL, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NINETALES_ALOLA_4] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_FREEZE_DRY, MOVE_ENCORE, MOVE_AURORA_VEIL, MOVE_PROTECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(128, 0, 40, 88, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DOUBLE_EDGE, MOVE_FIRE_PUNCH, MOVE_THUNDERPUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_WISH, MOVE_STEALTH_ROCK, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WIGGLYTUFF_3] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_TOXIC, MOVE_HEAL_PULSE, MOVE_MAGIC_COAT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WIGGLYTUFF_4] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_INCINERATE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 128, 252, 128, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_APPLE_ACID, MOVE_SLUDGE_WAVE, MOVE_MOONBLAST, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_STUN_SPORE, MOVE_TEETER_DANCE, MOVE_MOONLIGHT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_TEETER_DANCE, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VILEPLUME_5] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLARBEAM, MOVE_SLUDGE_WAVE, MOVE_POLLEN_PUFF, MOVE_GROWTH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SEED_BOMB, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE, MOVE_SPORE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_X_SCISSOR, MOVE_LEECH_SEED, MOVE_SPORE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PARASECT_3] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SEED_BOMB, MOVE_THROAT_CHOP, MOVE_X_SCISSOR, MOVE_AGILITY},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PARASECT_4] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_X_SCISSOR, MOVE_SPORE, MOVE_LEECH_SEED, MOVE_ROTOTILLER},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENOMOTH_3] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT, MOVE_ROOST},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENOMOTH_4] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLEEP_POWDER, MOVE_TOXIC_SPIKES, MOVE_TAILWIND},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUBSTITUTE, MOVE_MEMENTO},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_REVERSAL, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_1] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_NIGHT_SLASH, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_2] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_3] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUBSTITUTE, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_4] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SWIFT, MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_COVET, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_TAUNT},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_3] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_4] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_RETURN, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_ALOLA_1] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_NIGHT_DAZE, MOVE_THUNDERBOLT, MOVE_BURNING_JEALOUSY, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PERSIAN_ALOLA_2] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_FOUL_PLAY, MOVE_U_TURN, MOVE_SCREECH, MOVE_SWITCHEROO},
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PERSIAN_ALOLA_3] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_PARTING_SHOT, MOVE_TAUNT},
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_ALOLA_4] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_SNARL, MOVE_ICY_WIND, MOVE_BURNING_JEALOUSY, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_POWER_GEM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_POWER_GEM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_AQUA_JET, MOVE_ICY_WIND, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_THUNDERPUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PRIMEAPE_3] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_COUNTER, MOVE_ENDEAVOR},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PRIMEAPE_4] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_ROCK_SLIDE, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_EXTREMESPEED},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_SOLARBEAM, MOVE_EXTREMESPEED, MOVE_SUNNY_DAY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREMESPEED, MOVE_MORNING_SUN, MOVE_WILL_O_WISP},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_HEAT_WAVE, MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_SURGING_STRIKES, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(112, 252, 0, 0, 0, 144),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_HYPNOSIS, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_3] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_SCALD, MOVE_CIRCLE_THROW, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_POLIWRATH_4] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_TOXIC, MOVE_HELPING_HAND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_GUARD_SPLIT, MOVE_TRICK},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        .heldItem = ITEM_ALAKAZITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_TAUNT, MOVE_GUARD_SPLIT, MOVE_RECOVER},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_MACH_PUNCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMICPUNCH, MOVE_STONE_EDGE, MOVE_DARKEST_LARIAT, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(172, 252, 0, 0, 0, 84),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDERPUNCH, MOVE_ICE_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMICPUNCH, MOVE_KNOCK_OFF, MOVE_WIDE_GUARD, MOVE_COACHING},
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SOLARBEAM, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_TOXIC, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GRAV_APPLE, MOVE_KNOCK_OFF, MOVE_STRENGTH_SAP, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VICTREEBEL_5] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GRAV_APPLE, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SCALD, MOVE_RAPID_SPIN, MOVE_TOXIC_SPIKES, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_RAPID_SPIN, MOVE_TOXIC_SPIKES, MOVE_ACUPRESSURE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_AUTOTOMIZE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 32, 0, 0, 224, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_WIDE_GUARD},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_ALOLA_1] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_WILD_CHARGE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLEM_ALOLA_2] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_ROCK_POLISH},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_ALOLA_3] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_BULLDOZE, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOLEM_ALOLA_4] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_ELECTROWEB, MOVE_STEALTH_ROCK, MOVE_WIDE_GUARD},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLARBEAM, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_MORNING_SUN, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_NASTY_PLOT, MOVE_SLACK_OFF},
        .heldItem = ITEM_SLOWBRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SLOWBRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SLOWBRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FARFETCHD_1] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FARFETCHD_2] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_BRAVE_BIRD, MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_SLASH},
        .heldItem = ITEM_LEEK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FARFETCHD_3] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_CLOSE_COMBAT, MOVE_QUICK_ATTACK, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FARFETCHD_4] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SOLAR_BLADE, MOVE_METEOR_ASSAULT, MOVE_TAILWIND},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_QUICK_ATTACK, MOVE_DRILL_PECK, MOVE_STOMPING_TANTRUM, MOVE_ENDEAVOR},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_QUICK_ATTACK, MOVE_DRILL_PECK, MOVE_ENDEAVOR, MOVE_ACUPRESSURE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_AVALANCHE, MOVE_LIQUIDATION, MOVE_DRILL_RUN, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICY_WIND, MOVE_FAKE_OUT, MOVE_HAIL, MOVE_PROTECT},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_GUNK_SHOT, MOVE_SHADOW_SNEAK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_EXPLOSION},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_CURSE},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_GUNK_SHOT, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_ALOLA_1] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_ALOLA_2] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_STONE_EDGE, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_ALOLA_3] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_ACID_SPRAY, MOVE_SNARL, MOVE_MINIMIZE, MOVE_REST},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUK_ALOLA_4] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SNARL, MOVE_KNOCK_OFF, MOVE_DISABLE},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 160, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_LIQUIDATION, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_SHELL_SMASH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_RAPID_SPIN, MOVE_SHELL_SMASH, MOVE_SPIKES},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLOYSTER_3] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_LIQUIDATION, MOVE_RAPID_SPIN, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLOYSTER_4] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICY_WIND, MOVE_RAPID_SPIN, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_GENGARITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_PERISH_SONG, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_GENGARITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_GENGARITE,
        .ev = TRAINER_PARTY_EVS(28, 0, 36, 188, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_FOUL_PLAY, MOVE_TRICK, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_X_SCISSOR, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGLER_3] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGLER_4] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_TICKLE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_TAUNT},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 192, 0, 64),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_ENERGY_BALL, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLARBEAM, MOVE_PSYSHOCK, MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_CALM_MIND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLARBEAM, MOVE_PSYCHIC, MOVE_HIDDEN_POWER, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_1] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_WOOD_HAMMER, MOVE_DRAGON_HAMMER, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(212, 252, 0, 0, 0, 44),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_2] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 252, 0, 44),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_3] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_FLAMETHROWER, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_4] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_POWER_WHIP, MOVE_DRAGON_HAMMER, MOVE_LEECH_SEED, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONE_RUSH, MOVE_ROCK_BLAST, MOVE_SHADOW_BONE, MOVE_POWER_UP_PUNCH},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_PAIN_SPLIT, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONE_RUSH, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_ALOLA_1] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_POLTERGEIST, MOVE_BONEMERANG, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 8, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_ALOLA_2] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MAROWAK_ALOLA_3] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_HEX, MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SUNNY_DAY},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 8, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAROWAK_ALOLA_4] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_POLTERGEIST, MOVE_BONEMERANG, MOVE_PROTECT},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_POISON_JAB, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_MACH_PUNCH, MOVE_STONE_EDGE, MOVE_BULK_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HITMONLEE_3] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_REVERSAL, MOVE_PYRO_BALL, MOVE_EARTHQUAKE, MOVE_ENDURE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONLEE_4] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_FAKE_OUT, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ICE_PUNCH, MOVE_THUNDERPUNCH, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_AGILITY, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(216, 252, 0, 0, 0, 40),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_3] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH, MOVE_RAPID_SPIN, MOVE_BULK_UP},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONCHAN_4] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT, MOVE_QUICK_GUARD, MOVE_HELPING_HAND},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_STRANGE_STEAM, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_INFESTATION, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_VENOSHOCK, MOVE_POISON_GAS, MOVE_VENOM_DRENCH, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_WISH, MOVE_AROMATHERAPY},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(240, 0, 252, 0, 12, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_SOFTBOILED},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHANSEY_3] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_GRAVITY, MOVE_STEALTH_ROCK, MOVE_SOFTBOILED},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHANSEY_4] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_ICY_WIND, MOVE_STEALTH_ROCK, MOVE_SOFTBOILED},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_REVERSAL, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE, MOVE_FAKE_OUT},
        .heldItem = ITEM_KANGASKHANITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_ICE_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT},
        .heldItem = ITEM_KANGASKHANITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_FAKE_OUT, MOVE_PROTECT},
        .heldItem = ITEM_KANGASKHANITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_FISHIOUS_REND, MOVE_KNOCK_OFF, MOVE_MEGAHORN, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_FISHIOUS_REND, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEAKING_3] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_SOAK, MOVE_AQUA_RING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SEAKING_4] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_KNOCK_OFF, MOVE_TOXIC},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_POWER_GEM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_THUNDER, MOVE_BLIZZARD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SCALD, MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_THUNDER, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 4, 248, 4, 248),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYSHOCK, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FAKE_OUT, MOVE_TEETER_DANCE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_FROST_BREATH, MOVE_PSYSHOCK, MOVE_NASTY_PLOT, MOVE_LOVELY_KISS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_BLIZZARD, MOVE_LOVELY_KISS, MOVE_REFLECT, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_BLIZZARD, MOVE_HYPER_VOICE, MOVE_FAKE_OUT, MOVE_AURORA_VEIL},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_GUILLOTINE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_FEINT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_PINSIRITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_3] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_X_SCISSOR, MOVE_THRASH, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE},
        .heldItem = ITEM_PINSIRITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PINSIR_4] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_BUG_BITE, MOVE_EARTHQUAKE, MOVE_FEINT, MOVE_ME_FIRST},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_HEAD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_GIGA_IMPACT, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_BODY_SLAM, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_HEAD_CHARGE, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_THUNDER_WAVE, MOVE_TAUNT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(220, 0, 244, 0, 0, 44),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_GYARADOSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_BOUNCE, MOVE_DRAGON_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(200, 0, 8, 252, 4, 44),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_SHARD, MOVE_DRILL_RUN, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 252, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_WHIRLPOOL, MOVE_SING, MOVE_PERISH_SONG, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DITTO_1] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DITTO_2] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DITTO_3] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DITTO_4] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_HYPER_VOICE, MOVE_WORK_UP},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_WISH, MOVE_CURSE, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 172, 0, 84, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_AQUA_RING, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_DISCHARGE, MOVE_HIDDEN_POWER, MOVE_LIGHT_SCREEN, MOVE_MAGNET_RISE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_DISCHARGE, MOVE_WISH, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_YAWN, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SACRED_FIRE, MOVE_SUPERPOWER, MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SACRED_FIRE, MOVE_SUPERPOWER, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_LAVA_PLUME, MOVE_WISH, MOVE_HEAL_BELL, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_YAWN, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SURF, MOVE_ANCIENTPOWER, MOVE_ICE_BEAM, MOVE_SHELL_SMASH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ANCIENTPOWER, MOVE_ICE_BEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(128, 0, 128, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OMASTAR_3] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_OMASTAR_4] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SURF, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_STONE_EDGE, MOVE_AQUA_TAIL, MOVE_SUPERPOWER, MOVE_RAIN_DANCE},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_STONE_AXE, MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KABUTOPS_3] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_STONE_AXE, MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KABUTOPS_4] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WATERFALL, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_AERODACTYLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_IRON_HEAD, MOVE_FIRE_FANG, MOVE_ICE_FANG},
        .heldItem = ITEM_AERODACTYLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(188, 0, 144, 0, 176, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_YAWN},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_REST},
        .heldItem = ITEM_SNORLIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_RETURN, MOVE_HIGH_HORSEPOWER, MOVE_BELLY_DRUM, MOVE_RECYCLE},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HEAT_CRASH, MOVE_CURSE, MOVE_RECYCLE},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_FREEZE_DRY, MOVE_SHEER_COLD, MOVE_MIND_READER, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_FREEZE_DRY, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_ROOST},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_FROST_BREATH, MOVE_HAIL, MOVE_AURORA_VEIL, MOVE_TAILWIND},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_GLACIATE, MOVE_TOXIC, MOVE_AURORA_VEIL},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_HIDDEN_POWER, MOVE_ROOST},
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_BOLT_BEAK, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_TAILWIND},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(244, 0, 80, 64, 56, 64),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_AEROBLAST, MOVE_SCORCHING_SANDS, MOVE_U_TURN},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_AEROBLAST, MOVE_SOLARBEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 44, 0, 0, 216),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_BURN_UP, MOVE_AEROBLAST, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_EXTREMESPEED},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_RUSH, MOVE_IRON_TAIL, MOVE_AQUA_JET, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 128, 128, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_STOMPING_TANTRUM, MOVE_DRAGON_TAIL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_AROMATHERAPY, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_BODY_SLAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_POLLEN_PUFF, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FIRE_BLAST, MOVE_ERUPTION, MOVE_SCORCHING_SANDS, MOVE_SOLARBEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_BURN_UP, MOVE_SOLARBEAM, MOVE_SCORCHING_SANDS, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLARBEAM, MOVE_SCORCHING_SANDS, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_AQUA_TAIL, MOVE_SUPERPOWER, MOVE_SCALE_SHOT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_SUPERPOWER, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_EXTREMESPEED, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_AQUA_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FURRET_3] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_SUPER_FANG, MOVE_KNOCK_OFF, MOVE_SWAGGER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FURRET_4] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_SUPER_FANG, MOVE_KNOCK_OFF, MOVE_EXTREMESPEED, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_HURRICANE, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_HYPNOSIS},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_NIGHT_SHADE, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NOCTOWL_3] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_ROOST, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NOCTOWL_4] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_HEAT_WAVE, MOVE_FEATHERDANCE, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 128, 128, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LEDIAN_1] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_U_TURN, MOVE_TAILWIND, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEDIAN_2] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_AERIAL_ACE, MOVE_THUNDERPUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEDIAN_3] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LEDIAN_4] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_ACROBATICS, MOVE_CLOSE_COMBAT, MOVE_VICTORY_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARIADOS_1] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_POISON_JAB, MOVE_STICKY_WEB, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARIADOS_2] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_POISON_JAB, MOVE_FELL_STINGER, MOVE_SHADOW_SNEAK, MOVE_AGILITY},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARIADOS_3] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_SUCKER_PUNCH, MOVE_STICKY_WEB, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARIADOS_4] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_MEGAHORN, MOVE_SUCKER_PUNCH, MOVE_RAGE_POWDER, MOVE_STICKY_WEB},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_ACROBATICS, MOVE_U_TURN, MOVE_HYPNOSIS, MOVE_ROOST},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_HYPNOSIS, MOVE_TAUNT, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SUPER_FANG, MOVE_TAILWIND, MOVE_TAUNT, MOVE_WIDE_GUARD},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(40, 0, 220, 0, 248, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SCALD, MOVE_CHARGE_BEAM, MOVE_STOCKPILE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_VOLT_SWITCH, MOVE_ICY_WIND, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_HEAT_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 0, 0, 16),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYSHOCK, MOVE_TRICK, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_MIRACLE_EYE, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER_CAGE, MOVE_ELECTRIC_TERRAIN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_AMPHAROSITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERPUNCH, MOVE_BRICK_BREAK, MOVE_SCREECH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER_CAGE, MOVE_REST, MOVE_TOXIC, MOVE_COTTON_GUARD},
        .heldItem = ITEM_AMPHAROSITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AMPHAROS_5] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER_CAGE, MOVE_ELECTROWEB, MOVE_FOCUS_BLAST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_STRENGTH_SAP, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BELLOSSOM_3] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SOLARBEAM, MOVE_FIERY_DANCE, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BELLOSSOM_4] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_APPLE_ACID, MOVE_STRENGTH_SAP, MOVE_FLORAL_HEALING, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_BELLY_DRUM},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AZUMARILL_3] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RAIN_DANCE, MOVE_AQUA_RING},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AZUMARILL_4] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_EXPLOSION, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SUDOWOODO_3] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_FOUL_PLAY, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUDOWOODO_4] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_COUNTER, MOVE_COPYCAT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_FOCUS_BLAST, MOVE_HYPNOSIS},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_POLITOED_3] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_PROTECT},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 164, 96),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_POLITOED_4] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 188, 60, 8, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_SEED_BOMB, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_INFESTATION, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JUMPLUFF_3] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_STRENGTH_SAP, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_COTTON_GUARD},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JUMPLUFF_4] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP, MOVE_HELPING_HAND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SOLARBEAM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUNFLORA_3] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SUNFLORA_4] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SEED_FLARE, MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_FLOWER_SHIELD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ACID_SPRAY, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_QUAGSIRE_3] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_QUAGSIRE_4] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_POWER_GEM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_STORED_POWER, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_MORNING_SUN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_DREAM_EATER, MOVE_YAWN, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_SNARL, MOVE_CONFUSE_RAY, MOVE_MOONLIGHT, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_PAYBACK, MOVE_CURSE, MOVE_MOONLIGHT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_SNARL, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_FIRE_BLAST, MOVE_DRAGON_TAIL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 4, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 188, 0, 68, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_YAWN, MOVE_HEAL_PULSE, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(224, 0, 32, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(224, 0, 252, 0, 32, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WOBBUFFET_3] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(224, 0, 32, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WOBBUFFET_4] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_RETURN, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GIRAFARIG_3] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT, MOVE_PROTECT, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GIRAFARIG_4] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_GYRO_BALL, MOVE_VOLT_SWITCH, MOVE_STEALTH_ROCK, MOVE_SPIKES},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_GYRO_BALL, MOVE_DRILL_RUN, MOVE_EXPLOSION, MOVE_POWER_TRICK},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_RAPID_SPIN, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_BODY_SLAM, MOVE_DRAGON_RUSH, MOVE_HEADBUTT, MOVE_ROOST},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_BODY_SLAM, MOVE_YAWN, MOVE_STEALTH_ROCK, MOVE_ROOST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUNSPARCE_3] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_COIL, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DUNSPARCE_4] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_BODY_SLAM, MOVE_STEALTH_ROCK, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_ROOST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_SANDSTORM, MOVE_ROOST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLIGAR_3] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_ROOST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLIGAR_4] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_CURSE},
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 56, 0, 200, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_DRAGON_TAIL, MOVE_STEALTH_ROCK, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_5] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ICE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_METRONOME, MOVE_THUNDER_WAVE, MOVE_HEAL_BELL},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_FACADE, MOVE_SUPER_FANG, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SNARL, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_LIQUIDATION, MOVE_EXPLOSION, MOVE_SWORDS_DANCE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QWILFISH_3] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SCALD, MOVE_HAZE, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_QWILFISH_4] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_ACID_SPRAY, MOVE_ICY_WIND, MOVE_TOXIC_SPIKES, MOVE_DESTINY_BOND},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_U_TURN, MOVE_BULLET_PUNCH, MOVE_CLOSE_COMBAT, MOVE_DUAL_WINGBEAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS(96, 252, 0, 0, 160, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_U_TURN, MOVE_BULLET_PUNCH, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS(252, 136, 0, 0, 36, 84),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB, MOVE_SHELL_SMASH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SKITTER_SMACK, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_POWER_TRICK},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_POWER_SPLIT, MOVE_STICKY_WEB},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_REVERSAL, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, MOVE_ROCK_BLAST, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_HERACRONITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_MEGAHORN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_RETURN, MOVE_SLEEP_TALK, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_4] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_FIRE_BLAST, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_SHELL_SMASH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_MAGMA_STORM, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGCARGO_3] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_MAGMA_STORM, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGCARGO_4] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_HEAT_WAVE, MOVE_YAWN, MOVE_SWAGGER, MOVE_PROTECT},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CORSOLA_1] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_2] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_POWER_GEM, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_3] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CORSOLA_4] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_ICY_WIND, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_LIFE_DEW},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_FIRE_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 252, 0, 44),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_WATERFALL, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_SCALE_SHOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OCTILLERY_3] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_OCTOLOCK, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_OCTILLERY_4] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_OCTOLOCK, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_OCTILLERY_5] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_WATER_SPOUT, MOVE_SLUDGE_WAVE, MOVE_BULLET_SEED, MOVE_ROCK_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DELIBIRD_1] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_ICE_PUNCH, MOVE_BRAVE_BIRD, MOVE_GUNK_SHOT, MOVE_POWER_UP_PUNCH},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DELIBIRD_2] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_DEFOG, MOVE_TOXIC, MOVE_DESTINY_BOND, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DELIBIRD_3] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_ICY_WIND, MOVE_SPIKES, MOVE_HAIL, MOVE_AURORA_VEIL},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DELIBIRD_4] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_ICY_WIND, MOVE_FAKE_OUT, MOVE_BESTOW, MOVE_DESTINY_BOND},
        .heldItem = ITEM_MACHO_BRACE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SCALD, MOVE_MIRROR_COAT, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_ENIGMA_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 40, 0, 220, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANTINE_3] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SCALD, MOVE_DEFOG, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(248, 0, 40, 0, 220, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANTINE_4] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_ROOST, MOVE_WIDE_GUARD},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_AUTOTOMIZE},
        .heldItem = ITEM_CELL_BATTERY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BODY_PRESS, MOVE_SPIKES, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_TOXIC, MOVE_SPIKES, MOVE_WHIRLWIND, MOVE_ROOST},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_TOXIC, MOVE_WHIRLWIND, MOVE_STEALTH_ROCK, MOVE_TAILWIND},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_FIERY_WRATH, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CRUNCH, MOVE_FLAME_CHARGE, MOVE_HOWL},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_FIERY_WRATH, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_HOUNDOOMINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_5] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_HEAT_WAVE, MOVE_FIERY_WRATH, MOVE_SOLARBEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_HOUNDOOMINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SNIPE_SHOT, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_PROTECT},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_HEAD_SMASH, MOVE_ICE_SHARD},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_SANDSTORM, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 128, 252, 128, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_HIDDEN_POWER, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 56, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 56, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_ICE_BEAM, MOVE_FOUL_PLAY, MOVE_RECOVER, MOVE_TRICK_ROOM},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_MEGAHORN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_RETURN, MOVE_JUMP_KICK, MOVE_SUCKER_PUNCH, MOVE_NO_RETREAT},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STANTLER_3] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_EARTHQUAKE, MOVE_HYPNOSIS, MOVE_SUBSTITUTE, MOVE_GRAVITY},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STANTLER_4] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_RETURN, MOVE_HYPNOSIS, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SMEARGLE_1] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPORE, MOVE_AQUA_RING, MOVE_TAIL_GLOW, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SMEARGLE_2] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPORE, MOVE_SHELL_SMASH, MOVE_SPIKY_SHIELD, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SMEARGLE_3] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPORE, MOVE_MAGIC_COAT, MOVE_STEALTH_ROCK, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SMEARGLE_4] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_BOOMBURST, MOVE_ERUPTION, MOVE_WATER_SPOUT, MOVE_DRAGON_ENERGY},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SMEARGLE_5] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPORE, MOVE_FOLLOW_ME, MOVE_SPIKY_SHIELD, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_PURSUIT, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_RAPID_SPIN, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONTOP_3] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_BULLET_PUNCH, MOVE_COUNTER, MOVE_RAPID_SPIN, MOVE_TOXIC},
        .heldItem = ITEM_COBA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONTOP_4] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FEINT, MOVE_FAKE_OUT, MOVE_WIDE_GUARD},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 132, 100, 0, 20, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_MILK_DRINK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK, MOVE_MILK_DRINK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_MILK_DRINK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_STEALTH_ROCK, MOVE_HELPING_HAND, MOVE_MILK_DRINK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_HEAL_BELL, MOVE_SOFTBOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_SOFTBOILED},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_MUD_BOMB, MOVE_TOXIC, MOVE_MINIMIZE, MOVE_SOFTBOILED},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_BESTOW, MOVE_SOFTBOILED},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 4, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_DISCHARGE, MOVE_AURA_SPHERE, MOVE_SCALD, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_DISCHARGE, MOVE_ROAR, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_EXTREMESPEED},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_ERUPTION, MOVE_SACRED_FIRE, MOVE_EXTRASENSORY, MOVE_SNARL},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_LAVA_PLUME, MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 4, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_SLEEP_TALK, MOVE_REST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 212, 36, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_SNARL, MOVE_TOXIC, MOVE_REST},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TAILWIND, MOVE_ROAR},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 48, 44, 108, 56),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_PAYBACK, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_PURSUIT, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_TYRANITARITE,
        .ev = TRAINER_PARTY_EVS(120, 136, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(180, 252, 0, 0, 0, 76),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_DUAL_CHOP, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SCEPTILITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 196, 60, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_REVERSAL, MOVE_U_TURN, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_BULK_UP, MOVE_BATON_PASS, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_BLAZIKENITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_VACUUM_WAVE},
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_LIQUIDATION, MOVE_BODY_PRESS, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ROAR},
        .heldItem = ITEM_JABOCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SWAMPERTITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICY_WIND, MOVE_WIDE_GUARD},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 44, 64, 0, 136, 12),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_THUNDER_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIGHTYENA_3] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_FOUL_PLAY, MOVE_SUPER_FANG, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIGHTYENA_4] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_SNARL, MOVE_HYPER_VOICE, MOVE_BURNING_JEALOUSY, MOVE_SUPER_FANG},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_EXTREMESPEED, MOVE_STOMPING_TANTRUM, MOVE_SEED_BOMB, MOVE_BELLY_DRUM},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(148, 252, 0, 0, 0, 108),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_SWAGGER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LINOONE_3] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SUPER_FANG, MOVE_THUNDER_WAVE, MOVE_TRICK, MOVE_SUBSTITUTE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LINOONE_4] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_EXTREMESPEED, MOVE_SHADOW_CLAW, MOVE_BELLY_DRUM, MOVE_PROTECT},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(220, 252, 0, 0, 0, 36),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEAUTIFLY_1] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEAUTIFLY_2] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEAUTIFLY_3] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_INFESTATION, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEAUTIFLY_4] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_TAILWIND, MOVE_SAFEGUARD},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSTOX_1] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_BUG_BUZZ, MOVE_TOXIC_THREAD, MOVE_IRON_DEFENSE, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUSTOX_2] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC_THREAD, MOVE_QUIVER_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DUSTOX_3] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_U_TURN, MOVE_DEFOG, MOVE_TAILWIND, MOVE_TOXIC_THREAD},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DUSTOX_4] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_ELECTROWEB, MOVE_STRUGGLE_BUG, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_LEAF_STORM, MOVE_FAKE_OUT, MOVE_TICKLE},
        .heldItem = ITEM_TANGA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_MUDDY_WATER, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_FAKE_OUT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_SOLARBEAM, MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_DEFOG},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_SOLARBEAM, MOVE_HEAT_WAVE, MOVE_BEAT_UP, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 0, 0, 128),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_BATON_PASS, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_DUAL_WINGBEAT, MOVE_DIG, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NINJASK_3] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_X_SCISSOR, MOVE_DUAL_WINGBEAT, MOVE_FINAL_GAMBIT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NINJASK_4] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_U_TURN, MOVE_SKITTER_SMACK, MOVE_DEFOG, MOVE_SPITE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHEDINJA_1] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_X_SCISSOR, MOVE_POLTERGEIST, MOVE_WILL_O_WISP, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SHEDINJA_2] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_X_SCISSOR, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHEDINJA_3] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_POLTERGEIST, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SHEDINJA_4] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_HEAL_BLOCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 2, 0, 2, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_U_TURN},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_BOOMBURST, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWELLOW_3] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FEATHERDANCE, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWELLOW_4] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_HEAT_WAVE, MOVE_BOOMBURST, MOVE_QUICK_GUARD, MOVE_TAILWIND},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SEED_BOMB, MOVE_FOCUS_PUNCH, MOVE_SPORE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SPORE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_BULLET_SEED, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_SPORE},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SPINDA_1] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_RETURN, MOVE_SUPERPOWER, MOVE_SUCKER_PUNCH, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SPINDA_2] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_WILD_CHARGE, MOVE_FAKE_OUT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SPINDA_3] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_RETURN, MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPINDA_4] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_BODY_SLAM, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_KNOCK_OFF, MOVE_DEFOG},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_AGILITY, MOVE_ROOST},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PELIPPER_3] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 36, 0, 224, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PELIPPER_4] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_WIDE_GUARD},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_INFESTATION, MOVE_STUN_SPORE, MOVE_TAILWIND, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MASQUERAIN_3] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_HURRICANE, MOVE_STICKY_WEB, MOVE_BATON_PASS, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MASQUERAIN_4] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_ICY_WIND, MOVE_OMINOUS_WIND, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_LIQUIDATION, MOVE_AVALANCHE, MOVE_HEAVY_SLAM, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_TOXIC, MOVE_NOBLE_ROAR, MOVE_SOAK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WATER_SPOUT, MOVE_EARTHQUAKE, MOVE_ICY_WIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 4, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_PLAY_ROUGH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE, MOVE_TICKLE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DELCATTY_3] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_THUNDER_WAVE, MOVE_WISH, MOVE_COSMIC_POWER, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DELCATTY_4] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_ICY_WIND, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_HEAL_BELL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KECLEON_3] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_BIND, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RECOVER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KECLEON_4] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_FOUL_PLAY, MOVE_SWAGGER, MOVE_TRICK_ROOM, MOVE_RECOVER},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_POWER_TRICK, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_ICE_BEAM, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHORE_UP},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_STORED_POWER, MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_SANDSTORM, MOVE_SHORE_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLARBEAM, MOVE_EARTH_POWER, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_LAVA_PLUME, MOVE_RAPID_SPIN, MOVE_YAWN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 232, 0, 28, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TORKOAL_3] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_LAVA_PLUME, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TORKOAL_4] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_SOLARBEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_RECOVER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_FOUL_PLAY, MOVE_FAKE_OUT, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_SABLENITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SABLEYE_3] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_KNOCK_OFF, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SABLEYE_4] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_QUASH, MOVE_HELPING_HAND},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_BOUNCE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_BLIZZARD, MOVE_FISSURE},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_REST, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_REST},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUVDISC_1] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER, MOVE_DRAINING_KISS},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUVDISC_2] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_WHIRLPOOL, MOVE_SWEET_KISS, MOVE_AQUA_RING, MOVE_SUBSTITUTE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUVDISC_3] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_ICY_WIND, MOVE_HEAL_PULSE, MOVE_SAFEGUARD, MOVE_PROTECT},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUVDISC_4] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_ICY_WIND, MOVE_AQUA_JET, MOVE_HEAL_PULSE, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CRAWDAUNT_3] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_WHIRLPOOL, MOVE_SWITCHEROO, MOVE_TAUNT, MOVE_COUNTER},
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRAWDAUNT_4] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_GUILLOTINE, MOVE_TAUNT},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_MIRROR_COAT, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .heldItem = ITEM_ENIGMA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_HAZE, MOVE_RECOVER, MOVE_FLIP_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_MUDDY_WATER, MOVE_HYPNOSIS, MOVE_COIL, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 56, 116, 84, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_WATERFALL, MOVE_JAW_LOCK, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_LIQUIDATION, MOVE_JAW_LOCK, MOVE_POISON_JAB, MOVE_TAUNT},
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHARPEDO_3] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_PROTECT},
        .heldItem = ITEM_SHARPEDONITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHARPEDO_4] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_SNARL, MOVE_ICY_WIND, MOVE_DESTINY_BOND, MOVE_PROTECT},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRAGON_RUSH, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_CLANGING_SCALES, MOVE_EARTH_POWER, MOVE_BOOMBURST, MOVE_U_TURN},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_CLANGING_SCALES, MOVE_EARTHQUAKE, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_REVERSAL, MOVE_BULLET_PUNCH, MOVE_ENDURE, MOVE_BELLY_DRUM},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_REVENGE, MOVE_TOXIC, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(12, 0, 252, 0, 244, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_FAKE_OUT, MOVE_WIDE_GUARD},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SWITCHEROO},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_MANECTITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_MANECTITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_5] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_LIGHT_SCREEN, MOVE_PROTECT},
        .heldItem = ITEM_MANECTITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_ERUPTION, MOVE_SOLARBEAM, MOVE_FLASH_CANNON, MOVE_SUNNY_DAY},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN},
        .heldItem = ITEM_PASSHO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CAMERUPT_3] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_NATURE_POWER, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CAMERUPTITE,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 252, 0, 128),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CAMERUPT_4] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_ERUPTION, MOVE_SCORCHING_SANDS, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_CAMERUPTITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_ICE_BALL, MOVE_EARTHQUAKE, MOVE_ENCORE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_METRONOME,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_FROST_BREATH, MOVE_TOXIC, MOVE_STOCKPILE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SURF, MOVE_SUPER_FANG, MOVE_TOXIC, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_AQUA_RING, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_NASTY_PLOT, MOVE_DOUBLE_TEAM, MOVE_SANDSTORM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 8, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CACTURNE_3] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_SYNTHESIS, MOVE_SWITCHEROO, MOVE_ENCORE, MOVE_SPIKES},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_CACTURNE_4] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_LEECH_SEED, MOVE_ENCORE, MOVE_DESTINY_BOND, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_WATER_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_FROST_BREATH, MOVE_SHEER_COLD, MOVE_SPIKES, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 0, 96, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_SPIKES},
        .heldItem = ITEM_GLALITITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_HYPER_VOICE, MOVE_ICY_WIND, MOVE_DARK_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_GLALITITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_ANCIENTPOWER, MOVE_TOXIC, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WILL_O_WISP, MOVE_STEALTH_ROCK, MOVE_MORNING_SUN},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SOLROCK_3] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SOLROCK_4] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_HYPNOSIS, MOVE_HEAL_BLOCK, MOVE_HELPING_HAND, MOVE_MORNING_SUN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_EERIE_SPELL, MOVE_EARTH_POWER, MOVE_CALM_MIND, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUNATONE_3] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_SAND_TOMB, MOVE_HYPNOSIS, MOVE_COSMIC_POWER, MOVE_MOONLIGHT},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUNATONE_4] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HELPING_HAND, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_RECOVER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYSHOCK, MOVE_MIRROR_COAT, MOVE_RECOVER, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GRUMPIG_3] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_POWER_GEM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GRUMPIG_4] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_ICY_WIND, MOVE_SIMPLE_BEAM, MOVE_TEETER_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PLUSLE_3] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_ELECTROWEB, MOVE_CAPTIVATE, MOVE_FAKE_TEARS, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PLUSLE_4] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_NUZZLE, MOVE_ENCORE, MOVE_HELPING_HAND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_GRASS_KNOT, MOVE_MUD_SLAP, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MINUN_3] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_ENCORE, MOVE_SWEET_KISS, MOVE_WISH, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MINUN_4] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_ELECTROWEB, MOVE_HELPING_HAND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAWILE_1] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PSYCHIC_FANGS},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAWILE_2] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MAWILITE,
        .ev = TRAINER_PARTY_EVS(92, 252, 0, 0, 0, 164),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAWILE_3] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_FIRE_FANG, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_MAWILITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAWILE_4] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_METAL_BURST, MOVE_ATTRACT, MOVE_TAUNT},
        .heldItem = ITEM_WEPEAR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_THUNDERPUNCH, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_FAKE_OUT},
        .heldItem = ITEM_MEDICHAMITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_FAKE_OUT, MOVE_ACUPRESSURE, MOVE_HELPING_HAND, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_FIRE_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_ROOST},
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS(72, 252, 0, 0, 0, 184),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_HYPER_VOICE, MOVE_TOXIC, MOVE_COTTON_GUARD, MOVE_ROOST},
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_TOXIC, MOVE_HEAL_BELL, MOVE_COTTON_GUARD, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ALTARIA_5] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_PURSUIT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_ENCORE},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_PUNISHMENT},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_EARTHQUAKE, MOVE_BULLET_SEED, MOVE_FIRE_PUNCH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 200, 60, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SWALOT_3] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_INFESTATION, MOVE_YAWN},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SWALOT_4] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_VENOM_DRENCH, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLARBEAM, MOVE_HURRICANE, MOVE_ROOST, MOVE_SUNNY_DAY},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_AIR_SLASH, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TROPIUS_3] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_ENDURE, MOVE_ROOST},
        .heldItem = ITEM_STARF_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TROPIUS_4] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_TAILWIND, MOVE_SUNNY_DAY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_TAUNT},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_FOCUS_BLAST, MOVE_FIRE_BLAST, MOVE_SURF},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_ICY_WIND, MOVE_TAUNT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_WATERFALL, MOVE_SUCKER_PUNCH, MOVE_ICE_BEAM, MOVE_SHELL_SMASH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_HUNTAIL_3] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_AQUA_RING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HUNTAIL_4] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_AQUA_RING, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOREBYSS_3] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_CLAMP, MOVE_COIL, MOVE_AQUA_RING, MOVE_BATON_PASS},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOREBYSS_4] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_REST, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_ME_FIRST, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ABSOL_3] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_FIRE_BLAST, MOVE_IRON_TAIL},
        .heldItem = ITEM_ABSOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_ABSOL_4] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ABSOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_POLTERGEIST, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CURSE, MOVE_THUNDER_WAVE, MOVE_TRICK},
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BANETTE_3] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_POLTERGEIST, MOVE_GUNK_SHOT, MOVE_DESTINY_BOND, MOVE_TAUNT},
        .heldItem = ITEM_BANETTITE,
        .ev = TRAINER_PARTY_EVS(40, 252, 0, 0, 0, 216),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_4] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_OMINOUS_WIND, MOVE_ICY_WIND, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_AQUA_TAIL, MOVE_IRON_TAIL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEVIPER_3] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_REST, MOVE_COIL},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEVIPER_4] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_AQUA_TAIL, MOVE_GLARE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_FINAL_GAMBIT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZANGOOSE_3] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_QUICK_ATTACK, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(124, 132, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZANGOOSE_4] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_FINAL_GAMBIT, MOVE_QUICK_GUARD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_WATERFALL, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_RAIN_DANCE, MOVE_YAWN},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(52, 0, 0, 0, 252, 204),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_RELICANTH_3] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_BODY_SLAM, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RELICANTH_4] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_AGGRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_AGGRONITE,
        .ev = TRAINER_PARTY_EVS(248, 56, 0, 0, 200, 4),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_HIGH_HORSEPOWER, MOVE_PROTECT},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_BODY_SLAM, MOVE_AVALANCHE, MOVE_TAILWIND, MOVE_HAIL},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CASTFORM_3] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_CLEAR_SMOG, MOVE_DEFOG, MOVE_TAILWIND, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CASTFORM_4] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_REST, MOVE_SNORE, MOVE_TAILWIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ENCORE, MOVE_U_TURN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_METRONOME, MOVE_TOXIC, MOVE_ENCORE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VOLBEAT_3] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_TAIL_GLOW, MOVE_SUBSTITUTE, MOVE_THUNDER_WAVE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VOLBEAT_4] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_ENCORE, MOVE_HELPING_HAND, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_TAIL_GLOW, MOVE_MOONLIGHT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_ENCORE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ILLUMISE_3] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_TAIL_GLOW, MOVE_SUBSTITUTE, MOVE_ENCORE, MOVE_BATON_PASS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ILLUMISE_4] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_DEFOG, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_MIRROR_COAT, MOVE_INGRAIN, MOVE_RECOVER},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_METEOR_BEAM, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_ROCK_POLISH},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_SEED_BOMB, MOVE_STONE_EDGE, MOVE_CURSE, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_ROCK_SLIDE, MOVE_LEECH_SEED, MOVE_SANDSTORM, MOVE_RECOVER},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_AQUA_JET},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ROCK_BLAST, MOVE_CROSS_POISON, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 44, 212),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ACCELEROCK, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ARMALDO_5] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_LIQUIDATION, MOVE_ACCELEROCK, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_AURA_SPHERE, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYSHOCK, MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_WILL_O_WISP},
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_STORED_POWER, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_AURA_SPHERE, MOVE_PROTECT},
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_OUTRAGE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_ROOST},
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS(44, 252, 0, 0, 0, 212),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRACO_METEOR, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST},
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_RETURN, MOVE_DRAGON_DANCE, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS(116, 62, 2, 0, 156, 172),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH},
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_THUNDERPUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_ROCK_POLISH},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 8, 248),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_EXPLOSION, MOVE_SUNNY_DAY, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 180, 0, 76, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SAFEGUARD, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_ROCK_POLISH},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 8, 248),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_FROST_BREATH, MOVE_CHARGE_BEAM, MOVE_AMNESIA, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ANCIENTPOWER, MOVE_TOXIC, MOVE_SWAGGER, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICY_WIND, MOVE_SAFEGUARD, MOVE_HAIL, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_POLISH},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 4, 248),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_GRAVITY, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_ROOST},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYSHOCK, MOVE_AURA_SPHERE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_LATIASITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRACO_METEOR, MOVE_TOXIC, MOVE_DEFOG, MOVE_HEALING_WISH},
        .heldItem = ITEM_LATIASITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 76, 0, 4, 176),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHO_SHIFT, MOVE_RECOVER, MOVE_HEAL_PULSE, MOVE_TAILWIND},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_DRACO_METEOR, MOVE_AURA_SPHERE, MOVE_AIR_SLASH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_PSYCHIC_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_HEALING_WISH, MOVE_RECOVER, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHIMECHO_3] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_TAUNT, MOVE_DEFOG, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHIMECHO_4] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_HEAL_PULSE, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TORTERRA_1] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SYNTHESIS},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 60, 196, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TORTERRA_2] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_STONE_EDGE, MOVE_ROCK_POLISH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TORTERRA_3] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TORTERRA_4] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_LEAF_BLADE, MOVE_HEADLONG_RUSH, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_INFERNAPE_1] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INFERNAPE_2] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_FIRE_BLAST, MOVE_VACUUM_WAVE, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INFERNAPE_3] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDERPUNCH, MOVE_MACH_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INFERNAPE_4] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_MACH_PUNCH, MOVE_FAKE_OUT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EMPOLEON_1] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 76, 0, 180, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_EMPOLEON_2] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_HYDRO_CANNON, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_YAWN},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EMPOLEON_3] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_WAVE_CRASH, MOVE_EARTHQUAKE, MOVE_DRILL_PECK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EMPOLEON_4] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_GRASS_KNOT, MOVE_PROTECT},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARAPTOR_1] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STARAPTOR_2] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STARAPTOR_3] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_FINAL_GAMBIT, MOVE_DEFOG},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STARAPTOR_4] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_FINAL_GAMBIT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 68, 0, 0, 0, 188),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BIBAREL_1] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_TAIL_SLAP, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BIBAREL_2] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_RETURN, MOVE_AQUA_JET, MOVE_SWORDS_DANCE, MOVE_YAWN},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BIBAREL_3] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_WATERFALL, MOVE_QUICK_ATTACK, MOVE_NO_RETREAT, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BIBAREL_4] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_STEALTH_ROCK, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KRICKETUNE_1] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_FELL_STINGER, MOVE_POWER_UP_PUNCH, MOVE_THIEF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KRICKETUNE_2] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_INFESTATION, MOVE_PERISH_SONG, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KRICKETUNE_3] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_THIEF, MOVE_ENDEAVOR, MOVE_TAUNT, MOVE_STICKY_WEB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KRICKETUNE_4] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_PERISH_SONG, MOVE_STICKY_WEB, MOVE_PROTECT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUXRAY_1] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_VOLT_TACKLE, MOVE_ICE_FANG, MOVE_PLAY_ROUGH, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUXRAY_2] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_VOLT_TACKLE, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS, MOVE_THROAT_CHOP},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUXRAY_3] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUXRAY_4] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROSERADE_1] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_SPIKES},
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROSERADE_2] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROSERADE_3] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROSERADE_4] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_SOLARBEAM, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAMPARDOS_1] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_ROCK_POLISH},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAMPARDOS_2] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAMPARDOS_3] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_AVALANCHE, MOVE_HAMMER_ARM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAMPARDOS_4] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PURSUIT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BASTIODON_1] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_METAL_BURST, MOVE_TOXIC, MOVE_ROAR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BASTIODON_2] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_METAL_BURST, MOVE_TOXIC, MOVE_REST, MOVE_PROTECT},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BASTIODON_3] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_STONE_EDGE, MOVE_BEHEMOTH_BASH, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASTIODON_4] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_BEHEMOTH_BASH, MOVE_TAUNT, MOVE_MAGIC_COAT, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MOTHIM_1] = {
        .species = SPECIES_MOTHIM,
        .moves = {MOVE_HURRICANE, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOTHIM_2] = {
        .species = SPECIES_MOTHIM,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_HIDDEN_POWER, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_MOTHIM_3] = {
        .species = SPECIES_MOTHIM,
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOTHIM_4] = {
        .species = SPECIES_MOTHIM,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_HURRICANE, MOVE_ELECTROWEB, MOVE_TAILWIND},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VESPIQUEN_1] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_TOXIC, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VESPIQUEN_2] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_BUG_BUZZ, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VESPIQUEN_3] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_VENOSHOCK, MOVE_TOXIC},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VESPIQUEN_4] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_U_TURN, MOVE_HEAL_ORDER, MOVE_DESTINY_BOND, MOVE_TAILWIND},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PACHIRISU_1] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_DISCHARGE, MOVE_HEADBUTT, MOVE_BITE, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PACHIRISU_2] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_NUZZLE, MOVE_U_TURN, MOVE_SUPER_FANG, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PACHIRISU_3] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_NUZZLE, MOVE_VOLT_SWITCH, MOVE_SUPER_FANG, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PACHIRISU_4] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_FOLLOW_ME, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_FLOATZEL_1] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_WATER_PULSE, MOVE_MUD_SHOT, MOVE_ICY_WIND, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLOATZEL_2] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_AQUA_JET, MOVE_ROCK_TOMB, MOVE_TAIL_SLAP, MOVE_BULK_UP},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLOATZEL_3] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLOATZEL_4] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHERRIM_1] = {
        .species = SPECIES_CHERRIM,
        .moves = {MOVE_SOLAR_BLADE, MOVE_PLAY_ROUGH, MOVE_SUNNY_DAY, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHERRIM_2] = {
        .species = SPECIES_CHERRIM,
        .moves = {MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_NATURE_POWER, MOVE_HEALING_WISH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHERRIM_3] = {
        .species = SPECIES_CHERRIM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHERRIM_4] = {
        .species = SPECIES_CHERRIM,
        .moves = {MOVE_SOLARBEAM, MOVE_WEATHER_BALL, MOVE_POLLEN_PUFF, MOVE_HELPING_HAND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GASTRODON_1] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GASTRODON_2] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SURF, MOVE_SLUDGE_WAVE, MOVE_COUNTER, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GASTRODON_3] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_RECOVER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GASTRODON_4] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_CLEAR_SMOG, MOVE_RECOVER},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(128, 0, 148, 100, 132, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AMBIPOM_1] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AMBIPOM_2] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_U_TURN, MOVE_THIEF, MOVE_FLING, MOVE_FAKE_OUT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AMBIPOM_3] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_RETURN, MOVE_LOW_KICK, MOVE_ACROBATICS, MOVE_FAKE_OUT},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRIFBLIM_1] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_ACROBATICS, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 0, 128),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRIFBLIM_2] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_THUNDERBOLT, MOVE_STRENGTH_SAP, MOVE_CALM_MIND},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DRIFBLIM_3] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_ACROBATICS, MOVE_THUNDERBOLT, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 88, 0, 240, 0, 180),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DRIFBLIM_4] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_TAILWIND},
        .heldItem = ITEM_GHOST_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 252, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LOPUNNY_1] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_MACH_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOPUNNY_2] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_ENTRAINMENT, MOVE_SWITCHEROO, MOVE_ENCORE, MOVE_FAKE_OUT},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOPUNNY_3] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH},
        .heldItem = ITEM_LOPUNNITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOPUNNY_4] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_FAKE_OUT},
        .heldItem = ITEM_LOPUNNITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISMAGIUS_1] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MISMAGIUS_2] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_MYSTICAL_FIRE, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MISMAGIUS_3] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_DAZZLING_GLEAM, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MISMAGIUS_4] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PERISH_SONG, MOVE_TAUNT, MOVE_DESTINY_BOND},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HONCHKROW_1] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD, MOVE_SUPERPOWER, MOVE_TAUNT},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HONCHKROW_2] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_NIGHT_SLASH, MOVE_DRILL_PECK, MOVE_SUCKER_PUNCH, MOVE_TAILWIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HONCHKROW_3] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_HEAT_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HONCHKROW_4] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_SNARL, MOVE_OBLIVION_WING, MOVE_HEAT_WAVE, MOVE_ICY_WIND},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PURUGLY_1] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PURUGLY_2] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_BODY_SLAM, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PURUGLY_3] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_PLAY_ROUGH, MOVE_HONE_CLAWS, MOVE_HYPNOSIS},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PURUGLY_4] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_ASSURANCE, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_HYPNOSIS},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKUNTANK_1] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_PURSUIT, MOVE_DEFOG},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SKUNTANK_2] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_ACID_SPRAY, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SKUNTANK_3] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_MEMENTO},
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKUNTANK_4] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_VENOSHOCK, MOVE_POISON_GAS, MOVE_VENOM_DRENCH, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BRONZONG_1] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_GYRO_BALL, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BRONZONG_2] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_DOOM_DESIRE, MOVE_BODY_PRESS, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BRONZONG_3] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_DOOM_DESIRE, MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BRONZONG_4] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_GYRO_BALL, MOVE_HYPNOSIS, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 160, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CHATOT_1] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHATOT_2] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHATOT_3] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_OMINOUS_WIND, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHATOT_4] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_HEAT_WAVE, MOVE_TAILWIND},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SPIRITOMB_1] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_PURSUIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPIRITOMB_2] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_SHADOW_BALL, MOVE_DREAM_EATER, MOVE_CALM_MIND, MOVE_HYPNOSIS},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPIRITOMB_3] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SPIRITOMB_4] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_DESTINY_BOND},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GARCHOMPITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GARCHOMP_3] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_STONE_EDGE, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARCHOMP_4] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(240, 0, 176, 0, 0, 92),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GARCHOMP_5] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_GARCHOMPITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUCARIO_1] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BULLET_PUNCH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUCARIO_2] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_METEOR_MASH, MOVE_BLAZE_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS(60, 60, 124, 0, 124, 140),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUCARIO_3] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_DARK_PULSE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUCARIO_4] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLASH_CANNON, MOVE_EXTREMESPEED, MOVE_PROTECT},
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_HIPPOWDON_1] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HIPPOWDON_2] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_CURSE, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HIPPOWDON_3] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROAR, MOVE_STEALTH_ROCK, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HIPPOWDON_4] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_HIPPOWDON_5] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAPION_1] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_AQUA_TAIL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAPION_2] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_WHIRLWIND, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DRAPION_3] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_CROSS_POISON, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAPION_4] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_CROSS_POISON, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXICROAK_1] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TOXICROAK_2] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_DARK_PULSE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOXICROAK_3] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_TAUNT, MOVE_FAKE_OUT},
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXICROAK_4] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_FEINT, MOVE_FAKE_OUT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(64, 252, 0, 0, 0, 192),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CARNIVINE_1] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_NATURAL_GIFT, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_WATMEL_BERRY,
        .ev = TRAINER_PARTY_EVS(188, 252, 0, 0, 0, 68),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CARNIVINE_2] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(188, 252, 0, 0, 0, 68),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CARNIVINE_3] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ACID_SPRAY, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CARNIVINE_4] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER, MOVE_DEFOG, MOVE_RAGE_POWDER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LUMINEON_1] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LUMINEON_2] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FLIP_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 248, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUMINEON_3] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 248, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUMINEON_4] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_SCALD, MOVE_FLIP_TURN, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 248, 8),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ABOMASNOW_1] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_LEAF_STORM, MOVE_EARTHQUAKE, MOVE_ICE_SHARD},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_ABOMASNOW_2] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_ABOMASNOW_3] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_SEED_BOMB, MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABOMASNOW_4] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_AURORA_VEIL, MOVE_PROTECT},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WEAVILE_1] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_FAKE_OUT},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEAVILE_2] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_PSYCHO_CUT, MOVE_ICE_SHARD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEAVILE_3] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEAVILE_4] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_BEAT_UP, MOVE_TAUNT, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGNEZONE_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_STEEL_BEAM, MOVE_HIDDEN_POWER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGNEZONE_2] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(8, 0, 4, 244, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGNEZONE_3] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MAGNEZONE_4] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LICKILICKY_1] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(172, 252, 0, 0, 0, 84),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LICKILICKY_2] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_BELLY_DRUM},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LICKILICKY_3] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LICKILICKY_4] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_ENDURE},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RHYPERIOR_1] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_ROCK_POLISH},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RHYPERIOR_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYPERIOR_3] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RHYPERIOR_4] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HAMMER_ARM, MOVE_PROTECT},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYPERIOR_5] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_THUNDERPUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_TANGROWTH_1] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 28, 0, 228, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_TANGROWTH_2] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 0, 212, 0, 48, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TANGROWTH_3] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_SOLARBEAM, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TANGROWTH_4] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_INGRAIN},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(248, 0, 212, 0, 48, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TANGROWTH_5] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_SOLAR_BLADE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_GROWTH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTIVIRE_1] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_PLASMA_FISTS, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTIVIRE_2] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_THUNDER, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_PSYCHIC},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTIVIRE_3] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_BULLDOZE, MOVE_THUNDER_WAVE, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ELECTIVIRE_4] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_PLASMA_FISTS, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGMORTAR_1] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_SCORCHING_SANDS, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGMORTAR_2] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_MACH_PUNCH, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGMORTAR_3] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_LAVA_PLUME, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_TAUNT},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGMORTAR_4] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, MOVE_BELCH, MOVE_PROTECT},
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOGEKISS_1] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOGEKISS_2] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_FLAMETHROWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOGEKISS_3] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDER_WAVE, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 0, 0, 96),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TOGEKISS_4] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AIR_SLASH, MOVE_ENCORE, MOVE_TAILWIND, MOVE_FOLLOW_ME},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 204, 0, 24, 28),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_YANMEGA_1] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YANMEGA_2] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_PROTECT},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_YANMEGA_3] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ANCIENTPOWER, MOVE_PROTECT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_YANMEGA_4] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LEAFEON_1] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_IRON_TAIL, MOVE_X_SCISSOR, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAFEON_2] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_TROP_KICK, MOVE_KNOCK_OFF, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LEAFEON_3] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAFEON_4] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_TROP_KICK, MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_HEAL_BELL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLACEON_1] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GLACEON_2] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_CELEBRATE},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLACEON_3] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GLACEON_4] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_GLACIATE, MOVE_HEAL_BELL, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GLACEON_5] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_BLIZZARD, MOVE_YAWN, MOVE_AURORA_VEIL, MOVE_SUBSTITUTE},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLISCOR_1] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_ROOST},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(244, 0, 44, 0, 68, 152),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLISCOR_2] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_FACADE, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(184, 252, 0, 0, 0, 72),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLISCOR_3] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(212, 4, 36, 0, 252, 4),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GLISCOR_4] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 124, 0, 0, 132, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_1] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD, MOVE_FISSURE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(44, 212, 0, 0, 252, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAMOSWINE_2] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_3] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_4] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_5] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICY_WIND, MOVE_SUBSTITUTE, MOVE_ROAR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PORYGON_Z_1] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGON_Z_2] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONVERSION, MOVE_RECOVER},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGON_Z_3] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGON_Z_4] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_DARK_PULSE, MOVE_BLIZZARD, MOVE_ELECTROWEB},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GALLADE_1] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_PSYCHO_CUT, MOVE_CLOSE_COMBAT, MOVE_NIGHT_SLASH, MOVE_LEAF_BLADE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALLADE_2] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_PSYCHO_CUT, MOVE_DRAIN_PUNCH, MOVE_SHADOW_SNEAK, MOVE_BULK_UP},
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GALLADE_3] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALLADE_4] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALLADE_5] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_QUICK_GUARD, MOVE_DESTINY_BOND},
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PROBOPASS_1] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_VOLT_SWITCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(172, 0, 0, 252, 0, 84),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PROBOPASS_2] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PROBOPASS_3] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_TAUNT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PROBOPASS_4] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK, MOVE_WIDE_GUARD},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUSKNOIR_1] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUSKNOIR_2] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_UP_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDERPUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(212, 252, 44, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUSKNOIR_3] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_NIGHT_SHADE, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUSKNOIR_4] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_POLTERGEIST, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_HELPING_HAND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(236, 0, 36, 0, 236, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_FROSLASS_1] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_POLTERGEIST, MOVE_TRIPLE_AXEL, MOVE_WAKE_UP_SLAP, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FROSLASS_2] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_SPIKES},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSLASS_3] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSLASS_4] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICY_WIND, MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_DESTINY_BOND},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSLASS_5] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_BLIZZARD, MOVE_SUBSTITUTE, MOVE_THUNDER_WAVE, MOVE_AURORA_VEIL},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UXIE_1] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_PSYCHIC, MOVE_SNORE, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UXIE_2] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_MYSTICAL_POWER, MOVE_YAWN, MOVE_MEMENTO, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 40, 0, 0, 216),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UXIE_3] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_PSYCHIC, MOVE_U_TURN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_UXIE_4] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_MAGIC_COAT, MOVE_HELPING_HAND, MOVE_TRICK_ROOM},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MESPRIT_1] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_PSYCHIC, MOVE_U_TURN, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 0, 16, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MESPRIT_2] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_STORED_POWER, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(208, 0, 0, 0, 48, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MESPRIT_3] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_MYSTICAL_POWER, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MESPRIT_4] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_KNOCK_OFF, MOVE_HELPING_HAND, MOVE_TRICK_ROOM},
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 0, 240, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_AZELF_1] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_FIRE_BLAST, MOVE_EXPLOSION, MOVE_TAUNT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AZELF_2] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_KNOCK_OFF, MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_MAGIC_COAT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AZELF_3] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_MYSTICAL_POWER, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AZELF_4] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_EXPLOSION, MOVE_PROTECT},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HEATRAN_1] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_MAGMA_STORM, MOVE_SOLARBEAM, MOVE_EARTH_POWER, MOVE_TAUNT},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HEATRAN_2] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HEATRAN_3] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_MAGMA_STORM, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 40, 0, 220, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HEATRAN_4] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, MOVE_PROTECT},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(56, 0, 8, 192, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIGIGAS_1] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_GIGA_IMPACT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGIGIGAS_2] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGIGIGAS_3] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_RETURN, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGIGIGAS_4] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_THUNDER_WAVE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 64, 84, 0, 112, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CRESSELIA_1] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_MOONLIGHT},
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRESSELIA_2] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_PSYCHO_SHIFT, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRESSELIA_3] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_STORED_POWER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_MOONLIGHT},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 0, 0, 16),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CRESSELIA_4] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SERPERIOR_1] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEAF_BLADE, MOVE_AQUA_TAIL, MOVE_SCALE_SHOT, MOVE_COIL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SERPERIOR_2] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SERPERIOR_3] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_LEECH_SEED, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SERPERIOR_4] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EMBOAR_1] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EMBOAR_2] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SCALD, MOVE_SCORCHING_SANDS, MOVE_YAWN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EMBOAR_3] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_SCALD, MOVE_SUBSTITUTE, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_EMBOAR_4] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SAMUROTT_1] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_LIQUIDATION, MOVE_SACRED_SWORD, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SAMUROTT_2] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_SECRET_SWORD},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SAMUROTT_3] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SAMUROTT_4] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_DETECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WATCHOG_1] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WATCHOG_2] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WATCHOG_3] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_MEAN_LOOK},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WATCHOG_4] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_FACADE, MOVE_THUNDER_WAVE, MOVE_HELPING_HAND, MOVE_DETECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_STOUTLAND_1] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_RETURN, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STOUTLAND_2] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_ICE_FANG},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STOUTLAND_3] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_RETURN, MOVE_THUNDER_WAVE, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STOUTLAND_4] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_RETURN, MOVE_PURSUIT, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STOUTLAND_5] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_ICE_FANG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 0, 0, 128),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LIEPARD_1] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LIEPARD_2] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_NIGHT_DAZE, MOVE_BURNING_JEALOUSY, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LIEPARD_3] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE, MOVE_ENCORE, MOVE_COPYCAT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LIEPARD_4] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_FAKE_OUT, MOVE_SNARL, MOVE_TAUNT, MOVE_CHARM},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SIMISAGE_1] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_SEED_BOMB, MOVE_KNOCK_OFF, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMISAGE_2] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMISAGE_3] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SIMISAGE_4] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_SEED_BOMB, MOVE_ROCK_SLIDE, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SIMISEAR_1] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMISEAR_2] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_FIRE_PUNCH, MOVE_KNOCK_OFF, MOVE_ACROBATICS, MOVE_POWER_UP_PUNCH},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMISEAR_3] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_RECYCLE, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_APICOT_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMISEAR_4] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_HEAT_WAVE, MOVE_GRASS_KNOT, MOVE_SCORCHING_SANDS, MOVE_PROTECT},
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SIMIPOUR_1] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMIPOUR_2] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_WATERFALL, MOVE_SUPERPOWER, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMIPOUR_3] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMIPOUR_4] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MUSHARNA_1] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_MOONLIGHT, MOVE_CALM_MIND},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUSHARNA_2] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_TOXIC, MOVE_CALM_MIND, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUSHARNA_3] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_STORED_POWER, MOVE_MOONLIGHT, MOVE_CALM_MIND, MOVE_BARRIER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MUSHARNA_4] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_UNFEZANT_1] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_RETURN, MOVE_BRAVE_BIRD, MOVE_NIGHT_SLASH, MOVE_U_TURN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_UNFEZANT_2] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_GIGA_IMPACT, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_UNFEZANT_3] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_U_TURN, MOVE_HYPNOSIS, MOVE_FEATHERDANCE, MOVE_TAILWIND},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_UNFEZANT_4] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_TAILWIND, MOVE_DETECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEBSTRIKA_1] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZEBSTRIKA_2] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_VOLT_TACKLE, MOVE_FLARE_BLITZ, MOVE_THUNDER_WAVE, MOVE_THUNDEROUS_KICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEBSTRIKA_3] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_VOLT_TACKLE, MOVE_FLARE_BLITZ, MOVE_THUNDEROUS_KICK, MOVE_FLAME_CHARGE},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZEBSTRIKA_4] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_VOLT_TACKLE, MOVE_PURSUIT, MOVE_FEINT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GIGALITH_1] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIGALITH_2] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLDOZE, MOVE_CURSE, MOVE_GRAVITY},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GIGALITH_3] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_ROCK_BLAST, MOVE_EXPLOSION, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GIGALITH_4] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SWOOBAT_1] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_STORED_POWER, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWOOBAT_2] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_TOXIC, MOVE_TRICK, MOVE_PROTECT},
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWOOBAT_3] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_SUPER_FANG, MOVE_TOXIC, MOVE_MAGIC_COAT, MOVE_TAILWIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWOOBAT_4] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_RAPID_SPIN, MOVE_SANDSTORM},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXCADRILL_3] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN},
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EXCADRILL_4] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AUDINO_1] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE, MOVE_ENTRAINMENT, MOVE_HEAL_BELL},
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AUDINO_2] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_AUDINITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AUDINO_3] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AUDINO_4] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_ICY_WIND, MOVE_DECORATE, MOVE_HEAL_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AUDINO_5] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HEAL_PULSE, MOVE_DECORATE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_AUDINITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CONKELDURR_1] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_POISON_JAB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 20, 0, 236, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CONKELDURR_2] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_FLING, MOVE_BULK_UP},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(0, 252, 20, 0, 236, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CONKELDURR_3] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(48, 252, 0, 0, 0, 208),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CONKELDURR_4] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_HIGH_HORSEPOWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEISMITOAD_1] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEISMITOAD_2] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(60, 0, 196, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SEISMITOAD_3] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_REST, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 244, 0, 12, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SEISMITOAD_4] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THROH_1] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_STORM_THROW, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_RECOVER},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_THROH_2] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_STORM_THROW, MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_THROH_3] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_CIRCLE_THROW, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_THROH_4] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_STORM_THROW, MOVE_ROCK_SLIDE, MOVE_HELPING_HAND, MOVE_MAT_BLOCK},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SAWK_1] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SAWK_2] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BULLDOZE, MOVE_TAUNT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWK_3] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_REVERSAL, MOVE_THROAT_CHOP, MOVE_DUAL_CHOP, MOVE_BULK_UP},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWK_4] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_QUICK_GUARD},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAVANNY_1] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_SKITTER_SMACK, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_STICKY_WEB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAVANNY_2] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_LEAF_STORM, MOVE_ELECTROWEB, MOVE_KNOCK_OFF, MOVE_STICKY_WEB},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_LEAVANNY_3] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_SLASH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAVANNY_4] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_SKITTER_SMACK, MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_PROTECT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCOLIPEDE_1] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCOLIPEDE_2] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SCOLIPEDE_3] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_MEGAHORN, MOVE_ENDEAVOR, MOVE_TOXIC_SPIKES, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCOLIPEDE_4] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WHIMSICOTT_1] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_U_TURN, MOVE_TAUNT, MOVE_LIGHT_SCREEN, MOVE_TAILWIND},
        .heldItem = ITEM_COBA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WHIMSICOTT_2] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_NATURE_POWER, MOVE_LEECH_SEED, MOVE_ENCORE, MOVE_MISTY_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WHIMSICOTT_3] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_ENERGY_BALL, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_SWITCHEROO},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WHIMSICOTT_4] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_TAILWIND, MOVE_ENCORE, MOVE_COTTON_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WHIMSICOTT_5] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_BEAT_UP, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_LEECH_SEED},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LILLIGANT_1] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_PETAL_DANCE, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 0, 248),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LILLIGANT_2] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_SOLARBEAM, MOVE_POLLEN_PUFF, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LILLIGANT_3] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LILLIGANT_4] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_GIGA_DRAIN, MOVE_POLLEN_PUFF, MOVE_HIDDEN_POWER, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LILLIGANT_5] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_SOLARBEAM, MOVE_POLLEN_PUFF, MOVE_HIDDEN_POWER, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BASCULIN_RED_STRIPED_1] = {
        .species = SPECIES_BASCULIN_RED_STRIPED,
        .moves = {MOVE_LIQUIDATION, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_ENDURE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULIN_RED_STRIPED_2] = {
        .species = SPECIES_BASCULIN_RED_STRIPED,
        .moves = {MOVE_WAVE_CRASH, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULIN_RED_STRIPED_3] = {
        .species = SPECIES_BASCULIN_RED_STRIPED,
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_BOUNCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULIN_BLUE_STRIPED_1] = {
        .species = SPECIES_BASCULIN_BLUE_STRIPED,
        .moves = {MOVE_WAVE_CRASH, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BASCULIN_BLUE_STRIPED_2] = {
        .species = SPECIES_BASCULIN_BLUE_STRIPED,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_FINAL_GAMBIT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KROOKODILE_1] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KROOKODILE_2] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_POWER_TRIP, MOVE_IRON_TAIL, MOVE_BULK_UP},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KROOKODILE_3] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_TAUNT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KROOKODILE_4] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DARMANITAN_1] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_2] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FIRE_PUNCH, MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_3] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DARMANITAN_4] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_ENCORE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MARACTUS_1] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_SEED_FLARE, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER, MOVE_TAIL_GLOW},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MARACTUS_2] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_SOLARBEAM, MOVE_SYNTHESIS, MOVE_COTTON_GUARD, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 252, 0, 128),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MARACTUS_3] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_SPIKES, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MARACTUS_4] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_SEED_FLARE, MOVE_HIDDEN_POWER, MOVE_TAIL_GLOW, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRUSTLE_1] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CRUSTLE_2] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRUSTLE_3] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_ROCK_BLAST, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CRUSTLE_4] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SCRAFTY_1] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_ROSELI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCRAFTY_2] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_FAKE_OUT, MOVE_BULK_UP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCRAFTY_3] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SUPER_FANG, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SCRAFTY_4] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SNARL, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SIGILYPH_1] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_PSYSHOCK, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ENERGY_BALL},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIGILYPH_2] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_STORED_POWER, MOVE_PSYCHO_SHIFT, MOVE_COSMIC_POWER, MOVE_ROOST},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 0, 0, 240),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIGILYPH_3] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIGILYPH_4] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_PSYSHOCK, MOVE_HYPNOSIS, MOVE_GRAVITY, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COFAGRIGUS_1] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_COFAGRIGUS_2] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_COFAGRIGUS_3] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_BODY_PRESS, MOVE_INFESTATION, MOVE_PAIN_SPLIT, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_COFAGRIGUS_4] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CARRACOSTA_1] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_AQUA_JET, MOVE_STONE_EDGE, MOVE_SUPERPOWER, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CARRACOSTA_2] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CARRACOSTA_3] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 192, 0, 64, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CARRACOSTA_4] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARCHEOPS_1] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_STONE_EDGE, MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCHEOPS_2] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_HEAD_SMASH, MOVE_DUAL_WINGBEAT, MOVE_FLYING_PRESS, MOVE_U_TURN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCHEOPS_3] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_STONE_EDGE, MOVE_ENDEAVOR, MOVE_TAUNT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCHEOPS_4] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_HEAT_WAVE, MOVE_TAILWIND, MOVE_QUICK_GUARD},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_GARBODOR_1] = {
        .species = SPECIES_GARBODOR,
        .moves = {MOVE_GUNK_SHOT, MOVE_BODY_SLAM, MOVE_DRAIN_PUNCH, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARBODOR_2] = {
        .species = SPECIES_GARBODOR,
        .moves = {MOVE_BODY_SLAM, MOVE_PAIN_SPLIT, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GARBODOR_3] = {
        .species = SPECIES_GARBODOR,
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_INFESTATION, MOVE_PROTECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARBODOR_4] = {
        .species = SPECIES_GARBODOR,
        .moves = {MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_HAZE, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ZOROARK_1] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_LOW_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZOROARK_2] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_3] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_NIGHT_SLASH, MOVE_SHADOW_CLAW, MOVE_TAUNT, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZOROARK_4] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_NIGHT_DAZE, MOVE_BURNING_JEALOUSY, MOVE_TAUNT, MOVE_DETECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CINCCINO_1] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_ROCK_BLAST, MOVE_BONE_RUSH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINCCINO_2] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_BONE_RUSH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINCCINO_3] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_BONE_RUSH, MOVE_TRIPLE_AXEL, MOVE_SING},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINCCINO_4] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_TRIPLE_AXEL, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOTHITELLE_1] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYSHOCK, MOVE_MIRROR_COAT, MOVE_MIRACLE_EYE, MOVE_TICKLE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GOTHITELLE_2] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOTHITELLE_3] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GOTHITELLE_4] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_FAKE_OUT, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 84, 0, 172, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_REUNICLUS_1] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK_ROOM},
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_REUNICLUS_2] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REUNICLUS_3] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REUNICLUS_4] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYCHIC, MOVE_HELPING_HAND, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SWANNA_1] = {
        .species = SPECIES_SWANNA,
        .moves = {MOVE_LIQUIDATION, MOVE_BRAVE_BIRD, MOVE_TRIPLE_AXEL, MOVE_STEEL_WING},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWANNA_2] = {
        .species = SPECIES_SWANNA,
        .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_ROOST, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWANNA_3] = {
        .species = SPECIES_SWANNA,
        .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWANNA_4] = {
        .species = SPECIES_SWANNA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VANILLUXE_1] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VANILLUXE_2] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_NATURAL_GIFT, MOVE_ICE_SHARD, MOVE_EXPLOSION},
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_VANILLUXE_3] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_FROST_BREATH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_AUTOTOMIZE},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VANILLUXE_4] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_HYPER_VOICE, MOVE_AURORA_VEIL, MOVE_PROTECT},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_SAWSBUCK_1] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWSBUCK_2] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HEADBUTT, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWSBUCK_3] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HORN_LEECH, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWSBUCK_4] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_TROP_KICK, MOVE_RETURN, MOVE_STOMPING_TANTRUM, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EMOLGA_1] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_WILD_CHARGE, MOVE_ACROBATICS, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EMOLGA_2] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EMOLGA_3] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH, MOVE_AIR_SLASH, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EMOLGA_4] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_NUZZLE, MOVE_ENCORE, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ESCAVALIER_1] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_DRILL_RUN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESCAVALIER_2] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_MEGAHORN, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESCAVALIER_3] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_X_SCISSOR, MOVE_PURSUIT, MOVE_METAL_BURST, MOVE_SWAGGER},
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ESCAVALIER_4] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_RAZOR_SHELL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AMOONGUSS_1] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_CLEAR_SMOG, MOVE_SPORE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AMOONGUSS_2] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_INGRAIN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AMOONGUSS_3] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_FOUL_PLAY, MOVE_SPORE, MOVE_DOUBLE_TEAM, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AMOONGUSS_4] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 56, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_JELLICENT_1] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_JELLICENT_2] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_SCALD, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 176, 0, 84, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JELLICENT_3] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_SCALD, MOVE_HEX, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JELLICENT_4] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ALOMOMOLA_1] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ALOMOMOLA_2] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALOMOMOLA_3] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_DIVE, MOVE_AQUA_JET, MOVE_MIRROR_COAT, MOVE_WISH},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALOMOMOLA_4] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_LIQUIDATION, MOVE_HEAL_PULSE, MOVE_HELPING_HAND, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(228, 0, 252, 0, 28, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GALVANTULA_1] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_X_SCISSOR, MOVE_WILD_CHARGE, MOVE_CROSS_POISON, MOVE_STICKY_WEB},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GALVANTULA_2] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GALVANTULA_3] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_ELECTRO_BALL, MOVE_BUG_BUZZ, MOVE_AGILITY, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GALVANTULA_4] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_DISCHARGE, MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FERROTHORN_1] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_POWER_WHIP, MOVE_GYRO_BALL, MOVE_INGRAIN, MOVE_CURSE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FERROTHORN_2] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_FERROTHORN_3] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_GYRO_BALL, MOVE_PAYBACK, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_FERROTHORN_4] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_GYRO_BALL, MOVE_POWER_WHIP, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 88, 88, 0, 80, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_KLINKLANG_1] = {
        .species = SPECIES_KLINKLANG,
        .moves = {MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_RETURN, MOVE_SHIFT_GEAR},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLINKLANG_2] = {
        .species = SPECIES_KLINKLANG,
        .moves = {MOVE_GEAR_GRIND, MOVE_THUNDER_WAVE, MOVE_SCREECH, MOVE_MAGNET_RISE},
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLINKLANG_3] = {
        .species = SPECIES_KLINKLANG,
        .moves = {MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KLINKLANG_4] = {
        .species = SPECIES_KLINKLANG,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_STEEL_BEAM, MOVE_POWER_GEM, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EELEKTROSS_1] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_WILD_CHARGE, MOVE_THUNDERBOLT, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EELEKTROSS_2] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_THUNDER_CAGE, MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EELEKTROSS_3] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_BRICK_BREAK, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_EELEKTROSS_4] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_CAGE, MOVE_GRASS_KNOT, MOVE_PROTECT},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BEHEEYEM_1] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_STORED_POWER, MOVE_SIGNAL_BEAM, MOVE_NASTY_PLOT, MOVE_RECOVER},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BEHEEYEM_2] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BEHEEYEM_3] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYCHIC, MOVE_SIMPLE_BEAM, MOVE_TRICK, MOVE_RECOVER},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BEHEEYEM_4] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CHANDELURE_1] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHANDELURE_2] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHANDELURE_3] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHANDELURE_4] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HAXORUS_1] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HAXORUS_2] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HAXORUS_3] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DUAL_CHOP, MOVE_EARTHQUAKE, MOVE_TAUNT, MOVE_ROAR},
        .heldItem = ITEM_HABAN_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAXORUS_4] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_1] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_ICICLE_CRASH, MOVE_PLAY_ROUGH, MOVE_LIQUIDATION, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEARTIC_2] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_3] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_DOUBLE_TEAM, MOVE_HAIL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_4] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_5] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_ICE_HAMMER, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CRYOGONAL_1] = {
        .species = SPECIES_CRYOGONAL,
        .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_RECOVER, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRYOGONAL_2] = {
        .species = SPECIES_CRYOGONAL,
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_HIDDEN_POWER, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(196, 0, 0, 248, 0, 64),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRYOGONAL_3] = {
        .species = SPECIES_CRYOGONAL,
        .moves = {MOVE_TOXIC, MOVE_REFLECT_TYPE, MOVE_IRON_DEFENSE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRYOGONAL_4] = {
        .species = SPECIES_CRYOGONAL,
        .moves = {MOVE_BLIZZARD, MOVE_ICY_WIND, MOVE_AURORA_VEIL, MOVE_PROTECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ACCELGOR_1] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ACCELGOR_2] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_U_TURN, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ACCELGOR_3] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL, MOVE_ENDURE},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ACCELGOR_4] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENCORE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STUNFISK_1] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_TOXIC, MOVE_SNAP_TRAP, MOVE_SHORE_UP, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STUNFISK_2] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_DISCHARGE, MOVE_EARTH_POWER, MOVE_SCALD, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STUNFISK_3] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_YAWN, MOVE_ENDURE},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STUNFISK_4] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_SNAP_TRAP, MOVE_SHORE_UP, MOVE_SANDSTORM, MOVE_PROTECT},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MIENSHAO_1] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIENSHAO_2] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIENSHAO_3] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_CALM_MIND, MOVE_ENDURE, MOVE_BATON_PASS},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIENSHAO_4] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT, MOVE_QUICK_GUARD},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRUDDIGON_1] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_SCALE_SHOT, MOVE_CRUNCH, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRUDDIGON_2] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_DRAGON_HAMMER, MOVE_FIRE_PUNCH, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRUDDIGON_3] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DRUDDIGON_4] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_DRAGON_HAMMER, MOVE_SUCKER_PUNCH, MOVE_GLARE, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOLURK_1] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_POLTERGEIST, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 128, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLURK_2] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_DYNAMICPUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLURK_3] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_SHADOW_PUNCH, MOVE_GYRO_BALL, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GOLURK_4] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_POLTERGEIST, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLURK_5] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_POLTERGEIST, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BISHARP_1] = {
        .species = SPECIES_BISHARP,
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BISHARP_2] = {
        .species = SPECIES_BISHARP,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_LOW_SWEEP, MOVE_TAUNT},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BISHARP_3] = {
        .species = SPECIES_BISHARP,
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_METAL_BURST, MOVE_TAUNT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BISHARP_4] = {
        .species = SPECIES_BISHARP,
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BOUFFALANT_1] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_HEAD_CHARGE, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BOUFFALANT_2] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BOUFFALANT_3] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BOUFFALANT_4] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_HEAD_CHARGE, MOVE_WILD_CHARGE, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BRAVIARY_1] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAVIARY_2] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_SKY_ATTACK, MOVE_CLOSE_COMBAT, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAVIARY_3] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_BULK_UP, MOVE_ROOST},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BRAVIARY_4] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROCK_SLIDE, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MANDIBUZZ_1] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 136, 0, 108, 16),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MANDIBUZZ_2] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_PUNISHMENT, MOVE_SWAGGER, MOVE_ROOST, MOVE_SUBSTITUTE},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MANDIBUZZ_3] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_INCINERATE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANDIBUZZ_4] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_WHIRLWIND, MOVE_TAILWIND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(220, 0, 252, 0, 36, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HEATMOR_1] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_FIRE_LASH, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HEATMOR_2] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HEATMOR_3] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SPIT_UP, MOVE_SWALLOW, MOVE_STOCKPILE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HEATMOR_4] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_HEAT_WAVE, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DURANT_1] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_HONE_CLAWS},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DURANT_2] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_ENTRAINMENT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DURANT_3] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_IRON_HEAD, MOVE_IRON_DEFENSE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DURANT_4] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_PROTECT},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HYDREIGON_1] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_BELCH},
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYDREIGON_2] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRAGON_RUSH, MOVE_THROAT_CHOP, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HYDREIGON_3] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DARK_PULSE, MOVE_FLASH_CANNON, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYDREIGON_4] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCARONA_1] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_BUG_BUZZ, MOVE_FIRE_BLAST, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCARONA_2] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_BUG_BUZZ, MOVE_FIERY_DANCE, MOVE_HURRICANE, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VOLCARONA_3] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FIRE_SPIN, MOVE_DEFOG, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VOLCARONA_4] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_HEAT_WAVE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COBALION_1] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COBALION_2] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_STEEL_BEAM, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH, MOVE_CALM_MIND},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COBALION_3] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_VOLT_SWITCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COBALION_4] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TERRAKION_1] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TERRAKION_2] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TERRAKION_3] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SACRED_SWORD, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TERRAKION_4] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_QUICK_GUARD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 0, 0, 128),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VIRIZION_1] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VIRIZION_2] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_LEAF_BLADE, MOVE_FOCUS_BLAST, MOVE_STONE_EDGE, MOVE_MEGAHORN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_VIRIZION_3] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE, MOVE_SYNTHESIS, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VIRIZION_4] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TORNADUS_1] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_HURRICANE, MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TORNADUS_2] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_SWAGGER, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TORNADUS_3] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_ACROBATICS, MOVE_SUPERPOWER, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TORNADUS_THERIAN_1] = {
        .species = SPECIES_TORNADUS_THERIAN,
        .moves = {MOVE_AIR_SLASH, MOVE_DARK_PULSE, MOVE_TAILWIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TORNADUS_THERIAN_2] = {
        .species = SPECIES_TORNADUS_THERIAN,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TORNADUS_THERIAN_3] = {
        .species = SPECIES_TORNADUS_THERIAN,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_DARK_PULSE, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(8, 0, 0, 248, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THUNDURUS_1] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_REVENGE, MOVE_U_TURN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_THUNDURUS_2] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_WILDBOLT_STORM, MOVE_VOLT_SWITCH, MOVE_FOCUS_BLAST, MOVE_TAUNT},
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THUNDURUS_3] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_WILD_CHARGE, MOVE_KNOCK_OFF, MOVE_SUPERPOWER, MOVE_PROTECT},
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_1] = {
        .species = SPECIES_THUNDURUS_THERIAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_2] = {
        .species = SPECIES_THUNDURUS_THERIAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_3] = {
        .species = SPECIES_THUNDURUS_THERIAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANDORUS_1] = {
        .species = SPECIES_LANDORUS,
        .moves = {MOVE_SANDSEAR_STORM, MOVE_SLUDGE_WAVE, MOVE_PSYCHIC, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANDORUS_2] = {
        .species = SPECIES_LANDORUS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANDORUS_3] = {
        .species = SPECIES_LANDORUS,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANDORUS_THERIAN_1] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANDORUS_THERIAN_2] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 0, 8, 8),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LANDORUS_THERIAN_3] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_SANDSEAR_STORM, MOVE_U_TURN, MOVE_HIDDEN_POWER, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 44, 136, 48, 28),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHESNAUGHT_1] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_DRUM_BEATING, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHESNAUGHT_2] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHESNAUGHT_3] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CHESNAUGHT_4] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DELPHOX_1] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DELPHOX_2] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_MYSTICAL_FIRE, MOVE_PSYSHOCK, MOVE_SCORCHING_SANDS, MOVE_CALM_MIND},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DELPHOX_3] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_WILL_O_WISP, MOVE_FIRE_SPIN, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DELPHOX_4] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_HEAT_WAVE, MOVE_DAZZLING_GLEAM, MOVE_SCORCHING_SANDS, MOVE_HYPNOSIS},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRENINJA_1] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_GUNK_SHOT, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_GRENINJA_2] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_SCALD, MOVE_TAUNT, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRENINJA_3] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_WATER_SHURIKEN, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRENINJA_4] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 64, 0, 236, 0, 208),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_DIGGERSBY_1] = {
        .species = SPECIES_DIGGERSBY,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DIGGERSBY_2] = {
        .species = SPECIES_DIGGERSBY,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DIGGERSBY_3] = {
        .species = SPECIES_DIGGERSBY,
        .moves = {MOVE_SUPER_FANG, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_SPIKES},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(208, 0, 252, 0, 0, 48),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DIGGERSBY_4] = {
        .species = SPECIES_DIGGERSBY,
        .moves = {MOVE_RETURN, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TALONFLAME_1] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 252, 8, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TALONFLAME_2] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_STEEL_WING, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TALONFLAME_3] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_ACROBATICS, MOVE_ROOST, MOVE_BULK_UP, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TALONFLAME_4] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_VIVILLON_1] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VIVILLON_2] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_INFESTATION, MOVE_POWDER, MOVE_DEFOG, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VIVILLON_3] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_HURRICANE, MOVE_INFESTATION, MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VIVILLON_4] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_SLEEP_POWDER, MOVE_TAILWIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 160, 96, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PYROAR_1] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PYROAR_2] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_SOLARBEAM, MOVE_EXTREMESPEED},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PYROAR_3] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_OVERHEAT, MOVE_HYPER_VOICE, MOVE_SCORCHING_SANDS, MOVE_YAWN},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PYROAR_4] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_SNARL, MOVE_SCORCHING_SANDS, MOVE_HELPING_HAND, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLOETTE_ETERNAL_1] = {
        .species = SPECIES_FLOETTE_ETERNAL,
        .moves = {MOVE_LIGHT_OF_RUIN, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLOETTE_ETERNAL_2] = {
        .species = SPECIES_FLOETTE_ETERNAL,
        .moves = {MOVE_LIGHT_OF_RUIN, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLOETTE_ETERNAL_3] = {
        .species = SPECIES_FLOETTE_ETERNAL,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HELPING_HAND, MOVE_SYNTHESIS, MOVE_SAFEGUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_1] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_DEFOG, MOVE_SYNTHESIS, MOVE_AROMATHERAPY},
        .heldItem = ITEM_BABIRI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FLORGES_2] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_3] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_SYNTHESIS, MOVE_CALM_MIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_4] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HELPING_HAND, MOVE_SYNTHESIS, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_5] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_HELPING_HAND, MOVE_SYNTHESIS, MOVE_DEFOG},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOGOAT_1] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_EARTHQUAKE, MOVE_WILD_CHARGE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOGOAT_2] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_MILK_DRINK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOGOAT_3] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_BULK_UP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOGOAT_4] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_HORN_LEECH, MOVE_GRASSY_GLIDE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PANGORO_1] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_GUNK_SHOT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PANGORO_2] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDERPUNCH, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PANGORO_3] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_POWER_TRIP, MOVE_BULLET_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252,2, 0, 2, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PANGORO_4] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_CIRCLE_THROW, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FURFROU_1] = {
        .species = SPECIES_FURFROU,
        .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_HIGH_HORSEPOWER, MOVE_WORK_UP},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FURFROU_2] = {
        .species = SPECIES_FURFROU,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_ROAR},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_FURFROU_3] = {
        .species = SPECIES_FURFROU,
        .moves = {MOVE_SNARL, MOVE_TOXIC, MOVE_SWAGGER, MOVE_COTTON_GUARD},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FURFROU_4] = {
        .species = SPECIES_FURFROU,
        .moves = {MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_TOXIC, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MEOWSTIC_1] = {
        .species = SPECIES_MEOWSTIC,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MEOWSTIC_2] = {
        .species = SPECIES_MEOWSTIC,
        .moves = {MOVE_PSYSHOCK, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_CHARM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MEOWSTIC_3] = {
        .species = SPECIES_MEOWSTIC,
        .moves = {MOVE_PSYCHIC, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MEOWSTIC_F_1] = {
        .species = SPECIES_MEOWSTIC_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(12, 0, 0, 248, 0, 248),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEOWSTIC_F_2] = {
        .species = SPECIES_MEOWSTIC_F,
        .moves = {MOVE_STORED_POWER, MOVE_SHADOW_BALL, MOVE_CHARGE_BEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEOWSTIC_F_3] = {
        .species = SPECIES_MEOWSTIC_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(12, 0, 0, 248, 0, 248),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AEGISLASH_1] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_KINGS_SHIELD},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AEGISLASH_2] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SHADOW_CLAW, MOVE_GYRO_BALL, MOVE_SHADOW_SNEAK, MOVE_KINGS_SHIELD},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 252, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AEGISLASH_3] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SHADOW_SNEAK, MOVE_KINGS_SHIELD},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_AEGISLASH_4] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD},
        .heldItem = ITEM_SPOOKY_PLATE,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 252, 0, 44),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AROMATISSE_1] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_MOONBLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 248, 8, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_AROMATISSE_2] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AROMATISSE_3] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AROMATISSE_4] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HEAL_PULSE, MOVE_PROTECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SLURPUFF_1] = {
        .species = SPECIES_SLURPUFF,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_YAWN, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLURPUFF_2] = {
        .species = SPECIES_SLURPUFF,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLURPUFF_3] = {
        .species = SPECIES_SLURPUFF,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SUBSTITUTE, MOVE_YAWN, MOVE_STICKY_WEB},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLURPUFF_4] = {
        .species = SPECIES_SLURPUFF,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_STRING_SHOT, MOVE_STICKY_WEB, MOVE_HELPING_HAND},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MALAMAR_1] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER, MOVE_LIQUIDATION},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MALAMAR_2] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MALAMAR_3] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_SUPERPOWER, MOVE_PSYCHO_CUT, MOVE_PAYBACK, MOVE_DESTINY_BOND},
        .heldItem = ITEM_DARK_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MALAMAR_4] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_KNOCK_OFF, MOVE_SUPERPOWER, MOVE_HAPPY_HOUR, MOVE_PROTECT},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BARBARACLE_1] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BARBARACLE_2] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_RAZOR_SHELL, MOVE_STONE_EDGE, MOVE_CROSS_CHOP, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARBARACLE_3] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_LIQUIDATION, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_NIGHT_SLASH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARBARACLE_4] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_RAZOR_SHELL, MOVE_FLING, MOVE_HELPING_HAND, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DRAGALGE_1] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_DRAGON_TAIL, MOVE_FLIP_TURN, MOVE_PLAY_ROUGH, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGALGE_2] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGALGE_3] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_SCALD, MOVE_SLEEP_TALK, MOVE_REST, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DRAGALGE_4] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_DRAGON_TAIL, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLAWITZER_1] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLAWITZER_2] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_SCALD, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLAWITZER_3] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_SCALD, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_FLIP_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLAWITZER_4] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_AURA_SPHERE, MOVE_HEAL_PULSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HELIOLISK_1] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_SURF, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HELIOLISK_2] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_CHARGE_BEAM, MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HELIOLISK_3] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_GLARE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HELIOLISK_4] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_ELECTROWEB, MOVE_SURF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HELIOLISK_5] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_GLARE, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYRANTRUM_1] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_ROCK_POLISH},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYRANTRUM_2] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_STONE_EDGE, MOVE_SCALE_SHOT, MOVE_CRUNCH, MOVE_POISON_FANG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANTRUM_3] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_SUBSTITUTE, MOVE_SWAGGER, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TYRANTRUM_4] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AURORUS_1] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AURORUS_2] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_REFLECT_TYPE, MOVE_AURORA_VEIL},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AURORUS_3] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_METEOR_BEAM, MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_ROCK_POLISH},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AURORUS_4] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_ICY_WIND, MOVE_DISCHARGE, MOVE_AURORA_VEIL, MOVE_PROTECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SYLVEON_1] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SYLVEON_2] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_WISH, MOVE_PROTECT, MOVE_HEAL_BELL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SYLVEON_3] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_MISTY_TERRAIN, MOVE_BATON_PASS},
        .heldItem = ITEM_MISTY_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SYLVEON_4] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_YAWN, MOVE_HELPING_HAND, MOVE_HEAL_BELL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HAWLUCHA_1] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAWLUCHA_2] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAWLUCHA_3] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_FLYING_PRESS, MOVE_BRAVE_BIRD, MOVE_STONE_EDGE, MOVE_U_TURN},
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAWLUCHA_4] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_SKY_ATTACK, MOVE_ROCK_SLIDE, MOVE_ENCORE},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEDENNE_1] = {
        .species = SPECIES_DEDENNE,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_MAGNET_RISE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEDENNE_2] = {
        .species = SPECIES_DEDENNE,
        .moves = {MOVE_TOXIC, MOVE_STUFF_CHEEKS, MOVE_RECYCLE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_MARANGA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEDENNE_3] = {
        .species = SPECIES_DEDENNE,
        .moves = {MOVE_DISCHARGE, MOVE_SUPER_FANG, MOVE_STUFF_CHEEKS, MOVE_RECYCLE},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DEDENNE_4] = {
        .species = SPECIES_DEDENNE,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_DAZZLING_GLEAM, MOVE_STUFF_CHEEKS, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CARBINK_1] = {
        .species = SPECIES_CARBINK,
        .moves = {MOVE_GYRO_BALL, MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CARBINK_2] = {
        .species = SPECIES_CARBINK,
        .moves = {MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SANDSTORM, MOVE_PROTECT},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CARBINK_3] = {
        .species = SPECIES_CARBINK,
        .moves = {MOVE_MISTY_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CARBINK_4] = {
        .species = SPECIES_CARBINK,
        .moves = {MOVE_BODY_PRESS, MOVE_REFLECT, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GOODRA_1] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOODRA_2] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_BODY_SLAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOODRA_3] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_SURF, MOVE_INFESTATION, MOVE_TOXIC, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOODRA_4] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_MUDDY_WATER, MOVE_RAIN_DANCE, MOVE_TOXIC, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KLEFKI_1] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_PLAY_ROUGH, MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_RECYCLE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KLEFKI_2] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_SUBSTITUTE},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KLEFKI_3] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KLEFKI_4] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_FAIRY_LOCK, MOVE_CRAFTY_SHIELD},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TREVENANT_1] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TREVENANT_2] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_LEECH_SEED, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TREVENANT_3] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_HORN_LEECH, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TREVENANT_4] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_LEECH_SEED, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 176, 0, 0, 80, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOURGEIST_SMALL_1] = {
        .species = SPECIES_GOURGEIST_SMALL,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEECH_SEED, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOURGEIST_1] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_EXPLOSION, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOURGEIST_LARGE_1] = {
        .species = SPECIES_GOURGEIST_LARGE,
        .moves = {MOVE_POWER_WHIP, MOVE_SPIRIT_SHACKLE, MOVE_ROCK_SLIDE, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOURGEIST_SUPER_1] = {
        .species = SPECIES_GOURGEIST_SUPER,
        .moves = {MOVE_FOUL_PLAY, MOVE_LEECH_SEED, MOVE_WILL_O_WISP, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AVALUGG_1] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_BODY_PRESS, MOVE_RAPID_SPIN, MOVE_RECOVER, MOVE_TOXIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_AVALUGG_2] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_AVALANCHE, MOVE_RAPID_SPIN, MOVE_RECOVER, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AVALUGG_3] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_GYRO_BALL},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AVALUGG_4] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_WIDE_GUARD},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NOIVERN_1] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRACO_METEOR, MOVE_AEROBLAST, MOVE_FLAMETHROWER, MOVE_BOOMBURST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NOIVERN_2] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_AEROBLAST, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NOIVERN_3] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_AEROBLAST, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_ROOST},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NOIVERN_4] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HEAT_WAVE, MOVE_BOOMBURST, MOVE_ROOST},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DECIDUEYE_1] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_LEAF_BLADE, MOVE_POLTERGEIST, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DECIDUEYE_2] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_LEAF_STORM, MOVE_SHADOW_BALL, MOVE_HURRICANE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DECIDUEYE_3] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_CURSE, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DECIDUEYE_4] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_DECIDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 160, 0, 0, 96),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_INCINEROAR_1] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_INCINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INCINEROAR_2] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_THROAT_CHOP, MOVE_CROSS_CHOP, MOVE_BULK_UP},
        .heldItem = ITEM_RAZOR_FANG,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_INCINEROAR_3] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_FAKE_OUT},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_INCINEROAR_4] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 108, 20, 0, 116, 12),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PRIMARINA_1] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_PSYCHIC},
        .heldItem = ITEM_PRIMARIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PRIMARINA_2] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_RELIC_SONG, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_SING},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PRIMARINA_3] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PRIMARINA_4] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PRIMARINA_5] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_RELIC_SONG, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_LIFE_DEW},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 128, 128, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TOUCANNON_1] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_SMACK_DOWN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOUCANNON_2] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_TAILWIND},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(92, 252, 0, 0, 0, 164),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TOUCANNON_3] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_BEAK_BLAST, MOVE_OVERHEAT, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TOUCANNON_4] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_FEATHERDANCE, MOVE_TAILWIND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 128, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUMSHOOS_1] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUMSHOOS_2] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ICE_FANG},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUMSHOOS_3] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_SUPER_FANG, MOVE_STOMPING_TANTRUM, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GUMSHOOS_4] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SUPER_FANG, MOVE_FLING},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VIKAVOLT_1] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VIKAVOLT_2] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_ZAP_CANNON, MOVE_GUILLOTINE, MOVE_CHARGE, MOVE_STICKY_WEB},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VIKAVOLT_3] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_DISCHARGE, MOVE_MUD_SLAP, MOVE_STICKY_WEB, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VIKAVOLT_4] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_BUG_BUZZ, MOVE_ELECTROWEB, MOVE_STICKY_WEB, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRABOMINABLE_1] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_ICE_HAMMER, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRABOMINABLE_2] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_ICE_HAMMER, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CRABOMINABLE_3] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_SCALD, MOVE_ENDEAVOR, MOVE_SUBSTITUTE, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRABOMINABLE_4] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_ICE_HAMMER, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RIBOMBEE_1] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_POLLEN_PUFF, MOVE_MOONBLAST, MOVE_HIDDEN_POWER, MOVE_STICKY_WEB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RIBOMBEE_2] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_U_TURN, MOVE_POWDER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RIBOMBEE_3] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_SILVER_WIND, MOVE_QUIVER_DANCE, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RIBOMBEE_4] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_HELPING_HAND, MOVE_TAILWIND, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LYCANROC_1] = {
        .species = SPECIES_LYCANROC,
        .moves = {MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_2] = {
        .species = SPECIES_LYCANROC,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SNARL, MOVE_TAUNT, MOVE_QUICK_GUARD},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_3] = {
        .species = SPECIES_LYCANROC,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_1] = {
        .species = SPECIES_LYCANROC_MIDNIGHT,
        .moves = {MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_2] = {
        .species = SPECIES_LYCANROC_MIDNIGHT,
        .moves = {MOVE_STONE_EDGE, MOVE_IRON_TAIL, MOVE_CLOSE_COMBAT, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LYCANIUM_Z,
        .ev = TRAINER_PARTY_EVS(68, 252, 0, 0, 0, 188),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_3] = {
        .species = SPECIES_LYCANROC_MIDNIGHT,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_DUSK_1] = {
        .species = SPECIES_LYCANROC_DUSK,
        .moves = {MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_HAPPY_HOUR},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_DUSK_2] = {
        .species = SPECIES_LYCANROC_DUSK,
        .moves = {MOVE_ACCELEROCK, MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_DUSK_3] = {
        .species = SPECIES_LYCANROC_DUSK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_PLAY_ROUGH, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WISHIWASHI_1] = {
        .species = SPECIES_WISHIWASHI,
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_U_TURN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WISHIWASHI_2] = {
        .species = SPECIES_WISHIWASHI,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER, MOVE_FLIP_TURN},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WISHIWASHI_3] = {
        .species = SPECIES_WISHIWASHI,
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WISHIWASHI_4] = {
        .species = SPECIES_WISHIWASHI,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 128, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_TOXAPEX_1] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_SCALD, MOVE_VENOSHOCK, MOVE_TOXIC_SPIKES, MOVE_BANEFUL_BUNKER},
        .heldItem = ITEM_POISON_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOXAPEX_2] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_TOXIC_SPIKES, MOVE_BANEFUL_BUNKER},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TOXAPEX_3] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC, MOVE_BANEFUL_BUNKER},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TOXAPEX_4] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_TOXIC, MOVE_TOXIC_SPIKES, MOVE_RECOVER, MOVE_WIDE_GUARD},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUDSDALE_1] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUDSDALE_2] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_PASSHO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUDSDALE_3] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 104, 0, 152, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUDSDALE_4] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ARAQUANID_1] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_LUNGE, MOVE_CRUNCH, MOVE_STICKY_WEB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARAQUANID_2] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_SPLASH_PLATE,
        .ev = TRAINER_PARTY_EVS(96, 220, 0, 0, 0, 192),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARAQUANID_3] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARAQUANID_4] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_STICKY_WEB, MOVE_WIDE_GUARD, MOVE_PROTECT},
        .heldItem = ITEM_SPLASH_PLATE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_LURANTIS_1] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_SOLAR_BLADE, MOVE_SUPERPOWER, MOVE_POISON_JAB, MOVE_SYNTHESIS},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LURANTIS_2] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_SOLARBEAM, MOVE_WEATHER_BALL, MOVE_SYNTHESIS, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LURANTIS_3] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_DEFOG, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_LURANTIS_4] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_PETAL_BLIZZARD, MOVE_SUPERPOWER, MOVE_SUNNY_DAY, MOVE_PSYCHO_CUT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SHIINOTIC_1] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_MOONBLAST, MOVE_SPORE, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHIINOTIC_2] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_MOONBLAST, MOVE_CONFUSE_RAY, MOVE_STRENGTH_SAP, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SHIINOTIC_3] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_SLUDGE_BOMB, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIINOTIC_4] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_POLLEN_PUFF, MOVE_SPORE, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SALAZZLE_1] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAZZLE_2] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_VENOSHOCK, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_NASTY_PLOT},
        .heldItem = ITEM_POISON_GEM,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAZZLE_3] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_KNOCK_OFF, MOVE_DISABLE, MOVE_ENCORE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAZZLE_4] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_ENCORE, MOVE_FAKE_OUT, MOVE_POISON_GAS, MOVE_VENOM_DRENCH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEWEAR_1] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEWEAR_2] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDERPUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEWEAR_3] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_BIND, MOVE_TOXIC, MOVE_PAIN_SPLIT, MOVE_PROTECT},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BEWEAR_4] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_WIDE_GUARD},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TSAREENA_1] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TSAREENA_2] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_PLAY_ROUGH, MOVE_TRIPLE_AXEL, MOVE_FEINT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TSAREENA_3] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_KNOCK_OFF, MOVE_SUBSTITUTE, MOVE_GRASSWHISTLE, MOVE_SYNTHESIS},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TSAREENA_4] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_GRASSWHISTLE, MOVE_ACUPRESSURE, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 128, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_COMFEY_1] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_SYNTHESIS, MOVE_ENDURE},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COMFEY_2] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_WRAP, MOVE_LEECH_SEED, MOVE_SWEET_KISS, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_GRIP_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_COMFEY_3] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_DRAINING_KISS, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_CALM_MIND},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_COMFEY_4] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_FLORAL_HEALING, MOVE_HELPING_HAND, MOVE_TAILWIND, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 252, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORANGURU_1] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ORANGURU_2] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_PSYCHIC, MOVE_FOUL_PLAY, MOVE_PROTECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ORANGURU_3] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_FOUL_PLAY, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_YAWN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORANGURU_4] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_FOUL_PLAY, MOVE_INSTRUCT, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PASSIMIAN_1] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_KNOCK_OFF},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PASSIMIAN_2] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PASSIMIAN_3] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_REVERSAL, MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PASSIMIAN_4] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_QUICK_GUARD},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLISOPOD_1] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLISOPOD_2] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLISOPOD_3] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_PAIN_SPLIT, MOVE_TOXIC, MOVE_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOLISOPOD_4] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_ROCK_SLIDE, MOVE_AQUA_JET, MOVE_WIDE_GUARD},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PALOSSAND_1] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_SCORCHING_SANDS, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PALOSSAND_2] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS, MOVE_SANDSTORM, MOVE_SHORE_UP},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PALOSSAND_3] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_CURSE, MOVE_SHORE_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PALOSSAND_4] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_SCORCHING_SANDS, MOVE_STEALTH_ROCK, MOVE_SANDSTORM, MOVE_SHORE_UP},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PYUKUMUKU_1] = {
        .species = SPECIES_PYUKUMUKU,
        .moves = {MOVE_TOXIC, MOVE_SPITE, MOVE_BLOCK, MOVE_REST},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PYUKUMUKU_2] = {
        .species = SPECIES_PYUKUMUKU,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PYUKUMUKU_3] = {
        .species = SPECIES_PYUKUMUKU,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_BATON_PASS, MOVE_RECOVER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PYUKUMUKU_4] = {
        .species = SPECIES_PYUKUMUKU,
        .moves = {MOVE_TOXIC, MOVE_HELPING_HAND, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SILVALLY_STEEL_1] = {
        .species = SPECIES_SILVALLY_STEEL,
        .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_DEFOG},
        .heldItem = ITEM_STEEL_MEMORY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SILVALLY_GHOST_1] = {
        .species = SPECIES_SILVALLY_GHOST,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_PARTING_SHOT, MOVE_DEFOG},
        .heldItem = ITEM_GHOST_MEMORY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SILVALLY_DRAGON_1] = {
        .species = SPECIES_SILVALLY_DRAGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_PARTING_SHOT},
        .heldItem = ITEM_DRAGON_MEMORY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SILVALLY_1] = {
        .species = SPECIES_SILVALLY,
        .moves = {MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_PARTING_SHOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SILVALLY_2] = {
        .species = SPECIES_SILVALLY,
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HEAT_WAVE, MOVE_SURF, MOVE_SNARL},
        .heldItem = ITEM_ELECTRIC_MEMORY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MINIOR_ORANGE_1] = {
        .species = SPECIES_MINIOR_ORANGE,
        .moves = {MOVE_STONE_EDGE, MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MINIOR_YELLOW_1] = {
        .species = SPECIES_MINIOR_YELLOW,
        .moves = {MOVE_ANCIENTPOWER, MOVE_CHARGE_BEAM, MOVE_CONFUSE_RAY, MOVE_COSMIC_POWER},
        .heldItem = ITEM_ABSORB_BULB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MINIOR_GREEN_1] = {
        .species = SPECIES_MINIOR_GREEN,
        .moves = {MOVE_ROCK_TOMB, MOVE_U_TURN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MINIOR_BLUE_1] = {
        .species = SPECIES_MINIOR_BLUE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CONFUSE_RAY, MOVE_STEALTH_ROCK, MOVE_SANDSTORM},
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(0, 136, 100, 0, 56, 216),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KOMALA_1] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOMALA_2] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_RETURN, MOVE_SUPERPOWER, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KOMALA_3] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_THRASH, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_YAWN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0,4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOMALA_4] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_RAPID_SPIN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TURTONATOR_1] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_SEARING_SHOT, MOVE_DRACO_METEOR, MOVE_SCORCHING_SANDS, MOVE_SHELL_SMASH},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TURTONATOR_2] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_SEARING_SHOT, MOVE_SOLARBEAM, MOVE_DRACO_METEOR, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TURTONATOR_3] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_BODY_PRESS, MOVE_SHELL_TRAP, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TURTONATOR_4] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_HEAT_WAVE, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, MOVE_WIDE_GUARD},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOGEDEMARU_1] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_WILD_CHARGE, MOVE_POISON_JAB, MOVE_FELL_STINGER, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOGEDEMARU_2] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_ZING_ZAP, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOGEDEMARU_3] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_ZING_ZAP, MOVE_TOXIC, MOVE_WISH, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TOGEDEMARU_4] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_NUZZLE, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MIMIKYU_1] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MIMIKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIMIKYU_2] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_PLAY_ROUGH, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIMIKYU_3] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_INFESTATION, MOVE_CURSE, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MIMIKYU_4] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BRUXISH_1] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_AQUA_JET, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRUXISH_2] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_AQUA_JET, MOVE_SCALE_SHOT, MOVE_SCREECH, MOVE_TAUNT},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BRUXISH_3] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BRUXISH_4] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_WATERFALL, MOVE_PSYCHIC_FANGS, MOVE_AFTER_YOU, MOVE_TAUNT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAMPA_1] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_HYPER_VOICE, MOVE_DRAGON_ENERGY, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAMPA_2] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DRAMPA_3] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_GLARE, MOVE_ROOST},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAMPA_4] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_HEAT_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DHELMISE_1] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SYNTHESIS, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DHELMISE_2] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_HEAVY_SLAM, MOVE_SWITCHEROO},
        .heldItem = ITEM_FLOAT_STONE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DHELMISE_3] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_ANCHOR_SHOT, MOVE_TOXIC, MOVE_SYNTHESIS, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DHELMISE_4] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_ANCHOR_SHOT, MOVE_KNOCK_OFF, MOVE_SYNTHESIS, MOVE_HELPING_HAND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KOMMO_O_1] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_DRAGON_CLAW, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_CLANGOROUS_SOUL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KOMMO_O_2] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_BOOMBURST, MOVE_AUTOTOMIZE},
        .heldItem = ITEM_KOMMONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KOMMO_O_3] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLANGING_SCALES, MOVE_CLOSE_COMBAT, MOVE_BOOMBURST, MOVE_FLASH_CANNON},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_KOMMO_O_4] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_DRAGON_CLAW, MOVE_BODY_PRESS, MOVE_POISON_JAB, MOVE_IRON_DEFENSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KOMMO_O_5] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLANGING_SCALES, MOVE_BOOMBURST, MOVE_FLAMETHROWER, MOVE_PROTECT},
        .heldItem = ITEM_KOMMONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_KOKO_1] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_WILD_CHARGE, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAPU_KOKO_2] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TAPU_KOKO_3] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_WILD_CHARGE, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_U_TURN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_TAPU_KOKO_4] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_LELE_1] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_LELE_2] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_TAUNT},
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_LELE_3] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_MOONBLAST, MOVE_NATURES_MADNESS, MOVE_DEFOG, MOVE_TAUNT},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TAPU_LELE_4] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 60, 112, 0, 84),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TAPU_BULU_1] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAPU_BULU_2] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_HORN_LEECH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAPU_BULU_3] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_HORN_LEECH, MOVE_NATURES_MADNESS, MOVE_LEECH_SEED, MOVE_TOXIC},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TAPU_BULU_4] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 56, 0, 0, 116, 84),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAPU_FINI_1] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_MOONBLAST, MOVE_NATURES_MADNESS, MOVE_DEFOG, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_FINI_2] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_SCALD, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TAPU_FINI_3] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_SCALD, MOVE_DEFOG, MOVE_TRICK, MOVE_AQUA_RING},
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TAPU_FINI_4] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_MUDDY_WATER, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 140, 116, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NIHILEGO_1] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NIHILEGO_2] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_ACID_SPRAY, MOVE_THUNDER_WAVE, MOVE_TOXIC_SPIKES, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NIHILEGO_3] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_KNOCK_OFF, MOVE_BIND, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_NIHILEGO_4] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BUZZWOLE_1] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_POISON_JAB},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BUZZWOLE_2] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GYRO_BALL, MOVE_FLING, MOVE_BULK_UP},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(248, 0, 184, 0, 76, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BUZZWOLE_3] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 184, 0, 76, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BUZZWOLE_4] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_BULK_UP, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_TAUNT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PHEROMOSA_1] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LUNGE, MOVE_POISON_JAB, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PHEROMOSA_2] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PHEROMOSA_3] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_U_TURN, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_DRILL_RUN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PHEROMOSA_4] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_U_TURN, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_PHEROMOSA_5] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BUG_BUZZ, MOVE_BLIZZARD, MOVE_PROTECT},
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_XURKITREE_1] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_XURKITREE_2] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_TAIL_GLOW},
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XURKITREE_3] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_BIND, MOVE_HYPNOSIS, MOVE_TAIL_GLOW},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_XURKITREE_4] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_DISCHARGE, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_HYPNOSIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CELESTEELA_1] = {
        .species = SPECIES_CELESTEELA,
        .moves = {MOVE_FLASH_CANNON, MOVE_AIR_SLASH, MOVE_FIRE_BLAST, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CELESTEELA_2] = {
        .species = SPECIES_CELESTEELA,
        .moves = {MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CELESTEELA_3] = {
        .species = SPECIES_CELESTEELA,
        .moves = {MOVE_GYRO_BALL, MOVE_SMACK_DOWN, MOVE_LEECH_SEED, MOVE_PROTECT},
        .heldItem = ITEM_MACHO_BRACE,
        .ev = TRAINER_PARTY_EVS(248, 0, 104, 0, 156, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CELESTEELA_4] = {
        .species = SPECIES_CELESTEELA,
        .moves = {MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_FLAMETHROWER, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 120, 12, 0, 128, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_KARTANA_1] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KARTANA_2] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KARTANA_3] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KARTANA_4] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GUZZLORD_1] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_LASH_OUT, MOVE_CORE_ENFORCER, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GUZZLORD_2] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_KNOCK_OFF, MOVE_DRAGON_RUSH, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUZZLORD_3] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_SNARL, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GUZZLORD_4] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_CORE_ENFORCER, MOVE_HEAT_WAVE, MOVE_SLUDGE_WAVE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NAGANADEL_1] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NAGANADEL_2] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NAGANADEL_3] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRAGON_CLAW, MOVE_POISON_JAB, MOVE_SHADOW_CLAW, MOVE_FELL_STINGER},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NAGANADEL_4] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_TAILWIND},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STAKATAKA_1] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_STONE_EDGE, MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_BODY_PRESS},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STAKATAKA_2] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_STAKATAKA_3] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_STAKATAKA_4] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_BLACEPHALON_1] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(232, 0, 4, 20, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLACEPHALON_2] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_MIND_BLOWN, MOVE_SHADOW_BALL, MOVE_PSYSHOCK, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLACEPHALON_3] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TRICK},
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BLACEPHALON_4] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_KNOCK_OFF, MOVE_AFTER_YOU},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_RILLABOOM_1] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RILLABOOM_2] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RILLABOOM_3] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_DRAIN_PUNCH, MOVE_ACROBATICS, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GRASSY_SEED,
        .ev = TRAINER_PARTY_EVS(100, 252, 0, 0, 0, 156),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RILLABOOM_4] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_PROTECT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 124, 36, 0, 100, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CINDERACE_1] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_GUNK_SHOT, MOVE_IRON_HEAD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINDERACE_2] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_COURT_CHANGE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINDERACE_3] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_SUCKER_PUNCH, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINDERACE_4] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_GUNK_SHOT, MOVE_LOW_KICK, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INTELEON_1] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_INTELEON_2] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INTELEON_3] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_ICE_SHARD},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INTELEON_4] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_MUDDY_WATER, MOVE_U_TURN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GREEDENT_1] = {
        .species = SPECIES_GREEDENT,
        .moves = {MOVE_BODY_PRESS, MOVE_PAYBACK, MOVE_SUPER_FANG, MOVE_STUFF_CHEEKS},
        .heldItem = ITEM_APICOT_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 44, 128, 0, 0, 84),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GREEDENT_2] = {
        .species = SPECIES_GREEDENT,
        .moves = {MOVE_RETURN, MOVE_PAYBACK, MOVE_GYRO_BALL, MOVE_BELLY_DRUM},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GREEDENT_3] = {
        .species = SPECIES_GREEDENT,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_PSYCHIC_FANGS, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GREEDENT_4] = {
        .species = SPECIES_GREEDENT,
        .moves = {MOVE_GYRO_BALL, MOVE_SUPER_FANG, MOVE_COUNTER, MOVE_STOCKPILE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 160, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CORVIKNIGHT_1] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BODY_PRESS, MOVE_U_TURN, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 168, 0, 88, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CORVIKNIGHT_2] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAUNT, MOVE_BULK_UP, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CORVIKNIGHT_3] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_ROOST},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 100, 0, 80, 80),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CORVIKNIGHT_4] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_IRON_HEAD, MOVE_TAUNT, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 100, 0, 80, 80),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ORBEETLE_1] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_IRON_DEFENSE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 108, 8, 140, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORBEETLE_2] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_PSYCHIC, MOVE_U_TURN, MOVE_STICKY_WEB, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ORBEETLE_3] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_BODY_PRESS, MOVE_MIRROR_COAT, MOVE_IRON_DEFENSE, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORBEETLE_4] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_U_TURN, MOVE_STICKY_WEB, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THIEVUL_1] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_BURNING_JEALOUSY, MOVE_PARTING_SHOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THIEVUL_2] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THIEVUL_3] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_SNARL, MOVE_BURNING_JEALOUSY, MOVE_HIDDEN_POWER, MOVE_HYPER_BEAM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THIEVUL_4] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELDEGOSS_1] = {
        .species = SPECIES_ELDEGOSS,
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_POLLEN_PUFF, MOVE_RAPID_SPIN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(236, 0, 0, 236, 0, 36),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELDEGOSS_2] = {
        .species = SPECIES_ELDEGOSS,
        .moves = {MOVE_SOLARBEAM, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELDEGOSS_3] = {
        .species = SPECIES_ELDEGOSS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ELDEGOSS_4] = {
        .species = SPECIES_ELDEGOSS,
        .moves = {MOVE_POLLEN_PUFF, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUBWOOL_1] = {
        .species = SPECIES_DUBWOOL,
        .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_PAYBACK, MOVE_COTTON_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUBWOOL_2] = {
        .species = SPECIES_DUBWOOL,
        .moves = {MOVE_RETURN, MOVE_WILD_CHARGE, MOVE_BODY_PRESS, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUBWOOL_3] = {
        .species = SPECIES_DUBWOOL,
        .moves = {MOVE_BODY_PRESS, MOVE_COTTON_GUARD, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUBWOOL_4] = {
        .species = SPECIES_DUBWOOL,
        .moves = {MOVE_RETURN, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DREDNAW_1] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DREDNAW_2] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DREDNAW_3] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DREDNAW_4] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BOLTUND_1] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_BOLT_STRIKE, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_HONE_CLAWS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BOLTUND_2] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_BOLT_STRIKE, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_CRUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BOLTUND_3] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_BOLT_STRIKE, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_BOLTUND_4] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_DISCHARGE, MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_PROTECT},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COALOSSAL_1] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_FIRE_BLAST, MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_COALOSSAL_2] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(76, 252, 0, 0, 0, 180),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COALOSSAL_3] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_BURN_UP, MOVE_METEOR_BEAM, MOVE_SCALD, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_COALOSSAL_4] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_FIRE_BLAST, MOVE_HEAVY_SLAM, MOVE_RAPID_SPIN, MOVE_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_COALOSSAL_5] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FLAPPLE_1] = {
        .species = SPECIES_FLAPPLE,
        .moves = {MOVE_DRACO_METEOR, MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_FLAPPLE_2] = {
        .species = SPECIES_FLAPPLE,
        .moves = {MOVE_OUTRAGE, MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAPPLE_3] = {
        .species = SPECIES_FLAPPLE,
        .moves = {MOVE_OUTRAGE, MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAPPLE_4] = {
        .species = SPECIES_FLAPPLE,
        .moves = {MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_APPLETUN_1] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_APPLE_ACID, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(20, 0, 0, 252, 0, 236),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_APPLETUN_2] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_APPLE_ACID, MOVE_LEECH_SEED, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 196, 0, 64, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_APPLETUN_3] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_SEED_BOMB, MOVE_BODY_PRESS, MOVE_GYRO_BALL, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 64, 56, 0, 136, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_APPLETUN_4] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_APPLE_ACID, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 120, 0, 136, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SANDACONDA_1] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_STEALTH_ROCK, MOVE_REST},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 244, 0, 0, 12),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SANDACONDA_2] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_COIL, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SANDACONDA_3] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SANDACONDA_4] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_GLARE, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = 0
    },
    [FRONTIER_MON_CRAMORANT_1] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRAMORANT_2] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_DIVE, MOVE_BRAVE_BIRD, MOVE_THROAT_CHOP, MOVE_SUPERPOWER},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 248, 8, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRAMORANT_3] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_SURF, MOVE_STOCKPILE, MOVE_AMNESIA, MOVE_ROOST},
        .heldItem = ITEM_KEE_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CRAMORANT_4] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_TAILWIND, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BARRASKEWDA_1] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARRASKEWDA_2] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_THROAT_CHOP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARRASKEWDA_3] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_POISON_JAB},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARRASKEWDA_4] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXTRICITY_LOW_KEY_1] = {
        .species = SPECIES_TOXTRICITY_LOW_KEY,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_OVERDRIVE, MOVE_VOLT_SWITCH, MOVE_BOOMBURST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOXTRICITY_1] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_POISON_JAB, MOVE_THUNDERPUNCH, MOVE_FIRE_PUNCH, MOVE_SHIFT_GEAR},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXTRICITY_2] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_ACID_SPRAY},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 252, 0, 128),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOXTRICITY_3] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_PROTECT},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CENTISKORCH_1] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_POWER_WHIP, MOVE_COIL},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CENTISKORCH_2] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_RAGING_FURY, MOVE_FIRE_LASH, MOVE_THUNDER_FANG, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CENTISKORCH_3] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FIRE_BLAST, MOVE_BUG_BUZZ, MOVE_SCALD, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 8, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CENTISKORCH_4] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, MOVE_STRUGGLE_BUG, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRAPPLOCT_1] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_TAUNT, MOVE_OCTOLOCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRAPPLOCT_2] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH, MOVE_OCTOLOCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRAPPLOCT_3] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_ICE_PUNCH, MOVE_AQUA_JET},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(240, 0, 244, 24, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRAPPLOCT_4] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_COACHING, MOVE_OCTOLOCK, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_POLTEAGEIST_1] = {
        .species = SPECIES_POLTEAGEIST,
        .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_STORED_POWER, MOVE_SHELL_SMASH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_POLTEAGEIST_2] = {
        .species = SPECIES_POLTEAGEIST,
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_AROMATHERAPY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_POLTEAGEIST_3] = {
        .species = SPECIES_POLTEAGEIST,
        .moves = {MOVE_HEX, MOVE_TRICK, MOVE_ENDURE, MOVE_MEMENTO},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(36, 0, 0, 252, 0, 220),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_POLTEAGEIST_4] = {
        .species = SPECIES_POLTEAGEIST,
        .moves = {MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP, MOVE_SHELL_SMASH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HATTERENE_1] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 244, 0, 0, 12),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HATTERENE_2] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HATTERENE_3] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_HATTERENE_4] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GRIMMSNARL_1] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_TAUNT, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(212, 0, 84, 0, 212, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GRIMMSNARL_2] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_TRICK, MOVE_TORMENT, MOVE_FAKE_OUT},
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(172, 0, 252, 0, 84, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRIMMSNARL_3] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DARKEST_LARIAT, MOVE_DRAIN_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRIMMSNARL_4] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(212, 0, 84, 0, 212, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GRIMMSNARL_5] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_FAKE_OUT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_OBSTAGOON_1] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_OBSTRUCT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OBSTAGOON_2] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_THROAT_CHOP, MOVE_GUNK_SHOT, MOVE_OBSTRUCT},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OBSTAGOON_3] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_THIEF, MOVE_PARTING_SHOT, MOVE_OBSTRUCT},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OBSTAGOON_4] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HELPING_HAND, MOVE_PARTING_SHOT, MOVE_OBSTRUCT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERRSERKER_1] = {
        .species = SPECIES_PERRSERKER,
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_SEED_BOMB, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERRSERKER_2] = {
        .species = SPECIES_PERRSERKER,
        .moves = {MOVE_GYRO_BALL, MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_CURSE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(8, 252, 0, 0, 248, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_PERRSERKER_3] = {
        .species = SPECIES_PERRSERKER,
        .moves = {MOVE_IRON_HEAD, MOVE_SEED_BOMB, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERRSERKER_4] = {
        .species = SPECIES_PERRSERKER,
        .moves = {MOVE_IRON_HEAD, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CURSOLA_1] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_SHADOW_BALL, MOVE_METEOR_BEAM, MOVE_BURNING_JEALOUSY, MOVE_ENDURE},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CURSOLA_2] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_BURNING_JEALOUSY},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CURSOLA_3] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_HEX, MOVE_GIGA_DRAIN, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CURSOLA_4] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_NIGHT_SHADE, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_DISABLE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SIRFETCHD_1] = {
        .species = SPECIES_SIRFETCHD,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_FIRST_IMPRESSION},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIRFETCHD_2] = {
        .species = SPECIES_SIRFETCHD,
        .moves = {MOVE_METEOR_ASSAULT, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SIRFETCHD_3] = {
        .species = SPECIES_SIRFETCHD,
        .moves = {MOVE_METEOR_ASSAULT, MOVE_SKY_ATTACK, MOVE_SOLAR_BLADE, MOVE_FIRST_IMPRESSION},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SIRFETCHD_4] = {
        .species = SPECIES_SIRFETCHD,
        .moves = {MOVE_METEOR_ASSAULT, MOVE_BRAVE_BIRD, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_RIME_1] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_TRIPLE_AXEL, MOVE_ZEN_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MR_RIME_2] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_PSYSHOCK, MOVE_FREEZE_DRY, MOVE_RAPID_SPIN, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_RIME_3] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 8, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MR_RIME_4] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_PROTECT},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 8, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RUNERIGUS_1] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_EARTHQUAKE, MOVE_WILL_O_WISP, MOVE_STEALTH_ROCK, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RUNERIGUS_2] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RUNERIGUS_3] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_RUNERIGUS_4] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_HAZE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_1] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_2] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_3] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY,
        .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_ACID_ARMOR, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_4] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_DECORATE, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FALINKS_1] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_ZEN_HEADBUTT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FALINKS_2] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_NO_RETREAT},
        .heldItem = ITEM_SHED_SHELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FALINKS_3] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_REVERSAL, MOVE_THROAT_CHOP, MOVE_NO_RETREAT, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FALINKS_4] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_NO_RETREAT, MOVE_PROTECT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINCURCHIN_1] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_RECOVER},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PINCURCHIN_2] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_ZING_ZAP, MOVE_LIQUIDATION, MOVE_CURSE, MOVE_RECOVER},
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PINCURCHIN_3] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_ZING_ZAP, MOVE_BARB_BARRAGE, MOVE_TOXIC_SPIKES, MOVE_CURSE},
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PINCURCHIN_4] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_DISCHARGE, MOVE_SCALD, MOVE_SPIKES, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FROSMOTH_1] = {
        .species = SPECIES_FROSMOTH,
        .moves = {MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSMOTH_2] = {
        .species = SPECIES_FROSMOTH,
        .moves = {MOVE_ICE_BEAM, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSMOTH_3] = {
        .species = SPECIES_FROSMOTH,
        .moves = {MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FROSMOTH_4] = {
        .species = SPECIES_FROSMOTH,
        .moves = {MOVE_ICY_WIND, MOVE_STRUGGLE_BUG, MOVE_TAILWIND, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STONJOURNER_1] = {
        .species = SPECIES_STONJOURNER,
        .moves = {MOVE_STONE_EDGE, MOVE_SELFDESTRUCT, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STONJOURNER_2] = {
        .species = SPECIES_STONJOURNER,
        .moves = {MOVE_STONE_EDGE, MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STONJOURNER_3] = {
        .species = SPECIES_STONJOURNER,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_ROCK_POLISH},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STONJOURNER_4] = {
        .species = SPECIES_STONJOURNER,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD, MOVE_PROTECT},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_EISCUE_1] = {
        .species = SPECIES_EISCUE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HEAD_SMASH, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EISCUE_2] = {
        .species = SPECIES_EISCUE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_PSYCHIC_FANGS},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EISCUE_3] = {
        .species = SPECIES_EISCUE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_HAIL, MOVE_AURORA_VEIL},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EISCUE_4] = {
        .species = SPECIES_EISCUE,
        .moves = {MOVE_ICY_WIND, MOVE_WHIRLPOOL, MOVE_HAIL, MOVE_AURORA_VEIL},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_INDEEDEE_1] = {
        .species = SPECIES_INDEEDEE,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HIDDEN_POWER, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INDEEDEE_2] = {
        .species = SPECIES_INDEEDEE,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_ENERGY_BALL, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INDEEDEE_F_1] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HIDDEN_POWER, MOVE_HEALING_WISH},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INDEEDEE_F_2] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MORPEKO_1] = {
        .species = SPECIES_MORPEKO,
        .moves = {MOVE_AURA_WHEEL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MORPEKO_2] = {
        .species = SPECIES_MORPEKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_AGILITY},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MORPEKO_3] = {
        .species = SPECIES_MORPEKO,
        .moves = {MOVE_AURA_WHEEL, MOVE_FAKE_OUT, MOVE_RAPID_SPIN, MOVE_PARTING_SHOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MORPEKO_4] = {
        .species = SPECIES_MORPEKO,
        .moves = {MOVE_AURA_WHEEL, MOVE_ELECTROWEB, MOVE_PARTING_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COPPERAJAH_1] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_HEAVY_SLAM, MOVE_POWER_WHIP, MOVE_HEAT_CRASH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(156, 100, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COPPERAJAH_2] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_HEAVY_SLAM, MOVE_POWER_WHIP, MOVE_SUPERPOWER, MOVE_STONE_EDGE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COPPERAJAH_3] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_IRON_HEAD, MOVE_POWER_WHIP, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COPPERAJAH_4] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOZOLT_1] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOZOLT_2] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_DRACO_METEOR, MOVE_DISCHARGE, MOVE_FIRE_BLAST, MOVE_METEOR_BEAM},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRACOZOLT_3] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_DRACO_METEOR, MOVE_BOLT_BEAK, MOVE_FIRE_SPIN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 184, 0, 140, 0, 184),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DRACOZOLT_4] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_BREAKING_SWIPE, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARCTOZOLT_1] = {
        .species = SPECIES_ARCTOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_STONE_EDGE, MOVE_LOW_KICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARCTOZOLT_2] = {
        .species = SPECIES_ARCTOZOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_HYPER_VOICE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCTOZOLT_3] = {
        .species = SPECIES_ARCTOZOLT,
        .moves = {MOVE_ICICLE_CRASH, MOVE_BOLT_BEAK, MOVE_STOMPING_TANTRUM, MOVE_HAIL},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCTOZOLT_4] = {
        .species = SPECIES_ARCTOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_BULLDOZE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOVISH_1] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_OUTRAGE, MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOVISH_2] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_ROCK_SLIDE, MOVE_ICE_FANG},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRACOVISH_3] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_RUSH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOVISH_4] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCTOVISH_1] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_PSYCHIC_FANGS, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARCTOVISH_2] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_METEOR_BEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCTOVISH_3] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_FREEZE_DRY, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 236, 0, 40, 0, 232),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_ARCTOVISH_4] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_AURORA_VEIL, MOVE_PROTECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DURALUDON_1] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_OUTRAGE, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_BREAKING_SWIPE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DURALUDON_2] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_STEEL_BEAM, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DURALUDON_3] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(80, 0, 0, 252, 0, 176),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DURALUDON_4] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_STEEL_BEAM, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGAPULT_1] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRACO_METEOR, MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGAPULT_2] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_ACROBATICS, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_DRAGON_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGAPULT_3] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRACO_METEOR, MOVE_HEX, MOVE_U_TURN, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGAPULT_4] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_WILL_O_WISP, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGIELEKI_1] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIELEKI_2] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH, MOVE_ELECTRO_BALL, MOVE_EXPLOSION},
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 244, 0, 252, 0, 12),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_REGIELEKI_3] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_VOLT_SWITCH, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIELEKI_4] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_ELECTROWEB, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIDRAGO_1] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIDRAGO_2] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_HYPER_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIDRAGO_3] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_HYPER_BEAM},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIDRAGO_4] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_FANG, MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIDRAGO_5] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_PULSE, MOVE_HYPER_BEAM, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIDRAGO_6] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_PULSE, MOVE_ANCIENTPOWER, MOVE_PROTECT},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RAPIDASH_GALAR_1] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYSHIELD_BASH, MOVE_HIGH_HORSEPOWER, MOVE_LOW_KICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAPIDASH_GALAR_2] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_GALAR_3] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_STORED_POWER, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_MORNING_SUN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_GALAR_4] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SLOWBRO_GALAR_1] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_ZEN_HEADBUTT, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_GALAR_2] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHELL_SIDE_ARM, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 252, 0, 44),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_GALAR_1] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWBRO_GALAR_3] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SCALD, MOVE_PROTECT, MOVE_SLACK_OFF},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_GALAR_2] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_STORED_POWER, MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_SLACK_OFF},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_GALAR_3] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_SCALD},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 12, 124, 120, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWKING_GALAR_4] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_EERIE_SPELL, MOVE_HEX, MOVE_TRICK, MOVE_PROTECT},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWKING_GALAR_5] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_EERIE_SPELL, MOVE_TOXIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_GALAR_1] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_MISTY_EXPLOSION, MOVE_SLUDGE_WAVE, MOVE_STRANGE_STEAM, MOVE_FLAMETHROWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_GALAR_2] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, MOVE_WILL_O_WISP, MOVE_DEFOG},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WEEZING_GALAR_3] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 112, 84, 44),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WEEZING_GALAR_4] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 112, 84, 44),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARTICUNO_GALAR_1] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FREEZING_GLARE, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_AGILITY},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_GALAR_2] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_HURRICANE, MOVE_U_TURN, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_GALAR_3] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_AGILITY, MOVE_RECOVER},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 8, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARTICUNO_GALAR_4] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_GALAR_1] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_THUNDEROUS_KICK, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_GALAR_2] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_GALAR_3] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_BLAZE_KICK, MOVE_BULK_UP},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_GALAR_4] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DUAL_WINGBEAT, MOVE_COACHING, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MOLTRES_GALAR_1] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_HURRICANE, MOVE_FIERY_WRATH, MOVE_NASTY_PLOT, MOVE_AGILITY},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_GALAR_2] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_NASTY_PLOT, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 116, 144),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MOLTRES_GALAR_3] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_SUBSTITUTE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_GALAR_4] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_TAUNT, MOVE_TAILWIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CORSOLA_GALAR_1] = {
        .species = SPECIES_CORSOLA_GALAR,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_GALAR_2] = {
        .species = SPECIES_CORSOLA_GALAR,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WHIRLPOOL, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_GALAR_3] = {
        .species = SPECIES_CORSOLA_GALAR,
        .moves = {MOVE_NIGHT_SHADE, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DARMANITAN_GALAR_1] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DARMANITAN_GALAR_2] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_GALAR_3] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_GALAR_4] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FIRE_PUNCH, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DARMANITAN_GALAR_5] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_GALAR_6] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STUNFISK_GALAR_1] = {
        .species = SPECIES_STUNFISK_GALAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STUNFISK_GALAR_2] = {
        .species = SPECIES_STUNFISK_GALAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_SNAP_TRAP, MOVE_PAIN_SPLIT, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STUNFISK_GALAR_3] = {
        .species = SPECIES_STUNFISK_GALAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_CURSE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WYRDEER_1] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYSHIELD_BASH, MOVE_EARTHQUAKE, MOVE_MEGAHORN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WYRDEER_2] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_RETURN, MOVE_PSYSHIELD_BASH, MOVE_EARTHQUAKE, MOVE_NO_RETREAT},
        .heldItem = ITEM_SHED_SHELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WYRDEER_3] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_UPROAR, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_NO_RETREAT},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WYRDEER_4] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_BODY_SLAM, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BASCULEGION_M_1] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WAVE_CRASH, MOVE_POLTERGEIST, MOVE_LAST_RESPECTS, MOVE_HEAD_SMASH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULEGION_M_2] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WATERFALL, MOVE_REVERSAL, MOVE_LAST_RESPECTS, MOVE_SCALE_SHOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BASCULEGION_F_1] = {
        .species = SPECIES_BASCULEGION_F,
        .moves = {MOVE_HEX, MOVE_TOXIC, MOVE_PAIN_SPLIT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BASCULEGION_M_3] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_WAVE_CRASH, MOVE_POLTERGEIST, MOVE_HEAD_SMASH, MOVE_LAST_RESPECTS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULEGION_F_2] = {
        .species = SPECIES_BASCULEGION_F,
        .moves = {MOVE_MUDDY_WATER, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_FINAL_GAMBIT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KLEAVOR_1] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_AXE, MOVE_LUNGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLEAVOR_2] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_AXE, MOVE_LUNGE, MOVE_CLOSE_COMBAT, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLEAVOR_3] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_AXE, MOVE_LUNGE, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KLEAVOR_4] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_CALM_MIND, MOVE_AGILITY, MOVE_ROOST, MOVE_BATON_PASS},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KLEAVOR_5] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_FEINT, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_HISUI_1] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_RAGING_FURY, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_HISUI_2] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_RAGING_FURY, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EXTREMESPEED},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_HISUI_3] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_BURN_UP, MOVE_MORNING_SUN, MOVE_WILL_O_WISP, MOVE_TELEPORT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_HISUI_4] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_HELPING_HAND},
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAVIARY_HISUI_1] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BRAVIARY_HISUI_2] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_HURRICANE, MOVE_ESPER_WING, MOVE_HEAT_WAVE, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRAVIARY_HISUI_3] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_HURRICANE, MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BRAVIARY_HISUI_4] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_HURRICANE, MOVE_ESPER_WING, MOVE_HEAT_WAVE, MOVE_TAILWIND},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_HISUI_1] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_HISUI_2] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_HISUI_3] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_POLTERGEIST, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZOROARK_HISUI_4] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_BITTER_MALICE, MOVE_HYPER_VOICE, MOVE_BURNING_JEALOUSY, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_1] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_CHLOROBLAST, MOVE_ELECTRO_BALL, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_2] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_VOLT_SWITCH, MOVE_EXPLOSION, MOVE_THUNDER_WAVE, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_3] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_4] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_EXPLOSION, MOVE_TAUNT, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSALUNA_1] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HEADLONG_RUSH, MOVE_PLAY_ROUGH, MOVE_HAMMER_ARM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSALUNA_2] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_FACADE, MOVE_HEADLONG_RUSH, MOVE_ICE_PUNCH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSALUNA_3] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLEEP_TALK, MOVE_REST, MOVE_BELLY_DRUM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_URSALUNA_4] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_FACADE, MOVE_HEADLONG_RUSH, MOVE_HAMMER_ARM, MOVE_PROTECT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNEASLER_1] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_SHADOW_CLAW, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SNEASLER_2] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SNEASLER_3] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_DIG, MOVE_FAKE_OUT},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SNEASLER_4] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FEINT, MOVE_COACHING, MOVE_FAKE_OUT},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOODRA_HISUI_1] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_THUNDER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOODRA_HISUI_2] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_LIFE_DEW},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOODRA_HISUI_3] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOODRA_HISUI_4] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_COUNTER, MOVE_LIFE_DEW, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_QWILFISH_HISUI_1] = {
        .species = SPECIES_QWILFISH_HISUI,
        .moves = {MOVE_THUNDER_WAVE, MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_HAZE},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = 0
    },
    [FRONTIER_MON_OVERQWIL_1] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_THROAT_CHOP, MOVE_BARB_BARRAGE, MOVE_LIQUIDATION, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OVERQWIL_2] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_THROAT_CHOP, MOVE_BARB_BARRAGE, MOVE_LIQUIDATION, MOVE_FELL_STINGER},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OVERQWIL_3] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_AQUA_JET, MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LILLIGANT_HISUI_1] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_VICTORY_DANCE},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LILLIGANT_HISUI_2] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SLEEP_POWDER, MOVE_VICTORY_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LILLIGANT_HISUI_3] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_HEALING_WISH, MOVE_ENDURE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LILLIGANT_HISUI_4] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ENCORE, MOVE_TEETER_DANCE, MOVE_HELPING_HAND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AVALUGG_HISUI_1] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AVALUGG_HISUI_2] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AVALUGG_HISUI_3] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_BODY_PRESS, MOVE_GYRO_BALL, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AVALUGG_HISUI_4] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_ICE_SHARD, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_1] = {
        .species = SPECIES_DECIDUEYE_HISUI,
        .moves = {MOVE_LEAF_BLADE, MOVE_TRIPLE_ARROWS, MOVE_BRAVE_BIRD, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_2] = {
        .species = SPECIES_DECIDUEYE_HISUI,
        .moves = {MOVE_LEAF_STORM, MOVE_AURA_SPHERE, MOVE_HURRICANE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_3] = {
        .species = SPECIES_DECIDUEYE_HISUI,
        .moves = {MOVE_LEAF_BLADE, MOVE_TRIPLE_ARROWS, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_4] = {
        .species = SPECIES_DECIDUEYE_HISUI,
        .moves = {MOVE_LEAF_BLADE, MOVE_BRICK_BREAK, MOVE_BRAVE_BIRD, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_1] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_ERUPTION, MOVE_INFERNAL_PARADE, MOVE_FIRE_BLAST, MOVE_EXTRASENSORY},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_2] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_BURN_UP, MOVE_INFERNAL_PARADE, MOVE_HIDDEN_POWER, MOVE_WILL_O_WISP},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_3] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_FIRE_BLAST, MOVE_INFERNAL_PARADE, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_4] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_BURNING_JEALOUSY, MOVE_INFERNAL_PARADE, MOVE_FOCUS_BLAST, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SAMUROTT_HISUI_1] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_SECRET_SWORD, MOVE_AIR_SLASH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SAMUROTT_HISUI_2] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_LIQUIDATION, MOVE_CEASELESS_EDGE, MOVE_MEGAHORN, MOVE_SACRED_SWORD},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SAMUROTT_HISUI_3] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_LIQUIDATION, MOVE_CEASELESS_EDGE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAMUROTT_HISUI_4] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_KNOCK_OFF, MOVE_ENCORE, MOVE_HELPING_HAND, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ENAMORUS_1] = {
        .species = SPECIES_ENAMORUS,
        .moves = {MOVE_PLAY_ROUGH, MOVE_FLY, MOVE_SUPERPOWER, MOVE_HAMMER_ARM},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ENAMORUS_2] = {
        .species = SPECIES_ENAMORUS,
        .moves = {MOVE_SPRINGTIDE_STORM, MOVE_HIDDEN_POWER, MOVE_EARTH_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENAMORUS_THERIAN_1] = {
        .species = SPECIES_ENAMORUS_THERIAN,
        .moves = {MOVE_MOONBLAST, MOVE_HIDDEN_POWER, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENAMORUS_THERIAN_2] = {
        .species = SPECIES_ENAMORUS_THERIAN,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEWTWO_1] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_2] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_PSYCHIC_TERRAIN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_3] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_POWER_UP_PUNCH, MOVE_STONE_EDGE, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEWTWO_4] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_FOUL_PLAY, MOVE_BULK_UP},
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MEWTWO_5] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_HEAL_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEWTWO_6] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_THUNDERBOLT, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_7] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_8] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEWTWO_9] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEW_1] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_MEWNIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEW_2] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_CLOSE_COMBAT, MOVE_POLTERGEIST, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEW_3] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_THUNDER_WAVE, MOVE_BARRIER, MOVE_NASTY_PLOT, MOVE_BATON_PASS},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MEW_4] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_TOXIC, MOVE_BARRIER, MOVE_AMNESIA, MOVE_SOFTBOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEW_5] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_STEALTH_ROCK, MOVE_TAILWIND},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEW_6] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_ENCORE, MOVE_PSYCHIC_TERRAIN, MOVE_PROTECT},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEW_7] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_BURNING_JEALOUSY, MOVE_SNARL, MOVE_ELECTROWEB, MOVE_POLLEN_PUFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUGIA_1] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_AEROBLAST, MOVE_EARTH_POWER, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUGIA_2] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUGIA_3] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_PSYCHIC, MOVE_ROOST, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 0, 0, 96),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUGIA_4] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_ICE_BEAM, MOVE_WHIRLWIND, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUGIA_5] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_AEROBLAST, MOVE_ICY_WIND, MOVE_CALM_MIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HO_OH_1] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HO_OH_2] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_SUBSTITUTE, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(104, 252, 0, 0, 0, 152),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HO_OH_3] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HO_OH_4] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_TOXIC, MOVE_DEFOG, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(240, 0, 204, 0, 64, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HO_OH_5] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CELEBI_1] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_LEAF_STORM, MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CELEBI_2] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_GIGA_DRAIN, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CELEBI_3] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_GIGA_DRAIN, MOVE_U_TURN, MOVE_LEECH_SEED, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CELEBI_4] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CELEBI_5] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_AURA_SPHERE, MOVE_PSYCHIC_TERRAIN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CELEBI_6] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_POLLEN_PUFF, MOVE_DAZZLING_GLEAM, MOVE_HELPING_HAND, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KYOGRE_1] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_THUNDER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(84, 0, 0, 252, 0, 172),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYOGRE_2] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_THUNDER, MOVE_ICE_BEAM},
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(32, 252, 64, 0, 0, 160),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_KYOGRE_3] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KYOGRE_4] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_THUNDER},
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYOGRE_5] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(248, 0, 236, 0, 24, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KYOGRE_6] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_PROTECT},
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GROUDON_1] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_STONE_EDGE, MOVE_HAMMER_ARM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GROUDON_2] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_ROCK_TOMB, MOVE_STEALTH_ROCK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(144, 156, 0, 0, 56, 152),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GROUDON_3] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_FIRE_BLAST, MOVE_HIDDEN_POWER, MOVE_ROCK_POLISH},
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 100, 156),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_GROUDON_4] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_ERUPTION, MOVE_PRECIPICE_BLADES, MOVE_SOLARBEAM, MOVE_HEAT_CRASH},
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_GROUDON_5] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GROUDON_6] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAYQUAZA_1] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAYQUAZA_2] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_EXTREMESPEED},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAYQUAZA_3] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRACO_METEOR, MOVE_DRAGON_ASCENT, MOVE_HYDRO_PUMP, MOVE_EXTREMESPEED},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_RAYQUAZA_4] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_V_CREATE, MOVE_EXTREMESPEED, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAYQUAZA_5] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_ASCENT, MOVE_EXTREMESPEED, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAYQUAZA_6] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_THUNDER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JIRACHI_1] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_IRON_HEAD, MOVE_FIRE_PUNCH, MOVE_U_TURN, MOVE_HEALING_WISH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_JIRACHI_2] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_STORED_POWER, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_HAPPY_HOUR},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JIRACHI_3] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_DOOM_DESIRE, MOVE_MIST_BALL, MOVE_AURA_SPHERE, MOVE_CALM_MIND},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JIRACHI_4] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_METEOR_MASH, MOVE_BODY_SLAM, MOVE_WISH, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_JIRACHI_5] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_IRON_HEAD, MOVE_FOLLOW_ME, MOVE_TRICK_ROOM, MOVE_GRAVITY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_JIRACHI_6] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEOXYS_1] = {
        .species = SPECIES_DEOXYS,
        .moves = {MOVE_EXTREMESPEED, MOVE_TAUNT, MOVE_MIRROR_COAT, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DEOXYS_ATTACK_1] = {
        .species = SPECIES_DEOXYS_ATTACK,
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_ICE_BEAM, MOVE_EXTREMESPEED},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DEOXYS_ATTACK_2] = {
        .species = SPECIES_DEOXYS_ATTACK,
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_EXTREMESPEED, MOVE_DETECT},
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_DEOXYS_ATTACK_3] = {
        .species = SPECIES_DEOXYS_ATTACK,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SUPERPOWER, MOVE_SHADOW_BALL, MOVE_DETECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_DEOXYS_DEFENSE_1] = {
        .species = SPECIES_DEOXYS_DEFENSE,
        .moves = {MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEOXYS_DEFENSE_2] = {
        .species = SPECIES_DEOXYS_DEFENSE,
        .moves = {MOVE_TOXIC, MOVE_TAUNT, MOVE_SPIKES, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DEOXYS_SPEED_1] = {
        .species = SPECIES_DEOXYS_SPEED,
        .moves = {MOVE_TAUNT, MOVE_MAGIC_COAT, MOVE_SPIKES, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DIALGA_1] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_ROAR_OF_TIME, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(104, 0, 0, 252, 0, 152),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DIALGA_2] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_FLASH_CANNON, MOVE_CLANGING_SCALES, MOVE_EARTH_POWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DIALGA_3] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_DRACO_METEOR, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_IRON_DEFENSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DIALGA_4] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, MOVE_ROAR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(244, 0, 0, 0, 252, 12),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DIALGA_ORIGIN_1] = {
        .species = SPECIES_DIALGA_ORIGIN,
        .moves = {MOVE_FLASH_CANNON, MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_ADAMANT_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PALKIA_1] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_ORIGIN_PULSE, MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_FIRE_BLAST},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PALKIA_2] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_ORIGIN_PULSE, MOVE_SPACIAL_REND, MOVE_EARTH_POWER, MOVE_FLAMETHROWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PALKIA_3] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND, MOVE_POWER_GEM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_PALKIA_ORIGIN_1] = {
        .species = SPECIES_PALKIA_ORIGIN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_DRACO_METEOR},
        .heldItem = ITEM_LUSTROUS_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PALKIA_4] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_BULLDOZE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRATINA_ORIGIN_1] = {
        .species = SPECIES_GIRATINA_ORIGIN,
        .moves = {MOVE_POLTERGEIST, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DEFOG},
        .heldItem = ITEM_GRISEOUS_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRATINA_ORIGIN_2] = {
        .species = SPECIES_GIRATINA_ORIGIN,
        .moves = {MOVE_SHADOW_FORCE, MOVE_DRACO_METEOR, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_GRISEOUS_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_GIRATINA_1] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SHADOW_BALL, MOVE_AURA_SPHERE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GIRATINA_2] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_DRAGON_TAIL, MOVE_SLEEP_TALK, MOVE_TOXIC, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GIRATINA_3] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_STONE_EDGE, MOVE_DESTINY_BOND, MOVE_TAILWIND},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MANAPHY_1] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANAPHY_2] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_TAIL_GLOW},
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANAPHY_3] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_FLIP_TURN, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MANAPHY_4] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_REST, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANAPHY_5] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TAKE_HEART, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANAPHY_6] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_SURF, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANAPHY_7] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_TAIL_GLOW, MOVE_REST},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PHIONE_1] = {
        .species = SPECIES_PHIONE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_MOONBLAST},
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PHIONE_2] = {
        .species = SPECIES_PHIONE,
        .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_ICY_WIND, MOVE_HEAL_BELL},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PHIONE_3] = {
        .species = SPECIES_PHIONE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PHIONE_4] = {
        .species = SPECIES_PHIONE,
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_PROTECT},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 248, 8),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PHIONE_5] = {
        .species = SPECIES_PHIONE,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_PROTECT, MOVE_HELPING_HAND},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DARKRAI_1] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARKRAI_2] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DARKRAI_3] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDER, MOVE_DARK_VOID},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARKRAI_4] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DARKRAI_5] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_DARK_PULSE, MOVE_DARK_VOID, MOVE_TAUNT, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_1] = {
        .species = SPECIES_SHAYMIN,
        .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_AIR_SLASH, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_2] = {
        .species = SPECIES_SHAYMIN,
        .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, MOVE_CELEBRATE},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_3] = {
        .species = SPECIES_SHAYMIN,
        .moves = {MOVE_LEAF_STORM, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHAYMIN_4] = {
        .species = SPECIES_SHAYMIN,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_PLAY_ROUGH, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHAYMIN_5] = {
        .species = SPECIES_SHAYMIN,
        .moves = {MOVE_SEED_FLARE, MOVE_FLORAL_HEALING, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SHAYMIN_6] = {
        .species = SPECIES_SHAYMIN,
        .moves = {MOVE_SEED_FLARE, MOVE_FLORAL_HEALING, MOVE_SYNTHESIS, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_GRASSY_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHAYMIN_SKY_1] = {
        .species = SPECIES_SHAYMIN_SKY,
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HEALING_WISH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_2] = {
        .species = SPECIES_SHAYMIN_SKY,
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_3] = {
        .species = SPECIES_SHAYMIN_SKY,
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_4] = {
        .species = SPECIES_SHAYMIN_SKY,
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_LEECH_SEED, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_5] = {
        .species = SPECIES_SHAYMIN_SKY,
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VICTINI_1] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_SEARING_SHOT, MOVE_STORED_POWER, MOVE_FOCUS_BLAST, MOVE_CELEBRATE},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VICTINI_2] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_V_CREATE, MOVE_ZEN_HEADBUTT, MOVE_BOLT_STRIKE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VICTINI_3] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_BLUE_FLARE, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VICTINI_4] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_SEARING_SHOT, MOVE_U_TURN, MOVE_LIGHT_SCREEN, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VICTINI_5] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_V_CREATE, MOVE_PSYCHIC, MOVE_BOLT_STRIKE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_RESHIRAM_1] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_DRACO_METEOR, MOVE_BLUE_FLARE, MOVE_EARTH_POWER, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RESHIRAM_2] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_OUTRAGE, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RESHIRAM_3] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_SCALE_SHOT, MOVE_BLUE_FLARE, MOVE_EARTH_POWER, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_RESHIRAM_4] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_BLUE_FLARE, MOVE_TOXIC, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RESHIRAM_5] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_HEAT_WAVE, MOVE_DRACO_METEOR, MOVE_TAILWIND, MOVE_PROTECT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZEKROM_1] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_DRAGON_CLAW, MOVE_BOLT_STRIKE, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZEKROM_2] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_OUTRAGE, MOVE_BOLT_STRIKE, MOVE_STONE_EDGE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEKROM_3] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_SCALE_SHOT, MOVE_DRACO_METEOR, MOVE_BOLT_STRIKE, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_ZEKROM_4] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_HABAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ZEKROM_5] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_BOLT_STRIKE, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZEKROM_6] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_ROOST},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KYUREM_1] = {
        .species = SPECIES_KYUREM,
        .moves = {MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYUREM_2] = {
        .species = SPECIES_KYUREM,
        .moves = {MOVE_RETURN, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KYUREM_3] = {
        .species = SPECIES_KYUREM,
        .moves = {MOVE_GLACIATE, MOVE_BREAKING_SWIPE, MOVE_BODY_PRESS, MOVE_HELPING_HAND},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KYUREM_BLACK_1] = {
        .species = SPECIES_KYUREM_BLACK,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_OUTRAGE, MOVE_FUSION_BOLT, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KYUREM_BLACK_2] = {
        .species = SPECIES_KYUREM_BLACK,
        .moves = {MOVE_FREEZE_SHOCK, MOVE_DRAGON_CLAW, MOVE_FUSION_BOLT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KYUREM_BLACK_3] = {
        .species = SPECIES_KYUREM_BLACK,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_BREAKING_SWIPE, MOVE_FUSION_BOLT, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KYUREM_WHITE_1] = {
        .species = SPECIES_KYUREM_WHITE,
        .moves = {MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYUREM_WHITE_2] = {
        .species = SPECIES_KYUREM_WHITE,
        .moves = {MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_FREEZE_DRY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYUREM_WHITE_3] = {
        .species = SPECIES_KYUREM_WHITE,
        .moves = {MOVE_GLACIATE, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_PROTECT},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KELDEO_1] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KELDEO_RESOLUTE_1] = {
        .species = SPECIES_KELDEO_RESOLUTE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_AURORA_BEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KELDEO_2] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_MEGAHORN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KELDEO_RESOLUTE_2] = {
        .species = SPECIES_KELDEO_RESOLUTE,
        .moves = {MOVE_SCALD, MOVE_SECRET_SWORD, MOVE_CALM_MIND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KELDEO_3] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_COACHING, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MELOETTA_1] = {
        .species = SPECIES_MELOETTA,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CELEBRATE},
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MELOETTA_2] = {
        .species = SPECIES_MELOETTA,
        .moves = {MOVE_HYPER_VOICE, MOVE_LUSTER_PURGE, MOVE_U_TURN, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MELOETTA_3] = {
        .species = SPECIES_MELOETTA,
        .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_RELIC_SONG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MELOETTA_4] = {
        .species = SPECIES_MELOETTA,
        .moves = {MOVE_HYPER_VOICE, MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MELOETTA_5] = {
        .species = SPECIES_MELOETTA,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENESECT_1] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_U_TURN, MOVE_IRON_HEAD, MOVE_EXTREMESPEED, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENESECT_2] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_U_TURN, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER, MOVE_THUNDER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_GENESECT_3] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_FLASH_CANNON, MOVE_TECHNO_BLAST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_BURN_DRIVE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENESECT_DOUSE_1] = {
        .species = SPECIES_GENESECT_DOUSE,
        .moves = {MOVE_BUG_BUZZ, MOVE_FLASH_CANNON, MOVE_TECHNO_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_DOUSE_DRIVE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENESECT_4] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_U_TURN, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_ELECTROWEB},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XERNEAS_1] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_RETURN, MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_HORN_LEECH},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_XERNEAS_2] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_GEOMANCY},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_XERNEAS_3] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_XERNEAS_4] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_DRAINING_KISS, MOVE_GEOMANCY, MOVE_INGRAIN, MOVE_REST},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_XERNEAS_5] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_GEOMANCY, MOVE_PROTECT},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YVELTAL_1] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_HEAT_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YVELTAL_2] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_KNOCK_OFF, MOVE_RETURN, MOVE_DRAGON_RUSH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_YVELTAL_3] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_YVELTAL_4] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_TAUNT, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 72, 184),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YVELTAL_5] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_OBLIVION_WING, MOVE_SNARL, MOVE_HEAT_WAVE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ZYGARDE_1] = {
        .species = SPECIES_ZYGARDE,
        .moves = {MOVE_OUTRAGE, MOVE_THOUSAND_ARROWS, MOVE_EXTREMESPEED, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZYGARDE_2] = {
        .species = SPECIES_ZYGARDE,
        .moves = {MOVE_THOUSAND_ARROWS, MOVE_EXTREMESPEED, MOVE_DRAGON_DANCE, MOVE_GLARE},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(76, 252, 0, 0, 0, 180),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZYGARDE_3] = {
        .species = SPECIES_ZYGARDE,
        .moves = {MOVE_THOUSAND_WAVES, MOVE_BREAKING_SWIPE, MOVE_TOXIC, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ZYGARDE_4] = {
        .species = SPECIES_ZYGARDE,
        .moves = {MOVE_THOUSAND_ARROWS, MOVE_GLARE, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ZYGARDE_5] = {
        .species = SPECIES_ZYGARDE,
        .moves = {MOVE_CORE_ENFORCER, MOVE_THOUSAND_ARROWS, MOVE_EXTREMESPEED, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_ZYGARDE_10_1] = {
        .species = SPECIES_ZYGARDE_10,
        .moves = {MOVE_OUTRAGE, MOVE_THOUSAND_ARROWS, MOVE_IRON_TAIL, MOVE_EXTREMESPEED},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZYGARDE_10_2] = {
        .species = SPECIES_ZYGARDE_10,
        .moves = {MOVE_OUTRAGE, MOVE_THOUSAND_ARROWS, MOVE_EXTREMESPEED, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DIANCIE_1] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DIANCIE_2] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_DIANCITE,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_DIANCIE_3] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_ROCK_POLISH},
        .heldItem = ITEM_DIANCITE,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 252, 0, 44),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DIANCIE_4] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_STEALTH_ROCK, MOVE_HEAL_BELL},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DIANCIE_5] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 160, 0, 96, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_HOOPA_1] = {
        .species = SPECIES_HOOPA,
        .moves = {MOVE_HYPERSPACE_HOLE, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOOPA_2] = {
        .species = SPECIES_HOOPA,
        .moves = {MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOOPA_3] = {
        .species = SPECIES_HOOPA,
        .moves = {MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HOOPA_4] = {
        .species = SPECIES_HOOPA,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPERSPACE_HOLE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOOPA_5] = {
        .species = SPECIES_HOOPA,
        .moves = {MOVE_HYPERSPACE_HOLE, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_DESTINY_BOND},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HOOPA_6] = {
        .species = SPECIES_HOOPA,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOOPA_UNBOUND_1] = {
        .species = SPECIES_HOOPA_UNBOUND,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HYPERSPACE_FURY, MOVE_GUNK_SHOT, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOOPA_UNBOUND_2] = {
        .species = SPECIES_HOOPA_UNBOUND,
        .moves = {MOVE_HYPERSPACE_HOLE, MOVE_DRAIN_PUNCH, MOVE_TOXIC, MOVE_TRICK_ROOM},
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_HOOPA_UNBOUND_3] = {
        .species = SPECIES_HOOPA_UNBOUND,
        .moves = {MOVE_HYPERSPACE_HOLE, MOVE_HYPERSPACE_FURY, MOVE_GUNK_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_HOOPA_UNBOUND_4] = {
        .species = SPECIES_HOOPA_UNBOUND,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCANION_1] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_FLARE_BLITZ, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VOLCANION_2] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_FIRE_BLAST, MOVE_STEAM_ERUPTION, MOVE_STRANGE_STEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VOLCANION_3] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_DEFOG},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VOLCANION_4] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_FLAMETHROWER, MOVE_STEAM_ERUPTION, MOVE_TOXIC, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCANION_5] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_HEAT_WAVE, MOVE_STEAM_ERUPTION, MOVE_STRANGE_STEAM, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SOLGALEO_1] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_ZEN_HEADBUTT, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SOLGANIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SOLGALEO_2] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SOLGALEO_3] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_TOXIC, MOVE_COSMIC_POWER, MOVE_MORNING_SUN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SOLGALEO_4] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_METAL_BURST, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_MORNING_SUN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SOLGALEO_5] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH, MOVE_WIDE_GUARD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUNALA_1] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_HEAT_WAVE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUNALA_2] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LUNALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUNALA_3] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TRICK, MOVE_DEFOG},
        .heldItem = ITEM_MACHO_BRACE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LUNALA_4] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LUNALA_5] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_ROOST, MOVE_WIDE_GUARD},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NECROZMA_1] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NECROZMA_2] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_EARTHQUAKE, MOVE_X_SCISSOR, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_3] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_HEAT_WAVE, MOVE_POWER_GEM, MOVE_CALM_MIND},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_4] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_HEAT_WAVE, MOVE_CALM_MIND, MOVE_PROTECT},
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_5] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_1] = {
        .species = SPECIES_NECROZMA_DUSK_MANE,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_SUNSTEEL_STRIKE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SOLGANIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_2] = {
        .species = SPECIES_NECROZMA_DUSK_MANE,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_1] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_MOONGEIST_BEAM, MOVE_POWER_GEM, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LUNALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_2] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_MOONGEIST_BEAM, MOVE_HEAT_WAVE, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_3] = {
        .species = SPECIES_NECROZMA_DUSK_MANE,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE},
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_4] = {
        .species = SPECIES_NECROZMA_DUSK_MANE,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_5] = {
        .species = SPECIES_NECROZMA_DUSK_MANE,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_3] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_4] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_MOONGEIST_BEAM, MOVE_DRAGON_PULSE, MOVE_POWER_GEM},
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_5] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_DRAGON_PULSE, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_6] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MOONGEIST_BEAM, MOVE_HEAT_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGEARNA_1] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_IRON_HEAD, MOVE_BRICK_BREAK, MOVE_SPIRIT_BREAK, MOVE_SHIFT_GEAR},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGEARNA_2] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_STEEL_BEAM, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_SHIFT_GEAR},
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGEARNA_3] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_FLEUR_CANNON, MOVE_AURA_SPHERE, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MAGEARNA_4] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_FLEUR_CANNON, MOVE_VOLT_SWITCH, MOVE_HEART_SWAP, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGEARNA_5] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_ELECTROWEB, MOVE_HELPING_HAND, MOVE_CRAFTY_SHIELD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MAGEARNA_6] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MARSHADOW_1] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_ROCK_TOMB},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MARSHADOW_2] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SPECTRAL_THIEF, MOVE_STONE_EDGE, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MARSHADOW_3] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SPECTRAL_THIEF, MOVE_SHADOW_SNEAK, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_MARSHADIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_MARSHADOW_4] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SPECTRAL_THIEF, MOVE_SUBSTITUTE, MOVE_BULK_UP},
        .heldItem = ITEM_MARSHADIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MARSHADOW_5] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_THIEF, MOVE_COACHING, MOVE_PROTECT},
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ZERAORA_1] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_FIRE_PUNCH, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZERAORA_2] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BLAZE_KICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZERAORA_3] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_HIDDEN_POWER, MOVE_WORK_UP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_ZERAORA_4] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_FAKE_OUT, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZERAORA_5] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_ELECTROWEB, MOVE_SNARL, MOVE_VOLT_SWITCH, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZERAORA_6] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_AURA_SPHERE, MOVE_ELECTRIC_TERRAIN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MELMETAL_1] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERPUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MELMETAL_2] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_SUPERPOWER, MOVE_DARKEST_LARIAT, MOVE_THUNDERPUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MELMETAL_3] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_ACID_ARMOR},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MELMETAL_4] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_ICE_PUNCH, MOVE_TOXIC, MOVE_THUNDER_WAVE, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MELMETAL_5] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MELMETAL_6] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_HIGH_HORSEPOWER, MOVE_THUNDERPUNCH, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ZACIAN_1] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_2] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_QUICK_ATTACK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_3] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_4] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_DIG, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_5] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_6] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAMAZENTA_1] = {
        .species = SPECIES_ZAMAZENTA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_HOWL},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAMAZENTA_2] = {
        .species = SPECIES_ZAMAZENTA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_HOWL},
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(24, 252, 0, 0, 0, 232),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZAMAZENTA_3] = {
        .species = SPECIES_ZAMAZENTA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_METAL_BURST},
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZAMAZENTA_4] = {
        .species = SPECIES_ZAMAZENTA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_PSYCHIC_FANGS, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAMAZENTA_CROWNED_1] = {
        .species = SPECIES_ZAMAZENTA_CROWNED,
        .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_HELPING_HAND, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ETERNATUS_1] = {
        .species = SPECIES_ETERNATUS,
        .moves = {MOVE_DYNAMAX_CANNON, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ETERNATUS_2] = {
        .species = SPECIES_ETERNATUS,
        .moves = {MOVE_DYNAMAX_CANNON, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_METEOR_BEAM},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ETERNATUS_3] = {
        .species = SPECIES_ETERNATUS,
        .moves = {MOVE_MYSTICAL_FIRE, MOVE_TOXIC, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ETERNATUS_4] = {
        .species = SPECIES_ETERNATUS,
        .moves = {MOVE_ETERNABEAM, MOVE_MYSTICAL_FIRE, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_1] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_WICKED_BLOW, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_2] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_3] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_WICKED_BLOW, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(240, 164, 0, 0, 0, 104),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_4] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_1] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_2] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, MOVE_FIRE_PUNCH, MOVE_POISON_JAB},
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_3] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_BODY_PRESS, MOVE_SURGING_STRIKES, MOVE_BULK_UP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 92, 0, 0, 0, 164),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_4] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, MOVE_AQUA_JET, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZARUDE_1] = {
        .species = SPECIES_ZARUDE,
        .moves = {MOVE_POWER_WHIP, MOVE_THROAT_CHOP, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZARUDE_2] = {
        .species = SPECIES_ZARUDE,
        .moves = {MOVE_POWER_WHIP, MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZARUDE_3] = {
        .species = SPECIES_ZARUDE,
        .moves = {MOVE_DARKEST_LARIAT, MOVE_POWER_WHIP, MOVE_JUNGLE_HEALING, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 120, 136),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZARUDE_4] = {
        .species = SPECIES_ZARUDE,
        .moves = {MOVE_POWER_WHIP, MOVE_SNARL, MOVE_TAUNT, MOVE_JUNGLE_HEALING},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 116, 0, 0, 12, 128),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GLASTRIER_1] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_SMART_STRIKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLASTRIER_2] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_SMART_STRIKE, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLASTRIER_3] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_ICICLE_CRASH, MOVE_BODY_PRESS, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLASTRIER_4] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_ICICLE_CRASH, MOVE_CLOSE_COMBAT, MOVE_HIGH_HORSEPOWER, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPECTRIER_1] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_BEAM, MOVE_DARK_PULSE, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SPECTRIER_2] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(56, 0, 200, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SPECTRIER_3] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SPECTRIER_4] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_WILL_O_WISP, MOVE_TAUNT},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_1] = {
        .species = SPECIES_CALYREX,
        .moves = {MOVE_LEAF_STORM, MOVE_PSYCHIC, MOVE_POLLEN_PUFF, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_2] = {
        .species = SPECIES_CALYREX,
        .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_CALM_MIND, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 252, 0, 128),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_3] = {
        .species = SPECIES_CALYREX,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HEAL_PULSE, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_SHADOW_1] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_PSYSHOCK, MOVE_GIGA_DRAIN, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_SHADOW_2] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_EXPANDING_FORCE, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_SHADOW_3] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_LEECH_SEED, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 60, 196, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_SHADOW_4] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_EXPANDING_FORCE, MOVE_POLLEN_PUFF, MOVE_PROTECT},
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_ICE_1] = {
        .species = SPECIES_CALYREX_ICE,
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 128, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CALYREX_ICE_2] = {
        .species = SPECIES_CALYREX_ICE,
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_AGILITY},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 128, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CALYREX_ICE_3] = {
        .species = SPECIES_CALYREX_ICE,
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 8, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CALYREX_ICE_4] = {
        .species = SPECIES_CALYREX_ICE,
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 8, 0),
        .nature = NATURE_BRAVE
    },
};