const struct BattleMove gBattleMoves[MOVES_COUNT] =
{

    [MOVE_NONE] =
    {
        .effect = EFFECT_HIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_STRUGGLE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .accuracy = 100,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_RECOIL_25,

        .power = 50,
        .type = TYPE_NORMAL,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BIDE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
            .priority = 1,
        #else
            .accuracy = 100,
            .priority = 0,
        #endif
        .effect = EFFECT_BIDE,
        .power = 1,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FINAL_GAMBIT] =
    {
        .effect = EFFECT_FINAL_GAMBIT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
   [MOVE_FLAIL] =
    {
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SONIC_BOOM] =
    {
        .effect = EFFECT_SONICBOOM,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_SUPER_FANG] =
    {
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_RETURN] =
    {
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FRUSTRATION] =
    {
        .effect = EFFECT_FRUSTRATION,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SPIT_UP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 1,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_SPIT_UP,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_ENDEAVOR] =
    {
        .effect = EFFECT_ENDEAVOR,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_VEEVEE_VOLLEY] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_CRUSH_GRIP] =
    {
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_WRING_OUT] =
    {
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_TRUMP_CARD] =
    {
        .effect = EFFECT_TRUMP_CARD,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_WRAP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 100,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_TRAP,
        .power = 30,
        .type = TYPE_NORMAL,
        .pp = 30,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },		
	
    [MOVE_POUND] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SCRATCH] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_TACKLE] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_ECHOED_VOICE] =
    {
        .effect = EFFECT_ECHOED_VOICE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_CONSTRICT] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_RAGE] =
    {
        .effect = EFFECT_RAGE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },


    [MOVE_QUICK_ATTACK] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FEINT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 40,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 40,
        #else
            .power = 40,
        #endif
        .effect = EFFECT_FEINT,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FAKE_OUT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        #endif
        .effect = EFFECT_FAKE_OUT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_FALSE_SWIPE] =
    {
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_HOLD_BACK] =
    {
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DOUBLE_SLAP] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 25,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_RAPID_SPIN] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 50,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_RAPID_SPIN,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SNORE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 50,
        #else
            .power = 40,
        #endif
        .effect = EFFECT_SNORE,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_WEATHER_BALL] =
    {
        .effect = EFFECT_WEATHER_BALL,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_TERRAIN_PULSE] =
    {
        .effect = EFFECT_WEATHER_BALL,   //TODO
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PAY_DAY] =
    {
        .effect = EFFECT_PAY_DAY,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_SWIFT] =
    {
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_COVET] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
            .pp = 25,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 60,
            .pp = 40,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 40,
            .pp = 40,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .power = 40,
            .pp = 40,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_THIEF,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_ROUND] =
    {
        .effect = EFFECT_ROUND,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_JUDGMENT] =
    {
        .effect = EFFECT_PUNISHMENT,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_HIGHEST,
    },	

    [MOVE_STOMP] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_DMG_MINIMIZE | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_HORN_ATTACK] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_HEADBUTT] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DIZZY_PUNCH] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SLASH] =
    {
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
		
    [MOVE_FACADE] =
    {
        .effect = EFFECT_FACADE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_CHIP_AWAY] =
    {
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STAT_STAGES_IGNORED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_RETALIATE] =
    {
        .effect = EFFECT_RETALITATE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DOUBLE_HIT] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 35,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_NATURAL_GIFT] =
    {
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_CRUSH_CLAW] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_RELIC_SONG] =
    {
        .effect = EFFECT_SLEEP_HIT,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_FURY_SWIPES] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SPIKE_CANNON] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_TAIL_SLAP] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_MULTI_ATTACK] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_HIGHEST,
        .argument = STATUS1_ANY,
    },
	
    [MOVE_HIDDEN_POWER] =
    {
        .effect = EFFECT_HIDDEN_POWER,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SECRET_POWER] =
    {
        .effect = EFFECT_HIDDEN_POWER,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BOUNCE] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = MOVE_EFFECT_FEINT,	
    },	
	
    [MOVE_MEGA_PUNCH] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },		
	
    [MOVE_HYPER_FANG] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_STRONG_JAW_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_EXTREME_SPEED] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .priority = 2,
        #else
            .priority = 1,
        #endif
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BODY_SLAM] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 85,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_DMG_MINIMIZE,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_PRESENT] =
    {
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_TAKE_DOWN] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_FURY_ATTACK] =
    {
        .effect = EFFECT_TRIPLE_KICK,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_TRI_ATTACK] =
    {
        .effect = EFFECT_TRI_ATTACK,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_UPROAR] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 90,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_UPROAR,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_HYPER_VOICE] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_ROCK_CLIMB] =
    {
        .effect = EFFECT_THROAT_CHOP,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_REVELATION_DANCE] =
    {
        .effect = EFFECT_REVELATION_DANCE,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DANCE | FLAG_STAT_STAGES_IGNORED,
        .split = SPLIT_HIGHEST,
    },

    [MOVE_EGG_BOMB] =
    {
        .effect = EFFECT_FLAME_BURST,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_BOOMBURST] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_GUILLOTINE] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_HORN_DRILL] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_MEGA_KICK] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRIKER_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SLAM] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_HEAD_CHARGE] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_TECHNO_BLAST] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 100,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_THRASH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
            .pp = 10,
        #else
            .power = 120,
            .pp = 10,
        #endif
        .effect = EFFECT_RAMPAGE,
        .type = TYPE_NORMAL,
        .accuracy = 80,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DOUBLE_EDGE] =
    {
        .effect = EFFECT_RECOIL_33_STATUS,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_PARALYSIS,		
    },	
	
    [MOVE_GIGA_IMPACT] =
    {
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_HYPER_BEAM] =
    {
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
	[MOVE_DYNAMAX_CANNON] =
    {
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SKULL_BASH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 150,
            .pp = 10,
        #else
            .power = 100,
            .pp = 10,
        #endif
        .effect = EFFECT_SKULL_BASH,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

	[MOVE_LAST_RESORT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 150,
        #else
            .power = 150,
        #endif
        .effect = EFFECT_LAST_RESORT,
        .type = TYPE_NORMAL,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },		
	
    [MOVE_SELF_DESTRUCT] =
    {
        .effect = EFFECT_FINAL_GAMBIT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_EXPLOSION] =
    {
        .effect = EFFECT_EXPLOSION,
        .power = 200,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_GROWL] =
    {
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },

    [MOVE_TAIL_WHIP] =
    {
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_LEER] =
    {
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_HARDEN] =
    {
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_DEFENSE_CURL] =
    {
        .effect = EFFECT_DEFENSE_CURL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_DOUBLE_TEAM] =
    {
        .effect = EFFECT_EVASION_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_HOWL] =
    {
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },

    [MOVE_SHARPEN] =
    {
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_PLAY_NICE] =
    {
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_CONFIDE] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_LOCK_ON] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 100,
        #else
            .accuracy = 0,
        #endif
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_MIND_READER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_FOCUS_ENERGY] =
    {
        .effect = EFFECT_FOCUS_ENERGY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_LASER_FOCUS] =
    {
        .effect = EFFECT_LASER_FOCUS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_FLASH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 95,
        #else
            .accuracy = 70,
        #endif
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_SMOKESCREEN] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SWEET_SCENT] =
    {
        .effect = EFFECT_EVASION_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_MINIMIZE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_MINIMIZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_FORESIGHT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 0,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .accuracy = 100,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_ODOR_SLEUTH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        #else
            .accuracy = 100,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_CONVERSION] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_CONVERSION,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_CONVERSION_2] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .target = MOVE_TARGET_USER,
        #else
            .target = MOVE_TARGET_FOES_AND_ALLY,
        #endif
        .effect = EFFECT_CONVERSION_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
		
    [MOVE_REFLECT_TYPE] =
    {
        .effect = EFFECT_REFLECT_TYPE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_CAMOUFLAGE] =
    {
        .effect = EFFECT_CAMOUFLAGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SWORDS_DANCE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_DANCE,
        .split = SPLIT_STATUS,
    },
		
    [MOVE_SCREECH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },

    [MOVE_SCARY_FACE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 90,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_CAPTIVATE] =
    {
        .effect = EFFECT_CAPTIVATE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_STUFF_CHEEKS] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_ACUPRESSURE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = 0,
        #else
            .flags = FLAG_SNATCH_AFFECTED,
        #endif
        .effect = EFFECT_ACUPRESSURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_BELLY_DRUM] =
    {
        .effect = EFFECT_BELLY_DRUM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SHELL_SMASH] =
    {
        .effect = EFFECT_SHELL_SMASH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_WORK_UP] =
    {
        .effect = EFFECT_ATTACK_SPATK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_GROWTH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_GROWTH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_NOBLE_ROAR] =
    {
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },

    [MOVE_TICKLE] =
    {
        .effect = EFFECT_TICKLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_SUPERSONIC] =
    {
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 70,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },

    [MOVE_SWAGGER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 90,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_SWAGGER,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TEETER_DANCE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_DANCE,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_DANCE,
        #endif
        .effect = EFFECT_TEETER_DANCE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_YAWN] =
    {
        .effect = EFFECT_YAWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SING] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 60,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_GLARE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 90,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .accuracy = 90,
        #else
            .accuracy = 75,
        #endif
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ATTRACT] =
    {
        .effect = EFFECT_ATTRACT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_MEAN_LOOK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .flags = FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_BLOCK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .flags = FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_SLEEP_TALK] =
    {
        .effect = EFFECT_SLEEP_TALK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HEAL_BELL] =
    {
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_REFRESH] =
    {
        .effect = EFFECT_REFRESH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SAFEGUARD] =
    {
        .effect = EFFECT_SAFEGUARD,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_LUCKY_CHANT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_LUCKY_CHANT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
		
    [MOVE_WISH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_WISH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_RECOVER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 10,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_SLACK_OFF] =
    {
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_SOFT_BOILED] =
    {
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_MILK_DRINK] =
    {
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_PROTECT] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = FLAG_PROTECTION_MOVE,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ENDURE] =
    {
        .effect = EFFECT_ENDURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = FLAG_PROTECTION_MOVE,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HELPING_HAND] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .target = MOVE_TARGET_ALLY,
        #else
            .target = MOVE_TARGET_USER,
        #endif
        .effect = EFFECT_HELPING_HAND,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .priority = 5,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_BATON_PASS] =
    {
        .effect = EFFECT_BATON_PASS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_WHIRLWIND] =
    {
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .split = SPLIT_STATUS,
        .accuracy = 0,
        .flags = FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_WIND_BASED,
    },

    [MOVE_ROAR] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 0,
            .flags = FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND | FLAG_MAGICCOAT_AFFECTED,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 100,
            .flags = FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND | FLAG_MAGICCOAT_AFFECTED,
        #else
            .accuracy = 100,
            .flags = FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        #endif
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SIMPLE_BEAM] =
    {
        .effect = EFFECT_SIMPLE_BEAM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_DISABLE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 100,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .accuracy = 80,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .accuracy = 55,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_DISABLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
   [MOVE_ENCORE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_ENCORE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_BESTOW] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .flags = FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_BESTOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },		
	
    [MOVE_RECYCLE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_RECYCLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_PSYCH_UP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_PSYCH_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ENTRAINMENT] =
    {
        .effect = EFFECT_ENTRAINMENT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_COURT_CHANGE] =
    {
        .effect = EFFECT_SKILL_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_STOCKPILE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 20,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_STOCKPILE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_SWALLOW] =
    {
        .effect = EFFECT_SWALLOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_NATURE_POWER] =
    {
        .effect = EFFECT_NATURE_POWER,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_ASSIST] =
    {
        .effect = EFFECT_ASSIST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_MIMIC] =
    {
        .effect = EFFECT_MIMIC,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_COPYCAT] =
    {
        .effect = EFFECT_COPYCAT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_METRONOME] =
    {
        .effect = EFFECT_METRONOME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_TRANSFORM] =
    {
        .effect = EFFECT_TRANSFORM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_REST] =
    {
        .effect = EFFECT_REST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SUBSTITUTE] =
    {
        .effect = EFFECT_SUBSTITUTE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SKETCH] =
    {
        .effect = EFFECT_SKETCH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_PAIN_SPLIT] =
    {
        .effect = EFFECT_PAIN_SPLIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_PERISH_SONG] =
    {
        .effect = EFFECT_PERISH_SONG,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SOUND,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ME_FIRST] =
    {
        .effect = EFFECT_ME_FIRST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_AFTER_YOU] =
    {
        .effect = EFFECT_AFTER_YOU,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_FOLLOW_ME] =
    {
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 2,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_SPOTLIGHT] =
    {
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SPLASH] =
    {
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_HAPPY_HOUR] =
    {
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_CELEBRATE] =
    {
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_HOLD_HANDS] =
    {
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HEAT_CRASH] =
    {
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_MINIMIZE,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_EMBER] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 40,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_FIRE_SPIN] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 50,
            .accuracy = 100,
        #else
            .power = 50,
            .accuracy = 100,
        #endif
        .effect = EFFECT_TRAP,
        .type = TYPE_FIRE,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_FLAME_CHARGE] =
    {
        .effect = EFFECT_SPEED_UP_HIT,
        .power = 50,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_INCINERATE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
        #else
            .power = 30,
        #endif
        .effect = EFFECT_INCINERATE,
        .type = TYPE_FIRE,
        .accuracy = 80,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_FLAME_WHEEL] =
    {
        .effect = EFFECT_RAPID_SPIN,
        .power = 60,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BURNING_JEALOUSY] =
    {
        .effect = EFFECT_PUNISHMENT,   //TODO
        .power = 65,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_OVERHEAT] =
    {
        .effect = EFFECT_SMELLINGSALT,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
        .argument = STATUS1_BURN,
    },	
	
    [MOVE_FLAME_BURST] =
    {
        .effect = EFFECT_FLAME_BURST,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_FIRE_FANG] =
    {
        .effect = EFFECT_FLINCH_STATUS,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_BURN,
    },

    [MOVE_FIRE_PUNCH] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_MYSTICAL_FIRE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 80,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_FIERY_DANCE] =
    {
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DANCE,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_FIRE_PLEDGE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_PLEDGE,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_LAVA_PLUME] =
    {
        .effect = EFFECT_BRICK_BREAK,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_FIRE_LASH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_BLAZE_KICK] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 85,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_HEAT_WAVE] =
    {
        .power = 85,
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },		

    [MOVE_FLAMETHROWER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 95,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_SIZZLY_SLIDE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .pp = 15,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .pp = 15,
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_INFERNO] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_PYRO_BALL] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SEARING_SHOT] =
    {
        .effect = EFFECT_KNOCK_OFF,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },		
	
    [MOVE_BLUE_FLARE] =
    {
        .effect = EFFECT_SLEEP_HIT,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_SACRED_FIRE] =
    {
        .effect = EFFECT_THAW_HIT,
        .power = 95,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_FUSION_FLARE] =
    {
        .effect = EFFECT_FLINCH_STATUS,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
        .argument = STATUS1_PARALYSIS,		
    },	

    [MOVE_MAGMA_STORM] =
    {
        .power = 100,
        .accuracy = 85,
        .effect = EFFECT_TRAP,
        .type = TYPE_FIRE,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_FLARE_BLITZ] =
    {
        .effect = EFFECT_RECOIL_33_STATUS,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_BURN,
    },	
	
    [MOVE_V_CREATE] =
    {
        .effect = EFFECT_HAMMER_ARM,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FIRE_BLAST] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SHELL_TRAP] =
    {
        .effect = EFFECT_BEAK_BLAST,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_BLAST_BURN] =
    {
        .effect = EFFECT_SUPERPOWER,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_BURN_UP] =
    {
        .effect = EFFECT_BURN_UP,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_ERUPTION] =
    {
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },		

    [MOVE_WILL_O_WISP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 85,
        #else
            .accuracy = 75,
        #endif
        .effect = EFFECT_WILL_O_WISP,
        .power = 0,
        .type = TYPE_FIRE,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_MORNING_SUN] =
    {
        .effect = EFFECT_MORNING_SUN,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SUNNY_DAY] =
    {
        .effect = EFFECT_SUNNY_DAY,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },		

    [MOVE_AQUA_JET] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BUBBLE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 30,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_WATER_GUN] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_WHIRLPOOL] =
    {
        .power = 50,
        .accuracy = 100,
        .effect = EFFECT_TRAP,
        .type = TYPE_WATER,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_UNDERWATER,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_VICE_GRIP] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_WATER_PULSE] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_MEGA_LAUNCHER_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_BRINE] =
    {
        .effect = EFFECT_BRINE,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_CLAMP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 95,
            .pp = 20,
        #else
            .accuracy = 95,
            .pp = 20,
        #endif
        .effect = EFFECT_TRAP,
        .power = 65,
        .type = TYPE_WATER,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_BUBBLE_BEAM] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 70,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SNIPE_SHOT] =
    {
        .effect = EFFECT_FEINT,   
        .power = 70,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MIRROR_MOVE_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_RAZOR_SHELL] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 75,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_HIGH_CRIT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_FLIP_TURN] =
    {
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 75,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_WATER_SHURIKEN] =
    {
        #if B_WATER_SHURIKEN_SPLIT >= GEN_7
            .split = SPLIT_SPECIAL,
        #else
            .split = SPLIT_PHYSICAL,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
    },
	
    [MOVE_FISHIOUS_REND] =
    {
        .effect = EFFECT_BOLT_BEAK,
        .power = 75,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_OCTAZOOKA] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST | FLAG_BALLISTIC | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
		
    [MOVE_SPARKLING_ARIA] =
    {
        .effect = EFFECT_HEX,
        .power = 75,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,

    },	
	
    [MOVE_WATERFALL] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_FLINCH_HIT,
        #else
            .effect = EFFECT_HIT,
        #endif
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_WATER_PLEDGE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_PLEDGE,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SCALD] =
    {
        .effect = EFFECT_SCALD,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SURF] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
            .target = MOVE_TARGET_BOTH,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .power = 80,
            .target = MOVE_TARGET_BOTH,
        #else
            .power = 80,
            .target = MOVE_TARGET_BOTH,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_UNDERWATER,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_STEAM_ERUPTION] =
    {
        .effect = EFFECT_SCALD,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_WATER_SPOUT] =
    {
        .effect = EFFECT_BRICK_BREAK,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_MUDDY_WATER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 85,
        #else
            .power = 85,
        #endif
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_LIQUIDATION] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_AQUA_TAIL] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SURGING_STRIKES] =
    {
        .effect = EFFECT_TRIPLE_KICK,   //TODO (Multi hit + Always Crit)
        .power = 15,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BOUNCY_BUBBLE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_WATER,
        .accuracy = 90,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SPLISHY_SPLASH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_CRABHAMMER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
            .accuracy = 90,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 90,
            .accuracy = 90,
        #else
            .power = 90,
            .accuracy = 90,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_WATER,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DIVE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 100,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_SEMI_INVULNERABLE,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = MOVE_EFFECT_FEINT,	
    },	
	
    [MOVE_ORIGIN_PULSE] =
    {
        .effect = EFFECT_SLEEP_HIT,
        .power = 100,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_HYDRO_PUMP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_CONFUSE_HIT,
        .type = TYPE_WATER,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_HYDRO_CANNON] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 120,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_WITHDRAW] =
    {
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_WATER_SPORT] =
    {
        .effect = EFFECT_WATER_SPORT,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SOAK] =
    {
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_AQUA_RING] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_AQUA_RING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_LIFE_DEW] =
    {
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_RAIN_DANCE] =
    {
        .effect = EFFECT_RAIN_DANCE,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_ELECTRO_BALL] =
    {
        .effect = EFFECT_ELECTRO_BALL,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_NUZZLE] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 30,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_THUNDER_SHOCK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 40,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_CHARGE_BEAM] =
    {
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ELECTROWEB] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 60,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SHOCK_WAVE] =
    {
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_PARABOLIC_CHARGE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 60,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SPARK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DISCHARGE] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },		

    [MOVE_RISING_VOLTAGE] =
    {
        .effect = EFFECT_RISING_VOLTAGE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_VOLT_SWITCH] =
    {
        .effect = EFFECT_HIT_ESCAPE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_THUNDER_FANG] =
    {
        .effect = EFFECT_FLINCH_STATUS,
        .power = 75,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
    },

    [MOVE_THUNDER_PUNCH] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 75,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BOLT_BEAK] =
    {
        .effect = EFFECT_BOLT_BEAK,
        .power = 75,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_ZING_ZAP] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },		

    [MOVE_ZIPPY_ZAP] =
    {
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_THUNDER_CAGE] =
    {
        .effect = EFFECT_TRAP,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_MAGNETIC_FLUX] =
    {
        .effect = EFFECT_JAW_LOCK,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },		

    [MOVE_OVERDRIVE] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 85,
        .type = TYPE_ELECTRIC,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },		
	
    [MOVE_THUNDEROUS_KICK] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 85,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_WILD_CHARGE] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_VOLT_TACKLE] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_THUNDERBOLT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 95,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_PIKA_PAPOW] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BUZZY_BUZZ] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_ZAP_CANNON] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 90,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_PLASMA_FISTS] =
    {
        .effect = EFFECT_DOUBLE_HIT, // Needs a custom move effect
        .power = 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_FUSION_BOLT] =
    {
        .effect = EFFECT_FLINCH_STATUS,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_PARALYSIS,		
    },

    [MOVE_AURA_WHEEL] =
    {
        .effect = EFFECT_SPEED_UP_HIT,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_BOLT_STRIKE] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 110,
        .type = TYPE_ELECTRIC,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_THUNDER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_THUNDER,
        .type = TYPE_ELECTRIC,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIT_IN_AIR,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_THUNDER_WAVE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 90,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_CHARGE] =
    {
        .effect = EFFECT_CHARGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_MAGNET_RISE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_MAGNET_RISE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_ION_DELUGE] =
    {
        .effect = EFFECT_ION_DELUGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 1,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ELECTRIFY] =
    {
        .effect = EFFECT_ELECTRIFY,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_EERIE_IMPULSE] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },	

    [MOVE_ELECTRIC_TERRAIN] =
    {
        .effect = EFFECT_ELECTRIC_TERRAIN,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_GRASS_KNOT] =
    {
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ABSORB] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 30,
        #else
            .pp = 30,
        #endif
        .effect = EFFECT_ABSORB,
        .power = 30,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_BRANCH_POKE] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_LEAFAGE] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_VINE_WHIP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 40,
            .pp = 30,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .power = 40,
            .pp = 30,
        #else
            .power = 40,
            .pp = 30,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SNAP_TRAP] =
    {
        .effect = EFFECT_TRAP,
        .power = 50,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_RAZOR_LEAF] =
    {
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_LEAF_TORNADO] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_MAGICAL_LEAF] =
    {
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_MEGA_DRAIN] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 25,
        #else
            .pp = 25,
        #endif
        .effect = EFFECT_ABSORB,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_GRASSY_GLIDE] =
    {
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_WORRY_SEED] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_BULLET_SEED] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 25,
        #else
            .power = 25,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BARRAGE] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_HORN_LEECH] =
    {
        .effect = EFFECT_ABSORB,
        .power = 75,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_GIGA_DRAIN] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 80,
            .pp = 20,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 80,
            .pp = 20,
        #else
            .power = 80,
            .pp = 20,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP		
    },
	
    [MOVE_GRAV_APPLE] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_APPLE_ACID] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PETAL_BLIZZARD] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_GRASS_PLEDGE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_PLEDGE,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_DRUM_BEATING] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 85,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FORESTS_CURSE] =
    {
        .effect = EFFECT_TRAP,
        .power = 90,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SEED_BOMB] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 90,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_ENERGY_BALL] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_BALLISTIC | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_LEAF_BLADE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 90,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_TROP_KICK] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 85,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SAPPY_SEED] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .accuracy = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .accuracy = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_HIT,   //TODO (Leech Seed + Hit)
        .type = TYPE_GRASS,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_NEEDLE_ARM] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 95,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_WOOD_HAMMER] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 100,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SOLAR_BLADE] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 100,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FRENZY_PLANT] =
    {
        .effect = EFFECT_SPEED_UP_HIT,
        .power = 110,
        .type = TYPE_GRASS,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SEED_FLARE] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 110,
        .type = TYPE_GRASS,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_POWER_WHIP] =
    {
        .effect = EFFECT_TRAP,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_PETAL_DANCE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 120,
            .pp = 10,
        #else
            .power = 120,
            .pp = 10,
        #endif
        .effect = EFFECT_RAMPAGE,
        .type = TYPE_GRASS,
        .accuracy = 80,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DANCE,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_LEAF_STORM] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_FLINCH_HIT,
        .type = TYPE_GRASS,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SOLAR_BEAM] =
    {
        .effect = EFFECT_SOLARBEAM,
        .power = 150,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_LEECH_SEED] =
    {
        .effect = EFFECT_LEECH_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_STUN_SPORE] =
    {
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_POWDER,
        .split = SPLIT_STATUS,
    },

    [MOVE_SLEEP_POWDER] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 70,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_POWDER,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SPORE] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_POWDER,
        .split = SPLIT_STATUS,
    },

    [MOVE_COTTON_SPORE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 90,
            .target = MOVE_TARGET_BOTH,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .accuracy = 90,
            .target = MOVE_TARGET_FOES_AND_ALLY,
        #else
            .accuracy = 90,
            .target = MOVE_TARGET_FOES_AND_ALLY,
        #endif
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_GRASS,
        .pp = 30,
        .secondaryEffectChance = 0,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_POWDER,
        .split = SPLIT_STATUS,
    },

    [MOVE_SYNTHESIS] =
    {
        .effect = EFFECT_SYNTHESIS,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_INGRAIN] =
    {
        .effect = EFFECT_INGRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_AROMATHERAPY] =
    {
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_GRASS_WHISTLE] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 60,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_COTTON_GUARD] =
    {
        .effect = EFFECT_DEFENSE_UP_3,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_GRASSY_TERRAIN] =
    {
        .effect = EFFECT_GRASSY_TERRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_SPIKY_SHIELD] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = FLAG_PROTECTION_MOVE,
        .split = SPLIT_STATUS,
    },

    [MOVE_STRENGTH_SAP] =
    {
        .effect = EFFECT_STRENGTH_SAP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_JUNGLE_HEALING] =
    {
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_ICE_BALL] =
    {
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SHEER_COLD] =
    {
        .effect = EFFECT_FURY_CUTTER,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ICE_SHARD] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_POWDER_SNOW] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ICY_WIND] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 55,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_AVALANCHE] =
    {
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = -4,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FROST_BREATH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
        #else
            .power = 40,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_GLACIATE] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_AURORA_BEAM] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 70,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ICE_FANG] =
    {
        .effect = EFFECT_FLINCH_STATUS,
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_FREEZE,
    },	

    [MOVE_ICE_PUNCH] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_ICICLE_SPEAR] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 25,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_GLACIAL_LANCE] =
    {
        .effect = EFFECT_BOLT_BEAK,
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FREEZE_DRY] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_ICICLE_CRASH] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 85,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_ICE_BEAM] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 95,
        #endif
        .effect = EFFECT_FREEZE_HIT,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_TRIPLE_AXEL] =
    {
        .effect = EFFECT_TRIPLE_KICK,   //TODO: Increase damage by 20 instead of 10
        .power = 15,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FREEZY_FROST] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .accuracy = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .accuracy = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_CLEAR_SMOG,   //TODO (Haze + Hit)
        .type = TYPE_ICE,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_ICE_HAMMER] =
    {
        .effect = EFFECT_HAMMER_ARM,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_ICE_BURN] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_FREEZE_SHOCK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_BLIZZARD] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_FREEZE_HIT,
        .type = TYPE_ICE,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_MIST] =
    {
        .effect = EFFECT_MIST,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HAZE] =
    {
        .effect = EFFECT_HAZE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_HAIL] =
    {
        .effect = EFFECT_HAIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_AURORA_VEIL] =
    {
        .effect = EFFECT_AURORA_VEIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_REVERSAL] =
    {
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_LOW_KICK] =
    {
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_SEISMIC_TOSS] =
    {
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_COUNTER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
        #else
            .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_COUNTER,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BIND] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 100,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_TRAP,
        .power = 30,
        .type = TYPE_FIGHTING,
        .pp = 30,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
	[MOVE_POWER_UP_PUNCH] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_ROCK_SMASH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 40,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_MACH_PUNCH] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_VACUUM_WAVE] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_KARATE_CHOP] =
    {
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FORCE_PALM] =
    {
        .effect = EFFECT_PARALYZE_HIT,   //Physical to Special Damage
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_DOUBLE_KICK] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 30,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_REVENGE] =
    {
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -4,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_ROLLING_KICK] =
    {
        .effect = EFFECT_RAPID_SPIN,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_LOW_SWEEP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 65,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_WAKE_UP_SLAP] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 70,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_WAKE_UP_SLAP,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_SLEEP,
    },
	
    [MOVE_SMELLING_SALT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 70,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_SMELLINGSALT,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
    },	
	
    [MOVE_DRAIN_PUNCH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 75,
            .pp = 20,
        #else
            .power = 75,
            .pp = 20,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_VITAL_THROW] =
    {
        .effect = EFFECT_VITAL_THROW,
        .power = 75,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -2,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BRICK_BREAK] =
    {
        .effect = EFFECT_BRICK_BREAK,
        .power = 75,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_ARM_THRUST] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_CIRCLE_THROW] =
    {
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 75,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_STRENGTH] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    }, 	
	
    [MOVE_BODY_PRESS] =
    {
        .effect = EFFECT_BODY_PRESS,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_AURA_SPHERE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SUBMISSION] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_RECOIL_25,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_JUMP_KICK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 80,
            .pp = 20,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 80,
            .pp = 20,
        #else
            .power = 80,
            .pp = 20,
        #endif
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SECRET_SWORD] =
    {
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BLADEMASTER_BOOST | FLAG_TARGET_ABILITY_IGNORED, 
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SKY_UPPERCUT] =
    {
        .effect = EFFECT_SKY_UPPERCUT,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SACRED_SWORD] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 15,
        #else
            .pp = 15,
        #endif
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STAT_STAGES_IGNORED | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_TRIPLE_KICK] =
    {
        .effect = EFFECT_TRIPLE_KICK,
        .power = 15,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_STORM_THROW] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 40,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DYNAMIC_PUNCH] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_OCTOLOCK] =
    {
        .effect = EFFECT_HIT_PREVENT_ESCAPE, //EFFECT_OCTOLOCK,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_CROSS_CHOP] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },
		
    [MOVE_HI_JUMP_KICK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 100,
            .pp = 15,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 100,
            .pp = 15,
        #else
            .power = 100,
            .pp = 15,
        #endif
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_HAMMER_ARM] =
    {
        .effect = EFFECT_HAMMER_ARM,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FOCUS_BLAST] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_CLOSE_COMBAT] =
    {
        .effect = EFFECT_CLOSE_COMBAT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SUPERPOWER] =
    {
        .effect = EFFECT_SUPERPOWER,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,      
		.split = SPLIT_PHYSICAL,
    },
	
    [MOVE_METEOR_ASSAULT] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_FOCUS_PUNCH] =
    {
        .effect = EFFECT_FOCUS_PUNCH,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BULK_UP] =
    {
        .effect = EFFECT_BULK_UP,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_COACHING] =
    {
        .effect = EFFECT_BULK_UP,   //TODO
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_NO_RETREAT] =
    {
        .effect = EFFECT_NO_RETREAT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_QUICK_GUARD] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .flags = FLAG_PROTECTION_MOVE | FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
        .argument = TRUE, // Protects the whole side.
    },
	
    [MOVE_MAT_BLOCK] =
    {
        .effect = EFFECT_MAT_BLOCK,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
        .argument = TRUE, // Protects the whole side.
    },
	
    [MOVE_DETECT] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = FLAG_PROTECTION_MOVE,
        .split = SPLIT_STATUS,
    },

    [MOVE_POISON_STING] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SMOG] =
    {
        .power = 40,
        .effect = EFFECT_POISON_HIT,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ACID] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_INCINERATE,
        #else
            .effect = EFFECT_INCINERATE,
        #endif
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ACID_SPRAY] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_POISON_TAIL] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_TOXIC_THREAD] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 60,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_SLUDGE] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_VENOM_DRENCH] =
    {
        .effect = EFFECT_VENOSHOCK,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_CROSS_POISON] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 70,
        .type = TYPE_POISON,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_VENOSHOCK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 70,
        .type = TYPE_POISON,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
		
    [MOVE_CLEAR_SMOG] =
    {
        .effect = EFFECT_CLEAR_SMOG,
        .power = 75,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_POISON_FANG] =
    {
        .effect = EFFECT_POISON_FANG,
        .power = 75,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 20,
	.secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_POISON_JAB] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 80,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_CORROSIVE_GAS] =
    {
        .effect = EFFECT_BRICK_BREAK,   //TODO
        .power = 80,
        .type = TYPE_POISON,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_SLUDGE_BOMB] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SHELL_SIDE_ARM] =
    {
        .effect = EFFECT_POISON_HIT,   //TODO
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_HIGHEST,
    },

    [MOVE_SLUDGE_WAVE] =
    {
        .effect = EFFECT_POISON_HIT,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_GUNK_SHOT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 80,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_POISON_HIT,
        .power = 120,
        .type = TYPE_POISON,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BELCH] =
    {
        .effect = EFFECT_BELCH,
        .power = 120,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PURIFY] =
    {
        .effect = EFFECT_PURIFY,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_BANEFUL_BUNKER] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = FLAG_PROTECTION_MOVE,
        .split = SPLIT_STATUS,
    },

    [MOVE_COIL] =
    {
        .effect = EFFECT_COIL,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TOXIC_SPIKES] =	
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_MAGICCOAT_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_TOXIC_SPIKES,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_GASTRO_ACID] =
    {
        .effect = EFFECT_GASTRO_ACID,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ACID_ARMOR] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_POISON_GAS] =
    {
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 90,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .effect = EFFECT_POISON,
        .pp = 30,
        .secondaryEffectChance = 0,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TOXIC] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 80,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_TOXIC,
        .power = 0,
        .type = TYPE_POISON,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_POISON_POWDER] =
    {
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 80,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_POWDER,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_MAGNITUDE] =
    {
        .effect = EFFECT_MAGNITUDE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_UNDERGROUND,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_MUD_SLAP] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 40,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_SAND_TOMB] =
    {
        .power = 50,
        .accuracy = 100,
        .effect = EFFECT_TRAP,
        .type = TYPE_GROUND,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_MUD_SHOT] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 60,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_BULLDOZE] =
    {
        .effect = EFFECT_BULLDOZE,
        .power = 60,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BONE_CLUB] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_FISSURE] =
    {
        .effect = EFFECT_BRICK_BREAK,
        .power = 75,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_UNDERGROUND,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BONE_RUSH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 90,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_GROUND,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_MUD_BOMB] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SCORCHING_SANDS] =
    {
        .effect = EFFECT_SCALD,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_STOMPING_TANTRUM] =
    {
        .effect = EFFECT_STOMPING_TANTRUM,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DRILL_RUN] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_BONEMERANG] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 45,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED  | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_EARTHQUAKE] =
    {
        .effect = EFFECT_EARTHQUAKE,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_UNDERGROUND,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_THOUSAND_WAVES] =
    {
        .effect = EFFECT_HIT_PREVENT_ESCAPE,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_THOUSAND_ARROWS] =
    {
        .effect = EFFECT_SMACK_DOWN,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_EARTH_POWER] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_HIGH_HORSEPOWER] =
    {
        .effect = EFFECT_SPEED_UP_HIT,
        .power = 95,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRIKER_BOOST,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_DIG] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 100,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_SEMI_INVULNERABLE,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = MOVE_EFFECT_FEINT,		
    },	
		
    [MOVE_LANDS_WRATH] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 100,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_PRECIPICE_BLADES] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 50,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SPIKES] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_MAGICCOAT_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_SPIKES,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_SHORE_UP] =
    {
        .effect = EFFECT_SHORE_UP,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_ROTOTILLER] =
    {
        .effect = EFFECT_DRAGON_DANCE,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_DANCE,
        .split = SPLIT_STATUS,
    },

    [MOVE_MUD_SPORT] =
    {
        .effect = EFFECT_MUD_SPORT,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_SAND_ATTACK] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_PECK] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_GUST] =
    {
        .effect = EFFECT_GUST,
        .power = 50,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_IN_AIR | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ACROBATICS] =
    {
        .effect = EFFECT_ACROBATICS,
        .power = 55,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_PLUCK] =
    {
        .effect = EFFECT_BUG_BITE,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_AIR_CUTTER] =
    {
        .power = 60,
        .effect = EFFECT_HIT,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_WING_ATTACK] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_CHATTER] =
    {
        .power = 70,
        .effect = EFFECT_CONFUSE_HIT,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_DRILL_PECK] =
    {
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_HIGH_CRIT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_AIR_SLASH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_AERIAL_ACE] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SKY_DROP] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT, // Needs a custom move effect
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_DUAL_WINGBEAT] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },		
	
    [MOVE_OBLIVION_WING] =
    {
        .effect = EFFECT_ABSORB,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
    },

    [MOVE_FLOATY_FALL] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
        #endif
        .effect = EFFECT_FLINCH_HIT,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_AEROBLAST] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_BEAK_BLAST] =
    {
		.effect = EFFECT_BEAK_BLAST,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SKY_ATTACK] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_FLY] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 100,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_SEMI_INVULNERABLE,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = MOVE_EFFECT_FEINT,	
    },
	
    [MOVE_FLYING_PRESS] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 100,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_MINIMIZE,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_HURRICANE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_HURRICANE,
        .type = TYPE_FLYING,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_HIT_IN_AIR  | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_RAZOR_WIND] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_BRAVE_BIRD] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
	[MOVE_FEATHER_DANCE] =
    {
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_DANCE,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ROOST] =
    {
        .effect = EFFECT_ROOST,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TAILWIND] =
    {
        .effect = EFFECT_TAILWIND,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_WIND_BASED,
        .split = SPLIT_STATUS,
    },

    [MOVE_DEFOG] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_DEFOG,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
	[MOVE_MIRROR_MOVE] =
    {
        .effect = EFFECT_MIRROR_MOVE,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },		
	
    [MOVE_MIRROR_COAT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .flags = FLAG_PROTECT_AFFECTED,
        #else
            .flags = FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_MIRROR_COAT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PSYWAVE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 95,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_PSYWAVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_STORED_POWER] =
    {
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_CONFUSION] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 50,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_HEART_STAMP] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_PSYCHIC,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PSYBEAM] =
    {
        .effect = EFFECT_SLEEP_HIT,
        .power = 65,
        .type = TYPE_PSYCHIC,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_PSYCHO_CUT] =
    {
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_MIST_BALL] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_BALLISTIC | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_LUSTER_PURGE] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PSYCHIC_FANGS] =
    {
        .effect = EFFECT_BRICK_BREAK,
        .power = 75,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_EERIE_SPELL] =
    {
        .effect = EFFECT_EERIE_SPELL, // To do. It's a copy of Spite that inflicts damage and reduced the target's last move's PP by 3 instead of 4.
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_EXPANDING_FORCE] =
    {
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_HYPERSPACE_HOLE] =
    {
        .effect = EFFECT_FEINT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_PSYSHOCK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_HIGHEST,
    },

    [MOVE_ZEN_HEADBUTT] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_EXTRASENSORY] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 15,
        #else
            .pp = 15,
        #endif
        .effect = EFFECT_CONFUSE_HIT,
        .power = 90,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_HIGHEST,
    },
	
    [MOVE_GLITZY_GLOW] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .accuracy = 90,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .accuracy = 90,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,   //TODO (Light Screen + Hit)
        .type = TYPE_PSYCHIC,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_FREEZING_GLARE] =
    {
        .power = 90,
        .effect = EFFECT_FREEZE_HIT,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_KINESIS] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 90,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_PSYCHIC] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_PHOTON_GEYSER] =
    {
        .effect = EFFECT_BURN_HIT, // Needs a custom move effect
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PSYSTRIKE] =
    {
        .effect = EFFECT_PSYSHOCK,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_DREAM_EATER] =
    {
        .effect = EFFECT_DREAM_EATER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_PSYCHO_BOOST] =
    {
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SYNCHRONOISE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
            .pp = 10,
        #else
            .power = 70,
            .pp = 15,
        #endif
        .effect = EFFECT_SYNCHRONOISE,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_FUTURE_SIGHT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
            .accuracy = 90,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 100,
            .accuracy = 90,
            .pp = 10,
        #else
            .power = 100,
            .accuracy = 90,
            .pp = 10,
        #endif
        .effect = EFFECT_FUTURE_SIGHT,
        .type = TYPE_PSYCHIC,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_PRISMATIC_LASER] =
    {
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_PSYCHIC,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STAT_STAGES_IGNORED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_MIND_BLOWN] =
    {
        .effect = EFFECT_CLOSE_COMBAT,
        .power = 120,
        .type = TYPE_PSYCHIC,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },		
	
    [MOVE_HYPNOSIS] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 80,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_MEDITATE] =
    {
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_AGILITY] =
    {
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_TELEPORT] =
    {
        .effect = EFFECT_TELEPORT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = -6,
        .flags = 0,
        .split = SPLIT_STATUS,
    },	

   [MOVE_BARRIER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 30,
        #endif
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_LIGHT_SCREEN] =
    {
        .effect = EFFECT_LIGHT_SCREEN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_AMNESIA] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	

    [MOVE_REFLECT] =
    {
        .effect = EFFECT_REFLECT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_TRICK] =
    {
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_ROLE_PLAY] =
    {
        .effect = EFFECT_ROLE_PLAY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_MAGIC_COAT] =
    {
        .effect = EFFECT_MAGIC_COAT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .flags = 0,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_SKILL_SWAP] =
    {
        .effect = EFFECT_SKILL_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_IMPRISON] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_SNATCH_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED,
        #endif
        .effect = EFFECT_IMPRISON,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_COSMIC_POWER] =
    {
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	

    [MOVE_CALM_MIND] =
    {
        .effect = EFFECT_CALM_MIND,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_GRAVITY] =
    {
        .effect = EFFECT_GRAVITY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_MIRACLE_EYE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_MIRACLE_EYE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_HEALING_WISH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_PSYCHO_SHIFT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 100,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_PSYCHO_SHIFT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_HEAL_BLOCK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_HEAL_BLOCK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_POWER_TRICK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_SNATCH_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_POWER_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_POWER_SWAP] =
    {
        .effect = EFFECT_POWER_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_GUARD_SWAP] =
    {
        .effect = EFFECT_GUARD_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HEART_SWAP] =
    {
        .effect = EFFECT_HEART_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_SPEED_SWAP] =
    {
        .effect = EFFECT_SPEED_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TRICK_ROOM] =
    {
        .effect = EFFECT_TRICK_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = -7,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_LUNAR_DANCE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_DANCE | FLAG_SNATCH_AFFECTED,
        #else
            .flags = FLAG_DANCE,
        #endif
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_GUARD_SPLIT] =
    {
        .effect = EFFECT_GUARD_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_POWER_SPLIT] =
    {
        .effect = EFFECT_POWER_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_WONDER_ROOM] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .priority = 0,
        #else
            .priority = -7,
        #endif
        .effect = EFFECT_WONDER_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_TELEKINESIS] =
    {
        .effect = EFFECT_TELEKINESIS,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_MAGIC_ROOM] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .priority = 0,
        #else
            .priority = -7,
        #endif
        .effect = EFFECT_MAGIC_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .flags = 0,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_ALLY_SWITCH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .priority = 2,
        #else
            .priority = 1,
        #endif
        .effect = EFFECT_ALLY_SWITCH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HEAL_PULSE] =
    {
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_PSYCHIC_TERRAIN] =
    {
        .effect = EFFECT_PSYCHIC_TERRAIN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_INSTRUCT] =
    {
        .effect = EFFECT_INSTRUCT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_MAGIC_POWDER] =
    {
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_POWDER,
        .split = SPLIT_STATUS,
        .argument = TYPE_PSYCHIC,
    },
	
    [MOVE_FURY_CUTTER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 40,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 20,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_FURY_CUTTER,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_STRUGGLE_BUG] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 50,
        #else
            .power = 30,
        #endif
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_FELL_STINGER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 50,
        #else
            .power = 30,
        #endif
        .effect = EFFECT_FELL_STINGER,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BUG_BITE] =
    {
        .effect = EFFECT_BUG_BITE,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_INFESTATION] =
    {
        .effect = EFFECT_TRAP,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_LEECH_LIFE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 60,
            .pp = 25,
        #else
            .power = 20,
            .pp = 15,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_BUG,
        .accuracy = 95,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
	[MOVE_STEAMROLLER] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 65,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SKITTER_SMACK] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 70,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_U_TURN] =
    {
        .effect = EFFECT_HIT_ESCAPE,
        .power = 75,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_PIN_MISSILE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 25,
            .accuracy = 90,
        #else
            .power = 25,
            .accuracy = 90,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .type = TYPE_BUG,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_SIGNAL_BEAM] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 75,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SILVER_WIND] =
    {
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 75,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_TWINEEDLE] =
    {
        .effect = EFFECT_TWINEEDLE,
        .power = 40,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
		
    [MOVE_LUNGE] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_ATTACK_ORDER] =
    {
        .effect = EFFECT_TRAP,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
		
    [MOVE_X_SCISSOR] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BUG_BUZZ] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_POLLEN_PUFF] =
    {
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_FIRST_IMPRESSION] =
    {
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_MEGAHORN] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 100,
        .type = TYPE_BUG,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_RAGE_POWDER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .priority = 2,
        #else
            .priority = 3,
        #endif
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .flags = FLAG_POWDER,
        .split = SPLIT_STATUS,
    },

    [MOVE_SPIDER_WEB] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .flags = FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_POWDER] =
    {
        .effect = EFFECT_POWDER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_POWDER,
        .split = SPLIT_STATUS,
    },

    [MOVE_QUIVER_DANCE] =
    {
        .effect = EFFECT_QUIVER_DANCE,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_DANCE,
        .split = SPLIT_STATUS,
    },

    [MOVE_TAIL_GLOW] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_UP_3,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_STRING_SHOT] =
    {
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_STICKY_WEB] =
    {
        .effect = EFFECT_STICKY_WEB,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .flags = FLAG_MAGICCOAT_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_DEFEND_ORDER] =
    {
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HEAL_ORDER] =
    {
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ROLLOUT] =
    {
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_ACCELEROCK] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_ROCK_THROW] =
    {
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_SMACK_DOWN] =
    {
        .effect = EFFECT_SMACK_DOWN,
        .power = 60,
        .type = TYPE_ROCK,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_ROCK_SLIDE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_ROCK_BLAST] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 90,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_ROCK,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_PHYSICAL,
    },
		
    [MOVE_ANCIENT_POWER] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 75,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ROCK_TOMB] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
            .accuracy = 90,
            .pp = 20,
        #else
            .power = 80,
            .accuracy = 90,
            .pp = 20,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_ROCK,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_POWER_GEM] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_METEOR_BEAM] =
    {
        .effect = EFFECT_SP_ATTACK_UP_HIT,   //TODO
        .power = 85,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_TAR_SHOT] =
    {
        .effect = EFFECT_PARALYZE_HIT, //EFFECT_TAR_SHOT,
        .power = 90,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_DIAMOND_STORM] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_DEFENSE_UP_HIT,
        #else
            .effect = EFFECT_DEFENSE_UP_HIT,
        #endif
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_STONE_EDGE] =
    {
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_ROCK_WRECKER] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_HEAD_SMASH] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 120,
        .type = TYPE_ROCK,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_SANDSTORM] =
    {
        .effect = EFFECT_SANDSTORM,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_WIND_BASED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_ROCK_POLISH] =
    {
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_STEALTH_ROCK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_MAGICCOAT_AFFECTED,
        #else
            .flags = 0,
        #endif
        .effect = EFFECT_STEALTH_ROCK,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_WIDE_GUARD] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .flags = FLAG_PROTECTION_MOVE | FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
        .argument = TRUE, // Protects the whole side.
    },

    [MOVE_NIGHT_SHADE] =
    {
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_ASTONISH] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 30,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SHADOW_SNEAK] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_LICK] =
    {
        .power = 50,
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_HEX] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 65,
        #else
            .power = 65,
        #endif
        .effect = EFFECT_HEX,
        .type = TYPE_GHOST,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_TEATIME] =
    {
        .effect = EFFECT_BUG_BITE,   //TODO
        .power = 75,
        .type = TYPE_GHOST,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_OMINOUS_WIND] =
    {
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 75,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SPIRIT_SHACKLE] =
    {
        .effect = EFFECT_HIT_PREVENT_ESCAPE,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SHADOW_CLAW] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SHADOW_PUNCH] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SHADOW_BALL] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_POLTERGEIST] =
    {
        .effect = EFFECT_KNOCK_OFF, //EFFECT_POLTERGEIST,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
	[MOVE_NIGHTMARE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 90,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_TRAP,
        .power = 80,
        .type = TYPE_GHOST,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SHADOW_BONE] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 85,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SPECTRAL_THIEF] =
    {
        .effect = EFFECT_SPECTRAL_THIEF,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_TRICK_OR_TREAT] =
    {
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_MOONGEIST_BEAM] =
    {
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_TARGET_ABILITY_IGNORED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SHADOW_FORCE] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
        .argument = MOVE_EFFECT_FEINT,
    },

    [MOVE_ASTRAL_BARRAGE] =
    {
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PHANTOM_FORCE] =
    {
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_STAT_STAGES_IGNORED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DOOM_DESIRE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
            .accuracy = 90,
        #else
            .power = 120,
            .accuracy = 90,
        #endif
        .effect = EFFECT_FUTURE_SIGHT,
        .type = TYPE_GHOST,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_CONFUSE_RAY] =
    {
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_CURSE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .type = TYPE_GHOST,
        #else
            .type = TYPE_MYSTERY,
        #endif
        .effect = EFFECT_CURSE,
        .power = 0,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SPITE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_SPITE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_DESTINY_BOND] =
    {
        .effect = EFFECT_DESTINY_BOND,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_GRUDGE] =
    {
        .effect = EFFECT_GRUDGE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TWISTER] =
    {
        .effect = EFFECT_TWISTER,
        .power = 50,
        .type = TYPE_DRAGON,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_DMG_IN_AIR | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_BREAKING_SWIPE] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DRAGON_BREATH] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_DRAGON_RAGE] =
    {
        .effect = EFFECT_RAGE,
        .power = 70,
        .type = TYPE_DRAGON,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SCALE_SHOT] =
    {
        .effect = EFFECT_SCALE_SHOT,
        .power = 25,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_DRAGON_TAIL] =
    {
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 75,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_SPACIAL_REND] =
    {
        .effect = EFFECT_BOLT_BEAK,
        .power = 75,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_DUAL_CHOP] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DRAGON_PULSE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 85,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_DRAGON_CLAW] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_DRAGON_ENERGY] =
    {
        .effect = EFFECT_EERIE_SPELL,
        .power = 90,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_DRAGON_DARTS] =
    {
        .effect = EFFECT_DOUBLE_HIT, //EFFECT_DRAGON_DARTS,
        .power = 50,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_DRAGON_HAMMER] =
    {
        .effect = EFFECT_RECOIL_25,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_CORE_ENFORCER] =
    {
        .effect = EFFECT_CORE_ENFORCER,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_DRAGON_RUSH] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_DMG_MINIMIZE,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DRACO_METEOR] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 100,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_SMACK_DOWN,
        .type = TYPE_DRAGON,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_CLANGING_SCALES] =
    {
        .effect = EFFECT_ATTACKER_DEFENSE_DOWN_HIT,
        .power = 110,
        .type = TYPE_DRAGON,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_OUTRAGE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 120,
            .pp = 10,
        #else
            .power = 120,
            .pp = 10,
        #endif
        .effect = EFFECT_RAMPAGE,
        .type = TYPE_DRAGON,
        .accuracy = 80,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_ROAR_OF_TIME] =
    {
        .effect = EFFECT_FUTURE_SIGHT,
        .power = 120,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_DRAGON_ASCENT] =
    {
        .effect = EFFECT_SKY_UPPERCUT,
        .power = 120,
        .type = TYPE_DRAGON,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIT_IN_AIR,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_ETERNABEAM] =
    {
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_DRAGON,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_DRAGON_DANCE] =
    {
        .effect = EFFECT_DRAGON_DANCE,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_DANCE,
        .split = SPLIT_STATUS,
    },

    [MOVE_CLANGOROUS_SOUL] =
    {
        .effect = EFFECT_CLANGOROUS_SOUL,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },

    [MOVE_FLING] =
    {
        .effect = EFFECT_FLING,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BEAT_UP] =
    {
        .effect = EFFECT_BEAT_UP,
        #if B_BEAT_UP_DMG >= GEN_5
            .power = 1,
        #else
            .power = 10,
        #endif
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_POWER_TRIP] =
    {
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_PURSUIT] =
    {
        .effect = EFFECT_PURSUIT,
        .power = 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_PAYBACK] =
    {
        .effect = EFFECT_PAYBACK,
        .power = 50,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_ASSURANCE] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 50,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_ASSURANCE,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
	
    [MOVE_SNARL] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 55,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_BRUTAL_SWING] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FAINT_ATTACK] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_THIEF] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
            .pp = 25,
        #else
            .power = 40,
            .pp = 10,
        #endif
        .effect = EFFECT_THIEF,
        .type = TYPE_DARK,
        .accuracy = 95,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BITE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_PUNISHMENT] =
    {
        .effect = EFFECT_PUNISHMENT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_KNOCK_OFF] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 70,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_KNOCK_OFF,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_NIGHT_SLASH] =
    {
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_LASH_OUT] =
    {
        .effect = EFFECT_FACADE,   //TODO
        .power = 70,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_SUCKER_PUNCH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 75,
        #else
            .power = 75,
        #endif
        .effect = EFFECT_SUCKER_PUNCH,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_IRON_FIST_BOOST| FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_FALSE_SURRENDER] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_THROAT_CHOP] =
    {
        .effect = EFFECT_THROAT_CHOP,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DARK_PULSE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_MEGA_LAUNCHER_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_CRUNCH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_DEFENSE_DOWN_HIT,
        #else
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        #endif
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_PARTING_SHOT] =
    {
        .effect = EFFECT_BRINE,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_HYPERSPACE_FURY] =
    {
        .effect = EFFECT_FEINT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },	
		
    [MOVE_WICKED_BLOW] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FIERY_WRATH] =
    {
        .effect = EFFECT_BURN_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_DARKEST_LARIAT] =
    {
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_STAT_STAGES_IGNORED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_NIGHT_DAZE] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_BADDY_BAD] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .accuracy = 90,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .accuracy = 90,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_FLINCH_HIT,   //TODO (Reflect + Hit)
        .type = TYPE_DARK,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_PHYSICAL,
    },	

    [MOVE_JAW_LOCK] =
    {
        .effect = EFFECT_JAW_LOCK,
        .power = 90,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_STRONG_JAW_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FOUL_PLAY] =
    {
        .effect = EFFECT_FOUL_PLAY,
        .power = 90,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_DARK_VOID] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 85,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_SLEEP_HIT,
        .power = 100,
        .type = TYPE_DARK,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_TORMENT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_TORMENT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_FLATTER] =
    {
        .effect = EFFECT_FLATTER,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_MEMENTO] =
    {
        .effect = EFFECT_MEMENTO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TAUNT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED,
        #endif
        .effect = EFFECT_TAUNT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_SNATCH] =
    {
        .effect = EFFECT_SNATCH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .flags = FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_FAKE_TEARS] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_EMBARGO] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #else
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        #endif
        .effect = EFFECT_EMBARGO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_SWITCHEROO] =
    {
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },	

    [MOVE_NASTY_PLOT] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_TEARFUL_LOOK] =
    {
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HONE_CLAWS] =
    {
        .effect = EFFECT_ATTACK_ACCURACY_UP,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_QUASH] =
    {
        .effect = EFFECT_QUASH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_TOPSY_TURVY] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_TOPSY_TURVY,
        .power = 0,
        .type = TYPE_DARK,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_OBSTRUCT] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = FLAG_PROTECTION_MOVE,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_HEAVY_SLAM] =
    {
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_DMG_MINIMIZE,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_BULLET_PUNCH] =
    {
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_GYRO_BALL] =
    {
        .effect = EFFECT_RAPID_SPIN,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_MAGNET_BOMB] =
    {
        .effect = EFFECT_JAW_LOCK,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_BALLISTIC,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_METAL_CLAW] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_MIRROR_SHOT] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 65,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SMART_STRIKE] =
    {
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_STEEL_WING] =
    {
        .effect = EFFECT_DEFENSE_UP_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_CUT] =
    {
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_HIGH_CRIT | FLAG_BLADEMASTER_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_STEEL_ROLLER] =
    {
        .effect = EFFECT_FLINCH_MINIMIZE_HIT,
        .power = 75,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_COMET_PUNCH] =
    {
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },
	
    [MOVE_ANCHOR_SHOT] =
    {
        .effect = EFFECT_HIT_PREVENT_ESCAPE,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_IRON_HEAD] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_FLASH_CANNON] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_MEGA_LAUNCHER_BOOST | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	

    [MOVE_GEAR_GRIND] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .power = 40,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DOUBLE_IRON_BASH] =
    {
        .effect = EFFECT_DOUBLE_HIT,   //TODO (EFFECT_FLINCH_HIT + EFFECT_DOUBLE_HIT)
        .power = 40,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_DMG_MINIMIZE | FLAG_IRON_FIST_BOOST,
        .split = SPLIT_PHYSICAL,
    },    	
	
    [MOVE_METEOR_MASH] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
            .accuracy = 90,
        #else
            .power = 90,
            .accuracy = 90,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_STEEL,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_IRON_FIST_BOOST | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_IRON_TAIL] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_METAL_BURST] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 90,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BEHEMOTH_BLADE] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_BEHEMOTH_BASH] =
    {
        .effect = EFFECT_DEFENSE_UP_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SUNSTEEL_STRIKE] =
    {
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_TARGET_ABILITY_IGNORED,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_STEEL_BEAM] =
    {
        .effect = EFFECT_RECOIL_33_STATUS,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_RECKLESS_BOOST,
        .split = SPLIT_SPECIAL,
        .argument = STATUS2_CONFUSION,
    },

    [MOVE_METAL_SOUND] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SOUND,
        .split = SPLIT_STATUS,
    },

    [MOVE_IRON_DEFENSE] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_AUTOTOMIZE] =
    {
        .effect = EFFECT_AUTOTOMIZE,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_SHIFT_GEAR] =
    {
        .effect = EFFECT_SHIFT_GEAR,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_GEAR_UP] =
    {
        .effect = EFFECT_BULK_UP,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },	
	
    [MOVE_KINGS_SHIELD] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .flags = FLAG_PROTECTION_MOVE,
        .split = SPLIT_STATUS,
    },		
	
    [MOVE_DISARMING_VOICE] =
    {
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_FAIRY,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SOUND,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_DRAINING_KISS] =
    {
        .effect = EFFECT_ABSORB,
        .power = 60,
        .type = TYPE_FAIRY,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
    },

    [MOVE_FAIRY_WIND] =
    {
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_WIND_BASED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_FAIRY_LOCK] =
    {
        .effect = EFFECT_HIT_PREVENT_ESCAPE,
        .power = 70,
        .type = TYPE_FAIRY,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_SPIRIT_BREAK] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 75,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_DAZZLING_GLEAM] =
    {
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_NATURES_MADNESS] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_STRANGE_STEAM] =
    {
        .effect = EFFECT_CLEAR_SMOG,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_PLAY_ROUGH] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_PHYSICAL,
    },

    [MOVE_SPARKLY_SWIRL] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 90,
            .accuracy = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #else
            .power = 90,
            .accuracy = 90,
            .pp = 15,
            .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        #endif
        .effect = EFFECT_HIT,   //TODO (Heal Bell + Hit)
        .type = TYPE_FAIRY,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_MOONBLAST] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 95,
        .type = TYPE_FAIRY,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },	
	
    [MOVE_FLEUR_CANNON] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_MISTY_EXPLOSION] =
    {
        .effect = EFFECT_RECOIL_25,  //TODO
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED,
        .split = SPLIT_SPECIAL,
    },

    [MOVE_LIGHT_OF_RUIN] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .power = 120,
        .type = TYPE_FAIRY,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_KINGSROCK_AFFECTED | FLAG_SHEER_FORCE_BOOST,
        .split = SPLIT_SPECIAL,
    },
	
    [MOVE_SWEET_KISS] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .type = TYPE_FAIRY,
        #else
            .type = TYPE_NORMAL,
        #endif
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .accuracy = 80,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_LOVELY_KISS] =
    {
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 80,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	

    [MOVE_CHARM] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .type = TYPE_FAIRY,
        #else
            .type = TYPE_NORMAL,
        #endif
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_MOONLIGHT] =
    {
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .type = TYPE_FAIRY,
        #else
            .type = TYPE_NORMAL,
        #endif
        .effect = EFFECT_MOONLIGHT,
        .power = 0,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
        .split = SPLIT_STATUS,
    },

    [MOVE_CRAFTY_SHIELD] =
    {
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .flags = 0,
        .split = SPLIT_STATUS,
        .argument = TRUE, // Protects the whole side.
    },

    [MOVE_FLOWER_SHIELD] =
    {
        .effect = EFFECT_FLOWER_SHIELD,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER | MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_MISTY_TERRAIN] =
    {
        .effect = EFFECT_MISTY_TERRAIN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_AROMATIC_MIST] =
    {
        .effect = EFFECT_AROMATIC_MIST,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_GEOMANCY] =
    {
        .effect = EFFECT_GEOMANCY,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

    [MOVE_BABY_DOLL_EYES] =
    {
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_FLORAL_HEALING] =
    {
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGICCOAT_AFFECTED,
        .split = SPLIT_STATUS,
    },
	
    [MOVE_DECORATE] =
    {
        .effect = EFFECT_ACUPRESSURE,   // TODO .. EFFECT_DECORATE
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .flags = 0,
        .split = SPLIT_STATUS,
    },

};


const struct SignatureMove gSignatureMoveList[NUM_SPECIES] = {

    [SPECIES_VENUSAUR] =
    {
        .move = MOVE_SOLAR_BEAM,
	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_SUN,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_OTHER,		
        .differentDescription = TRUE,
        .description = _(
            "Attacks in only one turn. May\n"
            "set Sunny Weather."),
    },
	
    [SPECIES_CHARIZARD] =
    {
        .move = MOVE_FLAMETHROWER,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _(
            "A powerful fire attack with\n"
            "higher chance to cause Burn."),
    },
	
    [SPECIES_BLASTOISE] =
    {
        .move = MOVE_HYDRO_CANNON,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Reckless attack that hurts the\n"
            "user. May cause Confusion."),
    },
	
	[SPECIES_BUTTERFREE] =
    {
        .move = MOVE_SIGNAL_BEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
	.modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "A strange beam attack with\n"
            "higher chance of Confusion."),
    },
	
    [SPECIES_BEEDRILL] =
    {
        .move = MOVE_TWINEEDLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
	.modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Stingers to jab the foe twice.\n"
            "Higher chance to cause Poison."),
    },
	
    [SPECIES_PIDGEOT] =
    {
        .move = MOVE_SKY_ATTACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
	.modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,		
        .differentDescription = TRUE,
        .description = _( 
            "Strikes from heaven. Higher\n"
            "chance of raising Attack."),
    },	     
	
    [SPECIES_RATICATE] =
    {
        .move = MOVE_HYPER_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,		
        .differentDescription = TRUE,
        .description = _( 
            "Bites with sharp fangs. Higher\n"
            "chance to cause Flinch."),
    },
	
    [SPECIES_RATICATE_ALOLAN] =
    {
        .move = MOVE_HYPER_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,		
        .differentDescription = TRUE,
        .description = _( 
            "Bites with sharp fangs. Higher\n"
            "chance to cause Flinch."),
    },
	
    [SPECIES_FEAROW] =
    {
        .move = MOVE_DRILL_PECK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,			
        .differentDescription = TRUE,
        .description = _( 
            "Attacks with a drill beak. High\n"
            "critical ratio. Can flinch."),
    },	
	
    [SPECIES_ARBOK] =
    {
        .move = MOVE_POISON_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
	.modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,	
        .differentDescription = TRUE,
        .description = _( 
            "A sharp-fanged attack. Higher\n"
            "chance of Badly Poison."),
    },	
	
    [SPECIES_RAICHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance3 = 25,
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_PHYSICAL,	
        .differentDescription = TRUE,
        .description = _( 
            "A tackle that may paralyze and\n"
            "set Electric Terrain."),
    },
	
    [SPECIES_RAICHU_ALOLAN] =
    {
        .move = MOVE_VOLT_TACKLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance3 = 25,
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,	
        .differentDescription = TRUE,
        .description = _( 
            "A tackle that may paralyze and\n"
            "set Electric Terrain."),
    },
	
    [SPECIES_SANDSLASH] =
    {
        .move = MOVE_SLASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GROUND,		
        .differentDescription = TRUE,
        .description = _( 
            "Slash with claws. High critical"
            "hit. Can raise user's Speed."),
    },

    [SPECIES_SANDSLASH_ALOLAN] =
    {
        .move = MOVE_SLASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ICE,		
        .differentDescription = TRUE,
        .description = _( 
            "Slash with claws. High critical"
            "hit. Can raise user's Speed."),
    },
	
    [SPECIES_NIDOQUEEN] =
    {
        .move = MOVE_BODY_SLAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_POISON,			
        .differentDescription = TRUE,
        .description = _( 
            "A full-body slam with higher\n"
            "chance to cause Paralysis."),
    },
	
    [SPECIES_NIDOKING] =
    {
        .move = MOVE_POISON_JAB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "A stabbing attack with higher\n"
            "chance to cause Poison."),
    },
	
    [SPECIES_CLEFABLE] =
    {
        .move = MOVE_METEOR_BEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FAIRY,
        .differentDescription = TRUE,
        .description = _( 
            "A beam of energy with higher\n"
            "chance of raising Sp. Att."),
    },
	
    [SPECIES_NINETALES] =
    {
        .move = MOVE_MYSTICAL_FIRE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "A special fire with higher\n"
            "chance of lowering Sp. Atk."),
    },

    [SPECIES_NINETALES_ALOLAN] =
    {
        .move = MOVE_MYSTICAL_FIRE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ICE,
        .differentDescription = TRUE,
        .description = _( 
            "A special fire with higher\n"
            "chance of lowering Sp. Atk."),
    },
	
    [SPECIES_WIGGLYTUFF] =
    {
        .move = MOVE_RELIC_SONG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Attacks with an ancient song.\n"
            "Higher chance of causing Sleep."),
    },       
	
    [SPECIES_CROBAT] =
    {
        .move = MOVE_CROSS_POISON,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "A slash with high crit ratio.\n"
            "Higher chance of Poison."),
    },
	
    [SPECIES_VILEPLUME] =
    {
        .move = MOVE_THRASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 50,
        .modification4 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable4 = FIELD_SET_TERRAIN_GRASS,
        .chance4 = 25,
        .modification5 = SIGNATURE_MOD_TYPE,
        .variable5 = TYPE_GRASS,		
        .differentDescription = TRUE,
        .description = _( 
            "Rampage 2 or 3 turns. May raise\n"
            "Speed and set Grassy Terrain."),
    },
	
    [SPECIES_BELLOSSOM] =
    {
        .move = MOVE_PETAL_DANCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 50,
        .modification4 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable4 = FIELD_SET_TERRAIN_GRASS,
        .chance4 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Rampage 2 or 3 turns. May raise\n"
            "Speed and set Grassy Terrain."),
    },
	
    [SPECIES_PARASECT] =
    {
        .move = MOVE_LEECH_LIFE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "A priority attack that steals\n"
            "half the damage inflicted."),
    },
	
    [SPECIES_VENOMOTH] =
    {
        .move = MOVE_CLEAR_SMOG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_SLEEP,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "White haze that eliminates all\n"
            "stat changes and can Sleep."),
    },	
	
    [SPECIES_DUGTRIO] =
    {
        .move = MOVE_MAGNITUDE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 1,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_DEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Attack of random intensity.\n"
            "May lower the foes Defense."),
    },	

    [SPECIES_DUGTRIO_ALOLAN] =
    {
        .move = MOVE_MAGNITUDE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 1,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_DEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Attack of random intensity.\n"
            "May lower the foes Defense."),
    },	

    [SPECIES_MEOWTH] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 60,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Throws coins at the foe.\n"
            "May lower the foe's Accuracy."),
    },	
	
    [SPECIES_PERSIAN] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Throws coins at the foe.\n"
            "May lower the foe's Accuracy."),
    },	

    [SPECIES_MEOWTH_ALOLAN] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 60,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Throws coins at the foe.\n"
            "May lower the foe's Accuracy."),
    },	

    [SPECIES_PERSIAN_ALOLAN] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_DARK,		
        .differentDescription = TRUE,
        .description = _( 
            "Throws coins at the foe.\n"
            "May lower the foe's Accuracy."),
    },		
	
    [SPECIES_PERRSERKER] =
    {
        .move = MOVE_BEHEMOTH_BLADE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
	.modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,	
        .differentDescription = TRUE,
        .description = _( 
            "Hits as a steel sword. Higher\n" 
            "chance of raising Attack."),
    },	
	
    [SPECIES_GOLDUCK] =
    {
        .move = MOVE_PRISMATIC_LASER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 =  SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_ACC,
        .chance3 = 25,		
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_DARK,
        .differentDescription = TRUE,
        .description = _( 
            "Ignores stats changes. May rise\n"
            "Accuracy. Effective to Dark."),
    },	
	
    [SPECIES_PRIMEAPE] =
    {
        .move = MOVE_CROSS_CHOP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Double-chop attack. High crit\n"
            "ratio. May cause Paralysis."),
    },	
	
    [SPECIES_ARCANINE] =
    {
        .move = MOVE_SACRED_FIRE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_DEFENSE_STAT,
        .variable3 = STAT_SPDEF,
        .differentDescription = TRUE,
        .description = _( 
            "Mystical fire that attacks the\n"
            "Sp. Def. May inflict Burning."),
    },

    [SPECIES_POLIWRATH] =
    {
        .move = MOVE_DYNAMIC_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "Hits with a spinning fist.\n"
            "Almost always Confuses."),
    },	

    [SPECIES_POLITOED] =
    {
        .move = MOVE_ROUND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FAIRY,		
        .differentDescription = TRUE,
        .description = _( 
            "A song that inflicts damage.\n"
            "May lower the foe's Sp. Atk."),
    },		
	
    [SPECIES_ALAKAZAM] =
    {
        .move = MOVE_KINESIS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "A mind strike that may lower\n"
            "Accuracy and cause Confusion."),
    },	

    [SPECIES_MACHAMP] =
    {
        .move = MOVE_STRENGTH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Powerful slam with higher\n"
            "chance of raising Attack. "),
    },

    [SPECIES_VICTREEBEL] =
    {
        .move = MOVE_RAZOR_LEAF,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Cuts with leaves. High crit\n"
            "ratio. May raise Attack."),
    },

    [SPECIES_TENTACRUEL] =
    {
        .move = MOVE_ACID_SPRAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "Sprays melting acid. Almost\n"
            "always reduces Sp. Def."),
    },		
	
    [SPECIES_GOLEM] =
    {
        .move = MOVE_TAKE_DOWN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,	
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_STEALTH_ROCK,	
        .chance3 = 50,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ROCK,	
        .differentDescription = TRUE,
        .description = _( 
            "Reckless attack that hurts the\n"
            "user. Can set Stealth Rock."),
    },
	
    [SPECIES_GOLEM_ALOLAN] =
    {
        .move = MOVE_TAKE_DOWN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,			
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_STEALTH_ROCK,
        .chance3 = 50,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ROCK,	
        .differentDescription = TRUE,
        .description = _( 
            "Reckless attack that hurts the\n"
            "user. Can set Stealth Rock."),
    },
	
    [SPECIES_RAPIDASH] =
    {
        .move = MOVE_FIRE_LASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Whips with fire. May lower\n"
            "Defense and cause a Burn."),
    },

    [SPECIES_RAPIDASH_GALARIAN] =
    {
        .move = MOVE_FIRE_LASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,	
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FAIRY,	
        .differentDescription = TRUE,
        .description = _( 
            "Whips with magic. May lower\n"
            "Defense and cause a Burn."),
    },

    [SPECIES_SLOWBRO] =
    {
        .move = MOVE_VITAL_THROW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,			
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 50,	
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_PSYCHIC,		
	.modification5 = SIGNATURE_MOD_PSS_CHANGE,
        .variable5 = SPLIT_SPECIAL,			
        .differentDescription = TRUE,
        .description = _( 
            "Moves last, but breaks Protect.\n"
            "May cause Infatuation."),
    },	

    [SPECIES_SLOWKING] =
    {
        .move = MOVE_VITAL_THROW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,			
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 50,	
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_PSYCHIC,		
	.modification5 = SIGNATURE_MOD_PSS_CHANGE,
        .variable5 = SPLIT_SPECIAL,			
        .differentDescription = TRUE,
        .description = _( 
            "Moves last, but breaks Protect.\n"
            "May cause Infatuation."),
    },		
	
    [SPECIES_SLOWBRO_GALARIAN] =
    {
        .move = MOVE_SHELL_SIDE_ARM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "Spits poison with the shell.\n"
            "Almost always Poisons."),
    },	

    [SPECIES_SLOWKING_GALARIAN] =
    {
        .move = MOVE_SHELL_SIDE_ARM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "Spits poison with the shell.\n"
            "Almost always Poisons."),
    },	
	
    [SPECIES_MAGNEZONE] =
    {
        .move = MOVE_MAGNETIC_FLUX,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Prevents escaping. May cause\n"
            "Paralysis to the foe."),
    },

    [SPECIES_SIRFETCHD] =
    {
        .move = MOVE_SECRET_SWORD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 =  SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_EVASION,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_DEFENSE_STAT,
        .variable4 = STAT_SPDEF,
        .differentDescription = TRUE,
        .description = _( 
            "Cuts with hidden blade. Ignores\n"
            "abilities. Can raise Evasion."),
    },		

    [SPECIES_DODRIO] =
    {
        .move = MOVE_FURY_ATTACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 20,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
	.chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Jabs the foe three times. May\n"
            "rise the user's Attack."),
    },	
	
    [SPECIES_DEWGONG] =
    {
        .move = MOVE_AURORA_BEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Rainbow-colored beam. Higher\n"
            "chance of lowering Attack."),
    },		

    [SPECIES_MUK] =
    {
        .move = MOVE_SLUDGE_WAVE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Swamps the foes with sludge.\n"
            "Higher chance of Poison."),
    },	

    [SPECIES_MUK_ALOLAN] =
    {
        .move = MOVE_SLUDGE_WAVE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Swamps the foes with sludge.\n"
            "Higher chance of Poison."),
    },	

    [SPECIES_CLOYSTER] =
    {
        .move = MOVE_ICICLE_SPEAR,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Hits with 2 to 5 icicles in a\n"
            "row. May reduce Speed."),
    },	

    [SPECIES_GENGAR] =
    {
        .move = MOVE_NIGHTMARE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_SLEEP,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Traps in a nightmare for 2 to 5\n"
            "turns. May inflict Sleep."),
    },		

    [SPECIES_STEELIX] =
    {
        .move = MOVE_IRON_TAIL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Hits with a hard tail. Higher\n"
            "chance of lowering Defense."),
    },	
				
    [SPECIES_HYPNO] =
    {
        .move = MOVE_PSYCHIC,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Powerful psychic attack. Higher\n"
            "chance of lowering Sp. Def."),
    },
	
    [SPECIES_KINGLER] =
    {
        .move = MOVE_CRABHAMMER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Hammers with pincers. High crit\n"
            "ratio. May lower Speed."),
    },	
	
    [SPECIES_ELECTRODE] =
    {
        .move = MOVE_ELECTRO_BALL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable4 = STAT_SPEED,		
        .differentDescription = TRUE,
        .description = _( 
            "Hurls an orb that uses Speed\n"
            "to attack. May raise Speed."),
    },	

    [SPECIES_EXEGGCUTE] =
    {
        .move = MOVE_BARRAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 15,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
        .chance3 = 10,		
        .differentDescription = TRUE,
        .description = _( 
            "Hurls objects from 2 to 5 times\n"
            "that may lower Sp. Atk."),
    },
	
    [SPECIES_EXEGGUTOR] =
    {
        .move = MOVE_BARRAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
        .chance3 = 10,		
        .differentDescription = TRUE,
        .description = _( 
            "Hurls objects from 2 to 5 times\n"
            "that may lower Sp. Atk."),
    },
	
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        .move = MOVE_BARRAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
        .chance3 = 10,		
        .differentDescription = TRUE,
        .description = _( 
            "Hurls objects from 2 to 5 times\n"
            "that may lower Sp. Atk."),
    },	
	
    [SPECIES_MAROWAK] =
    {
        .move = MOVE_BONE_CLUB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Clubs the foe with a bone.\n"
            "Higher change of Flinch."),
    },
	
    [SPECIES_MAROWAK_ALOLAN] =
    {
        .move = MOVE_BONE_CLUB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GHOST,	
        .differentDescription = TRUE,
        .description = _( 
            "Clubs the foe with a bone.\n"
            "Higher change of Flinch."),
    },	

    [SPECIES_HITMONLEE] =
    {
        .move = MOVE_TRIPLE_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 20,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
	.chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Kicks the foe 3 times in a row.\n"
            "May lower the foe's Speed."),
    },
	
    [SPECIES_HITMONCHAN] =
    {
        .move = MOVE_DRAIN_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
	.chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "A punch that absorbs half the\n"
            "damage. May increase Attack."),
    },
	
    [SPECIES_HITMONTOP] =
    {
        .move = MOVE_ROLLING_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,				
        .differentDescription = TRUE,
        .description = _( 
            "A high-speed kick that raises\n"
            "the user's Speed."),
    },

    [SPECIES_LICKITUNG] =
    {
        .move = MOVE_LICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 60,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_TYPE,
        .variable3 = TYPE_NORMAL,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_GHOST,
        .differentDescription = TRUE,
        .description = _( 
            "Effective against Normal and\n"
            "Ghost. May also Paralyze."),
    },

    [SPECIES_LICKILICKY] =
    {
        .move = MOVE_LICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_TYPE,
        .variable3 = TYPE_NORMAL,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_GHOST,
        .differentDescription = TRUE,
        .description = _( 
            "Effective against Normal and\n"
            "Ghost. May also Paralyze."),
    },

    [SPECIES_KOFFING] =
    {
        .move = MOVE_SMOG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 70,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "An exhaust-gas attack.\n"
            "Almost always Poisons."),
    },

    [SPECIES_WEEZING] =
    {
        .move = MOVE_SMOG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "An exhaust-gas attack.\n"
            "Almost always Poisons."),
    },
	
    [SPECIES_WEEZING_GALARIAN] =
    {
        .move = MOVE_SMOG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "An exhaust-gas attack.\n"
            "Almost always Poisons."),
    },
	
    [SPECIES_RHYPERIOR] =
    {
        .move = MOVE_ROCK_WRECKER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_ROCK,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective against Rock. May\n"
            "lower the foe's Defense."),
    },	
	
    [SPECIES_CHANSEY] =
    {
        .move = MOVE_EGG_BOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Hurls an egg that damages all\n"
            "foes. May inflict Burning."),
    },
	
    [SPECIES_BLISSEY] =
    {
        .move = MOVE_EGG_BOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Hurls an egg that damages all\n"
            "foes. May inflict Burning."),
    },

    [SPECIES_TANGELA] =
    {
        .move = MOVE_WRAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 100,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GRASS,		
        .differentDescription = TRUE,
        .description = _( 
            "Wraps the foe 2 to 5 times.\n"
            "May inflict Leech Seed."),
    },		

    [SPECIES_TANGROWTH] =
    {
        .move = MOVE_WRAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GRASS,			
        .differentDescription = TRUE,
        .description = _( 
            "Wraps the foe 2 to 5 times.\n"
            "May inflict Leech Seed."),
    },	
	
    [SPECIES_KANGASKHAN] =
    {
        .move = MOVE_DIZZY_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,			
        .differentDescription = TRUE,
        .description = _( 
            "A rhytmhic punch with higher\n"
            "chance to cause Confusion."),
    },	
	
    [SPECIES_KINGDRA] =
    {
        .move = MOVE_DRAGON_PULSE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_NORMAL,				
        .differentDescription = TRUE,
        .description = _( 
            "Effective to Normal. Higher\n"
            "chance to lower Speed."),
    },	
	
    [SPECIES_SEAKING] =
    {
        .move = MOVE_HORN_ATTACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,					
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_WATER,			
        .differentDescription = TRUE,
        .description = _( 
            "Jabs the with the horn. Higher\n"
            "change to lower Accuracy."),
    },	
	
    [SPECIES_STARMIE] =
    {
        .move = MOVE_BUBBLE_BEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,					
        .differentDescription = TRUE,
        .description = _( 
            "Sprays bubbles with higher\n"
            "chance to lower Speed."),
    },		

    [SPECIES_MR_RIME] =
    {
        .move = MOVE_FREEZY_FROST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Crystals that eliminates stat\n"
            "changes. May cause Freezing."),
    },	
	
    [SPECIES_SCIZOR] =
    {
        .move = MOVE_BULLET_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 =  FIELD_OPPONET_SET_SPIKES,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Punches fast as a bullet. High\n"
            "priority. May set Spikes"),
    },	

    [SPECIES_JYNX] =
    {
        .move = MOVE_FREEZE_DRY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Freezing wave attacking. Higher\n"
            "chance of lowering Sp. Def."),
    },

    [SPECIES_ELECTIVIRE] =
    {
        .move = MOVE_PLASMA_FISTS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Attacks twice to random foes.\n"
            "May cause Paralysis."),
    },

    [SPECIES_MAGMORTAR] =
    {
        .move = MOVE_SEARING_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Burns down the foe's item. May"
            "also cause Burning."),
    },	

    [SPECIES_PINSIR] =
    {
        .move = MOVE_GUILLOTINE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_BUG,				
        .differentDescription = TRUE,
        .description = _( 
            "Powerful pincer attack. May\n"
            "lower Attack and Accuracy."),
    },		
	
    [SPECIES_TAUROS] =
    {
        .move = MOVE_RAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_FIGHTING,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective against Fighting. Ups\n"
            "Attack when hit. May up Speed."),
    },			

    [SPECIES_GYARADOS] =
    {
        .move = MOVE_DRAGON_RAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_ELECTRIC,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective against Electric. Ups\n"
            "Attack if hit. May lower Speed."),
    },
	
    [SPECIES_LAPRAS] =
    {
        .move = MOVE_SURF,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Crashes a water wave to the\n"
            "foes. May inflict Freezing."),
    },
	
    [SPECIES_DITTO] =
    {
        .move = MOVE_TRANSFORM,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_SPEED,
        .chance2 = 10,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable4 = STAT_DEF,
        .chance4 = 10,
        .modification5 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable5 = STAT_SPATK,
        .chance5 = 10,
        .modification6 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable6 = STAT_SPDEF,
        .chance6 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Becomes a copy of the foe. High\n"
            "priority. May raise all stats."),
    },
	
    [SPECIES_VAPOREON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_RAIN,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_WATER,			
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Rainy Weather"),
    },	
	
    [SPECIES_JOLTEON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ELECTRIC,		
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Electric Terrain"),
    },

    [SPECIES_FLAREON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_SUN,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FIRE,			
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Sunny Weather"),
    },	
	
    [SPECIES_ESPEON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_PSYCHIC,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_PSYCHIC,			
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Psychic Terrain"),
    },	

    [SPECIES_UMBREON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SELF_SET_TAILWIND,
        .chance3 = 20,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_DARK,			
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Tailwind."),
    },	
	
    [SPECIES_LEAFEON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_GRASS,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GRASS,		
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Grassy Terrain"),
    },	

    [SPECIES_GLACEON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_HAIL,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ICE,			
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Hail Weather"),
    },	
	
    [SPECIES_SYLVEON] =
    {
        .move = MOVE_COVET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_MISTY,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FAIRY,		
        .differentDescription = TRUE,
        .description = _( 
            "Cutely begs to obtain the item.\n"
            "May set Misty Terrain"),
    },	

    [SPECIES_PORYGON_Z] =
    {
        .move = MOVE_TECHNO_BLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_DARK,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_STEEL,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective against Dark and Steel\n"
            "May raise all stats."),
    },		

    [SPECIES_OMASTAR] =
    {
        .move = MOVE_SCALD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Shoots boiling water. Higher\n"
            "chance of causing Burn."),
    },		
	
    [SPECIES_KABUTOPS] =
    {
        .move = MOVE_STONE_EDGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
        .chance3 = 20,	
        .differentDescription = TRUE,
        .description = _( 
            "Stabs with stones. High crit\n"
            "ratio. May lower Attack."),
    },	
	
    [SPECIES_AERODACTYL] =
    {
        .move = MOVE_DUAL_WINGBEAT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,	
        .differentDescription = TRUE,
        .description = _( 
            "Slams twice with wings.\n"
            "May cause Flinch."),
    },		
	
    [SPECIES_SNORLAX] =
    {
        .move = MOVE_SNORE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable3 = STAT_SPDEF,		
        .differentDescription = TRUE,
        .description = _( 
            "Used only while asleep. Hits\n"
            "with Sp. Def. May Flinch."),
    },       	

    [SPECIES_ARTICUNO] =
    {
        .move = MOVE_BLIZZARD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_HAIL,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_WATER,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective to Water. May freeze.\n"
            "Can set Hail Weather."),
    },	
	
    [SPECIES_ZAPDOS] =
    {
        .move = MOVE_THUNDER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_GRASS,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective to Grass. May paralyze.\n"
            "Can set Electric Terrain."),
    },			
	
    [SPECIES_MOLTRES] =
    {
        .move = MOVE_FIRE_BLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_SUN,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_ROCK,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective to Rock. May burn.\n"
            "Can set Sunny Weather."),
    },

    [SPECIES_DRAGONITE] =
    {
        .move = MOVE_DRAGON_HAMMER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
        .chance3 = 50,		
        .differentDescription = TRUE,
        .description = _( 
            "Slams the body with recoil\n"
            "damage. May lower Speed."),
    },	

    [SPECIES_MEW] =
    {
        .move = MOVE_PSYSTRIKE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Psychic wave that does physical\n"
            "damage. May cause Flinch."),
    },

    [SPECIES_MEGANIUM] =
    {
        .move = MOVE_SAPPY_SEED,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Giant stalk scatters seeds that\n"
            "can cause Leech Seed"),
    },
	
    [SPECIES_TYPHLOSION] =
    {
        .move = MOVE_FLAME_WHEEL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "A fiery spninning attack.\n"
            "Raises the user's Speed."),
    },
	
    [SPECIES_FERALIGATR] =
    {
        .move = MOVE_JAW_LOCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,		
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_WATER,
        .differentDescription = TRUE,
        .description = _( 
            "Prevents escaping. May cause\n"
            "Flinch to the foe."),
    },
	
    [SPECIES_FURRET] =
    {
        .move = MOVE_BOUNCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,		
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_FIGHTING,	
        .differentDescription = TRUE,
        .description = _( 
            "Bounces up, priority attack.\n"
            "Eff to Fighting. Can Flinch."),
    },
	
    [SPECIES_NOCTOWL] =
    {
        .move = MOVE_EXTRASENSORY,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Attacks with a peculiar power.\n"
            "Higher chance of Confusion."),
    },	
	
    [SPECIES_LEDIAN] =
    {
        .move = MOVE_COMET_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 10,		
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_BUG,
        .differentDescription = TRUE,
        .description = _( 
            "Punches the foe 2 to 5 times.\n"
            "Can cause Confusion."),
    },	
	
    [SPECIES_ARIADOS] =
    {
        .move = MOVE_TOXIC_THREAD,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_STICKY_WEB,
        .chance3 = 50,		
        .differentDescription = TRUE,
        .description = _( 
            "A thread that Poisons and\n"
            "can set Sticky Web."),
    },
	
    [SPECIES_LANTURN] =
    {
        .move = MOVE_CHARGE_BEAM,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "A charged beam that almost\n"
            "always raises Sp. Atk."),
    },	

    [SPECIES_TOGETIC] =
    {
        .move = MOVE_FAIRY_WIND,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 60,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 25,	
        .differentDescription = TRUE,
        .description = _( 
            "A fairy wind that never misses.\n"
            "May cause Infatuation."),
    },	

    [SPECIES_TOGEKISS] =
    {
        .move = MOVE_FAIRY_WIND,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 25,	
        .differentDescription = TRUE,
        .description = _( 
            "A fairy wind that never misses.\n"
            "May cause Infatuation."),
    },	
	
    [SPECIES_XATU] =
    {
        .move = MOVE_FUTURE_SIGHT,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_PSYCHIC,
        .chance3 = 100,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "Priority strike in 2 turns.\n"
            "Will set Psychic Terrain."),
    },	
	
    [SPECIES_AMPHAROS] =
    {
        .move = MOVE_ZAP_CANNON,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "Attacks with a discharge.\n"
            "Almost always Paralyzes."),
    },
	
    [SPECIES_AZUMARILL] =
    {
        .move = MOVE_BOUNCY_BUBBLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "Priority attack that absorbs\n"
            "half the damage inflicted."),
    },	
	
    [SPECIES_SUDOWOODO] =
    {
        .move = MOVE_WOOD_HAMMER,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ROCK,	
        .differentDescription = TRUE,
        .description = _( 
            "Reckless attack that hurts the\n"
            "user. May cause Paralysis."),
    },

    [SPECIES_JUMPLUFF] =
    {
        .move = MOVE_FLOATY_FALL,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,
        .differentDescription = TRUE,
        .description = _( 
            "Floats in the air and dives.\n"
            "Higher chance of Flinch."),
    },			

    [SPECIES_AMBIPOM] =
    {
        .move = MOVE_DOUBLE_HIT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_TAUNT,	
        .chance3 = 100,		
        .differentDescription = TRUE,
        .description = _( 
            "Slams the enemy twice. Taunts\n"
            "into only using attack moves."),
    },	

    [SPECIES_SUNFLORA] =
    {
        .move = MOVE_WORRY_SEED,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Plants a seed on the foe\n."
            "Higher chance of Confusion."),
    },			
	
    [SPECIES_YANMEGA] =
    {
        .move = MOVE_BUG_BUZZ,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "A damaging sound wave. Higher\n"
            "chance to lower Sp. Def."),
    },	
	
    [SPECIES_QUAGSIRE] =
    {
        .move = MOVE_AQUA_TAIL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Swings the tail like a wave.\n"
            "Higher chance to raise Attack."),
    },
	
    [SPECIES_HONCHKROW] =
    {
        .move = MOVE_KNOCK_OFF,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_FAIRY,	
        .differentDescription = TRUE,
        .description = _( 
            "Knocks down the foe's held\n"
            "item. Effective to Fairy."),
    },	
	
    [SPECIES_MISMAGIUS] =
    {
        .move = MOVE_HEX,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Double damage if status problem.\n"
            "May lower Accuracy."),
    },	

    [SPECIES_UNOWN] =
    {
        .move = MOVE_HIDDEN_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable4 = STAT_ATK,
        .chance4 = 10,
        .modification5 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable5 = STAT_DEF,
        .chance5 = 10,
        .modification6 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable6 = STAT_SPATK,
        .chance6 = 10,
        .modification7 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable7 = STAT_SPDEF,
        .chance7 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Attacks with inner power.\n"
            "May raise random stats."),
    },	

    [SPECIES_WYNAUT] =
    {
        .move = MOVE_TAIL_SLAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 20,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_TAUNT,	
        .chance3 = 20,				
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,
        .modification5 = SIGNATURE_MOD_TYPE,
        .variable5 = TYPE_PSYCHIC,		
        .modification6 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable6 = TYPE_GHOST,
        .modification7 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable7 = TYPE_PSYCHIC,
        .modification8 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable8 = TYPE_DRAGON,		
        .differentDescription = TRUE,
        .description = _( 
            "Hits 2 to 5 times. May Taunt."
            "Eff to Ghost, Psychic and Dragon"),
    },

    [SPECIES_WOBBUFFET] =
    {
        .move = MOVE_TAIL_SLAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 30,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_TAUNT,	
        .chance3 = 20,				
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,
        .modification5 = SIGNATURE_MOD_TYPE,
        .variable5 = TYPE_PSYCHIC,		
        .modification6 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable6 = TYPE_GHOST,
        .modification7 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable7 = TYPE_PSYCHIC,
        .modification8 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable8 = TYPE_DRAGON,		
        .differentDescription = TRUE,
        .description = _( 
            "Hits 2 to 5 times. May Taunt."
            "Eff to Ghost, Psychic and Dragon"),
    },
	
    [SPECIES_GIRAFARIG] =
    {
        .move = MOVE_NATURAL_GIFT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_PSYCHIC,	
        .chance3 = 50,			
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_DARK,
        .differentDescription = TRUE,
        .description = _( 
            "Attacks or restores HP. Eff to\n"
            "Dark. May set Psychic Terrain."),
    },	

    [SPECIES_FORRETRESS] =
    {
        .move = MOVE_MIRROR_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .modification4 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable4 = STAT_SPDEF,
        .differentDescription = TRUE,
        .description = _( 
            "Flash that hits with Sp. Def.\n"
            "Higher chance to lower Acc."),
    },		
	
    [SPECIES_DUNSPARCE] =
    {
        .move = MOVE_HORN_DRILL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Hits with a horn. May lower\n"
            "Defense and raise Accuracy."),
    },	     

    [SPECIES_GLISCOR] =
    {
        .move = MOVE_FISSURE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Destroys barriers, may raise\n"
            "Accuracy, and hits underground."),
    },	     

    [SPECIES_GRANBULL] =
    {
        .move = MOVE_BITE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Bites with vicious fangs.\n"
            "Higher chance of Flinch."),
    },	

    [SPECIES_QWILFISH] =
    {
        .move = MOVE_FELL_STINGER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_TOXIC_SPIKES,
        .chance3 = 20,		
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_POISON,			
        .differentDescription = TRUE,
        .description = _( 
            "Raises Attack if knocking the\n"
            "foe. May set Toxic Spikes."),
    },		

    [SPECIES_SHUCKLE] =
    {
        .move = MOVE_ROLLOUT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 40,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,	
        .chance3 = 20,			
        .differentDescription = TRUE,
        .description = _( 
            "5 turn attack of rising power.\n"
            "May cause the foe to Flinch."),
    },
	
    [SPECIES_HERACROSS] =
    {
        .move = MOVE_MEGAHORN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,			
        .differentDescription = TRUE,
        .description = _( 
            "Brutal hit with horns. Higher\n"
            "chance of raising Attack."),
    },

    [SPECIES_WEAVILE] =
    {
        .move = MOVE_TRIPLE_AXEL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 20,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_DEF,
	.chance3 = 10,		
        .differentDescription = TRUE,
        .description = _( 
            "Three kicks of increasing\n"
            "power. May lower Defense."),
    },

    [SPECIES_URSARING] =
    {
        .move = MOVE_REVENGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_TAUNT,	
        .chance3 = 100,			
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_GHOST,	
        .differentDescription = TRUE,
        .description = _( 
            "More powerful if injured.\n"
            "Effective to Ghost. Taunts."),
    },

    [SPECIES_MAGCARGO] =
    {
        .move = MOVE_INCINERATE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,	
        .chance3 = 10,			
        .differentDescription = TRUE,
        .description = _( 
            "Burns up Berries and Gems.\n"
            "May also Burn the enemies."),
    },

    [SPECIES_MAMOSWINE] =
    {
        .move = MOVE_AVALANCHE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,	
        .chance3 = 10,			
        .differentDescription = TRUE,
        .description = _( 
            "More powerful if injured.\n"
            "May cause Freezing."),
    },	
	
    [SPECIES_CURSOLA] =
    {
        .move = MOVE_SHADOW_BONE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,		
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,		
        .differentDescription = TRUE,
        .description = _( 
            "A haunted bone attack. Higher\n"
            "chance of dropping Defense."),
    },		
	
    [SPECIES_OCTILLERY] =
    {
        .move = MOVE_OCTAZOOKA,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,			
        .differentDescription = TRUE,
        .description = _( 
            "Fires a lump of ink. Higher\n"
            "chance of lowering Accuracy."),
    },		
	
    [SPECIES_DELIBIRD] =
    {
        .move = MOVE_PRESENT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_HAIL,	
        .chance3 = 50,	
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ICE,		
        .differentDescription = TRUE,
        .description = _( 
            "A gift that can restore HP.\n"
            "May set Hail Weather."),
    },		
	
    [SPECIES_MANTINE] =
    {
        .move = MOVE_AEROBLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,			
        .differentDescription = TRUE,
        .description = _( 
            "Hits with an air blast. High\n"
            "crit ratio. May cause Flinch."),
    },		
	
    [SPECIES_SKARMORY] =
    {
        .move = MOVE_METAL_CLAW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,			
        .differentDescription = TRUE,
        .description = _( 
            "A steel claw attack. Higher\n"
            "chance of raising Attack."),
    },		
	
    [SPECIES_HOUNDOOM] =
    {
        .move = MOVE_FIERY_WRATH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,					
        .differentDescription = TRUE,
        .description = _( 
            "A fiery wrath attack. Higher\n"
            "chance of causing Burns."),
    },		
	
    [SPECIES_DONPHAN] =
    {
        .move = MOVE_STOMPING_TANTRUM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,	
        .differentDescription = TRUE,
        .description = _( 
            "Stomps around, stronger after\n"
            "a failure. May raise Speed."),
    },	

    [SPECIES_STANTLER] =
    {
        .move = MOVE_ZEN_HEADBUTT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,		
        .differentDescription = TRUE,
        .description = _( 
            "Strong psychic headbutt. Higher\n"
            "chance of Flinch."),
    },		
	
    [SPECIES_SMEARGLE] =
    {
        .move = MOVE_JUDGMENT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPDEF,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_NORMAL,				
        .differentDescription = TRUE,
        .description = _( 
            "More damage to powered up. Eff\n"
            "to Normal. May lower Sp. Def."),
    },		
	
    [SPECIES_MILTANK] =
    {
        .move = MOVE_STOMP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 35,
        .differentDescription = TRUE,
        .description = _( 
            "Stomps the enemy. Higher\n"
            "chance to cause Flinch."),
    },	

    [SPECIES_TYRANITAR] =
    {
        .move = MOVE_DARKEST_LARIAT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,	
        .chance3 = 20,			
        .differentDescription = TRUE,
        .description = _( 
            "Swings with arms. Ignores stat\n"
            "changes. May cause Flinch."),
    },		
	
    [SPECIES_CELEBI] =
    {
        .move = MOVE_CORE_ENFORCER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_DEF,
	.chance3 = 10,		
        .modification4 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable4 = STAT_SPDEF,
	.chance4 = 10,
        .modification5 = SIGNATURE_MOD_TYPE,
        .variable5 = TYPE_PSYCHIC,			
        .differentDescription = TRUE,
        .description = _( 
            "A ray that nullifies abilities.\n"
            "May raise Def and Sp. Def."),
    },			
	
    [SPECIES_SCEPTILE] =
    {
        .move = MOVE_LEAF_BLADE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ACC,
        .chance3 = 25,			
        .differentDescription = TRUE,
        .description = _( 
            "A sharp leaf slash. High crit\n"
            "ratio. May raise Accuracy."),
    },	

    [SPECIES_BLAZIKEN] =
    {
        .move = MOVE_BLAZE_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "A scorching kick. Higher\n"
            "chance of lowering Attack."),
    },

    [SPECIES_SWAMPERT] =
    {
        .move = MOVE_MUDDY_WATER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
        .chance3 = 10,				
        .differentDescription = TRUE,
        .description = _( 
            "Attacks with muddy water. May\n"
            "lower Accuracy and Speed."),
    },

    [SPECIES_MIGHTYENA] =
    {
        .move = MOVE_FOUL_PLAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification4 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable4 = STAT_DEF,
        .chance4 = 25,	
        .differentDescription = TRUE,
        .description = _( 
            "Hits using the foe's Attack.\n"
            "May lower Defense."),
    },

    [SPECIES_LINOONE] =
    {
        .move = MOVE_EXTREME_SPEED,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_EVASION,
        .chance3 = 25,			
        .differentDescription = TRUE,
        .description = _( 
            "An extremely fast attack.\n"
            "May raise Evasion."),
    },
	
    [SPECIES_OBSTAGOON] =
    {
        .move = MOVE_LASH_OUT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 25,			
        .differentDescription = TRUE,
        .description = _( 
            "Boosts Attack when affected by\n"
            "status. May raise Attack."),
    },
	
    [SPECIES_BEAUTIFLY] =
    {
        .move = MOVE_SILVER_WIND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "A powdery attack with higher\n"
            "chance to raise abilities."),
    },
	
    [SPECIES_DUSTOX] =
    {
        .move = MOVE_OMINOUS_WIND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_POISON,
        .differentDescription = TRUE,
        .description = _( 
            "A repulsive attack with higher\n"
            "chance to raise abilities."),
    },
	
    [SPECIES_LUDICOLO] =
    {
        .move = MOVE_FRENZY_PLANT,
	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_RAIN,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Hits with crazy leaves. May\n"
            "raise Speed and set Rain."),
    },
	
    [SPECIES_SHIFTRY] =
    {
        .move = MOVE_LEAF_TORNADO,
	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SELF_SET_TAILWIND,
        .chance3 = 50,
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_PHYSICAL,		
        .differentDescription = TRUE,
        .description = _( 
            "Circles with leaves. May lower\n"
            "Accuracy and set Tailwind."),
    },
	
    [SPECIES_SWELLOW] =
    {
        .move = MOVE_WING_ATTACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Strikes with wings. Higher\n"
            "chance of lowering Defense"),
    },	
	
    [SPECIES_PELIPPER] =
    {
        .move = MOVE_PLUCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Eats the foe's held berry.\n"
            "May cause Flinch."),
    },
	
    [SPECIES_GARDEVOIR] =
    {
        .move = MOVE_DAZZLING_GLEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_MISTY,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Damages foes with a bright\n"
            "flash. May set Misty Terrain."),
    },

    [SPECIES_GALLADE] =
    {
        .move = MOVE_PRECIPICE_BLADES,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_PSYCHIC,
        .chance3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FIGHTING,		
        .differentDescription = TRUE,
        .description = _( 
            "Two blades attack random foes.\n"
            "May set Psychic Terrain."),
    },

    [SPECIES_MASQUERAIN] =
    {
        .move = MOVE_HURRICANE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_BUG,	
        .differentDescription = TRUE,
        .description = _( 
            "Hits the foe with fierce winds.\n"
            "Higher chance of Confusion."),
    },

    [SPECIES_BRELOOM] =
    {
        .move = MOVE_SKY_UPPERCUT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_FLYING,	
        .differentDescription = TRUE,
        .description = _( 
            "Strikes leaping into the sky.\n"
            "Effective against Flying."),
    },

    [SPECIES_SLAKING] =
    {
        .move = MOVE_HAMMER_ARM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 40,	
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_NORMAL,	
        .modification5 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable5 = TYPE_DRAGON,
        .differentDescription = TRUE,
        .description = _( 
            "Swings arms, lowers user Speed.\n"
            "Effective to Dragon. May Flinch."),
    },
	
    [SPECIES_NINJASK] =
    {
        .move = MOVE_FURY_CUTTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 40,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable3 = STAT_SPEED,
        .differentDescription = TRUE,
        .description = _( 
            "Intensifies with successive\n"
            "hits. Uses Speed to attack."),
    },
		
    [SPECIES_SHEDINJA] =
    {
        .move = MOVE_FURY_CUTTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 40,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable3 = STAT_SPEED,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GHOST,
        .differentDescription = TRUE,
        .description = _( 
            "Intensifies with successive\n"
            "hits. Uses Speed to attack."),
    },
	
    [SPECIES_EXPLOUD] =
    {
        .move = MOVE_BOOMBURST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_FIGHTING,		
        .modification5 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable5 = TYPE_STEEL,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective against Fighting and\n"
            "Steel. May cause Confusion"),
    },	
	
    [SPECIES_HARIYAMA] =
    {
        .move = MOVE_ARM_THRUST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "Strikes with arm punches 2 to 5\n"
            "times. May cause Paralysis."),
    },	

    [SPECIES_PROBOPASS] =
    {
        .move = MOVE_MAGNET_BOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Prevents escaping. May cause\n"
            "Confusion to the foe."),
    },

    [SPECIES_DELCATTY] =
    {
        .move = MOVE_SIZZLY_SLIDE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_NORMAL,	
        .modification5 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable5 = TYPE_ELECTRIC,		
        .differentDescription = TRUE,
        .description = _( 
            "Effective to Electric. Higher\n"
            "chance of causing a Burn."),
    },

    [SPECIES_SABLEYE] =
    {
        .move = MOVE_SHADOW_CLAW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_EVASION,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "A ghostly claw with high crit\n"
            "ratio. May raise Evasion."),
    },

    [SPECIES_MAWILE] =
    {
        .move = MOVE_BRUTAL_SWING,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FAIRY,	
        .differentDescription = TRUE,
        .description = _( 
            "Violently swings around. Higher\n"
            "chance of lowering Defense."),
    },	
	
    [SPECIES_AGGRON] =
    {
        .move = MOVE_METAL_BURST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Slams with a steel body. Higher\n"
            "chance of causing Confusion."),
    },

    [SPECIES_MEDICHAM] =
    {
        .move = MOVE_FOCUS_BLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPDEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Full power attack. May lower\n"
            "and raise respective Sp. Def."),
    },

    [SPECIES_MANECTRIC] =
    {
        .move = MOVE_THUNDERBOLT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPEED,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Electrical attack that may\n"
            "paralyze and raise Speed."),
    },

    [SPECIES_PLUSLE] =
    {
        .move = MOVE_ZING_ZAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "An electrified impact that may\n"
            "raise Attack and Speed."),
    },

    [SPECIES_MINUN] =
    {
        .move = MOVE_ZIPPY_ZAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "An electric burst that may"\n
            "raise Sp. Attack and Speed."),
    },

    [SPECIES_VOLBEAT] =
    {
        .move = MOVE_THOUSAND_WAVES,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_BUG,			
        .differentDescription = TRUE,
        .description = _( 
            "Multiple waves that prevent\n"
            "escaping. May lower Speed."),
    },

    [SPECIES_ILLUMISE] =
    {
        .move = MOVE_THOUSAND_ARROWS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_BUG,		
        .differentDescription = TRUE,
        .description = _( 
            "Multiple waves that knock foes"
            "to ground. May lower Speed."),
    },

    [SPECIES_ROSERADE] =
    {
        .move = MOVE_PETAL_BLIZZARD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
	.variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "A violent storm of petals that\n"
            "may cause Infatuation."),
    },

    [SPECIES_SWALOT] =
    {
        .move = MOVE_SLUDGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,				
        .differentDescription = TRUE,
        .description = _( 
            "Sludge hurled to damage.\n"
            "Higher chance of Poison."),
    },

    [SPECIES_SHARPEDO] =
    {
        .move = MOVE_CRUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_EVASION,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "Bites with sharp fangs. May\n"
            "lower Defense and Evasion."),
    },

    [SPECIES_WAILORD] =
    {
        .move = MOVE_WHIRLPOOL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Traps in a whirlpool for 2 to 5\n"
            "turns. May cause Confusion."),
    },

    [SPECIES_CAMERUPT] =
    {
        .move = MOVE_LAVA_PLUME,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Scarlet flames that destroy\n"
            "barriers and may cause Burn."),
    },

    [SPECIES_TORKOAL] =
    {
        .move = MOVE_FLAME_BURST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,		
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_PHYSICAL,
        .differentDescription = TRUE,
        .description = _( 
            "A burst that may Burn, and\n"
            "does fire damage to all foes."),
    },

    [SPECIES_GRUMPIG] =
    {
        .move = MOVE_PSYBEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "Fires a peculiar ray. Higher\n"
            "chance to cause Sleep."),
    },

    [SPECIES_SPINDA] =
    {
        .move = MOVE_RAPID_SPIN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "A super fast spinning tackle\n"
            "that raises the user's Speed."),
    },

    [SPECIES_FLYGON] =
    {
        .move = MOVE_HYPERSPACE_FURY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 =  SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPEED,
        .chance3 = 25,		
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GROUND,	
        .differentDescription = TRUE,
        .description = _( 
            "Warps to hit foes with Protect.\n"
            "May raise Speed."),
    },

    [SPECIES_CACTURNE] =
    {
        .move = MOVE_NEEDLE_ARM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Hits with thorny arms. Higher\n"
            "chance to cause Flinch."),
    },

    [SPECIES_ALTARIA] =
    {
        .move = MOVE_DRAGON_ASCENT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_FLYING,			
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_STEEL,	
        .differentDescription = TRUE,
        .description = _( 
            "Strikes flying into the sky.\n"
            "Effective to Steel and Flying."),
    },

    [SPECIES_ZANGOOSE] =
    {
        .move = MOVE_FURY_SWIPES,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_POISON,			
        .differentDescription = TRUE,
        .description = _( 
            "Rakes with claws 2 to 5 times.\n"
            "Eff to Poison. May raise Speed."),
    },

    [SPECIES_SEVIPER] =
    {
        .move = MOVE_POISON_TAIL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_NORMAL,		
        .differentDescription = TRUE,
        .description = _( 
            "High crit ratio. Effective to\n"
            "Normal. May also Poison."),
    },

    [SPECIES_LUNATONE] =
    {
        .move = MOVE_MOONGEIST_BEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_DEF,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ROCK,				
        .differentDescription = TRUE,
        .description = _( 
            "Moon powered beam that ignores\n."
            "abilities. May raise Defense."),
    },

    [SPECIES_SOLROCK] =
    {
        .move = MOVE_SUNSTEEL_STRIKE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ROCK,				
        .differentDescription = TRUE,
        .description = _( 
            "Sun powered hit that ignores.\n"
            "abilities. May raise Defense."),
    },

    [SPECIES_WHISCASH] =
    {
        .move = MOVE_EARTH_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Make the ground erupt. Higher\n"
            "chance of lowering Sp. Def."),
    },

    [SPECIES_CRAWDAUNT] =
    {
        .move = MOVE_VICE_GRIP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "Grips the foe with pincers.\n"
            "Higher chance to lower Speed."),
    },

    [SPECIES_CLAYDOL] =
    {
        .move = MOVE_EXPANDING_FORCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "Power up and damages all foes.\n"
            "Higher chance to raise Sp. Atk."),
    },

    [SPECIES_CRADILY] =
    {
        .move = MOVE_GIGA_DRAIN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "Absorbs three quarters of the\n"
            "damage. May set Leech Seed."),
    },

    [SPECIES_ARMALDO] =
    {
        .move = MOVE_CRUSH_CLAW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ROCK,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_MILOTIC] =
    {
        .move = MOVE_CLANGING_SCALES,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 110,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_ELECTRIC,			
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_CASTFORM] =
    {
        .move = MOVE_TRI_ATTACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_KECLEON] =
    {
        .move = MOVE_FAINT_ATTACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .modification4 = SIGNATURE_MOD_OTHER,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_BANETTE] =
    {
        .move = MOVE_PHANTOM_FORCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_EVASION,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_DUSKNOIR] =
    {
        .move = MOVE_BONEMERANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
	.modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,	
        .chance3 = 15,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_TROPIUS] =
    {
        .move = MOVE_LEAF_STORM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SELF_SET_TAILWIND,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_CHIMECHO] =
    {
        .move = MOVE_EERIE_SPELL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
	.variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_ABSOL] =
    {
        .move = MOVE_PURSUIT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_DEFENSE_STAT,
	.variable3 = STAT_SPEED,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_GLALIE] =
    {
        .move = MOVE_ICE_SHARD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
	.variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_FROSLASS] =
    {
        .move = MOVE_FROST_BREATH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
	.variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
	
    [SPECIES_WALREIN] =
    {
        .move = MOVE_ICE_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_HUNTAIL] =
    {
        .move = MOVE_PAYBACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_WATER,				
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_GOREBYSS] =
    {
        .move = MOVE_WATER_SPOUT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_RELICANTH] =
    {
        .move = MOVE_HEAD_SMASH,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_ALOMOMOLA] =
    {
        .move = MOVE_DRAINING_KISS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,			
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_SALAMENCE] =
    {
        .move = MOVE_DRAGON_BREATH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_DAMAGE_STAT,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_METAGROSS] =
    {
        .move = MOVE_STEEL_BEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_REGICE] =
    {
        .move = MOVE_ANCIENT_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 30,
        .modification3 = SIGNATURE_MOD_TYPE,
        .variable3 = TYPE_ICE,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },
	
    [SPECIES_REGIROCK] =
    {
        .move = MOVE_ANCIENT_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 30,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_PHYSICAL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },
	
    [SPECIES_REGISTEEL] =
    {
        .move = MOVE_ANCIENT_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 30,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_STEEL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DEOXYS] =
    {
        .move = MOVE_PSYCHO_BOOST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_TORTERRA] =
    {
        .move = MOVE_LANDS_WRATH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_INFERNAPE] =
    {
        .move = MOVE_FIRE_SPIN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_EMPOLEON] =
    {
        .move = MOVE_PSYCHO_BOOST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_STARAPTOR] =
    {
        .move = MOVE_BRAVE_BIRD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 50,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BIBAREL] =
    {
        .move = MOVE_CHIP_AWAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 25,		
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_ELECTRIC,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_KRICKETUNE] =
    {
        .move = MOVE_X_SCISSOR,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPEED,
        .chance3 = 25,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_LUXRAY] =
    {
        .move = MOVE_FUSION_BOLT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_RAMPARDOS] =
    {
        .move = MOVE_HEADBUTT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 0,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_ALWAYS,		
        .modification5 = SIGNATURE_MOD_TYPE,
        .variable5 = TYPE_ROCK,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BASTIODON] =
    {
        .move = MOVE_BEHEMOTH_BASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPDEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_WORMADAM] =
    {
        .move = MOVE_STRUGGLE_BUG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MOTHIM] =
    {
        .move = MOVE_SKITTER_SMACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_VESPIQUEN] =
    {
        .move = MOVE_ATTACK_ORDER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_PACHIRISU] =
    {
        .move = MOVE_SPARK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_FLOATZEL] =
    {
        .move = MOVE_SPLISHY_SPLASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CHERRIM] =
    {
        .move = MOVE_SEED_FLARE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_GASTRODON] =
    {
        .move = MOVE_MUD_BOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRIFBLIM] =
    {
        .move = MOVE_SPIRIT_SHACKLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_EVASION,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_LOPUNNY] =
    {
        .move = MOVE_RETURN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 1,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
	.variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_PURUGLY] =
    {
        .move = MOVE_SNARL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_GHOST,
        .modification5 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable5 = STAT_ATK,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_SKUNTANK] =
    {
        .move = MOVE_SLUDGE_BOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable3 = STAT_ATK,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BRONZONG] =
    {
        .move = MOVE_FLASH_CANNON,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CHATOT] =
    {
        .move = MOVE_CHATTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SPIRITOMB] =
    {
        .move = MOVE_DARK_PULSE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_GARCHOMP] =
    {
        .move = MOVE_DRACO_METEOR,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_DEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_LUCARIO] =
    {
        .move = MOVE_AURA_SPHERE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_HIPPOWDON] =
    {
        .move = MOVE_EARTHQUAKE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRAPION] =
    {
        .move = MOVE_VENOSHOCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_TOXICROAK] =
    {
        .move = MOVE_SUCKER_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_CARNIVINE] =
    {
        .move = MOVE_SNAP_TRAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_LUMINEON] =
    {
        .move = MOVE_WATERFALL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_RAIN,
        .chance3 = 10,
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ABOMASNOW] =
    {
        .move = MOVE_FREEZE_SHOCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_HAIL,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ROTOM] =
    {
        .move = MOVE_POLTERGEIST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_HEATRAN] =
    {
        .move = MOVE_MAGMA_STORM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DARKRAI] =
    {
        .move = MOVE_DARK_VOID,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_VICTINI] =
    {
        .move = MOVE_V_CREATE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 40,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SERPERIOR] =
    {
        .move = MOVE_SEED_BOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_EMBOAR] =
    {
        .move = MOVE_FLARE_BLITZ,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SAMUROTT] =
    {
        .move = MOVE_ORIGIN_PULSE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_WATCHOG] =
    {
        .move = MOVE_SWIFT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_ELECTRIC,
	.modification5 = SIGNATURE_MOD_PSS_CHANGE,
        .variable5 = SPLIT_PHYSICAL,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_STOUTLAND] =
    {
        .move = MOVE_ROAR_OF_TIME,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 100,
        .modification4 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable4 = STAT_SPEED,
        .chance4 = 100,
        .modification5 = SIGNATURE_MOD_PRIORITY,
        .variable5 = SIGNATURE_PRIORITY_ALWAYS,
        .modification6 = SIGNATURE_MOD_TYPE,
        .variable6 = TYPE_NORMAL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_LIEPARD] =
    {
        .move = MOVE_NIGHT_SLASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SIMISAGE] =
    {
        .move = MOVE_GRASS_PLEDGE,
	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_GRASS,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_SIMISEAR] =
    {
        .move = MOVE_FIRE_PLEDGE,
	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_SUN,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SIMIPOUR] =
    {
        .move = MOVE_WATER_PLEDGE,
	.modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_WEATHER_RAIN,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
	
    [SPECIES_MUSHARNA] =
    {
        .move = MOVE_STRANGE_STEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_POISON,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_UNFEZANT] =
    {
        .move = MOVE_AIR_CUTTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_EVASION,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ZEBSTRIKA] =
    {
        .move = MOVE_THUNDEROUS_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_GIGALITH] =
    {
        .move = MOVE_ROCK_THROW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_STEALTH_ROCK,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		

    [SPECIES_SWOOBAT] =
    {
        .move = MOVE_HEART_STAMP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,
        .modification4 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable4 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance4 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_EXCADRILL] =
    {
        .move = MOVE_DRILL_RUN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_AUDINO] =
    {
        .move = MOVE_HYPER_VOICE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 20,	
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_STEEL,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CONKELDURR] =
    {
        .move = MOVE_BRICK_BREAK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_STEALTH_ROCK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SEISMITOAD] =
    {
        .move = MOVE_SURGING_STRIKES,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 20,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
	.chance3 = 10,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_THROH] =
    {
        .move = MOVE_STORM_THROW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_DEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SAWK] =
    {
        .move = MOVE_KARATE_CHOP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_LEAVANNY] =
    {
        .move = MOVE_LUNGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SCOLIPEDE] =
    {
        .move = MOVE_STEAMROLLER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_WHIMSICOTT] =
    {
        .move = MOVE_GRASS_KNOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 1,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable3 = STAT_SPEED,
        .modification4 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable4 = FIELD_SELF_SET_TAILWIND,
        .chance4 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_LILLIGANT] =
    {
        .move = MOVE_MAGICAL_LEAF,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_REMOVE_STAT_CHANGES,
        .chance3 = 100,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_CONDITION_TERRAIN_ANY,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BASCULIN] =
    {
        .move = MOVE_LIQUIDATION,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_KROOKODILE] =
    {
        .move = MOVE_PUNISHMENT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_DEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DARMANITAN] =
    {
        .move = MOVE_FLAME_CHARGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MARACTUS] =
    {
        .move = MOVE_ENERGY_BALL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_SPIKES,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CRUSTLE] =
    {
        .move = MOVE_ROCK_BLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SCRAFTY] =
    {
        .move = MOVE_LOW_SWEEP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SIGILYPH] =
    {
        .move = MOVE_PSYCHO_CUT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_COFAGRIGUS] =
    {
        .move = MOVE_ASTRAL_BARRAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_RUNERIGUS] =
    {
        .move = MOVE_SCORCHING_SANDS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CARRACOSTA] =
    {
        .move = MOVE_RAZOR_SHELL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ARCHEOPS] =
    {
        .move = MOVE_SMACK_DOWN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

 [SPECIES_GARBODOR] =
    {
        .move = MOVE_GUNK_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ZOROARK] =
    {
        .move = MOVE_THUNDEROUS_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CINCCINO] =
    {
        .move = MOVE_DOUBLE_SLAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GOTHITELLE] =
    {
        .move = MOVE_LUSTER_PURGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_REUNICLUS] =
    {
        .move = MOVE_MIST_BALL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SWANNA] =
    {
        .move = MOVE_AERIAL_ACE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SELF_SET_TAILWIND,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_VANILLUXE] =
    {
        .move = MOVE_ICE_BURN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SAWSBUCK] =
    {
        .move = MOVE_HORN_LEECH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_EMOLGA] =
    {
        .move = MOVE_ACROBATICS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_EVASION,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ESCAVALIER] =
    {
        .move = MOVE_SMART_STRIKE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_AMOONGUSS] =
    {
        .move = MOVE_CORROSIVE_GAS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_STEEL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_JELLICENT] =
    {
        .move = MOVE_SHADOW_BALL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GALVANTULA] =
    {
        .move = MOVE_ELECTROWEB,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_STICKY_WEB,
        .chance3 = 50,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_FERROTHORN] =
    {
        .move = MOVE_POWER_WHIP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_KLINKLANG] =
    {
        .move = MOVE_GEAR_GRIND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_EELEKTROSS] =
    {
        .move = MOVE_THUNDER_CAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_PHYSICAL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BEHEEYEM] =
    {
        .move = MOVE_PHOTON_GEYSER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CHANDELURE] =
    {
        .move = MOVE_BLUE_FLARE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_HAXORUS] =
    {
        .move = MOVE_DUAL_CHOP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 15,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BEARTIC] =
    {
        .move = MOVE_WILD_CHARGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ICE,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CRYOGONAL] =
    {
        .move = MOVE_SHEER_COLD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 40,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ACCELGOR] =
    {
        .move = MOVE_INFESTATION,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ACC,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable4 = STAT_EVASION,
        .chance4 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_STUNFISK] =
    {
        .move = MOVE_MUD_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MIENSHAO] =
    {
        .move = MOVE_FORCE_PALM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_DEFENSE_STAT,
        .variable4 = STAT_SPDEF,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRUDDIGON] =
    {
        .move = MOVE_DRAGON_CLAW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GOLURK] =
    {
        .move = MOVE_SHADOW_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BISHARP] =
    {
        .move = MOVE_CUT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BOUFFALANT] =
    {
        .move = MOVE_HEAD_CHARGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 30,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_FAIRY,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BRAVIARY] =
    {
        .move = MOVE_SKY_DROP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MANDIBUZZ] =
    {
        .move = MOVE_BONE_RUSH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPEED,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_HEATMOR] =
    {
        .move = MOVE_INFERNO,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 90,
        .modification4 = SIGNATURE_MOD_PRIORITY,
        .variable4 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DURANT] =
    {
        .move = MOVE_IRON_HEAD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_HYDREIGON] =
    {
        .move = MOVE_OUTRAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 50,
        .modification4 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable4 = FIELD_OPPONET_SET_SPIKES,
        .chance4 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_VOLCARONA] =
    {
        .move = MOVE_FIERY_DANCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MELOETTA] =
    {
        .move = MOVE_JUMP_KICK,	
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,	
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    }, 

    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .move = MOVE_JUMP_KICK,	
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,		
	.modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_PHYSICAL,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    }, 


    [SPECIES_CHESNAUGHT] =
    {
        .move = MOVE_SUBMISSION,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DELPHOX] =
    {
        .move = MOVE_FUSION_FLARE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GRENINJA] =
    {
        .move = MOVE_WATER_SHURIKEN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_DIGGERSBY] =
    {
        .move = MOVE_BULLDOZE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_TALONFLAME] =
    {
        .move = MOVE_HEAT_WAVE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_VIVILLON] =
    {
        .move = MOVE_BUZZY_BUZZ,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_BUG,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_PYROAR] =
    {
        .move = MOVE_BLAST_BURN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_FLORGES] =
    {
        .move = MOVE_MOONBLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPDEF,
	.chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GOGOAT] =
    {
        .move = MOVE_GRASSY_GLIDE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_GRASS,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_PANGORO] =
    {
        .move = MOVE_PARTING_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_FURFROU] =
    {
        .move = MOVE_BADDY_BAD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .modification4 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable4 = TYPE_NORMAL,			
        .modification5 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable5 = TYPE_GHOST,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MEOWSTIC] =
    {
        .move = MOVE_FREEZING_GLARE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MEOWSTIC_FEMALE] =
    {
        .move = MOVE_FREEZING_GLARE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_AEGISLASH] =
    {
        .move = MOVE_SACRED_SWORD,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPATK,
        .chance3 = 25,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_AROMATISSE] =
    {
        .move = MOVE_SPARKLY_SWIRL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SLURPUFF] =
    {
        .move = MOVE_PLAY_ROUGH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_DEF,
	.chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MALAMAR] =
    {
        .move = MOVE_FALSE_SURRENDER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
	.chance3 = 25,
        .modification4 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable4 = STAT_SPATK,
	.chance4 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BARBARACLE] =
    {
        .move = MOVE_ROCK_SLIDE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRAGALGE] =
    {
        .move = MOVE_DRAGON_RUSH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CLAWITZER] =
    {
        .move = MOVE_WATER_PULSE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_HELIOLISK] =
    {
        .move = MOVE_PARABOLIC_CHARGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_TYRANTRUM] =
    {
        .move = MOVE_METEOR_MASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_ROCK,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_AURORUS] =
    {
        .move = MOVE_GLACIATE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 10,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_HAWLUCHA] =
    {
        .move = MOVE_FLYING_PRESS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
	.chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DEDENNE] =
    {
        .move = MOVE_GLITZY_GLOW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_ELECTRIC,	
        .chance3 = 50,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GOODRA] =
    {
        .move = MOVE_DRAGON_ENERGY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
	.variable3 = FIELD_SELF_SET_TAILWIND,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_KLEFKI] =
    {
        .move = MOVE_FAIRY_LOCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_TREVENANT] =
    {
        .move = MOVE_FORESTS_CURSE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
	.chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GHOST,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GOURGEIST] =
    {
        .move = MOVE_TRICK_OR_TREAT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPDEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_AVALUGG] =
    {
        .move = MOVE_ICICLE_CRASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .modification4 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable4 = STAT_DEF,
        .chance4 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_NOIVERN] =
    {
        .move = MOVE_AIR_SLASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .modification4 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable4 = STAT_ATK,
        .chance4 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DIANCIE] =
    {
        .move = MOVE_DIAMOND_STORM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 40,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_HOOPA] =
    {
        .move = MOVE_HYPERSPACE_HOLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_TYPE,
        .variable3 = TYPE_GHOST,
        .differentDescription = TRUE,
        .description = _( 
            "Warps to hit foes with Protect.\n"
            "It never misses."),
    },	

    [SPECIES_VOLCANION] =
    {
        .move = MOVE_STEAM_ERUPTION,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	


    [SPECIES_DECIDUEYE] =
    {
        .move = MOVE_OBLIVION_WING,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_INCINEROAR] =
    {
        .move = MOVE_THROAT_CHOP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_PRIMARINA] =
    {
        .move = MOVE_SPARKLING_ARIA,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_TOUCANNON] =
    {
        .move = MOVE_BEAK_BLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_DEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_GUMSHOOS] =
    {
        .move = MOVE_FACADE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_DEF,
        .chance3 = 25,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_VIKAVOLT] =
    {
        .move = MOVE_RISING_VOLTAGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_DEF,
        .chance3 = 25,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
	
    [SPECIES_CRABOMINABLE] =
    {
        .move = MOVE_ICE_HAMMER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 30,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ORICORIO] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ORICORIO_POM_POM] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ORICORIO_PA_U] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_SLEEP,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ORICORIO_SENSU] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_RIBOMBEE] =
    {
        .move = MOVE_POLLEN_PUFF,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_MISTY,	
        .chance3 = 50,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_LYCANROC] =
    {
        .move = MOVE_ACCELEROCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_OPPONET_SET_STEALTH_ROCK,	
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_WISHIWASHI] =
    {
        .move = MOVE_BRINE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_TOXAPEX] =
    {
        .move = MOVE_PIN_MISSILE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_POISON,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_MUDSDALE] =
    {
        .move = MOVE_HIGH_HORSEPOWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ARAQUANID] =
    {
        .move = MOVE_BUG_BITE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_LURANTIS] =
    {
        .move = MOVE_SOLAR_BLADE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_SHIINOTIC] =
    {
        .move = MOVE_LIGHT_OF_RUIN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 =  SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_SALAZZLE] =
    {
        .move = MOVE_BURNING_JEALOUSY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_BEWEAR] =
    {
        .move = MOVE_SUPERPOWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_TSAREENA] =
    {
        .move = MOVE_TROP_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_COMFEY] =
    {
        .move = MOVE_NATURES_MADNESS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ORANGURU] =
    {
        .move = MOVE_MIND_BLOWN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_PASSIMIAN] =
    {
        .move = MOVE_CLOSE_COMBAT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_GOLISOPOD] =
    {
        .move = MOVE_FIRST_IMPRESSION,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_PALOSSAND] =
    {
        .move = MOVE_SAND_TOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 =  FIELD_SET_WEATHER_SANDSTORM,
        .chance3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_PYUKUMUKU] =
    {
        .move = MOVE_SPIKE_CANNON,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 =  FIELD_OPPONET_SET_TOXIC_SPIKES,
        .chance3 = 10,		
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_POISON,		
        .modification5 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable5 = TYPE_DRAGON,		
        .modification6 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable6 = TYPE_ROCK,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_SILVALLY] =
    {
        .move = MOVE_MULTI_ATTACK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_MINIOR] =
    {
        .move = MOVE_METEOR_ASSAULT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_FLYING,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_KOMALA] =
    {
        .move = MOVE_SLAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_TURTONATOR] =
    {
        .move = MOVE_SHELL_TRAP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPDEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_TOGEDEMARU] =
    {
        .move = MOVE_GYRO_BALL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_MIMIKYU] =
    {
        .move = MOVE_DOOM_DESIRE,
 	.modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_SPEED,
        .chance3 = 50,
        .modification4 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable4 = STAT_ATK,
        .chance4 = 50,
        .modification5 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable5 = STAT_DEF,
        .chance5 = 50,
        .modification6 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable6 = STAT_SPATK,
        .chance6 = 50,
        .modification7 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable7 = STAT_SPDEF,
        .chance7 = 50,
        .modification8 = SIGNATURE_MOD_PRIORITY,
        .variable8 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BRUXISH] =
    {
        .move = MOVE_PSYCHIC_FANGS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRAMPA] =
    {
        .move = MOVE_TWISTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_DHELMISE] =
    {
        .move = MOVE_ANCHOR_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GHOST,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_KOMMO_O] =
    {
        .move = MOVE_SCALE_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_DEF,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_MARSHADOW] =
    {
        .move = MOVE_SPECTRAL_THIEF,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_NAGANADEL] =
    {
        .move = MOVE_VENOM_DRENCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_MELMETAL] =
    {
        .move = MOVE_DOUBLE_IRON_BASH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },

    [SPECIES_RILLABOOM] =
    {
        .move = MOVE_DRUM_BEATING,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_CINDERACE] =
    {
        .move = MOVE_PYRO_BALL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_INTELEON] =
    {
        .move = MOVE_SNIPE_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_GREEDENT] =
    {
        .move = MOVE_BULLET_SEED,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 10,		
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_NORMAL,
        .modification5 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable5 = TYPE_WATER,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_CORVIKNIGHT] =
    {
        .move = MOVE_STEEL_WING,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ORBEETLE] =
    {
        .move = MOVE_PSYSHOCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_THIEVUL] =
    {
        .move = MOVE_THIEF,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_ELDEGOSS] =
    {
        .move = MOVE_SHOCK_WAVE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 0,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance3 = 20,		
        .modification4 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable4 = FIELD_SET_TERRAIN_GRASS,
        .chance4 = 10,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },		
 
    [SPECIES_DUBWOOL] =
    {
        .move = MOVE_ROCK_CLIMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_DREDNAW] =
    {
        .move = MOVE_CLAMP,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,	
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_BOLTUND] =
    {
        .move = MOVE_THUNDER_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_COALOSSAL] =
    {
        .move = MOVE_TAR_SHOT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_ACC,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_FLAPPLE] =
    {
        .move = MOVE_GRAV_APPLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	
 
    [SPECIES_APPLETUN] =
    {
        .move = MOVE_APPLE_ACID,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SILICOBRA] =
    {
        .move = MOVE_BIND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 100,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GROUND,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_SANDACONDA] =
    {
        .move = MOVE_BIND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 25,
        .modification4 = SIGNATURE_MOD_TYPE,
        .variable4 = TYPE_GROUND,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CRAMORANT] =
    {
        .move = MOVE_DIVE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,		
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_BARRASKEWDA] =
    {
        .move = MOVE_AQUA_JET,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification4 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable4 = FIELD_SET_WEATHER_RAIN,
        .chance4 = 30,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_TOXTRICITY] =
    {
        .move = MOVE_OVERDRIVE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_CENTISKORCH] =
    {
        .move = MOVE_FIRE_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GRAPPLOCT] =
    {
        .move = MOVE_OCTOLOCK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_POLTEAGEIST] =
    {
        .move = MOVE_TEATIME,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,	
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPEED,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_HATTERENE] =
    {
        .move = MOVE_MISTY_EXPLOSION,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 95,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_GRIMMSNARL] =
    {
        .move = MOVE_SPIRIT_BREAK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ALCREMIE] =
    {
        .move = MOVE_FLEUR_CANNON,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_FALINKS] =
    {
        .move = MOVE_BODY_PRESS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 30,
        .modification4 =  SIGNATURE_MOD_DEFENSE_STAT,
	.variable4 = STAT_ATK,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_PINCURCHIN] =
    {
        .move = MOVE_BOLT_STRIKE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_FROSMOTH] =
    {
        .move = MOVE_ICY_WIND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 10,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_STONJOURNER] =
    {
        .move = MOVE_ROCK_TOMB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_DEF,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_EISCUE] =
    {
        .move = MOVE_ICE_BEAM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_INDEEDEE] =
    {
        .move = MOVE_DISARMING_VOICE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_SPATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_INDEEDEE_FEMALE] =
    {
        .move = MOVE_DISARMING_VOICE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
	.variable3 = STAT_ATK,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_MORPEKO] =
    {
        .move = MOVE_AURA_WHEEL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
	.variable3 = STAT_ATK,
        .chance3 = 25,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_COPPERAJAH] =
    {
        .move = MOVE_STEEL_ROLLER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRACOZOLT] =
    {
        .move = MOVE_BOLT_BEAK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 75,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ARCTOZOLT] =
    {
        .move = MOVE_GLACIAL_LANCE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 75,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRACOVISH] =
    {
        .move = MOVE_SPACIAL_REND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 75,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_ARCTOVISH] =
    {
        .move = MOVE_FISHIOUS_REND,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 75,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DURALUDON] =
    {
        .move = MOVE_BREAKING_SWIPE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable3 = 40,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_DRAGAPULT] =
    {
        .move = MOVE_DRAGON_DARTS,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_REMOVE_STAT_CHANGES,
        .chance3 = 50,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

    [SPECIES_URSHIFU] =
    {
        .move = MOVE_WICKED_BLOW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ACCURACY,
        .variable2 = 90,		
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
	.variable3 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance3 = 20,
        .differentDescription = TRUE,
        .description = _( 
            "123456789012345678901234567890"
            "123456789012345678901234567890"),
    },	

};
