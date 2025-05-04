const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_ABOMASNOW_1] = {
        .species = SPECIES_ABOMASNOW, //暴雪王
        .moves = {MOVE_BLIZZARD, MOVE_LEAF_STORM, MOVE_EARTHQUAKE, MOVE_ICE_SHARD}, //暴风雪，飞叶风暴，地震，冰砾
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ABOMASNOW_2] = {
        .species = SPECIES_ABOMASNOW, //暴雪王
        .moves = {MOVE_BLIZZARD, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN}, //暴风雪，木槌，地震，终极吸取
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ABOMASNOW_3] = {
        .species = SPECIES_ABOMASNOW, //暴雪王
        .moves = {MOVE_BULLET_SEED, MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //种子机关枪，冰锥，地震，剑舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABOMASNOW_4] = {
        .species = SPECIES_ABOMASNOW, //暴雪王
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_AURORA_VEIL, MOVE_PROTECT}, //暴风雪，终极吸取，极光幕，守住
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL, //阿勃梭鲁
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE}, //暗袭要害，精神利刃，嬉闹，剑舞
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL, //阿勃梭鲁
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_ME_FIRST, MOVE_SWORDS_DANCE}, //暗袭要害，精神利刃，抢先一步，剑舞
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ABSOL_3] = {
        .species = SPECIES_ABSOL, //阿勃梭鲁
        .moves = {MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_FIRE_BLAST, MOVE_IRON_TAIL}, //拍落，追打，大字爆炎，铁尾
        .heldItem = ITEM_ABSOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ABSOL_4] = {
        .species = SPECIES_ABSOL, //阿勃梭鲁
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE}, //突袭，蛮力，意念头锤，岩崩
        .heldItem = ITEM_ABSOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ACCELGOR_1] = {
        .species = SPECIES_ACCELGOR, //敏捷虫
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL, MOVE_U_TURN}, //虫鸣，真气弹，能量球，急速折返
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ACCELGOR_2] = {
        .species = SPECIES_ACCELGOR, //敏捷虫
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_U_TURN, MOVE_SPIKES}, //虫鸣，污泥炸弹，急速折返，撒菱
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ACCELGOR_3] = {
        .species = SPECIES_ACCELGOR, //敏捷虫
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL, MOVE_ENDURE}, //虫鸣，真气弹，能量球，挺住
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ACCELGOR_4] = {
        .species = SPECIES_ACCELGOR, //敏捷虫
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENCORE, MOVE_PROTECT}, //虫鸣，真气弹，再来一次，守住
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AEGISLASH_SHIELD_1] = {
        .species = SPECIES_AEGISLASH_SHIELD, //坚盾剑怪
        .moves = {MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_KINGS_SHIELD}, //影子偷袭，铁头，剑舞，王者盾牌
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AEGISLASH_SHIELD_2] = {
        .species = SPECIES_AEGISLASH_SHIELD, //坚盾剑怪
        .moves = {MOVE_SHADOW_CLAW, MOVE_GYRO_BALL, MOVE_SHADOW_SNEAK, MOVE_KINGS_SHIELD}, //暗影爪，陀螺球，影子偷袭，王者盾牌
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AEGISLASH_SHIELD_3] = {
        .species = SPECIES_AEGISLASH_SHIELD, //坚盾剑怪
        .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SHADOW_SNEAK, MOVE_KINGS_SHIELD}, //暗影球，加农光炮，影子偷袭，王者盾牌
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_AEGISLASH_SHIELD_4] = {
        .species = SPECIES_AEGISLASH_SHIELD, //坚盾剑怪
        .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD}, //暗影球，加农光炮，广域防守，王者盾牌
        .heldItem = ITEM_SPOOKY_PLATE,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 44, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL, //化石翼龙
        .moves = {MOVE_STONE_EDGE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_CRUNCH}, //尖石攻击，双翼，地震，咬碎
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL, //化石翼龙
        .moves = {MOVE_STONE_EDGE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //尖石攻击，双翼，地震，龙之舞
        .heldItem = ITEM_AERODACTYLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL, //化石翼龙
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_IRON_HEAD, MOVE_FIRE_FANG, MOVE_ICE_FANG}, //双翼，铁头，火焰牙，冰冻牙
        .heldItem = ITEM_AERODACTYLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON, //波士可多拉
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL}, //重磅冲撞，双刃头锤，地震，水流尾
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON, //波士可多拉
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //重磅冲撞，地震，剧毒，隐形岩
        .heldItem = ITEM_AGGRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_AGGRON, //波士可多拉
        .moves = {MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK}, //重磅冲撞，扑击，冰冻拳，隐形岩
        .heldItem = ITEM_AGGRONITE,
        .ev = TRAINER_PARTY_EVS(248, 56, 0, 4, 0, 200),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_AGGRON, //波士可多拉
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_HIGH_HORSEPOWER, MOVE_PROTECT}, //重磅冲撞，双刃头锤，十万马力，守住
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM, //胡地
        .moves = {MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}, //广域战力，真气弹，魔法闪耀，能量球
        .heldItem = ITEM_ALAKAZITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM, //胡地
        .moves = {MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST, MOVE_PSYCHIC, MOVE_SHADOW_BALL}, //广域战力，真气弹，精神强念，暗影球
        .heldItem = ITEM_ALAKAZITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM, //胡地
        .moves = {MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}, //广域战力，真气弹，暗影球，诡计
        .heldItem = ITEM_ALAKAZITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM, //胡地
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TAUNT, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC}, //广域战力，挑衅，魔法闪耀，精神强念
        .heldItem = ITEM_ALAKAZITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_VANILLA_CREAM_1] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM, //霜奶仙
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC, MOVE_RECOVER}, //魔法闪耀，魔法火焰，精神强念，自我再生
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_VANILLA_CREAM_2] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM, //霜奶仙
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_RECOVER}, //魔法闪耀，魔法火焰，冥想，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_VANILLA_CREAM_3] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM, //霜奶仙
        .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_ACID_ARMOR, MOVE_REST}, //辅助力量，冥想，溶化，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ALCREMIE_STRAWBERRY_VANILLA_CREAM_4] = {
        .species = SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM, //霜奶仙
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_DECORATE, MOVE_HELPING_HAND, MOVE_PROTECT}, //魔法闪耀，装饰，帮助，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ALOMOMOLA_1] = {
        .species = SPECIES_ALOMOMOLA, //保姆曼波
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //热水，剧毒，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ALOMOMOLA_2] = {
        .species = SPECIES_ALOMOMOLA, //保姆曼波
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //拍落，剧毒，祈愿，守住
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALOMOMOLA_3] = {
        .species = SPECIES_ALOMOMOLA, //保姆曼波
        .moves = {MOVE_DIVE, MOVE_AQUA_JET, MOVE_MIRROR_COAT, MOVE_WISH}, //潜水，水流喷射，镜面反射，祈愿
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALOMOMOLA_4] = {
        .species = SPECIES_ALOMOMOLA, //保姆曼波
        .moves = {MOVE_LIQUIDATION, MOVE_HEAL_PULSE, MOVE_HELPING_HAND, MOVE_WIDE_GUARD}, //水流裂破，治愈波动，帮助，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(228, 0, 252, 0, 0, 28),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA, //七夕青鸟
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_FIRE_BLAST}, //流星群，暴风，冰冻光束，大字爆炎
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA, //七夕青鸟
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_ROOST}, //报恩，地震，龙之舞，羽栖
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS(72, 252, 0, 184, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_ALTARIA, //七夕青鸟
        .moves = {MOVE_HYPER_VOICE, MOVE_TOXIC, MOVE_COTTON_GUARD, MOVE_ROOST}, //巨声，剧毒，棉花防守，羽栖
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_ALTARIA, //七夕青鸟
        .moves = {MOVE_TOXIC, MOVE_HEAL_BELL, MOVE_COTTON_GUARD, MOVE_ROOST}, //剧毒，治愈铃声，棉花防守，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ALTARIA_5] = {
        .species = SPECIES_ALTARIA, //七夕青鸟
        .moves = {MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_DEFOG, MOVE_TAILWIND}, //巨声，热风，清除浓雾，顺风
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMBIPOM_1] = {
        .species = SPECIES_AMBIPOM, //双尾怪手
        .moves = {MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT}, //报恩，拍落，急速折返，击掌奇袭
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AMBIPOM_2] = {
        .species = SPECIES_AMBIPOM, //双尾怪手
        .moves = {MOVE_U_TURN, MOVE_THIEF, MOVE_FLING, MOVE_FAKE_OUT}, //急速折返，小偷，投掷，击掌奇袭
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AMBIPOM_3] = {
        .species = SPECIES_AMBIPOM, //双尾怪手
        .moves = {MOVE_RETURN, MOVE_LOW_KICK, MOVE_ACROBATICS, MOVE_FAKE_OUT}, //报恩，踢倒，杂技，击掌奇袭
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AMOONGUSS_1] = {
        .species = SPECIES_AMOONGUSS, //败露球菇
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_CLEAR_SMOG, MOVE_SPORE}, //终极吸取，污泥炸弹，清除之烟，蘑菇孢子
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AMOONGUSS_2] = {
        .species = SPECIES_AMOONGUSS, //败露球菇
        .moves = {MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_INGRAIN, MOVE_SUBSTITUTE}, //终极吸取，蘑菇孢子，扎根，替身
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AMOONGUSS_3] = {
        .species = SPECIES_AMOONGUSS, //败露球菇
        .moves = {MOVE_FOUL_PLAY, MOVE_SPORE, MOVE_DOUBLE_TEAM, MOVE_SYNTHESIS}, //欺诈，蘑菇孢子，影子分身，光合作用
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AMOONGUSS_4] = {
        .species = SPECIES_AMOONGUSS, //败露球菇
        .moves = {MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_PROTECT}, //终极吸取，蘑菇孢子，愤怒粉，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS, //电龙
        .moves = {MOVE_THUNDER_CAGE, MOVE_ELECTRIC_TERRAIN, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //雷电囚笼，电气场地，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS, //电龙
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE, MOVE_VOLT_SWITCH}, //十万伏特，真气弹，龙之波动，伏特替换
        .heldItem = ITEM_AMPHAROSITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS, //电龙
        .moves = {MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_SCREECH, MOVE_THUNDER_WAVE}, //雷电拳，劈瓦，刺耳声，电磁波
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS, //电龙
        .moves = {MOVE_THUNDER_CAGE, MOVE_REST, MOVE_TOXIC, MOVE_COTTON_GUARD}, //雷电囚笼，睡觉，剧毒，棉花防守
        .heldItem = ITEM_AMPHAROSITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_AMPHAROS_5] = {
        .species = SPECIES_AMPHAROS, //电龙
        .moves = {MOVE_THUNDER_CAGE, MOVE_ELECTROWEB, MOVE_FOCUS_BLAST, MOVE_PROTECT}, //雷电囚笼，电网，真气弹，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ANNIHILAPE_1] = {
        .species = SPECIES_ANNIHILAPE, //弃世猴
        .moves = {MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT}, //愤怒之拳，吸取拳，近身战，垃圾射击
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ANNIHILAPE_2] = {
        .species = SPECIES_ANNIHILAPE, //弃世猴
        .moves = {MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_TAUNT}, //愤怒之拳，吸取拳，健美，挑衅
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(68, 252, 0, 184, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_APPLETUN_1] = {
        .species = SPECIES_APPLETUN, //丰蜜龙
        .moves = {MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_APPLE_ACID, MOVE_GIGA_DRAIN}, //流星群，龙之波动，苹果酸，终极吸取
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(20, 0, 0, 236, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_APPLETUN_2] = {
        .species = SPECIES_APPLETUN, //丰蜜龙
        .moves = {MOVE_APPLE_ACID, MOVE_LEECH_SEED, MOVE_RECOVER, MOVE_PROTECT}, //苹果酸，寄生种子，自我再生，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 196, 0, 0, 64),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_APPLETUN_3] = {
        .species = SPECIES_APPLETUN, //丰蜜龙
        .moves = {MOVE_SEED_BOMB, MOVE_BODY_PRESS, MOVE_GYRO_BALL, MOVE_CURSE}, //种子炸弹，扑击，陀螺球，诅咒
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 64, 56, 0, 0, 136),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_APPLETUN_4] = {
        .species = SPECIES_APPLETUN, //丰蜜龙
        .moves = {MOVE_APPLE_ACID, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN, MOVE_REFLECT}, //苹果酸，寄生种子，光墙，反射壁
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 120, 0, 0, 136),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_ARAQUANID_1] = {
        .species = SPECIES_ARAQUANID, //滴蛛霸
        .moves = {MOVE_LIQUIDATION, MOVE_LUNGE, MOVE_CRUNCH, MOVE_STICKY_WEB}, //水流裂破，猛扑，咬碎，黏黏网
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ARAQUANID_2] = {
        .species = SPECIES_ARAQUANID, //滴蛛霸
        .moves = {MOVE_LIQUIDATION, MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT}, //水流裂破，纠缠不休，剧毒，守住
        .heldItem = ITEM_SPLASH_PLATE,
        .ev = TRAINER_PARTY_EVS(96, 220, 0, 192, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARAQUANID_3] = {
        .species = SPECIES_ARAQUANID, //滴蛛霸
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_DOUBLE_TEAM}, //纠缠不休，剧毒，水流环，影子分身
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARAQUANID_4] = {
        .species = SPECIES_ARAQUANID, //滴蛛霸
        .moves = {MOVE_LIQUIDATION, MOVE_STICKY_WEB, MOVE_WIDE_GUARD, MOVE_PROTECT}, //水流裂破，黏黏网，广域防守，守住
        .heldItem = ITEM_SPLASH_PLATE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK, //阿柏怪
        .moves = {MOVE_GUNK_SHOT, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SCALE_SHOT}, //垃圾射击，地震，咬碎，鳞射
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK, //阿柏怪
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_TOXIC}, //毒击，地震，突袭，剧毒
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARBOK_3] = {
        .species = SPECIES_ARBOK, //阿柏怪
        .moves = {MOVE_GUNK_SHOT, MOVE_DRAGON_TAIL, MOVE_COIL, MOVE_TOXIC_SPIKES}, //垃圾射击，龙尾，盘蜷，毒菱
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ARBOK_4] = {
        .species = SPECIES_ARBOK, //阿柏怪
        .moves = {MOVE_ROCK_SLIDE, MOVE_PURSUIT, MOVE_GLARE, MOVE_PROTECT}, //岩崩，追打，大蛇瞪眼，守住
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARBOLIVA_1] = {
        .species = SPECIES_ARBOLIVA, //奥利瓦
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER, MOVE_ENERGY_BALL, MOVE_HELPING_HAND}, //魔法闪耀，大地之力，能量球，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ARBOLIVA_2] = {
        .species = SPECIES_ARBOLIVA, //奥利瓦
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_PETAL_DANCE}, //魔法闪耀，大地之力，巨声，花瓣舞
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE, //风速狗
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED}, //闪焰冲锋，近身战，嬉闹，神速
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE, //风速狗
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_EXTREME_SPEED, MOVE_SUNNY_DAY}, //过热，日光束，神速，大晴天
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE, //风速狗
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_MORNING_SUN, MOVE_WILL_O_WISP}, //闪焰冲锋，神速，晨光，磷火
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE, //风速狗
        .moves = {MOVE_HEAT_WAVE, MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_PROTECT}, //热风，巨声，大声咆哮，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARCANINE_HISUI_1] = {
        .species = SPECIES_ARCANINE_HISUI, //洗翠风速狗
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED}, //闪焰冲锋，双刃头锤，近身战，神速
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_HISUI_2] = {
        .species = SPECIES_ARCANINE_HISUI, //洗翠风速狗
        .moves = {MOVE_RAGING_FURY, MOVE_STONE_EDGE, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED}, //大愤慨，尖石攻击，疯狂伏特，神速
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_HISUI_3] = {
        .species = SPECIES_ARCANINE_HISUI, //洗翠风速狗
        .moves = {MOVE_BURN_UP, MOVE_MORNING_SUN, MOVE_WILL_O_WISP, MOVE_PROTECT}, //燃尽，晨光，磷火，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCANINE_HISUI_4] = {
        .species = SPECIES_ARCANINE_HISUI, //洗翠风速狗
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED}, //闪焰冲锋，岩崩，近身战，神速
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCHEOPS_1] = {
        .species = SPECIES_ARCHEOPS, //始祖大鸟
        .moves = {MOVE_STONE_EDGE, MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_ROOST}, //尖石攻击，杂技，地震，羽栖
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCHEOPS_2] = {
        .species = SPECIES_ARCHEOPS, //始祖大鸟
        .moves = {MOVE_HEAD_SMASH, MOVE_DUAL_WINGBEAT, MOVE_FLYING_PRESS, MOVE_U_TURN}, //双刃头锤，双翼，飞身重压，急速折返
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCHEOPS_3] = {
        .species = SPECIES_ARCHEOPS, //始祖大鸟
        .moves = {MOVE_STONE_EDGE, MOVE_ENDEAVOR, MOVE_TAUNT, MOVE_STEALTH_ROCK}, //尖石攻击，蛮干，挑衅，隐形岩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCHEOPS_4] = {
        .species = SPECIES_ARCHEOPS, //始祖大鸟
        .moves = {MOVE_ROCK_SLIDE, MOVE_HEAT_WAVE, MOVE_TAILWIND, MOVE_QUICK_GUARD}, //岩崩，热风，顺风，快速防守
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCTOVISH_1] = {
        .species = SPECIES_ARCTOVISH, //鳃鱼海兽
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_PSYCHIC_FANGS, MOVE_STONE_EDGE}, //鳃咬，冰柱坠击，精神之牙，尖石攻击
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCTOVISH_2] = {
        .species = SPECIES_ARCTOVISH, //鳃鱼海兽
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_METEOR_BEAM, MOVE_HIDDEN_POWER}, //水炮，冰冻光束，流星光束，觉醒力量
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARCTOVISH_3] = {
        .species = SPECIES_ARCTOVISH, //鳃鱼海兽
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_FREEZE_DRY, MOVE_IRON_HEAD}, //鳃咬，冰柱坠击，冷冻干燥，铁头
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCTOVISH_4] = {
        .species = SPECIES_ARCTOVISH, //鳃鱼海兽
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_AURORA_VEIL, MOVE_PROTECT}, //冲浪，冰冻之风，极光幕，守住
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARCTOZOLT_1] = {
        .species = SPECIES_ARCTOZOLT, //雷鸟海兽
        .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_STONE_EDGE, MOVE_LOW_KICK}, //电喙，冰柱坠击，尖石攻击，踢倒
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCTOZOLT_2] = {
        .species = SPECIES_ARCTOZOLT, //雷鸟海兽
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_HYPER_VOICE}, //十万伏特，冰冻光束，冲浪，巨声
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARCTOZOLT_3] = {
        .species = SPECIES_ARCTOZOLT, //雷鸟海兽
        .moves = {MOVE_ICICLE_CRASH, MOVE_BOLT_BEAK, MOVE_STOMPING_TANTRUM, MOVE_HAIL}, //冰柱坠击，电喙，跺脚，冰雹
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCTOZOLT_4] = {
        .species = SPECIES_ARCTOZOLT, //雷鸟海兽
        .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_BULLDOZE, MOVE_THUNDER_WAVE}, //电喙，冰柱坠击，重踏，电磁波
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARIADOS_1] = {
        .species = SPECIES_ARIADOS, //阿利多斯
        .moves = {MOVE_POISON_JAB, MOVE_STICKY_WEB, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}, //毒击，黏黏网，影子偷袭，剑舞
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARIADOS_2] = {
        .species = SPECIES_ARIADOS, //阿利多斯
        .moves = {MOVE_POISON_JAB, MOVE_FELL_STINGER, MOVE_SHADOW_SNEAK, MOVE_AGILITY}, //毒击，致命针刺，影子偷袭，高速移动
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARIADOS_3] = {
        .species = SPECIES_ARIADOS, //阿利多斯
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_SUCKER_PUNCH, MOVE_STICKY_WEB, MOVE_TOXIC_SPIKES}, //迎头一击，突袭，黏黏网，毒菱
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARIADOS_4] = {
        .species = SPECIES_ARIADOS, //阿利多斯
        .moves = {MOVE_MEGAHORN, MOVE_SUCKER_PUNCH, MOVE_RAGE_POWDER, MOVE_STICKY_WEB}, //超级角击，突袭，愤怒粉，黏黏网
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO, //太古盔甲
        .moves = {MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_AQUA_JET}, //尖石攻击，十字剪，地震，水流喷射
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO, //太古盔甲
        .moves = {MOVE_ROCK_BLAST, MOVE_CROSS_POISON, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE}, //岩石爆击，十字毒刃，拍落，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 212, 0, 44),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO, //太古盔甲
        .moves = {MOVE_ACCELEROCK, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_SWORDS_DANCE}, //冲岩，水流喷射，水流裂破，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_ARMALDO, //太古盔甲
        .moves = {MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK, MOVE_SANDSTORM}, //岩崩，高速旋转，隐形岩，沙暴
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ARMALDO_5] = {
        .species = SPECIES_ARMALDO, //太古盔甲
        .moves = {MOVE_LIQUIDATION, MOVE_ACCELEROCK, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //水流裂破，冲岩，拍落，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ARMAROUGE_1] = {
        .species = SPECIES_ARMAROUGE, //红莲铠骑
        .moves = {MOVE_EXPANDING_FORCE, MOVE_ENERGY_BALL, MOVE_ARMOR_CANNON, MOVE_PROTECT}, //广域战力，能量球，铠农炮，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ARMAROUGE_2] = {
        .species = SPECIES_ARMAROUGE, //红莲铠骑
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_AURA_SPHERE, MOVE_HEAT_WAVE}, //精神强念，冥想，波导弹，热风
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ARMAROUGE_3] = {
        .species = SPECIES_ARMAROUGE, //红莲铠骑
        .moves = {MOVE_EXPANDING_FORCE, MOVE_ENERGY_BALL, MOVE_ARMOR_CANNON, MOVE_PROTECT}, //广域战力，能量球，铠农炮，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AROMATISSE_1] = {
        .species = SPECIES_AROMATISSE, //芳香精
        .moves = {MOVE_MOONBLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM}, //月亮之力，觉醒力量，诡计，戏法空间
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 248, 8),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_AROMATISSE_2] = {
        .species = SPECIES_AROMATISSE, //芳香精
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_TOXIC, MOVE_PROTECT}, //月亮之力，祈愿，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AROMATISSE_3] = {
        .species = SPECIES_AROMATISSE, //芳香精
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //月亮之力，祈愿，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AROMATISSE_4] = {
        .species = SPECIES_AROMATISSE, //芳香精
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HEAL_PULSE, MOVE_PROTECT, MOVE_TRICK_ROOM}, //魔法闪耀，治愈波动，守住，戏法空间
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO, //急冻鸟
        .moves = {MOVE_FREEZE_DRY, MOVE_SHEER_COLD, MOVE_MIND_READER, MOVE_ROOST}, //冷冻干燥，绝对零度，心之眼，羽栖
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO, //急冻鸟
        .moves = {MOVE_FREEZE_DRY, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_ROOST}, //冷冻干燥，暴风，觉醒力量，羽栖
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO, //急冻鸟
        .moves = {MOVE_FROST_BREATH, MOVE_HAIL, MOVE_AURORA_VEIL, MOVE_TAILWIND}, //冰息，冰雹，极光幕，顺风
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO, //急冻鸟
        .moves = {MOVE_BLIZZARD, MOVE_GLACIATE, MOVE_TOXIC, MOVE_AURORA_VEIL}, //暴风雪，冰封世界，剧毒，极光幕
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_GALAR_1] = {
        .species = SPECIES_ARTICUNO_GALAR, //伽勒尔急冻鸟
        .moves = {MOVE_FREEZING_GLARE, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, //冰冷视线，空气之刃，暗影球，冥想
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_GALAR_2] = {
        .species = SPECIES_ARTICUNO_GALAR, //伽勒尔急冻鸟
        .moves = {MOVE_FUTURE_SIGHT, MOVE_HURRICANE, MOVE_U_TURN, MOVE_FREEZING_GLARE}, //预知未来，暴风，急速折返，冰冷视线
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_GALAR_3] = {
        .species = SPECIES_ARTICUNO_GALAR, //伽勒尔急冻鸟
        .moves = {MOVE_FREEZING_GLARE, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_AIR_SLASH}, //冰冷视线，巨声，冥想，空气之刃
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_GALAR_4] = {
        .species = SPECIES_ARTICUNO_GALAR, //伽勒尔急冻鸟
        .moves = {MOVE_FREEZING_GLARE, MOVE_HYPER_VOICE, MOVE_TAILWIND, MOVE_SHADOW_BALL}, //冰冷视线，巨声，顺风，暗影球
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AUDINO_1] = {
        .species = SPECIES_AUDINO, //差不多娃娃
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE, MOVE_ENTRAINMENT, MOVE_HEAL_BELL}, //魔法闪耀，电磁波，找伙伴，治愈铃声
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AUDINO_2] = {
        .species = SPECIES_AUDINO, //差不多娃娃
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_WISH, MOVE_PROTECT}, //魔法闪耀，冥想，祈愿，守住
        .heldItem = ITEM_AUDINITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AUDINO_3] = {
        .species = SPECIES_AUDINO, //差不多娃娃
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //拍落，剧毒，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AUDINO_4] = {
        .species = SPECIES_AUDINO, //差不多娃娃
        .moves = {MOVE_ICY_WIND, MOVE_DECORATE, MOVE_HEAL_PULSE, MOVE_PROTECT}, //冰冻之风，装饰，治愈波动，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AUDINO_5] = {
        .species = SPECIES_AUDINO, //差不多娃娃
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HEAL_PULSE, MOVE_DECORATE, MOVE_TRICK_ROOM}, //魔法闪耀，治愈波动，装饰，戏法空间
        .heldItem = ITEM_AUDINITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_AURORUS_1] = {
        .species = SPECIES_AURORUS, //冰雪巨龙
        .moves = {MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT}, //暴风雪，大地之力，加农光炮，十万伏特
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AURORUS_2] = {
        .species = SPECIES_AURORUS, //冰雪巨龙
        .moves = {MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_REFLECT_TYPE, MOVE_AURORA_VEIL}, //暴风雪，大地之力，镜面属性，极光幕
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AURORUS_3] = {
        .species = SPECIES_AURORUS, //冰雪巨龙
        .moves = {MOVE_METEOR_BEAM, MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_ROCK_POLISH}, //流星光束，暴风雪，大地之力，岩石打磨
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AURORUS_4] = {
        .species = SPECIES_AURORUS, //冰雪巨龙
        .moves = {MOVE_ICY_WIND, MOVE_DISCHARGE, MOVE_AURORA_VEIL, MOVE_PROTECT}, //冰冻之风，放电，极光幕，守住
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AVALUGG_1] = {
        .species = SPECIES_AVALUGG, //冰岩怪
        .moves = {MOVE_BODY_PRESS, MOVE_RAPID_SPIN, MOVE_RECOVER, MOVE_TOXIC}, //扑击，高速旋转，自我再生，剧毒
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_AVALUGG_2] = {
        .species = SPECIES_AVALUGG, //冰岩怪
        .moves = {MOVE_AVALANCHE, MOVE_RAPID_SPIN, MOVE_RECOVER, MOVE_STEALTH_ROCK}, //雪崩，高速旋转，自我再生，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AVALUGG_3] = {
        .species = SPECIES_AVALUGG, //冰岩怪
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_GYRO_BALL}, //冰山风，地震，尖石攻击，陀螺球
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AVALUGG_4] = {
        .species = SPECIES_AVALUGG, //冰岩怪
        .moves = {MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_WIDE_GUARD}, //扑击，岩崩，隐形岩，广域防守
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AVALUGG_HISUI_1] = {
        .species = SPECIES_AVALUGG_HISUI, //洗翠冰岩怪
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH}, //冰山风，尖石攻击，地震，咬碎
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_AVALUGG_HISUI_2] = {
        .species = SPECIES_AVALUGG_HISUI, //洗翠冰岩怪
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE}, //冰山风，岩崩，地震，诅咒
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AVALUGG_HISUI_3] = {
        .species = SPECIES_AVALUGG_HISUI, //洗翠冰岩怪
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_BODY_PRESS, MOVE_GYRO_BALL, MOVE_MIRROR_COAT}, //冰山风，扑击，陀螺球，镜面反射
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_AVALUGG_HISUI_4] = {
        .species = SPECIES_AVALUGG_HISUI, //洗翠冰岩怪
        .moves = {MOVE_ICE_SHARD, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD}, //冰砾，岩崩，地震，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_AZELF_1] = {
        .species = SPECIES_AZELF, //亚克诺姆
        .moves = {MOVE_FIRE_BLAST, MOVE_EXPANDING_FORCE, MOVE_TAUNT, MOVE_STEALTH_ROCK}, //大字爆炎，广域战力，挑衅，隐形岩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AZELF_2] = {
        .species = SPECIES_AZELF, //亚克诺姆
        .moves = {MOVE_KNOCK_OFF, MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_MAGIC_COAT}, //拍落，大爆炸，隐形岩，魔法反射
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AZELF_3] = {
        .species = SPECIES_AZELF, //亚克诺姆
        .moves = {MOVE_EXPANDING_FORCE, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT}, //广域战力，喷射火焰，十万伏特，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AZELF_4] = {
        .species = SPECIES_AZELF, //亚克诺姆
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_EXPLOSION, MOVE_PROTECT}, //意念头锤，冰冻拳，大爆炸，守住
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL, //玛力露丽
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_AQUA_JET}, //水流裂破，嬉闹，拍落，水流喷射
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL, //玛力露丽
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_BELLY_DRUM}, //水流裂破，嬉闹，水流喷射，腹鼓
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AZUMARILL_3] = {
        .species = SPECIES_AZUMARILL, //玛力露丽
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RAIN_DANCE, MOVE_AQUA_RING}, //热水，剧毒，求雨，水流环
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AZUMARILL_4] = {
        .species = SPECIES_AZUMARILL, //玛力露丽
        .moves = {MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM, MOVE_PROTECT}, //水流喷射，嬉闹，腹鼓，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE, //诅咒娃娃
        .moves = {MOVE_POLTERGEIST, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_WILL_O_WISP}, //灵骚，突袭，拍落，磷火
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE, //诅咒娃娃
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CURSE, MOVE_THUNDER_WAVE, MOVE_TRICK}, //突袭，诅咒，电磁波，戏法
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BANETTE_3] = {
        .species = SPECIES_BANETTE, //诅咒娃娃
        .moves = {MOVE_POLTERGEIST, MOVE_GUNK_SHOT, MOVE_DESTINY_BOND, MOVE_TAUNT}, //灵骚，垃圾射击，同命，挑衅
        .heldItem = ITEM_BANETTITE,
        .ev = TRAINER_PARTY_EVS(40, 252, 0, 216, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BANETTE_4] = {
        .species = SPECIES_BANETTE, //诅咒娃娃
        .moves = {MOVE_OMINOUS_WIND, MOVE_ICY_WIND, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}, //奇异之风，冰冻之风，磷火，分担痛楚
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BARBARACLE_1] = {
        .species = SPECIES_BARBARACLE, //龟足巨铠
        .moves = {MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SHELL_SMASH}, //水流裂破，尖石攻击，地震，破壳
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BARBARACLE_2] = {
        .species = SPECIES_BARBARACLE, //龟足巨铠
        .moves = {MOVE_RAZOR_SHELL, MOVE_STONE_EDGE, MOVE_CROSS_CHOP, MOVE_SHADOW_CLAW}, //贝壳刃，尖石攻击，十字劈，暗影爪
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARBARACLE_3] = {
        .species = SPECIES_BARBARACLE, //龟足巨铠
        .moves = {MOVE_LIQUIDATION, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_NIGHT_SLASH}, //水流裂破，龙爪，地震，暗袭要害
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARBARACLE_4] = {
        .species = SPECIES_BARBARACLE, //龟足巨铠
        .moves = {MOVE_RAZOR_SHELL, MOVE_FLING, MOVE_HELPING_HAND, MOVE_STEALTH_ROCK}, //贝壳刃，投掷，帮助，隐形岩
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BARRASKEWDA_1] = {
        .species = SPECIES_BARRASKEWDA, //戽斗尖梭
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN, MOVE_AQUA_JET}, //水流裂破，近身战，快速折返，水流喷射
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARRASKEWDA_2] = {
        .species = SPECIES_BARRASKEWDA, //戽斗尖梭
        .moves = {MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_THROAT_CHOP}, //攀瀑，近身战，精神之牙，深渊突刺
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARRASKEWDA_3] = {
        .species = SPECIES_BARRASKEWDA, //戽斗尖梭
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_POISON_JAB}, //水流裂破，近身战，直冲钻，毒击
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BARRASKEWDA_4] = {
        .species = SPECIES_BARRASKEWDA, //戽斗尖梭
        .moves = {MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_PROTECT}, //攀瀑，近身战，深渊突刺，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BASCULEGION_F_1] = {
        .species = SPECIES_BASCULEGION_F, //雌性幽尾玄鱼
        .moves = {MOVE_HEX, MOVE_TOXIC, MOVE_PAIN_SPLIT, MOVE_SUBSTITUTE}, //祸不单行，剧毒，分担痛楚，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BASCULEGION_F_2] = {
        .species = SPECIES_BASCULEGION_F, //雌性幽尾玄鱼
        .moves = {MOVE_MUDDY_WATER, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_FINAL_GAMBIT}, //浊流，暗影球，冰冻之风，搏命
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BASCULEGION_M_1] = {
        .species = SPECIES_BASCULEGION_M, //雄性幽尾玄鱼
        .moves = {MOVE_WAVE_CRASH, MOVE_POLTERGEIST, MOVE_LAST_RESPECTS, MOVE_HEAD_SMASH}, //波动冲，灵骚，扫墓，双刃头锤
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULEGION_M_2] = {
        .species = SPECIES_BASCULEGION_M, //雄性幽尾玄鱼
        .moves = {MOVE_WATERFALL, MOVE_REVERSAL, MOVE_LAST_RESPECTS, MOVE_SCALE_SHOT}, //攀瀑，绝处逢生，扫墓，鳞射
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULEGION_M_3] = {
        .species = SPECIES_BASCULEGION_M, //雄性幽尾玄鱼
        .moves = {MOVE_WAVE_CRASH, MOVE_POLTERGEIST, MOVE_HEAD_SMASH, MOVE_LAST_RESPECTS}, //波动冲，灵骚，双刃头锤，扫墓
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULIN_BLUE_STRIPED_1] = {
        .species = SPECIES_BASCULIN_BLUE_STRIPED, //蓝条纹的样子
        .moves = {MOVE_WAVE_CRASH, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_FLIP_TURN}, //波动冲，双刃头锤，舍身冲撞，快速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BASCULIN_BLUE_STRIPED_2] = {
        .species = SPECIES_BASCULIN_BLUE_STRIPED, //蓝条纹的样子
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_FINAL_GAMBIT, MOVE_PROTECT}, //浊流，冰冻之风，搏命，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BASCULIN_RED_STRIPED_1] = {
        .species = SPECIES_BASCULIN_RED_STRIPED, //野蛮鲈鱼-红条纹的样子
        .moves = {MOVE_LIQUIDATION, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_ENDURE}, //水流裂破，精神之牙，冰冻牙，挺住
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULIN_RED_STRIPED_2] = {
        .species = SPECIES_BASCULIN_RED_STRIPED, //野蛮鲈鱼-红条纹的样子
        .moves = {MOVE_WAVE_CRASH, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_FLIP_TURN}, //波动冲，双刃头锤，舍身冲撞，快速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASCULIN_RED_STRIPED_3] = {
        .species = SPECIES_BASCULIN_RED_STRIPED, //野蛮鲈鱼-红条纹的样子
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_BOUNCE}, //水流裂破，咬碎，精神之牙，弹跳
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASTIODON_1] = {
        .species = SPECIES_BASTIODON, //护城龙
        .moves = {MOVE_METAL_BURST, MOVE_TOXIC, MOVE_ROAR, MOVE_STEALTH_ROCK}, //金属爆炸，剧毒，吼叫，隐形岩
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BASTIODON_2] = {
        .species = SPECIES_BASTIODON, //护城龙
        .moves = {MOVE_METAL_BURST, MOVE_TOXIC, MOVE_REST, MOVE_PROTECT}, //金属爆炸，剧毒，睡觉，守住
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BASTIODON_3] = {
        .species = SPECIES_BASTIODON, //护城龙
        .moves = {MOVE_STONE_EDGE, MOVE_BEHEMOTH_BASH, MOVE_EARTHQUAKE, MOVE_CURSE}, //尖石攻击，巨兽弹，地震，诅咒
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BASTIODON_4] = {
        .species = SPECIES_BASTIODON, //护城龙
        .moves = {MOVE_BEHEMOTH_BASH, MOVE_TAUNT, MOVE_MAGIC_COAT, MOVE_WIDE_GUARD}, //巨兽弹，挑衅，魔法反射，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BAXCALIBUR_1] = {
        .species = SPECIES_BAXCALIBUR, //戟脊龙
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_SPEAR, MOVE_DRAGON_DANCE, MOVE_CRUNCH}, //巨剑突击，冰锥，龙之舞，咬碎
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BAXCALIBUR_2] = {
        .species = SPECIES_BAXCALIBUR, //戟脊龙
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD, MOVE_PROTECT}, //巨剑突击，冰锥，冰砾，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_1] = {
        .species = SPECIES_BEARTIC, //冻原熊
        .moves = {MOVE_ICICLE_CRASH, MOVE_PLAY_ROUGH, MOVE_LIQUIDATION, MOVE_SUPERPOWER}, //冰柱坠击，嬉闹，水流裂破，蛮力
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_2] = {
        .species = SPECIES_BEARTIC, //冻原熊
        .moves = {MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE}, //冰柱坠击，蛮力，深渊突刺，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_3] = {
        .species = SPECIES_BEARTIC, //冻原熊
        .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_DOUBLE_TEAM, MOVE_HAIL}, //真气拳，哈欠，影子分身，冰雹
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_4] = {
        .species = SPECIES_BEARTIC, //冻原熊
        .moves = {MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //冰柱坠击，蛮力，岩崩，守住
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEARTIC_5] = {
        .species = SPECIES_BEARTIC, //冻原熊
        .moves = {MOVE_ICE_HAMMER, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}, //冰锤，蛮力，岩崩，剑舞
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BEAUTIFLY_1] = {
        .species = SPECIES_BEAUTIFLY, //狩猎凤蝶
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_ROOST}, //虫鸣，暴风，蝶舞，羽栖
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEAUTIFLY_2] = {
        .species = SPECIES_BEAUTIFLY, //狩猎凤蝶
        .moves = {MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE}, //空气之刃，终极吸取，觉醒力量，蝶舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEAUTIFLY_3] = {
        .species = SPECIES_BEAUTIFLY, //狩猎凤蝶
        .moves = {MOVE_INFESTATION, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_ROOST}, //纠缠不休，毒液冲击，剧毒，羽栖
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEAUTIFLY_4] = {
        .species = SPECIES_BEAUTIFLY, //狩猎凤蝶
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_TAILWIND, MOVE_SAFEGUARD}, //虫之抵抗，电网，顺风，神秘守护
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEEDRILL_1] = {
        .species = SPECIES_BEEDRILL, //大针蜂
        .moves = {MOVE_FELL_STINGER, MOVE_DRILL_RUN, MOVE_NEEDLE_ARM, MOVE_THIEF}, //致命针刺，直冲钻，尖刺臂，小偷
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEEDRILL_2] = {
        .species = SPECIES_BEEDRILL, //大针蜂
        .moves = {MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_KNOCK_OFF, MOVE_U_TURN}, //毒击，直冲钻，拍落，急速折返
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEEDRILL_3] = {
        .species = SPECIES_BEEDRILL, //大针蜂
        .moves = {MOVE_FELL_STINGER, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE}, //致命针刺，毒击，直冲钻，剑舞
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEEDRILL_4] = {
        .species = SPECIES_BEEDRILL, //大针蜂
        .moves = {MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_PROTECT}, //十字剪，毒击，劈瓦，守住
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BEHEEYEM_1] = {
        .species = SPECIES_BEHEEYEM, //大宇怪
        .moves = {MOVE_STORED_POWER, MOVE_SIGNAL_BEAM, MOVE_NASTY_PLOT, MOVE_RECOVER}, //辅助力量，信号光束，诡计，自我再生
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BEHEEYEM_2] = {
        .species = SPECIES_BEHEEYEM, //大宇怪
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_TRICK_ROOM}, //精神强念，十万伏特，能量球，戏法空间
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BEHEEYEM_3] = {
        .species = SPECIES_BEHEEYEM, //大宇怪
        .moves = {MOVE_PSYCHIC, MOVE_SIMPLE_BEAM, MOVE_TRICK, MOVE_RECOVER}, //精神强念，单纯光束，戏法，自我再生
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BEHEEYEM_4] = {
        .species = SPECIES_BEHEEYEM, //大宇怪
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_PROTECT}, //广域战力，同命，戏法空间，守住
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM, //美丽花
        .moves = {MOVE_GIGA_DRAIN, MOVE_FIERY_DANCE, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE}, //终极吸取，火之舞，觉醒力量，蝶舞
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM, //美丽花
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_STRENGTH_SAP, MOVE_GRASSY_TERRAIN}, //终极吸取，催眠粉，吸取力量，青草场地
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BELLOSSOM_3] = {
        .species = SPECIES_BELLOSSOM, //美丽花
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIERY_DANCE, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY}, //日光束，火之舞，催眠粉，大晴天
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BELLOSSOM_4] = {
        .species = SPECIES_BELLOSSOM, //美丽花
        .moves = {MOVE_APPLE_ACID, MOVE_STRENGTH_SAP, MOVE_FLORAL_HEALING, MOVE_PROTECT}, //苹果酸，吸取力量，花疗，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BEWEAR_1] = {
        .species = SPECIES_BEWEAR, //穿着熊
        .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH}, //报恩，近身战，地震，冰冻拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEWEAR_2] = {
        .species = SPECIES_BEWEAR, //穿着熊
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE}, //近身战，冰冻拳，雷电拳，剑舞
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 8, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEWEAR_3] = {
        .species = SPECIES_BEWEAR, //穿着熊
        .moves = {MOVE_BIND, MOVE_TOXIC, MOVE_PAIN_SPLIT, MOVE_PROTECT}, //绑紧，剧毒，分担痛楚，守住
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BEWEAR_4] = {
        .species = SPECIES_BEWEAR, //穿着熊
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_WIDE_GUARD}, //十万马力，岩崩，近身战，广域防守
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BIBAREL_1] = {
        .species = SPECIES_BIBAREL, //大尾狸
        .moves = {MOVE_TAIL_SLAP, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_SWORDS_DANCE}, //扫尾拍打，攀瀑，水流喷射，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BIBAREL_2] = {
        .species = SPECIES_BIBAREL, //大尾狸
        .moves = {MOVE_RETURN, MOVE_AQUA_JET, MOVE_SWORDS_DANCE, MOVE_YAWN}, //报恩，水流喷射，剑舞，哈欠
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BIBAREL_3] = {
        .species = SPECIES_BIBAREL, //大尾狸
        .moves = {MOVE_WATERFALL, MOVE_QUICK_ATTACK, MOVE_NO_RETREAT, MOVE_REST}, //攀瀑，电光一闪，背水一战，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BIBAREL_4] = {
        .species = SPECIES_BIBAREL, //大尾狸
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_STEALTH_ROCK, MOVE_YAWN}, //热水，冰冻之风，隐形岩，哈欠
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BISHARP_1] = {
        .species = SPECIES_BISHARP, //劈斩司令
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, //拍落，铁头，突袭，剑舞
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BISHARP_2] = {
        .species = SPECIES_BISHARP, //劈斩司令
        .moves = {MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_LOW_SWEEP, MOVE_TAUNT}, //突袭，铁头，下盘踢，挑衅
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BISHARP_3] = {
        .species = SPECIES_BISHARP, //劈斩司令
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_METAL_BURST, MOVE_TAUNT}, //拍落，铁头，金属爆炸，挑衅
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BISHARP_4] = {
        .species = SPECIES_BISHARP, //劈斩司令
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PROTECT}, //拍落，铁头，突袭，守住
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLACEPHALON_1] = {
        .species = SPECIES_BLACEPHALON, //砰头小丑
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_EXPANDING_FORCE}, //喷射火焰，暗影球，冥想，广域战力
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(232, 0, 4, 252, 20, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLACEPHALON_2] = {
        .species = SPECIES_BLACEPHALON, //砰头小丑
        .moves = {MOVE_MIND_BLOWN, MOVE_SHADOW_BALL, MOVE_EXPANDING_FORCE , MOVE_HIDDEN_POWER}, //惊爆大头，暗影球，广域战力，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLACEPHALON_3] = {
        .species = SPECIES_BLACEPHALON, //砰头小丑
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TRICK}, //暗影球，磷火，分担痛楚，戏法
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BLACEPHALON_4] = {
        .species = SPECIES_BLACEPHALON, //砰头小丑
        .moves = {MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_KNOCK_OFF, MOVE_EXPANDING_FORCE }, //过热，热风，拍落，广域战力
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE, //水箭龟
        .moves = {MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_SHELL_SMASH}, //水之波动，波导弹，恶之波动，破壳
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE, //水箭龟
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAPID_SPIN, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}, //水炮，高速旋转，波导弹，恶之波动
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE_GMAX, //水箭龟
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_SHELL_SMASH}, //水流裂破，冰冻拳，意念头锤，破壳
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(176, 252, 0, 80, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_BLASTOISE_GMAX, //水箭龟
        .moves = {MOVE_BODY_PRESS, MOVE_AQUA_RING, MOVE_SUBSTITUTE, MOVE_RAIN_DANCE}, //扑击，水流环，替身，求雨
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLASTOISE_5] = {
        .species = SPECIES_BLASTOISE_GMAX, //水箭龟
        .moves = {MOVE_FLIP_TURN, MOVE_FAKE_OUT, MOVE_FOLLOW_ME, MOVE_HELPING_HAND}, //快速折返，击掌奇袭，看我嘛，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN, //火焰鸡
        .moves = {MOVE_BLAZE_KICK, MOVE_REVERSAL, MOVE_U_TURN, MOVE_ENDURE}, //火焰踢，绝处逢生，急速折返，挺住
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN, //火焰鸡
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_BULK_UP, MOVE_BATON_PASS, MOVE_PROTECT}, //飞膝踢，健美，接棒，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 252, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN, //火焰鸡
        .moves = {MOVE_FLARE_BLITZ, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //闪焰冲锋，踢倒，拍落，剑舞
        .heldItem = ITEM_BLAZIKENITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN, //火焰鸡
        .moves = {MOVE_HEAT_WAVE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_VACUUM_WAVE}, //热风，岩崩，地震，真空波
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY, //幸福蛋
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_HEAL_BELL, MOVE_SOFT_BOILED}, //地球上投，剧毒，治愈铃声，生蛋
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY, //幸福蛋
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_MINIMIZE, MOVE_SOFT_BOILED}, //十万伏特，冰冻光束，变小，生蛋
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY, //幸福蛋
        .moves = {MOVE_MUD_BOMB, MOVE_TOXIC, MOVE_MINIMIZE, MOVE_SOFT_BOILED}, //泥巴炸弹，剧毒，变小，生蛋
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY, //幸福蛋
        .moves = {MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_BESTOW, MOVE_SOFT_BOILED}, //岩崩，剧毒，传递礼物，生蛋
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 4, 252, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BOLTUND_1] = {
        .species = SPECIES_BOLTUND, //逐电犬
        .moves = {MOVE_BOLT_STRIKE, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_HONE_CLAWS}, //雷击，嬉闹，精神之牙，磨爪
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BOLTUND_2] = {
        .species = SPECIES_BOLTUND, //逐电犬
        .moves = {MOVE_BOLT_STRIKE, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_CRUNCH}, //雷击，精神之牙，火焰牙，咬碎
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BOLTUND_3] = {
        .species = SPECIES_BOLTUND, //逐电犬
        .moves = {MOVE_BOLT_STRIKE, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_VOLT_SWITCH}, //雷击，精神之牙，火焰牙，伏特替换
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BOLTUND_4] = {
        .species = SPECIES_BOLTUND, //逐电犬
        .moves = {MOVE_DISCHARGE, MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_PROTECT}, //放电，巨声，大声咆哮，守住
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BOUFFALANT_1] = {
        .species = SPECIES_BOUFFALANT, //爆炸头水牛
        .moves = {MOVE_HEAD_CHARGE, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_WILD_CHARGE}, //爆炸头突击，地震，超级角击，疯狂伏特
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BOUFFALANT_2] = {
        .species = SPECIES_BOUFFALANT, //爆炸头水牛
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE}, //报恩，地震，剑舞，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BOUFFALANT_3] = {
        .species = SPECIES_BOUFFALANT, //爆炸头水牛
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK}, //地震，剧毒，睡觉，梦话
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BOUFFALANT_4] = {
        .species = SPECIES_BOUFFALANT, //爆炸头水牛
        .moves = {MOVE_HEAD_CHARGE, MOVE_WILD_CHARGE, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //爆炸头突击，疯狂伏特，岩崩，守住
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BRAMBLEGHAST_1] = {
        .species = SPECIES_BRAMBLEGHAST, //怖纳噬草
        .moves = {MOVE_PHANTOM_FORCE, MOVE_BULLET_SEED, MOVE_SHADOW_SNEAK, MOVE_TRAILBLAZE}, //潜灵奇袭，种子机关枪，影子偷袭，起草
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAMBLEGHAST_2] = {
        .species = SPECIES_BRAMBLEGHAST, //怖纳噬草
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SHADOW_SNEAK, MOVE_THIEF}, //灵骚，强力鞭打，影子偷袭，小偷
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAMBLEGHAST_3] = {
        .species = SPECIES_BRAMBLEGHAST, //怖纳噬草
        .moves = {MOVE_PROTECT, MOVE_STRENGTH_SAP, MOVE_LEECH_SEED, MOVE_PAIN_SPLIT}, //守住，吸取力量，寄生种子，分担痛楚
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAVIARY_1] = {
        .species = SPECIES_BRAVIARY, //勇士雄鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN}, //勇鸟猛攻，舍身冲撞，近身战，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAVIARY_2] = {
        .species = SPECIES_BRAVIARY, //勇士雄鹰
        .moves = {MOVE_SKY_ATTACK, MOVE_CLOSE_COMBAT, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH}, //神鸟猛击，近身战，暗影爪，嬉闹
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAVIARY_3] = {
        .species = SPECIES_BRAVIARY, //勇士雄鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_BULK_UP, MOVE_ROOST}, //勇鸟猛攻，近身战，健美，羽栖
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BRAVIARY_4] = {
        .species = SPECIES_BRAVIARY, //勇士雄鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROCK_SLIDE, MOVE_TAILWIND, MOVE_PROTECT}, //勇鸟猛攻，岩崩，顺风，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRAVIARY_HISUI_1] = {
        .species = SPECIES_BRAVIARY_HISUI, //洗翠勇士雄鹰
        .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_U_TURN}, //空气之刃，精神强念，热风，急速折返
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BRAVIARY_HISUI_2] = {
        .species = SPECIES_BRAVIARY_HISUI, //洗翠勇士雄鹰
        .moves = {MOVE_HURRICANE, MOVE_ESPER_WING, MOVE_HEAT_WAVE, MOVE_HIDDEN_POWER}, //暴风，气场之翼，热风，觉醒力量
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BRAVIARY_HISUI_3] = {
        .species = SPECIES_BRAVIARY_HISUI, //洗翠勇士雄鹰
        .moves = {MOVE_HURRICANE, MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_AGILITY}, //暴风，精神强念，热风，高速移动
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BRAVIARY_HISUI_4] = {
        .species = SPECIES_BRAVIARY_HISUI, //洗翠勇士雄鹰
        .moves = {MOVE_HURRICANE, MOVE_ESPER_WING, MOVE_HEAT_WAVE, MOVE_TAILWIND}, //暴风，气场之翼，热风，顺风
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM, //斗笠菇
        .moves = {MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_SWORDS_DANCE}, //种子机关枪，音速拳，蘑菇孢子，剑舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM, //斗笠菇
        .moves = {MOVE_SEED_BOMB, MOVE_FOCUS_PUNCH, MOVE_SPORE, MOVE_SUBSTITUTE}, //种子炸弹，真气拳，蘑菇孢子，替身
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM, //斗笠菇
        .moves = {MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SPORE, MOVE_SWORDS_DANCE}, //种子机关枪，岩石封锁，蘑菇孢子，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_BRELOOM, //斗笠菇
        .moves = {MOVE_BULLET_SEED, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_SPORE}, //种子机关枪，近身战，岩崩，蘑菇孢子
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRONZONG_1] = {
        .species = SPECIES_BRONZONG, //青铜钟
        .moves = {MOVE_GYRO_BALL, MOVE_TOXIC, MOVE_TRICK_ROOM, MOVE_PROTECT}, //陀螺球，剧毒，戏法空间，守住
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BRONZONG_2] = {
        .species = SPECIES_BRONZONG, //青铜钟
        .moves = {MOVE_TRICK_ROOM, MOVE_BODY_PRESS, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //戏法空间，扑击，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BRONZONG_3] = {
        .species = SPECIES_BRONZONG, //青铜钟
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_REST}, //戏法空间，精神冲击，冥想，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BRONZONG_4] = {
        .species = SPECIES_BRONZONG, //青铜钟
        .moves = {MOVE_GYRO_BALL, MOVE_HYPNOSIS, MOVE_TRICK_ROOM, MOVE_PROTECT}, //陀螺球，催眠术，戏法空间，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BRUTE_BONNET_1] = {
        .species = SPECIES_BRUTE_BONNET, //猛恶菇
        .moves = {MOVE_SEED_BOMB, MOVE_RAGE_POWDER, MOVE_SPORE, MOVE_CRUNCH}, //种子炸弹，愤怒粉，蘑菇孢子，咬碎
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(216, 152, 32, 0, 0, 108),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BRUTE_BONNET_2] = {
        .species = SPECIES_BRUTE_BONNET, //猛恶菇
        .moves = {MOVE_SEED_BOMB, MOVE_RAGE_POWDER, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT}, //种子炸弹，愤怒粉，突袭，近身战
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 80, 76, 0, 0, 100),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BRUXISH_1] = {
        .species = SPECIES_BRUXISH, //磨牙彩皮鱼
        .moves = {MOVE_AQUA_JET, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_SWORDS_DANCE}, //水流喷射，精神之牙，咬碎，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRUXISH_2] = {
        .species = SPECIES_BRUXISH, //磨牙彩皮鱼
        .moves = {MOVE_AQUA_JET, MOVE_SCALE_SHOT, MOVE_SCREECH, MOVE_TAUNT}, //水流喷射，鳞射，刺耳声，挑衅
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BRUXISH_3] = {
        .species = SPECIES_BRUXISH, //磨牙彩皮鱼
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG}, //精神之牙，咬碎，冰冻牙，剧毒牙
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BRUXISH_4] = {
        .species = SPECIES_BRUXISH, //磨牙彩皮鱼
        .moves = {MOVE_WATERFALL, MOVE_PSYCHIC_FANGS, MOVE_AFTER_YOU, MOVE_TAUNT}, //攀瀑，精神之牙，您先请，挑衅
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE, //巴大蝶
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE}, //虫鸣，暴风，催眠粉，蝶舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE, //巴大蝶
        .moves = {MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_SUBSTITUTE, MOVE_SLEEP_POWDER}, //空气之刃，蝶舞，替身，催眠粉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BUTTERFREE_3] = {
        .species = SPECIES_BUTTERFREE, //巴大蝶
        .moves = {MOVE_INFESTATION, MOVE_SLEEP_POWDER, MOVE_NIGHTMARE, MOVE_SUBSTITUTE}, //纠缠不休，催眠粉，恶梦，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BUTTERFREE_4] = {
        .species = SPECIES_BUTTERFREE, //巴大蝶
        .moves = {MOVE_POLLEN_PUFF, MOVE_ROOST, MOVE_TAILWIND, MOVE_SAFEGUARD}, //花粉团，羽栖，顺风，神秘守护
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BUZZWOLE_1] = {
        .species = SPECIES_BUZZWOLE, //爆肌蚊
        .moves = {MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_POISON_JAB}, //ＤＤ金勾臂，近身战，地震，毒击
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BUZZWOLE_2] = {
        .species = SPECIES_BUZZWOLE, //爆肌蚊
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GYRO_BALL, MOVE_FLING, MOVE_BULK_UP}, //吸取拳，陀螺球，投掷，健美
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(248, 0, 184, 0, 0, 76),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BUZZWOLE_3] = {
        .species = SPECIES_BUZZWOLE, //爆肌蚊
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_ROOST}, //近身战，地震，剧毒，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 184, 0, 0, 76),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BUZZWOLE_4] = {
        .species = SPECIES_BUZZWOLE, //爆肌蚊
        .moves = {MOVE_BULK_UP, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_TAUNT}, //健美，十万马力，岩崩，挑衅
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE, //梦歌仙人掌
        .moves = {MOVE_GIGA_DRAIN, MOVE_NASTY_PLOT, MOVE_DOUBLE_TEAM, MOVE_SANDSTORM}, //终极吸取，诡计，影子分身，沙暴
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE, //梦歌仙人掌
        .moves = {MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_DRAIN_PUNCH}, //种子炸弹，突袭，跺脚，吸取拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CACTURNE_3] = {
        .species = SPECIES_CACTURNE, //梦歌仙人掌
        .moves = {MOVE_SYNTHESIS, MOVE_SWITCHEROO, MOVE_ENCORE, MOVE_SPIKES}, //光合作用，掉包，再来一次，撒菱
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CACTURNE_4] = {
        .species = SPECIES_CACTURNE, //梦歌仙人掌
        .moves = {MOVE_LEECH_SEED, MOVE_ENCORE, MOVE_DESTINY_BOND, MOVE_SPIKY_SHIELD}, //寄生种子，再来一次，同命，尖刺防守
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CALYREX_1] = {
        .species = SPECIES_CALYREX, //蕾冠王
        .moves = {MOVE_LEAF_STORM, MOVE_EXPANDING_FORCE, MOVE_POLLEN_PUFF, MOVE_TRICK}, //飞叶风暴，广域战力，花粉团，戏法
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_2] = {
        .species = SPECIES_CALYREX, //蕾冠王
        .moves = {MOVE_EXPANDING_FORCE, MOVE_GIGA_DRAIN, MOVE_CALM_MIND, MOVE_REFLECT}, //广域战力，终极吸取，冥想，反射壁
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_3] = {
        .species = SPECIES_CALYREX, //蕾冠王
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HEAL_PULSE, MOVE_HELPING_HAND}, //光墙，反射壁，治愈波动，帮助
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT, //喷火驼
        .moves = {MOVE_ERUPTION, MOVE_SOLAR_BEAM, MOVE_FLASH_CANNON, MOVE_SUNNY_DAY}, //喷火，日光束，加农光炮，大晴天
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT, //喷火驼
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN}, //喷射火焰，地震，岩崩，哈欠
        .heldItem = ITEM_PASSHO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CAMERUPT_3] = {
        .species = SPECIES_CAMERUPT, //喷火驼
        .moves = {MOVE_ERUPTION, MOVE_EARTH_POWER, MOVE_NATURE_POWER, MOVE_YAWN}, //喷火，大地之力，自然之力，哈欠
        .heldItem = ITEM_CAMERUPTITE,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CAMERUPT_4] = {
        .species = SPECIES_CAMERUPT, //喷火驼
        .moves = {MOVE_ERUPTION, MOVE_SCORCHING_SANDS, MOVE_HEAT_WAVE, MOVE_PROTECT}, //喷火，热沙大地，热风，守住
        .heldItem = ITEM_CAMERUPTITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CARBINK_1] = {
        .species = SPECIES_CARBINK, //小碎钻
        .moves = {MOVE_GYRO_BALL, MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM}, //陀螺球，大爆炸，隐形岩，戏法空间
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CARBINK_2] = {
        .species = SPECIES_CARBINK, //小碎钻
        .moves = {MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SANDSTORM, MOVE_PROTECT}, //剧毒，隐形岩，沙暴，守住
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CARBINK_3] = {
        .species = SPECIES_CARBINK, //小碎钻
        .moves = {MOVE_MISTY_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_STEALTH_ROCK}, //薄雾炸裂，反射壁，光墙，隐形岩
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CARBINK_4] = {
        .species = SPECIES_CARBINK, //小碎钻
        .moves = {MOVE_BODY_PRESS, MOVE_REFLECT, MOVE_TRICK_ROOM, MOVE_PROTECT}, //扑击，反射壁，戏法空间，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CARNIVINE_1] = {
        .species = SPECIES_CARNIVINE, //尖牙笼
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_NATURAL_GIFT, MOVE_SLEEP_POWDER}, //强力鞭打，拍落，自然之恩，催眠粉
        .heldItem = ITEM_WATMEL_BERRY,
        .ev = TRAINER_PARTY_EVS(188, 252, 0, 68, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CARNIVINE_2] = {
        .species = SPECIES_CARNIVINE, //尖牙笼
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER, MOVE_SWORDS_DANCE}, //强力鞭打，拍落，催眠粉，剑舞
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(188, 252, 0, 68, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CARNIVINE_3] = {
        .species = SPECIES_CARNIVINE, //尖牙笼
        .moves = {MOVE_GIGA_DRAIN, MOVE_ACID_SPRAY, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER}, //终极吸取，酸液炸弹，大地之力，催眠粉
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CARNIVINE_4] = {
        .species = SPECIES_CARNIVINE, //尖牙笼
        .moves = {MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER, MOVE_DEFOG, MOVE_RAGE_POWDER}, //拍落，催眠粉，清除浓雾，愤怒粉
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CARRACOSTA_1] = {
        .species = SPECIES_CARRACOSTA, //肋骨海龟
        .moves = {MOVE_AQUA_JET, MOVE_STONE_EDGE, MOVE_SUPERPOWER, MOVE_SHELL_SMASH}, //水流喷射，尖石攻击，蛮力，破壳
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CARRACOSTA_2] = {
        .species = SPECIES_CARRACOSTA, //肋骨海龟
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_RAIN_DANCE}, //水流裂破，岩崩，虚张声势，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CARRACOSTA_3] = {
        .species = SPECIES_CARRACOSTA, //肋骨海龟
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //拍落，剧毒，隐形岩，守住
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 192, 0, 0, 64),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CARRACOSTA_4] = {
        .species = SPECIES_CARRACOSTA, //肋骨海龟
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT}, //水流裂破，岩崩，地震，守住
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CASTFORM_NORMAL_1] = {
        .species = SPECIES_CASTFORM_NORMAL, //飘浮泡泡
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE}, //水炮，打雷，暴风，求雨
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CASTFORM_NORMAL_2] = {
        .species = SPECIES_CASTFORM_NORMAL, //飘浮泡泡
        .moves = {MOVE_BODY_SLAM, MOVE_AVALANCHE, MOVE_TAILWIND, MOVE_HAIL}, //泰山压顶，雪崩，顺风，冰雹
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CASTFORM_NORMAL_3] = {
        .species = SPECIES_CASTFORM_NORMAL, //飘浮泡泡
        .moves = {MOVE_CLEAR_SMOG, MOVE_DEFOG, MOVE_TAILWIND, MOVE_SUNNY_DAY}, //清除之烟，清除浓雾，顺风，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CASTFORM_NORMAL_4] = {
        .species = SPECIES_CASTFORM_NORMAL, //飘浮泡泡
        .moves = {MOVE_WEATHER_BALL, MOVE_REST, MOVE_SNORE, MOVE_TAILWIND}, //气象球，睡觉，打鼾，顺风
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CELESTEELA_1] = {
        .species = SPECIES_CELESTEELA, //铁火辉夜
        .moves = {MOVE_FLASH_CANNON, MOVE_AIR_SLASH, MOVE_FIRE_BLAST, MOVE_GIGA_DRAIN}, //加农光炮，空气之刃，大字爆炎，终极吸取
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CELESTEELA_2] = {
        .species = SPECIES_CELESTEELA, //铁火辉夜
        .moves = {MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT}, //重磅冲撞，寄生种子，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CELESTEELA_3] = {
        .species = SPECIES_CELESTEELA, //铁火辉夜
        .moves = {MOVE_GYRO_BALL, MOVE_SMACK_DOWN, MOVE_LEECH_SEED, MOVE_PROTECT}, //陀螺球，击落，寄生种子，守住
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(248, 0, 104, 0, 0, 156),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CELESTEELA_4] = {
        .species = SPECIES_CELESTEELA, //铁火辉夜
        .moves = {MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_FLAMETHROWER, MOVE_WIDE_GUARD}, //重磅冲撞，寄生种子，喷射火焰，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 120, 12, 0, 0, 128),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CENTISKORCH_1] = {
        .species = SPECIES_CENTISKORCH, //焚焰蚣
        .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_POWER_WHIP, MOVE_COIL}, //火焰鞭，虫咬，强力鞭打，盘蜷
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CENTISKORCH_2] = {
        .species = SPECIES_CENTISKORCH, //焚焰蚣
        .moves = {MOVE_RAGING_FURY, MOVE_FIRE_LASH, MOVE_THUNDER_FANG, MOVE_KNOCK_OFF}, //大愤慨，火焰鞭，雷电牙，拍落
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CENTISKORCH_3] = {
        .species = SPECIES_CENTISKORCH, //焚焰蚣
        .moves = {MOVE_FIRE_BLAST, MOVE_BUG_BUZZ, MOVE_SCALD, MOVE_SCORCHING_SANDS}, //大字爆炎，虫鸣，热水，热沙大地
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CENTISKORCH_4] = {
        .species = SPECIES_CENTISKORCH, //焚焰蚣
        .moves = {MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, MOVE_STRUGGLE_BUG, MOVE_PROTECT}, //热风，虫鸣，虫之抵抗，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CERULEDGE_1] = {
        .species = SPECIES_CERULEDGE, //苍炎刃鬼
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SHADOW_SNEAK, MOVE_SHADOW_CLAW, MOVE_BITTER_BLADE}, //近身战，影子偷袭，暗影爪，悔念剑
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 196, 0, 60),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CERULEDGE_2] = {
        .species = SPECIES_CERULEDGE, //苍炎刃鬼
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_POLTERGEIST}, //近身战，影子偷袭，剑舞，灵骚
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CETITAN_1] = {
        .species = SPECIES_CETITAN, //浩大鲸
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_ICE_SPINNER, MOVE_PROTECT}, //重磅冲撞，地震，冰旋，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CETITAN_2] = {
        .species = SPECIES_CETITAN, //浩大鲸
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM, MOVE_ICICLE_CRASH}, //重磅冲撞，地震，腹鼓，冰柱坠击
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHANDELURE_1] = {
        .species = SPECIES_CHANDELURE, //水晶灯火灵
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_TRICK}, //大字爆炎，暗影球，能量球，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHANDELURE_2] = {
        .species = SPECIES_CHANDELURE, //水晶灯火灵
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_SUBSTITUTE}, //大字爆炎，暗影球，冥想，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CHANDELURE_3] = {
        .species = SPECIES_CHANDELURE, //水晶灯火灵
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT}, //过热，暗影球，磷火，守住
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHANDELURE_4] = {
        .species = SPECIES_CHANDELURE, //水晶灯火灵
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT}, //过热，暗影球，磷火，守住
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY, //吉利蛋
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_WISH, MOVE_AROMATHERAPY}, //地球上投，剧毒，祈愿，芳香治疗
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(240, 0, 252, 4, 0, 12),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY, //吉利蛋
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_SOFT_BOILED}, //冰冻光束，电磁波，冥想，生蛋
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHANSEY_3] = {
        .species = SPECIES_CHANSEY, //吉利蛋
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_GRAVITY, MOVE_STEALTH_ROCK, MOVE_SOFT_BOILED}, //魔法闪耀，重力，隐形岩，生蛋
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHANSEY_4] = {
        .species = SPECIES_CHANSEY, //吉利蛋
        .moves = {MOVE_SEISMIC_TOSS, MOVE_ICY_WIND, MOVE_STEALTH_ROCK, MOVE_SOFT_BOILED}, //地球上投，冰冻之风，隐形岩，生蛋
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD, //喷火龙
        .moves = {MOVE_BLAZE_KICK, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM}, //火焰踢，双翼，地震，腹鼓
        .heldItem = ITEM_CHARIZARDITE_X,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD, //喷火龙
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //闪焰冲锋，龙爪，地震，龙之舞
        .heldItem = ITEM_CHARIZARDITE_X,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD, //喷火龙
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_ROOST, MOVE_WILL_O_WISP}, //闪焰冲锋，龙爪，羽栖，磷火
        .heldItem = ITEM_CHARIZARDITE_X,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD, //喷火龙
        .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH, MOVE_SCORCHING_SANDS}, //气象球，日光束，空气之刃，热沙大地
        .heldItem = ITEM_CHARIZARDITE_Y,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHARIZARD_5] = {
        .species = SPECIES_CHARIZARD, //喷火龙
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_TAILWIND, MOVE_PROTECT}, //热风，日光束，顺风，守住
        .heldItem = ITEM_CHARIZARDITE_Y,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHATOT_1] = {
        .species = SPECIES_CHATOT, //聒噪鸟
        .moves = {MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN}, //爆音波，暴风，热风，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHATOT_2] = {
        .species = SPECIES_CHATOT, //聒噪鸟
        .moves = {MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_U_TURN}, //爆音波，暴风，觉醒力量，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHATOT_3] = {
        .species = SPECIES_CHATOT, //聒噪鸟
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_OMINOUS_WIND, MOVE_NASTY_PLOT}, //爆音波，喋喋不休，奇异之风，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHATOT_4] = {
        .species = SPECIES_CHATOT, //聒噪鸟
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_HEAT_WAVE, MOVE_TAILWIND}, //爆音波，喋喋不休，热风，顺风
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHERRIM_OVERCAST_1] = {
        .species = SPECIES_CHERRIM_OVERCAST, //樱花儿-阴天形态
        .moves = {MOVE_SOLAR_BLADE, MOVE_PLAY_ROUGH, MOVE_SUNNY_DAY, MOVE_SWORDS_DANCE}, //日光刃，嬉闹，大晴天，剑舞
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHERRIM_OVERCAST_2] = {
        .species = SPECIES_CHERRIM_OVERCAST, //樱花儿-阴天形态
        .moves = {MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_NATURE_POWER, MOVE_HEALING_WISH}, //能量球，魔法闪耀，自然之力，治愈之愿
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHERRIM_OVERCAST_3] = {
        .species = SPECIES_CHERRIM_OVERCAST, //樱花儿-阴天形态
        .moves = {MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_GRASSY_TERRAIN}, //终极吸取，魔法闪耀，觉醒力量，青草场地
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHERRIM_OVERCAST_4] = {
        .species = SPECIES_CHERRIM_OVERCAST, //樱花儿-阴天形态
        .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_POLLEN_PUFF, MOVE_HELPING_HAND}, //日光束，气象球，花粉团，帮助
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHESNAUGHT_1] = {
        .species = SPECIES_CHESNAUGHT, //布里卡隆
        .moves = {MOVE_DRUM_BEATING, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW}, //鼓击，劈瓦，地震，龙爪
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHESNAUGHT_2] = {
        .species = SPECIES_CHESNAUGHT, //布里卡隆
        .moves = {MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS}, //能量球，真气弹，污泥炸弹，光合作用
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHESNAUGHT_3] = {
        .species = SPECIES_CHESNAUGHT, //布里卡隆
        .moves = {MOVE_DRAIN_PUNCH, MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_SPIKY_SHIELD}, //吸取拳，寄生种子，光合作用，尖刺防守
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CHESNAUGHT_4] = {
        .species = SPECIES_CHESNAUGHT, //布里卡隆
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD}, //岩崩，地震，寄生种子，尖刺防守
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO, //风铃铃
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_PSYCHIC_TERRAIN}, //广域战力，魔法闪耀，暗影球，精神场地
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO, //风铃铃
        .moves = {MOVE_PSYCHIC, MOVE_HEALING_WISH, MOVE_RECOVER, MOVE_THUNDER_WAVE}, //精神强念，治愈之愿，自我再生，电磁波
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHIMECHO_3] = {
        .species = SPECIES_CHIMECHO, //风铃铃
        .moves = {MOVE_PSYCHIC, MOVE_TAUNT, MOVE_DEFOG, MOVE_RECOVER}, //精神强念，挑衅，清除浓雾，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHIMECHO_4] = {
        .species = SPECIES_CHIMECHO, //风铃铃
        .moves = {MOVE_HEAL_PULSE, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //治愈波动，自我再生，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CINCCINO_1] = {
        .species = SPECIES_CINCCINO, //奇诺栗鼠
        .moves = {MOVE_TAIL_SLAP, MOVE_ROCK_BLAST, MOVE_BONE_RUSH, MOVE_U_TURN}, //扫尾拍打，岩石爆击，骨棒乱打，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINCCINO_2] = {
        .species = SPECIES_CINCCINO, //奇诺栗鼠
        .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_BONE_RUSH}, //扫尾拍打，种子机关枪，岩石爆击，骨棒乱打
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINCCINO_3] = {
        .species = SPECIES_CINCCINO, //奇诺栗鼠
        .moves = {MOVE_TAIL_SLAP, MOVE_BONE_RUSH, MOVE_TRIPLE_AXEL, MOVE_SING}, //扫尾拍打，骨棒乱打，三旋击，唱歌
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINCCINO_4] = {
        .species = SPECIES_CINCCINO, //奇诺栗鼠
        .moves = {MOVE_TAIL_SLAP, MOVE_TRIPLE_AXEL, MOVE_THUNDER_WAVE, MOVE_PROTECT}, //扫尾拍打，三旋击，电磁波，守住
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINDERACE_1] = {
        .species = SPECIES_CINDERACE, //闪焰王牌
        .moves = {MOVE_PYRO_BALL, MOVE_U_TURN, MOVE_GUNK_SHOT, MOVE_IRON_HEAD}, //火焰球，急速折返，垃圾射击，铁头
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CINDERACE_2] = {
        .species = SPECIES_CINDERACE, //闪焰王牌
        .moves = {MOVE_PYRO_BALL, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_COURT_CHANGE}, //火焰球，突袭，急速折返，换场
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINDERACE_3] = {
        .species = SPECIES_CINDERACE, //闪焰王牌
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUCKER_PUNCH, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE}, //闪焰冲锋，突袭，飞膝踢，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CINDERACE_4] = {
        .species = SPECIES_CINDERACE, //闪焰王牌
        .moves = {MOVE_FLARE_BLITZ, MOVE_GUNK_SHOT, MOVE_LOW_KICK, MOVE_QUICK_ATTACK}, //闪焰冲锋，垃圾射击，踢倒，电光一闪
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLAWITZER_1] = {
        .species = SPECIES_CLAWITZER, //钢炮臂虾
        .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE}, //水之波动，恶之波动，龙之波动，波导弹
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLAWITZER_2] = {
        .species = SPECIES_CLAWITZER, //钢炮臂虾
        .moves = {MOVE_SCALD, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_AQUA_JET}, //热水，波导弹，冰冻光束，水流喷射
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CLAWITZER_3] = {
        .species = SPECIES_CLAWITZER, //钢炮臂虾
        .moves = {MOVE_SCALD, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_FLIP_TURN}, //热水，毒液冲击，剧毒，快速折返
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLAWITZER_4] = {
        .species = SPECIES_CLAWITZER, //钢炮臂虾
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_AURA_SPHERE, MOVE_HEAL_PULSE}, //浊流，冰冻之风，波导弹，治愈波动
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL, //念力土偶
        .moves = {MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_POWER_TRICK, MOVE_TRICK_ROOM}, //地震，意念头锤，力量戏法，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL, //念力土偶
        .moves = {MOVE_ICE_BEAM, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHORE_UP}, //冰冻光束，反射壁，光墙，集沙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_CLAYDOL, //念力土偶
        .moves = {MOVE_STORED_POWER, MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}, //辅助力量，大地之力，暗影球，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_CLAYDOL, //念力土偶
        .moves = {MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_SANDSTORM, MOVE_SHORE_UP}, //高速旋转，剧毒，沙暴，集沙
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE, //皮可西
        .moves = {MOVE_MOONBLAST, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_SOFT_BOILED}, //月亮之力，拍落，隐形岩，生蛋
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE, //皮可西
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_HEAL_BELL, MOVE_PROTECT}, //月亮之力，祈愿，治愈铃声，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE, //皮可西
        .moves = {MOVE_MOONBLAST, MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_SOFT_BOILED}, //月亮之力，辅助力量，冥想，生蛋
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE, //皮可西
        .moves = {MOVE_MOONBLAST, MOVE_FOLLOW_ME, MOVE_THUNDER_WAVE, MOVE_PROTECT}, //月亮之力，看我嘛，电磁波，守住
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 164, 0, 0, 92),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLODSIRE_1] = {
        .species = SPECIES_CLODSIRE, //土王
        .moves = {MOVE_GUNK_SHOT, MOVE_COUNTER, MOVE_BODY_PRESS, MOVE_EARTHQUAKE}, //垃圾射击，双倍奉还，扑击，地震
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 116, 140, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CLODSIRE_2] = {
        .species = SPECIES_CLODSIRE, //土王
        .moves = {MOVE_GUNK_SHOT, MOVE_COUNTER, MOVE_STOMPING_TANTRUM, MOVE_PROTECT}, //垃圾射击，双倍奉还，跺脚，守住
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER, //刺甲贝
        .moves = {MOVE_LIQUIDATION, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_SHELL_SMASH}, //水流裂破，冰锥，岩石爆击，破壳
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER, //刺甲贝
        .moves = {MOVE_ICICLE_SPEAR, MOVE_RAPID_SPIN, MOVE_SHELL_SMASH, MOVE_SPIKES}, //冰锥，高速旋转，破壳，撒菱
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLOYSTER_3] = {
        .species = SPECIES_CLOYSTER, //刺甲贝
        .moves = {MOVE_LIQUIDATION, MOVE_RAPID_SPIN, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //水流裂破，高速旋转，撒菱，毒菱
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLOYSTER_4] = {
        .species = SPECIES_CLOYSTER, //刺甲贝
        .moves = {MOVE_ICY_WIND, MOVE_RAPID_SPIN, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //冰冻之风，高速旋转，撒菱，毒菱
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COALOSSAL_1] = {
        .species = SPECIES_COALOSSAL, //巨炭山
        .moves = {MOVE_FIRE_BLAST, MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_SPIKES}, //大字爆炎，地震，高速旋转，撒菱
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_COALOSSAL_2] = {
        .species = SPECIES_COALOSSAL, //巨炭山
        .moves = {MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_PROTECT}, //闪焰冲锋，尖石攻击，地震，守住
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(76, 252, 0, 180, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COALOSSAL_3] = {
        .species = SPECIES_COALOSSAL, //巨炭山
        .moves = {MOVE_BURN_UP, MOVE_METEOR_BEAM, MOVE_SCALD, MOVE_SCORCHING_SANDS}, //燃尽，流星光束，热水，热沙大地
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_COALOSSAL_4] = {
        .species = SPECIES_COALOSSAL, //巨炭山
        .moves = {MOVE_FIRE_BLAST, MOVE_HEAVY_SLAM, MOVE_RAPID_SPIN, MOVE_SPIKES}, //大字爆炎，重磅冲撞，高速旋转，撒菱
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_COALOSSAL_5] = {
        .species = SPECIES_COALOSSAL, //巨炭山
        .moves = {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_WILL_O_WISP, MOVE_PROTECT}, //热风，大地之力，磷火，守住
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_COBALION_1] = {
        .species = SPECIES_COBALION, //勾帕路翁
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE}, //铁头，近身战，尖石攻击，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COBALION_2] = {
        .species = SPECIES_COBALION, //勾帕路翁
        .moves = {MOVE_STEEL_BEAM, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH, MOVE_CALM_MIND}, //铁蹄光线，真气弹，伏特替换，冥想
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COBALION_3] = {
        .species = SPECIES_COBALION, //勾帕路翁
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_VOLT_SWITCH, MOVE_STEALTH_ROCK}, //铁头，近身战，伏特替换，隐形岩
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COBALION_4] = {
        .species = SPECIES_COBALION, //勾帕路翁
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //铁头，近身战，岩崩，守住
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COFAGRIGUS_1] = {
        .species = SPECIES_COFAGRIGUS, //迭失棺
        .moves = {MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM}, //暗影球，觉醒力量，诡计，戏法空间
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_COFAGRIGUS_2] = {
        .species = SPECIES_COFAGRIGUS, //迭失棺
        .moves = {MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM}, //暗影球，分担痛楚，磷火，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_COFAGRIGUS_3] = {
        .species = SPECIES_COFAGRIGUS, //迭失棺
        .moves = {MOVE_BODY_PRESS, MOVE_INFESTATION, MOVE_PAIN_SPLIT, MOVE_TRICK_ROOM}, //扑击，纠缠不休，分担痛楚，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_COFAGRIGUS_4] = {
        .species = SPECIES_COFAGRIGUS, //迭失棺
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM}, //暗影球，磷火，同命，戏法空间
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_RUNERIGUS_1] = {
        .species = SPECIES_RUNERIGUS, //迭失板
        .moves = {MOVE_EARTHQUAKE, MOVE_WILL_O_WISP, MOVE_TOXIC_SPIKES, MOVE_TRICK_ROOM}, //地震，磷火，毒菱，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 64, 28, 0, 0, 164),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_RUNERIGUS_2] = {
        .species = SPECIES_RUNERIGUS, //迭失板
        .moves = {MOVE_EARTHQUAKE, MOVE_WILL_O_WISP, MOVE_POLTERGEIST, MOVE_TRICK_ROOM}, //地震，磷火，灵骚，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 64, 28, 0, 0, 164),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_RUNERIGUS_3] = {
        .species = SPECIES_RUNERIGUS, //迭失板
        .moves = {MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_POLTERGEIST, MOVE_TRICK_ROOM}, //扑击，磷火，灵骚，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_RUNERIGUS_4] = {
        .species = SPECIES_RUNERIGUS, //迭失板
        .moves = {MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_POLTERGEIST, MOVE_TRICK_ROOM}, //扑击，磷火，灵骚，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSCLOPS, //彷徨夜灵
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TRICK_ROOM}, //黑夜魔影，磷火，分担痛楚，戏法空间
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSCLOPS, //彷徨夜灵
        .moves = {MOVE_POLTERGEIST, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TRICK_ROOM}, //灵骚，磷火，分担痛楚，戏法空间
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DUSCLOPS_3] = {
        .species = SPECIES_DUSCLOPS, //彷徨夜灵
        .moves = {MOVE_NIGHT_SHADE, MOVE_HAZE, MOVE_PAIN_SPLIT, MOVE_TRICK_ROOM}, //黑夜魔影，黑雾，分担痛楚，戏法空间
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 204, 0, 0, 52),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DUSCLOPS_4] = {
        .species = SPECIES_DUSCLOPS, //彷徨夜灵
        .moves = {MOVE_HAZE, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TRICK_ROOM}, //黑雾，磷火，分担痛楚，戏法空间
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 204, 0, 0, 52),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_COMFEY_1] = {
        .species = SPECIES_COMFEY, //花疗环环
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_SYNTHESIS, MOVE_ENDURE}, //魔法闪耀，能量球，光合作用，挺住
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_COMFEY_2] = {
        .species = SPECIES_COMFEY, //花疗环环
        .moves = {MOVE_WRAP, MOVE_LEECH_SEED, MOVE_SWEET_KISS, MOVE_GRASSY_TERRAIN}, //紧束，寄生种子，天使之吻，青草场地
        .heldItem = ITEM_GRIP_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_COMFEY_3] = {
        .species = SPECIES_COMFEY, //花疗环环
        .moves = {MOVE_DRAINING_KISS, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_CALM_MIND}, //吸取之吻，寄生种子，剧毒，冥想
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_COMFEY_4] = {
        .species = SPECIES_COMFEY, //花疗环环
        .moves = {MOVE_FLORAL_HEALING, MOVE_HELPING_HAND, MOVE_TAILWIND, MOVE_GRASSY_TERRAIN}, //花疗，帮助，顺风，青草场地
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 252, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CONKELDURR_1] = {
        .species = SPECIES_CONKELDURR, //修建老匠
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_POISON_JAB}, //吸取拳，音速拳，冰冻拳，毒击
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 20, 0, 0, 236),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CONKELDURR_2] = {
        .species = SPECIES_CONKELDURR, //修建老匠
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_FLING, MOVE_BULK_UP}, //近身战，音速拳，投掷，健美
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(0, 252, 20, 0, 0, 236),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CONKELDURR_3] = {
        .species = SPECIES_CONKELDURR, //修建老匠
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE}, //增强拳，音速拳，冰冻拳，地震
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(48, 252, 0, 208, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CONKELDURR_4] = {
        .species = SPECIES_CONKELDURR, //修建老匠
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_HIGH_HORSEPOWER}, //岩崩，近身战，毒击，十万马力
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_COPPERAJAH_1] = {
        .species = SPECIES_COPPERAJAH, //大王铜象
        .moves = {MOVE_HEAVY_SLAM, MOVE_POWER_WHIP, MOVE_HEAT_CRASH, MOVE_STEALTH_ROCK}, //重磅冲撞，强力鞭打，高温重压，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(156, 100, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COPPERAJAH_2] = {
        .species = SPECIES_COPPERAJAH, //大王铜象
        .moves = {MOVE_HEAVY_SLAM, MOVE_POWER_WHIP, MOVE_SUPERPOWER, MOVE_STONE_EDGE}, //重磅冲撞，强力鞭打，蛮力，尖石攻击
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_COPPERAJAH_3] = {
        .species = SPECIES_COPPERAJAH, //大王铜象
        .moves = {MOVE_IRON_HEAD, MOVE_POWER_WHIP, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE}, //铁头，强力鞭打，嬉闹，岩崩
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_COPPERAJAH_4] = {
        .species = SPECIES_COPPERAJAH, //大王铜象
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_PROTECT}, //重磅冲撞，高温重压，地震，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CORSOLA_1] = {
        .species = SPECIES_CORSOLA, //太阳珊瑚
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RECOVER}, //热水，剧毒，隐形岩，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_2] = {
        .species = SPECIES_CORSOLA, //太阳珊瑚
        .moves = {MOVE_HYDRO_PUMP, MOVE_POWER_GEM, MOVE_CALM_MIND, MOVE_RECOVER}, //水炮，力量宝石，冥想，自我再生
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_3] = {
        .species = SPECIES_CORSOLA, //太阳珊瑚
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //热水，自我再生，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CORSOLA_4] = {
        .species = SPECIES_CORSOLA, //太阳珊瑚
        .moves = {MOVE_ICY_WIND, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_LIFE_DEW}, //冰冻之风，剧毒，隐形岩，生命水滴
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_GALAR_1] = {
        .species = SPECIES_CORSOLA_GALAR, //伽勒尔太阳珊瑚
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_STEALTH_ROCK}, //黑夜魔影，磷火，吸取力量，隐形岩
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_GALAR_2] = {
        .species = SPECIES_CORSOLA_GALAR, //伽勒尔太阳珊瑚
        .moves = {MOVE_NIGHT_SHADE, MOVE_WHIRLPOOL, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP}, //黑夜魔影，潮旋，磷火，吸取力量
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA_GALAR_3] = {
        .species = SPECIES_CORSOLA_GALAR, //伽勒尔太阳珊瑚
        .moves = {MOVE_NIGHT_SHADE, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP}, //黑夜魔影，守住，磷火，吸取力量
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORVIKNIGHT_1] = {
        .species = SPECIES_CORVIKNIGHT_GMAX, //钢铠鸦
        .moves = {MOVE_BODY_PRESS, MOVE_U_TURN, MOVE_DEFOG, MOVE_ROOST}, //扑击，急速折返，清除浓雾，羽栖
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 168, 0, 0, 88),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CORVIKNIGHT_2] = {
        .species = SPECIES_CORVIKNIGHT_GMAX, //钢铠鸦
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAUNT, MOVE_BULK_UP, MOVE_ROOST}, //勇鸟猛攻，挑衅，健美，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CORVIKNIGHT_3] = {
        .species = SPECIES_CORVIKNIGHT, //钢铠鸦
        .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_ROOST}, //铁头，扑击，铁壁，羽栖
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 100, 80, 0, 80),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CORVIKNIGHT_4] = {
        .species = SPECIES_CORVIKNIGHT, //钢铠鸦
        .moves = {MOVE_IRON_HEAD, MOVE_TAUNT, MOVE_ROOST, MOVE_TAILWIND}, //铁头，挑衅，羽栖，顺风
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 100, 80, 0, 80),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CRABOMINABLE_1] = {
        .species = SPECIES_CRABOMINABLE, //好胜毛蟹
        .moves = {MOVE_ICE_HAMMER, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_STONE_EDGE}, //冰锤，近身战，地震，尖石攻击
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRABOMINABLE_2] = {
        .species = SPECIES_CRABOMINABLE, //好胜毛蟹
        .moves = {MOVE_ICE_HAMMER, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_REST}, //冰锤，吸取拳，健美，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CRABOMINABLE_3] = {
        .species = SPECIES_CRABOMINABLE, //好胜毛蟹
        .moves = {MOVE_SCALD, MOVE_ENDEAVOR, MOVE_SUBSTITUTE, MOVE_HAIL}, //热水，蛮干，替身，冰雹
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRABOMINABLE_4] = {
        .species = SPECIES_CRABOMINABLE, //好胜毛蟹
        .moves = {MOVE_ICE_HAMMER, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD}, //冰锤，岩崩，地震，广域防守
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY, //摇篮百合
        .moves = {MOVE_GIGA_DRAIN, MOVE_MIRROR_COAT, MOVE_INGRAIN, MOVE_RECOVER}, //终极吸取，镜面反射，扎根，自我再生
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY, //摇篮百合
        .moves = {MOVE_METEOR_BEAM, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_ROCK_POLISH}, //流星光束，终极吸取，大地之力，岩石打磨
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_CRADILY, //摇篮百合
        .moves = {MOVE_SEED_BOMB, MOVE_STONE_EDGE, MOVE_CURSE, MOVE_RECOVER}, //种子炸弹，尖石攻击，诅咒，自我再生
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_CRADILY, //摇篮百合
        .moves = {MOVE_ROCK_SLIDE, MOVE_LEECH_SEED, MOVE_SANDSTORM, MOVE_RECOVER}, //岩崩，寄生种子，沙暴，自我再生
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CRAMORANT_1] = {
        .species = SPECIES_CRAMORANT, //古月鸟
        .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_DEFOG, MOVE_ROOST}, //冲浪，暴风，清除浓雾，羽栖
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRAMORANT_2] = {
        .species = SPECIES_CRAMORANT, //古月鸟
        .moves = {MOVE_DIVE, MOVE_BRAVE_BIRD, MOVE_THROAT_CHOP, MOVE_SUPERPOWER}, //潜水，勇鸟猛攻，深渊突刺，蛮力
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 248, 8, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRAMORANT_3] = {
        .species = SPECIES_CRAMORANT, //古月鸟
        .moves = {MOVE_SURF, MOVE_STOCKPILE, MOVE_AMNESIA, MOVE_ROOST}, //冲浪，蓄力，瞬间失忆，羽栖
        .heldItem = ITEM_KEE_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CRAMORANT_4] = {
        .species = SPECIES_CRAMORANT, //古月鸟
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_TAILWIND, MOVE_ROOST}, //冲浪，冰冻之风，顺风，羽栖
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT, //铁螯龙虾
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_DRAGON_DANCE}, //蟹钳锤，拍落，近身战，龙之舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT, //铁螯龙虾
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_SWORDS_DANCE}, //蟹钳锤，拍落，水流喷射，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CRAWDAUNT_3] = {
        .species = SPECIES_CRAWDAUNT, //铁螯龙虾
        .moves = {MOVE_WHIRLPOOL, MOVE_SWITCHEROO, MOVE_TAUNT, MOVE_COUNTER}, //潮旋，掉包，挑衅，双倍奉还
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRAWDAUNT_4] = {
        .species = SPECIES_CRAWDAUNT, //铁螯龙虾
        .moves = {MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_GUILLOTINE, MOVE_TAUNT}, //拍落，岩崩，极落钳，挑衅
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CRESSELIA_1] = {
        .species = SPECIES_CRESSELIA, //克雷色利亚
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_MOONLIGHT}, //精神强念，冰冻光束，戏法空间，月光
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRESSELIA_2] = {
        .species = SPECIES_CRESSELIA, //克雷色利亚
        .moves = {MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_SLEEP_TALK, MOVE_REST}, //精神强念，戏法空间，梦话，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CRESSELIA_3] = {
        .species = SPECIES_CRESSELIA, //克雷色利亚
        .moves = {MOVE_TRICK_ROOM, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_MOONLIGHT}, //戏法空间，月亮之力，冥想，月光
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 16, 0, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CRESSELIA_4] = {
        .species = SPECIES_CRESSELIA, //克雷色利亚
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND}, //精神强念，冰冻光束，戏法空间，帮助
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT, //叉字蝠
        .moves = {MOVE_ACROBATICS, MOVE_U_TURN, MOVE_HYPNOSIS, MOVE_ROOST}, //杂技，急速折返，催眠术，羽栖
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT, //叉字蝠
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}, //污泥炸弹，空气之刃，暗影球，诡计
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT, //叉字蝠
        .moves = {MOVE_BRAVE_BIRD, MOVE_HYPNOSIS, MOVE_TAUNT, MOVE_ROOST}, //勇鸟猛攻，催眠术，挑衅，羽栖
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT, //叉字蝠
        .moves = {MOVE_SUPER_FANG, MOVE_TAILWIND, MOVE_TAUNT, MOVE_WIDE_GUARD}, //愤怒门牙，顺风，挑衅，广域防守
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRUSTLE_1] = {
        .species = SPECIES_CRUSTLE, //岩殿居蟹
        .moves = {MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SHELL_SMASH}, //十字剪，尖石攻击，地震，破壳
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CRUSTLE_2] = {
        .species = SPECIES_CRUSTLE, //岩殿居蟹
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE}, //迎头一击，尖石攻击，拍落，地震
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRUSTLE_3] = {
        .species = SPECIES_CRUSTLE, //岩殿居蟹
        .moves = {MOVE_ROCK_BLAST, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_SPIKES}, //岩石爆击，扑击，隐形岩，撒菱
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CRUSTLE_4] = {
        .species = SPECIES_CRUSTLE, //岩殿居蟹
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD}, //十字剪，岩崩，地震，广域防守
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CRYOGONAL_1] = {
        .species = SPECIES_CRYOGONAL, //几何雪花
        .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_RECOVER, MOVE_HAIL}, //暴风雪，冷冻干燥，自我再生，冰雹
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRYOGONAL_2] = {
        .species = SPECIES_CRYOGONAL, //几何雪花
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_HIDDEN_POWER, MOVE_RAPID_SPIN}, //冰冻光束，冷冻干燥，觉醒力量，高速旋转
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(196, 0, 0, 64, 248, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRYOGONAL_3] = {
        .species = SPECIES_CRYOGONAL, //几何雪花
        .moves = {MOVE_TOXIC, MOVE_REFLECT_TYPE, MOVE_IRON_DEFENSE, MOVE_RECOVER}, //剧毒，镜面属性，铁壁，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CRYOGONAL_4] = {
        .species = SPECIES_CRYOGONAL, //几何雪花
        .moves = {MOVE_BLIZZARD, MOVE_ICY_WIND, MOVE_AURORA_VEIL, MOVE_PROTECT}, //暴风雪，冰冻之风，极光幕，守住
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CURSOLA_1] = {
        .species = SPECIES_CURSOLA, //魔灵珊瑚
        .moves = {MOVE_SHADOW_BALL, MOVE_METEOR_BEAM, MOVE_BURNING_JEALOUSY, MOVE_ENDURE}, //暗影球，流星光束，妒火，挺住
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CURSOLA_2] = {
        .species = SPECIES_CURSOLA, //魔灵珊瑚
        .moves = {MOVE_SHADOW_BALL, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_BURNING_JEALOUSY}, //暗影球，水炮，冰冻光束，妒火
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CURSOLA_3] = {
        .species = SPECIES_CURSOLA, //魔灵珊瑚
        .moves = {MOVE_HEX, MOVE_GIGA_DRAIN, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP}, //祸不单行，终极吸取，磷火，吸取力量
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CURSOLA_4] = {
        .species = SPECIES_CURSOLA, //魔灵珊瑚
        .moves = {MOVE_NIGHT_SHADE, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_DISABLE}, //黑夜魔影，终极吸取，吸取力量，定身法
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DACHSBUN_1] = {
        .species = SPECIES_DACHSBUN, //麻花犬
        .moves = {MOVE_BODY_PRESS, MOVE_PLAY_ROUGH, MOVE_PROTECT, MOVE_HELPING_HAND}, //扑击，嬉闹，守住，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DACHSBUN_2] = {
        .species = SPECIES_DACHSBUN, //麻花犬
        .moves = {MOVE_BODY_PRESS, MOVE_PLAY_ROUGH, MOVE_YAWN, MOVE_PROTECT}, //扑击，嬉闹，哈欠，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DARMANITAN_GALAR_STANDARD_1] = {
        .species = SPECIES_DARMANITAN_GALAR_STANDARD, //伽勒尔达摩狒狒
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER}, //冰柱坠击，闪焰冲锋，岩崩，蛮力
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_GALAR_STANDARD_2] = {
        .species = SPECIES_DARMANITAN_GALAR_STANDARD, //伽勒尔达摩狒狒
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_U_TURN}, //冰柱坠击，闪焰冲锋，岩崩，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_GALAR_STANDARD_3] = {
        .species = SPECIES_DARMANITAN_GALAR_STANDARD, //伽勒尔达摩狒狒
        .moves = {MOVE_ICICLE_CRASH, MOVE_FIRE_PUNCH, MOVE_REVERSAL, MOVE_ENDURE}, //冰柱坠击，火焰拳，绝处逢生，挺住
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_GALAR_STANDARD_4] = {
        .species = SPECIES_DARMANITAN_GALAR_STANDARD, //伽勒尔达摩狒狒
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}, //冰柱坠击，闪焰冲锋，岩崩，地震
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_STANDARD_1] = {
        .species = SPECIES_DARMANITAN_STANDARD, //达摩狒狒
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER}, //闪焰冲锋，地震，岩崩，蛮力
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_STANDARD_2] = {
        .species = SPECIES_DARMANITAN_STANDARD, //达摩狒狒
        .moves = {MOVE_FIRE_PUNCH, MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_BELLY_DRUM}, //火焰拳，地震，哈欠，腹鼓
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DARMANITAN_STANDARD_3] = {
        .species = SPECIES_DARMANITAN_STANDARD, //达摩狒狒
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER}, //大字爆炎，精神强念，真气弹，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARMANITAN_STANDARD_4] = {
        .species = SPECIES_DARMANITAN_STANDARD, //达摩狒狒
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_ENCORE, MOVE_SUBSTITUTE}, //喷射火焰，磷火，再来一次，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DECIDUEYE_1] = {
        .species = SPECIES_DECIDUEYE, //狙射树枭
        .moves = {MOVE_LEAF_BLADE, MOVE_POLTERGEIST, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, //叶刃，灵骚，突袭，剑舞
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DECIDUEYE_2] = {
        .species = SPECIES_DECIDUEYE, //狙射树枭
        .moves = {MOVE_LEAF_STORM, MOVE_SHADOW_BALL, MOVE_HURRICANE, MOVE_NASTY_PLOT}, //飞叶风暴，暗影球，暴风，诡计
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DECIDUEYE_3] = {
        .species = SPECIES_DECIDUEYE, //狙射树枭
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_CURSE, MOVE_ROOST, MOVE_PROTECT}, //缝影，诅咒，羽栖，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DECIDUEYE_4] = {
        .species = SPECIES_DECIDUEYE, //狙射树枭
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_DEFOG, MOVE_TAILWIND}, //缝影，叶刃，清除浓雾，顺风
        .heldItem = ITEM_DECIDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 160, 96, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_1] = {
        .species = SPECIES_DECIDUEYE_HISUI, //洗翠狙射树枭
        .moves = {MOVE_LEAF_BLADE, MOVE_TRIPLE_ARROWS, MOVE_BRAVE_BIRD, MOVE_U_TURN}, //叶刃，三连箭，勇鸟猛攻，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_2] = {
        .species = SPECIES_DECIDUEYE_HISUI, //洗翠狙射树枭
        .moves = {MOVE_LEAF_STORM, MOVE_AURA_SPHERE, MOVE_HURRICANE, MOVE_U_TURN}, //飞叶风暴，波导弹，暴风，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_3] = {
        .species = SPECIES_DECIDUEYE_HISUI, //洗翠狙射树枭
        .moves = {MOVE_LEAF_BLADE, MOVE_TRIPLE_ARROWS, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, //叶刃，三连箭，突袭，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_4] = {
        .species = SPECIES_DECIDUEYE_HISUI, //洗翠狙射树枭
        .moves = {MOVE_LEAF_BLADE, MOVE_BRICK_BREAK, MOVE_BRAVE_BIRD, MOVE_TAILWIND}, //叶刃，劈瓦，勇鸟猛攻，顺风
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DEDENNE_1] = {
        .species = SPECIES_DEDENNE, //咚咚鼠
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_MAGNET_RISE}, //十万伏特，魔法闪耀，打草结，电磁飘浮
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEDENNE_2] = {
        .species = SPECIES_DEDENNE, //咚咚鼠
        .moves = {MOVE_TOXIC, MOVE_STUFF_CHEEKS, MOVE_RECYCLE, MOVE_SUBSTITUTE}, //剧毒，大快朵颐，回收利用，替身
        .heldItem = ITEM_MARANGA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEDENNE_3] = {
        .species = SPECIES_DEDENNE, //咚咚鼠
        .moves = {MOVE_DISCHARGE, MOVE_SUPER_FANG, MOVE_STUFF_CHEEKS, MOVE_RECYCLE}, //放电，愤怒门牙，大快朵颐，回收利用
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DEDENNE_4] = {
        .species = SPECIES_DEDENNE, //咚咚鼠
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_DAZZLING_GLEAM, MOVE_STUFF_CHEEKS, MOVE_ELECTRIC_TERRAIN}, //抛物面充电，魔法闪耀，大快朵颐，电气场地
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY, //优雅猫
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE}, //舍身冲撞，突袭，击掌奇袭，电磁波
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY, //优雅猫
        .moves = {MOVE_PLAY_ROUGH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE, MOVE_TICKLE}, //嬉闹，击掌奇袭，电磁波，挠痒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DELCATTY_3] = {
        .species = SPECIES_DELCATTY, //优雅猫
        .moves = {MOVE_THUNDER_WAVE, MOVE_WISH, MOVE_COSMIC_POWER, MOVE_BATON_PASS}, //电磁波，祈愿，宇宙力量，接棒
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DELCATTY_4] = {
        .species = SPECIES_DELCATTY, //优雅猫
        .moves = {MOVE_ICY_WIND, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_HEAL_BELL}, //冰冻之风，击掌奇袭，帮助，治愈铃声
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DELIBIRD_1] = {
        .species = SPECIES_DELIBIRD, //信使鸟
        .moves = {MOVE_ICE_PUNCH, MOVE_BRAVE_BIRD, MOVE_GUNK_SHOT, MOVE_POWER_UP_PUNCH}, //冰冻拳，勇鸟猛攻，垃圾射击，增强拳
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DELIBIRD_2] = {
        .species = SPECIES_DELIBIRD, //信使鸟
        .moves = {MOVE_DEFOG, MOVE_TOXIC, MOVE_DESTINY_BOND, MOVE_SPIKES}, //清除浓雾，剧毒，同命，撒菱
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DELIBIRD_3] = {
        .species = SPECIES_DELIBIRD, //信使鸟
        .moves = {MOVE_ICY_WIND, MOVE_SPIKES, MOVE_HAIL, MOVE_AURORA_VEIL}, //冰冻之风，撒菱，冰雹，极光幕
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DELIBIRD_4] = {
        .species = SPECIES_DELIBIRD, //信使鸟
        .moves = {MOVE_ICY_WIND, MOVE_FAKE_OUT, MOVE_BESTOW, MOVE_DESTINY_BOND}, //冰冻之风，击掌奇袭，传递礼物，同命
        .heldItem = ITEM_MACHO_BRACE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DELPHOX_1] = {
        .species = SPECIES_DELPHOX, //妖火红狐
        .moves = {MOVE_FLAMETHROWER, MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS}, //喷射火焰，广域战力，暗影球，热沙大地
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DELPHOX_2] = {
        .species = SPECIES_DELPHOX, //妖火红狐
        .moves = {MOVE_MYSTICAL_FIRE, MOVE_PSYSHOCK, MOVE_SCORCHING_SANDS, MOVE_CALM_MIND}, //魔法火焰，精神冲击，热沙大地，冥想
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DELPHOX_3] = {
        .species = SPECIES_DELPHOX, //妖火红狐
        .moves = {MOVE_WILL_O_WISP, MOVE_FIRE_SPIN, MOVE_WISH, MOVE_PROTECT}, //磷火，火焰旋涡，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DELPHOX_4] = {
        .species = SPECIES_DELPHOX, //妖火红狐
        .moves = {MOVE_HEAT_WAVE, MOVE_DAZZLING_GLEAM, MOVE_EXPANDING_FORCE, MOVE_HYPNOSIS}, //热风，魔法闪耀，广域战力，催眠术
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG, //白海狮
        .moves = {MOVE_AVALANCHE, MOVE_LIQUIDATION, MOVE_DRILL_RUN, MOVE_CURSE}, //雪崩，水流裂破，直冲钻，诅咒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG, //白海狮
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_PROTECT}, //冲浪，冰冻光束，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG, //白海狮
        .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT}, //潮旋，终焉之歌，再来一次，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG, //白海狮
        .moves = {MOVE_ICY_WIND, MOVE_FAKE_OUT, MOVE_HAIL, MOVE_PROTECT}, //冰冻之风，击掌奇袭，冰雹，守住
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DHELMISE_1] = {
        .species = SPECIES_DHELMISE, //破破舵轮
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SYNTHESIS, MOVE_SWORDS_DANCE}, //灵骚，强力鞭打，光合作用，剑舞
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DHELMISE_2] = {
        .species = SPECIES_DHELMISE, //破破舵轮
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_HEAVY_SLAM, MOVE_SWITCHEROO}, //灵骚，强力鞭打，重磅冲撞，掉包
        .heldItem = ITEM_FLOAT_STONE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DHELMISE_3] = {
        .species = SPECIES_DHELMISE, //破破舵轮
        .moves = {MOVE_ANCHOR_SHOT, MOVE_TOXIC, MOVE_SYNTHESIS, MOVE_DOUBLE_TEAM}, //掷锚，剧毒，光合作用，影子分身
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DHELMISE_4] = {
        .species = SPECIES_DHELMISE, //破破舵轮
        .moves = {MOVE_ANCHOR_SHOT, MOVE_KNOCK_OFF, MOVE_SYNTHESIS, MOVE_HELPING_HAND}, //掷锚，拍落，光合作用，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DIGGERSBY_1] = {
        .species = SPECIES_DIGGERSBY, //掘地兔
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_QUICK_ATTACK}, //报恩，地震，火焰拳，电光一闪
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DIGGERSBY_2] = {
        .species = SPECIES_DIGGERSBY, //掘地兔
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE}, //地震，冰冻拳，铁头，剑舞
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DIGGERSBY_3] = {
        .species = SPECIES_DIGGERSBY, //掘地兔
        .moves = {MOVE_SUPER_FANG, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_SPIKES}, //愤怒门牙，拍落，剧毒，撒菱
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(208, 0, 252, 48, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DIGGERSBY_4] = {
        .species = SPECIES_DIGGERSBY, //掘地兔
        .moves = {MOVE_RETURN, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF}, //报恩，十万马力，岩崩，拍落
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DITTO_1] = {
        .species = SPECIES_DITTO, //百变怪
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE}, //变身
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DITTO_2] = {
        .species = SPECIES_DITTO, //百变怪
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE}, //变身
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DITTO_3] = {
        .species = SPECIES_DITTO, //百变怪
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE}, //变身
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DITTO_4] = {
        .species = SPECIES_DITTO, //百变怪
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE}, //变身
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO, //嘟嘟利
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_KNOCK_OFF}, //舍身冲撞，勇鸟猛攻，飞踢，拍落
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO, //嘟嘟利
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE}, //舍身冲撞，勇鸟猛攻，飞踢，剑舞
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO, //嘟嘟利
        .moves = {MOVE_QUICK_ATTACK, MOVE_DRILL_PECK, MOVE_STOMPING_TANTRUM, MOVE_ENDEAVOR}, //电光一闪，啄钻，跺脚，蛮干
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO, //嘟嘟利
        .moves = {MOVE_QUICK_ATTACK, MOVE_DRILL_PECK, MOVE_ENDEAVOR, MOVE_ACUPRESSURE}, //电光一闪，啄钻，蛮干，点穴
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DONDOZO_1] = {
        .species = SPECIES_DONDOZO, //吃吼霸
        .moves = {MOVE_ORDER_UP, MOVE_LIQUIDATION, MOVE_BULLDOZE, MOVE_YAWN}, //上菜，水流裂破，重踏，哈欠
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(250, 0, 250, 0, 0, 8),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DONDOZO_2] = {
        .species = SPECIES_DONDOZO, //吃吼霸
        .moves = {MOVE_WAVE_CRASH, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ORDER_UP}, //波动冲，水流裂破，地震，上菜
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(92, 164, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DONDOZO_3] = {
        .species = SPECIES_DONDOZO, //吃吼霸
        .moves = {MOVE_BULLDOZE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_CURSE}, //重踏，睡觉，梦话，诅咒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(250, 0, 250, 0, 0, 8),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DONDOZO_4] = {
        .species = SPECIES_DONDOZO, //吃吼霸
        .moves = {MOVE_ORDER_UP, MOVE_BODY_PRESS, MOVE_SUBSTITUTE, MOVE_PROTECT}, //上菜，扑击，替身，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(206, 0, 252, 50, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN, //顿甲
        .moves = {MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_HEAD_SMASH, MOVE_ICE_SHARD}, //地震，嬉闹，双刃头锤，冰砾
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN, //顿甲
        .moves = {MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //地震，高速旋转，剧毒，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DONPHAN, //顿甲
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_SANDSTORM, MOVE_DOUBLE_TEAM}, //扑击，剧毒，沙暴，影子分身
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DONPHAN, //顿甲
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SANDSTORM}, //拍落，剧毒，隐形岩，沙暴
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DRACOVISH_1] = {
        .species = SPECIES_DRACOVISH, //鳃鱼龙
        .moves = {MOVE_OUTRAGE, MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH}, //逆鳞，鳃咬，精神之牙，咬碎
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRACOVISH_2] = {
        .species = SPECIES_DRACOVISH, //鳃鱼龙
        .moves = {MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_ROCK_SLIDE, MOVE_ICE_FANG}, //鳃咬，精神之牙，岩崩，冰冻牙
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRACOVISH_3] = {
        .species = SPECIES_DRACOVISH, //鳃鱼龙
        .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_RUSH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}, //鳃咬，龙之俯冲，岩崩，地震
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRACOVISH_4] = {
        .species = SPECIES_DRACOVISH, //鳃鱼龙
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS, MOVE_PROTECT}, //鳃咬，冰冻牙，精神之牙，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRACOZOLT_1] = {
        .species = SPECIES_DRACOZOLT, //雷鸟龙
        .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}, //电喙，龙爪，地震，岩崩
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRACOZOLT_2] = {
        .species = SPECIES_DRACOZOLT, //雷鸟龙
        .moves = {MOVE_DRACO_METEOR, MOVE_DISCHARGE, MOVE_FIRE_BLAST, MOVE_METEOR_BEAM}, //流星群，放电，大字爆炎，流星光束
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRACOZOLT_3] = {
        .species = SPECIES_DRACOZOLT, //雷鸟龙
        .moves = {MOVE_DRACO_METEOR, MOVE_BOLT_BEAK, MOVE_FIRE_SPIN, MOVE_SUBSTITUTE}, //流星群，电喙，火焰旋涡，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 184, 0, 184, 140, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRACOZOLT_4] = {
        .species = SPECIES_DRACOZOLT, //雷鸟龙
        .moves = {MOVE_BOLT_BEAK, MOVE_BREAKING_SWIPE, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //电喙，广域破坏，岩崩，守住
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGALGE_1] = {
        .species = SPECIES_DRAGALGE, //毒藻龙
        .moves = {MOVE_DRAGON_TAIL, MOVE_FLIP_TURN, MOVE_PLAY_ROUGH, MOVE_TOXIC_SPIKES}, //龙尾，快速折返，嬉闹，毒菱
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGALGE_2] = {
        .species = SPECIES_DRAGALGE, //毒藻龙
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_FLIP_TURN}, //流星群，污泥波，真气弹，快速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGALGE_3] = {
        .species = SPECIES_DRAGALGE, //毒藻龙
        .moves = {MOVE_SCALD, MOVE_SLEEP_TALK, MOVE_REST, MOVE_TOXIC_SPIKES}, //热水，梦话，睡觉，毒菱
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DRAGALGE_4] = {
        .species = SPECIES_DRAGALGE, //毒藻龙
        .moves = {MOVE_DRAGON_TAIL, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_TOXIC_SPIKES}, //龙尾，污泥炸弹，冰冻之风，毒菱
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DRAGAPULT_1] = {
        .species = SPECIES_DRAGAPULT, //多龙巴鲁托
        .moves = {MOVE_DRACO_METEOR, MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_U_TURN}, //流星群，暗影球，喷射火焰，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGAPULT_2] = {
        .species = SPECIES_DRAGAPULT, //多龙巴鲁托
        .moves = {MOVE_PHANTOM_FORCE, MOVE_DRAGON_DARTS, MOVE_ACROBATICS, MOVE_DRAGON_DANCE}, //潜灵奇袭，龙箭，杂技，龙之舞
        .heldItem = ITEM_DRAGON_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGAPULT_3] = {
        .species = SPECIES_DRAGAPULT, //多龙巴鲁托
        .moves = {MOVE_DRACO_METEOR, MOVE_HEX, MOVE_U_TURN, MOVE_THUNDER_WAVE}, //流星群，祸不单行，急速折返，电磁波
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGAPULT_4] = {
        .species = SPECIES_DRAGAPULT, //多龙巴鲁托
        .moves = {MOVE_BREAKING_SWIPE, MOVE_WILL_O_WISP, MOVE_LIGHT_SCREEN, MOVE_REFLECT}, //广域破坏，磷火，光墙，反射壁
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE, //快龙
        .moves = {MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_EXTREME_SPEED}, //鳞射，地震，火焰拳，神速
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE, //快龙
        .moves = {MOVE_SCALE_SHOT, MOVE_IRON_TAIL, MOVE_AQUA_JET, MOVE_DRAGON_DANCE}, //鳞射，铁尾，水流喷射，龙之舞
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE, //快龙
        .moves = {MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT}, //龙之波动，暴风，大字爆炎，十万伏特
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE, //快龙
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_TAILWIND, MOVE_PROTECT}, //龙之波动，喷射火焰，顺风，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 128, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DRAMPA_1] = {
        .species = SPECIES_DRAMPA, //老翁龙
        .moves = {MOVE_HYPER_VOICE, MOVE_DRAGON_ENERGY, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST}, //巨声，巨龙威能，十万伏特，真气弹
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAMPA_2] = {
        .species = SPECIES_DRAMPA, //老翁龙
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_TAILWIND, MOVE_ROOST}, //喷射火焰，剧毒，顺风，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DRAMPA_3] = {
        .species = SPECIES_DRAMPA, //老翁龙
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_GLARE, MOVE_ROOST}, //龙之波动，喷射火焰，大蛇瞪眼，羽栖
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DRAMPA_4] = {
        .species = SPECIES_DRAMPA, //老翁龙
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_HEAT_WAVE}, //巨龙威能，龙之波动，巨声，热风
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DRAPION_1] = {
        .species = SPECIES_DRAPION, //龙王蝎
        .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_AQUA_TAIL, MOVE_SWORDS_DANCE}, //十字毒刃，暗袭要害，水流尾，剑舞
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAPION_2] = {
        .species = SPECIES_DRAPION, //龙王蝎
        .moves = {MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_WHIRLWIND, MOVE_TOXIC_SPIKES}, //拍落，挑衅，吹飞，毒菱
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DRAPION_3] = {
        .species = SPECIES_DRAPION, //龙王蝎
        .moves = {MOVE_CROSS_POISON, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_PURSUIT}, //十字毒刃，拍落，地震，追打
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAPION_4] = {
        .species = SPECIES_DRAPION, //龙王蝎
        .moves = {MOVE_CROSS_POISON, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_TOXIC_SPIKES}, //十字毒刃，拍落，岩崩，毒菱
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DREDNAW_1] = {
        .species = SPECIES_DREDNAW_GMAX, //暴噬龟
        .moves = {MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_STEALTH_ROCK}, //双刃头锤，水流裂破，冰冻牙，隐形岩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DREDNAW_2] = {
        .species = SPECIES_DREDNAW_GMAX, //暴噬龟
        .moves = {MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE}, //双刃头锤，水流裂破，地震，求雨
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DREDNAW_3] = {
        .species = SPECIES_DREDNAW, //暴噬龟
        .moves = {MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_EARTHQUAKE}, //双刃头锤，水流裂破，冰冻牙，地震
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DREDNAW_4] = {
        .species = SPECIES_DREDNAW, //暴噬龟
        .moves = {MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_PROTECT}, //岩崩，水流裂破，地震，守住
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRIFBLIM_1] = {
        .species = SPECIES_DRIFBLIM, //随风球
        .moves = {MOVE_ACROBATICS, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_SUBSTITUTE}, //杂技，突袭，拍落，替身
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 128, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRIFBLIM_2] = {
        .species = SPECIES_DRIFBLIM, //随风球
        .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_STRENGTH_SAP, MOVE_CALM_MIND}, //暗影球，十万伏特，吸取力量，冥想
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 4, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DRIFBLIM_3] = {
        .species = SPECIES_DRIFBLIM, //随风球
        .moves = {MOVE_SHADOW_BALL, MOVE_ACROBATICS, MOVE_THUNDERBOLT, MOVE_STRENGTH_SAP}, //暗影球，杂技，十万伏特，吸取力量
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 88, 0, 180, 240, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRIFBLIM_4] = {
        .species = SPECIES_DRIFBLIM, //随风球
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_TAILWIND}, //暗影球，磷火，吸取力量，顺风
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 128, 128, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRUDDIGON_1] = {
        .species = SPECIES_DRUDDIGON, //赤面龙
        .moves = {MOVE_SCALE_SHOT, MOVE_CRUNCH, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE}, //鳞射，咬碎，双翼，地震
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRUDDIGON_2] = {
        .species = SPECIES_DRUDDIGON, //赤面龙
        .moves = {MOVE_OUTRAGE, MOVE_FIRE_PUNCH, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH}, //逆鳞，火焰拳，垃圾射击，突袭
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRUDDIGON_3] = {
        .species = SPECIES_DRUDDIGON, //赤面龙
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_STEALTH_ROCK}, //龙尾，地震，大蛇瞪眼，隐形岩
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DRUDDIGON_4] = {
        .species = SPECIES_DRUDDIGON, //赤面龙
        .moves = {MOVE_DRAGON_CLAW, MOVE_SUCKER_PUNCH, MOVE_GLARE, MOVE_PROTECT}, //龙爪，突袭，大蛇瞪眼，守住
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUBWOOL_1] = {
        .species = SPECIES_DUBWOOL, //毛毛角羊
        .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_PAYBACK, MOVE_COTTON_GUARD}, //泰山压顶，扑击，以牙还牙，棉花防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUBWOOL_2] = {
        .species = SPECIES_DUBWOOL, //毛毛角羊
        .moves = {MOVE_RETURN, MOVE_WILD_CHARGE, MOVE_BODY_PRESS, MOVE_SWORDS_DANCE}, //报恩，疯狂伏特，扑击，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUBWOOL_3] = {
        .species = SPECIES_DUBWOOL, //毛毛角羊
        .moves = {MOVE_BODY_PRESS, MOVE_COTTON_GUARD, MOVE_SUBSTITUTE, MOVE_BATON_PASS}, //扑击，棉花防守，替身，接棒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUBWOOL_4] = {
        .species = SPECIES_DUBWOOL, //毛毛角羊
        .moves = {MOVE_RETURN, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_PROTECT}, //报恩，扑击，电磁波，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUDUNSPARCE_TWO_SEGMENT_1] = {
        .species = SPECIES_DUDUNSPARCE_TWO_SEGMENT, //土龙节节-两节
        .moves = {MOVE_HEADBUTT, MOVE_BLIZZARD, MOVE_BOOMBURST, MOVE_EARTH_POWER}, //头锤，暴风雪，爆音波，大地之力
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUDUNSPARCE_TWO_SEGMENT_2] = {
        .species = SPECIES_DUDUNSPARCE_TWO_SEGMENT, //土龙节节-两节
        .moves = {MOVE_ROOST, MOVE_BLIZZARD, MOVE_COIL, MOVE_GLARE}, //羽栖，暴风雪，盘蜷，大蛇瞪眼
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO, //三地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}, //地震，绝处逢生，尖石攻击，突袭
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO, //三地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //地震，剧毒，隐形岩，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO, //三地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUBSTITUTE, MOVE_MEMENTO}, //地震，尖石攻击，替身，临别礼物
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO, //三地鼠
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_REVERSAL, MOVE_PROTECT}, //十万马力，岩崩，绝处逢生，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_1] = {
        .species = SPECIES_DUGTRIO_ALOLA, //阿罗拉三地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_NIGHT_SLASH, MOVE_STONE_EDGE}, //地震，铁头，暗袭要害，尖石攻击
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_2] = {
        .species = SPECIES_DUGTRIO_ALOLA, //阿罗拉三地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE}, //地震，铁头，突袭，岩崩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_3] = {
        .species = SPECIES_DUGTRIO_ALOLA, //阿罗拉三地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUBSTITUTE, MOVE_SANDSTORM}, //地震，尖石攻击，替身，沙暴
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_4] = {
        .species = SPECIES_DUGTRIO_ALOLA, //阿罗拉三地鼠
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //十万马力，铁头，岩崩，守住
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUNSPARCE, //土龙弟弟
        .moves = {MOVE_BODY_SLAM, MOVE_DRAGON_RUSH, MOVE_HEADBUTT, MOVE_ROOST}, //泰山压顶，龙之俯冲，头锤，羽栖
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUNSPARCE, //土龙弟弟
        .moves = {MOVE_BODY_SLAM, MOVE_YAWN, MOVE_STEALTH_ROCK, MOVE_ROOST}, //泰山压顶，哈欠，隐形岩，羽栖
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUNSPARCE_3] = {
        .species = SPECIES_DUNSPARCE, //土龙弟弟
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_COIL, MOVE_ROOST}, //头锤，大蛇瞪眼，盘蜷，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DUNSPARCE_4] = {
        .species = SPECIES_DUNSPARCE, //土龙弟弟
        .moves = {MOVE_BODY_SLAM, MOVE_STEALTH_ROCK, MOVE_REST, MOVE_SLEEP_TALK}, //泰山压顶，隐形岩，睡觉，梦话
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DURALUDON_1] = {
        .species = SPECIES_DURALUDON_GMAX, //铝钢龙
        .moves = {MOVE_OUTRAGE, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_BREAKING_SWIPE}, //逆鳞，重磅冲撞，扑击，广域破坏
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_DURALUDON_2] = {
        .species = SPECIES_DURALUDON_GMAX, //铝钢龙
        .moves = {MOVE_STEEL_BEAM, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT, MOVE_DARK_PULSE}, //铁蹄光线，流星群，十万伏特，恶之波动
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DURALUDON_3] = {
        .species = SPECIES_DURALUDON, //铝钢龙
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_SUBSTITUTE}, //流星群，加农光炮，打雷，替身
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(80, 0, 0, 176, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DURALUDON_4] = {
        .species = SPECIES_DURALUDON, //铝钢龙
        .moves = {MOVE_STEEL_BEAM, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT, MOVE_DARK_PULSE}, //铁蹄光线，流星群，十万伏特，恶之波动
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DURANT_1] = {
        .species = SPECIES_DURANT, //铁蚁
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_HONE_CLAWS}, //铁头，蛮力，咬碎，磨爪
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DURANT_2] = {
        .species = SPECIES_DURANT, //铁蚁
        .moves = {MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_ENTRAINMENT}, //十字剪，铁头，暗影爪，找伙伴
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DURANT_3] = {
        .species = SPECIES_DURANT, //铁蚁
        .moves = {MOVE_IRON_HEAD, MOVE_IRON_DEFENSE, MOVE_AGILITY, MOVE_BATON_PASS}, //铁头，铁壁，高速移动，接棒
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DURANT_4] = {
        .species = SPECIES_DURANT, //铁蚁
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_PROTECT}, //铁头，蛮力，咬碎，守住
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUSKNOIR_1] = {
        .species = SPECIES_DUSKNOIR, //黑夜魔灵
        .moves = {MOVE_SUCKER_PUNCH, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_TRICK_ROOM}, //突袭，磷火，奇异之光，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DUSKNOIR_2] = {
        .species = SPECIES_DUSKNOIR, //黑夜魔灵
        .moves = {MOVE_POLTERGEIST, MOVE_TRICK_ROOM, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH}, //灵骚，戏法空间，冰冻拳，雷电拳
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(212, 252, 44, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DUSKNOIR_3] = {
        .species = SPECIES_DUSKNOIR, //黑夜魔灵
        .moves = {MOVE_TRICK_ROOM, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_CURSE}, //戏法空间，分担痛楚，磷火，诅咒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DUSKNOIR_4] = {
        .species = SPECIES_DUSKNOIR, //黑夜魔灵
        .moves = {MOVE_POLTERGEIST, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM, MOVE_HELPING_HAND}, //灵骚，磷火，戏法空间，帮助
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(236, 0, 36, 0, 0, 236),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DUSTOX_1] = {
        .species = SPECIES_DUSTOX, //毒粉蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_TOXIC_THREAD, MOVE_IRON_DEFENSE, MOVE_ROOST}, //虫鸣，毒丝，铁壁，羽栖
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUSTOX_2] = {
        .species = SPECIES_DUSTOX, //毒粉蛾
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC_THREAD, MOVE_QUIVER_DANCE, MOVE_PROTECT}, //毒液冲击，毒丝，蝶舞，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DUSTOX_3] = {
        .species = SPECIES_DUSTOX, //毒粉蛾
        .moves = {MOVE_U_TURN, MOVE_DEFOG, MOVE_TAILWIND, MOVE_TOXIC_THREAD}, //急速折返，清除浓雾，顺风，毒丝
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DUSTOX_4] = {
        .species = SPECIES_DUSTOX, //毒粉蛾
        .moves = {MOVE_ELECTROWEB, MOVE_STRUGGLE_BUG, MOVE_TAILWIND, MOVE_ROOST}, //电网，虫之抵抗，顺风，羽栖
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_EELEKTROSS_1] = {
        .species = SPECIES_EELEKTROSS, //麻麻鳗鱼王
        .moves = {MOVE_WILD_CHARGE, MOVE_THUNDERBOLT, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER}, //疯狂伏特，十万伏特，龙爪，喷射火焰
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 252, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EELEKTROSS_2] = {
        .species = SPECIES_EELEKTROSS, //麻麻鳗鱼王
        .moves = {MOVE_THUNDER_CAGE, MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN}, //雷电囚笼，伏特替换，喷射火焰，终极吸取
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EELEKTROSS_3] = {
        .species = SPECIES_EELEKTROSS, //麻麻鳗鱼王
        .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_BRICK_BREAK, MOVE_COIL}, //疯狂伏特，咬碎，劈瓦，盘蜷
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_EELEKTROSS_4] = {
        .species = SPECIES_EELEKTROSS, //麻麻鳗鱼王
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_CAGE, MOVE_GRASS_KNOT, MOVE_PROTECT}, //喷射火焰，雷电囚笼，打草结，守住
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EISCUE_ICE_1] = {
        .species = SPECIES_EISCUE_ICE, //冰砌鹅-结冻头
        .moves = {MOVE_ICICLE_CRASH, MOVE_HEAD_SMASH, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE}, //冰柱坠击，双刃头锤，腹鼓，替身
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EISCUE_ICE_2] = {
        .species = SPECIES_EISCUE_ICE, //冰砌鹅-结冻头
        .moves = {MOVE_ICICLE_CRASH, MOVE_HEAD_SMASH, MOVE_LIQUIDATION, MOVE_PSYCHIC_FANGS}, //冰柱坠击，双刃头锤，水流裂破，精神之牙
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EISCUE_ICE_3] = {
        .species = SPECIES_EISCUE_ICE, //冰砌鹅-结冻头
        .moves = {MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_HAIL, MOVE_AURORA_VEIL}, //冰柱坠击，水流裂破，冰雹，极光幕
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EISCUE_ICE_4] = {
        .species = SPECIES_EISCUE_ICE, //冰砌鹅-结冻头
        .moves = {MOVE_ICY_WIND, MOVE_WHIRLPOOL, MOVE_HAIL, MOVE_AURORA_VEIL}, //冰冻之风，潮旋，冰雹，极光幕
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ELDEGOSS_1] = {
        .species = SPECIES_ELDEGOSS, //白蓬蓬
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_POLLEN_PUFF, MOVE_RAPID_SPIN}, //飞叶风暴，终极吸取，花粉团，高速旋转
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(236, 0, 0, 36, 236, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELDEGOSS_2] = {
        .species = SPECIES_ELDEGOSS, //白蓬蓬
        .moves = {MOVE_SOLAR_BEAM, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY, MOVE_SYNTHESIS}, //日光束，觉醒力量，大晴天，光合作用
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELDEGOSS_3] = {
        .species = SPECIES_ELDEGOSS, //白蓬蓬
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_PROTECT}, //终极吸取，寄生种子，催眠粉，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ELDEGOSS_4] = {
        .species = SPECIES_ELDEGOSS, //白蓬蓬
        .moves = {MOVE_POLLEN_PUFF, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_PROTECT}, //花粉团，寄生种子，催眠粉，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ELECTIVIRE_1] = {
        .species = SPECIES_ELECTIVIRE, //电击魔兽
        .moves = {MOVE_PLASMA_FISTS, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP}, //等离子闪电拳，地震，冰冻拳，十字劈
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTIVIRE_2] = {
        .species = SPECIES_ELECTIVIRE, //电击魔兽
        .moves = {MOVE_THUNDER, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_PSYCHIC}, //打雷，喷射火焰，真气弹，精神强念
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTIVIRE_3] = {
        .species = SPECIES_ELECTIVIRE, //电击魔兽
        .moves = {MOVE_RISING_VOLTAGE, MOVE_BULLDOZE, MOVE_THUNDER_WAVE, MOVE_ELECTRIC_TERRAIN}, //电力上升，重踏，电磁波，电气场地
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ELECTIVIRE_4] = {
        .species = SPECIES_ELECTIVIRE, //电击魔兽
        .moves = {MOVE_PLASMA_FISTS, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_ELECTRIC_TERRAIN}, //等离子闪电拳，岩崩，火焰拳，电气场地
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE, //顽皮雷弹
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH}, //十万伏特，信号光束，觉醒力量，伏特替换
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE, //顽皮雷弹
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH}, //十万伏特，信号光束，觉醒力量，伏特替换
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE, //顽皮雷弹
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_TAUNT}, //打雷，伏特替换，求雨，挑衅
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 64, 192, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE, //顽皮雷弹
        .moves = {MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_TAUNT, MOVE_PROTECT}, //十万伏特，大爆炸，挑衅，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_1] = {
        .species = SPECIES_ELECTRODE_HISUI, //洗翠顽皮雷弹
        .moves = {MOVE_CHLOROBLAST, MOVE_ELECTRO_BALL, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH}, //叶绿爆震，电球，觉醒力量，伏特替换
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_2] = {
        .species = SPECIES_ELECTRODE_HISUI, //洗翠顽皮雷弹
        .moves = {MOVE_VOLT_SWITCH, MOVE_EXPLOSION, MOVE_THUNDER_WAVE, MOVE_TAUNT}, //伏特替换，大爆炸，电磁波，挑衅
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_3] = {
        .species = SPECIES_ELECTRODE_HISUI, //洗翠顽皮雷弹
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_REFLECT}, //伏特替换，电磁波，光墙，反射壁
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ELECTRODE_HISUI_4] = {
        .species = SPECIES_ELECTRODE_HISUI, //洗翠顽皮雷弹
        .moves = {MOVE_EXPLOSION, MOVE_TAUNT, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //大爆炸，挑衅，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EMBOAR_1] = {
        .species = SPECIES_EMBOAR, //炎武王
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH}, //闪焰冲锋，蛮力，疯狂伏特，突袭
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EMBOAR_2] = {
        .species = SPECIES_EMBOAR, //炎武王
        .moves = {MOVE_FIRE_BLAST, MOVE_SCALD, MOVE_SCORCHING_SANDS, MOVE_YAWN}, //大字爆炎，热水，热沙大地，哈欠
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EMBOAR_3] = {
        .species = SPECIES_EMBOAR, //炎武王
        .moves = {MOVE_SCALD, MOVE_SUBSTITUTE, MOVE_TAUNT, MOVE_PROTECT}, //热水，替身，挑衅，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_EMBOAR_4] = {
        .species = SPECIES_EMBOAR, //炎武王
        .moves = {MOVE_FLARE_BLITZ, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH}, //闪焰冲锋，臂锤，岩崩，突袭
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_EMOLGA_1] = {
        .species = SPECIES_EMOLGA, //电飞鼠
        .moves = {MOVE_WILD_CHARGE, MOVE_ACROBATICS, MOVE_KNOCK_OFF, MOVE_U_TURN}, //疯狂伏特，杂技，拍落，急速折返
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EMOLGA_2] = {
        .species = SPECIES_EMOLGA, //电飞鼠
        .moves = {MOVE_RISING_VOLTAGE, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_THUNDER_WAVE}, //电力上升，空气之刃，能量球，电磁波
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EMOLGA_3] = {
        .species = SPECIES_EMOLGA, //电飞鼠
        .moves = {MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH, MOVE_AIR_SLASH, MOVE_ENERGY_BALL}, //电力上升，伏特替换，空气之刃，能量球
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EMOLGA_4] = {
        .species = SPECIES_EMOLGA, //电飞鼠
        .moves = {MOVE_NUZZLE, MOVE_ENCORE, MOVE_HELPING_HAND, MOVE_PROTECT}, //蹭蹭脸颊，再来一次，帮助，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EMPOLEON_1] = {
        .species = SPECIES_EMPOLEON, //帝王拿波
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG}, //热水，拍落，剧毒，清除浓雾
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 76, 0, 0, 180),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_EMPOLEON_2] = {
        .species = SPECIES_EMPOLEON, //帝王拿波
        .moves = {MOVE_HYDRO_CANNON, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_YAWN}, //加农水炮，加农光炮，冰冻光束，哈欠
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EMPOLEON_3] = {
        .species = SPECIES_EMPOLEON, //帝王拿波
        .moves = {MOVE_WAVE_CRASH, MOVE_EARTHQUAKE, MOVE_DRILL_PECK, MOVE_SWORDS_DANCE}, //波动冲，地震，啄钻，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EMPOLEON_4] = {
        .species = SPECIES_EMPOLEON, //帝王拿波
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_GRASS_KNOT, MOVE_PROTECT}, //热水，冰冻之风，打草结，守住
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENAMORUS_INCARNATE_1] = {
        .species = SPECIES_ENAMORUS_INCARNATE, //眷恋云-化身形态
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_HAMMER_ARM}, //嬉闹，铁头，蛮力，臂锤
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ENAMORUS_INCARNATE_2] = {
        .species = SPECIES_ENAMORUS_INCARNATE, //眷恋云-化身形态
        .moves = {MOVE_SPRINGTIDE_STORM, MOVE_MYSTICAL_FIRE, MOVE_EARTH_POWER, MOVE_NASTY_PLOT}, //阳春风暴，魔法火焰，大地之力，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENAMORUS_THERIAN_1] = {
        .species = SPECIES_ENAMORUS_THERIAN, //眷恋云-灵兽形态
        .moves = {MOVE_MOONBLAST, MOVE_HIDDEN_POWER, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE}, //月亮之力，觉醒力量，大地之力，魔法火焰
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ENAMORUS_THERIAN_2] = {
        .species = SPECIES_ENAMORUS_THERIAN, //眷恋云-灵兽形态
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE, MOVE_PROTECT}, //魔法闪耀，大地之力，魔法火焰，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI, //炎帝
        .moves = {MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_EXTREME_SPEED}, //神圣之火，尖石攻击，铁头，神速
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI, //炎帝
        .moves = {MOVE_ERUPTION, MOVE_SACRED_FIRE, MOVE_EXTRASENSORY, MOVE_SNARL}, //喷火，神圣之火，神通力，大声咆哮
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI, //炎帝
        .moves = {MOVE_LAVA_PLUME, MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_REST}, //喷烟，磷火，冥想，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_ENTEI, //炎帝
        .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_SLEEP_TALK, MOVE_REST}, //喷射火焰，大声咆哮，梦话，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ESCAVALIER_1] = {
        .species = SPECIES_ESCAVALIER, //骑士蜗牛
        .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_DRILL_RUN, MOVE_KNOCK_OFF}, //超级角击，铁头，直冲钻，拍落
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESCAVALIER_2] = {
        .species = SPECIES_ESCAVALIER, //骑士蜗牛
        .moves = {MOVE_MEGAHORN, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE}, //超级角击，拍落，剑舞，替身
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESCAVALIER_3] = {
        .species = SPECIES_ESCAVALIER, //骑士蜗牛
        .moves = {MOVE_X_SCISSOR, MOVE_PURSUIT, MOVE_METAL_BURST, MOVE_SWAGGER}, //十字剪，追打，金属爆炸，虚张声势
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ESCAVALIER_4] = {
        .species = SPECIES_ESCAVALIER, //骑士蜗牛
        .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_RAZOR_SHELL}, //超级角击，铁头，近身战，贝壳刃
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ESPATHRA_1] = {
        .species = SPECIES_ESPATHRA, //超能艳鸵
        .moves = {MOVE_CALM_MIND, MOVE_EXPANDING_FORCE, MOVE_FEATHER_DANCE, MOVE_ROOST}, //冥想，广域战力，羽毛舞，羽栖
        .heldItem = ITEM_CLEAR_AMULET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ESPATHRA_2] = {
        .species = SPECIES_ESPATHRA, //超能艳鸵
        .moves = {MOVE_CALM_MIND, MOVE_EXPANDING_FORCE, MOVE_PROTECT, MOVE_SUBSTITUTE}, //冥想，广域战力，守住，替身
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 76, 0, 0, 180),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON, //太阳伊布
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_POWER_GEM}, //广域战力，暗影球，魔法闪耀，力量宝石
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON, //太阳伊布
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_MORNING_SUN}, //广域战力，暗影球，冥想，晨光
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON, //太阳伊布
        .moves = {MOVE_DREAM_EATER, MOVE_YAWN, MOVE_CALM_MIND, MOVE_PROTECT}, //食梦，哈欠，冥想，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON, //太阳伊布
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, //广域战力，魔法闪耀，暗影球，冥想
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL, //龙头地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}, //地震，铁头，岩崩，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL, //龙头地鼠
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_THROAT_CHOP, MOVE_ROCK_TOMB}, //地震，毒击，深渊突刺，岩石封锁
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXCADRILL_3] = {
        .species = SPECIES_EXCADRILL, //龙头地鼠
        .moves = {MOVE_DRILL_RUN, MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE}, //直冲钻，铁头，十字剪，岩崩
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXCADRILL_4] = {
        .species = SPECIES_EXCADRILL, //龙头地鼠
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE}, //十万马力，铁头，剑舞，岩崩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR, //椰蛋树
        .moves = {MOVE_ENERGY_BALL, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM}, //能量球，精神强念，暗影球，戏法空间
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR, //椰蛋树
        .moves = {MOVE_SOLAR_BEAM, MOVE_PSYSHOCK, MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER}, //日光束，精神冲击，大晴天，催眠粉
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR, //椰蛋树
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_CALM_MIND}, //终极吸取，剧毒，寄生种子，冥想
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR, //椰蛋树
        .moves = {MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_HIDDEN_POWER, MOVE_SYNTHESIS}, //日光束，精神强念，觉醒力量，光合作用
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_1] = {
        .species = SPECIES_EXEGGUTOR_ALOLA, //阿罗拉椰蛋树
        .moves = {MOVE_WOOD_HAMMER, MOVE_DRAGON_HAMMER, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //木槌，龙锤，地震，剑舞
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_2] = {
        .species = SPECIES_EXEGGUTOR_ALOLA, //阿罗拉椰蛋树
        .moves = {MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB}, //飞叶风暴，流星群，喷射火焰，污泥炸弹
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_3] = {
        .species = SPECIES_EXEGGUTOR_ALOLA, //阿罗拉椰蛋树
        .moves = {MOVE_FLAMETHROWER, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TRICK_ROOM}, //喷射火焰，寄生种子，催眠粉，戏法空间
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_4] = {
        .species = SPECIES_EXEGGUTOR_ALOLA, //阿罗拉椰蛋树
        .moves = {MOVE_POWER_WHIP, MOVE_DRAGON_HAMMER, MOVE_LEECH_SEED, MOVE_GRASSY_TERRAIN}, //强力鞭打，龙锤，寄生种子，青草场地
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD, //爆音怪
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_TAUNT}, //报恩，地震，冰冻拳，挑衅
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD, //爆音怪
        .moves = {MOVE_BOOMBURST, MOVE_FOCUS_BLAST, MOVE_FIRE_BLAST, MOVE_SURF}, //爆音波，真气弹，大字爆炎，冲浪
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD, //爆音怪
        .moves = {MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_TOXIC, MOVE_PROTECT}, //双倍奉还，蛮干，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD, //爆音怪
        .moves = {MOVE_HYPER_VOICE, MOVE_ICY_WIND, MOVE_TAUNT, MOVE_SUBSTITUTE}, //巨声，冰冻之风，挑衅，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FALINKS_1] = {
        .species = SPECIES_FALINKS, //列阵兵
        .moves = {MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_ZEN_HEADBUTT, MOVE_SWORDS_DANCE}, //近身战，深渊突刺，意念头锤，剑舞
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FALINKS_2] = {
        .species = SPECIES_FALINKS, //列阵兵
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_NO_RETREAT}, //近身战，铁头，岩崩，背水一战
        .heldItem = ITEM_SHED_SHELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FALINKS_3] = {
        .species = SPECIES_FALINKS, //列阵兵
        .moves = {MOVE_REVERSAL, MOVE_THROAT_CHOP, MOVE_NO_RETREAT, MOVE_ENDURE}, //绝处逢生，深渊突刺，背水一战，挺住
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_FALINKS_4] = {
        .species = SPECIES_FALINKS, //列阵兵
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_NO_RETREAT, MOVE_PROTECT}, //近身战，岩崩，背水一战，守住
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_FARFETCHD_1] = {
        .species = SPECIES_FARFETCHD, //大葱鸭
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}, //勇鸟猛攻，舍身冲撞，近身战，剑舞
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FARFETCHD_2] = {
        .species = SPECIES_FARFETCHD, //大葱鸭
        .moves = {MOVE_BRAVE_BIRD, MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_SLASH}, //勇鸟猛攻，叶刃，暗袭要害，劈开
        .heldItem = ITEM_LEEK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FARFETCHD_3] = {
        .species = SPECIES_FARFETCHD, //大葱鸭
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_CLOSE_COMBAT, MOVE_QUICK_ATTACK, MOVE_TAILWIND}, //双翼，近身战，电光一闪，顺风
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FARFETCHD_4] = {
        .species = SPECIES_FARFETCHD, //大葱鸭
        .moves = {MOVE_BRAVE_BIRD, MOVE_SOLAR_BLADE, MOVE_METEOR_ASSAULT, MOVE_TAILWIND}, //勇鸟猛攻，日光刃，流星突击，顺风
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FARIGIRAF_1] = {
        .species = SPECIES_FARIGIRAF, //奇麒麟
        .moves = {MOVE_HELPING_HAND, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_DOUBLE_KICK}, //帮助，戏法空间，精神强念，二连踢
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(196, 0, 168, 0, 4, 140),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_FARIGIRAF_2] = {
        .species = SPECIES_FARIGIRAF, //奇麒麟
        .moves = {MOVE_HELPING_HAND, MOVE_TRICK_ROOM, MOVE_PROTECT, MOVE_HYPER_VOICE}, //帮助，戏法空间，守住，巨声
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW, //大嘴雀
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_U_TURN}, //舍身冲撞，啄钻，直冲钻，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW, //大嘴雀
        .moves = {MOVE_BEAK_BLAST, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_ROOST}, //鸟嘴加农炮，直冲钻，聚气，羽栖
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_FEAROW, //大嘴雀
        .moves = {MOVE_DRILL_PECK, MOVE_U_TURN, MOVE_DEFOG, MOVE_ROOST}, //啄钻，急速折返，清除浓雾，羽栖
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_FEAROW, //大嘴雀
        .moves = {MOVE_BEAK_BLAST, MOVE_TAILWIND, MOVE_ROOST, MOVE_PROTECT}, //鸟嘴加农炮，顺风，羽栖，守住
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR, //大力鳄
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CRUNCH, MOVE_DRAGON_DANCE}, //水流裂破，冰冻拳，咬碎，龙之舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR, //大力鳄
        .moves = {MOVE_AQUA_TAIL, MOVE_SUPERPOWER, MOVE_SCALE_SHOT, MOVE_SWORDS_DANCE}, //水流尾，蛮力，鳞射，剑舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR, //大力鳄
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_DRAGON_DANCE}, //水流裂破，地震，双倍奉还，龙之舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR, //大力鳄
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_SUPERPOWER, MOVE_PROTECT}, //水流裂破，冰冻拳，蛮力，守住
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FERROTHORN_1] = {
        .species = SPECIES_FERROTHORN, //坚果哑铃
        .moves = {MOVE_POWER_WHIP, MOVE_GYRO_BALL, MOVE_INGRAIN, MOVE_CURSE}, //强力鞭打，陀螺球，扎根，诅咒
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FERROTHORN_2] = {
        .species = SPECIES_FERROTHORN, //坚果哑铃
        .moves = {MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //拍落，寄生种子，隐形岩，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_FERROTHORN_3] = {
        .species = SPECIES_FERROTHORN, //坚果哑铃
        .moves = {MOVE_GYRO_BALL, MOVE_PAYBACK, MOVE_CURSE, MOVE_REST}, //陀螺球，以牙还牙，诅咒，睡觉
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_FERROTHORN_4] = {
        .species = SPECIES_FERROTHORN, //坚果哑铃
        .moves = {MOVE_GYRO_BALL, MOVE_POWER_WHIP, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //陀螺球，强力鞭打，隐形岩，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 88, 88, 0, 0, 80),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_FEZANDIPITI_1] = {
        .species = SPECIES_FEZANDIPITI, //吉雉鸡
        .moves = {MOVE_GUNK_SHOT, MOVE_PLAY_ROUGH, MOVE_U_TURN, MOVE_DUAL_WINGBEAT}, //垃圾射击，嬉闹，急速折返，双翼
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEZANDIPITI_2] = {
        .species = SPECIES_FEZANDIPITI, //吉雉鸡
        .moves = {MOVE_GUNK_SHOT, MOVE_PLAY_ROUGH, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK}, //垃圾射击，嬉闹，二连踢，电光一闪
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAMIGO_1] = {
        .species = SPECIES_FLAMIGO, //缠红鹤
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SUBSTITUTE, MOVE_ACROBATICS, MOVE_BULK_UP}, //近身战，替身，杂技，健美
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAMIGO_2] = {
        .species = SPECIES_FLAMIGO, //缠红鹤
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SUBSTITUTE, MOVE_TAUNT, MOVE_BRAVE_BIRD}, //近身战，替身，挑衅，勇鸟猛攻
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAPPLE_1] = {
        .species = SPECIES_FLAPPLE, //苹裹龙
        .moves = {MOVE_DRACO_METEOR, MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_U_TURN}, //流星群，万有引力，突袭，急速折返
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAPPLE_2] = {
        .species = SPECIES_FLAPPLE, //苹裹龙
        .moves = {MOVE_OUTRAGE, MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_DRAGON_DANCE}, //逆鳞，万有引力，突袭，龙之舞
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAPPLE_3] = {
        .species = SPECIES_FLAPPLE, //苹裹龙
        .moves = {MOVE_OUTRAGE, MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_DRAGON_DANCE}, //逆鳞，万有引力，突袭，龙之舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAPPLE_4] = {
        .species = SPECIES_FLAPPLE, //苹裹龙
        .moves = {MOVE_GRAV_APPLE, MOVE_SUCKER_PUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT}, //万有引力，突袭，龙之舞，守住
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON, //火伊布
        .moves = {MOVE_SACRED_FIRE, MOVE_SUPERPOWER, MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK}, //神圣之火，蛮力，舍身冲撞，电光一闪
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON, //火伊布
        .moves = {MOVE_SACRED_FIRE, MOVE_SUPERPOWER, MOVE_FACADE, MOVE_QUICK_ATTACK}, //神圣之火，蛮力，硬撑，电光一闪
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON, //火伊布
        .moves = {MOVE_LAVA_PLUME, MOVE_WISH, MOVE_HEAL_BELL, MOVE_SUBSTITUTE}, //喷烟，祈愿，治愈铃声，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON, //火伊布
        .moves = {MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_YAWN, MOVE_HELPING_HAND}, //火焰旋涡，磷火，哈欠，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLOATZEL_1] = {
        .species = SPECIES_FLOATZEL, //浮潜鼬
        .moves = {MOVE_WATER_PULSE, MOVE_MUD_SHOT, MOVE_ICY_WIND, MOVE_HIDDEN_POWER}, //水之波动，泥巴射击，冰冻之风，觉醒力量
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLOATZEL_2] = {
        .species = SPECIES_FLOATZEL, //浮潜鼬
        .moves = {MOVE_AQUA_JET, MOVE_ROCK_TOMB, MOVE_TAIL_SLAP, MOVE_BULK_UP}, //水流喷射，岩石封锁，扫尾拍打，健美
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLOATZEL_3] = {
        .species = SPECIES_FLOATZEL, //浮潜鼬
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK, MOVE_FLIP_TURN}, //水流裂破，冰冻拳，劈瓦，快速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLOATZEL_4] = {
        .species = SPECIES_FLOATZEL, //浮潜鼬
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_PROTECT}, //水流裂破，冰冻拳，真气拳，守住
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLOETTE_ETERNAL_1] = {
        .species = SPECIES_FLOETTE_ETERNAL, //花叶蒂ETERNAL
        .moves = {MOVE_LIGHT_OF_RUIN, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_HIDDEN_POWER}, //破灭之光，终极吸取，精神强念，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLOETTE_ETERNAL_2] = {
        .species = SPECIES_FLOETTE_ETERNAL, //花叶蒂ETERNAL
        .moves = {MOVE_LIGHT_OF_RUIN, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //破灭之光，剧毒，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLOETTE_ETERNAL_3] = {
        .species = SPECIES_FLOETTE_ETERNAL, //花叶蒂ETERNAL
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HELPING_HAND, MOVE_SYNTHESIS, MOVE_SAFEGUARD}, //魔法闪耀，帮助，光合作用，神秘守护
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_BLUE] = {
        .species = SPECIES_FLORGES_BLUE, //花洁夫人BLUE
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_SYNTHESIS, MOVE_CALM_MIND}, //月亮之力，精神强念，光合作用，冥想
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_ORANGE] = {
        .species = SPECIES_FLORGES_ORANGE, //花洁夫人ORANGE
        .moves = {MOVE_MOONBLAST, MOVE_HELPING_HAND, MOVE_SYNTHESIS, MOVE_DEFOG}, //月亮之力，帮助，光合作用，清除浓雾
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_RED] = {
        .species = SPECIES_FLORGES_RED, //花洁夫人-红花
        .moves = {MOVE_MOONBLAST, MOVE_DEFOG, MOVE_SYNTHESIS, MOVE_AROMATHERAPY}, //月亮之力，清除浓雾，光合作用，芳香治疗
        .heldItem = ITEM_BABIRI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FLORGES_WHITE] = {
        .species = SPECIES_FLORGES_WHITE, //花洁夫人WHITE
        .moves = {MOVE_MOONBLAST, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //月亮之力，剧毒，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLORGES_YELLOW] = {
        .species = SPECIES_FLORGES_YELLOW, //花洁夫人YELLOW
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HELPING_HAND, MOVE_SYNTHESIS, MOVE_TOXIC}, //魔法闪耀，帮助，光合作用，剧毒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON, //沙漠蜻蜓
        .moves = {MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE}, //鳞射，地震，铁尾，龙之舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON, //沙漠蜻蜓
        .moves = {MOVE_DRAGON_RUSH, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_U_TURN}, //龙之俯冲，地震，咬碎，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON, //沙漠蜻蜓
        .moves = {MOVE_CLANGING_SCALES, MOVE_EARTH_POWER, MOVE_BOOMBURST, MOVE_U_TURN}, //鳞片噪音，大地之力，爆音波，急速折返
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON, //沙漠蜻蜓
        .moves = {MOVE_CLANGING_SCALES, MOVE_EARTHQUAKE, MOVE_TAILWIND, MOVE_PROTECT}, //鳞片噪音，地震，顺风，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS, //佛烈托斯
        .moves = {MOVE_GYRO_BALL, MOVE_VOLT_SWITCH, MOVE_STEALTH_ROCK, MOVE_SPIKES}, //陀螺球，伏特替换，隐形岩，撒菱
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS, //佛烈托斯
        .moves = {MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //陀螺球，隐形岩，撒菱，毒菱
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_FORRETRESS, //佛烈托斯
        .moves = {MOVE_GYRO_BALL, MOVE_DRILL_RUN, MOVE_EXPLOSION, MOVE_POWER_TRICK}, //陀螺球，直冲钻，大爆炸，力量戏法
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_FORRETRESS, //佛烈托斯
        .moves = {MOVE_RAPID_SPIN, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_SPIKES}, //高速旋转，扑击，隐形岩，撒菱
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FROSLASS_1] = {
        .species = SPECIES_FROSLASS, //雪妖女
        .moves = {MOVE_POLTERGEIST, MOVE_TRIPLE_AXEL, MOVE_WAKE_UP_SLAP, MOVE_SUCKER_PUNCH}, //灵骚，三旋击，唤醒巴掌，突袭
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FROSLASS_2] = {
        .species = SPECIES_FROSLASS, //雪妖女
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_SPIKES}, //祸不单行，磷火，挑衅，撒菱
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSLASS_3] = {
        .species = SPECIES_FROSLASS, //雪妖女
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_SPIKES}, //冰冻光束，暗影球，磷火，撒菱
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSLASS_4] = {
        .species = SPECIES_FROSLASS, //雪妖女
        .moves = {MOVE_ICY_WIND, MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_DESTINY_BOND}, //冰冻之风，电磁波，撒菱，同命
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSLASS_5] = {
        .species = SPECIES_FROSLASS, //雪妖女
        .moves = {MOVE_BLIZZARD, MOVE_SUBSTITUTE, MOVE_THUNDER_WAVE, MOVE_AURORA_VEIL}, //暴风雪，替身，电磁波，极光幕
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSMOTH_1] = {
        .species = SPECIES_FROSMOTH, //雪绒蛾
        .moves = {MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE}, //冰冻光束，虫鸣，终极吸取，蝶舞
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSMOTH_2] = {
        .species = SPECIES_FROSMOTH, //雪绒蛾
        .moves = {MOVE_ICE_BEAM, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE}, //冰冻光束，暴风，觉醒力量，蝶舞
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FROSMOTH_3] = {
        .species = SPECIES_FROSMOTH, //雪绒蛾
        .moves = {MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_QUIVER_DANCE}, //冰冻光束，虫鸣，魔法闪耀，蝶舞
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FROSMOTH_4] = {
        .species = SPECIES_FROSMOTH, //雪绒蛾
        .moves = {MOVE_ICY_WIND, MOVE_STRUGGLE_BUG, MOVE_TAILWIND, MOVE_WIDE_GUARD}, //冰冻之风，虫之抵抗，顺风，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FURFROU_NATURAL_1] = {
        .species = SPECIES_FURFROU_NATURAL, //多丽米亚
        .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_HIGH_HORSEPOWER, MOVE_WORK_UP}, //报恩，突袭，十万马力，自我激励
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FURFROU_NATURAL_2] = {
        .species = SPECIES_FURFROU_NATURAL, //多丽米亚
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_ROAR}, //十万马力，剧毒，影子分身，吼叫
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_FURFROU_NATURAL_3] = {
        .species = SPECIES_FURFROU_NATURAL, //多丽米亚
        .moves = {MOVE_SNARL, MOVE_TOXIC, MOVE_SWAGGER, MOVE_COTTON_GUARD}, //大声咆哮，剧毒，虚张声势，棉花防守
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FURFROU_NATURAL_4] = {
        .species = SPECIES_FURFROU_NATURAL, //多丽米亚
        .moves = {MOVE_HYPER_VOICE, MOVE_SNARL, MOVE_TOXIC, MOVE_HELPING_HAND}, //巨声，大声咆哮，剧毒，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET, //大尾立
        .moves = {MOVE_EXTREME_SPEED, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_AQUA_TAIL}, //神速，拍落，急速折返，水流尾
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET, //大尾立
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TRICK}, //舍身冲撞，拍落，急速折返，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FURRET_3] = {
        .species = SPECIES_FURRET, //大尾立
        .moves = {MOVE_SUPER_FANG, MOVE_KNOCK_OFF, MOVE_SWAGGER, MOVE_SUBSTITUTE}, //愤怒门牙，拍落，虚张声势，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FURRET_4] = {
        .species = SPECIES_FURRET, //大尾立
        .moves = {MOVE_SUPER_FANG, MOVE_KNOCK_OFF, MOVE_EXTREME_SPEED, MOVE_HELPING_HAND}, //愤怒门牙，拍落，神速，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALLADE_1] = {
        .species = SPECIES_GALLADE, //艾路雷朵
        .moves = {MOVE_PSYCHO_CUT, MOVE_CLOSE_COMBAT, MOVE_NIGHT_SLASH, MOVE_LEAF_BLADE}, //精神利刃，近身战，暗袭要害，叶刃
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALLADE_2] = {
        .species = SPECIES_GALLADE, //艾路雷朵
        .moves = {MOVE_PSYCHO_CUT, MOVE_DRAIN_PUNCH, MOVE_SHADOW_SNEAK, MOVE_BULK_UP}, //精神利刃，吸取拳，影子偷袭，健美
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GALLADE_3] = {
        .species = SPECIES_GALLADE, //艾路雷朵
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //意念头锤，吸取拳，拍落，剑舞
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALLADE_4] = {
        .species = SPECIES_GALLADE, //艾路雷朵
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}, //意念头锤，近身战，影子偷袭，剑舞
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALLADE_5] = {
        .species = SPECIES_GALLADE, //艾路雷朵
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_QUICK_GUARD, MOVE_DESTINY_BOND}, //岩崩，近身战，快速防守，同命
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALVANTULA_1] = {
        .species = SPECIES_GALVANTULA, //电蜘蛛
        .moves = {MOVE_X_SCISSOR, MOVE_WILD_CHARGE, MOVE_CROSS_POISON, MOVE_STICKY_WEB}, //十字剪，疯狂伏特，十字毒刃，黏黏网
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GALVANTULA_2] = {
        .species = SPECIES_GALVANTULA, //电蜘蛛
        .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB}, //打雷，虫鸣，能量球，黏黏网
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GALVANTULA_3] = {
        .species = SPECIES_GALVANTULA, //电蜘蛛
        .moves = {MOVE_ELECTRO_BALL, MOVE_BUG_BUZZ, MOVE_AGILITY, MOVE_THUNDER_WAVE}, //电球，虫鸣，高速移动，电磁波
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GALVANTULA_4] = {
        .species = SPECIES_GALVANTULA, //电蜘蛛
        .moves = {MOVE_DISCHARGE, MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_PROTECT}, //放电，虫鸣，电磁波，守住
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARBODOR_1] = {
        .species = SPECIES_GARBODOR, //灰尘山
        .moves = {MOVE_GUNK_SHOT, MOVE_BODY_SLAM, MOVE_DRAIN_PUNCH, MOVE_EXPLOSION}, //垃圾射击，泰山压顶，吸取拳，大爆炸
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GARBODOR_2] = {
        .species = SPECIES_GARBODOR, //灰尘山
        .moves = {MOVE_BODY_SLAM, MOVE_PAIN_SPLIT, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //泰山压顶，分担痛楚，撒菱，毒菱
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GARBODOR_3] = {
        .species = SPECIES_GARBODOR, //灰尘山
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_INFESTATION, MOVE_PROTECT}, //毒液冲击，剧毒，纠缠不休，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARBODOR_4] = {
        .species = SPECIES_GARBODOR, //灰尘山
        .moves = {MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_HAZE, MOVE_PROTECT}, //垃圾射击，吸取拳，黑雾，守住
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP, //烈咬陆鲨
        .moves = {MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SWORDS_DANCE}, //鳞射，地震，咬碎，剑舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP, //烈咬陆鲨
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_SCALE_SHOT}, //地震，岩崩，铁头，鳞射
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GARCHOMP_3] = {
        .species = SPECIES_GARCHOMP, //烈咬陆鲨
        .moves = {MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_STONE_EDGE, MOVE_IRON_HEAD}, //地震，逆鳞，尖石攻击，铁头
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARCHOMP_4] = {
        .species = SPECIES_GARCHOMP, //烈咬陆鲨
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_STEALTH_ROCK}, //龙尾，地震，大字爆炎，隐形岩
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(240, 0, 176, 92, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GARCHOMP_5] = {
        .species = SPECIES_GARCHOMP, //烈咬陆鲨
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_PROTECT}, //地震，岩崩，剑舞，守住
        .heldItem = ITEM_GARCHOMPITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR, //沙奈朵
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_AURA_SPHERE, MOVE_ICE_BEAM}, //精神强念，月亮之力，波导弹，冰冻光束
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR, //沙奈朵
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_WILL_O_WISP}, //广域战力，巨声，魔法火焰，磷火
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR, //沙奈朵
        .moves = {MOVE_STORED_POWER, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM}, //辅助力量，巨声，冥想，影子分身
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR, //沙奈朵
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_AURA_SPHERE, MOVE_PROTECT}, //广域战力，巨声，波导弹，守住
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARGANACL_1] = {
        .species = SPECIES_GARGANACL, //盐石巨灵
        .moves = {MOVE_SALT_CURE, MOVE_PROTECT, MOVE_RECOVER, MOVE_WIDE_GUARD}, //盐腌，守住，自我再生，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GARGANACL_2] = {
        .species = SPECIES_GARGANACL, //盐石巨灵
        .moves = {MOVE_SALT_CURE, MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_CURSE}, //盐腌，守住，铁壁，诅咒
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GASTRODON_WEST_1] = {
        .species = SPECIES_GASTRODON_WEST, //海兔兽-西海
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_RECOVER}, //热水，地震，剧毒，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GASTRODON_WEST_2] = {
        .species = SPECIES_GASTRODON_WEST, //海兔兽-西海
        .moves = {MOVE_SURF, MOVE_SLUDGE_WAVE, MOVE_COUNTER, MOVE_RAIN_DANCE}, //冲浪，污泥波，双倍奉还，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GASTRODON_WEST_3] = {
        .species = SPECIES_GASTRODON_WEST, //海兔兽-西海
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_RECOVER}, //攀瀑，地震，诅咒，自我再生
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GASTRODON_WEST_4] = {
        .species = SPECIES_GASTRODON_WEST, //海兔兽-西海
        .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_CLEAR_SMOG, MOVE_RECOVER}, //大地之力，冰冻光束，清除之烟，自我再生
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(128, 0, 148, 0, 100, 132),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR_GMAX, //耿鬼
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT}, //暗影球，污泥波，真气弹，十万伏特
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR_GMAX, //耿鬼
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}, //暗影球，污泥波，真气弹，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR, //耿鬼
        .moves = {MOVE_SLUDGE_WAVE, MOVE_PERISH_SONG, MOVE_TAUNT, MOVE_PROTECT}, //污泥波，终焉之歌，挑衅，守住
        .heldItem = ITEM_GENGARITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR, //耿鬼
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_SUBSTITUTE, MOVE_PROTECT}, //暗影球，污泥炸弹，替身，守住
        .heldItem = ITEM_GENGARITE,
        .ev = TRAINER_PARTY_EVS(28, 0, 36, 252, 188, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GHOLDENGO_1] = {
        .species = SPECIES_GHOLDENGO, //赛富豪
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST}, //淘金潮，暗影球，魔法闪耀，真气弹
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GHOLDENGO_2] = {
        .species = SPECIES_GHOLDENGO, //赛富豪
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_THUNDERBOLT}, //淘金潮，暗影球，力量宝石，十万伏特
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GIGALITH_1] = {
        .species = SPECIES_GIGALITH, //庞岩怪
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK}, //尖石攻击，地震，大爆炸，隐形岩
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIGALITH_2] = {
        .species = SPECIES_GIGALITH, //庞岩怪
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLDOZE, MOVE_CURSE, MOVE_GRAVITY}, //岩石爆击，重踏，诅咒，重力
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GIGALITH_3] = {
        .species = SPECIES_GIGALITH, //庞岩怪
        .moves = {MOVE_ROCK_BLAST, MOVE_EXPLOSION, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //岩石爆击，大爆炸，剧毒，隐形岩
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GIGALITH_4] = {
        .species = SPECIES_GIGALITH, //庞岩怪
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD, MOVE_PROTECT}, //岩崩，地震，广域防守，守住
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG, //麒麟奇
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}, //巨声，精神冲击，暗影球，诡计
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG, //麒麟奇
        .moves = {MOVE_RETURN, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_TRICK}, //报恩，精神之牙，咬碎，戏法
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GIRAFARIG_3] = {
        .species = SPECIES_GIRAFARIG, //麒麟奇
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT, MOVE_PROTECT, MOVE_BATON_PASS}, //魔法闪耀，诡计，守住，接棒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GIRAFARIG_4] = {
        .species = SPECIES_GIRAFARIG, //麒麟奇
        .moves = {MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_PROTECT}, //巨声，魔法闪耀，冥想，守住
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GLACEON_1] = {
        .species = SPECIES_GLACEON, //冰伊布
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER}, //冰冻光束，冷冻干燥，暗影球，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLACEON_2] = {
        .species = SPECIES_GLACEON, //冰伊布
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_CELEBRATE}, //冰冻光束，暗影球，觉醒力量，庆祝
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLACEON_3] = {
        .species = SPECIES_GLACEON, //冰伊布
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER}, //冰冻光束，暗影球，信号光束，觉醒力量
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLACEON_4] = {
        .species = SPECIES_GLACEON, //冰伊布
        .moves = {MOVE_GLACIATE, MOVE_HEAL_BELL, MOVE_HELPING_HAND, MOVE_PROTECT}, //冰封世界，治愈铃声，帮助，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GLACEON_5] = {
        .species = SPECIES_GLACEON, //冰伊布
        .moves = {MOVE_BLIZZARD, MOVE_YAWN, MOVE_AURORA_VEIL, MOVE_SUBSTITUTE}, //暴风雪，哈欠，极光幕，替身
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE, //冰鬼护
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_WATER_PULSE}, //冰冻光束，冷冻干燥，暗影球，水之波动
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE, //冰鬼护
        .moves = {MOVE_FROST_BREATH, MOVE_SHEER_COLD, MOVE_SPIKES, MOVE_SUBSTITUTE}, //冰息，绝对零度，撒菱，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 0, 0, 96),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GLALIE, //冰鬼护
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_SPIKES}, //舍身冲撞，地震，大爆炸，撒菱
        .heldItem = ITEM_GLALITITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GLALIE, //冰鬼护
        .moves = {MOVE_HYPER_VOICE, MOVE_ICY_WIND, MOVE_DARK_PULSE, MOVE_PROTECT}, //巨声，冰冻之风，恶之波动，守住
        .heldItem = ITEM_GLALITITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLIGAR, //天蝎
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_ROOST}, //地震，剧毒，隐形岩，羽栖
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 56, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLIGAR, //天蝎
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_SANDSTORM, MOVE_ROOST}, //地震，拍落，沙暴，羽栖
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 56, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLIGAR_3] = {
        .species = SPECIES_GLIGAR, //天蝎
        .moves = {MOVE_EARTHQUAKE, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_ROOST}, //地震，高速移动，接棒，羽栖
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 56, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLIGAR_4] = {
        .species = SPECIES_GLIGAR, //天蝎
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT}, //拍落，剧毒，羽栖，守住
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GLIMMORA_1] = {
        .species = SPECIES_GLIMMORA, //晶光花
        .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_CONFUSE_RAY, MOVE_SUBSTITUTE}, //剧毒，毒液冲击，奇异之光，替身
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GLIMMORA_2] = {
        .species = SPECIES_GLIMMORA, //晶光花
        .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER}, //剧毒，毒液冲击，污泥波，大地之力
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(244, 0, 0, 12, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GLISCOR_1] = {
        .species = SPECIES_GLISCOR, //天蝎王
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_ROOST}, //地震，拍落，隐形岩，羽栖
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(244, 0, 44, 152, 0, 68),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLISCOR_2] = {
        .species = SPECIES_GLISCOR, //天蝎王
        .moves = {MOVE_EARTHQUAKE, MOVE_FACADE, MOVE_SWORDS_DANCE, MOVE_ROOST}, //地震，硬撑，剑舞，羽栖
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(184, 252, 0, 72, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLISCOR_3] = {
        .species = SPECIES_GLISCOR, //天蝎王
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_PROTECT}, //地震，剧毒，替身，守住
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(212, 4, 36, 4, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GLISCOR_4] = {
        .species = SPECIES_GLISCOR, //天蝎王
        .moves = {MOVE_EARTHQUAKE, MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_ROOST}, //地震，杂技，顺风，羽栖
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 124, 0, 0, 0, 132),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOGOAT_1] = {
        .species = SPECIES_GOGOAT, //坐骑山羊
        .moves = {MOVE_GRASSY_GLIDE, MOVE_EARTHQUAKE, MOVE_WILD_CHARGE, MOVE_BRICK_BREAK}, //青草滑梯，地震，疯狂伏特，劈瓦
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOGOAT_2] = {
        .species = SPECIES_GOGOAT, //坐骑山羊
        .moves = {MOVE_GRASSY_GLIDE, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_MILK_DRINK}, //青草滑梯，寄生种子，剧毒，喝牛奶
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOGOAT_3] = {
        .species = SPECIES_GOGOAT, //坐骑山羊
        .moves = {MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_BULK_UP, MOVE_SUBSTITUTE}, //木角，岩崩，健美，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOGOAT_4] = {
        .species = SPECIES_GOGOAT, //坐骑山羊
        .moves = {MOVE_HORN_LEECH, MOVE_GRASSY_GLIDE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}, //木角，青草滑梯，地震，岩崩
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK, //哥达鸭
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP, MOVE_FLIP_TURN}, //水流裂破，冰冻拳，十字劈，快速折返
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK, //哥达鸭
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_POWER_GEM, MOVE_PROTECT}, //水炮，冰冻光束，力量宝石，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK, //哥达鸭
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_POWER_GEM}, //水炮，冰冻光束，真气弹，力量宝石
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK, //哥达鸭
        .moves = {MOVE_AQUA_JET, MOVE_ICY_WIND, MOVE_YAWN, MOVE_PROTECT}, //水流喷射，冰冻之风，哈欠，守住
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM, //隆隆岩
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_ICE_PUNCH}, //尖石攻击，地震，重磅冲撞，冰冻拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM, //隆隆岩
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_AUTOTOMIZE}, //尖石攻击，地震，突袭，身体轻量化
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM, //隆隆岩
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //地震，剧毒，隐形岩，守住
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 32, 0, 0, 0, 224),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM, //隆隆岩
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_WIDE_GUARD}, //地震，大爆炸，隐形岩，广域防守
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_ALOLA_1] = {
        .species = SPECIES_GOLEM_ALOLA, //阿罗拉隆隆岩
        .moves = {MOVE_SUPERCELL_SLAM, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH}, //闪电强袭，尖石攻击，地震，冰冻拳
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLEM_ALOLA_2] = {
        .species = SPECIES_GOLEM_ALOLA, //阿罗拉隆隆岩
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_ROCK_POLISH}, //尖石攻击，地震，大爆炸，岩石打磨
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLEM_ALOLA_3] = {
        .species = SPECIES_GOLEM_ALOLA, //阿罗拉隆隆岩
        .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_BULLDOZE, MOVE_SELFDESTRUCT}, //岩崩，舍身冲撞，重踏，大爆炸
        .heldItem = ITEM_ELECTRIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOLEM_ALOLA_4] = {
        .species = SPECIES_GOLEM_ALOLA, //阿罗拉隆隆岩
        .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_SUPERCELL_SLAM, MOVE_WIDE_GUARD}, //岩崩，舍身冲撞，闪电强袭，广域防守
        .heldItem = ITEM_ELECTRIC_GEM,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GOLISOPOD_1] = {
        .species = SPECIES_GOLISOPOD, //具甲武者
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, //水流裂破，水流喷射，突袭，剑舞
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLISOPOD_2] = {
        .species = SPECIES_GOLISOPOD, //具甲武者
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH}, //迎头一击，水流裂破，毒击，突袭
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLISOPOD_3] = {
        .species = SPECIES_GOLISOPOD, //具甲武者
        .moves = {MOVE_SUCKER_PUNCH, MOVE_PAIN_SPLIT, MOVE_TOXIC, MOVE_SPIKES}, //突袭，分担痛楚，剧毒，撒菱
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GOLISOPOD_4] = {
        .species = SPECIES_GOLISOPOD, //具甲武者
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_ROCK_SLIDE, MOVE_AQUA_JET, MOVE_WIDE_GUARD}, //迎头一击，岩崩，水流喷射，广域防守
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLURK_1] = {
        .species = SPECIES_GOLURK, //泥偶巨人
        .moves = {MOVE_POLTERGEIST, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK}, //灵骚，吸取拳，冰冻拳，隐形岩
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 0, 128),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLURK_2] = {
        .species = SPECIES_GOLURK, //泥偶巨人
        .moves = {MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_DYNAMIC_PUNCH, MOVE_ICE_PUNCH}, //灵骚，地震，爆裂拳，冰冻拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLURK_3] = {
        .species = SPECIES_GOLURK, //泥偶巨人
        .moves = {MOVE_DRAIN_PUNCH, MOVE_SHADOW_PUNCH, MOVE_GYRO_BALL, MOVE_CURSE}, //吸取拳，暗影拳，陀螺球，诅咒
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GOLURK_4] = {
        .species = SPECIES_GOLURK, //泥偶巨人
        .moves = {MOVE_POLTERGEIST, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //灵骚，十万马力，岩崩，守住
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLURK_5] = {
        .species = SPECIES_GOLURK, //泥偶巨人
        .moves = {MOVE_POLTERGEIST, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //灵骚，十万马力，岩崩，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GOODRA_1] = {
        .species = SPECIES_GOODRA, //黏美龙
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT}, //流星群，大字爆炎，污泥波，十万伏特
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOODRA_2] = {
        .species = SPECIES_GOODRA, //黏美龙
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_BODY_SLAM}, //逆鳞，地震，强力鞭打，泰山压顶
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOODRA_3] = {
        .species = SPECIES_GOODRA, //黏美龙
        .moves = {MOVE_SURF, MOVE_INFESTATION, MOVE_TOXIC, MOVE_RAIN_DANCE}, //冲浪，纠缠不休，剧毒，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOODRA_4] = {
        .species = SPECIES_GOODRA, //黏美龙
        .moves = {MOVE_MUDDY_WATER, MOVE_RAIN_DANCE, MOVE_TOXIC, MOVE_REST}, //浊流，求雨，剧毒，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOODRA_HISUI_1] = {
        .species = SPECIES_GOODRA_HISUI, //洗翠黏美龙
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_THUNDER}, //流星群，水炮，大字爆炎，打雷
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOODRA_HISUI_2] = {
        .species = SPECIES_GOODRA_HISUI, //洗翠黏美龙
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_LIFE_DEW}, //扑击，剧毒，铁壁，生命水滴
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOODRA_HISUI_3] = {
        .species = SPECIES_GOODRA_HISUI, //洗翠黏美龙
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_CURSE}, //逆鳞，地震，强力鞭打，诅咒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GOODRA_HISUI_4] = {
        .species = SPECIES_GOODRA_HISUI, //洗翠黏美龙
        .moves = {MOVE_BREAKING_SWIPE, MOVE_COUNTER, MOVE_LIFE_DEW, MOVE_PROTECT}, //广域破坏，双倍奉还，生命水滴，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS, //樱花鱼
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_SHELL_SMASH}, //水炮，冰冻光束，能量球，破壳
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS, //樱花鱼
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SHELL_SMASH}, //冲浪，精神强念，冰冻光束，破壳
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOREBYSS_3] = {
        .species = SPECIES_GOREBYSS, //樱花鱼
        .moves = {MOVE_CLAMP, MOVE_COIL, MOVE_AQUA_RING, MOVE_BATON_PASS}, //贝壳夹击，盘蜷，水流环，接棒
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOREBYSS_4] = {
        .species = SPECIES_GOREBYSS, //樱花鱼
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_REST, MOVE_RAIN_DANCE}, //浊流，冰冻之风，睡觉，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GOTHITELLE_1] = {
        .species = SPECIES_GOTHITELLE, //哥德小姐
        .moves = {MOVE_PSYSHOCK, MOVE_MIRROR_COAT, MOVE_MIRACLE_EYE, MOVE_TRICK_ROOM}, //精神冲击，镜面反射，奇迹之眼，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GOTHITELLE_2] = {
        .species = SPECIES_GOTHITELLE, //哥德小姐
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM}, //精神强念，暗影球，十万伏特，戏法空间
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GOTHITELLE_3] = {
        .species = SPECIES_GOTHITELLE, //哥德小姐
        .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TRICK_ROOM}, //精神强念，反射壁，光墙，戏法空间
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GOTHITELLE_4] = {
        .species = SPECIES_GOTHITELLE, //哥德小姐
        .moves = {MOVE_PSYCHIC, MOVE_FAKE_OUT, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM}, //精神强念，击掌奇袭，治愈波动，戏法空间
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 84, 0, 0, 172),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GOURGEIST_AVERAGE] = {
        .species = SPECIES_GOURGEIST_AVERAGE, //南瓜怪人
        .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_EXPLOSION, MOVE_TRICK}, //强力鞭打，灵骚，大爆炸，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOURGEIST_LARGE] = {
        .species = SPECIES_GOURGEIST_LARGE, //南瓜怪人LARGE
        .moves = {MOVE_POWER_WHIP, MOVE_SPIRIT_SHACKLE, MOVE_ROCK_SLIDE, MOVE_SYNTHESIS}, //强力鞭打，缝影，岩崩，光合作用
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOURGEIST_SMALL] = {
        .species = SPECIES_GOURGEIST_SMALL, //南瓜怪人SMALL
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEECH_SEED, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE}, //缝影，寄生种子，磷火，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOURGEIST_SUPER] = {
        .species = SPECIES_GOURGEIST_SUPER, //南瓜怪人SUPER
        .moves = {MOVE_FOUL_PLAY, MOVE_LEECH_SEED, MOVE_WILL_O_WISP, MOVE_SYNTHESIS}, //欺诈，寄生种子，磷火，光合作用
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GRAFAIAI_1] = {
        .species = SPECIES_GRAFAIAI, //涂标客
        .moves = {MOVE_DOODLE, MOVE_TOXIC, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}, //描绘，剧毒，帮助，大晴天
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GRAFAIAI_2] = {
        .species = SPECIES_GRAFAIAI, //涂标客
        .moves = {MOVE_DOODLE, MOVE_TOXIC, MOVE_ENCORE, MOVE_FOUL_PLAY}, //描绘，剧毒，再来一次，欺诈
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL, //布鲁皇
        .moves = {MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ICE_FANG}, //嬉闹，地震，咬碎，冰冻牙
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL, //布鲁皇
        .moves = {MOVE_PLAY_ROUGH, MOVE_METRONOME, MOVE_THUNDER_WAVE, MOVE_HEAL_BELL}, //嬉闹，挥指，电磁波，治愈铃声
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL, //布鲁皇
        .moves = {MOVE_FACADE, MOVE_SUPER_FANG, MOVE_THUNDER_WAVE, MOVE_ROAR}, //硬撑，愤怒门牙，电磁波，吼叫
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_GRANBULL, //布鲁皇
        .moves = {MOVE_PLAY_ROUGH, MOVE_SNARL, MOVE_THUNDER_WAVE, MOVE_PROTECT}, //嬉闹，大声咆哮，电磁波，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GRAPPLOCT_1] = {
        .species = SPECIES_GRAPPLOCT, //八爪武师
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_TAUNT, MOVE_OCTOLOCK}, //近身战，水流裂破，挑衅，蛸固
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRAPPLOCT_2] = {
        .species = SPECIES_GRAPPLOCT, //八爪武师
        .moves = {MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH, MOVE_OCTOLOCK, MOVE_PROTECT}, //吸取拳，突袭，蛸固，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRAPPLOCT_3] = {
        .species = SPECIES_GRAPPLOCT, //八爪武师
        .moves = {MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_ICE_PUNCH, MOVE_AQUA_JET}, //吸取拳，增强拳，冰冻拳，水流喷射
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(240, 0, 244, 0, 24, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRAPPLOCT_4] = {
        .species = SPECIES_GRAPPLOCT, //八爪武师
        .moves = {MOVE_SUCKER_PUNCH, MOVE_COACHING, MOVE_OCTOLOCK, MOVE_PROTECT}, //突袭，指导，蛸固，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GREAT_TUSK_1] = {
        .species = SPECIES_GREAT_TUSK, //雄伟牙
        .moves = {MOVE_CLOSE_COMBAT, MOVE_HEADLONG_RUSH, MOVE_ICE_SPINNER, MOVE_EARTHQUAKE}, //近身战，突飞猛扑，冰旋，地震
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GREAT_TUSK_2] = {
        .species = SPECIES_GREAT_TUSK, //雄伟牙
        .moves = {MOVE_CLOSE_COMBAT, MOVE_HEADLONG_RUSH, MOVE_HEAD_SMASH, MOVE_FIRE_FANG}, //近身战，突飞猛扑，双刃头锤，火焰牙
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(44, 252, 0, 0, 0, 212),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GREEDENT_1] = {
        .species = SPECIES_GREEDENT, //藏饱栗鼠
        .moves = {MOVE_BODY_PRESS, MOVE_PAYBACK, MOVE_SUPER_FANG, MOVE_STUFF_CHEEKS}, //扑击，以牙还牙，愤怒门牙，大快朵颐
        .heldItem = ITEM_APICOT_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 44, 128, 84, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GREEDENT_2] = {
        .species = SPECIES_GREEDENT, //藏饱栗鼠
        .moves = {MOVE_RETURN, MOVE_PAYBACK, MOVE_GYRO_BALL, MOVE_BELLY_DRUM}, //报恩，以牙还牙，陀螺球，腹鼓
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GREEDENT_3] = {
        .species = SPECIES_GREEDENT, //藏饱栗鼠
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_PSYCHIC_FANGS, MOVE_COUNTER}, //终极冲击，地震，精神之牙，双倍奉还
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GREEDENT_4] = {
        .species = SPECIES_GREEDENT, //藏饱栗鼠
        .moves = {MOVE_GYRO_BALL, MOVE_SUPER_FANG, MOVE_COUNTER, MOVE_STOCKPILE}, //陀螺球，愤怒门牙，双倍奉还，蓄力
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GRENINJA_1] = {
        .species = SPECIES_GRENINJA, //甲贺忍蛙
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_GUNK_SHOT, MOVE_ICE_BEAM}, //水炮，恶之波动，垃圾射击，冰冻光束
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRENINJA_2] = {
        .species = SPECIES_GRENINJA, //甲贺忍蛙
        .moves = {MOVE_SCALD, MOVE_TAUNT, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //热水，挑衅，撒菱，毒菱
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRENINJA_3] = {
        .species = SPECIES_GRENINJA, //甲贺忍蛙
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_WATER_SHURIKEN, MOVE_ICE_BEAM}, //水炮，恶之波动，飞水手里剑，冰冻光束
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRENINJA_4] = {
        .species = SPECIES_GRENINJA, //甲贺忍蛙
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //水炮，暴风雪，岩崩，守住
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 64, 0, 208, 236, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRIMMSNARL_1] = {
        .species = SPECIES_GRIMMSNARL_GMAX, //长毛巨魔
        .moves = {MOVE_PLAY_ROUGH, MOVE_TAUNT, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //嬉闹，挑衅，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(212, 0, 84, 0, 0, 212),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GRIMMSNARL_2] = {
        .species = SPECIES_GRIMMSNARL_GMAX, //长毛巨魔
        .moves = {MOVE_SPIRIT_BREAK, MOVE_TRICK, MOVE_TORMENT, MOVE_FAKE_OUT}, //灵魂冲击，戏法，无理取闹，击掌奇袭
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(172, 0, 252, 0, 0, 84),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRIMMSNARL_3] = {
        .species = SPECIES_GRIMMSNARL_GMAX, //长毛巨魔
        .moves = {MOVE_PLAY_ROUGH, MOVE_DARKEST_LARIAT, MOVE_DRAIN_PUNCH, MOVE_BULK_UP}, //嬉闹，ＤＤ金勾臂，吸取拳，健美
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRIMMSNARL_4] = {
        .species = SPECIES_GRIMMSNARL, //长毛巨魔
        .moves = {MOVE_SPIRIT_BREAK, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //灵魂冲击，电磁波，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(212, 0, 84, 0, 0, 212),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GRIMMSNARL_5] = {
        .species = SPECIES_GRIMMSNARL, //长毛巨魔
        .moves = {MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_FAKE_OUT}, //欺诈，挑衅，电磁波，击掌奇袭
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG, //噗噗猪
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_RECOVER, MOVE_NASTY_PLOT}, //精神强念，力量宝石，自我再生，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG, //噗噗猪
        .moves = {MOVE_PSYSHOCK, MOVE_MIRROR_COAT, MOVE_RECOVER, MOVE_TRICK_ROOM}, //精神冲击，镜面反射，自我再生，戏法空间
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GRUMPIG_3] = {
        .species = SPECIES_GRUMPIG, //噗噗猪
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_POWER_GEM}, //精神强念，暗影球，真气弹，力量宝石
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GRUMPIG_4] = {
        .species = SPECIES_GRUMPIG, //噗噗猪
        .moves = {MOVE_ICY_WIND, MOVE_SIMPLE_BEAM, MOVE_TEETER_DANCE, MOVE_PROTECT}, //冰冻之风，单纯光束，摇晃舞，守住
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GUMSHOOS_1] = {
        .species = SPECIES_GUMSHOOS, //猫鼬探长
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_PURSUIT}, //报恩，地震，咬碎，追打
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GUMSHOOS_2] = {
        .species = SPECIES_GUMSHOOS, //猫鼬探长
        .moves = {MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ICE_FANG}, //终结门牙，咬碎，火焰牙，冰冻牙
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUMSHOOS_3] = {
        .species = SPECIES_GUMSHOOS, //猫鼬探长
        .moves = {MOVE_SUPER_FANG, MOVE_STOMPING_TANTRUM, MOVE_YAWN, MOVE_PROTECT}, //愤怒门牙，跺脚，哈欠，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GUMSHOOS_4] = {
        .species = SPECIES_GUMSHOOS, //猫鼬探长
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SUPER_FANG, MOVE_FLING}, //报恩，地震，愤怒门牙，投掷
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUZZLORD_1] = {
        .species = SPECIES_GUZZLORD, //恶食大王
        .moves = {MOVE_LASH_OUT, MOVE_CORE_ENFORCER, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE}, //泄愤，核心惩罚者，大字爆炎，污泥波
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GUZZLORD_2] = {
        .species = SPECIES_GUZZLORD, //恶食大王
        .moves = {MOVE_KNOCK_OFF, MOVE_DRAGON_RUSH, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB}, //拍落，龙之俯冲，吸取拳，毒击
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUZZLORD_3] = {
        .species = SPECIES_GUZZLORD, //恶食大王
        .moves = {MOVE_SNARL, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_PROTECT}, //大声咆哮，剧毒，铁壁，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GUZZLORD_4] = {
        .species = SPECIES_GUZZLORD, //恶食大王
        .moves = {MOVE_CORE_ENFORCER, MOVE_HEAT_WAVE, MOVE_SLUDGE_WAVE, MOVE_WIDE_GUARD}, //核心惩罚者，热风，污泥波，广域防守
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS, //暴鲤龙
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_DRAGON_DANCE}, //水流尾，地震，强力鞭打，龙之舞
        .heldItem = ITEM_GYARADOSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS, //暴鲤龙
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_THUNDER_WAVE, MOVE_TAUNT}, //攀瀑，冰冻牙，电磁波，挑衅
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(220, 0, 244, 44, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS, //暴鲤龙
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //攀瀑，咬碎，地震，龙之舞
        .heldItem = ITEM_GYARADOSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS, //暴鲤龙
        .moves = {MOVE_WATERFALL, MOVE_SCALE_SHOT, MOVE_DRAGON_DANCE, MOVE_PROTECT}, //攀瀑，鳞射，龙之舞，守住
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA, //铁掌力士
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH, MOVE_PROTECT}, //近身战，拍落，子弹拳，守住
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA, //铁掌力士
        .moves = {MOVE_REVERSAL, MOVE_BULLET_PUNCH, MOVE_ENDURE, MOVE_BELLY_DRUM}, //绝处逢生，子弹拳，挺住，腹鼓
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA, //铁掌力士
        .moves = {MOVE_REVENGE, MOVE_TOXIC, MOVE_SLEEP_TALK, MOVE_REST}, //报复，剧毒，梦话，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(12, 0, 252, 0, 0, 244),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA, //铁掌力士
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_FAKE_OUT, MOVE_WIDE_GUARD}, //岩崩，地震，击掌奇袭，广域防守
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_HATTERENE_1] = {
        .species = SPECIES_HATTERENE_GMAX, //布莉姆温
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE, MOVE_TRICK_ROOM}, //广域战力，吸取之吻，魔法火焰，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 244, 0, 0, 12),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_HATTERENE_2] = {
        .species = SPECIES_HATTERENE_GMAX, //布莉姆温
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_TRICK_ROOM}, //广域战力，魔法闪耀，魔法火焰，戏法空间
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_HATTERENE_3] = {
        .species = SPECIES_HATTERENE_GMAX, //布莉姆温
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM}, //广域战力，吸取之吻，终极吸取，戏法空间
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_HATTERENE_4] = {
        .species = SPECIES_HATTERENE_GMAX, //布莉姆温
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_PROTECT}, //广域战力，魔法闪耀，戏法空间，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_HAWLUCHA_1] = {
        .species = SPECIES_HAWLUCHA, //摔角鹰人
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_ROOST}, //飞膝踢，杂技，剑舞，羽栖
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAWLUCHA_2] = {
        .species = SPECIES_HAWLUCHA, //摔角鹰人
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE}, //近身战，杂技，剑舞，替身
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAWLUCHA_3] = {
        .species = SPECIES_HAWLUCHA, //摔角鹰人
        .moves = {MOVE_FLYING_PRESS, MOVE_BRAVE_BIRD, MOVE_STONE_EDGE, MOVE_U_TURN}, //飞身重压，勇鸟猛攻，尖石攻击，急速折返
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAWLUCHA_4] = {
        .species = SPECIES_HAWLUCHA, //摔角鹰人
        .moves = {MOVE_DRAIN_PUNCH, MOVE_SKY_ATTACK, MOVE_ROCK_SLIDE, MOVE_ENCORE}, //吸取拳，神鸟猛击，岩崩，再来一次
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAXORUS_1] = {
        .species = SPECIES_HAXORUS, //双斧战龙
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE}, //逆鳞，地震，铁尾，龙之舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HAXORUS_2] = {
        .species = SPECIES_HAXORUS, //双斧战龙
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_CLOSE_COMBAT}, //逆鳞，地震，毒击，近身战
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAXORUS_3] = {
        .species = SPECIES_HAXORUS, //双斧战龙
        .moves = {MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_TAUNT, MOVE_SCALE_SHOT}, //守住，地震，挑衅，鳞射
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HAXORUS_4] = {
        .species = SPECIES_HAXORUS, //双斧战龙
        .moves = {MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_PROTECT}, //鳞射，地震，近身战，守住
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HEATMOR_1] = {
        .species = SPECIES_HEATMOR, //熔蚁兽
        .moves = {MOVE_FIRE_LASH, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH}, //火焰鞭，突袭，拍落，吸取拳
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HEATMOR_2] = {
        .species = SPECIES_HEATMOR, //熔蚁兽
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST}, //大字爆炎，热沙大地，终极吸取，真气弹
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HEATMOR_3] = {
        .species = SPECIES_HEATMOR, //熔蚁兽
        .moves = {MOVE_FLAMETHROWER, MOVE_SPIT_UP, MOVE_SWALLOW, MOVE_STOCKPILE}, //喷射火焰，喷出，吞下，蓄力
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HEATMOR_4] = {
        .species = SPECIES_HEATMOR, //熔蚁兽
        .moves = {MOVE_HEAT_WAVE, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_PROTECT}, //热风，终极吸取，觉醒力量，守住
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HEATRAN_1] = {
        .species = SPECIES_HEATRAN, //席多蓝恩
        .moves = {MOVE_MAGMA_STORM, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_TAUNT}, //熔岩风暴，日光束，大地之力，挑衅
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HEATRAN_2] = {
        .species = SPECIES_HEATRAN, //席多蓝恩
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_DARK_PULSE}, //喷射火焰，大地之力，加农光炮，恶之波动
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HEATRAN_3] = {
        .species = SPECIES_HEATRAN, //席多蓝恩
        .moves = {MOVE_MAGMA_STORM, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //熔岩风暴，剧毒，隐形岩，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 40, 0, 0, 220),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HEATRAN_4] = {
        .species = SPECIES_HEATRAN, //席多蓝恩
        .moves = {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, MOVE_PROTECT}, //热风，大地之力，觉醒力量，守住
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(56, 0, 8, 252, 192, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HELIOLISK_1] = {
        .species = SPECIES_HELIOLISK, //光电伞蜥
        .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_SURF, MOVE_VOLT_SWITCH}, //十万伏特，巨声，冲浪，伏特替换
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HELIOLISK_2] = {
        .species = SPECIES_HELIOLISK, //光电伞蜥
        .moves = {MOVE_CHARGE_BEAM, MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_RISING_VOLTAGE}, //充电光束，冲浪，影子分身，电力上升
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HELIOLISK_3] = {
        .species = SPECIES_HELIOLISK, //光电伞蜥
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_RAIN_DANCE, MOVE_GLARE}, //打雷，伏特替换，求雨，大蛇瞪眼
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HELIOLISK_4] = {
        .species = SPECIES_HELIOLISK, //光电伞蜥
        .moves = {MOVE_RISING_VOLTAGE, MOVE_HYPER_VOICE, MOVE_ELECTROWEB, MOVE_SURF}, //电力上升，巨声，电网，冲浪
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HELIOLISK_5] = {
        .species = SPECIES_HELIOLISK, //光电伞蜥
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_GLARE, MOVE_PROTECT}, //抛物面充电，巨声，大蛇瞪眼，守住
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS, //赫拉克罗斯
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_SWORDS_DANCE}, //近身战，拍落，硬撑，剑舞
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS, //赫拉克罗斯
        .moves = {MOVE_PIN_MISSILE, MOVE_ARM_THRUST, MOVE_ROCK_BLAST, MOVE_EARTHQUAKE}, //飞弹针，猛推，岩石爆击，地震
        .heldItem = ITEM_HERACRONITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS, //赫拉克罗斯
        .moves = {MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, MOVE_ROCK_BLAST, MOVE_SWORDS_DANCE}, //飞弹针，近身战，岩石爆击，剑舞
        .heldItem = ITEM_HERACRONITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_HERACROSS, //赫拉克罗斯
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_MEGAHORN}, //地震，尖石攻击，近身战，超级角击
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HIPPOWDON_1] = {
        .species = SPECIES_HIPPOWDON, //河马兽
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SLACK_OFF}, //地震，剧毒，隐形岩，偷懒
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HIPPOWDON_2] = {
        .species = SPECIES_HIPPOWDON, //河马兽
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_CURSE, MOVE_SLACK_OFF}, //地震，冰冻牙，诅咒，偷懒
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HIPPOWDON_3] = {
        .species = SPECIES_HIPPOWDON, //河马兽
        .moves = {MOVE_EARTHQUAKE, MOVE_ROAR, MOVE_STEALTH_ROCK, MOVE_SLACK_OFF}, //地震，吼叫，隐形岩，偷懒
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HIPPOWDON_4] = {
        .species = SPECIES_HIPPOWDON, //河马兽
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_PROTECT}, //地震，岩崩，诅咒，守住
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_HIPPOWDON_5] = {
        .species = SPECIES_HIPPOWDON, //河马兽
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_PROTECT}, //地震，岩崩，铁头，守住
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN, //快拳郎
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BULLET_PUNCH}, //飞膝踢，冰冻拳，雷电拳，子弹拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN, //快拳郎
        .moves = {MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_AGILITY, MOVE_COUNTER}, //近身战，深渊突刺，高速移动，双倍奉还
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(216, 252, 0, 40, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_3] = {
        .species = SPECIES_HITMONCHAN, //快拳郎
        .moves = {MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH, MOVE_RAPID_SPIN, MOVE_BULK_UP}, //吸取拳，子弹拳，高速旋转，健美
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONCHAN_4] = {
        .species = SPECIES_HITMONCHAN, //快拳郎
        .moves = {MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT, MOVE_QUICK_GUARD, MOVE_HELPING_HAND}, //吸取拳，击掌奇袭，快速防守，帮助
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE, //飞腿郎
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_POISON_JAB, MOVE_KNOCK_OFF}, //飞膝踢，尖石攻击，毒击，拍落
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE, //飞腿郎
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MACH_PUNCH, MOVE_STONE_EDGE, MOVE_BULK_UP}, //飞膝踢，音速拳，尖石攻击，健美
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONLEE_3] = {
        .species = SPECIES_HITMONLEE, //飞腿郎
        .moves = {MOVE_REVERSAL, MOVE_PYRO_BALL, MOVE_EARTHQUAKE, MOVE_ENDURE}, //绝处逢生，火焰球，地震，挺住
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONLEE_4] = {
        .species = SPECIES_HITMONLEE, //飞腿郎
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_FAKE_OUT, MOVE_WIDE_GUARD}, //飞膝踢，火焰球，击掌奇袭，广域防守
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP, //战舞郎
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_PURSUIT, MOVE_BULLET_PUNCH}, //飞膝踢，尖石攻击，追打，子弹拳
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP, //战舞郎
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_RAPID_SPIN, MOVE_TOXIC}, //近身战，音速拳，高速旋转，剧毒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONTOP_3] = {
        .species = SPECIES_HITMONTOP, //战舞郎
        .moves = {MOVE_BULLET_PUNCH, MOVE_COUNTER, MOVE_RAPID_SPIN, MOVE_TOXIC}, //子弹拳，双倍奉还，高速旋转，剧毒
        .heldItem = ITEM_COBA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONTOP_4] = {
        .species = SPECIES_HITMONTOP, //战舞郎
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FEINT, MOVE_FAKE_OUT, MOVE_WIDE_GUARD}, //近身战，佯攻，击掌奇袭，广域防守
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 132, 100, 4, 0, 20),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HONCHKROW_1] = {
        .species = SPECIES_HONCHKROW, //乌鸦头头
        .moves = {MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD, MOVE_SUPERPOWER, MOVE_TAUNT}, //突袭，勇鸟猛攻，蛮力，挑衅
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HONCHKROW_2] = {
        .species = SPECIES_HONCHKROW, //乌鸦头头
        .moves = {MOVE_NIGHT_SLASH, MOVE_DRILL_PECK, MOVE_SUCKER_PUNCH, MOVE_TAILWIND}, //暗袭要害，啄钻，突袭，顺风
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HONCHKROW_3] = {
        .species = SPECIES_HONCHKROW, //乌鸦头头
        .moves = {MOVE_DARK_PULSE, MOVE_HAZE, MOVE_HEAT_WAVE, MOVE_NASTY_PLOT}, //恶之波动，黑雾，热风，诡计
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HONCHKROW_4] = {
        .species = SPECIES_HONCHKROW, //乌鸦头头
        .moves = {MOVE_SNARL, MOVE_FOUL_PLAY, MOVE_HEAT_WAVE, MOVE_ICY_WIND}, //大声咆哮，欺诈，热风，冰冻之风
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM, //黑鲁加
        .moves = {MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT}, //大字爆炎，恶之波动，热沙大地，诡计
        .heldItem = ITEM_HOUNDOOMINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM, //黑鲁加
        .moves = {MOVE_FLARE_BLITZ, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_HOWL}, //闪焰冲锋，咬碎，精神之牙，长嚎
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM, //黑鲁加
        .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS, MOVE_SLUDGE_BOMB}, //热风，恶之波动，热沙大地，污泥炸弹
        .heldItem = ITEM_HOUNDOOMINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM, //黑鲁加
        .moves = {MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_INFERNO}, //大声咆哮，磷火，挑衅，烈火深渊
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_5] = {
        .species = SPECIES_HOUNDOOM, //黑鲁加
        .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_SOLAR_BEAM, MOVE_NASTY_PLOT}, //喷射火焰，恶之波动，日光束，诡计
        .heldItem = ITEM_HOUNDOOMINITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDSTONE_1] = {
        .species = SPECIES_HOUNDSTONE, //墓扬犬
        .moves = {MOVE_FIRE_FANG, MOVE_LAST_RESPECTS, MOVE_SHADOW_BALL, MOVE_SHADOW_SNEAK}, //火焰牙，扫墓，暗影球，影子偷袭
        .heldItem = ITEM_SPELL_TAG,
        .ev = TRAINER_PARTY_EVS(116, 76, 80, 88, 96, 52),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOUNDSTONE_2] = {
        .species = SPECIES_HOUNDSTONE, //墓扬犬
        .moves = {MOVE_TRICK, MOVE_LAST_RESPECTS, MOVE_DESTINY_BOND, MOVE_SHADOW_SNEAK}, //戏法，扫墓，同命，影子偷袭
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOUNDSTONE_3] = {
        .species = SPECIES_HOUNDSTONE, //墓扬犬
        .moves = {MOVE_PLAY_ROUGH, MOVE_LAST_RESPECTS, MOVE_BODY_PRESS, MOVE_SHADOW_SNEAK}, //嬉闹，扫墓，扑击，影子偷袭
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL, //猎斑鱼
        .moves = {MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_SHELL_SMASH}, //水流尾，冰冻牙，咬碎，破壳
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 4, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL, //猎斑鱼
        .moves = {MOVE_WATERFALL, MOVE_SUCKER_PUNCH, MOVE_ICE_BEAM, MOVE_SHELL_SMASH}, //攀瀑，突袭，冰冻光束，破壳
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HUNTAIL_3] = {
        .species = SPECIES_HUNTAIL, //猎斑鱼
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_AQUA_RING}, //热水，剧毒，奇异之光，水流环
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HUNTAIL_4] = {
        .species = SPECIES_HUNTAIL, //猎斑鱼
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_AQUA_RING, MOVE_SUBSTITUTE}, //浊流，冰冻之风，水流环，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 0, 128, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HYDREIGON_1] = {
        .species = SPECIES_HYDREIGON, //三首恶龙
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_BELCH}, //流星群，恶之波动，大字爆炎，打嗝
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYDREIGON_2] = {
        .species = SPECIES_HYDREIGON, //三首恶龙
        .moves = {MOVE_DRAGON_RUSH, MOVE_THROAT_CHOP, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE}, //龙之俯冲，深渊突刺，铁尾，龙之舞
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HYDREIGON_3] = {
        .species = SPECIES_HYDREIGON, //三首恶龙
        .moves = {MOVE_DARK_PULSE, MOVE_FLASH_CANNON, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE}, //恶之波动，加农光炮，诡计，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYDREIGON_4] = {
        .species = SPECIES_HYDREIGON, //三首恶龙
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_TAILWIND, MOVE_PROTECT}, //流星群，大字爆炎，顺风，守住
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO, //引梦貘人
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST}, //广域战力，魔法闪耀，暗影球，真气弹
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO, //引梦貘人
        .moves = {MOVE_FOUL_PLAY, MOVE_TRICK, MOVE_WISH, MOVE_PROTECT}, //欺诈，戏法，祈愿，守住
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO, //引梦貘人
        .moves = {MOVE_EXPANDING_FORCE, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE, MOVE_BATON_PASS}, //广域战力，诡计，替身，接棒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO, //引梦貘人
        .moves = {MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //广域战力，戏法空间，反射壁，光墙
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE, //甜甜萤
        .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_TAIL_GLOW, MOVE_MOONLIGHT}, //虫鸣，终极吸取，萤火，月光
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE, //甜甜萤
        .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_ENCORE, MOVE_RAIN_DANCE}, //虫鸣，电磁波，再来一次，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ILLUMISE_3] = {
        .species = SPECIES_ILLUMISE, //甜甜萤
        .moves = {MOVE_TAIL_GLOW, MOVE_SUBSTITUTE, MOVE_ENCORE, MOVE_BATON_PASS}, //萤火，替身，再来一次，接棒
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ILLUMISE_4] = {
        .species = SPECIES_ILLUMISE, //甜甜萤
        .moves = {MOVE_DEFOG, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_TAILWIND}, //清除浓雾，帮助，再来一次，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_INCINEROAR_1] = {
        .species = SPECIES_INCINEROAR, //炽焰咆哮虎
        .moves = {MOVE_FLARE_BLITZ, MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //闪焰冲锋，ＤＤ金勾臂，地震，剑舞
        .heldItem = ITEM_INCINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INCINEROAR_2] = {
        .species = SPECIES_INCINEROAR, //炽焰咆哮虎
        .moves = {MOVE_FLARE_BLITZ, MOVE_THROAT_CHOP, MOVE_CROSS_CHOP, MOVE_BULK_UP}, //闪焰冲锋，深渊突刺，十字劈，健美
        .heldItem = ITEM_RAZOR_FANG,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_INCINEROAR_3] = {
        .species = SPECIES_INCINEROAR, //炽焰咆哮虎
        .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_FAKE_OUT}, //喷射火焰，大声咆哮，磷火，击掌奇袭
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_INCINEROAR_4] = {
        .species = SPECIES_INCINEROAR, //炽焰咆哮虎
        .moves = {MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT}, //闪焰冲锋，拍落，急速折返，击掌奇袭
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 108, 20, 12, 0, 116),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_INDEEDEE_F_1] = {
        .species = SPECIES_INDEEDEE_F, //雌性爱管侍
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HIDDEN_POWER, MOVE_HEALING_WISH}, //广域战力，魔法火焰，觉醒力量，治愈之愿
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INDEEDEE_F_2] = {
        .species = SPECIES_INDEEDEE_F, //雌性爱管侍
        .moves = {MOVE_EXPANDING_FORCE, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_FAKE_OUT}, //广域战力，看我嘛，帮助，击掌奇袭
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_INDEEDEE_M_1] = {
        .species = SPECIES_INDEEDEE_M, //雄性爱管侍
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HIDDEN_POWER, MOVE_TRICK}, //广域战力，魔法火焰，觉醒力量，戏法
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INDEEDEE_M_2] = {
        .species = SPECIES_INDEEDEE_M, //雄性爱管侍
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_ENERGY_BALL, MOVE_HIDDEN_POWER}, //广域战力，魔法火焰，能量球，觉醒力量
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_INFERNAPE_1] = {
        .species = SPECIES_INFERNAPE, //烈焰猴
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_U_TURN}, //闪焰冲锋，近身战，尖石攻击，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INFERNAPE_2] = {
        .species = SPECIES_INFERNAPE, //烈焰猴
        .moves = {MOVE_FIRE_BLAST, MOVE_VACUUM_WAVE, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT}, //大字爆炎，真空波，热沙大地，诡计
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INFERNAPE_3] = {
        .species = SPECIES_INFERNAPE, //烈焰猴
        .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH}, //火焰拳，吸取拳，雷电拳，音速拳
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INFERNAPE_4] = {
        .species = SPECIES_INFERNAPE, //烈焰猴
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_MACH_PUNCH, MOVE_FAKE_OUT}, //近身战，杂技，音速拳，击掌奇袭
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_INTELEON_1] = {
        .species = SPECIES_INTELEON_GMAX, //千面避役
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_U_TURN}, //水炮，冰冻光束，恶之波动，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_INTELEON_2] = {
        .species = SPECIES_INTELEON_GMAX, //千面避役
        .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_FOCUS_ENERGY}, //狙击，冰冻光束，恶之波动，聚气
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INTELEON_3] = {
        .species = SPECIES_INTELEON, //千面避役
        .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_ICE_SHARD}, //狙击，冰冻光束，暗影球，冰砾
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_INTELEON_4] = {
        .species = SPECIES_INTELEON, //千面避役
        .moves = {MOVE_MUDDY_WATER, MOVE_U_TURN, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //浊流，急速折返，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 0, 8),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_BOULDER_1] = {
        .species = SPECIES_IRON_BOULDER, //铁磐岩
        .moves = {MOVE_MIGHTY_CLEAVE, MOVE_MEGAHORN, MOVE_ZEN_HEADBUTT, MOVE_SACRED_SWORD}, //强刃攻击，超级角击，意念头锤，圣剑
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_IRON_BOULDER_2] = {
        .species = SPECIES_IRON_BOULDER, //铁磐岩
        .moves = {MOVE_MIGHTY_CLEAVE, MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}, //强刃攻击，超级角击，近身战，剑舞
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_IRON_CROWN_1] = {
        .species = SPECIES_IRON_CROWN, //铁头壳
        .moves = {MOVE_TACHYON_CUTTER, MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_EXPANDING_FORCE}, //迅子利刃，冥想，精神冲击，广域战力
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_CROWN_2] = {
        .species = SPECIES_IRON_CROWN, //铁头壳
        .moves = {MOVE_TACHYON_CUTTER, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FOCUS_BLAST}, //迅子利刃，冥想，精神强念，真气弹
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(240, 0, 12, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_CROWN_3] = {
        .species = SPECIES_IRON_CROWN, //铁头壳
        .moves = {MOVE_TACHYON_CUTTER, MOVE_AGILITY, MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST}, //迅子利刃，高速移动，广域战力，真气弹
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_HANDS_1] = {
        .species = SPECIES_IRON_HANDS, //铁臂膀
        .moves = {MOVE_FAKE_OUT, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_DRAIN_PUNCH}, //击掌奇袭，疯狂伏特，近身战，吸取拳
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_IRON_HANDS_2] = {
        .species = SPECIES_IRON_HANDS, //铁臂膀
        .moves = {MOVE_FAKE_OUT, MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_PROTECT}, //击掌奇袭，疯狂伏特，嬉闹，守住
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_IRON_JUGULIS_1] = {
        .species = SPECIES_IRON_JUGULIS, //铁脖颈
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_TAILWIND}, //恶之波动，空气之刃，加农光炮，顺风
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(16, 0, 0, 200, 252, 40),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_JUGULIS_2] = {
        .species = SPECIES_IRON_JUGULIS, //铁脖颈
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_FLAMETHROWER}, //恶之波动，空气之刃，大地之力，喷射火焰
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_IRON_LEAVES_1] = {
        .species = SPECIES_IRON_LEAVES, //铁斑叶
        .moves = {MOVE_PSYBLADE, MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}, //精神剑，叶刃，近身战，剑舞
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_IRON_LEAVES_2] = {
        .species = SPECIES_IRON_LEAVES, //铁斑叶
        .moves = {MOVE_PSYBLADE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_X_SCISSOR}, //精神剑，叶刃，圣剑，十字剪
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 240, 16, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_IRON_MOTH_1] = {
        .species = SPECIES_IRON_MOTH, //铁毒蛾
        .moves = {MOVE_SLUDGE_WAVE, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_FIERY_DANCE}, //污泥波，魔法闪耀，能量球，火之舞
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_MOTH_2] = {
        .species = SPECIES_IRON_MOTH, //铁毒蛾
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FIERY_DANCE, MOVE_PSYCHIC, MOVE_BUG_BUZZ}, //污泥波，火之舞，精神强念，虫鸣
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_IRON_THORNS_1] = {
        .species = SPECIES_IRON_THORNS, //铁荆棘
        .moves = {MOVE_ROCK_SLIDE, MOVE_SUPERCELL_SLAM, MOVE_LOW_KICK, MOVE_STONE_EDGE}, //岩崩，闪电强袭，踢倒，尖石攻击
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_IRON_THORNS_2] = {
        .species = SPECIES_IRON_THORNS, //铁荆棘
        .moves = {MOVE_ROCK_SLIDE, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_CRUNCH}, //岩崩，疯狂伏特，地震，咬碎
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(16, 240, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_JELLICENT_1] = {
        .species = SPECIES_JELLICENT, //胖嘟嘟
        .moves = {MOVE_WATER_SPOUT, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM}, //喷水，暗影球，终极吸取，戏法空间
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_JELLICENT_2] = {
        .species = SPECIES_JELLICENT, //胖嘟嘟
        .moves = {MOVE_WATER_SPOUT, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_STRENGTH_SAP}, //喷水，磷火，挑衅，吸取力量
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 176, 0, 0, 84),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_JELLICENT_3] = {
        .species = SPECIES_JELLICENT, //胖嘟嘟
        .moves = {MOVE_SCALD, MOVE_HEX, MOVE_TOXIC, MOVE_RECOVER}, //热水，祸不单行，剧毒，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JELLICENT_4] = {
        .species = SPECIES_JELLICENT, //胖嘟嘟
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN}, //冲浪，冰冻光束，暗影球，终极吸取
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON, //雷伊布
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH}, //十万伏特，暗影球，觉醒力量，伏特替换
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON, //雷伊布
        .moves = {MOVE_DISCHARGE, MOVE_HIDDEN_POWER, MOVE_LIGHT_SCREEN, MOVE_MAGNET_RISE}, //放电，觉醒力量，光墙，电磁飘浮
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON, //雷伊布
        .moves = {MOVE_DISCHARGE, MOVE_WISH, MOVE_SUBSTITUTE, MOVE_BATON_PASS}, //放电，祈愿，替身，接棒
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON, //雷伊布
        .moves = {MOVE_THUNDERBOLT, MOVE_YAWN, MOVE_SUBSTITUTE, MOVE_PROTECT}, //十万伏特，哈欠，替身，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF, //毽子棉
        .moves = {MOVE_SEED_BOMB, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_SLEEP_POWDER}, //种子炸弹，杂技，剑舞，催眠粉
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF, //毽子棉
        .moves = {MOVE_INFESTATION, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE}, //纠缠不休，寄生种子，催眠粉，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JUMPLUFF_3] = {
        .species = SPECIES_JUMPLUFF, //毽子棉
        .moves = {MOVE_STRENGTH_SAP, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_COTTON_GUARD}, //吸取力量，寄生种子，剧毒，棉花防守
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JUMPLUFF_4] = {
        .species = SPECIES_JUMPLUFF, //毽子棉
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP, MOVE_HELPING_HAND}, //终极吸取，寄生种子，吸取力量，帮助
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX, //迷唇姐
        .moves = {MOVE_ICE_BEAM, MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}, //冰冻光束，广域战力，真气弹，暗影球
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX, //迷唇姐
        .moves = {MOVE_FROST_BREATH, MOVE_EXPANDING_FORCE, MOVE_NASTY_PLOT, MOVE_LOVELY_KISS}, //冰息，广域战力，诡计，恶魔之吻
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX, //迷唇姐
        .moves = {MOVE_BLIZZARD, MOVE_LOVELY_KISS, MOVE_REFLECT, MOVE_HAIL}, //暴风雪，恶魔之吻，反射壁，冰雹
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX, //迷唇姐
        .moves = {MOVE_BLIZZARD, MOVE_HYPER_VOICE, MOVE_FAKE_OUT, MOVE_AURORA_VEIL}, //暴风雪，巨声，击掌奇袭，极光幕
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS, //镰刀盔
        .moves = {MOVE_STONE_EDGE, MOVE_AQUA_TAIL, MOVE_SUPERPOWER, MOVE_RAIN_DANCE}, //尖石攻击，水流尾，蛮力，求雨
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS, //镰刀盔
        .moves = {MOVE_STONE_AXE, MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_SWORDS_DANCE}, //岩斧，水流裂破，水流喷射，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KABUTOPS_3] = {
        .species = SPECIES_KABUTOPS, //镰刀盔
        .moves = {MOVE_STONE_AXE, MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //岩斧，高速旋转，剧毒，隐形岩
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KABUTOPS_4] = {
        .species = SPECIES_KABUTOPS, //镰刀盔
        .moves = {MOVE_ROCK_SLIDE, MOVE_WATERFALL, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE}, //岩崩，攀瀑，拍落，求雨
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN, //袋兽
        .moves = {MOVE_REVERSAL, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_ENDURE}, //绝处逢生，岩崩，突袭，挺住
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN, //袋兽
        .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE, MOVE_FAKE_OUT}, //报恩，突袭，地震，击掌奇袭
        .heldItem = ITEM_KANGASKHANITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN, //袋兽
        .moves = {MOVE_DIZZY_PUNCH, MOVE_ICE_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT}, //迷昏拳，冰冻拳，增强拳，击掌奇袭
        .heldItem = ITEM_KANGASKHANITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN, //袋兽
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_FAKE_OUT, MOVE_PROTECT}, //舍身冲撞，咬碎，击掌奇袭，守住
        .heldItem = ITEM_KANGASKHANITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KARTANA_1] = {
        .species = SPECIES_KARTANA, //纸御剑
        .moves = {MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE}, //叶刃，修长之角，圣剑，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KARTANA_2] = {
        .species = SPECIES_KARTANA, //纸御剑
        .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD}, //叶刃，暗袭要害，精神利刃，圣剑
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KARTANA_3] = {
        .species = SPECIES_KARTANA, //纸御剑
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG, MOVE_TAILWIND}, //拍落，剧毒，清除浓雾，顺风
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KARTANA_4] = {
        .species = SPECIES_KARTANA, //纸御剑
        .moves = {MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_PROTECT}, //叶刃，圣剑，顺风，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON, //变隐龙
        .moves = {MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_SEED_BOMB, MOVE_SHADOW_SNEAK}, //吸取拳，增强拳，种子炸弹，影子偷袭
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON, //变隐龙
        .moves = {MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT}, //喷射火焰，冰冻光束，十万伏特，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KECLEON_3] = {
        .species = SPECIES_KECLEON, //变隐龙
        .moves = {MOVE_BIND, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RECOVER}, //绑紧，剧毒，隐形岩，自我再生
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KECLEON_4] = {
        .species = SPECIES_KECLEON, //变隐龙
        .moves = {MOVE_FOUL_PLAY, MOVE_SWAGGER, MOVE_TRICK_ROOM, MOVE_RECOVER}, //欺诈，虚张声势，戏法空间，自我再生
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KELDEO_ORDINARY_1] = {
        .species = SPECIES_KELDEO_ORDINARY, //凯路迪欧-平常的样子
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_SWORDS_DANCE}, //水流裂破，近身战，毒击，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KELDEO_ORDINARY_2] = {
        .species = SPECIES_KELDEO_ORDINARY, //凯路迪欧-平常的样子
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_MEGAHORN}, //水流裂破，近身战，尖石攻击，超级角击
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KELDEO_ORDINARY_3] = {
        .species = SPECIES_KELDEO_ORDINARY, //凯路迪欧-平常的样子
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_COACHING, MOVE_TAUNT}, //浊流，冰冻之风，指导，挑衅
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KILOWATTREL_1] = {
        .species = SPECIES_KILOWATTREL, //大电海燕
        .moves = {MOVE_HURRICANE, MOVE_PROTECT, MOVE_TAILWIND, MOVE_THUNDERBOLT}, //暴风，守住，顺风，十万伏特
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KILOWATTREL_2] = {
        .species = SPECIES_KILOWATTREL, //大电海燕
        .moves = {MOVE_HURRICANE, MOVE_PROTECT, MOVE_ELECTRO_BALL, MOVE_WEATHER_BALL}, //暴风，守住，电球，气象球
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KINGAMBIT_1] = {
        .species = SPECIES_KINGAMBIT, //仆刀将军
        .moves = {MOVE_IRON_HEAD, MOVE_KOWTOW_CLEAVE, MOVE_PROTECT, MOVE_SUCKER_PUNCH}, //铁头，仆刀，守住，突袭
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_KINGAMBIT_2] = {
        .species = SPECIES_KINGAMBIT, //仆刀将军
        .moves = {MOVE_IRON_HEAD, MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_AERIAL_ACE}, //铁头，仆刀，突袭，燕返
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(176, 252, 0, 80, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA, //刺龙王
        .moves = {MOVE_SNIPE_SHOT, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER}, //狙击，龙之波动，冰冻光束，觉醒力量
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA, //刺龙王
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_FLIP_TURN}, //水炮，流星群，冰冻光束，快速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA, //刺龙王
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_ICE_BEAM}, //水炮，龙之波动，暴风，冰冻光束
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA, //刺龙王
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_PROTECT}, //水炮，流星群，浊流，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER, //巨钳蟹
        .moves = {MOVE_CRABHAMMER, MOVE_X_SCISSOR, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF}, //蟹钳锤，十字剪，舍身冲撞，拍落
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER, //巨钳蟹
        .moves = {MOVE_CRABHAMMER, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}, //蟹钳锤，十万马力，岩崩，剑舞
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGLER_3] = {
        .species = SPECIES_KINGLER, //巨钳蟹
        .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_AGILITY}, //水流裂破，岩崩，蛮力，高速移动
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KINGLER_4] = {
        .species = SPECIES_KINGLER, //巨钳蟹
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_TICKLE, MOVE_WIDE_GUARD}, //蟹钳锤，拍落，挠痒，广域防守
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLEAVOR_1] = {
        .species = SPECIES_KLEAVOR, //劈斧螳螂
        .moves = {MOVE_STONE_AXE, MOVE_LUNGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN}, //岩斧，猛扑，近身战，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KLEAVOR_2] = {
        .species = SPECIES_KLEAVOR, //劈斧螳螂
        .moves = {MOVE_STONE_AXE, MOVE_LUNGE, MOVE_CLOSE_COMBAT, MOVE_ROCK_POLISH}, //岩斧，猛扑，近身战，岩石打磨
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KLEAVOR_3] = {
        .species = SPECIES_KLEAVOR, //劈斧螳螂
        .moves = {MOVE_STONE_AXE, MOVE_LUNGE, MOVE_REVERSAL, MOVE_ENDURE}, //岩斧，猛扑，绝处逢生，挺住
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KLEAVOR_4] = {
        .species = SPECIES_KLEAVOR, //劈斧螳螂
        .moves = {MOVE_CALM_MIND, MOVE_AGILITY, MOVE_ROOST, MOVE_BATON_PASS}, //冥想，高速移动，羽栖，接棒
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KLEAVOR_5] = {
        .species = SPECIES_KLEAVOR, //劈斧螳螂
        .moves = {MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_FEINT, MOVE_TAILWIND}, //岩崩，拍落，佯攻，顺风
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KLEFKI_1] = {
        .species = SPECIES_KLEFKI, //钥圈儿
        .moves = {MOVE_PLAY_ROUGH, MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_RECYCLE}, //嬉闹，电磁波，撒菱，回收利用
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KLEFKI_2] = {
        .species = SPECIES_KLEFKI, //钥圈儿
        .moves = {MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_SUBSTITUTE}, //欺诈，电磁波，撒菱，替身
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KLEFKI_3] = {
        .species = SPECIES_KLEFKI, //钥圈儿
        .moves = {MOVE_THUNDER_WAVE, MOVE_SPIKES, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //电磁波，撒菱，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KLEFKI_4] = {
        .species = SPECIES_KLEFKI, //钥圈儿
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_FAIRY_LOCK, MOVE_CRAFTY_SHIELD}, //反射壁，光墙，妖精之锁，戏法防守
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KLINKLANG_1] = {
        .species = SPECIES_KLINKLANG, //齿轮怪
        .moves = {MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_RETURN, MOVE_SHIFT_GEAR}, //齿轮飞盘，疯狂伏特，报恩，换档
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KLINKLANG_2] = {
        .species = SPECIES_KLINKLANG, //齿轮怪
        .moves = {MOVE_GEAR_GRIND, MOVE_THUNDER_WAVE, MOVE_SCREECH, MOVE_MAGNET_RISE}, //齿轮飞盘，电磁波，刺耳声，电磁飘浮
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLINKLANG_3] = {
        .species = SPECIES_KLINKLANG, //齿轮怪
        .moves = {MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TOXIC, MOVE_PROTECT}, //加农光炮，十万伏特，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KLINKLANG_4] = {
        .species = SPECIES_KLINKLANG, //齿轮怪
        .moves = {MOVE_RISING_VOLTAGE, MOVE_STEEL_BEAM, MOVE_POWER_GEM, MOVE_ELECTRIC_TERRAIN}, //电力上升，铁蹄光线，力量宝石，电气场地
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHAYMIN_LAND_1] = {
        .species = SPECIES_SHAYMIN_LAND, //谢米
        .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_AIR_SLASH, MOVE_SYNTHESIS}, //种子闪光，大地之力，空气之刃，光合作用
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_LAND_2] = {
        .species = SPECIES_SHAYMIN_LAND, //谢米
        .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, MOVE_CELEBRATE}, //种子闪光，大地之力，觉醒力量，庆祝
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_LAND_3] = {
        .species = SPECIES_SHAYMIN_LAND, //谢米
        .moves = {MOVE_LEAF_STORM, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT}, //飞叶风暴，寄生种子，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHAYMIN_LAND_4] = {
        .species = SPECIES_SHAYMIN_LAND, //谢米
        .moves = {MOVE_GRASSY_GLIDE, MOVE_PLAY_ROUGH, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR}, //青草滑梯，嬉闹，电光一闪，蛮干
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHAYMIN_LAND_5] = {
        .species = SPECIES_SHAYMIN_LAND, //谢米
        .moves = {MOVE_SEED_FLARE, MOVE_FLORAL_HEALING, MOVE_TAILWIND, MOVE_PROTECT}, //种子闪光，花疗，顺风，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SHAYMIN_LAND_6] = {
        .species = SPECIES_SHAYMIN_LAND, //谢米
        .moves = {MOVE_SEED_FLARE, MOVE_FLORAL_HEALING, MOVE_SYNTHESIS, MOVE_GRASSY_TERRAIN}, //种子闪光，花疗，光合作用，青草场地
        .heldItem = ITEM_GRASSY_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_KOMALA_1] = {
        .species = SPECIES_KOMALA, //树枕尾熊
        .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH}, //报恩，嬉闹，木槌，突袭
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOMALA_2] = {
        .species = SPECIES_KOMALA, //树枕尾熊
        .moves = {MOVE_RETURN, MOVE_SUPERPOWER, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE}, //报恩，蛮力，高速旋转，剑舞
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KOMALA_3] = {
        .species = SPECIES_KOMALA, //树枕尾熊
        .moves = {MOVE_THRASH, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_YAWN}, //大闹一番，滚动，变圆，哈欠
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOMALA_4] = {
        .species = SPECIES_KOMALA, //树枕尾熊
        .moves = {MOVE_RAPID_SPIN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN}, //高速旋转，地震，岩崩，哈欠
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOMMO_O_1] = {
        .species = SPECIES_KOMMO_O, //杖尾鳞甲龙
        .moves = {MOVE_SCALE_SHOT, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_CLANGOROUS_SOUL}, //鳞射，近身战，毒击，魂舞烈音爆
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KOMMO_O_2] = {
        .species = SPECIES_KOMMO_O, //杖尾鳞甲龙
        .moves = {MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_BOOMBURST, MOVE_AUTOTOMIZE}, //鳞片噪音，波导弹，爆音波，身体轻量化
        .heldItem = ITEM_KOMMONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KOMMO_O_3] = {
        .species = SPECIES_KOMMO_O, //杖尾鳞甲龙
        .moves = {MOVE_CLANGING_SCALES, MOVE_CLOSE_COMBAT, MOVE_BOOMBURST, MOVE_FLASH_CANNON}, //鳞片噪音，近身战，爆音波，加农光炮
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KOMMO_O_4] = {
        .species = SPECIES_KOMMO_O, //杖尾鳞甲龙
        .moves = {MOVE_DRAGON_CLAW, MOVE_BODY_PRESS, MOVE_POISON_JAB, MOVE_IRON_DEFENSE}, //龙爪，扑击，毒击，铁壁
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KOMMO_O_5] = {
        .species = SPECIES_KOMMO_O, //杖尾鳞甲龙
        .moves = {MOVE_CLANGING_SCALES, MOVE_BOOMBURST, MOVE_FLAMETHROWER, MOVE_PROTECT}, //鳞片噪音，爆音波，喷射火焰，守住
        .heldItem = ITEM_KOMMONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KRICKETUNE_1] = {
        .species = SPECIES_KRICKETUNE, //音箱蟀
        .moves = {MOVE_FELL_STINGER, MOVE_POWER_UP_PUNCH, MOVE_THIEF, MOVE_SWORDS_DANCE}, //致命针刺，增强拳，小偷，剑舞
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KRICKETUNE_2] = {
        .species = SPECIES_KRICKETUNE, //音箱蟀
        .moves = {MOVE_INFESTATION, MOVE_PERISH_SONG, MOVE_MUD_SLAP, MOVE_PROTECT}, //纠缠不休，终焉之歌，掷泥，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KRICKETUNE_3] = {
        .species = SPECIES_KRICKETUNE, //音箱蟀
        .moves = {MOVE_THIEF, MOVE_ENDEAVOR, MOVE_TAUNT, MOVE_STICKY_WEB}, //小偷，蛮干，挑衅，黏黏网
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KRICKETUNE_4] = {
        .species = SPECIES_KRICKETUNE, //音箱蟀
        .moves = {MOVE_STRUGGLE_BUG, MOVE_PERISH_SONG, MOVE_STICKY_WEB, MOVE_PROTECT}, //虫之抵抗，终焉之歌，黏黏网，守住
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KROOKODILE_1] = {
        .species = SPECIES_KROOKODILE, //流氓鳄
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_SUPERPOWER}, //地震，拍落，尖石攻击，蛮力
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KROOKODILE_2] = {
        .species = SPECIES_KROOKODILE, //流氓鳄
        .moves = {MOVE_EARTHQUAKE, MOVE_SCALE_SHOT, MOVE_IRON_TAIL, MOVE_BULK_UP}, //地震，鳞射，铁尾，健美
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KROOKODILE_3] = {
        .species = SPECIES_KROOKODILE, //流氓鳄
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_TAUNT, MOVE_STEALTH_ROCK}, //拍落，剧毒，挑衅，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KROOKODILE_4] = {
        .species = SPECIES_KROOKODILE, //流氓鳄
        .moves = {MOVE_EARTHQUAKE, MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_PROTECT}, //地震，ＤＤ金勾臂，近身战，守住
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANDORUS_INCARNATE_1] = {
        .species = SPECIES_LANDORUS_INCARNATE, //土地云-化身形态
        .moves = {MOVE_SANDSEAR_STORM, MOVE_SLUDGE_WAVE, MOVE_PSYCHIC, MOVE_HIDDEN_POWER}, //热沙风暴，污泥波，精神强念，觉醒力量
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANDORUS_INCARNATE_2] = {
        .species = SPECIES_LANDORUS_INCARNATE, //土地云-化身形态
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_SANDSTORM}, //地震，岩崩，急速折返，沙暴
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANDORUS_INCARNATE_3] = {
        .species = SPECIES_LANDORUS_INCARNATE, //土地云-化身形态
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //地震，铁尾，岩崩，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANDORUS_THERIAN_1] = {
        .species = SPECIES_LANDORUS_THERIAN, //土地云-灵兽形态
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //地震，尖石攻击，拍落，剑舞
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LANDORUS_THERIAN_2] = {
        .species = SPECIES_LANDORUS_THERIAN, //土地云-灵兽形态
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_STEALTH_ROCK}, //地震，岩崩，急速折返，隐形岩
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 8, 0, 8),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LANDORUS_THERIAN_3] = {
        .species = SPECIES_LANDORUS_THERIAN, //土地云-灵兽形态
        .moves = {MOVE_SANDSEAR_STORM, MOVE_U_TURN, MOVE_HIDDEN_POWER, MOVE_STEALTH_ROCK}, //热沙风暴，急速折返，觉醒力量，隐形岩
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 44, 28, 136, 48),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN, //电灯怪
        .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_TOXIC, MOVE_PROTECT}, //热水，伏特替换，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(40, 0, 220, 0, 0, 248),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN, //电灯怪
        .moves = {MOVE_HYDRO_PUMP, MOVE_RISING_VOLTAGE, MOVE_ICE_BEAM, MOVE_VOLT_SWITCH}, //水炮，电力上升，冰冻光束，伏特替换
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN, //电灯怪
        .moves = {MOVE_SCALD, MOVE_CHARGE_BEAM, MOVE_STOCKPILE, MOVE_REST}, //热水，充电光束，蓄力，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_LANTURN, //电灯怪
        .moves = {MOVE_VOLT_SWITCH, MOVE_ICY_WIND, MOVE_THUNDER_WAVE, MOVE_RISING_VOLTAGE}, //伏特替换，冰冻之风，电磁波，电力上升
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS_GMAX, //拉普拉斯
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_RAIN_DANCE}, //水炮，冰冻光束，打雷，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(200, 0, 8, 44, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS_GMAX, //拉普拉斯
        .moves = {MOVE_WATERFALL, MOVE_ICE_SHARD, MOVE_DRILL_RUN, MOVE_DRAGON_DANCE}, //攀瀑，冰砾，直冲钻，龙之舞
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS_GMAX, //拉普拉斯
        .moves = {MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_SUBSTITUTE}, //冰冻光束，剧毒，奇异之光，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 0, 252, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS_GMAX, //拉普拉斯
        .moves = {MOVE_WHIRLPOOL, MOVE_SING, MOVE_PERISH_SONG, MOVE_PROTECT}, //潮旋，唱歌，终焉之歌，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LEAFEON_1] = {
        .species = SPECIES_LEAFEON, //叶伊布
        .moves = {MOVE_LEAF_BLADE, MOVE_IRON_TAIL, MOVE_X_SCISSOR, MOVE_KNOCK_OFF}, //叶刃，铁尾，十字剪，拍落
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LEAFEON_2] = {
        .species = SPECIES_LEAFEON, //叶伊布
        .moves = {MOVE_TROP_KICK, MOVE_KNOCK_OFF, MOVE_SUNNY_DAY, MOVE_SYNTHESIS}, //热带踢，拍落，大晴天，光合作用
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAFEON_3] = {
        .species = SPECIES_LEAFEON, //叶伊布
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //叶刃，十字剪，拍落，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LEAFEON_4] = {
        .species = SPECIES_LEAFEON, //叶伊布
        .moves = {MOVE_TROP_KICK, MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_HEAL_BELL}, //热带踢，拍落，寄生种子，治愈铃声
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAVANNY_1] = {
        .species = SPECIES_LEAVANNY, //保姆虫
        .moves = {MOVE_SKITTER_SMACK, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_STICKY_WEB}, //爬击，叶刃，拍落，黏黏网
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAVANNY_2] = {
        .species = SPECIES_LEAVANNY, //保姆虫
        .moves = {MOVE_LEAF_STORM, MOVE_ELECTROWEB, MOVE_KNOCK_OFF, MOVE_STICKY_WEB}, //飞叶风暴，电网，拍落，黏黏网
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LEAVANNY_3] = {
        .species = SPECIES_LEAVANNY, //保姆虫
        .moves = {MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_SLASH, MOVE_SWORDS_DANCE}, //十字剪，叶刃，劈开，剑舞
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAVANNY_4] = {
        .species = SPECIES_LEAVANNY, //保姆虫
        .moves = {MOVE_SKITTER_SMACK, MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_PROTECT}, //爬击，叶刃，毒击，守住
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEDIAN_1] = {
        .species = SPECIES_LEDIAN, //安瓢虫
        .moves = {MOVE_U_TURN, MOVE_TAILWIND, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //急速折返，顺风，反射壁，光墙
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEDIAN_2] = {
        .species = SPECIES_LEDIAN, //安瓢虫
        .moves = {MOVE_MACH_PUNCH, MOVE_AERIAL_ACE, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE}, //音速拳，燕返，雷电拳，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEDIAN_3] = {
        .species = SPECIES_LEDIAN, //安瓢虫
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT}, //纠缠不休，剧毒，羽栖，守住
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LEDIAN_4] = {
        .species = SPECIES_LEDIAN, //安瓢虫
        .moves = {MOVE_ACROBATICS, MOVE_CLOSE_COMBAT, MOVE_VICTORY_DANCE, MOVE_PROTECT}, //杂技，近身战，胜利之舞，守住
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LICKILICKY_1] = {
        .species = SPECIES_LICKILICKY, //大舌舔
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //报恩，地震，拍落，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(172, 252, 0, 84, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LICKILICKY_2] = {
        .species = SPECIES_LICKILICKY, //大舌舔
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_BELLY_DRUM}, //泰山压顶，地震，臂锤，腹鼓
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LICKILICKY_3] = {
        .species = SPECIES_LICKILICKY, //大舌舔
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //扑击，剧毒，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LICKILICKY_4] = {
        .species = SPECIES_LICKILICKY, //大舌舔
        .moves = {MOVE_EXPLOSION, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_ENDURE}, //大爆炸，岩崩，冰冻之风，挺住
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LIEPARD_1] = {
        .species = SPECIES_LIEPARD, //酷豹
        .moves = {MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_U_TURN}, //拍落，嬉闹，突袭，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LIEPARD_2] = {
        .species = SPECIES_LIEPARD, //酷豹
        .moves = {MOVE_NIGHT_DAZE, MOVE_BURNING_JEALOUSY, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //暗黑爆破，妒火，觉醒力量，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LIEPARD_3] = {
        .species = SPECIES_LIEPARD, //酷豹
        .moves = {MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE, MOVE_ENCORE, MOVE_COPYCAT}, //欺诈，电磁波，再来一次，仿效
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LIEPARD_4] = {
        .species = SPECIES_LIEPARD, //酷豹
        .moves = {MOVE_FAKE_OUT, MOVE_SNARL, MOVE_TAUNT, MOVE_CHARM}, //击掌奇袭，大声咆哮，挑衅，撒娇
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LILLIGANT_1] = {
        .species = SPECIES_LILLIGANT, //裙儿小姐
        .moves = {MOVE_PETAL_DANCE, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE}, //花瓣舞，觉醒力量，催眠粉，蝶舞
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(8, 0, 0, 248, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LILLIGANT_2] = {
        .species = SPECIES_LILLIGANT, //裙儿小姐
        .moves = {MOVE_SOLAR_BEAM, MOVE_POLLEN_PUFF, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY}, //日光束，花粉团，觉醒力量，大晴天
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LILLIGANT_3] = {
        .species = SPECIES_LILLIGANT, //裙儿小姐
        .moves = {MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_PROTECT}, //寄生种子，剧毒，替身，守住
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LILLIGANT_4] = {
        .species = SPECIES_LILLIGANT, //裙儿小姐
        .moves = {MOVE_GIGA_DRAIN, MOVE_POLLEN_PUFF, MOVE_HIDDEN_POWER, MOVE_PROTECT}, //终极吸取，花粉团，觉醒力量，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LILLIGANT_5] = {
        .species = SPECIES_LILLIGANT, //裙儿小姐
        .moves = {MOVE_SOLAR_BEAM, MOVE_POLLEN_PUFF, MOVE_HIDDEN_POWER, MOVE_PROTECT}, //日光束，花粉团，觉醒力量，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LILLIGANT_HISUI_1] = {
        .species = SPECIES_LILLIGANT_HISUI, //洗翠裙儿小姐
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_VICTORY_DANCE}, //叶刃，近身战，毒击，胜利之舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LILLIGANT_HISUI_2] = {
        .species = SPECIES_LILLIGANT_HISUI, //洗翠裙儿小姐
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_SLEEP_POWDER, MOVE_VICTORY_DANCE}, //叶刃，近身战，催眠粉，胜利之舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LILLIGANT_HISUI_3] = {
        .species = SPECIES_LILLIGANT_HISUI, //洗翠裙儿小姐
        .moves = {MOVE_SOLAR_BLADE, MOVE_DRAIN_PUNCH, MOVE_ICE_SPINNER, MOVE_TEETER_DANCE}, //日光刃，吸取拳，冰旋，摇晃舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LILLIGANT_HISUI_4] = {
        .species = SPECIES_LILLIGANT_HISUI, //洗翠裙儿小姐
        .moves = {MOVE_SOLAR_BLADE, MOVE_AXE_KICK, MOVE_TRIPLE_AXEL, MOVE_SLEEP_POWDER}, //日光刃，下压踢，三旋击，催眠粉
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE, //直冲熊
        .moves = {MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, MOVE_SEED_BOMB, MOVE_BELLY_DRUM}, //神速，跺脚，种子炸弹，腹鼓
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(148, 252, 0, 108, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE, //直冲熊
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_SWAGGER, MOVE_SUBSTITUTE}, //潮旋，剧毒，虚张声势，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LINOONE_3] = {
        .species = SPECIES_LINOONE, //直冲熊
        .moves = {MOVE_SUPER_FANG, MOVE_THUNDER_WAVE, MOVE_TRICK, MOVE_SUBSTITUTE}, //愤怒门牙，电磁波，戏法，替身
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LINOONE_4] = {
        .species = SPECIES_LINOONE, //直冲熊
        .moves = {MOVE_EXTREME_SPEED, MOVE_SHADOW_CLAW, MOVE_BELLY_DRUM, MOVE_PROTECT}, //神速，暗影爪，腹鼓，守住
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(220, 252, 0, 36, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LOKIX_1] = {
        .species = SPECIES_LOKIX, //烈腿蝗
        .moves = {MOVE_AXE_KICK, MOVE_SUCKER_PUNCH, MOVE_FIRST_IMPRESSION, MOVE_LEECH_LIFE}, //下压踢，突袭，迎头一击，吸血
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOKIX_2] = {
        .species = SPECIES_LOKIX, //烈腿蝗
        .moves = {MOVE_AXE_KICK, MOVE_SUCKER_PUNCH, MOVE_BUG_BUZZ, MOVE_TRAILBLAZE}, //下压踢，突袭，虫鸣，起草
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOPUNNY_1] = {
        .species = SPECIES_LOPUNNY, //长耳兔
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_MACH_PUNCH}, //舍身冲撞，飞膝踢，三旋击，音速拳
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOPUNNY_2] = {
        .species = SPECIES_LOPUNNY, //长耳兔
        .moves = {MOVE_ENTRAINMENT, MOVE_SWITCHEROO, MOVE_ENCORE, MOVE_FAKE_OUT}, //找伙伴，掉包，再来一次，击掌奇袭
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOPUNNY_3] = {
        .species = SPECIES_LOPUNNY, //长耳兔
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH}, //舍身冲撞，近身战，嬉闹，增强拳
        .heldItem = ITEM_LOPUNNITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LOPUNNY_4] = {
        .species = SPECIES_LOPUNNY, //长耳兔
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_FAKE_OUT}, //舍身冲撞，吸取拳，音速拳，击掌奇袭
        .heldItem = ITEM_LOPUNNITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUCARIO_1] = {
        .species = SPECIES_LUCARIO, //路卡利欧
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BULLET_PUNCH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //近身战，子弹拳，地震，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUCARIO_2] = {
        .species = SPECIES_LUCARIO, //路卡利欧
        .moves = {MOVE_DRAIN_PUNCH, MOVE_METEOR_MASH, MOVE_BLAZE_KICK, MOVE_SWORDS_DANCE}, //吸取拳，彗星拳，火焰踢，剑舞
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS(60, 60, 124, 140, 0, 124),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUCARIO_3] = {
        .species = SPECIES_LUCARIO, //路卡利欧
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_DARK_PULSE, MOVE_NASTY_PLOT}, //波导弹，加农光炮，恶之波动，诡计
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUCARIO_4] = {
        .species = SPECIES_LUCARIO, //路卡利欧
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLASH_CANNON, MOVE_EXTREME_SPEED, MOVE_PROTECT}, //近身战，加农光炮，神速，守住
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO, //乐天河童
        .moves = {MOVE_SURF, MOVE_LEAF_STORM, MOVE_FAKE_OUT, MOVE_TICKLE}, //冲浪，飞叶风暴，击掌奇袭，挠痒
        .heldItem = ITEM_TANGA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO, //乐天河童
        .moves = {MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_RAIN_DANCE}, //水炮，终极吸取，冰冻光束，求雨
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO, //乐天河童
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_RAIN_DANCE}, //热水，终极吸取，剧毒，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO, //乐天河童
        .moves = {MOVE_MUDDY_WATER, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_FAKE_OUT}, //浊流，能量球，冰冻光束，击掌奇袭
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUMINEON_1] = {
        .species = SPECIES_LUMINEON, //霓虹鱼
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_FLIP_TURN}, //冲浪，冰冻光束，信号光束，快速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUMINEON_2] = {
        .species = SPECIES_LUMINEON, //霓虹鱼
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FLIP_TURN, MOVE_TAILWIND}, //热水，冰冻光束，快速折返，顺风
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 248, 8, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUMINEON_3] = {
        .species = SPECIES_LUMINEON, //霓虹鱼
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST}, //热水，剧毒，清除浓雾，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 248, 8, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUMINEON_4] = {
        .species = SPECIES_LUMINEON, //霓虹鱼
        .moves = {MOVE_SCALD, MOVE_FLIP_TURN, MOVE_DEFOG, MOVE_TAILWIND}, //热水，快速折返，清除浓雾，顺风
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 8, 0, 248),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE, //月石
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_NASTY_PLOT}, //精神强念，力量宝石，大地之力，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE, //月石
        .moves = {MOVE_EERIE_SPELL, MOVE_EARTH_POWER, MOVE_CALM_MIND, MOVE_MOONLIGHT}, //诡异咒语，大地之力，冥想，月光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUNATONE_3] = {
        .species = SPECIES_LUNATONE, //月石
        .moves = {MOVE_SAND_TOMB, MOVE_HYPNOSIS, MOVE_COSMIC_POWER, MOVE_MOONLIGHT}, //流沙深渊，催眠术，宇宙力量，月光
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUNATONE_4] = {
        .species = SPECIES_LUNATONE, //月石
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HELPING_HAND, MOVE_TRICK_ROOM}, //光墙，反射壁，帮助，戏法空间
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_LURANTIS_1] = {
        .species = SPECIES_LURANTIS, //兰螳花
        .moves = {MOVE_SOLAR_BLADE, MOVE_SUPERPOWER, MOVE_POISON_JAB, MOVE_SYNTHESIS}, //日光刃，蛮力，毒击，光合作用
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LURANTIS_2] = {
        .species = SPECIES_LURANTIS, //兰螳花
        .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SYNTHESIS, MOVE_SUNNY_DAY}, //日光束，气象球，光合作用，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LURANTIS_3] = {
        .species = SPECIES_LURANTIS, //兰螳花
        .moves = {MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_DEFOG, MOVE_SYNTHESIS}, //飞叶风暴，蛮力，清除浓雾，光合作用
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_LURANTIS_4] = {
        .species = SPECIES_LURANTIS, //兰螳花
        .moves = {MOVE_PETAL_BLIZZARD, MOVE_SUPERPOWER, MOVE_SUNNY_DAY, MOVE_PSYCHO_CUT}, //落英缤纷，蛮力，大晴天，精神利刃
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_LUVDISC_1] = {
        .species = SPECIES_LUVDISC, //爱心鱼
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER, MOVE_DRAINING_KISS}, //水炮，冰冻光束，觉醒力量，吸取之吻
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUVDISC_2] = {
        .species = SPECIES_LUVDISC, //爱心鱼
        .moves = {MOVE_WHIRLPOOL, MOVE_SWEET_KISS, MOVE_AQUA_RING, MOVE_SUBSTITUTE}, //潮旋，天使之吻，水流环，替身
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUVDISC_3] = {
        .species = SPECIES_LUVDISC, //爱心鱼
        .moves = {MOVE_ICY_WIND, MOVE_HEAL_PULSE, MOVE_SAFEGUARD, MOVE_PROTECT}, //冰冻之风，治愈波动，神秘守护，守住
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUVDISC_4] = {
        .species = SPECIES_LUVDISC, //爱心鱼
        .moves = {MOVE_ICY_WIND, MOVE_AQUA_JET, MOVE_HEAL_PULSE, MOVE_TOXIC}, //冰冻之风，水流喷射，治愈波动，剧毒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_LUXRAY_1] = {
        .species = SPECIES_LUXRAY, //伦琴猫
        .moves = {MOVE_VOLT_TACKLE, MOVE_ICE_FANG, MOVE_PLAY_ROUGH, MOVE_VOLT_SWITCH}, //伏特攻击，冰冻牙，嬉闹，伏特替换
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUXRAY_2] = {
        .species = SPECIES_LUXRAY, //伦琴猫
        .moves = {MOVE_VOLT_TACKLE, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS, MOVE_THROAT_CHOP}, //伏特攻击，冰冻牙，精神之牙，深渊突刺
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUXRAY_3] = {
        .species = SPECIES_LUXRAY, //伦琴猫
        .moves = {MOVE_RISING_VOLTAGE, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE, MOVE_ELECTRIC_TERRAIN}, //电力上升，觉醒力量，电磁波，电气场地
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUXRAY_4] = {
        .species = SPECIES_LUXRAY, //伦琴猫
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_VOLT_SWITCH, MOVE_PROTECT}, //十万伏特，大声咆哮，伏特替换，守住
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LYCANROC_DUSK_1] = {
        .species = SPECIES_LYCANROC_DUSK, //鬃岩狼人-黄昏的样子
        .moves = {MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}, //冲岩，近身战，尖石攻击，突袭
        .heldItem = ITEM_LYCANIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_DUSK_2] = {
        .species = SPECIES_LYCANROC_DUSK, //鬃岩狼人-黄昏的样子
        .moves = {MOVE_ACCELEROCK, MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_TAUNT}, //冲岩，双倍奉还，蛮干，挑衅
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_DUSK_3] = {
        .species = SPECIES_LYCANROC_DUSK, //鬃岩狼人-黄昏的样子
        .moves = {MOVE_ROCK_SLIDE, MOVE_THROAT_CHOP, MOVE_PLAY_ROUGH, MOVE_PROTECT}, //岩崩，深渊突刺，嬉闹，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_MIDDAY_1] = {
        .species = SPECIES_LYCANROC_MIDDAY, //鬃岩狼人-白昼的样子
        .moves = {MOVE_ACCELEROCK, MOVE_ENDEAVOR, MOVE_DRILL_RUN, MOVE_ROCK_SLIDE}, //冲岩，蛮干，直冲钻，岩崩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_MIDDAY_2] = {
        .species = SPECIES_LYCANROC_MIDDAY, //鬃岩狼人-白昼的样子
        .moves = {MOVE_STONE_EDGE, MOVE_SNARL, MOVE_TAUNT, MOVE_ACCELEROCK}, //尖石攻击，近身战，挑衅，冲岩
        .heldItem = ITEM_LYCANIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_MIDDAY_3] = {
        .species = SPECIES_LYCANROC_MIDDAY, //鬃岩狼人-白昼的样子
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_CRUNCH}, //岩崩，近身战，直冲钻，咬碎
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_1] = {
        .species = SPECIES_LYCANROC_MIDNIGHT, //鬃岩狼人-黑夜的样子
        .moves = {MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE}, //冲岩，近身战，突袭，尖石攻击
        .heldItem = ITEM_LYCANIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_2] = {
        .species = SPECIES_LYCANROC_MIDNIGHT, //鬃岩狼人-黑夜的样子
        .moves = {MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_TRAILBLAZE}, //尖石攻击，突袭，嬉闹，起草
        .heldItem = ITEM_LYCANIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_3] = {
        .species = SPECIES_LYCANROC_MIDNIGHT, //鬃岩狼人-黑夜的样子
        .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_TAUNT, MOVE_CLOSE_COMBAT}, //尖石攻击，咬碎，挑衅，近身战
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MABOSSTIFF] = {
        .species = SPECIES_MABOSSTIFF, //獒教父
        .moves = {MOVE_CHARM, MOVE_CRUNCH, MOVE_SNARL, MOVE_TAUNT}, //撒娇，咬碎，大声咆哮，挑衅
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 80, 0, 0, 176),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP_GMAX, //怪力
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_MACH_PUNCH}, //近身战，拍落，硬撑，音速拳
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP_GMAX, //怪力
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_DARKEST_LARIAT, MOVE_BULLET_PUNCH}, //爆裂拳，尖石攻击，ＤＤ金勾臂，子弹拳
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP, //怪力
        .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_BULK_UP}, //吸取拳，雷电拳，冰冻拳，健美
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP, //怪力
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_KNOCK_OFF, MOVE_WIDE_GUARD, MOVE_COACHING}, //爆裂拳，拍落，广域防守，指导
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO, //熔岩蜗牛
        .moves = {MOVE_FIRE_BLAST, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_SHELL_SMASH}, //大字爆炎，力量宝石，大地之力，破壳
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO, //熔岩蜗牛
        .moves = {MOVE_MAGMA_STORM, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //熔岩风暴，自我再生，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGCARGO_3] = {
        .species = SPECIES_MAGCARGO, //熔岩蜗牛
        .moves = {MOVE_MAGMA_STORM, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RECOVER}, //熔岩风暴，剧毒，隐形岩，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGCARGO_4] = {
        .species = SPECIES_MAGCARGO, //熔岩蜗牛
        .moves = {MOVE_HEAT_WAVE, MOVE_YAWN, MOVE_SWAGGER, MOVE_PROTECT}, //热风，哈欠，虚张声势，守住
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MAGMORTAR_1] = {
        .species = SPECIES_MAGMORTAR, //鸭嘴炎兽
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_SCORCHING_SANDS, MOVE_PSYCHIC}, //大字爆炎，十万伏特，热沙大地，精神强念
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGMORTAR_2] = {
        .species = SPECIES_MAGMORTAR, //鸭嘴炎兽
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_MACH_PUNCH, MOVE_BELLY_DRUM}, //闪焰冲锋，地震，音速拳，腹鼓
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGMORTAR_3] = {
        .species = SPECIES_MAGMORTAR, //鸭嘴炎兽
        .moves = {MOVE_LAVA_PLUME, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_TAUNT}, //喷烟，磷火，奇异之光，挑衅
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGMORTAR_4] = {
        .species = SPECIES_MAGMORTAR, //鸭嘴炎兽
        .moves = {MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, MOVE_BELCH, MOVE_PROTECT}, //热风，十万伏特，打嗝，守住
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGNEZONE_1] = {
        .species = SPECIES_MAGNEZONE, //自爆磁怪
        .moves = {MOVE_THUNDERBOLT, MOVE_STEEL_BEAM, MOVE_RISING_VOLTAGE, MOVE_SUBSTITUTE}, //十万伏特，铁蹄光线，电力上升，替身
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGNEZONE_2] = {
        .species = SPECIES_MAGNEZONE, //自爆磁怪
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH}, //十万伏特，加农光炮，电力上升，伏特替换
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(8, 0, 4, 252, 244, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGNEZONE_3] = {
        .species = SPECIES_MAGNEZONE, //自爆磁怪
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH}, //十万伏特，加农光炮，觉醒力量，伏特替换
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MAGNEZONE_4] = {
        .species = SPECIES_MAGNEZONE, //自爆磁怪
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_PROTECT}, //十万伏特，加农光炮，觉醒力量，守住
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MALAMAR_1] = {
        .species = SPECIES_MALAMAR, //乌贼王
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER, MOVE_LIQUIDATION}, //暗袭要害，精神利刃，蛮力，水流裂破
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MALAMAR_2] = {
        .species = SPECIES_MALAMAR, //乌贼王
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}, //恶之波动，精神强念，十万伏特，喷射火焰
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MALAMAR_3] = {
        .species = SPECIES_MALAMAR, //乌贼王
        .moves = {MOVE_SUPERPOWER, MOVE_PSYCHO_CUT, MOVE_PAYBACK, MOVE_DESTINY_BOND}, //蛮力，精神利刃，以牙还牙，同命
        .heldItem = ITEM_DARK_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MALAMAR_4] = {
        .species = SPECIES_MALAMAR, //乌贼王
        .moves = {MOVE_KNOCK_OFF, MOVE_SUPERPOWER, MOVE_HAPPY_HOUR, MOVE_PROTECT}, //拍落，蛮力，欢乐时光，守住
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_MAMOSWINE_1] = {
        .species = SPECIES_MAMOSWINE, //象牙猪
        .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD, MOVE_FISSURE}, //地震，冰锥，冰砾，地裂
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(44, 212, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_2] = {
        .species = SPECIES_MAMOSWINE, //象牙猪
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK}, //地震，冰砾，拍落，隐形岩
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_3] = {
        .species = SPECIES_MAMOSWINE, //象牙猪
        .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_STEALTH_ROCK}, //地震，冰柱坠击，冰砾，隐形岩
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_4] = {
        .species = SPECIES_MAMOSWINE, //象牙猪
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD, MOVE_PROTECT}, //十万马力，冰锥，冰砾，守住
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_5] = {
        .species = SPECIES_MAMOSWINE, //象牙猪
        .moves = {MOVE_ICY_WIND, MOVE_SUBSTITUTE, MOVE_ROAR, MOVE_STEALTH_ROCK}, //冰冻之风，替身，吼叫，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANDIBUZZ_1] = {
        .species = SPECIES_MANDIBUZZ, //秃鹰娜
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST}, //拍落，剧毒，清除浓雾，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 136, 16, 0, 108),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MANDIBUZZ_2] = {
        .species = SPECIES_MANDIBUZZ, //秃鹰娜
        .moves = {MOVE_PUNISHMENT, MOVE_SWAGGER, MOVE_ROOST, MOVE_SUBSTITUTE}, //惩罚，虚张声势，羽栖，替身
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MANDIBUZZ_3] = {
        .species = SPECIES_MANDIBUZZ, //秃鹰娜
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_INCINERATE, MOVE_NASTY_PLOT}, //恶之波动，空气之刃，烧净，诡计
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANDIBUZZ_4] = {
        .species = SPECIES_MANDIBUZZ, //秃鹰娜
        .moves = {MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_WHIRLWIND, MOVE_TAILWIND}, //欺诈，挑衅，吹飞，顺风
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(220, 0, 252, 0, 0, 36),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC, //雷电兽
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_RISING_VOLTAGE}, //十万伏特，伏特替换，过热，电力上升
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC, //雷电兽
        .moves = {MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER}, //电力上升，伏特替换，喷射火焰，觉醒力量
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC, //雷电兽
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_VOLT_SWITCH, MOVE_RISING_VOLTAGE}, //十万伏特，喷射火焰，伏特替换，电力上升
        .heldItem = ITEM_MANECTITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_MANECTRIC, //雷电兽
        .moves = {MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_HIDDEN_POWER, MOVE_RISING_VOLTAGE}, //伏特替换，过热，觉醒力量，电力上升
        .heldItem = ITEM_MANECTITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANECTRIC_5] = {
        .species = SPECIES_MANECTRIC, //雷电兽
        .moves = {MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_LIGHT_SCREEN, MOVE_RISING_VOLTAGE}, //伏特替换，大声咆哮，光墙，电力上升
        .heldItem = ITEM_MANECTITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE, //巨翅飞鱼
        .moves = {MOVE_SCALD, MOVE_MIRROR_COAT, MOVE_TAILWIND, MOVE_ROOST}, //热水，镜面反射，顺风，羽栖
        .heldItem = ITEM_ENIGMA_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE, //巨翅飞鱼
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT}, //热水，剧毒，羽栖，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 40, 0, 0, 220),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANTINE_3] = {
        .species = SPECIES_MANTINE, //巨翅飞鱼
        .moves = {MOVE_SCALD, MOVE_DEFOG, MOVE_TAILWIND, MOVE_ROOST}, //热水，清除浓雾，顺风，羽栖
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(248, 0, 40, 0, 0, 220),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANTINE_4] = {
        .species = SPECIES_MANTINE, //巨翅飞鱼
        .moves = {MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_ROOST, MOVE_WIDE_GUARD}, //冰冻之风，求雨，羽栖，广域防守
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MARACTUS_1] = {
        .species = SPECIES_MARACTUS, //沙铃仙人掌
        .moves = {MOVE_SOLAR_BEAM, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER, MOVE_KNOCK_OFF}, //日光束，巨声，觉醒力量，拍落
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MARACTUS_2] = {
        .species = SPECIES_MARACTUS, //沙铃仙人掌
        .moves = {MOVE_SOLAR_BEAM, MOVE_SYNTHESIS, MOVE_COTTON_GUARD, MOVE_SUNNY_DAY}, //日光束，光合作用，棉花防守，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(128, 0, 0, 128, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MARACTUS_3] = {
        .species = SPECIES_MARACTUS, //沙铃仙人掌
        .moves = {MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_SPIKES, MOVE_SPIKY_SHIELD}, //拍落，寄生种子，撒菱，尖刺防守
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MARACTUS_4] = {
        .species = SPECIES_MARACTUS, //沙铃仙人掌
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_BULLET_SEED}, //吸取拳，拍落，毒击，种子机关枪
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK, //嘎啦嘎啦
        .moves = {MOVE_BONEMERANG, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_SWORDS_DANCE}, //骨头回力镖，双刃头锤，舍身冲撞，剑舞
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK, //嘎啦嘎啦
        .moves = {MOVE_BONE_RUSH, MOVE_ROCK_BLAST, MOVE_SHADOW_BONE, MOVE_POWER_UP_PUNCH}, //骨棒乱打，岩石爆击，暗影之骨，增强拳
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK, //嘎啦嘎啦
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_PAIN_SPLIT, MOVE_BELLY_DRUM}, //地震，岩崩，分担痛楚，腹鼓
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK, //嘎啦嘎啦
        .moves = {MOVE_BONE_RUSH, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //骨棒乱打，岩崩，隐形岩，守住
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_ALOLA_1] = {
        .species = SPECIES_MAROWAK_ALOLA, //阿罗拉嘎啦嘎啦
        .moves = {MOVE_FLARE_BLITZ, MOVE_POLTERGEIST, MOVE_BONEMERANG, MOVE_SWORDS_DANCE}, //闪焰冲锋，灵骚，骨头回力镖，剑舞
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MAROWAK_ALOLA_2] = {
        .species = SPECIES_MAROWAK_ALOLA, //阿罗拉嘎啦嘎啦
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_STEALTH_ROCK}, //拍落，磷火，分担痛楚，隐形岩
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MAROWAK_ALOLA_3] = {
        .species = SPECIES_MAROWAK_ALOLA, //阿罗拉嘎啦嘎啦
        .moves = {MOVE_HEX, MOVE_FIRE_BLAST, MOVE_WILL_O_WISP, MOVE_SUNNY_DAY}, //祸不单行，大字爆炎，磷火，大晴天
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAROWAK_ALOLA_4] = {
        .species = SPECIES_MAROWAK_ALOLA, //阿罗拉嘎啦嘎啦
        .moves = {MOVE_FLARE_BLITZ, MOVE_POLTERGEIST, MOVE_BONEMERANG, MOVE_PROTECT}, //闪焰冲锋，灵骚，骨头回力镖，守住
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN, //雨翅蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_QUIVER_DANCE}, //虫鸣，暴风，水炮，蝶舞
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN, //雨翅蛾
        .moves = {MOVE_INFESTATION, MOVE_STUN_SPORE, MOVE_TAILWIND, MOVE_DOUBLE_TEAM}, //纠缠不休，麻痹粉，顺风，影子分身
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MASQUERAIN_3] = {
        .species = SPECIES_MASQUERAIN, //雨翅蛾
        .moves = {MOVE_HURRICANE, MOVE_STICKY_WEB, MOVE_BATON_PASS, MOVE_QUIVER_DANCE}, //暴风，黏黏网，接棒，蝶舞
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MASQUERAIN_4] = {
        .species = SPECIES_MASQUERAIN, //雨翅蛾
        .moves = {MOVE_ICY_WIND, MOVE_OMINOUS_WIND, MOVE_DEFOG, MOVE_TAILWIND}, //冰冻之风，奇异之风，清除浓雾，顺风
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAUSHOLD_FOUR] = {
        .species = SPECIES_MAUSHOLD_FOUR, //一家鼠四只
        .moves = {MOVE_POPULATION_BOMB, MOVE_FOLLOW_ME, MOVE_ENCORE, MOVE_HELPING_HAND}, //鼠数儿，看我嘛，再来一次，帮助
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAUSHOLD_THREE] = {
        .species = SPECIES_MAUSHOLD_THREE, //一家鼠三只
        .moves = {MOVE_POPULATION_BOMB, MOVE_FOLLOW_ME, MOVE_PROTECT, MOVE_SHADOW_CLAW}, //鼠数儿，看我嘛，守住，暗影爪
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(88, 252, 0, 168, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAWILE_1] = {
        .species = SPECIES_MAWILE, //大嘴娃
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PSYCHIC_FANGS}, //嬉闹，铁头，突袭，精神之牙
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAWILE_2] = {
        .species = SPECIES_MAWILE, //大嘴娃
        .moves = {MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //嬉闹，突袭，拍落，剑舞
        .heldItem = ITEM_MAWILITE,
        .ev = TRAINER_PARTY_EVS(92, 252, 0, 164, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MAWILE_3] = {
        .species = SPECIES_MAWILE, //大嘴娃
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_FIRE_FANG, MOVE_SUCKER_PUNCH}, //嬉闹，铁头，火焰牙，突袭
        .heldItem = ITEM_MAWILITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MAWILE_4] = {
        .species = SPECIES_MAWILE, //大嘴娃
        .moves = {MOVE_PLAY_ROUGH, MOVE_METAL_BURST, MOVE_ATTRACT, MOVE_TAUNT}, //嬉闹，金属爆炸，迷人，挑衅
        .heldItem = ITEM_WEPEAR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM, //恰雷姆
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_PUNCH, MOVE_BULLET_PUNCH}, //飞膝踢，意念头锤，雷电拳，子弹拳
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM, //恰雷姆
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_CALM_MIND}, //精神强念，暗影球，能量球，冥想
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM, //恰雷姆
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_FAKE_OUT}, //飞膝踢，意念头锤，冰冻拳，击掌奇袭
        .heldItem = ITEM_MEDICHAMITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_MEDICHAM, //恰雷姆
        .moves = {MOVE_FAKE_OUT, MOVE_ACUPRESSURE, MOVE_HELPING_HAND, MOVE_RECOVER}, //击掌奇袭，点穴，帮助，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM, //大竺葵
        .moves = {MOVE_GRASSY_GLIDE, MOVE_STOMPING_TANTRUM, MOVE_DRAGON_TAIL, MOVE_SWORDS_DANCE}, //青草滑梯，跺脚，龙尾，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM, //大竺葵
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_AROMATHERAPY, MOVE_SYNTHESIS}, //终极吸取，剧毒，芳香治疗，光合作用
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM, //大竺葵
        .moves = {MOVE_GRASSY_GLIDE, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_BODY_SLAM}, //青草滑梯，终极吸取，大地之力，泰山压顶
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_MEGANIUM, //大竺葵
        .moves = {MOVE_GIGA_DRAIN, MOVE_POLLEN_PUFF, MOVE_LEECH_SEED, MOVE_SYNTHESIS}, //终极吸取，花粉团，寄生种子，光合作用
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MELMETAL_1] = {
        .species = SPECIES_MELMETAL, //美录梅塔
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH}, //钢拳双击，冰冻拳，地震，雷电拳
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MELMETAL_2] = {
        .species = SPECIES_MELMETAL_GMAX, //美录梅塔
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_SUPERPOWER, MOVE_DARKEST_LARIAT, MOVE_THUNDER_PUNCH}, //钢拳双击，蛮力，ＤＤ金勾臂，雷电拳
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MELMETAL_3] = {
        .species = SPECIES_MELMETAL_GMAX, //美录梅塔
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_ACID_ARMOR}, //钢拳双击，地震，冰冻拳，溶化
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MELMETAL_4] = {
        .species = SPECIES_MELMETAL_GMAX, //美录梅塔
        .moves = {MOVE_ICE_PUNCH, MOVE_TOXIC, MOVE_THUNDER_WAVE, MOVE_REST}, //冰冻拳，剧毒，电磁波，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MELMETAL_5] = {
        .species = SPECIES_MELMETAL, //美录梅塔
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //钢拳双击，十万马力，岩崩，守住
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MELMETAL_6] = {
        .species = SPECIES_MELMETAL, //美录梅塔
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_HIGH_HORSEPOWER, MOVE_THUNDER_PUNCH, MOVE_PROTECT}, //钢拳双击，十万马力，雷电拳，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MEOWSCARADA_1] = {
        .species = SPECIES_MEOWSCARADA, //魔幻假面喵
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_PROTECT}, //千变万花，拍落，嬉闹，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEOWSCARADA_2] = {
        .species = SPECIES_MEOWSCARADA, //魔幻假面喵
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK, MOVE_SUCKER_PUNCH}, //千变万花，拍落，劈瓦，突袭
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEOWSTIC_F_1] = {
        .species = SPECIES_MEOWSTIC_F, //雌性超能妙喵
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //广域战力，暗影球，觉醒力量，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(12, 0, 0, 248, 248, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEOWSTIC_F_2] = {
        .species = SPECIES_MEOWSTIC_F, //雌性超能妙喵
        .moves = {MOVE_STORED_POWER, MOVE_SHADOW_BALL, MOVE_CHARGE_BEAM, MOVE_NASTY_PLOT}, //广域战力，暗影球，充电光束，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEOWSTIC_F_3] = {
        .species = SPECIES_MEOWSTIC_F, //雌性超能妙喵
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER}, //广域战力，暗影球，十万伏特，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(12, 0, 0, 248, 248, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEOWSTIC_M_1] = {
        .species = SPECIES_MEOWSTIC_M, //雄性超能妙喵
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //广域战力，电磁波，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MEOWSTIC_M_2] = {
        .species = SPECIES_MEOWSTIC_M, //雄性超能妙喵
        .moves = {MOVE_PSYSHOCK, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_CHARM}, //精神冲击，替身，剧毒，撒娇
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MEOWSTIC_M_3] = {
        .species = SPECIES_MEOWSTIC_M, //雄性超能妙喵
        .moves = {MOVE_PSYCHIC, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_THUNDER_WAVE}, //广域战力，帮助，治愈铃声，电磁波
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MESPRIT_1] = {
        .species = SPECIES_MESPRIT, //艾姆利多
        .moves = {MOVE_PSYCHIC, MOVE_U_TURN, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK}, //精神强念，急速折返，电磁波，隐形岩
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 0, 0, 16),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MESPRIT_2] = {
        .species = SPECIES_MESPRIT, //艾姆利多
        .moves = {MOVE_STORED_POWER, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_SUBSTITUTE}, //辅助力量，冰冻光束，冥想，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(208, 0, 0, 252, 0, 48),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MESPRIT_3] = {
        .species = SPECIES_MESPRIT, //艾姆利多
        .moves = {MOVE_MYSTICAL_POWER, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_EXPANDING_FORCE}, //神秘之力，冰冻光束，信号光束，广域战力
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MESPRIT_4] = {
        .species = SPECIES_MESPRIT, //艾姆利多
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_KNOCK_OFF, MOVE_HELPING_HAND, MOVE_TRICK_ROOM}, //魔法闪耀，拍落，帮助，戏法空间
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 0, 0, 240),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS, //巨金怪
        .moves = {MOVE_METEOR_MASH, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //彗星拳，扑击，剧毒，隐形岩
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MIENSHAO_1] = {
        .species = SPECIES_MIENSHAO, //师父鼬
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_U_TURN}, //飞膝踢，拍落，毒击，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIENSHAO_2] = {
        .species = SPECIES_MIENSHAO, //师父鼬
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_U_TURN}, //近身战，拍落，尖石攻击，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIENSHAO_3] = {
        .species = SPECIES_MIENSHAO, //师父鼬
        .moves = {MOVE_DRAIN_PUNCH, MOVE_CALM_MIND, MOVE_ENDURE, MOVE_BATON_PASS}, //吸取拳，冥想，挺住，接棒
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIENSHAO_4] = {
        .species = SPECIES_MIENSHAO, //师父鼬
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT, MOVE_QUICK_GUARD}, //近身战，岩崩，击掌奇袭，快速防守
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA, //大狼犬
        .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL}, //咬碎，突袭，嬉闹，铁尾
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA, //大狼犬
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}, //咬碎，精神之牙，火焰牙，雷电牙
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIGHTYENA_3] = {
        .species = SPECIES_MIGHTYENA, //大狼犬
        .moves = {MOVE_FOUL_PLAY, MOVE_SUPER_FANG, MOVE_YAWN, MOVE_PROTECT}, //欺诈，愤怒门牙，哈欠，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIGHTYENA_4] = {
        .species = SPECIES_MIGHTYENA, //大狼犬
        .moves = {MOVE_SNARL, MOVE_HYPER_VOICE, MOVE_BURNING_JEALOUSY, MOVE_SUPER_FANG}, //大声咆哮，巨声，妒火，愤怒门牙
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC, //美纳斯
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}, //水炮，冰冻光束，龙之波动，觉醒力量
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC, //美纳斯
        .moves = {MOVE_SURF, MOVE_MIRROR_COAT, MOVE_CONFUSE_RAY, MOVE_RECOVER}, //冲浪，镜面反射，奇异之光，自我再生
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC, //美纳斯
        .moves = {MOVE_SCALD, MOVE_HAZE, MOVE_RECOVER, MOVE_FLIP_TURN}, //热水，黑雾，自我再生，快速折返
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_MILOTIC, //美纳斯
        .moves = {MOVE_MUDDY_WATER, MOVE_HYPNOSIS, MOVE_COIL, MOVE_RECOVER}, //浊流，催眠术，盘蜷，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 56, 0, 116, 84),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK, //大奶罐
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_MILK_DRINK}, //舍身冲撞，地震，火焰拳，喝牛奶
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK, //大奶罐
        .moves = {MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK, MOVE_MILK_DRINK}, //扑击，电磁波，隐形岩，喝牛奶
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK, //大奶罐
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_MILK_DRINK}, //地球上投，剧毒，隐形岩，喝牛奶
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_MILTANK, //大奶罐
        .moves = {MOVE_DIZZY_PUNCH, MOVE_STEALTH_ROCK, MOVE_HELPING_HAND, MOVE_MILK_DRINK}, //迷昏拳，隐形岩，帮助，喝牛奶
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MIMIKYU_DISGUISED_1] = {
        .species = SPECIES_MIMIKYU_DISGUISED, //谜拟丘-化形的样子
        .moves = {MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}, //暗影爪，嬉闹，影子偷袭，剑舞
        .heldItem = ITEM_MIMIKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIMIKYU_DISGUISED_2] = {
        .species = SPECIES_MIMIKYU_DISGUISED, //谜拟丘-化形的样子
        .moves = {MOVE_PLAY_ROUGH, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE, MOVE_TRICK_ROOM}, //嬉闹，磷火，替身，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIMIKYU_DISGUISED_3] = {
        .species = SPECIES_MIMIKYU_DISGUISED, //谜拟丘-化形的样子
        .moves = {MOVE_SHADOW_SNEAK, MOVE_INFESTATION, MOVE_CURSE, MOVE_WILL_O_WISP}, //影子偷袭，纠缠不休，诅咒，磷火
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MIMIKYU_DISGUISED_4] = {
        .species = SPECIES_MIMIKYU_DISGUISED, //谜拟丘-化形的样子
        .moves = {MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM}, //影子偷袭，嬉闹，磷火，戏法空间
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MINIOR_METEOR_BLUE] = {
        .species = SPECIES_MINIOR_METEOR_BLUE, //小陨星蓝
        .moves = {MOVE_ROCK_SLIDE, MOVE_CONFUSE_RAY, MOVE_STEALTH_ROCK, MOVE_SANDSTORM}, //岩崩，奇异之光，隐形岩，沙暴
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(0, 136, 100, 216, 0, 56),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MINIOR_METEOR_GREEN] = {
        .species = SPECIES_MINIOR_METEOR_GREEN, //小陨星绿
        .moves = {MOVE_ROCK_TOMB, MOVE_U_TURN, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //岩石封锁，急速折返，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MINIOR_METEOR_ORANGE] = {
        .species = SPECIES_MINIOR_METEOR_ORANGE, //小陨星橘
        .moves = {MOVE_STONE_EDGE, MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_SHELL_SMASH}, //尖石攻击，杂技，地震，破壳
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MINIOR_METEOR_YELLOW] = {
        .species = SPECIES_MINIOR_METEOR_YELLOW, //小陨星黄
        .moves = {MOVE_ANCIENT_POWER, MOVE_CHARGE_BEAM, MOVE_CONFUSE_RAY, MOVE_COSMIC_POWER}, //原始之力，充电光束，奇异之光，宇宙力量
        .heldItem = ITEM_ABSORB_BULB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN, //负电拍拍
        .moves = {MOVE_RISING_VOLTAGE, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE}, //电力上升，觉醒力量，诡计，替身
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN, //负电拍拍
        .moves = {MOVE_RISING_VOLTAGE, MOVE_GRASS_KNOT, MOVE_MUD_SLAP, MOVE_HIDDEN_POWER}, //电力上升，打草结，掷泥，觉醒力量
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MINUN_3] = {
        .species = SPECIES_MINUN, //负电拍拍
        .moves = {MOVE_ENCORE, MOVE_SWEET_KISS, MOVE_WISH, MOVE_HELPING_HAND}, //再来一次，天使之吻，祈愿，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MINUN_4] = {
        .species = SPECIES_MINUN, //负电拍拍
        .moves = {MOVE_RISING_VOLTAGE, MOVE_ELECTROWEB, MOVE_HELPING_HAND, MOVE_SUBSTITUTE}, //电力上升，电网，帮助，替身
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MISMAGIUS_1] = {
        .species = SPECIES_MISMAGIUS, //梦妖魔
        .moves = {MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_NASTY_PLOT}, //暗影球，魔法闪耀，挑衅，诡计
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MISMAGIUS_2] = {
        .species = SPECIES_MISMAGIUS, //梦妖魔
        .moves = {MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE}, //暗影球，魔法火焰，诡计，替身
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MISMAGIUS_3] = {
        .species = SPECIES_MISMAGIUS, //梦妖魔
        .moves = {MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}, //暗影球，魔法闪耀，磷火，分担痛楚
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MISMAGIUS_4] = {
        .species = SPECIES_MISMAGIUS, //梦妖魔
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PERISH_SONG, MOVE_TAUNT, MOVE_DESTINY_BOND}, //魔法闪耀，终焉之歌，挑衅，同命
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES, //火焰鸟
        .moves = {MOVE_OVERHEAT, MOVE_AEROBLAST, MOVE_SCORCHING_SANDS, MOVE_U_TURN}, //过热，气旋攻击，热沙大地，急速折返
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES, //火焰鸟
        .moves = {MOVE_FIRE_BLAST, MOVE_AEROBLAST, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}, //大字爆炎，气旋攻击，日光束，大晴天
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES, //火焰鸟
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST}, //喷射火焰，剧毒，清除浓雾，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 44, 216, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES, //火焰鸟
        .moves = {MOVE_BURN_UP, MOVE_AEROBLAST, MOVE_TAILWIND, MOVE_PROTECT}, //燃尽，气旋攻击，顺风，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_GALAR_1] = {
        .species = SPECIES_MOLTRES_GALAR, //伽勒尔火焰鸟
        .moves = {MOVE_HURRICANE, MOVE_FIERY_WRATH, MOVE_NASTY_PLOT, MOVE_AGILITY}, //暴风，怒火中烧，诡计，高速移动
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_GALAR_2] = {
        .species = SPECIES_MOLTRES_GALAR, //伽勒尔火焰鸟
        .moves = {MOVE_FIERY_WRATH, MOVE_NASTY_PLOT, MOVE_SLEEP_TALK, MOVE_REST}, //怒火中烧，诡计，梦话，睡觉
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 144, 0, 116),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MOLTRES_GALAR_3] = {
        .species = SPECIES_MOLTRES_GALAR, //伽勒尔火焰鸟
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_SUBSTITUTE, MOVE_NASTY_PLOT}, //怒火中烧，空气之刃，替身，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_GALAR_4] = {
        .species = SPECIES_MOLTRES_GALAR, //伽勒尔火焰鸟
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_TAUNT, MOVE_TAILWIND}, //怒火中烧，空气之刃，挑衅，顺风
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MORPEKO_FULL_BELLY_1] = {
        .species = SPECIES_MORPEKO_FULL_BELLY, //莫鲁贝可
        .moves = {MOVE_AURA_WHEEL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}, //气场轮，咬碎，冰冻牙，精神之牙
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MORPEKO_FULL_BELLY_2] = {
        .species = SPECIES_MORPEKO_FULL_BELLY, //莫鲁贝可
        .moves = {MOVE_THUNDERBOLT, MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_AGILITY}, //十万伏特，恶之波动，诡计，高速移动
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MORPEKO_FULL_BELLY_3] = {
        .species = SPECIES_MORPEKO_FULL_BELLY, //莫鲁贝可
        .moves = {MOVE_AURA_WHEEL, MOVE_FAKE_OUT, MOVE_RAPID_SPIN, MOVE_PARTING_SHOT}, //气场轮，击掌奇袭，高速旋转，抛下狠话
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MORPEKO_FULL_BELLY_4] = {
        .species = SPECIES_MORPEKO_FULL_BELLY, //莫鲁贝可
        .moves = {MOVE_AURA_WHEEL, MOVE_ELECTROWEB, MOVE_PARTING_SHOT, MOVE_PROTECT}, //气场轮，电网，抛下狠话，守住
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MOTHIM_PLANT_1] = {
        .species = SPECIES_MOTHIM_PLANT, //绅士蛾
        .moves = {MOVE_HURRICANE, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE}, //暴风，终极吸取，觉醒力量，蝶舞
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOTHIM_PLANT_2] = {
        .species = SPECIES_MOTHIM_PLANT, //绅士蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_HIDDEN_POWER, MOVE_U_TURN}, //虫鸣，空气之刃，觉醒力量，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOTHIM_PLANT_3] = {
        .species = SPECIES_MOTHIM_PLANT, //绅士蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_ROOST}, //虫鸣，暴风，蝶舞，羽栖
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOTHIM_PLANT_4] = {
        .species = SPECIES_MOTHIM_PLANT, //绅士蛾
        .moves = {MOVE_STRUGGLE_BUG, MOVE_HURRICANE, MOVE_ELECTROWEB, MOVE_TAILWIND}, //虫之抵抗，暴风，电网，顺风
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME, //魔墙人偶
        .moves = {MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //精神冲击，吸取之吻，觉醒力量，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME, //魔墙人偶
        .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_HIDDEN_POWER}, //精神强念，吸取之吻，魔法叶，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 4, 248, 248, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_MIME, //魔墙人偶
        .moves = {MOVE_PSYSHOCK, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE, MOVE_BATON_PASS}, //精神冲击，诡计，替身，接棒
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_MIME, //魔墙人偶
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FAKE_OUT, MOVE_TEETER_DANCE, MOVE_WIDE_GUARD}, //魔法闪耀，击掌奇袭，摇晃舞，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_RIME_1] = {
        .species = SPECIES_MR_RIME, //踏冰人偶
        .moves = {MOVE_TRIPLE_AXEL, MOVE_ZEN_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_TRICK}, //三旋击，意念头锤，跺脚，戏法
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MR_RIME_2] = {
        .species = SPECIES_MR_RIME, //踏冰人偶
        .moves = {MOVE_PSYSHOCK, MOVE_FREEZE_DRY, MOVE_EXPANDING_FORCE, MOVE_TAUNT}, //精神冲击，冷冻干燥，广域战力，挑衅
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_RIME_3] = {
        .species = SPECIES_MR_RIME, //踏冰人偶
        .moves = {MOVE_EXPANDING_FORCE, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL}, //广域战力，冰冻光束，真气弹，能量球
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_RIME_4] = {
        .species = SPECIES_MR_RIME, //踏冰人偶
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_PROTECT}, //精神强念，冰冻光束，真气弹，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MUDSDALE_1] = {
        .species = SPECIES_MUDSDALE, //重泥挽马
        .moves = {MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_ROCK_SLIDE}, //地震，近身战，重磅冲撞，岩崩
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MUDSDALE_2] = {
        .species = SPECIES_MUDSDALE, //重泥挽马
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK}, //十万马力，扑击，吼叫，隐形岩
        .heldItem = ITEM_PASSHO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUDSDALE_3] = {
        .species = SPECIES_MUDSDALE, //重泥挽马
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK}, //地震，剧毒，睡觉，梦话
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 104, 0, 0, 152),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUDSDALE_4] = {
        .species = SPECIES_MUDSDALE, //重泥挽马
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK}, //地震，扑击，吼叫，隐形岩
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK, //臭臭泥
        .moves = {MOVE_GUNK_SHOT, MOVE_SHADOW_SNEAK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}, //垃圾射击，影子偷袭，火焰拳，冰冻拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK, //臭臭泥
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_EXPLOSION}, //垃圾射击，拍落，冰冻拳，大爆炸
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK, //臭臭泥
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_CURSE}, //毒击，拍落，岩崩，诅咒
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK, //臭臭泥
        .moves = {MOVE_GUNK_SHOT, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_PROTECT}, //垃圾射击，岩崩，拍落，守住
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_ALOLA_1] = {
        .species = SPECIES_MUK_ALOLA, //阿罗拉臭臭泥
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_SHADOW_SNEAK}, //毒击，拍落，冰冻拳，影子偷袭
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_ALOLA_2] = {
        .species = SPECIES_MUK_ALOLA, //阿罗拉臭臭泥
        .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_STONE_EDGE, MOVE_SHADOW_SNEAK}, //毒击，咬碎，尖石攻击，影子偷袭
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_ALOLA_3] = {
        .species = SPECIES_MUK_ALOLA, //阿罗拉臭臭泥
        .moves = {MOVE_ACID_SPRAY, MOVE_SNARL, MOVE_MINIMIZE, MOVE_REST}, //酸液炸弹，大声咆哮，变小，睡觉
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUK_ALOLA_4] = {
        .species = SPECIES_MUK_ALOLA, //阿罗拉臭臭泥
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SNARL, MOVE_KNOCK_OFF, MOVE_DISABLE}, //污泥波，大声咆哮，拍落，定身法
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 96, 0, 0, 160),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_MUNKIDORI_1] = {
        .species = SPECIES_MUNKIDORI, //愿增猿
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SHADOW_BALL, MOVE_PSYCHIC_NOISE, MOVE_PSYCHIC}, //污泥波，暗影球，精神噪音，精神强念
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MUNKIDORI_2] = {
        .species = SPECIES_MUNKIDORI, //愿增猿
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SHADOW_BALL, MOVE_FAKE_OUT, MOVE_NASTY_PLOT}, //污泥波，暗影球，击掌奇袭，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MUSHARNA_1] = {
        .species = SPECIES_MUSHARNA, //梦梦蚀
        .moves = {MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_MOONLIGHT, MOVE_CALM_MIND}, //精神冲击，月亮之力，月光，冥想
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUSHARNA_2] = {
        .species = SPECIES_MUSHARNA, //梦梦蚀
        .moves = {MOVE_FUTURE_SIGHT, MOVE_TOXIC, MOVE_CALM_MIND, MOVE_MOONLIGHT}, //预知未来，剧毒，冥想，月光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUSHARNA_3] = {
        .species = SPECIES_MUSHARNA, //梦梦蚀
        .moves = {MOVE_STORED_POWER, MOVE_MOONLIGHT, MOVE_CALM_MIND, MOVE_BARRIER}, //辅助力量，月光，冥想，屏障
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MUSHARNA_4] = {
        .species = SPECIES_MUSHARNA, //梦梦蚀
        .moves = {MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_PROTECT}, //精神冲击，戏法空间，帮助，守住
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_NAGANADEL_1] = {
        .species = SPECIES_NAGANADEL, //四颚针龙
        .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT}, //龙之波动，污泥波，喷射火焰，诡计
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NAGANADEL_2] = {
        .species = SPECIES_NAGANADEL, //四颚针龙
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST, MOVE_U_TURN}, //流星群，污泥波，大字爆炎，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NAGANADEL_3] = {
        .species = SPECIES_NAGANADEL, //四颚针龙
        .moves = {MOVE_DRAGON_CLAW, MOVE_POISON_JAB, MOVE_SHADOW_CLAW, MOVE_FELL_STINGER}, //龙爪，毒击，暗影爪，致命针刺
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NAGANADEL_4] = {
        .species = SPECIES_NAGANADEL, //四颚针龙
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_TAILWIND}, //流星群，污泥炸弹，大字爆炎，顺风
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING, //尼多王
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT}, //大地之力，污泥波，大字爆炎，十万伏特
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING, //尼多王
        .moves = {MOVE_POISON_TAIL, MOVE_DRILL_RUN, MOVE_SHADOW_CLAW, MOVE_FOCUS_ENERGY}, //毒尾，直冲钻，暗影爪，聚气
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING, //尼多王
        .moves = {MOVE_EARTH_POWER, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_HEAD_SMASH}, //大地之力，真气弹，冰冻光束，双刃头锤
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING, //尼多王
        .moves = {MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK, MOVE_SANDSTORM}, //扑击，吼叫，隐形岩，沙暴
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN, //尼多后
        .moves = {MOVE_EARTH_POWER, MOVE_SHELL_SIDE_ARM, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}, //大地之力，臂贝武器，十万伏特，暗影球
        .heldItem = ITEM_ABSORB_BULB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN, //尼多后
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE}, //臂贝武器，地震，蛮力，岩崩
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN, //尼多后
        .moves = {MOVE_BODY_PRESS, MOVE_ROAR, MOVE_STEALTH_ROCK, MOVE_TOXIC_SPIKES}, //扑击，吼叫，隐形岩，毒菱
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN, //尼多后
        .moves = {MOVE_ICY_WIND, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_HELPING_HAND}, //冰冻之风，剧毒，隐形岩，帮助
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NIHILEGO_1] = {
        .species = SPECIES_NIHILEGO, //虚吾伊德
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER}, //力量宝石，污泥波，十万伏特，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NIHILEGO_2] = {
        .species = SPECIES_NIHILEGO, //虚吾伊德
        .moves = {MOVE_ACID_SPRAY, MOVE_THUNDER_WAVE, MOVE_TOXIC_SPIKES, MOVE_STEALTH_ROCK}, //酸液炸弹，电磁波，毒菱，隐形岩
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NIHILEGO_3] = {
        .species = SPECIES_NIHILEGO, //虚吾伊德
        .moves = {MOVE_KNOCK_OFF, MOVE_BIND, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //拍落，绑紧，剧毒，隐形岩
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_NIHILEGO_4] = {
        .species = SPECIES_NIHILEGO, //虚吾伊德
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //毒液冲击，剧毒，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES, //九尾
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_PSYSHOCK, MOVE_NASTY_PLOT}, //大字爆炎，日光束，精神冲击，诡计
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES, //九尾
        .moves = {MOVE_SCORCHING_SANDS, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY}, //热沙大地，祸不单行，磷火，奇异之光
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES, //九尾
        .moves = {MOVE_FOUL_PLAY, MOVE_SNORE, MOVE_TOXIC, MOVE_REST}, //欺诈，打鼾，剧毒，睡觉
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 8, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES, //九尾
        .moves = {MOVE_HEAT_WAVE, MOVE_HIDDEN_POWER, MOVE_WILL_O_WISP, MOVE_PROTECT}, //热风，觉醒力量，磷火，守住
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_ALOLA_1] = {
        .species = SPECIES_NINETALES_ALOLA, //阿罗拉九尾
        .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_AURORA_VEIL}, //暴风雪，月亮之力，精神冲击，极光幕
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_ALOLA_2] = {
        .species = SPECIES_NINETALES_ALOLA, //阿罗拉九尾
        .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_AURORA_VEIL}, //暴风雪，月亮之力，诡计，极光幕
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_ALOLA_3] = {
        .species = SPECIES_NINETALES_ALOLA, //阿罗拉九尾
        .moves = {MOVE_BLIZZARD, MOVE_TOXIC, MOVE_AURORA_VEIL, MOVE_SUBSTITUTE}, //暴风雪，剧毒，极光幕，替身
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NINETALES_ALOLA_4] = {
        .species = SPECIES_NINETALES_ALOLA, //阿罗拉九尾
        .moves = {MOVE_FREEZE_DRY, MOVE_ENCORE, MOVE_AURORA_VEIL, MOVE_PROTECT}, //冷冻干燥，再来一次，极光幕，守住
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(128, 0, 40, 252, 88, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK, //铁面忍者
        .moves = {MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_BATON_PASS, MOVE_PROTECT}, //十字剪，剑舞，接棒，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK, //铁面忍者
        .moves = {MOVE_BATON_PASS, MOVE_DUAL_WINGBEAT, MOVE_DIG, MOVE_SWORDS_DANCE}, //接棒，双翼，挖洞，剑舞
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NINJASK_3] = {
        .species = SPECIES_NINJASK, //铁面忍者
        .moves = {MOVE_X_SCISSOR, MOVE_DUAL_WINGBEAT, MOVE_FINAL_GAMBIT, MOVE_U_TURN}, //十字剪，双翼，搏命，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NINJASK_4] = {
        .species = SPECIES_NINJASK, //铁面忍者
        .moves = {MOVE_U_TURN, MOVE_SKITTER_SMACK, MOVE_DEFOG, MOVE_SPITE}, //急速折返，爬击，清除浓雾，怨恨
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL, //猫头夜鹰
        .moves = {MOVE_HURRICANE, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_HYPNOSIS}, //暴风，月亮之力，诡计，催眠术
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL, //猫头夜鹰
        .moves = {MOVE_NIGHT_SHADE, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST}, //黑夜魔影，剧毒，清除浓雾，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NOCTOWL_3] = {
        .species = SPECIES_NOCTOWL, //猫头夜鹰
        .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_ROOST, MOVE_SUBSTITUTE}, //辅助力量，冥想，羽栖，替身
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NOCTOWL_4] = {
        .species = SPECIES_NOCTOWL, //猫头夜鹰
        .moves = {MOVE_HEAT_WAVE, MOVE_FEATHER_DANCE, MOVE_TAILWIND, MOVE_ROOST}, //热风，羽毛舞，顺风，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 128, 252, 128, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NOIVERN_1] = {
        .species = SPECIES_NOIVERN, //音波龙
        .moves = {MOVE_DRACO_METEOR, MOVE_AEROBLAST, MOVE_FLAMETHROWER, MOVE_BOOMBURST}, //流星群，气旋攻击，喷射火焰，爆音波
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NOIVERN_2] = {
        .species = SPECIES_NOIVERN, //音波龙
        .moves = {MOVE_AEROBLAST, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_U_TURN}, //气旋攻击，龙之波动，喷射火焰，急速折返
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NOIVERN_3] = {
        .species = SPECIES_NOIVERN, //音波龙
        .moves = {MOVE_AEROBLAST, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_ROOST}, //气旋攻击，愤怒门牙，挑衅，羽栖
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NOIVERN_4] = {
        .species = SPECIES_NOIVERN, //音波龙
        .moves = {MOVE_DRAGON_PULSE, MOVE_HEAT_WAVE, MOVE_BOOMBURST, MOVE_ROOST}, //龙之波动，热风，爆音波，羽栖
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_OBSTAGOON_1] = {
        .species = SPECIES_OBSTAGOON, //堵拦熊
        .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_OBSTRUCT}, //硬撑，拍落，近身战，拦堵
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OBSTAGOON_2] = {
        .species = SPECIES_OBSTAGOON, //堵拦熊
        .moves = {MOVE_DOUBLE_EDGE, MOVE_THROAT_CHOP, MOVE_GUNK_SHOT, MOVE_OBSTRUCT}, //舍身冲撞，深渊突刺，垃圾射击，拦堵
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OBSTAGOON_3] = {
        .species = SPECIES_OBSTAGOON, //堵拦熊
        .moves = {MOVE_DOUBLE_EDGE, MOVE_THIEF, MOVE_PARTING_SHOT, MOVE_OBSTRUCT}, //舍身冲撞，小偷，抛下狠话，拦堵
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OBSTAGOON_4] = {
        .species = SPECIES_OBSTAGOON, //堵拦熊
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HELPING_HAND, MOVE_PARTING_SHOT, MOVE_OBSTRUCT}, //舍身冲撞，帮助，抛下狠话，拦堵
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY, //章鱼桶
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_FIRE_BLAST}, //水炮，冰冻光束，能量球，大字爆炎
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 44, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY, //章鱼桶
        .moves = {MOVE_WATERFALL, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_SCALE_SHOT}, //攀瀑，岩石爆击，种子机关枪，鳞射
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OCTILLERY_3] = {
        .species = SPECIES_OCTILLERY, //章鱼桶
        .moves = {MOVE_OCTAZOOKA, MOVE_OCTOLOCK, MOVE_SUBSTITUTE, MOVE_PROTECT}, //章鱼桶炮，蛸固，替身，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_OCTILLERY_4] = {
        .species = SPECIES_OCTILLERY, //章鱼桶
        .moves = {MOVE_OCTAZOOKA, MOVE_OCTOLOCK, MOVE_THUNDER_WAVE, MOVE_PROTECT}, //章鱼桶炮，蛸固，电磁波，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_OCTILLERY_5] = {
        .species = SPECIES_OCTILLERY, //章鱼桶
        .moves = {MOVE_WATER_SPOUT, MOVE_SLUDGE_WAVE, MOVE_BULLET_SEED, MOVE_ROCK_BLAST}, //喷水，污泥波，种子机关枪，岩石爆击
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_OGERPON_TEAL_1] = {
        .species = SPECIES_OGERPON_TEAL, //厄诡椪-碧草面具
        .moves = {MOVE_SPIKY_SHIELD, MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_U_TURN}, //尖刺防守，棘藤棒，拍落，急速折返
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OGERPON_TEAL_2] = {
        .species = SPECIES_OGERPON_CORNERSTONE, //厄诡椪-础石面具
        .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_KNOCK_OFF}, //剑舞，棘藤棒，强力鞭打，拍落
        .heldItem = ITEM_CORNERSTONE_MASK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OGERPON_TEAL_3] = {
        .species = SPECIES_OGERPON_HEARTHFLAME, //厄诡椪-火灶面具
        .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_TRAILBLAZE, MOVE_SPIKY_SHIELD}, //剑舞，棘藤棒，起草，尖刺防守
        .heldItem = ITEM_HEARTHFLAME_MASK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OGERPON_TEAL_4] = {
        .species = SPECIES_OGERPON_WELLSPRING, //厄诡椪-水井面具
        .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_SPIKY_SHIELD, MOVE_HORN_LEECH}, //剑舞，棘藤棒，尖刺防守，木角
        .heldItem = ITEM_WELLSPRING_MASK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OINKOLOGNE_F] = {
        .species = SPECIES_OINKOLOGNE_F, //雌性飘香豚
        .moves = {MOVE_GIGA_IMPACT, MOVE_PLAY_ROUGH, MOVE_CURSE, MOVE_BODY_PRESS}, //终极冲击，嬉闹，诅咒，扑击
        .heldItem = ITEM_LANSAT_BERRY,
        .ev = TRAINER_PARTY_EVS(64, 224, 220, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OINKOLOGNE_M] = {
        .species = SPECIES_OINKOLOGNE_M, //雄性飘香豚
        .moves = {MOVE_GIGA_IMPACT, MOVE_PLAY_ROUGH, MOVE_SUPER_FANG, MOVE_HIGH_HORSEPOWER}, //终极冲击，嬉闹，愤怒门牙，十万马力
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(68, 220, 220, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OKIDOGI_1] = {
        .species = SPECIES_OKIDOGI, //够赞狗
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_POISON_JAB}, //健美，吸取拳，拍落，毒击
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OKIDOGI_2] = {
        .species = SPECIES_OKIDOGI, //够赞狗
        .moves = {MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_LOW_KICK}, //垃圾射击，近身战，拍落，踢倒
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR, //多刺菊石兽
        .moves = {MOVE_SURF, MOVE_ANCIENT_POWER, MOVE_ICE_BEAM, MOVE_SHELL_SMASH}, //冲浪，原始之力，冰冻光束，破壳
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR, //多刺菊石兽
        .moves = {MOVE_HYDRO_PUMP, MOVE_ANCIENT_POWER, MOVE_ICE_BEAM, MOVE_EARTH_POWER}, //水炮，原始之力，冰冻光束，大地之力
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(128, 0, 128, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OMASTAR_3] = {
        .species = SPECIES_OMASTAR, //多刺菊石兽
        .moves = {MOVE_SCALD, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //热水，隐形岩，撒菱，毒菱
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_OMASTAR_4] = {
        .species = SPECIES_OMASTAR, //多刺菊石兽
        .moves = {MOVE_SURF, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_TOXIC_SPIKES}, //冲浪，拍落，隐形岩，毒菱
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORANGURU_1] = {
        .species = SPECIES_ORANGURU, //智挥猩
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM}, //精神冲击，暗影球，十万伏特，戏法空间
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ORANGURU_2] = {
        .species = SPECIES_ORANGURU, //智挥猩
        .moves = {MOVE_INSTRUCT, MOVE_FOUL_PLAY, MOVE_PROTECT, MOVE_TRICK_ROOM}, //号令，欺诈，守住，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ORANGURU_3] = {
        .species = SPECIES_ORANGURU, //智挥猩
        .moves = {MOVE_INSTRUCT, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TRICK_ROOM}, //号令，反射壁，光墙，戏法空间
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_ORANGURU_4] = {
        .species = SPECIES_ORANGURU, //智挥猩
        .moves = {MOVE_FOUL_PLAY, MOVE_INSTRUCT, MOVE_TRICK_ROOM, MOVE_PROTECT}, //欺诈，号令，戏法空间，守住
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_ORBEETLE_1] = {
        .species = SPECIES_ORBEETLE, //以欧路普
        .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_IRON_DEFENSE, MOVE_RECOVER}, //辅助力量，冥想，铁壁，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 108, 0, 8, 140),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORBEETLE_2] = {
        .species = SPECIES_ORBEETLE, //以欧路普
        .moves = {MOVE_PSYCHIC, MOVE_U_TURN, MOVE_STICKY_WEB, MOVE_RECOVER}, //精神强念，急速折返，黏黏网，自我再生
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ORBEETLE_3] = {
        .species = SPECIES_ORBEETLE, //以欧路普
        .moves = {MOVE_BODY_PRESS, MOVE_MIRROR_COAT, MOVE_IRON_DEFENSE, MOVE_RECOVER}, //扑击，镜面反射，铁壁，自我再生
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORBEETLE_4] = {
        .species = SPECIES_ORBEETLE, //以欧路普
        .moves = {MOVE_U_TURN, MOVE_STICKY_WEB, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //急速折返，黏黏网，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 0, 8),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ORICORIO_BAILE_1] = {
        .species = SPECIES_ORICORIO_BAILE, //花舞鸟
        .moves = {MOVE_SKY_ATTACK, MOVE_ACROBATICS, MOVE_REVELATION_DANCE, MOVE_SWORDS_DANCE}, //神鸟猛击，杂技，觉醒之舞，剑舞
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ORICORIO_BAILE_2] = {
        .species = SPECIES_ORICORIO_BAILE, //花舞鸟
        .moves = {MOVE_REVELATION_DANCE, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_TAILWIND}, //觉醒之舞，冰冻之风，帮助，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORICORIO_PAU_1] = {
        .species = SPECIES_ORICORIO_PAU, //花舞鸟-呼拉呼拉风格
        .moves = {MOVE_U_TURN, MOVE_DEFOG, MOVE_ROOST, MOVE_FEATHER_DANCE}, //急速折返，清除浓雾，羽栖，羽毛舞
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ORICORIO_PAU_2] = {
        .species = SPECIES_ORICORIO_PAU, //花舞鸟-呼拉呼拉风格
        .moves = {MOVE_REVELATION_DANCE, MOVE_TEETER_DANCE, MOVE_HELPING_HAND, MOVE_TAILWIND}, //觉醒之舞，摇晃舞，帮助，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ORICORIO_PAU_3] = {
        .species = SPECIES_ORICORIO_PAU, //花舞鸟-呼拉呼拉风格
        .moves = {MOVE_AIR_SLASH, MOVE_REVELATION_DANCE, MOVE_HIDDEN_POWER, MOVE_U_TURN}, //空气之刃，觉醒之舞，觉醒力量，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ORICORIO_POM_POM_1] = {
        .species = SPECIES_ORICORIO_POM_POM, //啪滋啪滋风格
        .moves = {MOVE_AIR_SLASH, MOVE_REVELATION_DANCE, MOVE_HIDDEN_POWER, MOVE_U_TURN}, //空气之刃，觉醒之舞，觉醒力量，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ORICORIO_POM_POM_2] = {
        .species = SPECIES_ORICORIO_POM_POM, //啪滋啪滋风格
        .moves = {MOVE_AGILITY, MOVE_CALM_MIND, MOVE_SWORDS_DANCE, MOVE_BATON_PASS}, //高速移动，冥想，剑舞，接棒
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORICORIO_POM_POM_3] = {
        .species = SPECIES_ORICORIO_POM_POM, //啪滋啪滋风格
        .moves = {MOVE_REVELATION_DANCE, MOVE_HELPING_HAND, MOVE_SAFEGUARD, MOVE_TAILWIND}, //觉醒之舞，帮助，神秘守护，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORICORIO_SENSU_1] = {
        .species = SPECIES_ORICORIO_SENSU, //花舞鸟-轻盈轻盈风格
        .moves = {MOVE_REVELATION_DANCE, MOVE_TAUNT, MOVE_HELPING_HAND, MOVE_TAILWIND}, //觉醒之舞，挑衅，帮助，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ORICORIO_SENSU_2] = {
        .species = SPECIES_ORICORIO_SENSU, //花舞鸟-轻盈轻盈风格
        .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_ROOST}, //觉醒之舞，暴风，觉醒力量，羽栖
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_OVERQWIL_1] = {
        .species = SPECIES_OVERQWIL, //万针鱼
        .moves = {MOVE_THROAT_CHOP, MOVE_BARB_BARRAGE, MOVE_LIQUIDATION, MOVE_EXPLOSION}, //深渊突刺，毒千针，水流裂破，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OVERQWIL_2] = {
        .species = SPECIES_OVERQWIL, //万针鱼
        .moves = {MOVE_CRUNCH, MOVE_BARB_BARRAGE, MOVE_LIQUIDATION, MOVE_FELL_STINGER}, //咬碎，毒千针，水流裂破，致命针刺
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OVERQWIL_3] = {
        .species = SPECIES_OVERQWIL, //万针鱼
        .moves = {MOVE_MINIMIZE, MOVE_TOXIC, MOVE_BARB_BARRAGE, MOVE_PROTECT}, //变小，剧毒，毒千针，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PACHIRISU_1] = {
        .species = SPECIES_PACHIRISU, //帕奇利兹
        .moves = {MOVE_DISCHARGE, MOVE_HEADBUTT, MOVE_BITE, MOVE_U_TURN}, //放电，头锤，咬住，急速折返
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PACHIRISU_2] = {
        .species = SPECIES_PACHIRISU, //帕奇利兹
        .moves = {MOVE_NUZZLE, MOVE_U_TURN, MOVE_SUPER_FANG, MOVE_TOXIC}, //蹭蹭脸颊，急速折返，愤怒门牙，剧毒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PACHIRISU_3] = {
        .species = SPECIES_PACHIRISU, //帕奇利兹
        .moves = {MOVE_NUZZLE, MOVE_VOLT_SWITCH, MOVE_SUPER_FANG, MOVE_RAIN_DANCE}, //蹭蹭脸颊，伏特替换，愤怒门牙，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PACHIRISU_4] = {
        .species = SPECIES_PACHIRISU, //帕奇利兹
        .moves = {MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_FOLLOW_ME, MOVE_PROTECT}, //蹭蹭脸颊，愤怒门牙，看我嘛，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PALAFIN_ZERO_1] = {
        .species = SPECIES_PALAFIN_ZERO, //海豚侠-平凡形态
        .moves = {MOVE_JET_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_FLIP_TURN}, //喷射拳，吸取拳，冰冻拳，快速折返
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(56, 208, 132, 112, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PALAFIN_ZERO_2] = {
        .species = SPECIES_PALAFIN_ZERO, //海豚侠-平凡形态
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WAVE_CRASH, MOVE_JET_PUNCH, MOVE_FLIP_TURN}, //近身战，波动冲，喷射拳，快速折返
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PALOSSAND_1] = {
        .species = SPECIES_PALOSSAND, //噬沙堡爷
        .moves = {MOVE_SCORCHING_SANDS, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_STRENGTH_SAP}, //热沙大地，剧毒，隐形岩，吸取力量
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PALOSSAND_2] = {
        .species = SPECIES_PALOSSAND, //噬沙堡爷
        .moves = {MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS, MOVE_SANDSTORM, MOVE_SHORE_UP}, //暗影球，热沙大地，沙暴，集沙
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PALOSSAND_3] = {
        .species = SPECIES_PALOSSAND, //噬沙堡爷
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_CURSE, MOVE_SHORE_UP}, //纠缠不休，剧毒，诅咒，集沙
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PALOSSAND_4] = {
        .species = SPECIES_PALOSSAND, //噬沙堡爷
        .moves = {MOVE_SCORCHING_SANDS, MOVE_STEALTH_ROCK, MOVE_SANDSTORM, MOVE_SHORE_UP}, //热沙大地，隐形岩，沙暴，集沙
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PANGORO_1] = {
        .species = SPECIES_PANGORO, //霸道熊猫
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_GUNK_SHOT, MOVE_SWORDS_DANCE}, //吸取拳，冰冻拳，垃圾射击，剑舞
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PANGORO_2] = {
        .species = SPECIES_PANGORO, //霸道熊猫
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BULLET_PUNCH}, //近身战，冰冻拳，雷电拳，子弹拳
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PANGORO_3] = {
        .species = SPECIES_PANGORO, //霸道熊猫
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_POWER_TRIP, MOVE_BULLET_PUNCH, MOVE_BULK_UP}, //增强拳，嚣张，子弹拳，健美
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 2, 0, 0, 2),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PANGORO_4] = {
        .species = SPECIES_PANGORO, //霸道熊猫
        .moves = {MOVE_CIRCLE_THROW, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}, //巴投，拍落，岩崩，地震
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT, //派拉斯特
        .moves = {MOVE_SEED_BOMB, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE, MOVE_SPORE}, //种子炸弹，深渊突刺，剑舞，蘑菇孢子
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT, //派拉斯特
        .moves = {MOVE_X_SCISSOR, MOVE_LEECH_SEED, MOVE_SPORE, MOVE_SUBSTITUTE}, //十字剪，寄生种子，蘑菇孢子，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PARASECT_3] = {
        .species = SPECIES_PARASECT, //派拉斯特
        .moves = {MOVE_SEED_BOMB, MOVE_THROAT_CHOP, MOVE_X_SCISSOR, MOVE_AGILITY}, //种子炸弹，深渊突刺，十字剪，高速移动
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PARASECT_4] = {
        .species = SPECIES_PARASECT, //派拉斯特
        .moves = {MOVE_X_SCISSOR, MOVE_SPORE, MOVE_LEECH_SEED, MOVE_ROTOTILLER}, //十字剪，蘑菇孢子，寄生种子，耕地
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PASSIMIAN_1] = {
        .species = SPECIES_PASSIMIAN, //投掷猴
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_KNOCK_OFF}, //近身战，地震，铁头，拍落
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PASSIMIAN_2] = {
        .species = SPECIES_PASSIMIAN, //投掷猴
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_U_TURN}, //近身战，拍落，岩崩，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PASSIMIAN_3] = {
        .species = SPECIES_PASSIMIAN, //投掷猴
        .moves = {MOVE_REVERSAL, MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_ENDURE}, //绝处逢生，杂技，岩崩，挺住
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PASSIMIAN_4] = {
        .species = SPECIES_PASSIMIAN, //投掷猴
        .moves = {MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_QUICK_GUARD}, //吸取拳，地震，岩崩，快速防守
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PAWMOT_1] = {
        .species = SPECIES_PAWMOT, //巴布土拨
        .moves = {MOVE_DOUBLE_SHOCK, MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_PROTECT}, //电光双击，击掌奇袭，近身战，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(36, 252, 0, 216, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PAWMOT_2] = {
        .species = SPECIES_PAWMOT, //巴布土拨
        .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_WILD_CHARGE}, //电光双击，近身战，音速拳，疯狂伏特
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER, //大嘴鸥
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_KNOCK_OFF, MOVE_DEFOG}, //水炮，暴风，拍落，清除浓雾
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER, //大嘴鸥
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_AGILITY, MOVE_ROOST}, //热水，暴风，高速移动，羽栖
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PELIPPER_3] = {
        .species = SPECIES_PELIPPER, //大嘴鸥
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_KNOCK_OFF, MOVE_ROOST}, //热水，剧毒，拍落，羽栖
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(248, 0, 36, 0, 0, 224),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PELIPPER_4] = {
        .species = SPECIES_PELIPPER, //大嘴鸥
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_KNOCK_OFF, MOVE_WIDE_GUARD}, //水炮，暴风，拍落，广域防守
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PERRSERKER_1] = {
        .species = SPECIES_PERRSERKER, //喵头目
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_SEED_BOMB, MOVE_U_TURN}, //铁头，近身战，种子炸弹，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERRSERKER_2] = {
        .species = SPECIES_PERRSERKER, //喵头目
        .moves = {MOVE_GYRO_BALL, MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_CURSE}, //陀螺球，嬉闹，咬碎，诅咒
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(8, 252, 0, 0, 0, 248),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_PERRSERKER_3] = {
        .species = SPECIES_PERRSERKER, //喵头目
        .moves = {MOVE_IRON_HEAD, MOVE_SEED_BOMB, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE}, //铁头，种子炸弹，剑舞，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERRSERKER_4] = {
        .species = SPECIES_PERRSERKER, //喵头目
        .moves = {MOVE_IRON_HEAD, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT}, //铁头，击掌奇袭，挑衅，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN, //猫老大
        .moves = {MOVE_SWIFT, MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_NASTY_PLOT}, //高速星星，十万伏特，水之波动，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN, //猫老大
        .moves = {MOVE_COVET, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_TAUNT}, //渴望，急速折返，击掌奇袭，挑衅
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_3] = {
        .species = SPECIES_PERSIAN, //猫老大
        .moves = {MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_HYPNOSIS, MOVE_SWAGGER}, //拍落，嬉闹，催眠术，虚张声势
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_4] = {
        .species = SPECIES_PERSIAN, //猫老大
        .moves = {MOVE_RETURN, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_PROTECT}, //报恩，击掌奇袭，挑衅，守住
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_ALOLA_1] = {
        .species = SPECIES_PERSIAN_ALOLA, //阿罗拉猫老大
        .moves = {MOVE_NIGHT_DAZE, MOVE_THUNDERBOLT, MOVE_BURNING_JEALOUSY, MOVE_NASTY_PLOT}, //暗黑爆破，十万伏特，妒火，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PERSIAN_ALOLA_2] = {
        .species = SPECIES_PERSIAN_ALOLA, //阿罗拉猫老大
        .moves = {MOVE_FOUL_PLAY, MOVE_U_TURN, MOVE_SCREECH, MOVE_SWITCHEROO}, //欺诈，急速折返，刺耳声，掉包
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PERSIAN_ALOLA_3] = {
        .species = SPECIES_PERSIAN_ALOLA, //阿罗拉猫老大
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_PARTING_SHOT, MOVE_TAUNT}, //欺诈，剧毒，抛下狠话，挑衅
        .heldItem = ITEM_DARKINIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_ALOLA_4] = {
        .species = SPECIES_PERSIAN_ALOLA, //阿罗拉猫老大
        .moves = {MOVE_SNARL, MOVE_ICY_WIND, MOVE_BURNING_JEALOUSY, MOVE_PROTECT}, //大声咆哮，冰冻之风，妒火，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PHEROMOSA_1] = {
        .species = SPECIES_PHEROMOSA, //费洛美螂
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LUNGE, MOVE_POISON_JAB, MOVE_TRIPLE_AXEL}, //近身战，猛扑，毒击，三旋击
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PHEROMOSA_2] = {
        .species = SPECIES_PHEROMOSA, //费洛美螂
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_QUIVER_DANCE}, //虫鸣，真气弹，冰冻光束，蝶舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PHEROMOSA_3] = {
        .species = SPECIES_PHEROMOSA, //费洛美螂
        .moves = {MOVE_U_TURN, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_DRILL_RUN}, //急速折返，近身战，深渊突刺，直冲钻
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PHEROMOSA_4] = {
        .species = SPECIES_PHEROMOSA, //费洛美螂
        .moves = {MOVE_U_TURN, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_PROTECT}, //急速折返，真气弹，冰冻光束，守住
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PHEROMOSA_5] = {
        .species = SPECIES_PHEROMOSA, //费洛美螂
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BUG_BUZZ, MOVE_BLIZZARD, MOVE_PROTECT}, //近身战，虫鸣，暴风雪，守住
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PHIONE_1] = {
        .species = SPECIES_PHIONE, //霏欧纳
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_MOONBLAST}, //冲浪，冰冻光束，打草结，月亮之力
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PHIONE_2] = {
        .species = SPECIES_PHIONE, //霏欧纳
        .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_ICY_WIND, MOVE_HEAL_BELL}, //热水，急速折返，冰冻之风，治愈铃声
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PHIONE_3] = {
        .species = SPECIES_PHIONE, //霏欧纳
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_U_TURN}, //冲浪，冰冻光束，月亮之力，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PHIONE_4] = {
        .species = SPECIES_PHIONE, //霏欧纳
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_PROTECT}, //潮旋，剧毒，水流环，守住
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 8, 0, 248),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PHIONE_5] = {
        .species = SPECIES_PHIONE, //霏欧纳
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_PROTECT, MOVE_HELPING_HAND}, //热水，冰冻之风，守住，帮助
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT, //大比鸟
        .moves = {MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_STEEL_WING, MOVE_U_TURN}, //勇鸟猛攻，报恩，钢翼，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT, //大比鸟
        .moves = {MOVE_BRAVE_BIRD, MOVE_MIRROR_MOVE, MOVE_FEATHER_DANCE, MOVE_ROOST}, //勇鸟猛攻，鹦鹉学舌，羽毛舞，羽栖
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEOT_3] = {
        .species = SPECIES_PIDGEOT, //大比鸟
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_ROOST}, //暴风，热风，急速折返，羽栖
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PIDGEOT_4] = {
        .species = SPECIES_PIDGEOT, //大比鸟
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_HYPER_BEAM, MOVE_PROTECT}, //暴风，热风，破坏光线，守住
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PIKACHU_1] = {
        .species = SPECIES_PIKACHU, //皮卡丘
        .moves = {MOVE_VOLT_TACKLE, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED, MOVE_FAKE_OUT}, //伏特攻击，嬉闹，神速，击掌奇袭
        .heldItem = ITEM_LIGHT_BALL,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PIKACHU_2] = {
        .species = SPECIES_PIKACHU, //皮卡丘
        .moves = {MOVE_VOLT_TACKLE, MOVE_NUZZLE, MOVE_EXTREME_SPEED, MOVE_FAKE_OUT}, //伏特攻击，蹭蹭脸颊，神速，击掌奇袭
        .heldItem = ITEM_PIKANIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINCURCHIN_1] = {
        .species = SPECIES_PINCURCHIN, //啪嚓海胆
        .moves = {MOVE_RISING_VOLTAGE, MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_RECOVER}, //电力上升，毒菱，撒菱，自我再生
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PINCURCHIN_2] = {
        .species = SPECIES_PINCURCHIN, //啪嚓海胆
        .moves = {MOVE_ZING_ZAP, MOVE_LIQUIDATION, MOVE_CURSE, MOVE_RECOVER}, //麻麻刺刺，水流裂破，诅咒，自我再生
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PINCURCHIN_3] = {
        .species = SPECIES_PINCURCHIN, //啪嚓海胆
        .moves = {MOVE_ZING_ZAP, MOVE_BARB_BARRAGE, MOVE_TOXIC_SPIKES, MOVE_CURSE}, //麻麻刺刺，毒千针，毒菱，诅咒
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PINCURCHIN_4] = {
        .species = SPECIES_PINCURCHIN, //啪嚓海胆
        .moves = {MOVE_DISCHARGE, MOVE_SCALD, MOVE_RISING_VOLTAGE, MOVE_RECOVER}, //放电，热水，电力上升，自我再生
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR, //凯罗斯
        .moves = {MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_GUILLOTINE}, //十字剪，地震，近身战，极落钳
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR, //凯罗斯
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_FEINT, MOVE_SWORDS_DANCE}, //报恩，地震，佯攻，剑舞
        .heldItem = ITEM_PINSIRITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_3] = {
        .species = SPECIES_PINSIR, //凯罗斯
        .moves = {MOVE_X_SCISSOR, MOVE_THRASH, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE}, //十字剪，大闹一番，近身战，尖石攻击
        .heldItem = ITEM_PINSIRITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_4] = {
        .species = SPECIES_PINSIR, //凯罗斯
        .moves = {MOVE_BUG_BITE, MOVE_EARTHQUAKE, MOVE_FEINT, MOVE_ME_FIRST}, //虫咬，地震，佯攻，抢先一步
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE, //正电拍拍
        .moves = {MOVE_RISING_VOLTAGE, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE}, //电力上升，觉醒力量，诡计，替身
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE, //正电拍拍
        .moves = {MOVE_RISING_VOLTAGE, MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER}, //电力上升，打草结，信号光束，觉醒力量
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PLUSLE_3] = {
        .species = SPECIES_PLUSLE, //正电拍拍
        .moves = {MOVE_ELECTROWEB, MOVE_CAPTIVATE, MOVE_FAKE_TEARS, MOVE_PROTECT}, //电网，诱惑，假哭，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PLUSLE_4] = {
        .species = SPECIES_PLUSLE, //正电拍拍
        .moves = {MOVE_RISING_VOLTAGE, MOVE_NUZZLE, MOVE_ENCORE, MOVE_HELPING_HAND}, //电力上升，蹭蹭脸颊，再来一次，帮助
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED, //蚊香蛙皇
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM, MOVE_REST}, //攀瀑，地震，腹鼓，睡觉
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED, //蚊香蛙皇
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_FOCUS_BLAST, MOVE_HYPNOSIS}, //水炮，暴风雪，真气弹，催眠术
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_POLITOED_3] = {
        .species = SPECIES_POLITOED, //蚊香蛙皇
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_PROTECT}, //热水，冰冻光束，催眠术，守住
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 96, 0, 164),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_POLITOED_4] = {
        .species = SPECIES_POLITOED, //蚊香蛙皇
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_PROTECT}, //热水，冰冻之风，帮助，守住
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 188, 0, 60, 8),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH, //蚊香泳士
        .moves = {MOVE_SURGING_STRIKES, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE}, //水流连打，真气拳，地震，替身
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(112, 252, 0, 144, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH, //蚊香泳士
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_HYPNOSIS, MOVE_BELLY_DRUM}, //水流连打，近身战，催眠术，腹鼓
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(112, 252, 0, 144, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_3] = {
        .species = SPECIES_POLIWRATH, //蚊香泳士
        .moves = {MOVE_SCALD, MOVE_CIRCLE_THROW, MOVE_SLEEP_TALK, MOVE_REST}, //热水，巴投，梦话，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLIWRATH_4] = {
        .species = SPECIES_POLIWRATH, //蚊香泳士
        .moves = {MOVE_DRAIN_PUNCH, MOVE_TOXIC, MOVE_HELPING_HAND, MOVE_SUBSTITUTE}, //吸取拳，剧毒，帮助，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLTEAGEIST_PHONY_1] = {
        .species = SPECIES_POLTEAGEIST_PHONY, //怖思壶
        .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_STORED_POWER, MOVE_SHELL_SMASH}, //暗影球，终极吸取，辅助力量，破壳
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_POLTEAGEIST_PHONY_2] = {
        .species = SPECIES_POLTEAGEIST_PHONY, //怖思壶
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_AROMATHERAPY}, //祸不单行，磷火，吸取力量，芳香治疗
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_POLTEAGEIST_PHONY_3] = {
        .species = SPECIES_POLTEAGEIST_PHONY, //怖思壶
        .moves = {MOVE_HEX, MOVE_TRICK, MOVE_ENDURE, MOVE_MEMENTO}, //祸不单行，戏法，挺住，临别礼物
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(36, 0, 0, 220, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_POLTEAGEIST_PHONY_4] = {
        .species = SPECIES_POLTEAGEIST_PHONY, //怖思壶
        .moves = {MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP, MOVE_SHELL_SMASH, MOVE_PROTECT}, //暗影球，吸取力量，破壳，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2, //多边兽2型
        .moves = {MOVE_TRI_ATTACK, MOVE_TRICK_ROOM, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}, //三重攻击，戏法空间，十万伏特，冰冻光束
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 128, 0, 252, 128),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2, //多边兽2型
        .moves = {MOVE_TRI_ATTACK, MOVE_TRICK_ROOM, MOVE_TOXIC, MOVE_RECOVER}, //三重攻击，戏法空间，剧毒，自我再生
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON2, //多边兽2型
        .moves = {MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_THUNDER_WAVE, MOVE_RECOVER}, //十万伏特，戏法空间，电磁波，自我再生
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON2, //多边兽2型
        .moves = {MOVE_ICE_BEAM, MOVE_FOUL_PLAY, MOVE_RECOVER, MOVE_TRICK_ROOM}, //冰冻光束，欺诈，自我再生，戏法空间
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PORYGON_Z_1] = {
        .species = SPECIES_PORYGON_Z, //多边兽Z
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT}, //三重攻击，冰冻光束，十万伏特，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGON_Z_2] = {
        .species = SPECIES_PORYGON_Z, //多边兽Z
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONVERSION, MOVE_RECOVER}, //十万伏特，冰冻光束，纹理，自我再生
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGON_Z_3] = {
        .species = SPECIES_PORYGON_Z, //多边兽Z
        .moves = {MOVE_TRI_ATTACK, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}, //三重攻击，恶之波动，冰冻光束，十万伏特
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGON_Z_4] = {
        .species = SPECIES_PORYGON_Z, //多边兽Z
        .moves = {MOVE_TRI_ATTACK, MOVE_DARK_PULSE, MOVE_BLIZZARD, MOVE_ELECTROWEB}, //三重攻击，恶之波动，暴风雪，电网
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PRIMARINA_1] = {
        .species = SPECIES_PRIMARINA, //西狮海壬
        .moves = {MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_PSYCHIC}, //泡影的咏叹调，月亮之力，冰冻光束，精神强念
        .heldItem = ITEM_PRIMARIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PRIMARINA_2] = {
        .species = SPECIES_PRIMARINA, //西狮海壬
        .moves = {MOVE_RELIC_SONG, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_SING}, //古老之歌，月亮之力，能量球，唱歌
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PRIMARINA_3] = {
        .species = SPECIES_PRIMARINA, //西狮海壬
        .moves = {MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}, //水炮，月亮之力，冰冻光束，暗影球
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PRIMARINA_4] = {
        .species = SPECIES_PRIMARINA, //西狮海壬
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_PROTECT}, //热水，剧毒，水流环，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PRIMARINA_5] = {
        .species = SPECIES_PRIMARINA, //西狮海壬
        .moves = {MOVE_RELIC_SONG, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_LIFE_DEW}, //古老之歌，冰冻之风，帮助，生命水滴
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 128, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE, //火暴猴
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_U_TURN}, //近身战，地震，尖石攻击，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE, //火暴猴
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH}, //近身战，地震，冰冻拳，雷电拳
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PRIMEAPE_3] = {
        .species = SPECIES_PRIMEAPE, //火暴猴
        .moves = {MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_COUNTER, MOVE_ENDEAVOR}, //近身战，尖石攻击，双倍奉还，蛮干
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PRIMEAPE_4] = {
        .species = SPECIES_PRIMEAPE, //火暴猴
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_TAUNT, MOVE_PROTECT}, //近身战，岩崩，挑衅，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PROBOPASS_1] = {
        .species = SPECIES_PROBOPASS, //大朝北鼻
        .moves = {MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_VOLT_SWITCH, MOVE_STEALTH_ROCK}, //加农光炮，大地之力，伏特替换，隐形岩
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(172, 0, 0, 84, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PROBOPASS_2] = {
        .species = SPECIES_PROBOPASS, //大朝北鼻
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH}, //力量宝石，大地之力，魔法闪耀，伏特替换
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PROBOPASS_3] = {
        .species = SPECIES_PROBOPASS, //大朝北鼻
        .moves = {MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_TAUNT, MOVE_STEALTH_ROCK}, //扑击，剧毒，挑衅，隐形岩
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PROBOPASS_4] = {
        .species = SPECIES_PROBOPASS, //大朝北鼻
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK, MOVE_WIDE_GUARD}, //伏特替换，电磁波，隐形岩，广域防守
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PURUGLY_1] = {
        .species = SPECIES_PURUGLY, //东施喵
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_FAKE_OUT}, //舍身冲撞，突袭，急速折返，击掌奇袭
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PURUGLY_2] = {
        .species = SPECIES_PURUGLY, //东施喵
        .moves = {MOVE_BODY_SLAM, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT}, //泰山压顶，拍落，急速折返，击掌奇袭
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PURUGLY_3] = {
        .species = SPECIES_PURUGLY, //东施喵
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_PLAY_ROUGH, MOVE_HONE_CLAWS, MOVE_HYPNOSIS}, //跺脚，嬉闹，磨爪，催眠术
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PURUGLY_4] = {
        .species = SPECIES_PURUGLY, //东施喵
        .moves = {MOVE_ASSURANCE, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_HYPNOSIS}, //恶意追击，急速折返，击掌奇袭，催眠术
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PYROAR_1] = {
        .species = SPECIES_PYROAR, //火炎狮
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS}, //喷射火焰，巨声，恶之波动，热沙大地
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PYROAR_2] = {
        .species = SPECIES_PYROAR, //火炎狮
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_SOLAR_BEAM, MOVE_EXTREME_SPEED}, //大字爆炎，热沙大地，日光束，神速
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PYROAR_3] = {
        .species = SPECIES_PYROAR, //火炎狮
        .moves = {MOVE_OVERHEAT, MOVE_HYPER_VOICE, MOVE_SCORCHING_SANDS, MOVE_YAWN}, //过热，巨声，热沙大地，哈欠
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PYROAR_4] = {
        .species = SPECIES_PYROAR, //火炎狮
        .moves = {MOVE_SNARL, MOVE_SCORCHING_SANDS, MOVE_HELPING_HAND, MOVE_WILL_O_WISP}, //大声咆哮，热沙大地，帮助，磷火
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PYUKUMUKU_1] = {
        .species = SPECIES_PYUKUMUKU, //拳海参
        .moves = {MOVE_TOXIC, MOVE_SPITE, MOVE_BLOCK, MOVE_REST}, //剧毒，怨恨，挡路，睡觉
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PYUKUMUKU_2] = {
        .species = SPECIES_PYUKUMUKU, //拳海参
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_TOXIC, MOVE_RECOVER}, //双倍奉还，镜面反射，剧毒，自我再生
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PYUKUMUKU_3] = {
        .species = SPECIES_PYUKUMUKU, //拳海参
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_BATON_PASS, MOVE_RECOVER}, //剧毒，诅咒，接棒，自我再生
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PYUKUMUKU_4] = {
        .species = SPECIES_PYUKUMUKU, //拳海参
        .moves = {MOVE_TOXIC, MOVE_HELPING_HAND, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //剧毒，帮助，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE, //沼王
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ACID_SPRAY, MOVE_YAWN}, //浊流，大地之力，酸液炸弹，哈欠
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE, //沼王
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_RECOVER}, //热水，地震，剧毒，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_QUAGSIRE_3] = {
        .species = SPECIES_QUAGSIRE, //沼王
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_RECOVER}, //热水，地震，诅咒，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_QUAGSIRE_4] = {
        .species = SPECIES_QUAGSIRE, //沼王
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_YAWN}, //浊流，冰冻之风，自我再生，哈欠
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_QUAQUAVAL_1] = {
        .species = SPECIES_QUAQUAVAL, //狂欢浪舞鸭
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_AQUA_JET}, //流水旋舞，近身战，三旋击，水流喷射
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(116, 252, 0, 140, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QUAQUAVAL_2] = {
        .species = SPECIES_QUAQUAVAL, //狂欢浪舞鸭
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_WAVE_CRASH, MOVE_REVERSAL}, //流水旋舞，近身战，波动冲，绝处逢生
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(80, 172, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH, //千针鱼
        .moves = {MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE}, //水流裂破，毒击，深渊突刺，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH, //千针鱼
        .moves = {MOVE_LIQUIDATION, MOVE_EXPLOSION, MOVE_SWORDS_DANCE, MOVE_RAIN_DANCE}, //水流裂破，大爆炸，剑舞，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QWILFISH_3] = {
        .species = SPECIES_QWILFISH, //千针鱼
        .moves = {MOVE_SCALD, MOVE_HAZE, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //热水，黑雾，撒菱，毒菱
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_QWILFISH_4] = {
        .species = SPECIES_QWILFISH, //千针鱼
        .moves = {MOVE_ACID_SPRAY, MOVE_ICY_WIND, MOVE_TOXIC_SPIKES, MOVE_DESTINY_BOND}, //酸液炸弹，冰冻之风，毒菱，同命
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_QWILFISH_HISUI_1] = {
        .species = SPECIES_QWILFISH_HISUI, //洗翠千针鱼
        .moves = {MOVE_THUNDER_WAVE, MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_HAZE}, //电磁波，毒菱，撒菱，黑雾
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = 0
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU, //雷丘
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //十万伏特，真气弹，觉醒力量，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU, //雷丘
        .moves = {MOVE_VOLT_TACKLE, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF}, //伏特攻击，神速，嬉闹，拍落
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU, //雷丘
        .moves = {MOVE_CHARGE_BEAM, MOVE_CHARM, MOVE_SWEET_KISS, MOVE_SUBSTITUTE}, //充电光束，撒娇，天使之吻，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU, //雷丘
        .moves = {MOVE_EXTREME_SPEED, MOVE_KNOCK_OFF, MOVE_ENCORE, MOVE_FAKE_OUT}, //神速，拍落，再来一次，击掌奇袭
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAICHU_ALOLA_1] = {
        .species = SPECIES_RAICHU_ALOLA, //阿罗拉雷丘
        .moves = {MOVE_RISING_VOLTAGE, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}, //电力上升，精神冲击，真气弹，诡计
        .heldItem = ITEM_ALORAICHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAICHU_ALOLA_2] = {
        .species = SPECIES_RAICHU_ALOLA, //阿罗拉雷丘
        .moves = {MOVE_RISING_VOLTAGE, MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST, MOVE_FAKE_OUT}, //电力上升，广域战力，真气弹，击掌奇袭
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAICHU_ALOLA_3] = {
        .species = SPECIES_RAICHU_ALOLA, //阿罗拉雷丘
        .moves = {MOVE_RISING_VOLTAGE, MOVE_YAWN, MOVE_ENCORE, MOVE_FAKE_OUT}, //电力上升，哈欠，再来一次，击掌奇袭
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAICHU_ALOLA_4] = {
        .species = SPECIES_RAICHU_ALOLA, //阿罗拉雷丘
        .moves = {MOVE_THUNDERBOLT, MOVE_EXPANDING_FORCE, MOVE_FAKE_OUT, MOVE_RISING_VOLTAGE}, //十万伏特，广域战力，击掌奇袭，电力上升
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU, //雷公
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_CALM_MIND}, //十万伏特，暗影球，觉醒力量，冥想
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU, //雷公
        .moves = {MOVE_RISING_VOLTAGE, MOVE_AURA_SPHERE, MOVE_SCALD, MOVE_VOLT_SWITCH}, //电力上升，波导弹，热水，伏特替换
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU, //雷公
        .moves = {MOVE_RISING_VOLTAGE, MOVE_ROAR, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //电力上升，吼叫，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU, //雷公
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_CALM_MIND, MOVE_PROTECT}, //十万伏特，大声咆哮，冥想，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RAMPARDOS_1] = {
        .species = SPECIES_RAMPARDOS, //战槌龙
        .moves = {MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_ROCK_POLISH}, //岩崩，意念头锤，火焰拳，岩石打磨
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAMPARDOS_2] = {
        .species = SPECIES_RAMPARDOS, //战槌龙
        .moves = {MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE}, //双刃头锤，疯狂伏特，舍身冲撞，地震
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAMPARDOS_3] = {
        .species = SPECIES_RAMPARDOS, //战槌龙
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_AVALANCHE, MOVE_HAMMER_ARM}, //双刃头锤，地震，雪崩，臂锤
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_RAMPARDOS_4] = {
        .species = SPECIES_RAMPARDOS, //战槌龙
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PURSUIT, MOVE_PROTECT}, //岩崩，地震，追打，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH, //烈焰马
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_DOUBLE_EDGE}, //闪焰冲锋，十万马力，疯狂伏特，舍身冲撞
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH, //烈焰马
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY}, //大字爆炎，日光束，觉醒力量，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH, //烈焰马
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE}, //闪焰冲锋，十万马力，疯狂伏特，剑舞
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH, //烈焰马
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_MORNING_SUN, MOVE_PROTECT}, //喷射火焰，剧毒，晨光，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RAPIDASH_GALAR_1] = {
        .species = SPECIES_RAPIDASH_GALAR, //伽勒尔烈焰马
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYSHIELD_BASH, MOVE_HIGH_HORSEPOWER, MOVE_LOW_KICK}, //嬉闹，屏障猛攻，十万马力，踢倒
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAPIDASH_GALAR_2] = {
        .species = SPECIES_RAPIDASH_GALAR, //伽勒尔烈焰马
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND}, //精神强念，魔法闪耀，魔法火焰，冥想
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_GALAR_3] = {
        .species = SPECIES_RAPIDASH_GALAR, //伽勒尔烈焰马
        .moves = {MOVE_STORED_POWER, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_MORNING_SUN}, //辅助力量，魔法火焰，冥想，晨光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_GALAR_4] = {
        .species = SPECIES_RAPIDASH_GALAR, //伽勒尔烈焰马
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_PROTECT}, //精神强念，魔法闪耀，魔法火焰，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE, //拉达
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_SWORDS_DANCE}, //硬撑，突袭，急速折返，剑舞
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE, //拉达
        .moves = {MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}, //终结门牙，咬碎，精神之牙，冰冻牙
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_3] = {
        .species = SPECIES_RATICATE, //拉达
        .moves = {MOVE_DOUBLE_EDGE, MOVE_WILD_CHARGE, MOVE_THROAT_CHOP, MOVE_QUICK_ATTACK}, //舍身冲撞，疯狂伏特，深渊突刺，电光一闪
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_4] = {
        .species = SPECIES_RATICATE, //拉达
        .moves = {MOVE_BODY_SLAM, MOVE_ASSURANCE, MOVE_TAUNT, MOVE_PROTECT}, //泰山压顶，恶意追击，挑衅，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_ALOLA_1] = {
        .species = SPECIES_RATICATE_ALOLA, //阿罗拉拉达
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_PSYCHIC_FANGS, MOVE_SWORDS_DANCE}, //舍身冲撞，拍落，精神之牙，剑舞
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_ALOLA_2] = {
        .species = SPECIES_RATICATE_ALOLA, //阿罗拉拉达
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_COUNTER, MOVE_QUICK_ATTACK}, //舍身冲撞，咬碎，双倍奉还，电光一闪
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_ALOLA_3] = {
        .species = SPECIES_RATICATE_ALOLA, //阿罗拉拉达
        .moves = {MOVE_SUPER_FANG, MOVE_FINAL_GAMBIT, MOVE_TOXIC, MOVE_SCARY_FACE}, //愤怒门牙，搏命，剧毒，可怕面孔
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RATICATE_ALOLA_4] = {
        .species = SPECIES_RATICATE_ALOLA, //阿罗拉拉达
        .moves = {MOVE_SNARL, MOVE_U_TURN, MOVE_ENDEAVOR, MOVE_PROTECT}, //大声咆哮，急速折返，蛮干，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE, //雷吉艾斯
        .moves = {MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_ROCK_POLISH}, //冰冻光束，真气弹，十万伏特，岩石打磨
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 252, 8),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE, //雷吉艾斯
        .moves = {MOVE_FROST_BREATH, MOVE_CHARGE_BEAM, MOVE_AMNESIA, MOVE_PROTECT}, //冰息，充电光束，瞬间失忆，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE, //雷吉艾斯
        .moves = {MOVE_ANCIENT_POWER, MOVE_TOXIC, MOVE_SWAGGER, MOVE_HAIL}, //原始之力，剧毒，虚张声势，冰雹
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE, //雷吉艾斯
        .moves = {MOVE_ICY_WIND, MOVE_SAFEGUARD, MOVE_HAIL, MOVE_AURORA_VEIL}, //冰冻之风，神秘守护，冰雹，极光幕
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK, //雷吉洛克
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_ROCK_POLISH}, //岩崩，吸取拳，冰冻拳，岩石打磨
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 8),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK, //雷吉洛克
        .moves = {MOVE_STONE_EDGE, MOVE_EXPLOSION, MOVE_SUNNY_DAY, MOVE_STEALTH_ROCK}, //尖石攻击，大爆炸，大晴天，隐形岩
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK, //雷吉洛克
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK}, //岩崩，地震，扑击，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 180, 0, 0, 76),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK, //雷吉洛克
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SAFEGUARD, MOVE_SANDSTORM}, //岩崩，地震，神秘守护，沙暴
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL, //雷吉斯奇鲁
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_POLISH}, //铁头，地震，蛮力，岩石打磨
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 248, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL, //雷吉斯奇鲁
        .moves = {MOVE_BODY_PRESS, MOVE_THUNDER_WAVE, MOVE_CURSE, MOVE_REST}, //扑击，电磁波，诅咒，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL, //雷吉斯奇鲁
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //地球上投，剧毒，隐形岩，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL, //雷吉斯奇鲁
        .moves = {MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_GRAVITY, MOVE_STEALTH_ROCK}, //地震，电磁波，重力，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGIGIGAS_1] = {
        .species = SPECIES_REGIGIGAS, //雷吉奇卡斯
        .moves = {MOVE_GIGA_IMPACT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE}, //终极冲击，吸取拳，拍落，电磁波
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGIGIGAS_2] = {
        .species = SPECIES_REGIGIGAS, //雷吉奇卡斯
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST, MOVE_PROTECT}, //吸取拳，拍落，睡觉，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGIGIGAS_3] = {
        .species = SPECIES_REGIGIGAS, //雷吉奇卡斯
        .moves = {MOVE_RETURN, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE, MOVE_WIDE_GUARD}, //报恩，吸取拳，替身，广域防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_REGIGIGAS_4] = {
        .species = SPECIES_REGIGIGAS, //雷吉奇卡斯
        .moves = {MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_THUNDER_WAVE, MOVE_WIDE_GUARD}, //岩崩，冰冻之风，电磁波，广域防守
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 64, 84, 0, 0, 112),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH, //古空棘鱼
        .moves = {MOVE_WATERFALL, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT}, //攀瀑，双刃头锤，地震，意念头锤
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH, //古空棘鱼
        .moves = {MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_RAIN_DANCE, MOVE_YAWN}, //岩崩，重踏，求雨，哈欠
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(52, 0, 0, 204, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_RELICANTH_3] = {
        .species = SPECIES_RELICANTH, //古空棘鱼
        .moves = {MOVE_BODY_SLAM, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_RAIN_DANCE}, //泰山压顶，剧毒，隐形岩，求雨
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RELICANTH_4] = {
        .species = SPECIES_RELICANTH, //古空棘鱼
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE, MOVE_STEALTH_ROCK}, //岩崩，地震，求雨，隐形岩
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REUNICLUS_1] = {
        .species = SPECIES_REUNICLUS, //人造细胞卵
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK_ROOM}, //精神冲击，暗影球，真气弹，戏法空间
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_REUNICLUS_2] = {
        .species = SPECIES_REUNICLUS, //人造细胞卵
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_PROTECT}, //戏法空间，精神冲击，自我再生，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_REUNICLUS_3] = {
        .species = SPECIES_REUNICLUS, //人造细胞卵
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYSHOCK, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //戏法空间，精神冲击，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_REUNICLUS_4] = {
        .species = SPECIES_REUNICLUS, //人造细胞卵
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_PROTECT}, //戏法空间，精神冲击，自我再生，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_REVAVROOM_1] = {
        .species = SPECIES_REVAVROOM, //普隆隆姆
        .moves = {MOVE_GUNK_SHOT, MOVE_SHIFT_GEAR, MOVE_MAGNET_RISE, MOVE_SPIN_OUT}, //垃圾射击，换档，电磁飘浮，疾速转轮
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 224, 32, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REVAVROOM_2] = {
        .species = SPECIES_REVAVROOM, //普隆隆姆
        .moves = {MOVE_GUNK_SHOT, MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER}, //垃圾射击，换档，铁头，十万马力
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RHYPERIOR_1] = {
        .species = SPECIES_RHYPERIOR, //超甲狂犀
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_ROCK_POLISH}, //尖石攻击，地震，冰冻拳，岩石打磨
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RHYPERIOR_2] = {
        .species = SPECIES_RHYPERIOR, //超甲狂犀
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH, MOVE_DOUBLE_EDGE}, //双刃头锤，地震，高温重压，舍身冲撞
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYPERIOR_3] = {
        .species = SPECIES_RHYPERIOR, //超甲狂犀
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //地震，扑击，剧毒，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RHYPERIOR_4] = {
        .species = SPECIES_RHYPERIOR, //超甲狂犀
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HAMMER_ARM, MOVE_PROTECT}, //地震，岩崩，臂锤，守住
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYPERIOR_5] = {
        .species = SPECIES_RHYPERIOR, //超甲狂犀
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_THUNDER_PUNCH}, //双刃头锤，地震，超级角击，雷电拳
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_RIBOMBEE_1] = {
        .species = SPECIES_RIBOMBEE, //蝶结萌虻
        .moves = {MOVE_POLLEN_PUFF, MOVE_MOONBLAST, MOVE_HIDDEN_POWER, MOVE_STICKY_WEB}, //花粉团，月亮之力，觉醒力量，黏黏网
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RIBOMBEE_2] = {
        .species = SPECIES_RIBOMBEE, //蝶结萌虻
        .moves = {MOVE_U_TURN, MOVE_POWDER, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //急速折返，粉尘，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RIBOMBEE_3] = {
        .species = SPECIES_RIBOMBEE, //蝶结萌虻
        .moves = {MOVE_SILVER_WIND, MOVE_QUIVER_DANCE, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS}, //银色旋风，蝶舞，影子分身，接棒
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RIBOMBEE_4] = {
        .species = SPECIES_RIBOMBEE, //蝶结萌虻
        .moves = {MOVE_HELPING_HAND, MOVE_TAILWIND, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //帮助，顺风，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RILLABOOM_1] = {
        .species = SPECIES_RILLABOOM_GMAX, //轰擂金刚猩
        .moves = {MOVE_GRASSY_GLIDE, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //青草滑梯，蛮力，拍落，剑舞
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RILLABOOM_2] = {
        .species = SPECIES_RILLABOOM_GMAX, //轰擂金刚猩
        .moves = {MOVE_GRASSY_GLIDE, MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_KNOCK_OFF}, //青草滑梯，地震，急速折返，拍落
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RILLABOOM_3] = {
        .species = SPECIES_RILLABOOM, //轰擂金刚猩
        .moves = {MOVE_GRASSY_GLIDE, MOVE_DRAIN_PUNCH, MOVE_ACROBATICS, MOVE_SWORDS_DANCE}, //青草滑梯，吸取拳，杂技，剑舞
        .heldItem = ITEM_GRASSY_SEED,
        .ev = TRAINER_PARTY_EVS(100, 252, 0, 156, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RILLABOOM_4] = {
        .species = SPECIES_RILLABOOM, //轰擂金刚猩
        .moves = {MOVE_GRASSY_GLIDE, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_PROTECT}, //青草滑梯，急速折返，击掌奇袭，守住
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 124, 36, 0, 0, 100),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ROARING_MOON_1] = {
        .species = SPECIES_ROARING_MOON, //轰鸣月
        .moves = {MOVE_ACROBATICS, MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_IRON_HEAD}, //杂技，咬碎，逆鳞，铁头
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(28, 252, 8, 220, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ROARING_MOON_2] = {
        .species = SPECIES_ROARING_MOON, //轰鸣月
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_SCALE_SHOT, MOVE_KNOCK_OFF}, //龙之舞，地震，鳞射，拍落
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ROSERADE_1] = {
        .species = SPECIES_ROSERADE, //罗丝雷朵
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_SPIKES}, //飞叶风暴，污泥炸弹，觉醒力量，撒菱
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROSERADE_2] = {
        .species = SPECIES_ROSERADE, //罗丝雷朵
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER}, //终极吸取，污泥炸弹，魔法闪耀，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROSERADE_3] = {
        .species = SPECIES_ROSERADE, //罗丝雷朵
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SPIKES, MOVE_TOXIC_SPIKES}, //终极吸取，寄生种子，撒菱，毒菱
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROSERADE_4] = {
        .species = SPECIES_ROSERADE, //罗丝雷朵
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_GRASSY_TERRAIN}, //日光束，污泥炸弹，魔法闪耀，青草场地
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_1] = {
        .species = SPECIES_ROTOM, //洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_DEFOG}, //伏特替换，祸不单行，磷火，清除浓雾
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 252, 8, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_2] = {
        .species = SPECIES_ROTOM, //洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_HEX, MOVE_VOLT_SWITCH, MOVE_WILL_O_WISP}, //十万伏特，祸不单行，伏特替换，磷火
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_3] = {
        .species = SPECIES_ROTOM, //洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH, MOVE_TRICK}, //十万伏特，暗影球，伏特替换，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_4] = {
        .species = SPECIES_ROTOM, //洛托姆
        .moves = {MOVE_ELECTROWEB, MOVE_FOUL_PLAY, MOVE_WILL_O_WISP, MOVE_PROTECT}, //电网，欺诈，磷火，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_FAN_1] = {
        .species = SPECIES_ROTOM_FAN, //风扇洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_WILL_O_WISP}, //十万伏特，空气之刃，诡计，磷火
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROTOM_FAN_2] = {
        .species = SPECIES_ROTOM_FAN, //风扇洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}, //十万伏特，空气之刃，伏特替换，觉醒力量
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROTOM_FAN_3] = {
        .species = SPECIES_ROTOM_FAN, //风扇洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_AIR_SLASH, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}, //伏特替换，空气之刃，磷火，分担痛楚
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROTOM_FAN_4] = {
        .species = SPECIES_ROTOM_FAN, //风扇洛托姆
        .moves = {MOVE_DISCHARGE, MOVE_AIR_SLASH, MOVE_VOLT_SWITCH, MOVE_PROTECT}, //放电，空气之刃，伏特替换，守住
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROTOM_FROST_1] = {
        .species = SPECIES_ROTOM_FROST, //冰箱洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_BLIZZARD, MOVE_VOLT_SWITCH, MOVE_DEFOG}, //十万伏特，暴风雪，伏特替换，清除浓雾
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_FROST_2] = {
        .species = SPECIES_ROTOM_FROST, //冰箱洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP}, //伏特替换，觉醒力量，分担痛楚，磷火
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 36, 220, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROTOM_FROST_3] = {
        .species = SPECIES_ROTOM_FROST, //冰箱洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_BLIZZARD, MOVE_PAIN_SPLIT, MOVE_TRICK}, //伏特替换，暴风雪，分担痛楚，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROTOM_FROST_4] = {
        .species = SPECIES_ROTOM_FROST, //冰箱洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_BLIZZARD, MOVE_VOLT_SWITCH, MOVE_PROTECT}, //十万伏特，暴风雪，伏特替换，守住
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_HEAT_1] = {
        .species = SPECIES_ROTOM_HEAT, //微波炉洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_TRICK}, //十万伏特，过热，伏特替换，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_HEAT_2] = {
        .species = SPECIES_ROTOM_HEAT, //微波炉洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}, //十万伏特，过热，伏特替换，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_HEAT_3] = {
        .species = SPECIES_ROTOM_HEAT, //微波炉洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_DEFOG}, //伏特替换，过热，磷火，清除浓雾
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(236, 0, 0, 252, 20, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_HEAT_4] = {
        .species = SPECIES_ROTOM_HEAT, //微波炉洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //十万伏特，过热，觉醒力量，诡计
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 60, 12, 108, 76),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_MOW_1] = {
        .species = SPECIES_ROTOM_MOW, //割草机洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_LEAF_STORM, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}, //十万伏特，飞叶风暴，伏特替换，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_MOW_2] = {
        .species = SPECIES_ROTOM_MOW, //割草机洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_LEAF_STORM, MOVE_NASTY_PLOT, MOVE_WILL_O_WISP}, //伏特替换，飞叶风暴，诡计，磷火
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_MOW_3] = {
        .species = SPECIES_ROTOM_MOW, //割草机洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_LEAF_STORM, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}, //伏特替换，飞叶风暴，磷火，分担痛楚
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROTOM_MOW_4] = {
        .species = SPECIES_ROTOM_MOW, //割草机洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_LEAF_STORM, MOVE_WILL_O_WISP, MOVE_PROTECT}, //伏特替换，飞叶风暴，磷火，守住
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROTOM_WASH_1] = {
        .species = SPECIES_ROTOM_WASH, //洗衣机洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_HYDRO_PUMP, MOVE_NASTY_PLOT, MOVE_PAIN_SPLIT}, //伏特替换，水炮，诡计，分担痛楚
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 204, 56, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROTOM_WASH_2] = {
        .species = SPECIES_ROTOM_WASH, //洗衣机洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_TRICK}, //十万伏特，水炮，伏特替换，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ROTOM_WASH_3] = {
        .species = SPECIES_ROTOM_WASH, //洗衣机洛托姆
        .moves = {MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}, //十万伏特，水炮，伏特替换，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROTOM_WASH_4] = {
        .species = SPECIES_ROTOM_WASH, //洗衣机洛托姆
        .moves = {MOVE_VOLT_SWITCH, MOVE_HYDRO_PUMP, MOVE_THUNDER_WAVE, MOVE_PROTECT}, //伏特替换，水炮，电磁波，守住
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 112, 0, 76, 68),
        .nature = NATURE_CALM
    },

    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE, //勾魂眼
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_RECOVER}, //拍落，磷火，挑衅，自我再生
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE, //勾魂眼
        .moves = {MOVE_FOUL_PLAY, MOVE_FAKE_OUT, MOVE_TOXIC, MOVE_RECOVER}, //欺诈，击掌奇袭，剧毒，自我再生
        .heldItem = ITEM_SABLENITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SABLEYE_3] = {
        .species = SPECIES_SABLEYE, //勾魂眼
        .moves = {MOVE_KNOCK_OFF, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_RECOVER}, //拍落，黑夜魔影，奇异之光，自我再生
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SABLEYE_4] = {
        .species = SPECIES_SABLEYE, //勾魂眼
        .moves = {MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_QUASH, MOVE_HELPING_HAND}, //击掌奇袭，挑衅，延后，帮助
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE, //暴飞龙
        .moves = {MOVE_OUTRAGE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //逆鳞，双翼，地震，龙之舞
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SALAZZLE_1] = {
        .species = SPECIES_SALAZZLE, //焰后蜥
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //污泥波，喷射火焰，觉醒力量，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAZZLE_2] = {
        .species = SPECIES_SALAZZLE, //焰后蜥
        .moves = {MOVE_VENOSHOCK, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_NASTY_PLOT}, //毒液冲击，喷射火焰，剧毒，诡计
        .heldItem = ITEM_POISON_GEM,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAZZLE_3] = {
        .species = SPECIES_SALAZZLE, //焰后蜥
        .moves = {MOVE_SLUDGE_BOMB, MOVE_KNOCK_OFF, MOVE_DISABLE, MOVE_ENCORE}, //污泥炸弹，拍落，定身法，再来一次
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAZZLE_4] = {
        .species = SPECIES_SALAZZLE, //焰后蜥
        .moves = {MOVE_ENCORE, MOVE_FAKE_OUT, MOVE_POISON_GAS, MOVE_VENOM_DRENCH}, //再来一次，击掌奇袭，毒瓦斯，毒液陷阱
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SAMUROTT_1] = {
        .species = SPECIES_SAMUROTT, //大剑鬼
        .moves = {MOVE_LIQUIDATION, MOVE_SACRED_SWORD, MOVE_AQUA_JET, MOVE_SWORDS_DANCE}, //水流裂破，圣剑，水流喷射，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAMUROTT_2] = {
        .species = SPECIES_SAMUROTT, //大剑鬼
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_SECRET_SWORD}, //水炮，冰冻光束，打草结，神秘之剑
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SAMUROTT_3] = {
        .species = SPECIES_SAMUROTT, //大剑鬼
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_SLEEP_TALK, MOVE_REST}, //热水，拍落，梦话，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SAMUROTT_4] = {
        .species = SPECIES_SAMUROTT, //大剑鬼
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_DETECT}, //热水，冰冻之风，帮助，看穿
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SAMUROTT_HISUI_1] = {
        .species = SPECIES_SAMUROTT_HISUI, //洗翠大剑鬼
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_SECRET_SWORD, MOVE_AIR_SLASH}, //水炮，恶之波动，神秘之剑，空气之刃
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SAMUROTT_HISUI_2] = {
        .species = SPECIES_SAMUROTT_HISUI, //洗翠大剑鬼
        .moves = {MOVE_LIQUIDATION, MOVE_CEASELESS_EDGE, MOVE_MEGAHORN, MOVE_SACRED_SWORD}, //水流裂破，秘剑・千重涛，超级角击，圣剑
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAMUROTT_HISUI_3] = {
        .species = SPECIES_SAMUROTT_HISUI, //洗翠大剑鬼
        .moves = {MOVE_LIQUIDATION, MOVE_CEASELESS_EDGE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE}, //水流裂破，秘剑・千重涛，超级角击，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAMUROTT_HISUI_4] = {
        .species = SPECIES_SAMUROTT_HISUI, //洗翠大剑鬼
        .moves = {MOVE_KNOCK_OFF, MOVE_ENCORE, MOVE_HELPING_HAND, MOVE_PROTECT}, //拍落，再来一次，帮助，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SANDACONDA_1] = {
        .species = SPECIES_SANDACONDA, //沙螺蟒
        .moves = {MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_STEALTH_ROCK, MOVE_REST}, //地震，大蛇瞪眼，隐形岩，睡觉
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 244, 12, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SANDACONDA_2] = {
        .species = SPECIES_SANDACONDA, //沙螺蟒
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_COIL, MOVE_REST}, //地震，尖石攻击，盘蜷，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SANDACONDA_3] = {
        .species = SPECIES_SANDACONDA, //沙螺蟒
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_SUBSTITUTE}, //地震，扑击，铁壁，替身
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SANDACONDA_4] = {
        .species = SPECIES_SANDACONDA, //沙螺蟒
        .moves = {MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_GLARE, MOVE_PROTECT}, //重踏，岩崩，大蛇瞪眼，守住
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = 0
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH, //穿山王
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK}, //地震，拍落，高速旋转，隐形岩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH, //穿山王
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE, MOVE_REST}, //地震，尖石攻击，剑舞，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SANDSLASH_3] = {
        .species = SPECIES_SANDSLASH, //穿山王
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_X_SCISSOR, MOVE_SANDSTORM}, //地震，毒击，十字剪，沙暴
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SANDSLASH_4] = {
        .species = SPECIES_SANDSLASH, //穿山王
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_RAPID_SPIN}, //地震，岩崩，毒击，高速旋转
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_1] = {
        .species = SPECIES_SANDSLASH_ALOLA, //阿罗拉穿山王
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE}, //冰柱坠击，地震，高速旋转，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_2] = {
        .species = SPECIES_SANDSLASH_ALOLA, //阿罗拉穿山王
        .moves = {MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //冰柱坠击，铁头，地震，剑舞
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_3] = {
        .species = SPECIES_SANDSLASH_ALOLA, //阿罗拉穿山王
        .moves = {MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_DOUBLE_TEAM, MOVE_DEFENSE_CURL}, //冰球，滚动，影子分身，变圆
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_4] = {
        .species = SPECIES_SANDSLASH_ALOLA, //阿罗拉穿山王
        .moves = {MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT}, //冰柱坠击，岩崩，地震，守住
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDY_SHOCKS_1] = {
        .species = SPECIES_SANDY_SHOCKS, //沙铁皮
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_POWER_GEM, MOVE_PROTECT}, //大地之力，十万伏特，力量宝石，守住
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SANDY_SHOCKS_2] = {
        .species = SPECIES_SANDY_SHOCKS, //沙铁皮
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER}, //大地之力，十万伏特，加农光炮，打雷
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SAWK_1] = {
        .species = SPECIES_SAWK, //打击鬼
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH}, //近身战，拍落，地震，冰冻拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWK_2] = {
        .species = SPECIES_SAWK, //打击鬼
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BULLDOZE, MOVE_TAUNT}, //近身战，拍落，重踏，挑衅
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWK_3] = {
        .species = SPECIES_SAWK, //打击鬼
        .moves = {MOVE_REVERSAL, MOVE_THROAT_CHOP, MOVE_DUAL_CHOP, MOVE_BULK_UP}, //绝处逢生，深渊突刺，二连劈，健美
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWK_4] = {
        .species = SPECIES_SAWK, //打击鬼
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_QUICK_GUARD}, //近身战，拍落，岩崩，快速防守
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWSBUCK_SPRING_1] = {
        .species = SPECIES_SAWSBUCK_SPRING, //萌芽鹿-春
        .moves = {MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE}, //木角，舍身冲撞，飞踢，剑舞
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWSBUCK_SPRING_2] = {
        .species = SPECIES_SAWSBUCK_SPRING, //萌芽鹿-春
        .moves = {MOVE_HEADBUTT, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS}, //头锤，剑舞，高速移动，接棒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWSBUCK_SPRING_3] = {
        .species = SPECIES_SAWSBUCK_SPRING, //萌芽鹿-春
        .moves = {MOVE_HORN_LEECH, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT}, //木角，寄生种子，剧毒，守住
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SAWSBUCK_SPRING_4] = {
        .species = SPECIES_SAWSBUCK_SPRING, //萌芽鹿-春
        .moves = {MOVE_TROP_KICK, MOVE_RETURN, MOVE_STOMPING_TANTRUM, MOVE_PROTECT}, //热带踢，报恩，跺脚，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE, //蜥蜴王
        .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //叶刃，暗袭要害，地震，剑舞
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE, //蜥蜴王
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER}, //飞叶风暴，真气弹，终极吸取，觉醒力量
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE, //蜥蜴王
        .moves = {MOVE_LEAF_BLADE, MOVE_DUAL_CHOP, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //叶刃，二连劈，地震，龙之舞
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_SCEPTILE, //蜥蜴王
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED}, //岩崩，地震，替身，寄生种子
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(252, 196, 60, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR, //巨钳螳螂
        .moves = {MOVE_U_TURN, MOVE_BULLET_PUNCH, MOVE_CLOSE_COMBAT, MOVE_DUAL_WINGBEAT}, //急速折返，子弹拳，近身战，双翼
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR, //巨钳螳螂
        .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_ROOST}, //虫咬，子弹拳，剑舞，羽栖
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS(96, 252, 0, 0, 0, 160),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR, //巨钳螳螂
        .moves = {MOVE_U_TURN, MOVE_BULLET_PUNCH, MOVE_TOXIC, MOVE_ROOST}, //急速折返，子弹拳，剧毒，羽栖
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR, //巨钳螳螂
        .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT}, //虫咬，子弹拳，剑舞，守住
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS(252, 136, 0, 84, 0, 36),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCOLIPEDE_1] = {
        .species = SPECIES_SCOLIPEDE, //蜈蚣王
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_SWORDS_DANCE}, //超级角击，地震，水流尾，剑舞
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCOLIPEDE_2] = {
        .species = SPECIES_SCOLIPEDE, //蜈蚣王
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_PROTECT}, //剑舞，替身，接棒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SCOLIPEDE_3] = {
        .species = SPECIES_SCOLIPEDE, //蜈蚣王
        .moves = {MOVE_MEGAHORN, MOVE_ENDEAVOR, MOVE_TOXIC_SPIKES, MOVE_SPIKES}, //超级角击，蛮干，毒菱，撒菱
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCOLIPEDE_4] = {
        .species = SPECIES_SCOLIPEDE, //蜈蚣王
        .moves = {MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_PROTECT}, //超级角击，毒击，地震，守住
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCOVILLAIN] = {
        .species = SPECIES_SCOVILLAIN, //狠辣椒
        .moves = {MOVE_FLAMETHROWER, MOVE_GROWTH, MOVE_SOLAR_BEAM, MOVE_STOMPING_TANTRUM}, //喷射火焰，生长，日光束，跺脚
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SCRAFTY_1] = {
        .species = SPECIES_SCRAFTY, //头巾混混
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_DRAGON_DANCE}, //飞膝踢，拍落，毒击，龙之舞
        .heldItem = ITEM_ROSELI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCRAFTY_2] = {
        .species = SPECIES_SCRAFTY, //头巾混混
        .moves = {MOVE_FOCUS_PUNCH, MOVE_FAKE_OUT, MOVE_BULK_UP, MOVE_SUBSTITUTE}, //真气拳，击掌奇袭，健美，替身
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCRAFTY_3] = {
        .species = SPECIES_SCRAFTY, //头巾混混
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SUPER_FANG, MOVE_BULK_UP}, //吸取拳，拍落，愤怒门牙，健美
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SCRAFTY_4] = {
        .species = SPECIES_SCRAFTY, //头巾混混
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SNARL, MOVE_FAKE_OUT}, //吸取拳，拍落，大声咆哮，击掌奇袭
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCREAM_TAIL_1] = {
        .species = SPECIES_SCREAM_TAIL, //吼叫尾
        .moves = {MOVE_DISABLE, MOVE_ENCORE, MOVE_FLING, MOVE_HELPING_HAND}, //定身法，再来一次，投掷，帮助
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SCREAM_TAIL_2] = {
        .species = SPECIES_SCREAM_TAIL, //吼叫尾
        .moves = {MOVE_DISABLE, MOVE_ENCORE, MOVE_DAZZLING_GLEAM, MOVE_FIRE_BLAST}, //定身法，再来一次，魔法闪耀，大字爆炎
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING, //金鱼王
        .moves = {MOVE_FISHIOUS_REND, MOVE_KNOCK_OFF, MOVE_MEGAHORN, MOVE_FLIP_TURN}, //鳃咬，拍落，超级角击，快速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING, //金鱼王
        .moves = {MOVE_FISHIOUS_REND, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE}, //鳃咬，毒击，直冲钻，剑舞
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEAKING_3] = {
        .species = SPECIES_SEAKING, //金鱼王
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_SOAK, MOVE_AQUA_RING}, //热水，剧毒，浸水，水流环
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SEAKING_4] = {
        .species = SPECIES_SEAKING, //金鱼王
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_KNOCK_OFF, MOVE_TOXIC}, //浊流，冰冻之风，拍落，剧毒
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SEISMITOAD_1] = {
        .species = SPECIES_SEISMITOAD, //蟾蜍王
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP}, //水流裂破，地震，拍落，强力鞭打
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEISMITOAD_2] = {
        .species = SPECIES_SEISMITOAD, //蟾蜍王
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_RAIN_DANCE}, //水炮，大地之力，污泥波，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(60, 0, 196, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SEISMITOAD_3] = {
        .species = SPECIES_SEISMITOAD, //蟾蜍王
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_REST, MOVE_PROTECT}, //热水，拍落，睡觉，守住
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 244, 0, 0, 12),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SEISMITOAD_4] = {
        .species = SPECIES_SEISMITOAD, //蟾蜍王
        .moves = {MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_SLUDGE_BOMB, MOVE_PROTECT}, //大地之力，浊流，污泥炸弹，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SERPERIOR_1] = {
        .species = SPECIES_SERPERIOR, //君主蛇
        .moves = {MOVE_LEAF_BLADE, MOVE_AQUA_TAIL, MOVE_SCALE_SHOT, MOVE_COIL}, //叶刃，水流尾，鳞射，盘蜷
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SERPERIOR_2] = {
        .species = SPECIES_SERPERIOR, //君主蛇
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}, //飞叶风暴，终极吸取，龙之波动，觉醒力量
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SERPERIOR_3] = {
        .species = SPECIES_SERPERIOR, //君主蛇
        .moves = {MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_LEECH_SEED, MOVE_SUBSTITUTE}, //终极吸取，觉醒力量，寄生种子，替身
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SERPERIOR_4] = {
        .species = SPECIES_SERPERIOR, //君主蛇
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_PROTECT}, //飞叶风暴，终极吸取，觉醒力量，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER, //饭匙蛇
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_SUCKER_PUNCH}, //污泥波，喷射火焰，终极吸取，突袭
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER, //饭匙蛇
        .moves = {MOVE_POISON_TAIL, MOVE_AQUA_TAIL, MOVE_IRON_TAIL, MOVE_SWORDS_DANCE}, //毒尾，水流尾，铁尾，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEVIPER_3] = {
        .species = SPECIES_SEVIPER, //饭匙蛇
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_REST, MOVE_COIL}, //毒击，拍落，睡觉，盘蜷
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEVIPER_4] = {
        .species = SPECIES_SEVIPER, //饭匙蛇
        .moves = {MOVE_POISON_TAIL, MOVE_AQUA_TAIL, MOVE_GLARE, MOVE_PROTECT}, //毒尾，水流尾，大蛇瞪眼，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO, //巨牙鲨
        .moves = {MOVE_WATERFALL, MOVE_JAW_LOCK, MOVE_EARTHQUAKE, MOVE_PROTECT}, //攀瀑，紧咬不放，地震，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO, //巨牙鲨
        .moves = {MOVE_LIQUIDATION, MOVE_SCALE_SHOT, MOVE_POISON_JAB, MOVE_TAUNT}, //水流裂破，鳞射，毒击，挑衅
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHARPEDO_3] = {
        .species = SPECIES_SHARPEDO, //巨牙鲨
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_PROTECT}, //攀瀑，咬碎，精神之牙，守住
        .heldItem = ITEM_SHARPEDONITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHARPEDO_4] = {
        .species = SPECIES_SHARPEDO, //巨牙鲨
        .moves = {MOVE_SNARL, MOVE_ICY_WIND, MOVE_DESTINY_BOND, MOVE_PROTECT}, //大声咆哮，冰冻之风，同命，守住
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHEDINJA_1] = {
        .species = SPECIES_SHEDINJA, //脱壳忍者
        .moves = {MOVE_X_SCISSOR, MOVE_POLTERGEIST, MOVE_WILL_O_WISP, MOVE_SWORDS_DANCE}, //十字剪，灵骚，磷火，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHEDINJA_2] = {
        .species = SPECIES_SHEDINJA, //脱壳忍者
        .moves = {MOVE_X_SCISSOR, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_BATON_PASS}, //十字剪，影子偷袭，剑舞，接棒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHEDINJA_3] = {
        .species = SPECIES_SHEDINJA, //脱壳忍者
        .moves = {MOVE_POLTERGEIST, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_BATON_PASS}, //灵骚，影子分身，剑舞，接棒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHEDINJA_4] = {
        .species = SPECIES_SHEDINJA, //脱壳忍者
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_HEAL_BLOCK}, //影子偷袭，磷火，奇异之光，回复封锁
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 2, 252, 0, 2),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY, //狡猾天狗
        .moves = {MOVE_SOLAR_BEAM, MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_SUNNY_DAY}, //日光束，恶之波动，热风，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY, //狡猾天狗
        .moves = {MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE}, //叶刃，突袭，十字剪，剑舞
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY, //狡猾天狗
        .moves = {MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_DEFOG}, //拍落，岩崩，大爆炸，清除浓雾
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_SHIFTRY, //狡猾天狗
        .moves = {MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, MOVE_BEAT_UP, MOVE_SUNNY_DAY}, //日光束，热风，围攻，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 128, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHIINOTIC_1] = {
        .species = SPECIES_SHIINOTIC, //灯罩夜菇
        .moves = {MOVE_MOONBLAST, MOVE_SPORE, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP}, //月亮之力，蘑菇孢子，寄生种子，吸取力量
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHIINOTIC_2] = {
        .species = SPECIES_SHIINOTIC, //灯罩夜菇
        .moves = {MOVE_MOONBLAST, MOVE_CONFUSE_RAY, MOVE_STRENGTH_SAP, MOVE_LIGHT_SCREEN}, //月亮之力，奇异之光，吸取力量，光墙
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SHIINOTIC_3] = {
        .species = SPECIES_SHIINOTIC, //灯罩夜菇
        .moves = {MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_SLUDGE_BOMB, MOVE_CHARGE_BEAM}, //终极吸取，月亮之力，污泥炸弹，充电光束
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIINOTIC_4] = {
        .species = SPECIES_SHIINOTIC, //灯罩夜菇
        .moves = {MOVE_POLLEN_PUFF, MOVE_SPORE, MOVE_LEECH_SEED, MOVE_STRENGTH_SAP}, //花粉团，蘑菇孢子，寄生种子，吸取力量
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE, //壶壶
        .moves = {MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB, MOVE_SHELL_SMASH}, //剧毒，隐形岩，黏黏网，破壳
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE, //壶壶
        .moves = {MOVE_SKITTER_SMACK, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_POWER_TRICK}, //爬击，尖石攻击，地震，力量戏法
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_SHUCKLE, //壶壶
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_POWER_SPLIT, MOVE_STICKY_WEB}, //纠缠不休，剧毒，力量平分，黏黏网
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_SHUCKLE, //壶壶
        .moves = {MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB, MOVE_SANDSTORM}, //剧毒，隐形岩，黏黏网，沙暴
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SIGILYPH_1] = {
        .species = SPECIES_SIGILYPH, //象征鸟
        .moves = {MOVE_EXPANDING_FORCE, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ENERGY_BALL}, //广域战力，空气之刃，热风，能量球
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIGILYPH_2] = {
        .species = SPECIES_SIGILYPH, //象征鸟
        .moves = {MOVE_STORED_POWER, MOVE_PSYCHO_SHIFT, MOVE_COSMIC_POWER, MOVE_ROOST}, //辅助力量，精神转移，宇宙力量，羽栖
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 240, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIGILYPH_3] = {
        .species = SPECIES_SIGILYPH, //象征鸟
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_ROOST, MOVE_DEFOG}, //精神强念，电磁波，羽栖，清除浓雾
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIGILYPH_4] = {
        .species = SPECIES_SIGILYPH, //象征鸟
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPNOSIS, MOVE_GRAVITY, MOVE_PROTECT}, //广域战力，催眠术，重力，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SILVALLY_DRAGON] = {
        .species = SPECIES_SILVALLY_DRAGON, //银伴战兽DRAGON
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_PARTING_SHOT}, //流星群，喷射火焰，加农光炮，抛下狠话
        .heldItem = ITEM_DRAGON_MEMORY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SILVALLY_GHOST] = {
        .species = SPECIES_SILVALLY_GHOST, //银伴战兽GHOST
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_PARTING_SHOT, MOVE_DEFOG}, //暗影球，喷射火焰，抛下狠话，清除浓雾
        .heldItem = ITEM_GHOST_MEMORY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SILVALLY_NORMAL_1] = {
        .species = SPECIES_SILVALLY_NORMAL, //银伴战兽
        .moves = {MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_PARTING_SHOT}, //巨声，热风，暗影球，抛下狠话
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SILVALLY_NORMAL_2] = {
        .species = SPECIES_SILVALLY_ELECTRIC, //银伴战兽
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HEAT_WAVE, MOVE_SURF, MOVE_SNARL}, //大地波动，热风，冲浪，大声咆哮
        .heldItem = ITEM_ELECTRIC_MEMORY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SILVALLY_STEEL] = {
        .species = SPECIES_SILVALLY_STEEL, //银伴战兽STEEL
        .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_DEFOG}, //多属性攻击，喷射火焰，急速折返，清除浓雾
        .heldItem = ITEM_STEEL_MEMORY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMIPOUR_1] = {
        .species = SPECIES_SIMIPOUR, //冷水猿
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT}, //水炮，冰冻光束，真气弹，打草结
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMIPOUR_2] = {
        .species = SPECIES_SIMIPOUR, //冷水猿
        .moves = {MOVE_WATERFALL, MOVE_SUPERPOWER, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF}, //攀瀑，蛮力，垃圾射击，拍落
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMIPOUR_3] = {
        .species = SPECIES_SIMIPOUR, //冷水猿
        .moves = {MOVE_SCALD, MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_SUBSTITUTE}, //热水，拍落，挑衅，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMIPOUR_4] = {
        .species = SPECIES_SIMIPOUR, //冷水猿
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_PROTECT}, //水炮，冰冻光束，打草结，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SIMISAGE_1] = {
        .species = SPECIES_SIMISAGE, //花椰猿
        .moves = {MOVE_SEED_BOMB, MOVE_KNOCK_OFF, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SLIDE}, //种子炸弹，拍落，增强拳，岩崩
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMISAGE_2] = {
        .species = SPECIES_SIMISAGE, //花椰猿
        .moves = {MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //终极吸取，真气弹，觉醒力量，诡计
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMISAGE_3] = {
        .species = SPECIES_SIMISAGE, //花椰猿
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_SPIKY_SHIELD}, //终极吸取，寄生种子，光合作用，尖刺防守
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SIMISAGE_4] = {
        .species = SPECIES_SIMISAGE, //花椰猿
        .moves = {MOVE_SEED_BOMB, MOVE_ROCK_SLIDE, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD}, //种子炸弹，岩崩，寄生种子，尖刺防守
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMISEAR_1] = {
        .species = SPECIES_SIMISEAR, //爆香猿
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT}, //大字爆炎，热沙大地，打草结，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMISEAR_2] = {
        .species = SPECIES_SIMISEAR, //爆香猿
        .moves = {MOVE_FIRE_PUNCH, MOVE_KNOCK_OFF, MOVE_ACROBATICS, MOVE_POWER_UP_PUNCH}, //火焰拳，拍落，杂技，增强拳
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIMISEAR_3] = {
        .species = SPECIES_SIMISEAR, //爆香猿
        .moves = {MOVE_RECYCLE, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_SUBSTITUTE}, //回收利用，磷火，挑衅，替身
        .heldItem = ITEM_APICOT_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SIMISEAR_4] = {
        .species = SPECIES_SIMISEAR, //爆香猿
        .moves = {MOVE_HEAT_WAVE, MOVE_GRASS_KNOT, MOVE_SCORCHING_SANDS, MOVE_PROTECT}, //热风，打草结，热沙大地，守住
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SINISTCHA_MASTERPIECE] = {
        .species = SPECIES_SINISTCHA_MASTERPIECE, //来悲粗茶杰作
        .moves = {MOVE_CALM_MIND, MOVE_MATCHA_GOTCHA, MOVE_IRON_DEFENSE, MOVE_HEX}, //冥想，刷刷茶炮，铁壁，祸不单行
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(116, 0, 172, 0, 0, 220),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SINISTCHA_UNREMARKABLE] = {
        .species = SPECIES_SINISTCHA_UNREMARKABLE, //来悲粗茶
        .moves = {MOVE_CALM_MIND, MOVE_MATCHA_GOTCHA, MOVE_STRENGTH_SAP, MOVE_SHADOW_BALL}, //冥想，刷刷茶炮，吸取力量，暗影球
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(176, 0, 80, 12, 44, 196),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SIRFETCHD_1] = {
        .species = SPECIES_SIRFETCHD, //葱游兵
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_FIRST_IMPRESSION}, //近身战，勇鸟猛攻，拍落，迎头一击
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIRFETCHD_2] = {
        .species = SPECIES_SIRFETCHD, //葱游兵
        .moves = {MOVE_METEOR_ASSAULT, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //流星突击，勇鸟猛攻，拍落，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SIRFETCHD_3] = {
        .species = SPECIES_SIRFETCHD, //葱游兵
        .moves = {MOVE_METEOR_ASSAULT, MOVE_SKY_ATTACK, MOVE_SOLAR_BLADE, MOVE_FIRST_IMPRESSION}, //流星突击，神鸟猛击，日光刃，迎头一击
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SIRFETCHD_4] = {
        .species = SPECIES_SIRFETCHD, //葱游兵
        .moves = {MOVE_METEOR_ASSAULT, MOVE_BRAVE_BIRD, MOVE_SWORDS_DANCE, MOVE_PROTECT}, //流星突击，勇鸟猛攻，剑舞，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY, //盔甲鸟
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_AUTOTOMIZE}, //勇鸟猛攻，铁头，剑舞，身体轻量化
        .heldItem = ITEM_CELL_BATTERY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY, //盔甲鸟
        .moves = {MOVE_BODY_PRESS, MOVE_SPIKES, MOVE_DEFOG, MOVE_ROOST}, //扑击，撒菱，清除浓雾，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_SKARMORY, //盔甲鸟
        .moves = {MOVE_TOXIC, MOVE_SPIKES, MOVE_WHIRLWIND, MOVE_ROOST}, //剧毒，撒菱，吹飞，羽栖
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_SKARMORY, //盔甲鸟
        .moves = {MOVE_TOXIC, MOVE_WHIRLWIND, MOVE_STEALTH_ROCK, MOVE_TAILWIND}, //剧毒，吹飞，隐形岩，顺风
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SKELEDIRGE_1] = {
        .species = SPECIES_SKELEDIRGE, //骨纹巨声鳄
        .moves = {MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_PROTECT}, //暗影球，大地之力，大字爆炎，守住
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(204, 0, 252, 0, 52, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SKELEDIRGE_2] = {
        .species = SPECIES_SKELEDIRGE, //骨纹巨声鳄
        .moves = {MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_TORCH_SONG, MOVE_SLACK_OFF}, //暗影球，大地之力，闪焰高歌，偷懒
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SKUNTANK_1] = {
        .species = SPECIES_SKUNTANK, //坦克臭鼬
        .moves = {MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_PURSUIT, MOVE_DEFOG}, //毒击，突袭，追打，清除浓雾
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKUNTANK_2] = {
        .species = SPECIES_SKUNTANK, //坦克臭鼬
        .moves = {MOVE_ACID_SPRAY, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT}, //酸液炸弹，恶之波动，大字爆炎，诡计
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SKUNTANK_3] = {
        .species = SPECIES_SKUNTANK, //坦克臭鼬
        .moves = {MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_MEMENTO}, //毒击，突袭，咬碎，临别礼物
        .heldItem = ITEM_POISONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKUNTANK_4] = {
        .species = SPECIES_SKUNTANK, //坦克臭鼬
        .moves = {MOVE_VENOSHOCK, MOVE_POISON_GAS, MOVE_VENOM_DRENCH, MOVE_PROTECT}, //毒液冲击，毒瓦斯，毒液陷阱，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING, //请假王
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_SHADOW_CLAW}, //终极冲击，地震，臂锤，暗影爪
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING, //请假王
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_PURSUIT}, //终极冲击，地震，大字爆炎，追打
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_SLAKING, //请假王
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_ENCORE}, //地震，岩崩，扑击，再来一次
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_SLAKING, //请假王
        .moves = {MOVE_GIGA_IMPACT, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_PUNISHMENT}, //终极冲击，岩崩，火焰拳，惩罚
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLITHER_WING_1] = {
        .species = SPECIES_SLITHER_WING, //爬地翅
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_LEECH_LIFE, MOVE_WILD_CHARGE}, //近身战，迎头一击，吸血，疯狂伏特
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SLITHER_WING_2] = {
        .species = SPECIES_SLITHER_WING, //爬地翅
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_PROTECT, MOVE_ACROBATICS}, //近身战，迎头一击，守住，杂技
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO, //呆壳兽
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_YAWN, MOVE_PROTECT}, //热水，精神冲击，哈欠，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO, //呆壳兽
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM}, //热水，精神冲击，诡计，戏法空间
        .heldItem = ITEM_SLOWBRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 126, 0, 4, 126),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO, //呆壳兽
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_SLACK_OFF}, //冲浪，精神强念，戏法空间，偷懒
        .heldItem = ITEM_SLOWBRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO, //呆壳兽
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_SLACK_OFF}, //热水，精神强念，戏法空间，偷懒
        .heldItem = ITEM_SLOWBRONITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWBRO_GALAR_1] = {
        .species = SPECIES_SLOWBRO_GALAR, //伽勒尔呆壳兽
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_ZEN_HEADBUTT, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM}, //臂贝武器，意念头锤，吸取拳，腹鼓
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_GALAR_2] = {
        .species = SPECIES_SLOWBRO_GALAR, //伽勒尔呆壳兽
        .moves = {MOVE_PSYCHIC, MOVE_SHELL_SIDE_ARM, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT}, //精神强念，臂贝武器，喷射火焰，诡计
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 44, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWBRO_GALAR_3] = {
        .species = SPECIES_SLOWBRO_GALAR, //伽勒尔呆壳兽
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SCALD, MOVE_PROTECT, MOVE_SLACK_OFF}, //污泥炸弹，热水，守住，偷懒
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING, //呆呆王
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM}, //冲浪，精神强念，诡计，戏法空间
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING, //呆呆王
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_FIRE_BLAST, MOVE_DRAGON_TAIL}, //热水，精神冲击，大字爆炎，龙尾
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 4, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING, //呆呆王
        .moves = {MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_SLACK_OFF}, //热水，电磁波，冥想，偷懒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 188, 0, 0, 68),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING, //呆呆王
        .moves = {MOVE_SCALD, MOVE_YAWN, MOVE_HEAL_PULSE, MOVE_SLACK_OFF}, //热水，哈欠，治愈波动，偷懒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_GALAR_1] = {
        .species = SPECIES_SLOWKING_GALAR, //伽勒尔呆呆王
        .moves = {MOVE_FUTURE_SIGHT, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER}, //预知未来，污泥炸弹，地震，喷射火焰
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWKING_GALAR_2] = {
        .species = SPECIES_SLOWKING_GALAR, //伽勒尔呆呆王
        .moves = {MOVE_STORED_POWER, MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_SLACK_OFF}, //辅助力量，喷射火焰，冥想，偷懒
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_GALAR_3] = {
        .species = SPECIES_SLOWKING_GALAR, //伽勒尔呆呆王
        .moves = {MOVE_FUTURE_SIGHT, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_SCALD}, //预知未来，污泥炸弹，喷射火焰，热水
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 12, 0, 124, 120),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWKING_GALAR_4] = {
        .species = SPECIES_SLOWKING_GALAR, //伽勒尔呆呆王
        .moves = {MOVE_EERIE_SPELL, MOVE_HEX, MOVE_TRICK, MOVE_PROTECT}, //诡异咒语，祸不单行，戏法，守住
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWKING_GALAR_5] = {
        .species = SPECIES_SLOWKING_GALAR, //伽勒尔呆呆王
        .moves = {MOVE_EERIE_SPELL, MOVE_TOXIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT}, //诡异咒语，剧毒，光墙，反射壁
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLURPUFF_1] = {
        .species = SPECIES_SLURPUFF, //胖甜妮
        .moves = {MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_YAWN, MOVE_BELLY_DRUM}, //嬉闹，吸取拳，哈欠，腹鼓
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLURPUFF_2] = {
        .species = SPECIES_SLURPUFF, //胖甜妮
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_CALM_MIND}, //魔法闪耀，喷射火焰，十万伏特，冥想
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLURPUFF_3] = {
        .species = SPECIES_SLURPUFF, //胖甜妮
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SUBSTITUTE, MOVE_YAWN, MOVE_STICKY_WEB}, //魔法闪耀，替身，哈欠，黏黏网
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLURPUFF_4] = {
        .species = SPECIES_SLURPUFF, //胖甜妮
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_STRING_SHOT, MOVE_STICKY_WEB, MOVE_HELPING_HAND}, //魔法闪耀，吐丝，黏黏网，帮助
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SMEARGLE_1] = {
        .species = SPECIES_SMEARGLE, //图图犬
        .moves = {MOVE_SPORE, MOVE_MINIMIZE, MOVE_TAIL_GLOW, MOVE_BATON_PASS}, //蘑菇孢子，变小，萤火，接棒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SMEARGLE_2] = {
        .species = SPECIES_SMEARGLE, //图图犬
        .moves = {MOVE_SPORE, MOVE_SHELL_SMASH, MOVE_MINIMIZE, MOVE_BATON_PASS}, //蘑菇孢子，破壳，变小，接棒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SMEARGLE_3] = {
        .species = SPECIES_SMEARGLE, //图图犬
        .moves = {MOVE_POPULATION_BOMB, MOVE_PIN_MISSILE, MOVE_BONE_RUSH, MOVE_BULLET_SEED}, //鼠数儿，飞弹针，骨棒乱打，种子机关枪
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SMEARGLE_4] = {
        .species = SPECIES_SMEARGLE, //图图犬
        .moves = {MOVE_POPULATION_BOMB, MOVE_SCALE_SHOT, MOVE_ROCK_BLAST, MOVE_ICICLE_SPEAR}, //鼠数儿，鳞射，岩石爆击，冰锥
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SMEARGLE_5] = {
        .species = SPECIES_SMEARGLE, //图图犬
        .moves = {MOVE_SPORE, MOVE_FOLLOW_ME, MOVE_BURNING_BULWARK, MOVE_FAKE_OUT}, //蘑菇孢子，看我嘛，火焰守护，击掌奇袭
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SNEASLER_1] = {
        .species = SPECIES_SNEASLER, //大狃拉
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_SHADOW_CLAW, MOVE_ACROBATICS}, //近身战，克命爪，暗影爪，杂技
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SNEASLER_2] = {
        .species = SPECIES_SNEASLER, //大狃拉
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //近身战，克命爪，拍落，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNEASLER_3] = {
        .species = SPECIES_SNEASLER, //大狃拉
        .moves = {MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_DIRE_CLAW, MOVE_FAKE_OUT}, //近身战，垃圾射击，克命爪，击掌奇袭
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNEASLER_4] = {
        .species = SPECIES_SNEASLER, //大狃拉
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_ACROBATICS, MOVE_FAKE_OUT}, //近身战，克命爪，杂技，击掌奇袭
        .heldItem = ITEM_PSYCHIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX_GMAX, //卡比兽
        .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK}, //泰山压顶，诅咒，睡觉，梦话
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(188, 0, 144, 0, 0, 176),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX_GMAX, //卡比兽
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SUPERCELL_SLAM, MOVE_YAWN}, //舍身冲撞，地震，闪电强袭，哈欠
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX_GMAX, //卡比兽
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SUPERCELL_SLAM, MOVE_REST}, //报恩，地震，闪电强袭，睡觉
        .heldItem = ITEM_SNORLIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX, //卡比兽
        .moves = {MOVE_RETURN, MOVE_HIGH_HORSEPOWER, MOVE_BELLY_DRUM, MOVE_RECYCLE}, //报恩，十万马力，腹鼓，回收利用
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX, //卡比兽
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HEAT_CRASH, MOVE_CURSE, MOVE_RECYCLE}, //舍身冲撞，高温重压，诅咒，回收利用
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK, //太阳岩
        .moves = {MOVE_ANCIENT_POWER, MOVE_TOXIC, MOVE_CALM_MIND, MOVE_BATON_PASS}, //原始之力，剧毒，冥想，接棒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK, //太阳岩
        .moves = {MOVE_ROCK_SLIDE, MOVE_WILL_O_WISP, MOVE_STEALTH_ROCK, MOVE_MORNING_SUN}, //岩崩，磷火，隐形岩，晨光
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SOLROCK_3] = {
        .species = SPECIES_SOLROCK, //太阳岩
        .moves = {MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //岩崩，意念头锤，地震，剑舞
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SOLROCK_4] = {
        .species = SPECIES_SOLROCK, //太阳岩
        .moves = {MOVE_HYPNOSIS, MOVE_HEAL_BLOCK, MOVE_HELPING_HAND, MOVE_MORNING_SUN}, //催眠术，回复封锁，帮助，晨光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SPINDA_1] = {
        .species = SPECIES_SPINDA, //晃晃斑
        .moves = {MOVE_RETURN, MOVE_SUPERPOWER, MOVE_SUCKER_PUNCH, MOVE_TRICK_ROOM}, //报恩，蛮力，突袭，戏法空间
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SPINDA_2] = {
        .species = SPECIES_SPINDA, //晃晃斑
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_WILD_CHARGE, MOVE_FAKE_OUT}, //舍身冲撞，蛮力，疯狂伏特，击掌奇袭
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SPINDA_3] = {
        .species = SPECIES_SPINDA, //晃晃斑
        .moves = {MOVE_RETURN, MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_SUCKER_PUNCH}, //报恩，吸取拳，增强拳，突袭
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPINDA_4] = {
        .species = SPECIES_SPINDA, //晃晃斑
        .moves = {MOVE_BODY_SLAM, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_TRICK_ROOM}, //泰山压顶，击掌奇袭，帮助，戏法空间
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPIRITOMB_1] = {
        .species = SPECIES_SPIRITOMB, //花岩怪
        .moves = {MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_PURSUIT, MOVE_WILL_O_WISP}, //欺诈，突袭，追打，磷火
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPIRITOMB_2] = {
        .species = SPECIES_SPIRITOMB, //花岩怪
        .moves = {MOVE_SHADOW_BALL, MOVE_DREAM_EATER, MOVE_CALM_MIND, MOVE_HYPNOSIS}, //暗影球，食梦，冥想，催眠术
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPIRITOMB_3] = {
        .species = SPECIES_SPIRITOMB, //花岩怪
        .moves = {MOVE_SUCKER_PUNCH, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_SUBSTITUTE}, //突袭，磷火，分担痛楚，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SPIRITOMB_4] = {
        .species = SPECIES_SPIRITOMB, //花岩怪
        .moves = {MOVE_SUCKER_PUNCH, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_DESTINY_BOND}, //突袭，磷火，挑衅，同命
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STAKATAKA_1] = {
        .species = SPECIES_STAKATAKA, //垒磊石
        .moves = {MOVE_STONE_EDGE, MOVE_TRICK_ROOM, MOVE_EARTHQUAKE, MOVE_BODY_PRESS}, //尖石攻击，戏法空间，地震，扑击
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_STAKATAKA_2] = {
        .species = SPECIES_STAKATAKA, //垒磊石
        .moves = {MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM}, //岩崩，陀螺球，隐形岩，戏法空间
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_STAKATAKA_3] = {
        .species = SPECIES_STAKATAKA, //垒磊石
        .moves = {MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_TRICK_ROOM}, //陀螺球，扑击，剧毒，戏法空间
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_STAKATAKA_4] = {
        .species = SPECIES_STAKATAKA, //垒磊石
        .moves = {MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_PROTECT}, //岩崩，陀螺球，戏法空间，守住
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER, //惊角鹿
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_MEGAHORN}, //舍身冲撞，地震，突袭，超级角击
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER, //惊角鹿
        .moves = {MOVE_RETURN, MOVE_JUMP_KICK, MOVE_SUCKER_PUNCH, MOVE_NO_RETREAT}, //报恩，飞踢，突袭，背水一战
        .heldItem = ITEM_IAPAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STANTLER_3] = {
        .species = SPECIES_STANTLER, //惊角鹿
        .moves = {MOVE_EARTHQUAKE, MOVE_HYPNOSIS, MOVE_SUBSTITUTE, MOVE_GRAVITY}, //地震，催眠术，替身，重力
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STANTLER_4] = {
        .species = SPECIES_STANTLER, //惊角鹿
        .moves = {MOVE_RETURN, MOVE_HYPNOSIS, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //报恩，催眠术，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STARAPTOR_1] = {
        .species = SPECIES_STARAPTOR, //姆克鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN}, //勇鸟猛攻，舍身冲撞，近身战，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STARAPTOR_2] = {
        .species = SPECIES_STARAPTOR, //姆克鹰
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}, //舍身冲撞，勇鸟猛攻，近身战，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STARAPTOR_3] = {
        .species = SPECIES_STARAPTOR, //姆克鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_FINAL_GAMBIT, MOVE_DEFOG}, //勇鸟猛攻，急速折返，搏命，清除浓雾
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STARAPTOR_4] = {
        .species = SPECIES_STARAPTOR, //姆克鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_FINAL_GAMBIT}, //勇鸟猛攻，近身战，急速折返，搏命
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 68, 0, 188, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE, //宝石海星
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_EXPANDING_FORCE}, //冲浪，精神强念，冰冻光束，广域战力
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE, //宝石海星
        .moves = {MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_THUNDER, MOVE_EXPANDING_FORCE}, //水炮，精神冲击，打雷，广域战力
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE, //宝石海星
        .moves = {MOVE_SCALD, MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_RECOVER}, //热水，高速旋转，剧毒，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE, //宝石海星
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_THUNDER, MOVE_EXPANDING_FORCE}, //水炮，暴风雪，打雷，广域战力
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX, //大钢蛇
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION}, //铁头，地震，岩崩，大爆炸
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX, //大钢蛇
        .moves = {MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //重磅冲撞，扑击，剧毒，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX, //大钢蛇
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_CURSE}, //重磅冲撞，地震，扑击，诅咒
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 56, 0, 0, 200),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX, //大钢蛇
        .moves = {MOVE_DRAGON_TAIL, MOVE_STEALTH_ROCK, MOVE_SLEEP_TALK, MOVE_REST}, //龙尾，隐形岩，梦话，睡觉
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_STEELIX_5] = {
        .species = SPECIES_STEELIX, //大钢蛇
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //地震，重磅冲撞，岩崩，守住
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_STONJOURNER_1] = {
        .species = SPECIES_STONJOURNER, //巨石丁
        .moves = {MOVE_STONE_EDGE, MOVE_SELFDESTRUCT, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH}, //尖石攻击，玉石俱碎，地震，高温重压
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STONJOURNER_2] = {
        .species = SPECIES_STONJOURNER, //巨石丁
        .moves = {MOVE_STONE_EDGE, MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK}, //尖石攻击，扑击，地震，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STONJOURNER_3] = {
        .species = SPECIES_STONJOURNER, //巨石丁
        .moves = {MOVE_STONE_EDGE, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_ROCK_POLISH}, //尖石攻击，高温重压，地震，岩石打磨
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STONJOURNER_4] = {
        .species = SPECIES_STONJOURNER, //巨石丁
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD, MOVE_PROTECT}, //岩崩，地震，广域防守，守住
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STOUTLAND_1] = {
        .species = SPECIES_STOUTLAND, //长毛狗
        .moves = {MOVE_RETURN, MOVE_SUPERPOWER, MOVE_CRUNCH, MOVE_PLAY_ROUGH}, //报恩，蛮力，咬碎，嬉闹
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STOUTLAND_2] = {
        .species = SPECIES_STOUTLAND, //长毛狗
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_ICE_FANG}, //咬碎，精神之牙，火焰牙，冰冻牙
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STOUTLAND_3] = {
        .species = SPECIES_STOUTLAND, //长毛狗
        .moves = {MOVE_RETURN, MOVE_THUNDER_WAVE, MOVE_HELPING_HAND, MOVE_PROTECT}, //报恩，电磁波，帮助，守住
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STOUTLAND_4] = {
        .species = SPECIES_STOUTLAND, //长毛狗
        .moves = {MOVE_RETURN, MOVE_PURSUIT, MOVE_HELPING_HAND, MOVE_PROTECT}, //报恩，追打，帮助，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STOUTLAND_5] = {
        .species = SPECIES_STOUTLAND, //长毛狗
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_ICE_FANG}, //咬碎，精神之牙，火焰牙，冰冻牙
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 128, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STUNFISK_1] = {
        .species = SPECIES_STUNFISK, //泥巴鱼
        .moves = {MOVE_TOXIC, MOVE_SNAP_TRAP, MOVE_SHORE_UP, MOVE_STEALTH_ROCK}, //剧毒，捕兽夹，集沙，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STUNFISK_2] = {
        .species = SPECIES_STUNFISK, //泥巴鱼
        .moves = {MOVE_DISCHARGE, MOVE_EARTH_POWER, MOVE_SCALD, MOVE_SLUDGE_WAVE}, //放电，大地之力，热水，污泥波
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STUNFISK_3] = {
        .species = SPECIES_STUNFISK, //泥巴鱼
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_YAWN, MOVE_ENDURE}, //地震，抓狂，哈欠，挺住
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STUNFISK_4] = {
        .species = SPECIES_STUNFISK, //泥巴鱼
        .moves = {MOVE_SNAP_TRAP, MOVE_SHORE_UP, MOVE_SANDSTORM, MOVE_PROTECT}, //捕兽夹，集沙，沙暴，守住
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STUNFISK_GALAR_1] = {
        .species = SPECIES_STUNFISK_GALAR, //伽勒尔泥巴鱼
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_YAWN}, //地震，尖石攻击，隐形岩，哈欠
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STUNFISK_GALAR_2] = {
        .species = SPECIES_STUNFISK_GALAR, //伽勒尔泥巴鱼
        .moves = {MOVE_EARTHQUAKE, MOVE_SNAP_TRAP, MOVE_PAIN_SPLIT, MOVE_YAWN}, //地震，捕兽夹，分担痛楚，哈欠
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STUNFISK_GALAR_3] = {
        .species = SPECIES_STUNFISK_GALAR, //伽勒尔泥巴鱼
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_CURSE, MOVE_STEALTH_ROCK}, //地震，咬碎，诅咒，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO, //树才怪
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH}, //双刃头锤，地震，木槌，突袭
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO, //树才怪
        .moves = {MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_EXPLOSION, MOVE_STEALTH_ROCK}, //尖石攻击，突袭，大爆炸，隐形岩
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SUDOWOODO_3] = {
        .species = SPECIES_SUDOWOODO, //树才怪
        .moves = {MOVE_FOUL_PLAY, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //欺诈，扑击，剧毒，隐形岩
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUDOWOODO_4] = {
        .species = SPECIES_SUDOWOODO, //树才怪
        .moves = {MOVE_SUCKER_PUNCH, MOVE_COUNTER, MOVE_COPYCAT, MOVE_STEALTH_ROCK}, //突袭，双倍奉还，仿效，隐形岩
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE, //水君
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_MIRROR_COAT}, //冲浪，冰冻光束，信号光束，镜面反射
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE, //水君
        .moves = {MOVE_SCALD, MOVE_SLEEP_TALK, MOVE_REST, MOVE_CALM_MIND}, //热水，梦话，睡觉，冥想
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 212, 0, 36, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE, //水君
        .moves = {MOVE_SCALD, MOVE_SNARL, MOVE_TOXIC, MOVE_REST}, //热水，大声咆哮，剧毒，睡觉
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_SUICUNE, //水君
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TAILWIND, MOVE_ROAR}, //热水，冰冻光束，顺风，吼叫
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 48, 56, 44, 108),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA, //向日花怪
        .moves = {MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM}, //日光束，大地之力，污泥炸弹，魔法闪耀
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA, //向日花怪
        .moves = {MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, MOVE_SUNNY_DAY}, //飞叶风暴，大地之力，觉醒力量，大晴天
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SUNFLORA_3] = {
        .species = SPECIES_SUNFLORA, //向日花怪
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_SYNTHESIS}, //终极吸取，污泥炸弹，寄生种子，光合作用
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SUNFLORA_4] = {
        .species = SPECIES_SUNFLORA, //向日花怪
        .moves = {MOVE_SOLAR_BEAM, MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_EARTH_POWER}, //日光束，寄生种子，光合作用，大地之力
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT, //吞食兽
        .moves = {MOVE_EARTHQUAKE, MOVE_BULLET_SEED, MOVE_FIRE_PUNCH, MOVE_GUNK_SHOT}, //地震，种子机关枪，火焰拳，垃圾射击
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT, //吞食兽
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}, //污泥炸弹，地震，终极吸取，冰冻光束
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 200, 60),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SWALOT_3] = {
        .species = SPECIES_SWALOT, //吞食兽
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_INFESTATION, MOVE_YAWN}, //地震，大爆炸，纠缠不休，哈欠
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SWALOT_4] = {
        .species = SPECIES_SWALOT, //吞食兽
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_VENOM_DRENCH, MOVE_PROTECT}, //毒液冲击，剧毒，毒液陷阱，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT, //巨沼怪
        .moves = {MOVE_LIQUIDATION, MOVE_BODY_PRESS, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE}, //水流裂破，扑击，冰冻拳，岩崩
        .heldItem = ITEM_SWAMPERTITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT, //巨沼怪
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_WATERFALL, MOVE_ICE_PUNCH}, //地震，双倍奉还，攀瀑，冰冻拳
        .heldItem = ITEM_SWAMPERTITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT, //巨沼怪
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE}, //攀瀑，地震，冰冻拳，岩崩
        .heldItem = ITEM_SWAMPERTITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT, //巨沼怪
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_LIQUIDATION, MOVE_WIDE_GUARD}, //地震，尖石攻击，水流裂破，广域防守
        .heldItem = ITEM_SWAMPERTITE,
        .ev = TRAINER_PARTY_EVS(152, 44, 64, 112, 0, 136),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWANNA_1] = {
        .species = SPECIES_SWANNA, //舞天鹅
        .moves = {MOVE_LIQUIDATION, MOVE_BRAVE_BIRD, MOVE_TRIPLE_AXEL, MOVE_STEEL_WING}, //水流裂破，勇鸟猛攻，三旋击，钢翼
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWANNA_2] = {
        .species = SPECIES_SWANNA, //舞天鹅
        .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_ROOST, MOVE_RAIN_DANCE}, //冲浪，暴风，羽栖，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWANNA_3] = {
        .species = SPECIES_SWANNA, //舞天鹅
        .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_NASTY_PLOT}, //冲浪，空气之刃，冰冻光束，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWANNA_4] = {
        .species = SPECIES_SWANNA, //舞天鹅
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_PROTECT}, //水炮，暴风，顺风，守住
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW, //大王燕
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_U_TURN}, //硬撑，勇鸟猛攻，钢翼，急速折返
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW, //大王燕
        .moves = {MOVE_BOOMBURST, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_U_TURN}, //爆音波，空气之刃，热风，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWELLOW_3] = {
        .species = SPECIES_SWELLOW, //大王燕
        .moves = {MOVE_BRAVE_BIRD, MOVE_FEATHER_DANCE, MOVE_ROOST, MOVE_TAILWIND}, //勇鸟猛攻，羽毛舞，羽栖，顺风
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWELLOW_4] = {
        .species = SPECIES_SWELLOW, //大王燕
        .moves = {MOVE_HEAT_WAVE, MOVE_BOOMBURST, MOVE_QUICK_GUARD, MOVE_TAILWIND}, //热风，爆音波，快速防守，顺风
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWOOBAT_1] = {
        .species = SPECIES_SWOOBAT, //心蝙蝠
        .moves = {MOVE_STORED_POWER, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM}, //辅助力量，信号光束，冥想，影子分身
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWOOBAT_2] = {
        .species = SPECIES_SWOOBAT, //心蝙蝠
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_TOXIC, MOVE_TRICK, MOVE_PROTECT}, //精神之牙，剧毒，戏法，守住
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWOOBAT_3] = {
        .species = SPECIES_SWOOBAT, //心蝙蝠
        .moves = {MOVE_SUPER_FANG, MOVE_TOXIC, MOVE_MAGIC_COAT, MOVE_TAILWIND}, //愤怒门牙，剧毒，魔法反射，顺风
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWOOBAT_4] = {
        .species = SPECIES_SWOOBAT, //心蝙蝠
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_HELPING_HAND, MOVE_PROTECT}, //气场之翼，空气之刃，帮助，守住
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SYLVEON_1] = {
        .species = SPECIES_SYLVEON, //仙子伊布
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE}, //巨声，精神冲击，暗影球，魔法火焰
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SYLVEON_2] = {
        .species = SPECIES_SYLVEON, //仙子伊布
        .moves = {MOVE_HYPER_VOICE, MOVE_WISH, MOVE_PROTECT, MOVE_HEAL_BELL}, //巨声，祈愿，守住，治愈铃声
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SYLVEON_3] = {
        .species = SPECIES_SYLVEON, //仙子伊布
        .moves = {MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_MISTY_TERRAIN, MOVE_BATON_PASS}, //巨声，冥想，薄雾场地，接棒
        .heldItem = ITEM_MISTY_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SYLVEON_4] = {
        .species = SPECIES_SYLVEON, //仙子伊布
        .moves = {MOVE_HYPER_VOICE, MOVE_YAWN, MOVE_HELPING_HAND, MOVE_HEAL_BELL}, //巨声，哈欠，帮助，治愈铃声
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TALONFLAME_1] = {
        .species = SPECIES_TALONFLAME, //烈箭鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_SWORDS_DANCE, MOVE_TAILWIND}, //勇鸟猛攻，急速折返，剑舞，顺风
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TALONFLAME_2] = {
        .species = SPECIES_TALONFLAME, //烈箭鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_TAILWIND, MOVE_U_TURN}, //勇鸟猛攻，闪焰冲锋，顺风，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TALONFLAME_3] = {
        .species = SPECIES_TALONFLAME, //烈箭鹰
        .moves = {MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_BULK_UP, MOVE_WILL_O_WISP}, //杂技，顺风，健美，磷火
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TALONFLAME_4] = {
        .species = SPECIES_TALONFLAME, //烈箭鹰
        .moves = {MOVE_BRAVE_BIRD, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_TAUNT}, //勇鸟猛攻，过热，顺风，挑衅
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TANGROWTH_1] = {
        .species = SPECIES_TANGROWTH, //巨蔓藤
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_KNOCK_OFF}, //终极吸取，污泥炸弹，觉醒力量，拍落
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 28, 0, 0, 228),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_TANGROWTH_2] = {
        .species = SPECIES_TANGROWTH, //巨蔓藤
        .moves = {MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER}, //终极吸取，觉醒力量，拍落，催眠粉
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(248, 0, 212, 0, 0, 48),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TANGROWTH_3] = {
        .species = SPECIES_TANGROWTH, //巨蔓藤
        .moves = {MOVE_SOLAR_BEAM, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY}, //日光束，觉醒力量，催眠粉，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TANGROWTH_4] = {
        .species = SPECIES_TANGROWTH, //巨蔓藤
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_INGRAIN}, //终极吸取，寄生种子，催眠粉，扎根
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(248, 0, 212, 0, 0, 48),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TANGROWTH_5] = {
        .species = SPECIES_TANGROWTH, //巨蔓藤
        .moves = {MOVE_SOLAR_BLADE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_GROWTH}, //日光刃，岩崩，地震，生长
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAPU_BULU_1] = {
        .species = SPECIES_TAPU_BULU, //卡璞・哞哞
        .moves = {MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE}, //木槌，木角，近身战，尖石攻击
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAPU_BULU_2] = {
        .species = SPECIES_TAPU_BULU, //卡璞・哞哞
        .moves = {MOVE_HORN_LEECH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_PROTECT}, //木角，近身战，剑舞，守住
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAPU_BULU_3] = {
        .species = SPECIES_TAPU_BULU, //卡璞・哞哞
        .moves = {MOVE_HORN_LEECH, MOVE_NATURES_MADNESS, MOVE_LEECH_SEED, MOVE_TOXIC}, //木角，自然之怒，寄生种子，剧毒
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TAPU_BULU_4] = {
        .species = SPECIES_TAPU_BULU, //卡璞・哞哞
        .moves = {MOVE_WOOD_HAMMER, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_PROTECT}, //木槌，近身战，剑舞，守住
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 56, 0, 84, 0, 116),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAPU_FINI_1] = {
        .species = SPECIES_TAPU_FINI, //卡璞・鳍鳍
        .moves = {MOVE_MOONBLAST, MOVE_NATURES_MADNESS, MOVE_DEFOG, MOVE_TAUNT}, //月亮之力，自然之怒，清除浓雾，挑衅
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_FINI_2] = {
        .species = SPECIES_TAPU_FINI, //卡璞・鳍鳍
        .moves = {MOVE_SCALD, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, //热水，月亮之力，暗影球，冥想
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TAPU_FINI_3] = {
        .species = SPECIES_TAPU_FINI, //卡璞・鳍鳍
        .moves = {MOVE_SCALD, MOVE_DEFOG, MOVE_TRICK, MOVE_AQUA_RING}, //热水，清除浓雾，戏法，水流环
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TAPU_FINI_4] = {
        .species = SPECIES_TAPU_FINI, //卡璞・鳍鳍
        .moves = {MOVE_MUDDY_WATER, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, MOVE_PROTECT}, //浊流，自然之怒，治愈波动，守住
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 140, 0, 116, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TAPU_KOKO_1] = {
        .species = SPECIES_TAPU_KOKO, //卡璞・鸣鸣
        .moves = {MOVE_WILD_CHARGE, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_U_TURN}, //疯狂伏特，勇鸟猛攻，铁头，急速折返
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAPU_KOKO_2] = {
        .species = SPECIES_TAPU_KOKO, //卡璞・鸣鸣
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH}, //十万伏特，魔法闪耀，电力上升，伏特替换
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TAPU_KOKO_3] = {
        .species = SPECIES_TAPU_KOKO, //卡璞・鸣鸣
        .moves = {MOVE_WILD_CHARGE, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_U_TURN}, //疯狂伏特，魔法闪耀，觉醒力量，急速折返
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAPU_KOKO_4] = {
        .species = SPECIES_TAPU_KOKO, //卡璞・鸣鸣
        .moves = {MOVE_RISING_VOLTAGE, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_PROTECT}, //电力上升，魔法闪耀，伏特替换，守住
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_LELE_1] = {
        .species = SPECIES_TAPU_LELE, //卡璞・蝶蝶
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_EXPANDING_FORCE}, //精神强念，月亮之力，真气弹，广域战力
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_LELE_2] = {
        .species = SPECIES_TAPU_LELE, //卡璞・蝶蝶
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_EXPANDING_FORCE}, //精神强念，月亮之力，真气弹，广域战力
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAPU_LELE_3] = {
        .species = SPECIES_TAPU_LELE, //卡璞・蝶蝶
        .moves = {MOVE_MOONBLAST, MOVE_NATURES_MADNESS, MOVE_DEFOG, MOVE_EXPANDING_FORCE}, //月亮之力，自然之怒，清除浓雾，广域战力
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TAPU_LELE_4] = {
        .species = SPECIES_TAPU_LELE, //卡璞・蝶蝶
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MOONBLAST, MOVE_TAUNT, MOVE_PROTECT}, //广域战力，月亮之力，挑衅，守住
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 60, 84, 112, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TATSUGIRI_CURLY_1] = {
        .species = SPECIES_TATSUGIRI_CURLY, //米立龙
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_PROTECT, MOVE_ENDURE}, //水炮，流星群，守住，挺住
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TATSUGIRI_CURLY_2] = {
        .species = SPECIES_TATSUGIRI_CURLY, //米立龙
        .moves = {MOVE_MUDDY_WATER, MOVE_DRACO_METEOR, MOVE_ICY_WIND, MOVE_PROTECT}, //浊流，流星群，冰冻之风，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(72, 0, 160, 0, 252, 24),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TATSUGIRI_DROOPY_1] = {
        .species = SPECIES_TATSUGIRI_DROOPY, //米立龙DROOPY
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_PROTECT, MOVE_ENDURE}, //水炮，流星群，守住，挺住
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TATSUGIRI_DROOPY_2] = {
        .species = SPECIES_TATSUGIRI_DROOPY, //米立龙DROOPY
        .moves = {MOVE_MUDDY_WATER, MOVE_DRACO_METEOR, MOVE_ICY_WIND, MOVE_PROTECT}, //浊流，流星群，冰冻之风，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(72, 0, 160, 0, 252, 24),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TATSUGIRI_STRETCHY_1] = {
        .species = SPECIES_TATSUGIRI_STRETCHY, //米立龙STRETCHY
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_PROTECT, MOVE_ENDURE}, //水炮，流星群，守住，挺住
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TATSUGIRI_STRETCHY_2] = {
        .species = SPECIES_TATSUGIRI_STRETCHY, //米立龙STRETCHY
        .moves = {MOVE_MUDDY_WATER, MOVE_DRACO_METEOR, MOVE_ICY_WIND, MOVE_PROTECT}, //浊流，流星群，冰冻之风，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(72, 0, 160, 0, 252, 24),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS, //肯泰罗
        .moves = {MOVE_HEAD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_ROCK_SLIDE}, //爆炸头突击，近身战，深渊突刺，岩崩
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS, //肯泰罗
        .moves = {MOVE_GIGA_IMPACT, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_SUBSTITUTE}, //终极冲击，近身战，深渊突刺，替身
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS, //肯泰罗
        .moves = {MOVE_BODY_SLAM, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_ENDURE}, //泰山压顶，蛮干，绝处逢生，挺住
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS, //肯泰罗
        .moves = {MOVE_HEAD_CHARGE, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //爆炸头突击，十万马力，岩崩，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL, //毒刺水母
        .moves = {MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE}, //攀瀑，毒击，高速旋转，剑舞
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL, //毒刺水母
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN}, //水炮，污泥炸弹，冰冻光束，终极吸取
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL, //毒刺水母
        .moves = {MOVE_SCALD, MOVE_RAPID_SPIN, MOVE_TOXIC_SPIKES, MOVE_PROTECT}, //热水，高速旋转，毒菱，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL, //毒刺水母
        .moves = {MOVE_GIGA_DRAIN, MOVE_RAPID_SPIN, MOVE_TOXIC_SPIKES, MOVE_ACUPRESSURE}, //终极吸取，高速旋转，毒菱，点穴
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TERRAKION_1] = {
        .species = SPECIES_TERRAKION, //代拉基翁
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //尖石攻击，近身战，地震，剑舞
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TERRAKION_2] = {
        .species = SPECIES_TERRAKION, //代拉基翁
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT}, //尖石攻击，近身战，地震，意念头锤
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TERRAKION_3] = {
        .species = SPECIES_TERRAKION, //代拉基翁
        .moves = {MOVE_ROCK_SLIDE, MOVE_SACRED_SWORD, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //岩崩，圣剑，剧毒，隐形岩
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TERRAKION_4] = {
        .species = SPECIES_TERRAKION, //代拉基翁
        .moves = {MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_QUICK_GUARD}, //岩崩，近身战，地震，快速防守
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 128, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_THIEVUL_1] = {
        .species = SPECIES_THIEVUL, //猾大狐
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_BURNING_JEALOUSY, MOVE_PARTING_SHOT}, //恶之波动，精神强念，妒火，抛下狠话
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THIEVUL_2] = {
        .species = SPECIES_THIEVUL, //猾大狐
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT}, //恶之波动，精神强念，打草结，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THIEVUL_3] = {
        .species = SPECIES_THIEVUL, //猾大狐
        .moves = {MOVE_SNARL, MOVE_BURNING_JEALOUSY, MOVE_HIDDEN_POWER, MOVE_HYPER_BEAM}, //大声咆哮，妒火，觉醒力量，破坏光线
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THIEVUL_4] = {
        .species = SPECIES_THIEVUL, //猾大狐
        .moves = {MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_TAUNT, MOVE_PROTECT}, //欺诈，大声咆哮，挑衅，守住
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THROH_1] = {
        .species = SPECIES_THROH, //投摔鬼
        .moves = {MOVE_STORM_THROW, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_RECOVER}, //山岚摔，硬撑，拍落，自我再生
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_THROH_2] = {
        .species = SPECIES_THROH, //投摔鬼
        .moves = {MOVE_STORM_THROW, MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_BULK_UP}, //山岚摔，拍落，自我再生，健美
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_THROH_3] = {
        .species = SPECIES_THROH, //投摔鬼
        .moves = {MOVE_CIRCLE_THROW, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK}, //巴投，拍落，睡觉，梦话
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_THROH_4] = {
        .species = SPECIES_THROH, //投摔鬼
        .moves = {MOVE_STORM_THROW, MOVE_ROCK_SLIDE, MOVE_HELPING_HAND, MOVE_MAT_BLOCK}, //山岚摔，岩崩，帮助，掀榻榻米
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_THUNDURUS_INCARNATE_1] = {
        .species = SPECIES_THUNDURUS_INCARNATE, //雷电云-化身形态
        .moves = {MOVE_WILD_CHARGE, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_U_TURN}, //疯狂伏特，挑衅，电磁波，急速折返
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_THUNDURUS_INCARNATE_2] = {
        .species = SPECIES_THUNDURUS_INCARNATE, //雷电云-化身形态
        .moves = {MOVE_WILDBOLT_STORM, MOVE_VOLT_SWITCH, MOVE_FOCUS_BLAST, MOVE_TAUNT}, //鸣雷风暴，伏特替换，真气弹，挑衅
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THUNDURUS_INCARNATE_3] = {
        .species = SPECIES_THUNDURUS_INCARNATE, //雷电云-化身形态
        .moves = {MOVE_WILD_CHARGE, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_TAUNT}, //疯狂伏特，拍落，电磁波，挑衅
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_1] = {
        .species = SPECIES_THUNDURUS_THERIAN, //雷电云-灵兽形态
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}, //十万伏特，真气弹，觉醒力量，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_2] = {
        .species = SPECIES_THUNDURUS_THERIAN, //雷电云-灵兽形态
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER, MOVE_SLUDGE_WAVE}, //十万伏特，真气弹，觉醒力量，污泥波
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_3] = {
        .species = SPECIES_THUNDURUS_THERIAN, //雷电云-灵兽形态
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER, MOVE_SLUDGE_BOMB}, //十万伏特，伏特替换，觉醒力量，污泥炸弹
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TING_LU_1] = {
        .species = SPECIES_TING_LU, //古鼎鹿
        .moves = {MOVE_PROTECT, MOVE_STOMPING_TANTRUM, MOVE_THROAT_CHOP, MOVE_HEAVY_SLAM}, //守住，跺脚，深渊突刺，重磅冲撞
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TING_LU_2] = {
        .species = SPECIES_TING_LU, //古鼎鹿
        .moves = {MOVE_PROTECT, MOVE_STOMPING_TANTRUM, MOVE_PAYBACK, MOVE_BODY_PRESS}, //守住，跺脚，以牙还牙，扑击
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(240, 48, 32, 0, 0, 188),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TINKATON_1] = {
        .species = SPECIES_TINKATON, //巨锻匠
        .moves = {MOVE_FAKE_OUT, MOVE_GIGATON_HAMMER, MOVE_PROTECT, MOVE_ENCORE}, //击掌奇袭，巨力锤，守住，再来一次
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(32, 252, 0, 224, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TINKATON_2] = {
        .species = SPECIES_TINKATON, //巨锻匠
        .moves = {MOVE_FAKE_OUT, MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_FEINT}, //击掌奇袭，巨力锤，嬉闹，佯攻
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(164, 92, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOEDSCRUEL_1] = {
        .species = SPECIES_TOEDSCRUEL, //陆地水母
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_LEAF_STORM}, //大地之力，污泥炸弹，魔法闪耀，飞叶风暴
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(160, 0, 0, 232, 116, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOEDSCRUEL_2] = {
        .species = SPECIES_TOEDSCRUEL, //陆地水母
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_ENERGY_BALL}, //大地之力，污泥炸弹，终极吸取，能量球
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOGEDEMARU_1] = {
        .species = SPECIES_TOGEDEMARU, //托戈德玛尔
        .moves = {MOVE_WILD_CHARGE, MOVE_POISON_JAB, MOVE_FELL_STINGER, MOVE_SPIKY_SHIELD}, //疯狂伏特，毒击，致命针刺，尖刺防守
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOGEDEMARU_2] = {
        .species = SPECIES_TOGEDEMARU, //托戈德玛尔
        .moves = {MOVE_ZING_ZAP, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_ELECTRIC_TERRAIN}, //麻麻刺刺，急速折返，击掌奇袭，电气场地
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOGEDEMARU_3] = {
        .species = SPECIES_TOGEDEMARU, //托戈德玛尔
        .moves = {MOVE_ZING_ZAP, MOVE_TOXIC, MOVE_WISH, MOVE_SPIKY_SHIELD}, //麻麻刺刺，剧毒，祈愿，尖刺防守
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TOGEDEMARU_4] = {
        .species = SPECIES_TOGEDEMARU, //托戈德玛尔
        .moves = {MOVE_NUZZLE, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_SPIKY_SHIELD}, //蹭蹭脸颊，击掌奇袭，帮助，尖刺防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TOGEKISS_1] = {
        .species = SPECIES_TOGEKISS, //波克基斯
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT}, //魔法闪耀，空气之刃，波导弹，诡计
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOGEKISS_2] = {
        .species = SPECIES_TOGEKISS, //波克基斯
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_FLAMETHROWER}, //魔法闪耀，空气之刃，波导弹，喷射火焰
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOGEKISS_3] = {
        .species = SPECIES_TOGEKISS, //波克基斯
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDER_WAVE, MOVE_DEFOG, MOVE_ROOST}, //空气之刃，电磁波，清除浓雾，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 96, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TOGEKISS_4] = {
        .species = SPECIES_TOGEKISS, //波克基斯
        .moves = {MOVE_AIR_SLASH, MOVE_ENCORE, MOVE_TAILWIND, MOVE_FOLLOW_ME}, //空气之刃，再来一次，顺风，看我嘛
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 204, 28, 0, 24),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL, //煤炭龟
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_SHELL_SMASH}, //大字爆炎，日光束，大地之力，破壳
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL, //煤炭龟
        .moves = {MOVE_LAVA_PLUME, MOVE_RAPID_SPIN, MOVE_YAWN, MOVE_STEALTH_ROCK}, //喷烟，高速旋转，哈欠，隐形岩
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(248, 0, 232, 0, 0, 28),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TORKOAL_3] = {
        .species = SPECIES_TORKOAL, //煤炭龟
        .moves = {MOVE_ERUPTION, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_STEALTH_ROCK}, //喷火，扑击，磷火，隐形岩
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TORKOAL_4] = {
        .species = SPECIES_TORKOAL, //煤炭龟
        .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER}, //喷火，喷射火焰，日光束，大地之力
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_TORNADUS_INCARNATE_1] = {
        .species = SPECIES_TORNADUS_INCARNATE, //龙卷云-化身形态
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST}, //枯叶风暴，顺风，热风，真气弹
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TORNADUS_INCARNATE_2] = {
        .species = SPECIES_TORNADUS_INCARNATE, //龙卷云-化身形态
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_TAUNT, MOVE_DEFOG, MOVE_TAILWIND}, //枯叶风暴，挑衅，清除浓雾，顺风
        .heldItem = ITEM_COVERT_CLOAK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TORNADUS_INCARNATE_3] = {
        .species = SPECIES_TORNADUS_INCARNATE, //龙卷云-化身形态
        .moves = {MOVE_ACROBATICS, MOVE_SUPERPOWER, MOVE_TAILWIND, MOVE_TAUNT}, //杂技，蛮力，顺风，挑衅
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TORNADUS_THERIAN_1] = {
        .species = SPECIES_TORNADUS_THERIAN, //龙卷云-灵兽形态
        .moves = {MOVE_AIR_SLASH, MOVE_DARK_PULSE, MOVE_TAILWIND, MOVE_REST}, //空气之刃，恶之波动，顺风，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TORNADUS_THERIAN_2] = {
        .species = SPECIES_TORNADUS_THERIAN, //龙卷云-灵兽形态
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG, MOVE_TAILWIND}, //拍落，剧毒，清除浓雾，顺风
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TORNADUS_THERIAN_3] = {
        .species = SPECIES_TORNADUS_THERIAN, //龙卷云-灵兽形态
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_DARK_PULSE, MOVE_TAILWIND, MOVE_PROTECT}, //枯叶风暴，恶之波动，顺风，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TORTERRA_1] = {
        .species = SPECIES_TORTERRA, //土台龟
        .moves = {MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SYNTHESIS}, //木槌，地震，隐形岩，光合作用
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 60, 196, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TORTERRA_2] = {
        .species = SPECIES_TORTERRA, //土台龟
        .moves = {MOVE_HEADLONG_RUSH, MOVE_STONE_EDGE, MOVE_ROCK_POLISH, MOVE_SWORDS_DANCE}, //突飞猛扑，尖石攻击，岩石打磨，剑舞
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TORTERRA_3] = {
        .species = SPECIES_TORTERRA, //土台龟
        .moves = {MOVE_GRASSY_GLIDE, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_GRASSY_TERRAIN}, //青草滑梯，寄生种子，替身，青草场地
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TORTERRA_4] = {
        .species = SPECIES_TORTERRA, //土台龟
        .moves = {MOVE_LEAF_BLADE, MOVE_HEADLONG_RUSH, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD}, //叶刃，突飞猛扑，岩崩，广域防守
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_TOUCANNON_1] = {
        .species = SPECIES_TOUCANNON, //铳嘴大鸟
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_SMACK_DOWN, MOVE_SWORDS_DANCE}, //啄钻，钢翼，击落，剑舞
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOUCANNON_2] = {
        .species = SPECIES_TOUCANNON, //铳嘴大鸟
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_TAILWIND}, //勇鸟猛攻，岩石爆击，种子机关枪，顺风
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(92, 252, 0, 164, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOUCANNON_3] = {
        .species = SPECIES_TOUCANNON, //铳嘴大鸟
        .moves = {MOVE_BEAK_BLAST, MOVE_OVERHEAT, MOVE_ROOST, MOVE_TAILWIND}, //鸟嘴加农炮，过热，羽栖，顺风
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TOUCANNON_4] = {
        .species = SPECIES_TOUCANNON, //铳嘴大鸟
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_FEATHER_DANCE, MOVE_TAILWIND}, //岩石爆击，种子机关枪，羽毛舞，顺风
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 0, 128),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TOXAPEX_1] = {
        .species = SPECIES_TOXAPEX, //超坏星
        .moves = {MOVE_SCALD, MOVE_VENOSHOCK, MOVE_TOXIC_SPIKES, MOVE_BANEFUL_BUNKER}, //热水，毒液冲击，毒菱，碉堡
        .heldItem = ITEM_POISON_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOXAPEX_2] = {
        .species = SPECIES_TOXAPEX, //超坏星
        .moves = {MOVE_KNOCK_OFF, MOVE_RECOVER, MOVE_TOXIC_SPIKES, MOVE_BANEFUL_BUNKER}, //拍落，自我再生，毒菱，碉堡
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TOXAPEX_3] = {
        .species = SPECIES_TOXAPEX, //超坏星
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC, MOVE_BANEFUL_BUNKER}, //热水，自我再生，剧毒，碉堡
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TOXAPEX_4] = {
        .species = SPECIES_TOXAPEX, //超坏星
        .moves = {MOVE_TOXIC, MOVE_TOXIC_SPIKES, MOVE_RECOVER, MOVE_WIDE_GUARD}, //剧毒，毒菱，自我再生，广域防守
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TOXICROAK_1] = {
        .species = SPECIES_TOXICROAK, //毒骷蛙
        .moves = {MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, //垃圾射击，近身战，突袭，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXICROAK_2] = {
        .species = SPECIES_TOXICROAK, //毒骷蛙
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_DARK_PULSE, MOVE_NASTY_PLOT}, //污泥波，真气弹，恶之波动，诡计
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOXICROAK_3] = {
        .species = SPECIES_TOXICROAK, //毒骷蛙
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_TAUNT, MOVE_FAKE_OUT}, //近身战，突袭，挑衅，击掌奇袭
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXICROAK_4] = {
        .species = SPECIES_TOXICROAK, //毒骷蛙
        .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_FEINT, MOVE_FAKE_OUT}, //毒击，吸取拳，佯攻，击掌奇袭
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(64, 252, 0, 192, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXTRICITY_1] = {
        .species = SPECIES_TOXTRICITY_AMPED_GMAX, //颤弦蝾螈
        .moves = {MOVE_POISON_JAB, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_SHIFT_GEAR}, //毒击，雷电拳，火焰拳，换档
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOXTRICITY_2] = {
        .species = SPECIES_TOXTRICITY_AMPED_GMAX, //颤弦蝾螈
        .moves = {MOVE_SLUDGE_WAVE, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_RISING_VOLTAGE}, //污泥波，破音，爆音波，电力上升
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOXTRICITY_3] = {
        .species = SPECIES_TOXTRICITY_LOW_KEY_GMAX, //颤弦蝾螈
        .moves = {MOVE_SLUDGE_WAVE, MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_RISING_VOLTAGE}, //污泥波，破音，爆音波，电力上升
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TOXTRICITY_4] = {
        .species = SPECIES_TOXTRICITY_LOW_KEY_GMAX, //颤弦蝾螈
        .moves = {MOVE_SLUDGE_BOMB, MOVE_OVERDRIVE, MOVE_VOLT_SWITCH, MOVE_BOOMBURST}, //污泥炸弹，破音，伏特替换，爆音波
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TREVENANT_1] = {
        .species = SPECIES_TREVENANT, //朽木妖
        .moves = {MOVE_WOOD_HAMMER, MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH}, //木槌，灵骚，地震，突袭
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TREVENANT_2] = {
        .species = SPECIES_TREVENANT, //朽木妖
        .moves = {MOVE_PHANTOM_FORCE, MOVE_LEECH_SEED, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE}, //潜灵奇袭，寄生种子，磷火，替身
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TREVENANT_3] = {
        .species = SPECIES_TREVENANT, //朽木妖
        .moves = {MOVE_HORN_LEECH, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_PROTECT}, //木角，寄生种子，剧毒，守住
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TREVENANT_4] = {
        .species = SPECIES_TREVENANT, //朽木妖
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_LEECH_SEED, MOVE_WILL_O_WISP}, //岩崩，地震，寄生种子，磷火
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 176, 0, 0, 0, 80),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS, //热带龙
        .moves = {MOVE_SOLAR_BEAM, MOVE_HURRICANE, MOVE_ROOST, MOVE_SUNNY_DAY}, //日光束，暴风，羽栖，大晴天
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS, //热带龙
        .moves = {MOVE_AIR_SLASH, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT}, //空气之刃，寄生种子，替身，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TROPIUS_3] = {
        .species = SPECIES_TROPIUS, //热带龙
        .moves = {MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_ENDURE, MOVE_ROOST}, //终极吸取，空气之刃，挺住，羽栖
        .heldItem = ITEM_STARF_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TROPIUS_4] = {
        .species = SPECIES_TROPIUS, //热带龙
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_TAILWIND, MOVE_SUNNY_DAY}, //终极吸取，寄生种子，顺风，大晴天
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TSAREENA_1] = {
        .species = SPECIES_TSAREENA, //甜冷美后
        .moves = {MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_U_TURN}, //强力鞭打，飞膝踢，拍落，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TSAREENA_2] = {
        .species = SPECIES_TSAREENA, //甜冷美后
        .moves = {MOVE_TROP_KICK, MOVE_PLAY_ROUGH, MOVE_TRIPLE_AXEL, MOVE_FEINT}, //热带踢，嬉闹，三旋击，佯攻
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TSAREENA_3] = {
        .species = SPECIES_TSAREENA, //甜冷美后
        .moves = {MOVE_TROP_KICK, MOVE_PLAY_ROUGH, MOVE_TRIPLE_AXEL, MOVE_FEINT}, //热带踢，嬉闹，三旋击，佯攻
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_TSAREENA_4] = {
        .species = SPECIES_TSAREENA, //甜冷美后
        .moves = {MOVE_TROP_KICK, MOVE_GRASSWHISTLE, MOVE_ACUPRESSURE, MOVE_HELPING_HAND}, //热带踢，草笛，点穴，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(128, 252, 128, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_TURTONATOR_1] = {
        .species = SPECIES_TURTONATOR, //爆焰龟兽
        .moves = {MOVE_SEARING_SHOT, MOVE_DRACO_METEOR, MOVE_SCORCHING_SANDS, MOVE_SHELL_SMASH}, //火焰弹，流星群，热沙大地，破壳
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TURTONATOR_2] = {
        .species = SPECIES_TURTONATOR, //爆焰龟兽
        .moves = {MOVE_SEARING_SHOT, MOVE_SOLAR_BEAM, MOVE_DRACO_METEOR, MOVE_SUNNY_DAY}, //火焰弹，日光束，流星群，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TURTONATOR_3] = {
        .species = SPECIES_TURTONATOR, //爆焰龟兽
        .moves = {MOVE_BODY_PRESS, MOVE_SHELL_TRAP, MOVE_TOXIC, MOVE_PROTECT}, //扑击，陷阱甲壳，剧毒，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TURTONATOR_4] = {
        .species = SPECIES_TURTONATOR, //爆焰龟兽
        .moves = {MOVE_HEAT_WAVE, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, MOVE_WIDE_GUARD}, //热风，巨声，流星群，广域防守
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION, //火暴兽
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH}, //闪焰冲锋，疯狂伏特，地震，增强拳
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION, //火暴兽
        .moves = {MOVE_FIRE_BLAST, MOVE_ERUPTION, MOVE_SCORCHING_SANDS, MOVE_SOLAR_BEAM}, //大字爆炎，喷火，热沙大地，日光束
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION, //火暴兽
        .moves = {MOVE_BURN_UP, MOVE_SOLAR_BEAM, MOVE_SCORCHING_SANDS, MOVE_WILL_O_WISP}, //燃尽，日光束，热沙大地，磷火
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION, //火暴兽
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SCORCHING_SANDS, MOVE_PROTECT}, //热风，日光束，热沙大地，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_1] = {
        .species = SPECIES_TYPHLOSION_HISUI, //洗翠火暴兽
        .moves = {MOVE_ERUPTION, MOVE_INFERNAL_PARADE, MOVE_FIRE_BLAST, MOVE_EXTRASENSORY}, //喷火，群魔乱舞，大字爆炎，神通力
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_2] = {
        .species = SPECIES_TYPHLOSION_HISUI, //洗翠火暴兽
        .moves = {MOVE_BURN_UP, MOVE_INFERNAL_PARADE, MOVE_HIDDEN_POWER, MOVE_WILL_O_WISP}, //燃尽，群魔乱舞，觉醒力量，磷火
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_3] = {
        .species = SPECIES_TYPHLOSION_HISUI, //洗翠火暴兽
        .moves = {MOVE_FIRE_BLAST, MOVE_INFERNAL_PARADE, MOVE_REVERSAL, MOVE_ERUPTION}, //大字爆炎，群魔乱舞，绝处逢生，喷火
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_4] = {
        .species = SPECIES_TYPHLOSION_HISUI, //洗翠火暴兽
        .moves = {MOVE_BURNING_JEALOUSY, MOVE_INFERNAL_PARADE, MOVE_FOCUS_BLAST, MOVE_ERUPTION}, //妒火，群魔乱舞，真气弹，喷火
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR, //班基拉斯
        .moves = {MOVE_STONE_EDGE, MOVE_PAYBACK, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH}, //尖石攻击，以牙还牙，地震，冰冻拳
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANTRUM_1] = {
        .species = SPECIES_TYRANTRUM, //怪颚龙
        .moves = {MOVE_HEAD_SMASH, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_ROCK_POLISH}, //双刃头锤，逆鳞，地震，岩石打磨
        .heldItem = ITEM_ROCKIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYRANTRUM_2] = {
        .species = SPECIES_TYRANTRUM, //怪颚龙
        .moves = {MOVE_STONE_EDGE, MOVE_SCALE_SHOT, MOVE_CRUNCH, MOVE_POISON_FANG}, //尖石攻击，鳞射，咬碎，剧毒牙
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYRANTRUM_3] = {
        .species = SPECIES_TYRANTRUM, //怪颚龙
        .moves = {MOVE_HEAD_SMASH, MOVE_SUBSTITUTE, MOVE_SWAGGER, MOVE_STEALTH_ROCK}, //双刃头锤，替身，虚张声势，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TYRANTRUM_4] = {
        .species = SPECIES_TYRANTRUM, //怪颚龙
        .moves = {MOVE_HEAD_SMASH, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_STEALTH_ROCK}, //双刃头锤，岩崩，近身战，隐形岩
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON, //月亮伊布
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //欺诈，剧毒，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON, //月亮伊布
        .moves = {MOVE_SNARL, MOVE_CONFUSE_RAY, MOVE_MOONLIGHT, MOVE_PROTECT}, //大声咆哮，奇异之光，月光，守住
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON, //月亮伊布
        .moves = {MOVE_PAYBACK, MOVE_CURSE, MOVE_MOONLIGHT, MOVE_CONFUSE_RAY}, //以牙还牙，诅咒，月光，奇异之光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON, //月亮伊布
        .moves = {MOVE_SNARL, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_MOONLIGHT}, //大声咆哮，帮助，治愈铃声，月光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_UNFEZANT_1] = {
        .species = SPECIES_UNFEZANT, //高傲雉鸡
        .moves = {MOVE_RETURN, MOVE_BRAVE_BIRD, MOVE_NIGHT_SLASH, MOVE_U_TURN}, //报恩，勇鸟猛攻，暗袭要害，急速折返
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_UNFEZANT_2] = {
        .species = SPECIES_UNFEZANT, //高傲雉鸡
        .moves = {MOVE_GIGA_IMPACT, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_U_TURN}, //终极冲击，勇鸟猛攻，钢翼，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_UNFEZANT_3] = {
        .species = SPECIES_UNFEZANT, //高傲雉鸡
        .moves = {MOVE_U_TURN, MOVE_HYPNOSIS, MOVE_FEATHER_DANCE, MOVE_TAILWIND}, //急速折返，催眠术，羽毛舞，顺风
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_UNFEZANT_4] = {
        .species = SPECIES_UNFEZANT, //高傲雉鸡
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_TAILWIND, MOVE_DETECT}, //勇鸟猛攻，急速折返，顺风，看穿
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSALUNA_1] = {
        .species = SPECIES_URSALUNA, //月月熊
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HEADLONG_RUSH, MOVE_PLAY_ROUGH, MOVE_HAMMER_ARM}, //舍身冲撞，突飞猛扑，嬉闹，臂锤
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_URSALUNA_2] = {
        .species = SPECIES_URSALUNA, //月月熊
        .moves = {MOVE_FACADE, MOVE_HEADLONG_RUSH, MOVE_ICE_PUNCH, MOVE_GUNK_SHOT}, //硬撑，突飞猛扑，冰冻拳，垃圾射击
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_URSALUNA_3] = {
        .species = SPECIES_URSALUNA, //月月熊
        .moves = {MOVE_EARTHQUAKE, MOVE_SLEEP_TALK, MOVE_REST, MOVE_BELLY_DRUM}, //地震，梦话，睡觉，腹鼓
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_URSALUNA_4] = {
        .species = SPECIES_URSALUNA, //月月熊
        .moves = {MOVE_FACADE, MOVE_HEADLONG_RUSH, MOVE_HAMMER_ARM, MOVE_PROTECT}, //硬撑，突飞猛扑，臂锤，守住
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING, //圈圈熊
        .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE}, //硬撑，近身战，嬉闹，剑舞
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING, //圈圈熊
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_CRUNCH}, //舍身冲撞，近身战，冰冻拳，咬碎
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_URSARING, //圈圈熊
        .moves = {MOVE_RETURN, MOVE_SLEEP_TALK, MOVE_BULK_UP, MOVE_REST}, //报恩，梦话，健美，睡觉
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_4] = {
        .species = SPECIES_URSARING, //圈圈熊
        .moves = {MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_YAWN}, //泰山压顶，近身战，咬碎，哈欠
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_UXIE_1] = {
        .species = SPECIES_UXIE, //由克希
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}, //精神强念，广域战力，暗影球，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UXIE_2] = {
        .species = SPECIES_UXIE, //由克希
        .moves = {MOVE_MYSTICAL_POWER, MOVE_YAWN, MOVE_MEMENTO, MOVE_STEALTH_ROCK}, //神秘之力，哈欠，临别礼物，隐形岩
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 40, 216, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UXIE_3] = {
        .species = SPECIES_UXIE, //由克希
        .moves = {MOVE_PSYCHIC, MOVE_U_TURN, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //精神强念，急速折返，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_UXIE_4] = {
        .species = SPECIES_UXIE, //由克希
        .moves = {MOVE_STEALTH_ROCK, MOVE_MAGIC_COAT, MOVE_HELPING_HAND, MOVE_TRICK_ROOM}, //隐形岩，魔法反射，帮助，戏法空间
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_VANILLUXE_1] = {
        .species = SPECIES_VANILLUXE, //双倍多多冰
        .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER}, //暴风雪，冷冻干燥，加农光炮，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VANILLUXE_2] = {
        .species = SPECIES_VANILLUXE, //双倍多多冰
        .moves = {MOVE_BLIZZARD, MOVE_NATURAL_GIFT, MOVE_ICE_SHARD, MOVE_EXPLOSION}, //暴风雪，自然之恩，冰砾，大爆炸
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VANILLUXE_3] = {
        .species = SPECIES_VANILLUXE, //双倍多多冰
        .moves = {MOVE_FROST_BREATH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_AUTOTOMIZE}, //冰息，加农光炮，觉醒力量，身体轻量化
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VANILLUXE_4] = {
        .species = SPECIES_VANILLUXE, //双倍多多冰
        .moves = {MOVE_BLIZZARD, MOVE_HYPER_VOICE, MOVE_AURORA_VEIL, MOVE_PROTECT}, //暴风雪，巨声，极光幕，守住
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON, //水伊布
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_HYPER_VOICE, MOVE_WORK_UP}, //水炮，暴风雪，巨声，自我激励
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON, //水伊布
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT}, //热水，剧毒，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON, //水伊布
        .moves = {MOVE_WISH, MOVE_CURSE, MOVE_SUBSTITUTE, MOVE_BATON_PASS}, //祈愿，诅咒，替身，接棒
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 172, 0, 0, 84),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON, //水伊布
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_AQUA_RING, MOVE_HELPING_HAND}, //热水，冰冻之风，水流环，帮助
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VELUZA_1] = {
        .species = SPECIES_VELUZA, //轻身鳕
        .moves = {MOVE_AQUA_CUTTER, MOVE_FILLET_AWAY, MOVE_PSYCHO_CUT, MOVE_SUBSTITUTE}, //水波刀，甩肉，精神利刃，替身
        .heldItem = ITEM_LANSAT_BERRY,
        .ev = TRAINER_PARTY_EVS(220, 44, 188, 56, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VELUZA_2] = {
        .species = SPECIES_VELUZA, //轻身鳕
        .moves = {MOVE_AQUA_CUTTER, MOVE_FILLET_AWAY, MOVE_NIGHT_SLASH, MOVE_STORED_POWER}, //水波刀，甩肉，暗袭要害，辅助力量
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH, //摩鲁蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE}, //虫鸣，污泥炸弹，催眠粉，蝶舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH, //摩鲁蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE, MOVE_ROOST}, //虫鸣，催眠粉，蝶舞，羽栖
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENOMOTH_3] = {
        .species = SPECIES_VENOMOTH, //摩鲁蛾
        .moves = {MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT, MOVE_ROOST}, //纠缠不休，剧毒，守住，羽栖
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENOMOTH_4] = {
        .species = SPECIES_VENOMOTH, //摩鲁蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_SLEEP_POWDER, MOVE_TOXIC_SPIKES, MOVE_TAILWIND}, //虫鸣，催眠粉，毒菱，顺风
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR, //妙蛙花
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_SYNTHESIS}, //终极吸取，污泥炸弹，寄生种子，光合作用
        .heldItem = ITEM_VENUSAURITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 132, 12, 112, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR_GMAX, //妙蛙花
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER}, //终极吸取，污泥炸弹，大地之力，催眠粉
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR_GMAX, //妙蛙花
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_GRASSY_TERRAIN}, //青草滑梯，拍落，剑舞，青草场地
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR, //妙蛙花
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_INGRAIN}, //终极吸取，剧毒，寄生种子，扎根
        .heldItem = ITEM_VENUSAURITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VENUSAUR_5] = {
        .species = SPECIES_VENUSAUR_GMAX, //妙蛙花
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT}, //终极吸取，污泥炸弹，催眠粉，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VESPIQUEN_1] = {
        .species = SPECIES_VESPIQUEN, //蜂女王
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_TOXIC, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER}, //双翼，剧毒，防御指令，回复指令
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VESPIQUEN_2] = {
        .species = SPECIES_VESPIQUEN, //蜂女王
        .moves = {MOVE_BUG_BUZZ, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_ROOST}, //虫鸣，剧毒，替身，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VESPIQUEN_3] = {
        .species = SPECIES_VESPIQUEN, //蜂女王
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_VENOSHOCK, MOVE_TOXIC}, //虫鸣，空气之刃，毒液冲击，剧毒
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VESPIQUEN_4] = {
        .species = SPECIES_VESPIQUEN, //蜂女王
        .moves = {MOVE_U_TURN, MOVE_HEAL_ORDER, MOVE_DESTINY_BOND, MOVE_TAILWIND}, //急速折返，回复指令，同命，顺风
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL, //大食花
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_SUNNY_DAY}, //日光束，污泥炸弹，催眠粉，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL, //大食花
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_STRENGTH_SAP}, //飞叶风暴，污泥炸弹，觉醒力量，吸取力量
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 0, 252, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL, //大食花
        .moves = {MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_TOXIC, MOVE_SUBSTITUTE}, //终极吸取，吸取力量，剧毒，替身
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL, //大食花
        .moves = {MOVE_GRAV_APPLE, MOVE_KNOCK_OFF, MOVE_STRENGTH_SAP, MOVE_SLEEP_POWDER}, //万有引力，拍落，吸取力量，催眠粉
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VICTREEBEL_5] = {
        .species = SPECIES_VICTREEBEL, //大食花
        .moves = {MOVE_GRAV_APPLE, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, //万有引力，毒击，拍落，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VIKAVOLT_1] = {
        .species = SPECIES_VIKAVOLT, //锹农炮虫
        .moves = {MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH}, //虫鸣，打雷，能量球，伏特替换
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VIKAVOLT_2] = {
        .species = SPECIES_VIKAVOLT, //锹农炮虫
        .moves = {MOVE_ZAP_CANNON, MOVE_GUILLOTINE, MOVE_CHARGE, MOVE_STICKY_WEB}, //电磁炮，极落钳，充电，黏黏网
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VIKAVOLT_3] = {
        .species = SPECIES_VIKAVOLT, //锹农炮虫
        .moves = {MOVE_DISCHARGE, MOVE_MUD_SLAP, MOVE_STICKY_WEB, MOVE_ROOST}, //放电，掷泥，黏黏网，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VIKAVOLT_4] = {
        .species = SPECIES_VIKAVOLT, //锹农炮虫
        .moves = {MOVE_BUG_BUZZ, MOVE_ELECTROWEB, MOVE_STICKY_WEB, MOVE_LIGHT_SCREEN}, //虫鸣，电网，黏黏网，光墙
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME, //霸王花
        .moves = {MOVE_APPLE_ACID, MOVE_SLUDGE_WAVE, MOVE_MOONBLAST, MOVE_HIDDEN_POWER}, //苹果酸，污泥波，月亮之力，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME, //霸王花
        .moves = {MOVE_PETAL_DANCE, MOVE_STUN_SPORE, MOVE_TEETER_DANCE, MOVE_MOONLIGHT}, //花瓣舞，麻痹粉，摇晃舞，月光
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME, //霸王花
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_PROTECT}, //终极吸取，剧毒，寄生种子，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME, //霸王花
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_TEETER_DANCE, MOVE_STRENGTH_SAP}, //毒液冲击，剧毒，摇晃舞，吸取力量
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VILEPLUME_5] = {
        .species = SPECIES_VILEPLUME, //霸王花
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_WAVE, MOVE_POLLEN_PUFF, MOVE_GROWTH}, //日光束，污泥波，花粉团，生长
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VIRIZION_1] = {
        .species = SPECIES_VIRIZION, //毕力吉翁
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE}, //叶刃，近身战，尖石攻击，剑舞
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VIRIZION_2] = {
        .species = SPECIES_VIRIZION, //毕力吉翁
        .moves = {MOVE_LEAF_BLADE, MOVE_FOCUS_BLAST, MOVE_STONE_EDGE, MOVE_MEGAHORN}, //叶刃，真气弹，尖石攻击，超级角击
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VIRIZION_3] = {
        .species = SPECIES_VIRIZION, //毕力吉翁
        .moves = {MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE, MOVE_SYNTHESIS, MOVE_SUBSTITUTE}, //圣剑，剑舞，光合作用，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VIRIZION_4] = {
        .species = SPECIES_VIRIZION, //毕力吉翁
        .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_PROTECT}, //叶刃，近身战，岩崩，守住
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VIVILLON_ICY_SNOW_1] = {
        .species = SPECIES_VIVILLON_ICY_SNOW, //彩粉蝶
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE}, //虫鸣，暴风，催眠粉，蝶舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VIVILLON_ICY_SNOW_2] = {
        .species = SPECIES_VIVILLON_ICY_SNOW, //彩粉蝶
        .moves = {MOVE_INFESTATION, MOVE_POWDER, MOVE_DEFOG, MOVE_SLEEP_POWDER}, //纠缠不休，粉尘，清除浓雾，催眠粉
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VIVILLON_ICY_SNOW_3] = {
        .species = SPECIES_VIVILLON_ICY_SNOW, //彩粉蝶
        .moves = {MOVE_HURRICANE, MOVE_INFESTATION, MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE}, //暴风，纠缠不休，催眠粉，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VIVILLON_ICY_SNOW_4] = {
        .species = SPECIES_VIVILLON_ICY_SNOW, //彩粉蝶
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_SLEEP_POWDER, MOVE_TAILWIND}, //虫之抵抗，电网，催眠粉，顺风
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 160, 252, 96, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT, //电萤虫
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ENCORE, MOVE_U_TURN}, //反射壁，光墙，再来一次，急速折返
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT, //电萤虫
        .moves = {MOVE_METRONOME, MOVE_TOXIC, MOVE_ENCORE, MOVE_SUNNY_DAY}, //挥指，剧毒，再来一次，大晴天
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VOLBEAT_3] = {
        .species = SPECIES_VOLBEAT, //电萤虫
        .moves = {MOVE_TAIL_GLOW, MOVE_SUBSTITUTE, MOVE_THUNDER_WAVE, MOVE_BATON_PASS}, //萤火，替身，电磁波，接棒
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VOLBEAT_4] = {
        .species = SPECIES_VOLBEAT, //电萤虫
        .moves = {MOVE_ENCORE, MOVE_HELPING_HAND, MOVE_TAILWIND, MOVE_ROOST}, //再来一次，帮助，顺风，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VOLCARONA_1] = {
        .species = SPECIES_VOLCARONA, //火神蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_FIRE_BLAST, MOVE_QUIVER_DANCE, MOVE_ROOST}, //虫鸣，大字爆炎，蝶舞，羽栖
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCARONA_2] = {
        .species = SPECIES_VOLCARONA, //火神蛾
        .moves = {MOVE_BUG_BUZZ, MOVE_FIERY_DANCE, MOVE_HURRICANE, MOVE_QUIVER_DANCE}, //虫鸣，火之舞，暴风，蝶舞
        .heldItem = ITEM_BUGINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VOLCARONA_3] = {
        .species = SPECIES_VOLCARONA, //火神蛾
        .moves = {MOVE_FIRE_SPIN, MOVE_DEFOG, MOVE_TAILWIND, MOVE_ROOST}, //火焰旋涡，清除浓雾，顺风，羽栖
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VOLCARONA_4] = {
        .species = SPECIES_VOLCARONA, //火神蛾
        .moves = {MOVE_HEAT_WAVE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_PROTECT}, //热风，终极吸取，蝶舞，守住
        .heldItem = ITEM_FIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD, //吼鲸王
        .moves = {MOVE_LIQUIDATION, MOVE_AVALANCHE, MOVE_HEAVY_SLAM, MOVE_CURSE}, //水流裂破，雪崩，重磅冲撞，诅咒
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD, //吼鲸王
        .moves = {MOVE_TOXIC, MOVE_NOBLE_ROAR, MOVE_SOAK, MOVE_PROTECT}, //剧毒，战吼，浸水，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD, //吼鲸王
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_SLEEP_TALK, MOVE_REST}, //喷水，冰冻光束，梦话，睡觉
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD, //吼鲸王
        .moves = {MOVE_WATER_SPOUT, MOVE_EARTHQUAKE, MOVE_ICY_WIND, MOVE_REST}, //喷水，地震，冰冻之风，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN, //帝牙海狮
        .moves = {MOVE_ICE_BALL, MOVE_EARTHQUAKE, MOVE_ENCORE, MOVE_SWORDS_DANCE}, //冰球，地震，再来一次，剑舞
        .heldItem = ITEM_METRONOME,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN, //帝牙海狮
        .moves = {MOVE_FROST_BREATH, MOVE_TOXIC, MOVE_STOCKPILE, MOVE_REST}, //冰息，剧毒，蓄力，睡觉
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_WALREIN, //帝牙海狮
        .moves = {MOVE_SURF, MOVE_SUPER_FANG, MOVE_TOXIC, MOVE_ROAR}, //冲浪，愤怒门牙，剧毒，吼叫
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_WALREIN, //帝牙海狮
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_AQUA_RING, MOVE_HAIL}, //冲浪，暴风雪，水流环，冰雹
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WATCHOG_1] = {
        .species = SPECIES_WATCHOG, //步哨鼠
        .moves = {MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_SWORDS_DANCE}, //报恩，拍落，踢倒，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WATCHOG_2] = {
        .species = SPECIES_WATCHOG, //步哨鼠
        .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}, //破坏光线，暗影球，真气弹，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WATCHOG_3] = {
        .species = SPECIES_WATCHOG, //步哨鼠
        .moves = {MOVE_SUPER_FANG, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_MEAN_LOOK}, //愤怒门牙，催眠术，奇异之光，黑色目光
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WATCHOG_4] = {
        .species = SPECIES_WATCHOG, //步哨鼠
        .moves = {MOVE_FACADE, MOVE_THUNDER_WAVE, MOVE_HELPING_HAND, MOVE_DETECT}, //硬撑，电磁波，帮助，看穿
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_WEAVILE_1] = {
        .species = SPECIES_WEAVILE, //玛狃拉
        .moves = {MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_FAKE_OUT}, //冰柱坠击，拍落，冰砾，击掌奇袭
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEAVILE_2] = {
        .species = SPECIES_WEAVILE, //玛狃拉
        .moves = {MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_PSYCHO_CUT, MOVE_ICE_SHARD}, //冰柱坠击，拍落，精神利刃，冰砾
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEAVILE_3] = {
        .species = SPECIES_WEAVILE, //玛狃拉
        .moves = {MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_SWORDS_DANCE}, //三旋击，拍落，冰砾，剑舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEAVILE_4] = {
        .species = SPECIES_WEAVILE, //玛狃拉
        .moves = {MOVE_ICICLE_CRASH, MOVE_BEAT_UP, MOVE_TAUNT, MOVE_FAKE_OUT}, //冰柱坠击，围攻，挑衅，击掌奇袭
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING, //双弹瓦斯
        .moves = {MOVE_SLUDGE_WAVE, MOVE_STRANGE_STEAM, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP}, //污泥波，神奇蒸汽，分担痛楚，磷火
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING, //双弹瓦斯
        .moves = {MOVE_EXPLOSION, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND, MOVE_TOXIC_SPIKES}, //大爆炸，磷火，同命，毒菱
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING, //双弹瓦斯
        .moves = {MOVE_SLUDGE_WAVE, MOVE_INFESTATION, MOVE_WILL_O_WISP, MOVE_PROTECT}, //污泥波，纠缠不休，磷火，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING, //双弹瓦斯
        .moves = {MOVE_VENOSHOCK, MOVE_POISON_GAS, MOVE_VENOM_DRENCH, MOVE_PROTECT}, //毒液冲击，毒瓦斯，毒液陷阱，守住
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_GALAR_1] = {
        .species = SPECIES_WEEZING_GALAR, //伽勒尔双弹瓦斯
        .moves = {MOVE_MISTY_EXPLOSION, MOVE_SLUDGE_WAVE, MOVE_STRANGE_STEAM, MOVE_FLAMETHROWER}, //薄雾炸裂，污泥波，神奇蒸汽，喷射火焰
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WEEZING_GALAR_2] = {
        .species = SPECIES_WEEZING_GALAR, //伽勒尔双弹瓦斯
        .moves = {MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, MOVE_WILL_O_WISP, MOVE_DEFOG}, //污泥炸弹，神奇蒸汽，磷火，清除浓雾
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_GALAR_3] = {
        .species = SPECIES_WEEZING_GALAR, //伽勒尔双弹瓦斯
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_PROTECT}, //魔法闪耀，污泥炸弹，毒菱，守住
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 44, 112, 84),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_GALAR_4] = {
        .species = SPECIES_WEEZING_GALAR, //伽勒尔双弹瓦斯
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_WILL_O_WISP}, //魔法闪耀，污泥炸弹，毒菱，磷火
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 44, 112, 84),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WHIMSICOTT_1] = {
        .species = SPECIES_WHIMSICOTT, //风妖精
        .moves = {MOVE_U_TURN, MOVE_TAUNT, MOVE_LIGHT_SCREEN, MOVE_TAILWIND}, //急速折返，挑衅，光墙，顺风
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WHIMSICOTT_2] = {
        .species = SPECIES_WHIMSICOTT, //风妖精
        .moves = {MOVE_NATURE_POWER, MOVE_LEECH_SEED, MOVE_ENCORE, MOVE_TAILWIND}, //自然之力，寄生种子，再来一次，顺风
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WHIMSICOTT_3] = {
        .species = SPECIES_WHIMSICOTT, //风妖精
        .moves = {MOVE_ENERGY_BALL, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_TAILWIND}, //能量球，月亮之力，精神强念，顺风
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WHIMSICOTT_4] = {
        .species = SPECIES_WHIMSICOTT, //风妖精
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_TAILWIND, MOVE_ENCORE, MOVE_COTTON_GUARD}, //魔法闪耀，顺风，再来一次，棉花防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WHIMSICOTT_5] = {
        .species = SPECIES_WHIMSICOTT, //风妖精
        .moves = {MOVE_BEAT_UP, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_LEECH_SEED}, //围攻，帮助，再来一次，寄生种子
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH, //鲶鱼王
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_BOUNCE, MOVE_DRAGON_DANCE}, //水流裂破，地震，弹跳，龙之舞
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH, //鲶鱼王
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_BLIZZARD, MOVE_FISSURE}, //水炮，大地之力，暴风雪，地裂
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH, //鲶鱼王
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_REST, MOVE_RAIN_DANCE}, //潮旋，剧毒，睡觉，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_WHISCASH, //鲶鱼王
        .moves = {MOVE_MUDDY_WATER, MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_REST}, //浊流，冰冻之风，求雨，睡觉
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF, //胖可丁
        .moves = {MOVE_PLAY_ROUGH, MOVE_DOUBLE_EDGE, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}, //嬉闹，舍身冲撞，火焰拳，雷电拳
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF, //胖可丁
        .moves = {MOVE_WISH, MOVE_STEALTH_ROCK, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //祈愿，隐形岩，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WIGGLYTUFF_3] = {
        .species = SPECIES_WIGGLYTUFF, //胖可丁
        .moves = {MOVE_TOXIC, MOVE_HEAL_PULSE, MOVE_MAGIC_COAT, MOVE_PROTECT}, //剧毒，治愈波动，魔法反射，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WIGGLYTUFF_4] = {
        .species = SPECIES_WIGGLYTUFF, //胖可丁
        .moves = {MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_INCINERATE}, //巨声，魔法闪耀，十万伏特，烧净
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 128, 0, 252, 128),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WISHIWASHI_SOLO_1] = {
        .species = SPECIES_WISHIWASHI_SOLO, //弱丁鱼-单独的样子
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_U_TURN}, //水流尾，地震，铁尾，急速折返
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WISHIWASHI_SOLO_2] = {
        .species = SPECIES_WISHIWASHI_SOLO, //弱丁鱼-单独的样子
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER, MOVE_FLIP_TURN}, //水炮，冰冻光束，觉醒力量，快速折返
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WISHIWASHI_SOLO_3] = {
        .species = SPECIES_WISHIWASHI_SOLO, //弱丁鱼-单独的样子
        .moves = {MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_AQUA_RING, MOVE_PROTECT}, //潮旋，剧毒，水流环，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WISHIWASHI_SOLO_4] = {
        .species = SPECIES_WISHIWASHI_SOLO, //弱丁鱼-单独的样子
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_SLEEP_TALK, MOVE_REST}, //浊流，地震，梦话，睡觉
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET, //果然翁
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND}, //双倍奉还，镜面反射，再来一次，同命
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(224, 0, 32, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET, //果然翁
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND}, //双倍奉还，镜面反射，再来一次，同命
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(224, 0, 252, 0, 0, 32),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WOBBUFFET_3] = {
        .species = SPECIES_WOBBUFFET, //果然翁
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND}, //双倍奉还，镜面反射，再来一次，同命
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(224, 0, 32, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WOBBUFFET_4] = {
        .species = SPECIES_WOBBUFFET, //果然翁
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND}, //双倍奉还，镜面反射，再来一次，同命
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_WORMADAM_PLANT_1] = {
        .species = SPECIES_WORMADAM_PLANT, //结草贵妇-草木蓑衣
        .moves = {MOVE_SILVER_WIND, MOVE_ENERGY_BALL, MOVE_ANCIENT_POWER, MOVE_QUIVER_DANCE}, //银色旋风，能量球，原始之力，蝶舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WORMADAM_PLANT_2] = {
        .species = SPECIES_WORMADAM_PLANT, //结草贵妇-草木蓑衣
        .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_ELECTROWEB, MOVE_ANCIENT_POWER}, //虫鸣，终极吸取，电网，原始之力
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WORMADAM_PLANT_3] = {
        .species = SPECIES_WORMADAM_PLANT, //结草贵妇-草木蓑衣
        .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_SYNTHESIS}, //虫鸣，终极吸取，剧毒，光合作用
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WORMADAM_PLANT_4] = {
        .species = SPECIES_WORMADAM_PLANT, //结草贵妇-草木蓑衣
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_STRING_SHOT, MOVE_PROTECT}, //虫之抵抗，电网，吐丝，守住
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WORMADAM_SANDY_1] = {
        .species = SPECIES_WORMADAM_SANDY, //结草贵妇SANDY
        .moves = {MOVE_ROCK_BLAST, MOVE_EARTHQUAKE, MOVE_BUG_BITE, MOVE_THIEF}, //岩石爆击，地震，虫咬，小偷
        .heldItem = ITEM_ROCK_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WORMADAM_SANDY_2] = {
        .species = SPECIES_WORMADAM_SANDY, //结草贵妇SANDY
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //地震，剧毒，隐形岩，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WORMADAM_SANDY_3] = {
        .species = SPECIES_WORMADAM_SANDY, //结草贵妇SANDY
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_TOXIC, MOVE_RAIN_DANCE}, //地震，突袭，剧毒，求雨
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(240, 216, 52, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WORMADAM_SANDY_4] = {
        .species = SPECIES_WORMADAM_SANDY, //结草贵妇SANDY
        .moves = {MOVE_BUG_BITE, MOVE_BULLDOZE, MOVE_STRING_SHOT, MOVE_SANDSTORM}, //虫咬，重踏，吐丝，沙暴
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WORMADAM_TRASH_1] = {
        .species = SPECIES_WORMADAM_TRASH, //结草贵妇TRASH
        .moves = {MOVE_GYRO_BALL, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //陀螺球，剧毒，隐形岩，守住
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_WORMADAM_TRASH_2] = {
        .species = SPECIES_WORMADAM_TRASH, //结草贵妇TRASH
        .moves = {MOVE_BUG_BITE, MOVE_GYRO_BALL, MOVE_STEALTH_ROCK, MOVE_METAL_BURST}, //虫咬，陀螺球，隐形岩，金属爆炸
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_WORMADAM_TRASH_3] = {
        .species = SPECIES_WORMADAM_TRASH, //结草贵妇TRASH
        .moves = {MOVE_SILVER_WIND, MOVE_FLASH_CANNON, MOVE_ANCIENT_POWER, MOVE_HIDDEN_POWER}, //银色旋风，加农光炮，原始之力，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WORMADAM_TRASH_4] = {
        .species = SPECIES_WORMADAM_TRASH, //结草贵妇TRASH
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ELECTROWEB, MOVE_STEALTH_ROCK, MOVE_PROTECT}, //虫之抵抗，电网，隐形岩，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WO_CHIEN_1] = {
        .species = SPECIES_WO_CHIEN, //古简蜗
        .moves = {MOVE_POLLEN_PUFF, MOVE_SNARL, MOVE_GIGA_DRAIN, MOVE_RUINATION}, //花粉团，大声咆哮，终极吸取，大灾难
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_WO_CHIEN_2] = {
        .species = SPECIES_WO_CHIEN, //古简蜗
        .moves = {MOVE_POLLEN_PUFF, MOVE_SNARL, MOVE_LEECH_SEED, MOVE_KNOCK_OFF}, //花粉团，大声咆哮，寄生种子，拍落
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 180, 0, 0, 76),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WYRDEER_1] = {
        .species = SPECIES_WYRDEER, //诡角鹿
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYSHIELD_BASH, MOVE_EARTHQUAKE, MOVE_MEGAHORN}, //舍身冲撞，屏障猛攻，地震，超级角击
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WYRDEER_2] = {
        .species = SPECIES_WYRDEER, //诡角鹿
        .moves = {MOVE_RETURN, MOVE_PSYSHIELD_BASH, MOVE_EARTHQUAKE, MOVE_NO_RETREAT}, //报恩，屏障猛攻，地震，背水一战
        .heldItem = ITEM_SHED_SHELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WYRDEER_3] = {
        .species = SPECIES_WYRDEER, //诡角鹿
        .moves = {MOVE_UPROAR, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_NO_RETREAT}, //吵闹，精神强念，暗影球，背水一战
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WYRDEER_4] = {
        .species = SPECIES_WYRDEER, //诡角鹿
        .moves = {MOVE_BODY_SLAM, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_REFLECT}, //泰山压顶，电磁波，光墙，反射壁
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU, //天然鸟
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_HEAT_WAVE}, //广域战力，魔法闪耀，暗影球，热风
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU, //天然鸟
        .moves = {MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_U_TURN, MOVE_ROOST}, //精神强念，打草结，急速折返，羽栖
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 240, 16, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU, //天然鸟
        .moves = {MOVE_PSYSHOCK, MOVE_TRICK, MOVE_ROOST, MOVE_PROTECT}, //精神冲击，戏法，羽栖，守住
        .heldItem = ITEM_LAGGING_TAIL,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_XATU, //天然鸟
        .moves = {MOVE_EXPANDING_FORCE , MOVE_MIRACLE_EYE, MOVE_ROOST, MOVE_TAILWIND}, //精神强念，广域战力，羽栖，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XURKITREE_1] = {
        .species = SPECIES_XURKITREE, //电束木
        .moves = {MOVE_RISING_VOLTAGE, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH}, //电力上升，魔法闪耀，能量球，伏特替换
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XURKITREE_2] = {
        .species = SPECIES_XURKITREE, //电束木
        .moves = {MOVE_RISING_VOLTAGE, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH}, //电力上升，魔法闪耀，能量球，伏特替换
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XURKITREE_3] = {
        .species = SPECIES_XURKITREE, //电束木
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_BIND, MOVE_HYPNOSIS, MOVE_VOLT_SWITCH}, //魔法闪耀，绑紧，催眠术，伏特替换
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_XURKITREE_4] = {
        .species = SPECIES_XURKITREE, //电束木
        .moves = {MOVE_DISCHARGE, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_HYPNOSIS}, //放电，魔法闪耀，伏特替换，催眠术
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_YANMEGA_1] = {
        .species = SPECIES_YANMEGA, //远古巨蜓
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_U_TURN}, //虫鸣，空气之刃，终极吸取，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YANMEGA_2] = {
        .species = SPECIES_YANMEGA, //远古巨蜓
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_PROTECT}, //虫鸣，空气之刃，终极吸取，守住
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_YANMEGA_3] = {
        .species = SPECIES_YANMEGA, //远古巨蜓
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_PROTECT}, //虫鸣，空气之刃，原始之力，守住
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_YANMEGA_4] = {
        .species = SPECIES_YANMEGA, //远古巨蜓
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL, MOVE_TAILWIND}, //虫鸣，空气利刃，暗影球，顺风
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE, //猫鼬斩
        .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK}, //硬撑，近身战，拍落，电光一闪
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE, //猫鼬斩
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_FINAL_GAMBIT}, //舍身冲撞，近身战，深渊突刺，搏命
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZANGOOSE_3] = {
        .species = SPECIES_ZANGOOSE, //猫鼬斩
        .moves = {MOVE_QUICK_ATTACK, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM}, //电光一闪，近身战，拍落，腹鼓
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(124, 132, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZANGOOSE_4] = {
        .species = SPECIES_ZANGOOSE, //猫鼬斩
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_FINAL_GAMBIT, MOVE_QUICK_GUARD}, //撕裂爪，岩崩，搏命，快速防守
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS, //闪电鸟
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_RISING_VOLTAGE, MOVE_ROOST}, //十万伏特，热风，电力上升，羽栖
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS, //闪电鸟
        .moves = {MOVE_BOLT_BEAK, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_U_TURN}, //电喙，勇鸟猛攻，钢翼，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS, //闪电鸟
        .moves = {MOVE_RISING_VOLTAGE, MOVE_THUNDER_WAVE, MOVE_DEFOG, MOVE_ROOST}, //电力上升，电磁波，清除浓雾，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS, //闪电鸟
        .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_HIDDEN_POWER, MOVE_TAILWIND}, //打雷，暴风，觉醒力量，顺风
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(244, 0, 80, 64, 64, 56),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ZAPDOS_GALAR_1] = {
        .species = SPECIES_ZAPDOS_GALAR, //伽勒尔闪电鸟
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_THUNDEROUS_KICK, MOVE_U_TURN}, //勇鸟猛攻，近身战，雷鸣蹴击，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_GALAR_2] = {
        .species = SPECIES_ZAPDOS_GALAR, //伽勒尔闪电鸟
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_THUNDEROUS_KICK, MOVE_STOMPING_TANTRUM}, //勇鸟猛攻，雷鸣蹴击，深渊突刺，跺脚
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_GALAR_3] = {
        .species = SPECIES_ZAPDOS_GALAR, //伽勒尔闪电鸟
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_BRAVE_BIRD, MOVE_BLAZE_KICK, MOVE_BULK_UP}, //雷鸣蹴击，勇鸟猛攻，火焰踢，健美
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_GALAR_4] = {
        .species = SPECIES_ZAPDOS_GALAR, //伽勒尔闪电鸟
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DUAL_WINGBEAT, MOVE_COACHING, MOVE_PROTECT}, //近身战，双翼，指导，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEBSTRIKA_1] = {
        .species = SPECIES_ZEBSTRIKA, //雷电斑马
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_HIDDEN_POWER}, //十万伏特，伏特替换，过热，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZEBSTRIKA_2] = {
        .species = SPECIES_ZEBSTRIKA, //雷电斑马
        .moves = {MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ, MOVE_THUNDER_WAVE, MOVE_HIGH_HORSEPOWER}, //疯狂伏特，闪焰冲锋，电磁波，十万马力
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEBSTRIKA_3] = {
        .species = SPECIES_ZEBSTRIKA, //雷电斑马
        .moves = {MOVE_SUPERCELL_SLAM, MOVE_FLARE_BLITZ, MOVE_BODY_SLAM, MOVE_HIGH_HORSEPOWER}, //闪电强袭，闪焰冲锋，泰山压顶，十万马力
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEBSTRIKA_4] = {
        .species = SPECIES_ZEBSTRIKA, //雷电斑马
        .moves = {MOVE_SUPERCELL_SLAM, MOVE_PURSUIT, MOVE_FEINT, MOVE_PROTECT}, //闪电强袭，追打，佯攻，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZOROARK_1] = {
        .species = SPECIES_ZOROARK, //索罗亚克
        .moves = {MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_LOW_KICK, MOVE_SWORDS_DANCE}, //突袭，欺诈，踢倒，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZOROARK_2] = {
        .species = SPECIES_ZOROARK, //索罗亚克
        .moves = {MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}, //恶之波动，喷射火焰，真气弹，诡计
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_3] = {
        .species = SPECIES_ZOROARK, //索罗亚克
        .moves = {MOVE_NIGHT_SLASH, MOVE_SHADOW_CLAW, MOVE_TAUNT, MOVE_COUNTER}, //暗袭要害，暗影爪，挑衅，双倍奉还
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZOROARK_4] = {
        .species = SPECIES_ZOROARK, //索罗亚克
        .moves = {MOVE_NIGHT_DAZE, MOVE_BURNING_JEALOUSY, MOVE_TAUNT, MOVE_DETECT}, //暗黑爆破，妒火，挑衅，看穿
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_HISUI_1] = {
        .species = SPECIES_ZOROARK_HISUI, //洗翠索罗亚克
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT}, //暗影球，巨声，喷射火焰，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_HISUI_2] = {
        .species = SPECIES_ZOROARK_HISUI, //洗翠索罗亚克
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB}, //暗影球，巨声，喷射火焰，污泥炸弹
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZOROARK_HISUI_3] = {
        .species = SPECIES_ZOROARK_HISUI, //洗翠索罗亚克
        .moves = {MOVE_POLTERGEIST, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SWORDS_DANCE}, //灵骚，报恩，踢倒，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZOROARK_HISUI_4] = {
        .species = SPECIES_ZOROARK_HISUI, //洗翠索罗亚克
        .moves = {MOVE_BITTER_MALICE, MOVE_HYPER_VOICE, MOVE_BURNING_JEALOUSY, MOVE_TAUNT}, //冤冤相报，巨声，妒火，挑衅
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARCHALUDON_1] = {
        .species = SPECIES_ARCHALUDON, //铝钢桥龙
        .moves = {MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_SLEEP_TALK, MOVE_REST},//扑击，加农光炮,梦话,睡觉 
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCHALUDON_2] = {
        .species = SPECIES_ARCHALUDON, //铝钢桥龙
        .moves = {MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_ELECTRO_SHOT, MOVE_FOUL_PLAY}, //扑击，加农光炮,电光束，欺诈
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
        [FRONTIER_MON_BELLIBOLT_1] = {
        .species = SPECIES_BELLIBOLT,//电肚蛙
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SOAK, MOVE_SLACK_OFF, MOVE_TOXIC}, // 抛物面充电, 浸水, 偷懒, 剧毒,
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(50, 0, 220, 8, 150, 80),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BELLIBOLT_2] = {
        .species = SPECIES_BELLIBOLT,//电肚蛙
        .moves = {MOVE_RISING_VOLTAGE, MOVE_SOAK, MOVE_SLACK_OFF, MOVE_MUDDY_WATER}, // 电力上升, 浸水, 偷懒, 浊流,
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 88, 0, 252, 168),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BOMBIRDIER_1] = {
        .species = SPECIES_BOMBIRDIER,//下石鸟
        .moves = {MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_DUAL_WINGBEAT, MOVE_ROCK_BLAST}, // 岩崩, 拍落, 双翼, 岩石爆击,
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0 ,252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BOMBIRDIER_2] = {
        .species = SPECIES_BOMBIRDIER,//下石鸟
        .moves = {MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_BRAVE_BIRD, MOVE_DRILL_RUN}, // 岩崩, 拍落, 勇鸟猛攻, 直冲钻,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0 ,252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CYCLIZAR_1] = {
        .species = SPECIES_CYCLIZAR,//摩托蜥
        .moves = {MOVE_SHED_TAIL, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_DRACO_METEOR}, // 断尾, 高速旋转, 拍落, 流星群,
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CYCLIZAR_2] = {
        .species = SPECIES_CYCLIZAR,//摩托蜥
        .moves = {MOVE_SHED_TAIL, MOVE_TAUNT, MOVE_KNOCK_OFF, MOVE_DRACO_METEOR}, // 断尾, 挑衅, 拍落, 流星群,
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUDUNSPARCE_THREE_SEGMENT_1] = {
        .species = SPECIES_DUDUNSPARCE_THREE_SEGMENT,//土龙节节-三节
        .moves = {MOVE_ROOST, MOVE_GLARE, MOVE_HEADBUTT, MOVE_COIL}, // 羽栖, 大蛇瞪眼, 头锤, 盘蜷,
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_DUDUNSPARCE_THREE_SEGMENT_2] = {
        .species = SPECIES_DUDUNSPARCE_THREE_SEGMENT,//土龙节节-三节
        .moves = {MOVE_ANCIENT_POWER, MOVE_GLARE, MOVE_BATON_PASS, MOVE_COIL}, // 原始之力, 大蛇瞪眼, 接棒, 盘蜷,
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 48, 208, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HYDRAPPLE_1] = {
        .species = SPECIES_HYDRAPPLE,//蜜集大蛇
        .moves = {MOVE_FICKLE_BEAM, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_NASTY_PLOT}, // 随机光, 终极吸取, 大地之力, 诡计,
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HYDRAPPLE_2] = {
        .species = SPECIES_HYDRAPPLE,//蜜集大蛇
        .moves = {MOVE_FICKLE_BEAM, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_SYRUP_BOMB}, // 随机光, 终极吸取, 大地之力, 糖浆炸弹,
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KLAWF_1] = {
        .species = SPECIES_KLAWF,//毛崖蟹
        .moves = {MOVE_CRABHAMMER, MOVE_HIGH_HORSEPOWER, MOVE_SWORDS_DANCE, MOVE_STONE_EDGE}, // 蟹钳锤, 十万马力, 剑舞, 尖石攻击,
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KLAWF_2] = {
        .species = SPECIES_KLAWF,//毛崖蟹
        .moves = {MOVE_CRABHAMMER, MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF}, // 蟹钳锤, 十万马力, 岩崩, 拍落,
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LINOONE_GALAR_1] = {
        .species = SPECIES_LINOONE_GALAR,//直冲熊
        .moves = {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_STOMPING_TANTRUM, MOVE_PLAY_ROUGH}, // 神速, 腹鼓, 跺脚, 嬉闹,
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LINOONE_GALAR_2] = {
        .species = SPECIES_LINOONE_GALAR,//直冲熊
        .moves = {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_THROAT_CHOP, MOVE_SHADOW_CLAW}, // 神速, 腹鼓, 深渊突刺, 暗影爪,
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MR_MIME_GALAR_1] = {
        .species = SPECIES_MR_MIME_GALAR,//魔墙人偶
        .moves = {MOVE_FREEZE_DRY, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM}, // 冷冻干燥, 冥想, 精神强念, 魔法闪耀,
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MR_MIME_GALAR_2] = {
        .species = SPECIES_MR_MIME_GALAR,//魔墙人偶
        .moves = {MOVE_FAKE_OUT, MOVE_FREEZE_DRY, MOVE_NASTY_PLOT, MOVE_BATON_PASS}, // 击掌奇袭, 冷冻干燥, 诡计, 接棒,
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORTHWORM_1] = {
        .species = SPECIES_ORTHWORM,//拖拖蚓
        .moves = {MOVE_SHED_TAIL, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK}, // 断尾, 铁壁, 扑击, 隐形岩,
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ORTHWORM_2] = {
        .species = SPECIES_ORTHWORM,//拖拖蚓
        .moves = {MOVE_SHED_TAIL, MOVE_BODY_PRESS, MOVE_REST, MOVE_SLEEP_TALK}, // 断尾, 扑击, 睡觉, 梦话,
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RABSCA] = {
        .species = SPECIES_RABSCA,//虫甲圣
        .moves = {MOVE_REVIVAL_BLESSING, MOVE_TRICK_ROOM, MOVE_THIEF, MOVE_PSYCHIC}, // 复生祈祷, 戏法空间, 小偷, 精神强念,
        .heldItem = ITEM_LEPPA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPIDOPS_1] = {
        .species = SPECIES_SPIDOPS,//操陷蛛
        .moves = {MOVE_STICKY_WEB, MOVE_SPIKES, MOVE_CIRCLE_THROW, MOVE_SUCKER_PUNCH}, // 黏黏网, 撒菱, 巴投, 突袭,
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SPIDOPS_2] = {
        .species = SPECIES_SPIDOPS,//操陷蛛
        .moves = {MOVE_STICKY_WEB, MOVE_SPIKES, MOVE_CIRCLE_THROW, MOVE_SUCKER_PUNCH}, // 黏黏网, 撒菱, 巴投, 突袭,
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TAUROS_PALDEA_AQUA_1] = {
        .species = SPECIES_TAUROS_PALDEA_AQUA,//肯泰罗-水澜种
        .moves = {MOVE_RAGING_BULL, MOVE_EARTHQUAKE, MOVE_WAVE_CRASH, MOVE_AQUA_JET}, // 怒牛, 地震, 波动冲, 水流喷射,
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_PALDEA_AQUA_2] = {
        .species = SPECIES_TAUROS_PALDEA_AQUA,//肯泰罗-水澜种
        .moves = {MOVE_RAGING_BULL, MOVE_BULK_UP, MOVE_WAVE_CRASH, MOVE_CLOSE_COMBAT}, // 怒牛, 健美, 波动冲, 近身战,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_PALDEA_BLAZE_1] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,//肯泰罗-火炽种
        .moves = {MOVE_RAGING_BULL, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ}, // 怒牛, 地震, 近身战, 闪焰冲锋,
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_PALDEA_BLAZE_2] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,//肯泰罗-火炽种
        .moves = {MOVE_RAGING_BULL, MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ}, // 怒牛, 健美, 近身战, 闪焰冲锋,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_1] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,//肯泰罗-斗战种
        .moves = {MOVE_RAGING_BULL, MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT}, // 怒牛, 健美, 地震, 近身战,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_2] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,//肯泰罗-斗战种
        .moves = {MOVE_RAGING_BULL, MOVE_OUTRAGE, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE}, // 怒牛, 逆鳞, 近身战, 疯狂伏特,
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSALUNA_BLOODMOON_1] = {
        .species = SPECIES_URSALUNA_BLOODMOON,//月月熊赫月
        .moves = {MOVE_BLOOD_MOON, MOVE_EARTH_POWER, MOVE_VACUUM_WAVE, MOVE_HYPER_VOICE}, // 血月, 大地之力, 真空波, 巨声,
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_URSALUNA_BLOODMOON_2] = {
        .species = SPECIES_URSALUNA_BLOODMOON,//月月熊赫月
        .moves = {MOVE_CALM_MIND, MOVE_BLOOD_MOON, MOVE_EARTH_POWER, MOVE_MOONBLAST}, // 冥想, 血月, 大地之力, 月亮之力,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WUGTRIO_1] = {
        .species = SPECIES_WUGTRIO,//三海地鼠
        .moves = {MOVE_BULLDOZE, MOVE_SUBSTITUTE, MOVE_FINAL_GAMBIT, MOVE_PAIN_SPLIT}, // 重踏, 替身, 搏命, 分担痛楚,
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WUGTRIO_2] = {
        .species = SPECIES_WUGTRIO,//三海地鼠
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_SUCKER_PUNCH, MOVE_THROAT_CHOP, MOVE_LIQUIDATION}, // 跺脚, 突袭, 深渊突刺, 水流裂破,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PECHARUNT_1] = {
        .species = SPECIES_PECHARUNT, //桃歹郎
        .moves = {MOVE_MALIGNANT_CHAIN, MOVE_RECOVER, MOVE_PARTING_SHOT, MOVE_CURSE}, //邪毒锁链，自我再生，抛下狠话，诅咒
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 88, 0, 172),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PECHARUNT_2] = {
        .species = SPECIES_PECHARUNT, //桃歹郎
        .moves = {MOVE_MALIGNANT_CHAIN, MOVE_RECOVER, MOVE_HEX, MOVE_SHADOW_BALL}, //邪毒锁链，自我再生，祸不单行，暗影球
        .heldItem = ITEM_MARANGA_BERRY,
        .ev = TRAINER_PARTY_EVS(248, 0, 228, 32, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ZYGARDE_10_AURA_BREAK_1] = {
        .species = SPECIES_ZYGARDE_10_AURA_BREAK, //10%形态
        .moves = {MOVE_OUTRAGE, MOVE_THOUSAND_ARROWS, MOVE_IRON_TAIL, MOVE_EXTREME_SPEED}, //逆鳞，千箭齐发，铁尾，神速
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZYGARDE_10_AURA_BREAK_2] = {
        .species = SPECIES_ZYGARDE_10_AURA_BREAK, //10%形态
        .moves = {MOVE_OUTRAGE, MOVE_THOUSAND_ARROWS, MOVE_EXTREME_SPEED, MOVE_DRAGON_DANCE}, //逆鳞，千箭齐发，神速，龙之舞
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOOPA_CONFINED_1] = {
        .species = SPECIES_HOOPA_CONFINED, //惩戒胡帕
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK}, //广域战力，暗影球，真气弹，戏法
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOOPA_CONFINED_2] = {
        .species = SPECIES_HOOPA_CONFINED, //惩戒胡帕
        .moves = {MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_EXPANDING_FORCE}, //暗影球，真气弹，诡计，广域战力
        .heldItem = ITEM_FIGHTINIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOOPA_CONFINED_3] = {
        .species = SPECIES_HOOPA_CONFINED, //惩戒胡帕
        .moves = {MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_LIGHT_SCREEN, MOVE_REFLECT}, //暗影球，同命，光墙，反射壁
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HOOPA_CONFINED_4] = {
        .species = SPECIES_HOOPA_CONFINED, //惩戒胡帕
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPERSPACE_HOLE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}, //暗影球，异次元洞，真气弹，诡计
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOOPA_CONFINED_5] = {
        .species = SPECIES_HOOPA_CONFINED, //惩戒胡帕
        .moves = {MOVE_HYPERSPACE_HOLE, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM, MOVE_DESTINY_BOND}, //异次元洞，十万伏特，戏法空间，同命
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HOOPA_CONFINED_6] = {
        .species = SPECIES_HOOPA_CONFINED, //惩戒胡帕
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}, //广域战力，暗影球，真气弹，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_TREADS_1] = {
        .species = SPECIES_IRON_TREADS, //铁辙迹
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STOMPING_TANTRUM, MOVE_WILD_CHARGE}, //地震，铁头，跺脚，疯狂伏特
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_IRON_TREADS_2] = {
        .species = SPECIES_IRON_TREADS, //铁辙迹
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_HEAVY_SLAM, MOVE_ICE_SPINNER}, //地震，铁头，重磅冲撞，冰旋
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOUGING_FIRE_1] = {
        .species = SPECIES_GOUGING_FIRE, //破空焰
        .moves = {MOVE_BURNING_BULWARK, MOVE_FLARE_BLITZ, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}, //火焰守护，闪焰冲锋，龙之舞，地震
        .heldItem = ITEM_BOOSTER_ENERGY,
     .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOUGING_FIRE_2] = {
        .species = SPECIES_GOUGING_FIRE, //破空焰
        .moves = {MOVE_BURNING_BULWARK, MOVE_MORNING_SUN, MOVE_DRAGON_TAIL, MOVE_IRON_HEAD}, //火焰守护，晨光，龙尾，铁头
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RAGING_BOLT_1] = {
        .species = SPECIES_RAGING_BOLT, //猛雷鼓
        .moves = {MOVE_THUNDERCLAP, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT, MOVE_TAUNT}, //迅雷，流星群，十万伏特，挑衅
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(96, 0, 0, 136, 228, 48),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAGING_BOLT_2] = {
        .species = SPECIES_RAGING_BOLT, //猛雷鼓
        .moves = {MOVE_THUNDERCLAP, MOVE_DRACO_METEOR, MOVE_CALM_MIND, MOVE_RISING_VOLTAGE}, //迅雷，流星群，冥想，电力上升
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 52, 252, 204, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS, //巨金怪
        .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH}, //子弹拳，意念头锤，臂锤，冰冻拳
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS, //巨金怪
        .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH}, //彗星拳，意念头锤，地震，冰冻拳
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_METAGROSS, //巨金怪
        .moves = {MOVE_METEOR_MASH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_PROTECT}, //彗星拳，雷电拳，冰冻拳，守住
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE, //暴飞龙
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_ROOST}, //舍身冲撞，地震，龙之舞，羽栖
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS(44, 252, 0, 212, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE, //暴飞龙
        .moves = {MOVE_DRACO_METEOR, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST}, //流星群，舍身冲撞，地震，大字爆炎
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE, //暴飞龙
        .moves = {MOVE_RETURN, MOVE_DRAGON_DANCE, MOVE_ROOST, MOVE_PROTECT}, //报恩，龙之舞，羽栖，守住
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS(116, 62, 2, 172, 0, 156),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR, //班基拉斯
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_FIRE_FANG, MOVE_KNOCK_OFF}, //岩崩，地震，火焰牙，拍落
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(120, 136, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR, //班基拉斯
        .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //尖石攻击，咬碎，地震，龙之舞
        .heldItem = ITEM_TYRANITARITE,
        .ev = TRAINER_PARTY_EVS(120, 136, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR, //班基拉斯
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT}, //岩崩，咬碎，冰冻牙，守住
        .heldItem = ITEM_TYRANITARITE,
        .ev = TRAINER_PARTY_EVS(180, 252, 0, 76, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS, //拉帝亚斯
        .moves = {MOVE_MIST_BALL, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_ICE_BEAM}, //薄雾球，波导弹，暗影球，冰冻光束
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS, //拉帝亚斯
        .moves = {MOVE_MIST_BALL, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_ROOST}, //薄雾球，光墙，反射壁，羽栖
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS, //拉帝亚斯
        .moves = {MOVE_PSYSHOCK, MOVE_AURA_SPHERE, MOVE_CALM_MIND, MOVE_RECOVER}, //精神冲击，波导弹，冥想，自我再生
        .heldItem = ITEM_LATIASITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS, //拉帝亚斯
        .moves = {MOVE_DRACO_METEOR, MOVE_TOXIC, MOVE_DEFOG, MOVE_HEALING_WISH}, //流星群，剧毒，清除浓雾，治愈之愿
        .heldItem = ITEM_LATIASITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 76, 176, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS, //拉帝亚斯
        .moves = {MOVE_PSYCHO_SHIFT, MOVE_RECOVER, MOVE_HEAL_PULSE, MOVE_TAILWIND}, //精神转移，自我再生，治愈波动，顺风
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS, //拉帝欧斯
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND}, //流星群，精神冲击，魔法火焰，冥想
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS, //拉帝欧斯
        .moves = {MOVE_LUSTER_PURGE, MOVE_DRACO_METEOR, MOVE_AURA_SPHERE, MOVE_AIR_SLASH}, //洁净光芒，流星群，波导弹，空气之刃
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS, //拉帝欧斯
        .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //龙爪，意念头锤，地震，龙之舞
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS, //拉帝欧斯
        .moves = {MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_RECOVER}, //精神冲击，魔法火焰，冥想，自我再生
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS, //拉帝欧斯
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_PROTECT}, //流星群，精神冲击，顺风，守住
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEW_1] = {
        .species = SPECIES_MEW, //梦幻
        .moves = {MOVE_PSYCHIC, MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL}, //精神强念，广域战力，波导弹，暗影球
        .heldItem = ITEM_MEWNIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEW_2] = {
        .species = SPECIES_MEW, //梦幻
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_CLOSE_COMBAT, MOVE_POLTERGEIST, MOVE_DRAGON_DANCE}, //精神之牙，近身战，灵骚，龙之舞
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEW_3] = {
        .species = SPECIES_MEW, //梦幻
        .moves = {MOVE_THUNDER_WAVE, MOVE_BARRIER, MOVE_NASTY_PLOT, MOVE_BATON_PASS}, //电磁波，屏障，诡计，接棒
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MEW_4] = {
        .species = SPECIES_MEW, //梦幻
        .moves = {MOVE_TOXIC, MOVE_BARRIER, MOVE_AMNESIA, MOVE_SOFT_BOILED}, //剧毒，屏障，瞬间失忆，生蛋
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEW_5] = {
        .species = SPECIES_MEW, //梦幻
        .moves = {MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_STEALTH_ROCK, MOVE_TAILWIND}, //急速折返，击掌奇袭，隐形岩，顺风
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEW_6] = {
        .species = SPECIES_MEW, //梦幻
        .moves = {MOVE_BURNING_JEALOUSY, MOVE_SNARL, MOVE_ELECTROWEB, MOVE_POLLEN_PUFF}, //妒火，大声咆哮，电网，花粉团
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUGIA_1] = {
        .species = SPECIES_LUGIA, //洛奇亚
        .moves = {MOVE_AEROBLAST, MOVE_EARTH_POWER, MOVE_CALM_MIND, MOVE_RECOVER}, //气旋攻击，大地之力，冥想，自我再生
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUGIA_2] = {
        .species = SPECIES_LUGIA, //洛奇亚
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_TRICK}, //双翼，意念头锤，地震，戏法
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUGIA_3] = {
        .species = SPECIES_LUGIA, //洛奇亚
        .moves = {MOVE_PSYCHIC, MOVE_ROOST, MOVE_REFLECT, MOVE_LIGHT_SCREEN}, //精神强念，羽栖，反射壁，光墙
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 160, 96, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUGIA_4] = {
        .species = SPECIES_LUGIA, //洛奇亚
        .moves = {MOVE_ICE_BEAM, MOVE_WHIRLWIND, MOVE_TOXIC, MOVE_ROOST}, //冰冻光束，吹飞，剧毒，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LUGIA_5] = {
        .species = SPECIES_LUGIA, //洛奇亚
        .moves = {MOVE_AEROBLAST, MOVE_ICY_WIND, MOVE_CALM_MIND, MOVE_ROOST}, //气旋攻击，冰冻之风，冥想，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HO_OH_1] = {
        .species = SPECIES_HO_OH, //风王
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT}, //神圣之火，勇鸟猛攻，地震，意念头锤
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HO_OH_2] = {
        .species = SPECIES_HO_OH, //风王
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_SUBSTITUTE, MOVE_RECOVER}, //神圣之火，勇鸟猛攻，替身，自我再生
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(104, 252, 0, 152, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HO_OH_3] = {
        .species = SPECIES_HO_OH, //风王
        .moves = {MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_RECOVER}, //闪焰冲锋，勇鸟猛攻，地震，自我再生
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HO_OH_4] = {
        .species = SPECIES_HO_OH, //风王
        .moves = {MOVE_SACRED_FIRE, MOVE_TOXIC, MOVE_DEFOG, MOVE_RECOVER}, //神圣之火，剧毒，清除浓雾，自我再生
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(240, 0, 204, 0, 0, 64),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HO_OH_5] = {
        .species = SPECIES_HO_OH, //风王
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_PROTECT}, //神圣之火，勇鸟猛攻，顺风，守住
        .heldItem = ITEM_FLYINIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DIALGA_1] = {
        .species = SPECIES_DIALGA, //帝牙卢卡
        .moves = {MOVE_ROAR_OF_TIME, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_STEALTH_ROCK}, //时光咆哮，大字爆炎，十万伏特，隐形岩
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(104, 0, 0, 152, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DIALGA_2] = {
        .species = SPECIES_DIALGA, //帝牙卢卡
        .moves = {MOVE_FLASH_CANNON, MOVE_CLANGING_SCALES, MOVE_EARTH_POWER, MOVE_ICE_BEAM}, //加农光炮，鳞片噪音，大地之力，冰冻光束
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DIALGA_3] = {
        .species = SPECIES_DIALGA, //帝牙卢卡
        .moves = {MOVE_DRACO_METEOR, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_IRON_DEFENSE}, //流星群，扑击，剧毒，铁壁
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DIALGA_4] = {
        .species = SPECIES_DIALGA, //帝牙卢卡
        .moves = {MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, MOVE_ROAR, MOVE_STEALTH_ROCK}, //加农光炮，流星群，吼叫，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(244, 0, 0, 12, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DIALGA_ORIGIN_1] = {
        .species = SPECIES_DIALGA_ORIGIN, //帝牙卢卡-起源形态
        .moves = {MOVE_FLASH_CANNON, MOVE_STEEL_BEAM, MOVE_AURA_SPHERE, MOVE_DRACO_METEOR}, //加农光炮，铁蹄光线，波导弹，流星群
        .heldItem = ITEM_ADAMANT_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DIALGA_ORIGIN_2] = {
        .species = SPECIES_DIALGA_ORIGIN, //帝牙卢卡-起源形态
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_AURA_SPHERE}, //流星群，加农光炮，大地之力，波导弹
        .heldItem = ITEM_ADAMANT_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DIALGA_ORIGIN_3] = {
        .species = SPECIES_DIALGA_ORIGIN, //帝牙卢卡-起源形态
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_STEEL_BEAM}, //龙之波动，加农光炮，大地之力，铁蹄光线
        .heldItem = ITEM_ADAMANT_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CELEBI_1] = {
        .species = SPECIES_CELEBI, //时拉比
        .moves = {MOVE_LEAF_STORM, MOVE_EXPANDING_FORCE, MOVE_EARTH_POWER, MOVE_NASTY_PLOT}, //飞叶风暴，广域战力，大地之力，诡计
        .heldItem = ITEM_GRASSIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CELEBI_2] = {
        .species = SPECIES_CELEBI, //时拉比
        .moves = {MOVE_GIGA_DRAIN, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK, MOVE_RECOVER}, //终极吸取，电磁波，隐形岩，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CELEBI_3] = {
        .species = SPECIES_CELEBI, //时拉比
        .moves = {MOVE_GIGA_DRAIN, MOVE_U_TURN, MOVE_LEECH_SEED, MOVE_STEALTH_ROCK}, //终极吸取，急速折返，寄生种子，隐形岩
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CELEBI_4] = {
        .species = SPECIES_CELEBI, //时拉比
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, //意念头锤，叶刃，突袭，剑舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CELEBI_5] = {
        .species = SPECIES_CELEBI, //时拉比
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_AURA_SPHERE, MOVE_PSYCHIC_TERRAIN}, //广域战力，暗影球，波导弹，精神场地
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CELEBI_6] = {
        .species = SPECIES_CELEBI, //时拉比
        .moves = {MOVE_POLLEN_PUFF, MOVE_DAZZLING_GLEAM, MOVE_HELPING_HAND, MOVE_RECOVER}, //花粉团，魔法闪耀，帮助，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KELDEO_RESOLUTE_1] = {
        .species = SPECIES_KELDEO_RESOLUTE, //凯路迪欧-觉醒形态
        .moves = {MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_AURORA_BEAM, MOVE_HIDDEN_POWER}, //水炮，神秘之剑，极光束，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KELDEO_RESOLUTE_2] = {
        .species = SPECIES_KELDEO_RESOLUTE, //凯路迪欧-觉醒形态
        .moves = {MOVE_SCALD, MOVE_SECRET_SWORD, MOVE_CALM_MIND, MOVE_SUBSTITUTE}, //热水，神秘之剑，冥想，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JIRACHI_1] = {
        .species = SPECIES_JIRACHI, //基拉祈
        .moves = {MOVE_IRON_HEAD, MOVE_FIRE_PUNCH, MOVE_U_TURN, MOVE_HEALING_WISH}, //铁头，火焰拳，急速折返，治愈之愿
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_JIRACHI_2] = {
        .species = SPECIES_JIRACHI, //基拉祈
        .moves = {MOVE_EXPANDING_FORCE, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_HAPPY_HOUR}, //广域战力，加农光炮，十万伏特，欢乐时光
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JIRACHI_3] = {
        .species = SPECIES_JIRACHI, //基拉祈
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MIST_BALL, MOVE_AURA_SPHERE, MOVE_CALM_MIND}, //广域战力，薄雾球，波导弹，冥想
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JIRACHI_4] = {
        .species = SPECIES_JIRACHI, //基拉祈
        .moves = {MOVE_METEOR_MASH, MOVE_BODY_SLAM, MOVE_WISH, MOVE_PROTECT}, //彗星拳，泰山压顶，祈愿，守住
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_JIRACHI_5] = {
        .species = SPECIES_JIRACHI, //基拉祈
        .moves = {MOVE_IRON_HEAD, MOVE_FOLLOW_ME, MOVE_TRICK_ROOM, MOVE_GRAVITY}, //铁头，看我嘛，戏法空间，重力
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_JIRACHI_6] = {
        .species = SPECIES_JIRACHI, //基拉祈
        .moves = {MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_PROTECT}, //广域战力，波导弹，加农光炮，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEOXYS_NORMAL_1] = {
        .species = SPECIES_DEOXYS_NORMAL, //代欧奇希斯
        .moves = {MOVE_EXTREME_SPEED, MOVE_TAUNT, MOVE_MIRROR_COAT, MOVE_COUNTER}, //神速，挑衅，镜面反射，双倍奉还
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DEOXYS_NORMAL_2] = {
        .species = SPECIES_DEOXYS_NORMAL, //代欧奇希斯
        .moves = {MOVE_EXTREME_SPEED, MOVE_EXPANDING_FORCE, MOVE_DARK_PULSE, MOVE_THUNDERBOLT}, //神速，广域战力，恶之波动，十万伏特
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEOXYS_ATTACK_1] = {
        .species = SPECIES_DEOXYS_ATTACK, //代欧奇希斯-攻击形态
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_ICE_BEAM, MOVE_EXTREME_SPEED}, //精神突进，蛮力，冰冻光束，神速
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEOXYS_ATTACK_2] = {
        .species = SPECIES_DEOXYS_ATTACK, //代欧奇希斯-攻击形态
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SUPERPOWER, MOVE_EXTREME_SPEED, MOVE_DETECT}, //广域战力，蛮力，神速，看穿
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEOXYS_ATTACK_3] = {
        .species = SPECIES_DEOXYS_ATTACK, //代欧奇希斯-攻击形态
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SUPERPOWER, MOVE_SHADOW_BALL, MOVE_DETECT}, //广域战力，蛮力，暗影球，看穿
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEOXYS_DEFENSE_1] = {
        .species = SPECIES_DEOXYS_DEFENSE, //代欧奇希斯-防御形态
        .moves = {MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, //精神冲击，真气弹，暗影球，冥想
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEOXYS_DEFENSE_2] = {
        .species = SPECIES_DEOXYS_DEFENSE, //代欧奇希斯-防御形态
        .moves = {MOVE_TOXIC, MOVE_TAUNT, MOVE_SPIKES, MOVE_RECOVER}, //剧毒，挑衅，撒菱，自我再生
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DEOXYS_SPEED_1] = {
        .species = SPECIES_DEOXYS_SPEED, //代欧奇希斯-速度形态
        .moves = {MOVE_TAUNT, MOVE_MAGIC_COAT, MOVE_SPIKES, MOVE_STEALTH_ROCK}, //挑衅，魔法反射，撒菱，隐形岩
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GIRATINA_ALTERED_1] = {
        .species = SPECIES_GIRATINA_ALTERED, //骑拉帝纳
        .moves = {MOVE_DRAGON_PULSE, MOVE_SHADOW_BALL, MOVE_AURA_SPHERE, MOVE_CALM_MIND}, //龙之波动，暗影球，波导弹，冥想
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GIRATINA_ALTERED_2] = {
        .species = SPECIES_GIRATINA_ALTERED, //骑拉帝纳
        .moves = {MOVE_DRAGON_TAIL, MOVE_SLEEP_TALK, MOVE_TOXIC, MOVE_REST}, //龙尾，梦话，剧毒，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GIRATINA_ALTERED_3] = {
        .species = SPECIES_GIRATINA_ALTERED, //骑拉帝纳
        .moves = {MOVE_DRAGON_CLAW, MOVE_STONE_EDGE, MOVE_DESTINY_BOND, MOVE_TAILWIND}, //龙爪，尖石攻击，同命，顺风
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GIRATINA_ORIGIN_1] = {
        .species = SPECIES_GIRATINA_ORIGIN, //骑拉帝纳-起源形态
        .moves = {MOVE_POLTERGEIST, MOVE_DRAGON_CLAW, MOVE_WILL_O_WISP, MOVE_DEFOG}, //灵骚，龙爪，磷火，清除浓雾
        .heldItem = ITEM_GRISEOUS_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GIRATINA_ORIGIN_2] = {
        .species = SPECIES_GIRATINA_ORIGIN, //骑拉帝纳-起源形态
        .moves = {MOVE_SHADOW_FORCE, MOVE_DRACO_METEOR, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK}, //暗影潜袭，流星群，地震，影子偷袭
        .heldItem = ITEM_GRISEOUS_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 252, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GIRATINA_ORIGIN_3] = {
        .species = SPECIES_GIRATINA_ORIGIN, //骑拉帝纳-起源形态
        .moves = {MOVE_POLTERGEIST, MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK}, //灵骚，龙尾，地震，影子偷袭
        .heldItem = ITEM_GRISEOUS_ORB,
        .ev = TRAINER_PARTY_EVS(0, 200, 0, 108, 200, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MANAPHY_1] = {
        .species = SPECIES_MANAPHY, //玛纳霏
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST}, //冲浪，冰冻光束，暗影球，月亮之力
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANAPHY_2] = {
        .species = SPECIES_MANAPHY, //玛纳霏
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_TAIL_GLOW}, //热水，冰冻光束，月亮之力，萤火
        .heldItem = ITEM_MAGO_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANAPHY_3] = {
        .species = SPECIES_MANAPHY, //玛纳霏
        .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_FLIP_TURN, MOVE_U_TURN}, //水流裂破，拍落，快速折返，急速折返
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MANAPHY_4] = {
        .species = SPECIES_MANAPHY, //玛纳霏
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_REST, MOVE_RAIN_DANCE}, //热水，剧毒，睡觉，求雨
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANAPHY_5] = {
        .species = SPECIES_MANAPHY, //玛纳霏
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TAKE_HEART, MOVE_SUBSTITUTE}, //冲浪，冰冻光束，勇气填充，替身
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANAPHY_6] = {
        .species = SPECIES_MANAPHY, //玛纳霏
        .moves = {MOVE_SURF, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM, MOVE_PROTECT}, //冲浪，魔法闪耀，冰冻光束，守住
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANAPHY_7] = {
        .species = SPECIES_MANAPHY, //玛纳霏
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_TAIL_GLOW, MOVE_REST}, //冲浪，精神强念，萤火，睡觉
        .heldItem = ITEM_WATERIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_1] = {
        .species = SPECIES_SHAYMIN_SKY, //谢米-天空形态
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HEALING_WISH}, //种子闪光，空气之刃，大地之力，治愈之愿
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_2] = {
        .species = SPECIES_SHAYMIN_SKY, //谢米-天空形态
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER}, //种子闪光，空气之刃，大地之力，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHAYMIN_SKY_3] = {
        .species = SPECIES_SHAYMIN_SKY, //谢米-天空形态
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER}, //种子闪光，空气之刃，大地之力，觉醒力量
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_4] = {
        .species = SPECIES_SHAYMIN_SKY, //谢米-天空形态
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_LEECH_SEED, MOVE_SUBSTITUTE}, //种子闪光，空气之刃，寄生种子，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHAYMIN_SKY_5] = {
        .species = SPECIES_SHAYMIN_SKY, //谢米-天空形态
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_PROTECT}, //种子闪光，空气之刃，顺风，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VICTINI_1] = {
        .species = SPECIES_VICTINI, //比克提尼
        .moves = {MOVE_SEARING_SHOT, MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST, MOVE_CELEBRATE}, //火焰弹，广域战力，真气弹，庆祝
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VICTINI_2] = {
        .species = SPECIES_VICTINI, //比克提尼
        .moves = {MOVE_V_CREATE, MOVE_ZEN_HEADBUTT, MOVE_BOLT_STRIKE, MOVE_U_TURN}, //Ｖ热焰，意念头锤，雷击，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VICTINI_3] = {
        .species = SPECIES_VICTINI, //比克提尼
        .moves = {MOVE_BLUE_FLARE, MOVE_EXPANDING_FORCE, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM}, //青焰，广域战力，十万伏特，魔法闪耀
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VICTINI_4] = {
        .species = SPECIES_VICTINI, //比克提尼
        .moves = {MOVE_SEARING_SHOT, MOVE_U_TURN, MOVE_LIGHT_SCREEN, MOVE_TAUNT}, //火焰弹，急速折返，光墙，挑衅
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VICTINI_5] = {
        .species = SPECIES_VICTINI, //比克提尼
        .moves = {MOVE_V_CREATE, MOVE_PSYCHIC, MOVE_BOLT_STRIKE, MOVE_PROTECT}, //Ｖ热焰，精神强念，雷击，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MELOETTA_ARIA_1] = {
        .species = SPECIES_MELOETTA_ARIA, //美洛耶塔
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CELEBRATE}, //巨声，精神强念，真气弹，庆祝
        .heldItem = ITEM_NORMALIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MELOETTA_ARIA_2] = {
        .species = SPECIES_MELOETTA_ARIA, //美洛耶塔
        .moves = {MOVE_HYPER_VOICE, MOVE_LUSTER_PURGE, MOVE_U_TURN, MOVE_THUNDER_WAVE}, //巨声，洁净光芒，急速折返，电磁波
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MELOETTA_ARIA_3] = {
        .species = SPECIES_MELOETTA_ARIA, //美洛耶塔
        .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_RELIC_SONG}, //报恩，近身战，拍落，古老之歌
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MELOETTA_ARIA_4] = {
        .species = SPECIES_MELOETTA_ARIA, //美洛耶塔
        .moves = {MOVE_HYPER_VOICE, MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT}, //巨声，洁净光芒，暗影球，十万伏特
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MELOETTA_ARIA_5] = {
        .species = SPECIES_MELOETTA_ARIA, //美洛耶塔
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM}, //巨声，精神强念，暗影球，魔法闪耀
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENESECT_1] = {
        .species = SPECIES_GENESECT, //盖诺赛克特
        .moves = {MOVE_U_TURN, MOVE_IRON_HEAD, MOVE_EXTREME_SPEED, MOVE_EXPLOSION}, //急速折返，铁头，神速，大爆炸
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENESECT_2] = {
        .species = SPECIES_GENESECT, //盖诺赛克特-火焰
        .moves = {MOVE_U_TURN, MOVE_FLASH_CANNON, MOVE_TECHNO_BLAST, MOVE_THUNDER}, //急速折返，加农光炮，高科技光炮，打雷
        .heldItem = ITEM_BURN_DRIVE,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENESECT_3] = {
        .species = SPECIES_GENESECT, //盖诺赛克特-冰冻
        .moves = {MOVE_FLASH_CANNON, MOVE_TECHNO_BLAST, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}, //加农光炮，高科技光炮，十万伏特，喷射火焰
        .heldItem = ITEM_CHILL_DRIVE,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENESECT_4] = {
        .species = SPECIES_GENESECT, //盖诺赛克特-闪电
        .moves = {MOVE_U_TURN, MOVE_FLASH_CANNON, MOVE_TECHNO_BLAST, MOVE_ELECTROWEB}, //急速折返，加农光炮，高科技光炮，电网
        .heldItem = ITEM_SHOCK_DRIVE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENESECT_5] = {
        .species = SPECIES_GENESECT, //盖诺赛克特-水流
        .moves = {MOVE_U_TURN, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_TECHNO_BLAST}, //急速折返，加农光炮，冰冻光束，高科技光炮
        .heldItem = ITEM_DOUSE_DRIVE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YVELTAL_1] = {
        .species = SPECIES_YVELTAL, //伊裴尔塔尔
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_HEAT_WAVE, MOVE_U_TURN}, //恶之波动，归天之翼，热风，急速折返
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YVELTAL_2] = {
        .species = SPECIES_YVELTAL, //伊裴尔塔尔
        .moves = {MOVE_KNOCK_OFF, MOVE_RETURN, MOVE_DRAGON_RUSH, MOVE_ROCK_SLIDE}, //拍落，报恩，龙之俯冲，岩崩
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_YVELTAL_3] = {
        .species = SPECIES_YVELTAL, //伊裴尔塔尔
        .moves = {MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_SUCKER_PUNCH}, //巨声，恶之波动，热风，突袭
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YVELTAL_4] = {
        .species = SPECIES_YVELTAL, //伊裴尔塔尔
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_TAUNT, MOVE_ROOST}, //欺诈，剧毒，挑衅，羽栖
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 184, 0, 72),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YVELTAL_5] = {
        .species = SPECIES_YVELTAL, //伊裴尔塔尔
        .moves = {MOVE_SUCKER_PUNCH, MOVE_OBLIVION_WING, MOVE_SNARL, MOVE_HEAT_WAVE}, //突袭，归天之翼，大声咆哮，热风
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DIANCIE_1] = {
        .species = SPECIES_DIANCIE, //蒂安希
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK}, //钻石风暴，月亮之力，扑击，隐形岩
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DIANCIE_2] = {
        .species = SPECIES_DIANCIE, //蒂安希
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE}, //钻石风暴，月亮之力，大地之力，魔法火焰
        .heldItem = ITEM_DIANCITE,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DIANCIE_3] = {
        .species = SPECIES_DIANCIE, //蒂安希
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_ROCK_POLISH}, //钻石风暴，月亮之力，大地之力，岩石打磨
        .heldItem = ITEM_DIANCITE,
        .ev = TRAINER_PARTY_EVS(212, 0, 0, 44, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DIANCIE_4] = {
        .species = SPECIES_DIANCIE, //蒂安希
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_STEALTH_ROCK, MOVE_HEAL_BELL}, //钻石风暴，月亮之力，隐形岩，治愈铃声
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DIANCIE_5] = {
        .species = SPECIES_DIANCIE, //蒂安希
        .moves = {MOVE_DIAMOND_STORM, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_PROTECT}, //钻石风暴，魔法闪耀，戏法空间，守住
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 160, 0, 0, 96, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_VOLCANION_1] = {
        .species = SPECIES_VOLCANION, //波尔凯尼恩
        .moves = {MOVE_FLARE_BLITZ, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_EXPLOSION}, //闪焰冲锋，水流裂破，地震，大爆炸
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VOLCANION_2] = {
        .species = SPECIES_VOLCANION, //波尔凯尼恩
        .moves = {MOVE_FIRE_BLAST, MOVE_STEAM_ERUPTION, MOVE_STRANGE_STEAM, MOVE_EARTH_POWER}, //大字爆炎，蒸汽爆炸，神奇蒸汽，大地之力
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCANION_3] = {
        .species = SPECIES_VOLCANION, //波尔凯尼恩
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_DEFOG}, //蒸汽爆炸，喷射火焰，热沙大地，清除浓雾
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCANION_4] = {
        .species = SPECIES_VOLCANION, //波尔凯尼恩
        .moves = {MOVE_FLAMETHROWER, MOVE_STEAM_ERUPTION, MOVE_TOXIC, MOVE_SUBSTITUTE}, //喷射火焰，蒸汽爆炸，剧毒，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VOLCANION_5] = {
        .species = SPECIES_VOLCANION, //波尔凯尼恩
        .moves = {MOVE_HEAT_WAVE, MOVE_STEAM_ERUPTION, MOVE_STRANGE_STEAM, MOVE_PROTECT}, //热风，蒸汽爆炸，神奇蒸汽，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_1] = {
        .species = SPECIES_NECROZMA, //奈克洛兹玛
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_MOONLIGHT}, //拍落，剧毒，隐形岩，月光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NECROZMA_2] = {
        .species = SPECIES_NECROZMA, //奈克洛兹玛
        .moves = {MOVE_PHOTON_GEYSER, MOVE_EARTHQUAKE, MOVE_X_SCISSOR, MOVE_DRAGON_DANCE}, //光子喷涌，地震，十字剪，龙之舞
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_3] = {
        .species = SPECIES_NECROZMA, //奈克洛兹玛
        .moves = {MOVE_PHOTON_GEYSER, MOVE_EXPANDING_FORCE, MOVE_POWER_GEM, MOVE_CALM_MIND}, //光子喷涌，广域战力，力量宝石，冥想
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_4] = {
        .species = SPECIES_NECROZMA, //奈克洛兹玛
        .moves = {MOVE_PHOTON_GEYSER, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, MOVE_PROTECT}, //光子喷涌，热风，广域战力，守住
        .heldItem = ITEM_WIKI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_5] = {
        .species = SPECIES_NECROZMA, //奈克洛兹玛
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_PROTECT}, //广域战力，热风，恶之波动，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGEARNA_1] = {
        .species = SPECIES_MAGEARNA, //玛机雅娜
        .moves = {MOVE_IRON_HEAD, MOVE_BRICK_BREAK, MOVE_SPIRIT_BREAK, MOVE_SHIFT_GEAR}, //铁头，劈瓦，灵魂冲击，换档
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGEARNA_2] = {
        .species = SPECIES_MAGEARNA, //玛机雅娜
        .moves = {MOVE_STEEL_BEAM, MOVE_DAZZLING_GLEAM, MOVE_HIDDEN_POWER, MOVE_SHIFT_GEAR}, //铁蹄光线，魔法闪耀，觉醒力量，换档
        .heldItem = ITEM_STEELIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGEARNA_3] = {
        .species = SPECIES_MAGEARNA, //玛机雅娜
        .moves = {MOVE_FLEUR_CANNON, MOVE_AURA_SPHERE, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON}, //花朵加农炮，波导弹，十万伏特，加农光炮
        .heldItem = ITEM_FAIRIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MAGEARNA_4] = {
        .species = SPECIES_MAGEARNA_ORIGINAL, //玛机雅娜
        .moves = {MOVE_FLEUR_CANNON, MOVE_VOLT_SWITCH, MOVE_HEART_SWAP, MOVE_PAIN_SPLIT}, //花朵加农炮，伏特替换，心灵互换，分担痛楚
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_MAGEARNA_5] = {
        .species = SPECIES_MAGEARNA_ORIGINAL, //玛机雅娜
        .moves = {MOVE_SPIRIT_BREAK, MOVE_ELECTROWEB, MOVE_HELPING_HAND, MOVE_CRAFTY_SHIELD}, //灵魂冲击，电网，帮助，戏法防守
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MAGEARNA_6] = {
        .species = SPECIES_MAGEARNA_ORIGINAL, //玛机雅娜
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER}, //魔法闪耀，加农光炮，冰冻光束，觉醒力量
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ZARUDE_1] = {
        .species = SPECIES_ZARUDE, //萨戮德
        .moves = {MOVE_POWER_WHIP, MOVE_THROAT_CHOP, MOVE_CLOSE_COMBAT, MOVE_U_TURN}, //强力鞭打，深渊突刺，近身战，急速折返
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZARUDE_2] = {
        .species = SPECIES_ZARUDE, //萨戮德
        .moves = {MOVE_POWER_WHIP, MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_U_TURN}, //强力鞭打，ＤＤ金勾臂，近身战，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZARUDE_3] = {
        .species = SPECIES_ZARUDE, //萨戮德
        .moves = {MOVE_DARKEST_LARIAT, MOVE_POWER_WHIP, MOVE_JUNGLE_HEALING, MOVE_BULK_UP}, //ＤＤ金勾臂，强力鞭打，丛林治疗，健美
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 136, 0, 120),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZARUDE_4] = {
        .species = SPECIES_ZARUDE, //萨戮德
        .moves = {MOVE_POWER_WHIP, MOVE_SNARL, MOVE_TAUNT, MOVE_JUNGLE_HEALING}, //强力鞭打，大声咆哮，挑衅，丛林治疗
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 116, 0, 128, 0, 12),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SPECTRIER_1] = {
        .species = SPECIES_SPECTRIER, //灵幽马
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_BEAM, MOVE_DARK_PULSE, MOVE_HIDDEN_POWER}, //暗影球，破坏光线，恶之波动，觉醒力量
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SPECTRIER_2] = {
        .species = SPECIES_SPECTRIER, //灵幽马
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_SUBSTITUTE}, //祸不单行，磷火，冥想，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(56, 0, 200, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SPECTRIER_3] = {
        .species = SPECIES_SPECTRIER, //灵幽马
        .moves = {MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE}, //暗影球，觉醒力量，诡计，替身
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SPECTRIER_4] = {
        .species = SPECIES_SPECTRIER, //灵幽马
        .moves = {MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_WILL_O_WISP, MOVE_TAUNT}, //暗影球，觉醒力量，磷火，挑衅
        .heldItem = ITEM_GHOSTIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLASTRIER_1] = {
        .species = SPECIES_GLASTRIER, //雪暴马
        .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_SMART_STRIKE}, //冰柱坠击，十万马力，近身战，修长之角
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLASTRIER_2] = {
        .species = SPECIES_GLASTRIER, //雪暴马
        .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_SMART_STRIKE, MOVE_CLOSE_COMBAT}, //冰柱坠击，十万马力，修长之角，近身战
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GLASTRIER_3] = {
        .species = SPECIES_GLASTRIER, //雪暴马
        .moves = {MOVE_ICICLE_CRASH, MOVE_BODY_PRESS, MOVE_SLEEP_TALK, MOVE_REST}, //冰柱坠击，扑击，梦话，睡觉
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLASTRIER_4] = {
        .species = SPECIES_GLASTRIER, //雪暴马
        .moves = {MOVE_ICICLE_CRASH, MOVE_CLOSE_COMBAT, MOVE_HIGH_HORSEPOWER, MOVE_PROTECT}, //冰柱坠击，近身战，十万马力，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ARCEUS_NORMAL_1] = {
        .species = SPECIES_ARCEUS_WATER,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_ICE_BEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_SPLASH_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_2] = {
        .species = SPECIES_ARCEUS_ELECTRIC,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .heldItem = ITEM_ZAP_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_3] = {
        .species = SPECIES_ARCEUS_GRASS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_FLAMETHROWER, MOVE_SURF},
        .heldItem = ITEM_MEADOW_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_4] = {
        .species = SPECIES_ARCEUS_ICE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER},
        .heldItem = ITEM_ICICLE_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_5] = {
        .species = SPECIES_ARCEUS_FIGHTING,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_FIST_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_6] = {
        .species = SPECIES_ARCEUS_POISON,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_SHADOW_BALL, MOVE_SURF},
        .heldItem = ITEM_TOXIC_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_7] = {
        .species = SPECIES_ARCEUS_GROUND,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EARTH_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_8] = {
        .species = SPECIES_ARCEUS_FLYING,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_EARTH_POWER, MOVE_STEEL_BEAM},
        .heldItem = ITEM_SKY_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_9] = {
        .species = SPECIES_ARCEUS_PSYCHIC,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_SHADOW_BALL, MOVE_BUG_BUZZ},
        .heldItem = ITEM_MIND_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_10] = {
        .species = SPECIES_ARCEUS_BUG,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_SURF, MOVE_THUNDERBOLT},
        .heldItem = ITEM_INSECT_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_11] = {
        .species = SPECIES_ARCEUS_ROCK,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_FIRE_BLAST, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_STONE_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_12] = {
        .species = SPECIES_ARCEUS_GHOST,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_DARK_PULSE, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_SPOOKY_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_13] = {
        .species = SPECIES_ARCEUS_DRAGON,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_FIRE_BLAST, MOVE_ACID_SPRAY}, 
        .heldItem = ITEM_DRACO_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_14] = {
        .species = SPECIES_ARCEUS_DARK,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_ACID_SPRAY, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_DREAD_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_15] = {
        .species = SPECIES_ARCEUS_STEEL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_SURF, MOVE_DAZZLING_GLEAM}, 
        .heldItem = ITEM_IRON_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_16] = {
        .species = SPECIES_ARCEUS_FAIRY,
        .moves = {MOVE_EXTREME_SPEED, MOVE_JUDGMENT, MOVE_FLASH_CANNON, MOVE_EARTH_POWER},
        .heldItem = ITEM_PIXIE_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_17] = {
        .species = SPECIES_ARCEUS_NORMAL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCEUS_NORMAL_18] = {
        .species = SPECIES_ARCEUS_NORMAL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FLARE_BLITZ, MOVE_LIQUIDATION, MOVE_WILD_CHARGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ARCEUS_NORMAL_19] = {
        .species = SPECIES_ARCEUS_NORMAL,
        .moves = {MOVE_THUNDER, MOVE_JUDGMENT, MOVE_FLASH_CANNON, MOVE_SURF},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCEUS_NORMAL_20] = {
        .species = SPECIES_ARCEUS_NORMAL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUPERCELL_SLAM},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGIDRAGO_1] = {
        .species = SPECIES_REGIDRAGO, //雷吉铎拉戈
        .moves = {MOVE_SCALE_SHOT, MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_EXPLOSION}, //鳞射，雷电牙，火焰牙，大爆炸
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGIDRAGO_2] = {
        .species = SPECIES_REGIDRAGO, //雷吉铎拉戈
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_HYPER_BEAM}, //巨龙威能，流星群，龙之波动，破坏光线
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIDRAGO_3] = {
        .species = SPECIES_REGIDRAGO, //雷吉铎拉戈
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_HYPER_BEAM}, //巨龙威能，流星群，龙之波动，破坏光线
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIDRAGO_4] = {
        .species = SPECIES_REGIDRAGO, //雷吉铎拉戈
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_FANG, MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE}, //逆鳞，雷电牙，龙之舞，替身
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_REGIDRAGO_5] = {
        .species = SPECIES_REGIDRAGO, //雷吉铎拉戈
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_PULSE, MOVE_HYPER_BEAM, MOVE_EXPLOSION}, //巨龙威能，龙之波动，破坏光线，大爆炸
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_REGIDRAGO_6] = {
        .species = SPECIES_REGIDRAGO, //雷吉铎拉戈
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_PULSE, MOVE_ANCIENT_POWER, MOVE_PROTECT}, //巨龙威能，龙之波动，原始之力，守住
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_REGIELEKI_1] = {
        .species = SPECIES_REGIELEKI, //雷吉艾勒奇
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_SIGNAL_BEAM, MOVE_RISING_VOLTAGE}, //十万伏特，伏特替换，信号光束，电力上升
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIELEKI_2] = {
        .species = SPECIES_REGIELEKI, //雷吉艾勒奇
        .moves = {MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH, MOVE_ELECTRO_BALL, MOVE_RISING_VOLTAGE}, //电力上升，伏特替换，电球，电力上升
        .heldItem = ITEM_ELECTRIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HOOPA_UNBOUND_1] = {
        .species = SPECIES_HOOPA_UNBOUND, //胡帕-解放形态
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HYPERSPACE_FURY, MOVE_GUNK_SHOT, MOVE_FIRE_PUNCH}, //意念头锤，异次元猛攻，垃圾射击，火焰拳
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOOPA_UNBOUND_2] = {
        .species = SPECIES_HOOPA_UNBOUND, //胡帕-解放形态
        .moves = {MOVE_HYPERSPACE_HOLE, MOVE_DRAIN_PUNCH, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM}, //异次元洞，吸取拳，广域战力，戏法空间
        .heldItem = ITEM_ROOM_SERVICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_HOOPA_UNBOUND_3] = {
        .species = SPECIES_HOOPA_UNBOUND, //胡帕-解放形态
        .moves = {MOVE_HYPERSPACE_HOLE, MOVE_HYPERSPACE_FURY, MOVE_GUNK_SHOT, MOVE_PROTECT}, //异次元洞，异次元猛攻，垃圾射击，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOOPA_UNBOUND_4] = {
        .species = SPECIES_HOOPA_UNBOUND, //胡帕-解放形态
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}, //广域战力，恶之波动，真气弹，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KORAIDON_1] = {
        .species = SPECIES_KORAIDON,//故勒顿
        .moves = {MOVE_FLARE_BLITZ, MOVE_COLLISION_COURSE, MOVE_U_TURN, MOVE_OUTRAGE}, // 闪焰冲锋, 全开猛撞, 急速折返, 逆鳞,
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KORAIDON_2] = {
        .species = SPECIES_KORAIDON,//故勒顿
        .moves = {MOVE_FLARE_BLITZ, MOVE_SWORDS_DANCE, MOVE_LOW_KICK, MOVE_SCALE_SHOT}, // 闪焰冲锋, 剑舞, 踢倒, 鳞射,
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MIRAIDON_1] = {
        .species = SPECIES_MIRAIDON,//密勒顿
        .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_VOLT_SWITCH, MOVE_OVERHEAT}, // 闪电猛冲, 流星群, 伏特替换, 过热,
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MIRAIDON_2] = {
        .species = SPECIES_MIRAIDON,//密勒顿
        .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRAGON_PULSE, MOVE_U_TURN, MOVE_DAZZLING_GLEAM}, // 闪电猛冲, 龙之波动, 急速折返, 魔法闪耀,
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLUTTER_MANE_1] = {
        .species = SPECIES_FLUTTER_MANE, //振翼发
        .moves = {MOVE_SHADOW_BALL, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_MOONBLAST}, //暗影球，守住，十万伏特，月亮之力
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLUTTER_MANE_2] = {
        .species = SPECIES_FLUTTER_MANE, //振翼发
        .moves = {MOVE_SHADOW_BALL, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE}, //暗影球，守住，魔法闪耀，魔法火焰
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_VALIANT_1] = {
        .species = SPECIES_IRON_VALIANT, //铁武者
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_SPIRIT_BREAK, MOVE_KNOCK_OFF}, //近身战，剑舞，灵魂冲击，拍落
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_IRON_VALIANT_2] = {
        .species = SPECIES_IRON_VALIANT, //铁武者
        .moves = {MOVE_DRAIN_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPIRIT_BREAK, MOVE_FIRE_PUNCH}, //吸取拳，剑舞，灵魂冲击，火焰拳
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_IRON_VALIANT_3] = {
        .species = SPECIES_IRON_VALIANT, //铁武者
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_AURA_SPHERE, MOVE_MOONBLAST}, //十万伏特，广域战力，波导弹，月亮之力
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_VALIANT_4] = {
        .species = SPECIES_IRON_VALIANT, //铁武者
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_AURA_SPHERE, MOVE_MOONBLAST}, //暗影球，广域战力，波导弹，月亮之力
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_BUNDLE_1] = {
        .species = SPECIES_IRON_BUNDLE, //铁包袱
        .moves = {MOVE_HYDRO_PUMP, MOVE_PROTECT, MOVE_FREEZE_DRY, MOVE_ICE_BEAM}, //水炮，守住，冷冻干燥，冰冻光束
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IRON_BUNDLE_2] = {
        .species = SPECIES_IRON_BUNDLE, //铁包袱
        .moves = {MOVE_HYDRO_PUMP, MOVE_FLIP_TURN, MOVE_FREEZE_DRY, MOVE_ICY_WIND}, //水炮，快速折返，冷冻干燥，冰冻之风
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHIEN_PAO_1] = {
        .species = SPECIES_CHIEN_PAO, //古剑豹
        .moves = {MOVE_ICE_SPINNER, MOVE_SUCKER_PUNCH, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE}, //冰旋，突袭，圣剑，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHIEN_PAO_2] = {
        .species = SPECIES_CHIEN_PAO, //古剑豹
        .moves = {MOVE_ICICLE_CRASH, MOVE_CRUNCH, MOVE_ICE_SHARD, MOVE_PSYCHIC_FANGS}, //冰柱坠击，咬碎，冰砾，精神之牙
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHI_YU_1] = {
        .species = SPECIES_CHI_YU, //古玉鱼
        .moves = {MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_PSYCHIC, MOVE_OVERHEAT}, //恶之波动，热风，精神强念，过热
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHI_YU_2] = {
        .species = SPECIES_CHI_YU, //古玉鱼
        .moves = {MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_FIRE_BLAST, MOVE_PROTECT}, //恶之波动，热风，大字爆炎，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WALKING_WAKE_1] = {
        .species = SPECIES_WALKING_WAKE, //波荡水
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_FLAMETHROWER, MOVE_AQUA_JET}, //流星群，水炮，喷射火焰，水流喷射
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WALKING_WAKE_2] = {
        .species = SPECIES_WALKING_WAKE, //波荡水
        .moves = {MOVE_HYDRO_STEAM, MOVE_HYDRO_PUMP, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE}, //水蒸气，水炮，喷射火焰，龙之波动
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 244, 12),
        .nature = NATURE_TIMID
    },
        [FRONTIER_MON_URSHIFU_RAPID_STRIKE_1] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE_GMAX, //武道熊师-连击流
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_AQUA_JET}, //水流连打，近身战，雷电拳，水流喷射
        .heldItem = ITEM_SPLASH_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_2] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE_GMAX, //武道熊师-连击流
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, MOVE_AQUA_JET, MOVE_POISON_JAB}, //近身战，水流连打，水流喷射，毒击
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_3] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE, //武道熊师-连击流
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, MOVE_U_TURN, MOVE_POISON_JAB}, //近身战，水流连打，急速折返，毒击
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_4] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE, //武道熊师-连击流
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_U_TURN}, //水流连打，近身战，冰旋，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_1] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE_GMAX, //武道熊师-一击流
        .moves = {MOVE_WICKED_BLOW, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_POISON_JAB}, //暗冥强击，踢倒，突袭，毒击
        .heldItem = ITEM_DREAD_PLATE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_2] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE_GMAX, //武道熊师-一击流
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, //近身战，暗冥强击，突袭，剑舞
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_3] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE, //武道熊师-一击流
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_DETECT}, //近身战，暗冥强击，突袭，看穿
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_4] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE, //武道熊师-一击流
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_U_TURN}, //近身战，暗冥强击，突袭，急速折返
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEWTWO_1] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_PSYSTRIKE, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT}, //精神击破，大字爆炎，十万伏特，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_2] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_PSYCHIC_TERRAIN}, //广域战力，波导弹，暗影球，精神场地
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_3] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_POWER_UP_PUNCH, MOVE_STONE_EDGE, MOVE_FIRE_PUNCH}, //意念头锤，增强拳，尖石攻击，火焰拳
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEWTWO_4] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_FOUL_PLAY, MOVE_BULK_UP}, //吸取拳，意念头锤，欺诈，健美
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEWTWO_5] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH, MOVE_STONE_EDGE, MOVE_PSYCHO_CUT}, //地震，增强拳，尖石攻击，精神利刃
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEWTWO_6] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_DRAIN_PUNCH, MOVE_PSYCHO_CUT, MOVE_POISON_JAB, MOVE_BULK_UP}, //吸取拳，精神利刃，毒击，健美
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEWTWO_7] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_PSYSTRIKE, MOVE_THUNDERBOLT, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT}, //精神击破，十万伏特，波导弹，诡计
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_8] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_PSYSTRIKE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, //精神击破，冰冻光束，暗影球，冥想
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEWTWO_9] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_EXPANDING_FORCE, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_PROTECT}, //广域战力，冰冻光束，暗影球，守住
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEWTWO_10] = {
        .species = SPECIES_MEWTWO, //超梦
        .moves = {MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_PROTECT}, //广域战力，波导弹，暗影球，守住
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAYQUAZA_1] = {
        .species = SPECIES_RAYQUAZA_MEGA, //烈空坐
        .moves = {MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}, //画龙点睛，地震，铁头，龙之舞
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAYQUAZA_2] = {
        .species = SPECIES_RAYQUAZA_MEGA, //烈空坐
        .moves = {MOVE_SCALE_SHOT, MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED}, //鳞射，画龙点睛，地震，神速
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAYQUAZA_3] = {
        .species = SPECIES_RAYQUAZA_MEGA, //烈空坐
        .moves = {MOVE_DRACO_METEOR, MOVE_DRAGON_ASCENT, MOVE_HYDRO_PUMP, MOVE_EXTREME_SPEED}, //流星群，画龙点睛，水炮，神速
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAYQUAZA_4] = {
        .species = SPECIES_RAYQUAZA_MEGA, //烈空坐
        .moves = {MOVE_DRAGON_ASCENT, MOVE_V_CREATE, MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE}, //画龙点睛，Ｖ热焰，神速，剑舞
        .heldItem = ITEM_FIGY_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAYQUAZA_5] = {
        .species = SPECIES_RAYQUAZA_MEGA, //烈空坐
        .moves = {MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_TAILWIND, MOVE_SCALE_SHOT}, //画龙点睛，神速，顺风，鳞射
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAYQUAZA_6] = {
        .species = SPECIES_RAYQUAZA_MEGA, //烈空坐
        .moves = {MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_THUNDER}, //龙之波动，暴风，水炮，打雷
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYOGRE_1] = {
        .species = SPECIES_KYOGRE, //盖欧卡
        .moves = {MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_THUNDER}, //喷水，热水，冰冻光束，打雷
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(84, 0, 0, 172, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KYOGRE_2] = {
        .species = SPECIES_KYOGRE, //盖欧卡
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_THUNDER, MOVE_ICE_BEAM}, //水流裂破，地震，打雷，冰冻光束
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(32, 252, 64, 160, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYOGRE_3] = {
        .species = SPECIES_KYOGRE, //盖欧卡
        .moves = {MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_CALM_MIND}, //根源波动，打雷，冰冻光束，冥想
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYOGRE_4] = {
        .species = SPECIES_KYOGRE, //盖欧卡
        .moves = {MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_THUNDER}, //喷水，热水，冰冻光束，打雷
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYOGRE_5] = {
        .species = SPECIES_KYOGRE, //盖欧卡
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_SLEEP_TALK, MOVE_REST}, //热水，剧毒，梦话，睡觉
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(248, 0, 236, 0, 0, 24),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KYOGRE_6] = {
        .species = SPECIES_KYOGRE, //盖欧卡
        .moves = {MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_PROTECT}, //根源波动，冰冻光束，打雷，守住
        .heldItem = ITEM_BLUE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GROUDON_1] = {
        .species = SPECIES_GROUDON, //固拉多
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_STONE_EDGE, MOVE_HAMMER_ARM}, //断崖之剑，高温重压，尖石攻击，臂锤
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GROUDON_2] = {
        .species = SPECIES_GROUDON, //固拉多
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_ROCK_TOMB, MOVE_STEALTH_ROCK, MOVE_SWORDS_DANCE}, //断崖之剑，岩石封锁，隐形岩，剑舞
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(144, 156, 0, 152, 0, 56),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GROUDON_3] = {
        .species = SPECIES_GROUDON, //固拉多
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_FIRE_BLAST, MOVE_HIDDEN_POWER, MOVE_ROCK_POLISH}, //断崖之剑，大字爆炎，觉醒力量，岩石打磨
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 156, 252, 100),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GROUDON_4] = {
        .species = SPECIES_GROUDON, //固拉多
        .moves = {MOVE_ERUPTION, MOVE_PRECIPICE_BLADES, MOVE_SOLAR_BEAM, MOVE_HEAT_CRASH}, //喷火，断崖之剑，日光束，高温重压
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GROUDON_5] = {
        .species = SPECIES_GROUDON, //固拉多
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_TOXIC, MOVE_STEALTH_ROCK}, //断崖之剑，高温重压，剧毒，隐形岩
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GROUDON_6] = {
        .species = SPECIES_GROUDON, //固拉多
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_SWORDS_DANCE, MOVE_PROTECT}, //断崖之剑，高温重压，剑舞，守住
        .heldItem = ITEM_RED_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PALKIA_1] = {
        .species = SPECIES_PALKIA, //帕路奇亚
        .moves = {MOVE_ORIGIN_PULSE, MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_FIRE_BLAST}, //根源波动，亚空裂斩，打雷，大字爆炎
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PALKIA_2] = {
        .species = SPECIES_PALKIA, //帕路奇亚
        .moves = {MOVE_ORIGIN_PULSE, MOVE_SPACIAL_REND, MOVE_EARTH_POWER, MOVE_FLAMETHROWER}, //根源波动，亚空裂斩，大地之力，喷射火焰
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PALKIA_3] = {
        .species = SPECIES_PALKIA, //帕路奇亚
        .moves = {MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND, MOVE_POWER_GEM, MOVE_EARTHQUAKE}, //水炮，亚空裂斩，力量宝石，地震
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PALKIA_4] = {
        .species = SPECIES_PALKIA, //帕路奇亚
        .moves = {MOVE_SCALE_SHOT, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_BULLDOZE}, //鳞射，水流裂破，岩崩，重踏
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PALKIA_ORIGIN_1] = {
        .species = SPECIES_PALKIA_ORIGIN, //帕路奇亚-起源形态
        .moves = {MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND, MOVE_FIRE_BLAST, MOVE_EARTH_POWER}, //水炮，亚空裂斩，大字爆炎，大地之力
        .heldItem = ITEM_LUSTROUS_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PALKIA_ORIGIN_2] = {
        .species = SPECIES_PALKIA_ORIGIN, //帕路奇亚-起源形态
        .moves = {MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND, MOVE_ICE_BEAM, MOVE_AURA_SPHERE}, //水炮，亚空裂斩，冰冻光束，波导弹
        .heldItem = ITEM_LUSTROUS_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PALKIA_ORIGIN_3] = {
        .species = SPECIES_PALKIA_ORIGIN, //帕路奇亚-起源形态
        .moves = {MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_DRACO_METEOR}, //水炮，亚空裂斩，打雷，流星群
        .heldItem = ITEM_LUSTROUS_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RESHIRAM_1] = {
        .species = SPECIES_RESHIRAM, //莱希拉姆
        .moves = {MOVE_DRACO_METEOR, MOVE_BLUE_FLARE, MOVE_EARTH_POWER, MOVE_FOCUS_BLAST}, //流星群，青焰，大地之力，真气弹
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RESHIRAM_2] = {
        .species = SPECIES_RESHIRAM, //莱希拉姆
        .moves = {MOVE_OUTRAGE, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_DRAGON_DANCE}, //逆鳞，闪焰冲锋，尖石攻击，龙之舞
        .heldItem = ITEM_AGUAV_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RESHIRAM_3] = {
        .species = SPECIES_RESHIRAM, //莱希拉姆
        .moves = {MOVE_SCALE_SHOT, MOVE_BLUE_FLARE, MOVE_EARTH_POWER, MOVE_SHADOW_BALL}, //鳞射，青焰，大地之力，暗影球
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RESHIRAM_4] = {
        .species = SPECIES_RESHIRAM, //莱希拉姆
        .moves = {MOVE_BLUE_FLARE, MOVE_TOXIC, MOVE_ROOST, MOVE_TAILWIND}, //青焰，剧毒，羽栖，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RESHIRAM_5] = {
        .species = SPECIES_RESHIRAM, //莱希拉姆
        .moves = {MOVE_HEAT_WAVE, MOVE_DRACO_METEOR, MOVE_TAILWIND, MOVE_PROTECT}, //热风，流星群，顺风，守住
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZEKROM_1] = {
        .species = SPECIES_ZEKROM, //捷克罗姆
        .moves = {MOVE_SCALE_SHOT, MOVE_BOLT_STRIKE, MOVE_CRUNCH, MOVE_DRAGON_DANCE}, //鳞射，雷击，咬碎，龙之舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEKROM_2] = {
        .species = SPECIES_ZEKROM, //捷克罗姆
        .moves = {MOVE_OUTRAGE, MOVE_BOLT_STRIKE, MOVE_STONE_EDGE, MOVE_VOLT_SWITCH}, //逆鳞，雷击，尖石攻击，伏特替换
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZEKROM_3] = {
        .species = SPECIES_ZEKROM, //捷克罗姆
        .moves = {MOVE_SCALE_SHOT, MOVE_DRACO_METEOR, MOVE_BOLT_STRIKE, MOVE_CRUNCH}, //鳞射，流星群，雷击，咬碎
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEKROM_4] = {
        .species = SPECIES_ZEKROM, //捷克罗姆
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_DEFOG, MOVE_ROOST}, //龙爪，电磁波，清除浓雾，羽栖
        .heldItem = ITEM_HABAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ZEKROM_5] = {
        .species = SPECIES_ZEKROM, //捷克罗姆
        .moves = {MOVE_BREAKING_SWIPE, MOVE_BOLT_STRIKE, MOVE_ROOST, MOVE_TAILWIND}, //广域破坏，雷击，羽栖，顺风
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZEKROM_6] = {
        .species = SPECIES_ZEKROM, //捷克罗姆
        .moves = {MOVE_RISING_VOLTAGE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_ROOST}, //电力上升，流星群，大地之力，羽栖
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYUREM_1] = {
        .species = SPECIES_KYUREM, //酋雷姆
        .moves = {MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER}, //流星群，巨声，大地之力，觉醒力量
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYUREM_2] = {
        .species = SPECIES_KYUREM, //酋雷姆
        .moves = {MOVE_RETURN, MOVE_SCALE_SHOT, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}, //报恩，鳞射，铁头，龙之舞
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KYUREM_BLACK_1] = {
        .species = SPECIES_KYUREM_BLACK, //暗黑酋雷姆
        .moves = {MOVE_ICICLE_SPEAR, MOVE_OUTRAGE, MOVE_FUSION_BOLT, MOVE_IRON_HEAD}, //冰锥，逆鳞，交错闪电，铁头
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KYUREM_BLACK_2] = {
        .species = SPECIES_KYUREM_BLACK, //暗黑酋雷姆
        .moves = {MOVE_FREEZE_SHOCK, MOVE_DRAGON_CLAW, MOVE_FUSION_BOLT, MOVE_DRAGON_DANCE}, //冰冻伏特，龙爪，交错闪电，龙之舞
        .heldItem = ITEM_ICIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KYUREM_WHITE_1] = {
        .species = SPECIES_KYUREM_WHITE, //焰白酋雷姆
        .moves = {MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_EARTH_POWER}, //冰冻光束，流星群，交错火焰，大地之力
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYUREM_WHITE_2] = {
        .species = SPECIES_KYUREM_WHITE, //焰白酋雷姆
        .moves = {MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_FREEZE_DRY}, //冰冻光束，流星群，交错火焰，冷冻干燥
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KYUREM_WHITE_3] = {
        .species = SPECIES_KYUREM_WHITE, //焰白酋雷姆
        .moves = {MOVE_GLACIATE, MOVE_DRACO_METEOR, MOVE_FUSION_FLARE, MOVE_PROTECT}, //冰封世界，流星群，交错火焰，守住
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARKRAI_1] = {
        .species = SPECIES_DARKRAI, //达克莱伊
        .moves = {MOVE_DARK_PULSE, MOVE_DARK_VOID, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT}, //恶之波动，暗黑洞，污泥炸弹，诡计
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARKRAI_2] = {
        .species = SPECIES_DARKRAI, //达克莱伊
        .moves = {MOVE_DARK_PULSE, MOVE_DARK_VOID, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC}, //恶之波动，暗黑洞，污泥炸弹，精神强念
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARKRAI_3] = {
        .species = SPECIES_DARKRAI, //达克莱伊
        .moves = {MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDER, MOVE_DARK_VOID}, //恶之波动，真气弹，打雷，暗黑洞
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARKRAI_4] = {
        .species = SPECIES_DARKRAI, //达克莱伊
        .moves = {MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_NASTY_PLOT}, //恶之波动，冰冻光束，催眠术，诡计
        .heldItem = ITEM_PSYCHIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DARKRAI_5] = {
        .species = SPECIES_DARKRAI, //达克莱伊
        .moves = {MOVE_DARK_PULSE, MOVE_DARK_VOID, MOVE_TAUNT, MOVE_PROTECT}, //恶之波动，暗黑洞，挑衅，守住
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_XERNEAS_NEUTRAL_1] = {
        .species = SPECIES_XERNEAS_NEUTRAL, //哲尔尼亚斯
        .moves = {MOVE_RETURN, MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_HORN_LEECH}, //报恩，意念头锤，近身战，木角
        .heldItem = ITEM_EJECT_PACK,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_XERNEAS_NEUTRAL_2] = {
        .species = SPECIES_XERNEAS_NEUTRAL, //哲尔尼亚斯
        .moves = {MOVE_MOONBLAST, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_GEOMANCY}, //月亮之力，十万伏特，真气弹，大地掌控
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_XERNEAS_NEUTRAL_3] = {
        .species = SPECIES_XERNEAS_NEUTRAL, //哲尔尼亚斯
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CLOSE_COMBAT}, //月亮之力，精神强念，十万伏特，近身战
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_XERNEAS_NEUTRAL_4] = {
        .species = SPECIES_XERNEAS_NEUTRAL, //哲尔尼亚斯
        .moves = {MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_GEOMANCY, MOVE_PROTECT}, //巨声，十万伏特，大地掌控，守住
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZYGARDE_50_1] = {
        .species = SPECIES_ZYGARDE_50, //基格尔德
        .moves = {MOVE_OUTRAGE, MOVE_THOUSAND_ARROWS, MOVE_EXTREME_SPEED, MOVE_DRAGON_DANCE}, //逆鳞，千箭齐发，神速，龙之舞
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZYGARDE_50_2] = {
        .species = SPECIES_ZYGARDE_50, //基格尔德
        .moves = {MOVE_THOUSAND_ARROWS, MOVE_EXTREME_SPEED, MOVE_DRAGON_DANCE, MOVE_GLARE}, //千箭齐发，神速，龙之舞，大蛇瞪眼
        .heldItem = ITEM_GROUNDIUM_Z,
        .ev = TRAINER_PARTY_EVS(76, 252, 0, 180, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZYGARDE_50_3] = {
        .species = SPECIES_ZYGARDE_50, //基格尔德
        .moves = {MOVE_THOUSAND_WAVES, MOVE_BREAKING_SWIPE, MOVE_TOXIC, MOVE_COIL}, //千波激荡，广域破坏，剧毒，盘蜷
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ZYGARDE_50_4] = {
        .species = SPECIES_ZYGARDE_50, //基格尔德
        .moves = {MOVE_THOUSAND_ARROWS, MOVE_GLARE, MOVE_REST, MOVE_SLEEP_TALK}, //千箭齐发，大蛇瞪眼，睡觉，梦话
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ZYGARDE_50_5] = {
        .species = SPECIES_ZYGARDE_50, //基格尔德
        .moves = {MOVE_CORE_ENFORCER, MOVE_THOUSAND_ARROWS, MOVE_EXTREME_SPEED, MOVE_SCALE_SHOT}, //核心惩罚者，千箭齐发，神速，鳞射
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SOLGALEO_1] = {
        .species = SPECIES_SOLGALEO, //索尔迦雷欧
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_ZEN_HEADBUTT, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE}, //流星闪冲，意念头锤，疯狂伏特，地震
        .heldItem = ITEM_SOLGANIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SOLGALEO_2] = {
        .species = SPECIES_SOLGALEO, //索尔迦雷欧
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT}, //流星闪冲，闪焰冲锋，地震，近身战
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SOLGALEO_3] = {
        .species = SPECIES_SOLGALEO, //索尔迦雷欧
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_TOXIC, MOVE_COSMIC_POWER, MOVE_MORNING_SUN}, //流星闪冲，剧毒，宇宙力量，晨光
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SOLGALEO_4] = {
        .species = SPECIES_SOLGALEO, //索尔迦雷欧
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_EARTHQUAKE, MOVE_HEAT_CRASH, MOVE_WIDE_GUARD}, //流星闪冲，地震，高温重压，广域防守
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUNALA_1] = {
        .species = SPECIES_LUNALA, //露奈雅拉
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_EXPANDING_FORCE, MOVE_MOONBLAST, MOVE_HEAT_WAVE}, //暗影之光，广域战力，月亮之力，热风
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUNALA_2] = {
        .species = SPECIES_LUNALA, //露奈雅拉
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_EXPANDING_FORCE, MOVE_MOONBLAST, MOVE_CALM_MIND}, //暗影之光，广域战力，月亮之力，冥想
        .heldItem = ITEM_LUNALIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUNALA_3] = {
        .species = SPECIES_LUNALA, //露奈雅拉
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_TRICK, MOVE_DEFOG}, //暗影球，磷火，戏法，清除浓雾
        .heldItem = ITEM_MACHO_BRACE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LUNALA_4] = {
        .species = SPECIES_LUNALA, //露奈雅拉
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_ROOST, MOVE_WIDE_GUARD}, //暗影之光，精神冲击，羽栖，广域防守
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_1] = {
        .species = SPECIES_NECROZMA_DUSK_MANE, //黄昏之鬃
        .moves = {MOVE_PHOTON_GEYSER, MOVE_SUNSTEEL_STRIKE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, //光子喷涌，流星闪冲，地震，龙之舞
        .heldItem = ITEM_SOLGANIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_2] = {
        .species = SPECIES_NECROZMA_DUSK_MANE, //黄昏之鬃
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_TRICK_ROOM}, //流星闪冲，尖石攻击，地震，戏法空间
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_3] = {
        .species = SPECIES_NECROZMA_DUSK_MANE, //黄昏之鬃
        .moves = {MOVE_PHOTON_GEYSER, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE}, //光子喷涌，龙之波动，大地之力，热风
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_4] = {
        .species = SPECIES_NECROZMA_DUSK_MANE, //黄昏之鬃
        .moves = {MOVE_PHOTON_GEYSER, MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //光子喷涌，暗影爪，地震，剑舞
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_DUSK_MANE_5] = {
        .species = SPECIES_NECROZMA_DUSK_MANE, //黄昏之鬃
        .moves = {MOVE_PHOTON_GEYSER, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_PROTECT}, //光子喷涌，地震，剑舞，守住
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_1] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS, //拂晓之翼
        .moves = {MOVE_PHOTON_GEYSER, MOVE_MOONGEIST_BEAM, MOVE_HEAT_WAVE, MOVE_EARTH_POWER}, //光子喷涌，暗影之光，热风，大地之力
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_2] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS, //拂晓之翼
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}, //精神之牙，逆鳞，地震，剑舞
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_3] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS, //拂晓之翼
        .moves = {MOVE_PHOTON_GEYSER, MOVE_MOONGEIST_BEAM, MOVE_DRAGON_PULSE, MOVE_POWER_GEM}, //光子喷涌，暗影之光，龙之波动，力量宝石
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_4] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS, //拂晓之翼
        .moves = {MOVE_PHOTON_GEYSER, MOVE_DRAGON_PULSE, MOVE_HEAT_WAVE, MOVE_PROTECT}, //光子喷涌，龙之波动，热风，守住
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NECROZMA_DAWN_WINGS_5] = {
        .species = SPECIES_NECROZMA_DAWN_WINGS, //拂晓之翼
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MOONGEIST_BEAM, MOVE_HEAT_WAVE, MOVE_PROTECT}, //广域战力，暗影之光，热风，守住
        .heldItem = ITEM_ULTRANECROZIUM_Z,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MARSHADOW_1] = {
        .species = SPECIES_MARSHADOW, //玛夏多
        .moves = {MOVE_CLOSE_COMBAT, MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_ROCK_TOMB}, //近身战，灵骚，影子偷袭，岩石封锁
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MARSHADOW_2] = {
        .species = SPECIES_MARSHADOW, //玛夏多
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SPECTRAL_THIEF, MOVE_STONE_EDGE, MOVE_PURSUIT}, //近身战，暗影偷盗，尖石攻击，追打
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MARSHADOW_3] = {
        .species = SPECIES_MARSHADOW, //玛夏多
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SPECTRAL_THIEF, MOVE_SHADOW_SNEAK, MOVE_HIDDEN_POWER}, //近身战，暗影偷盗，影子偷袭，觉醒力量
        .heldItem = ITEM_MARSHADIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MARSHADOW_4] = {
        .species = SPECIES_MARSHADOW, //玛夏多
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SPECTRAL_THIEF, MOVE_SUBSTITUTE, MOVE_BULK_UP}, //近身战，暗影偷盗，替身，健美
        .heldItem = ITEM_MARSHADIUM_Z,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MARSHADOW_5] = {
        .species = SPECIES_MARSHADOW, //玛夏多
        .moves = {MOVE_DRAIN_PUNCH, MOVE_THIEF, MOVE_COACHING, MOVE_PROTECT}, //吸取拳，小偷，指导，守住
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ZERAORA_1] = {
        .species = SPECIES_ZERAORA, //捷拉奥拉
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_FIRE_PUNCH, MOVE_PLAY_ROUGH}, //等离子闪电拳，近身战，火焰拳，嬉闹
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZERAORA_2] = {
        .species = SPECIES_ZERAORA, //捷拉奥拉
        .moves = {MOVE_PLASMA_FISTS, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_VOLT_SWITCH}, //等离子闪电拳，吸取拳，拍落，伏特替换
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZERAORA_3] = {
        .species = SPECIES_ZERAORA, //捷拉奥拉
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_HIDDEN_POWER, MOVE_WORK_UP}, //等离子闪电拳，近身战，觉醒力量，自我激励
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZERAORA_4] = {
        .species = SPECIES_ZERAORA, //捷拉奥拉
        .moves = {MOVE_ELECTROWEB, MOVE_SNARL, MOVE_VOLT_SWITCH, MOVE_FAKE_OUT}, //电网，大声咆哮，伏特替换，击掌奇袭
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZACIAN_HERO_1] = {
        .species = SPECIES_ZACIAN_HERO, //苍响
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE}, //嬉闹，铁头，近身战，疯狂伏特
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_HERO_2] = {
        .species = SPECIES_ZACIAN_HERO, //苍响
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_QUICK_ATTACK, MOVE_SWORDS_DANCE}, //嬉闹，铁头，电光一闪，剑舞
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_HERO_3] = {
        .species = SPECIES_ZACIAN_HERO, //苍响
        .moves = {MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}, //铁头，疯狂伏特，近身战，剑舞
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_HERO_4] = {
        .species = SPECIES_ZACIAN_HERO, //苍响
        .moves = {MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_DIG, MOVE_SWORDS_DANCE}, //嬉闹，疯狂伏特，挖洞，剑舞
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_HERO_5] = {
        .species = SPECIES_ZACIAN_HERO, //苍响
        .moves = {MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_PROTECT}, //嬉闹，疯狂伏特，近身战，守住
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZACIAN_HERO_6] = {
        .species = SPECIES_ZACIAN_HERO, //苍响
        .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_PROTECT}, //铁头，嬉闹，近身战，守住
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAMAZENTA_HERO_1] = {
        .species = SPECIES_ZAMAZENTA_HERO, //藏玛然特
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_HOWL}, //近身战，铁头，疯狂伏特，长嚎
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAMAZENTA_HERO_2] = {
        .species = SPECIES_ZAMAZENTA_HERO, //藏玛然特
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_HOWL}, //近身战，铁头，嬉闹，长嚎
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(24, 252, 0, 232, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAMAZENTA_HERO_3] = {
        .species = SPECIES_ZAMAZENTA_HERO, //藏玛然特
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_METAL_BURST}, //近身战，铁头，疯狂伏特，金属爆炸
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZAMAZENTA_HERO_4] = {
        .species = SPECIES_ZAMAZENTA_HERO, //藏玛然特
        .moves = {MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_PSYCHIC_FANGS, MOVE_PROTECT}, //近身战，疯狂伏特，精神之牙，守住
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ETERNATUS_1] = {
        .species = SPECIES_ETERNATUS, //无极汰那
        .moves = {MOVE_DYNAMAX_CANNON, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_RECOVER}, //极巨炮，污泥炸弹，喷射火焰，自我再生
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ETERNATUS_2] = {
        .species = SPECIES_ETERNATUS, //无极汰那
        .moves = {MOVE_DYNAMAX_CANNON, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_METEOR_BEAM}, //极巨炮，污泥炸弹，喷射火焰，流星光束
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ETERNATUS_3] = {
        .species = SPECIES_ETERNATUS, //无极汰那
        .moves = {MOVE_MYSTICAL_FIRE, MOVE_TOXIC, MOVE_COSMIC_POWER, MOVE_RECOVER}, //魔法火焰，剧毒，宇宙力量，自我再生
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ETERNATUS_4] = {
        .species = SPECIES_ETERNATUS, //无极汰那
        .moves = {MOVE_ETERNABEAM, MOVE_MYSTICAL_FIRE, MOVE_LIGHT_SCREEN, MOVE_REFLECT}, //无极光束，魔法火焰，光墙，反射壁
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_SHADOW_1] = {
        .species = SPECIES_CALYREX_SHADOW, //蕾冠王-骑黑马的样子
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_PSYSHOCK, MOVE_GIGA_DRAIN, MOVE_EXPANDING_FORCE}, //星碎，精神冲击，终极吸取，广域战力
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_SHADOW_2] = {
        .species = SPECIES_CALYREX_SHADOW, //蕾冠王-骑黑马的样子
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_EXPANDING_FORCE, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT}, //星碎，广域战力，吸取之吻，诡计
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_SHADOW_3] = {
        .species = SPECIES_CALYREX_SHADOW, //蕾冠王-骑黑马的样子
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_EXPANDING_FORCE, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE}, //星碎，广域战力，诡计，替身
        .heldItem = ITEM_SPELL_TAG,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CALYREX_SHADOW_4] = {
        .species = SPECIES_CALYREX_SHADOW, //蕾冠王-骑黑马的样子
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_EXPANDING_FORCE, MOVE_POLLEN_PUFF, MOVE_PROTECT}, //星碎，广域战力，花粉团，守住
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CALYREX_ICE_1] = {
        .species = SPECIES_CALYREX_ICE, //蕾冠王-骑白马的样子
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}, //雪矛，十万马力，近身战，剑舞
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 0, 128),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CALYREX_ICE_2] = {
        .species = SPECIES_CALYREX_ICE, //蕾冠王-骑白马的样子
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_AGILITY}, //雪矛，十万马力，近身战，高速移动
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 128, 0, 0, 128),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CALYREX_ICE_3] = {
        .species = SPECIES_CALYREX_ICE, //蕾冠王-骑白马的样子
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM}, //雪矛，十万马力，剑舞，戏法空间
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CALYREX_ICE_4] = {
        .species = SPECIES_CALYREX_ICE, //蕾冠王-骑白马的样子
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_TRICK_ROOM}, //雪矛，十万马力，近身战，戏法空间
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = NATURE_BRAVE
    },
};