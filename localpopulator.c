#region Static Var
	var Static_0 = 0;
	var Static_1 = 0;
	int Static_2 = 0;
	int Static_3 = 0;
	int Static_4 = 0;
	int Static_5 = 0;
	int Static_6 = 0;
	int Static_7 = 0;
	int Static_8 = 0;
	int Static_9 = 0;
	int Static_10 = 0;
	int Static_11 = 0;
	float Static_12 = 0f;
	var Static_13 = 0;
	var Static_14 = 0;
	int Static_15 = 0;
	var Static_16 = 0;
	var Static_17 = 0;
	int Static_18 = 0;
	bool Static_19 = 0;
	int Static_20 = 0;
	int Static_21 = 0;
	int Static_22 = 0;
	var Static_23 = 80;
	var Static_24 = 0;
	var Static_25 = 0;
	var Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	var Static_29 = 0;
	var Static_30 = 0;
	var Static_31 = 0;
	var Static_32 = 0;
	var Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	var Static_37 = 0;
	var Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	var Static_61 = 0;
	var Static_62 = 0;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 0;
	var Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	var Static_83 = 0;
	var Static_84 = 0;
	var Static_85 = 0;
	var Static_86 = 0;
	var Static_87 = 0;
	var Static_88 = 0;
	var Static_89 = 0;
	var Static_90 = 0;
	var Static_91 = 0;
	var Static_92 = 0;
	var Static_93 = 0;
	var Static_94 = 0;
	var Static_95 = 0;
	var Static_96 = 0;
	var Static_97 = 0;
	var Static_98 = 0;
	var Static_99 = 0;
	var Static_100 = 0;
	var Static_101 = 0;
	var Static_102 = 0;
	var Static_103 = 0;
#endregion

void main() // Position - 0x0
{
	Static_2 = 1;
	Static_3 = 134;
	Static_4 = 134;
	Static_5 = 1;
	Static_6 = 1;
	Static_7 = 1;
	Static_8 = 134;
	Static_9 = 1;
	Static_10 = 12;
	Static_11 = 12;
	Static_12 = 0.001f;
	Static_15 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_1();
	}
}

void func_1() // Position - 0x49
{
	if (Global_1836651 == false || Global_1836651 == 5)
		Static_18 = 3;

	switch (Static_18)
	{
		case 0:
			func_152();
			break;
	
		case 1:
			func_12();
			break;
	
		case 2:
			func_6();
			break;
	
		case 3:
			func_2();
			break;
	}
}

void func_2() // Position - 0xA4
{
	int iVar0;

	GRAPHICS::DRAW_DEBUG_TEXT_2D("LPOP_STATE_CLEANUP", func_5(), 0, 0, 255, 255);

	if (Static_22 > MISC::GET_FRAME_COUNT())
		return;

	Static_22 = MISC::GET_FRAME_COUNT() + 1;

	for (iVar0 = Static_20 - 1; iVar0 >= 0; iVar0 = iVar0 + -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Static_23[iVar0]))
			ENTITY::DELETE_ENTITY(&Static_23[iVar0]);
	
		Static_20 = Static_20 - 1;
	
		if (Static_20 == 0)
			break;
	}

	if (Static_20 > 0)
		return;

	switch (Static_19)
	{
		case true:
			func_3();
			break;
	}

	Global_1836651 = false;
	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		Global_1836647[iVar0] = 0;
	}

	Global_1836646 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3() // Position - 0x153
{
	func_4(false);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area");
}

void func_4(bool bParam0) // Position - 0x167
{
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", bParam0);
	AUDIO::LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_03", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_04", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_05", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_Takeover", bParam0);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG", bParam0, 1);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG_2", bParam0, 1);

	if (bParam0)
	{
		AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
		AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTC");
		AUDIO::STOP_AUDIO_SCENE("MP_POSITIONED_RADIO_MUTE_SCENE");
		AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTC", 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_01", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_02", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_03", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_04", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_05", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, 0);
	}
	else
	{
		AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
	}
}

Vector3 func_5() // Position - 0x24F
{
	return 0f, 0f, 0f;
}

void func_6() // Position - 0x25A
{
	void* pVar0;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_MISSION_CREATOR")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_MISSION_CONTROLLER_2020")) == 0)
		Static_18 = 3;

	if (IS_BIT_SET(Global_1836646, 1))
		return;

	switch (Static_19)
	{
		case false:
			Static_18 = 3;
			break;
	
		case true:
			pVar0 = &func_8;
			break;
	
		case 2:
		case 3:
		case 4:
			MISC::SET_BIT(&Global_1836646, 1);
			break;
	}

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		while (!IS_BIT_SET(Global_1836646, 1) && pVar0 != &main)
		{
			pVar0(&Static_23, &Static_21);
			BUILTIN::WAIT(0);
		}
	
		return;
	}

	if (pVar0 == &main)
		return;

	if (Static_22 > MISC::GET_FRAME_COUNT())
		return;

	Static_22 = MISC::GET_FRAME_COUNT() + 1;

	if (func_7(&Global_1836647, Static_21))
	{
		Static_21 = Static_21 + 1;
		return;
	}

	pVar0(&Static_23, &Static_21);
}

bool func_7(var uParam0, int iParam1) // Position - 0x33F
{
	return IS_BIT_SET(uParam0->[iParam1 / 32], iParam1 & 31);
}

void func_8(var uParam0, var uParam1) // Position - 0x356
{
	var uVar0;
	var uVar1;

	if (*uParam1 > 74)
		return;

	if (*uParam1 == 0 && !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area", 0, -1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[*uParam1]) || ENTITY::IS_ENTITY_DEAD(uParam0->[*uParam1], 0))
	{
		*uParam1 = *uParam1 + 1;
		return;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->[*uParam1]))
	{
		uVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->[*uParam1]);
	
		if (*uParam1 == 10 || *uParam1 == 11 || *uParam1 == 12 || *uParam1 == 14 || *uParam1 == 15 || *uParam1 == 16 || *uParam1 == 17 || *uParam1 == 18 || *uParam1 == 19 || *uParam1 == 20 || *uParam1 == 21 || *uParam1 == 22 || *uParam1 == 23 || *uParam1 == 24 || *uParam1 == 26 || *uParam1 == 27)
			VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 1, 1, 0);
	
		if (*uParam1 == 22)
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->[*uParam1], 1);
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0->[*uParam1]))
	{
		uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->[*uParam1]);
	
		if (*uParam1 == 28)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 29)
		{
			if (!func_10(uVar1, "anim@amb@carmeet@checkout_car@female_b@idles", "idle_a", *uParam1))
				return;
		}
		else if (*uParam1 == 44)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 42)
		{
			if (!func_10(uVar1, "anim@heists@prison_heiststation@cop_reactions", "drunk_idle", *uParam1))
				return;
		}
		else if (*uParam1 == 31)
		{
			if (!func_10(uVar1, "anim@amb@carmeet@take_photos@female_b@idles", "idle_b", *uParam1))
				return;
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->[74]))
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->[74], uVar1, PED::GET_PED_BONE_INDEX(uVar1, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
		}
		else if (*uParam1 == 49)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 53)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			else
				return;
		}
		else if (*uParam1 == 55)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 60)
		{
			func_11(uVar1, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 36)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			else
				return;
		}
		else if (*uParam1 == 37)
		{
			if (!func_10(uVar1, "amb@world_human_hang_out_street@male_b@idle_a", "idle_a", *uParam1))
				return;
		}
		else if (*uParam1 == 38)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 63)
		{
			func_11(uVar1, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 40)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 41)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 67)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 43)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 45)
		{
			func_11(uVar1, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 46)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 47)
		{
			func_11(uVar1, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 48)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 30)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 50)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 51)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 52)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 32)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			else
				return;
		}
		else if (*uParam1 == 54)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 33)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 56)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 57)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			else
				return;
		}
		else if (*uParam1 == 58)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 59)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 34)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->[9]))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->[9], uVar1, 0);
			
				if (!func_10(uVar1, "amb@world_human_seat_wall@male@hands_by_sides@idle_a", "idle_a", *uParam1))
					return;
			}
			else
			{
				func_9(uVar1, *uParam1);
			}
		}
		else if (*uParam1 == 66)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 39)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 68)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING_POT", *uParam1);
		}
		else
		{
			func_9(uVar1, *uParam1);
		}
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->[*uParam1]))
	{
		if (*uParam1 == 69)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_01", uParam0->[*uParam1]);
		else if (*uParam1 == 70)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_02", uParam0->[*uParam1]);
		else if (*uParam1 == 71)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_03", uParam0->[*uParam1]);
		else if (*uParam1 == 72)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_04", uParam0->[*uParam1]);
		else if (*uParam1 == 73)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_05", uParam0->[*uParam1]);
	
		if (*uParam1 > 68 && *uParam1 < 74)
		{
			ENTITY::SET_ENTITY_COLLISION(uParam0->[*uParam1], 0, 0);
			ENTITY::SET_ENTITY_ALPHA(uParam0->[*uParam1], 0, 0);
		}
	}

	*uParam1 = *uParam1 + 1;

	if (*uParam1 >= 74)
	{
		func_4(true);
		MISC::SET_BIT(&Global_1836646, 1);
	}
}

void func_9(var uParam0, var uParam1) // Position - 0xA94
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 9))
	{
		case 1:
			func_11(uParam0, "WORLD_HUMAN_AA_COFFEE", uParam1);
			break;
	
		case 2:
			func_11(uParam0, "WORLD_HUMAN_AA_SMOKE", uParam1);
			break;
	
		case 3:
			func_11(uParam0, "WORLD_HUMAN_DRINKING", uParam1);
			break;
	
		case 4:
			func_11(uParam0, "WORLD_HUMAN_DRINKING_FACILITY", uParam1);
			break;
	
		case 5:
			func_11(uParam0, "WORLD_HUMAN_SMOKING", uParam1);
			break;
	
		case 6:
			func_11(uParam0, "WORLD_HUMAN_SMOKING_CLUBHOUSE", uParam1);
			break;
	
		case 7:
			func_11(uParam0, "WORLD_HUMAN_SMOKING_POT", uParam1);
			break;
	
		case 8:
			func_11(uParam0, "WORLD_HUMAN_STAND_IMPATIENT", uParam1);
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, var uParam3) // Position - 0xB58
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, sParam1, sParam2, 1))
		return true;

	STREAMING::REQUEST_ANIM_DICT(sParam1);

	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam1))
	{
		TASK::TASK_PLAY_ANIM(uParam0, sParam1, sParam2, 8f, -8f, -1, 9, 0, 0, 0, 0);
		return true;
	}

	return false;
}

bool func_11(var uParam0, char* sParam1, var uParam2) // Position - 0xBA1
{
	bool bVar0;

	bVar0 = PED::IS_PED_USING_SCENARIO(uParam0, sParam1);

	if (!bVar0)
		TASK::TASK_START_SCENARIO_IN_PLACE(uParam0, sParam1, 0, 1);

	return bVar0;
}

void func_12() // Position - 0xBC5
{
	int iVar0;
	void* pVar10;
	void* pVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	iVar0.f_6 = -1;
	iVar0.f_7 = -1;
	iVar0.f_8 = -1;

	switch (Static_19)
	{
		case true:
			pVar10 = &func_151;
			pVar11 = &func_59;
			break;
	
		case 2:
			pVar10 = &func_58;
			pVar11 = &main;
			break;
	
		case 3:
			pVar10 = &func_57;
			pVar11 = &main;
			break;
	
		case 4:
			pVar10 = &func_16;
			pVar11 = &main;
			break;
	}

	Static_22 = MISC::GET_FRAME_COUNT();
	bVar12 = false;

	while (Static_20 < 80)
	{
		if (func_7(&Global_1836647, Static_20))
		{
			Static_20 = Static_20 + 1;
		}
		else if (Static_22 > MISC::GET_FRAME_COUNT())
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (iVar14 == 0)
				iVar14 = NETWORK::GET_NETWORK_TIME();
		
			pVar10(&iVar0, Static_20);
		
			if (!StackVal)
				break;
		
			if (iVar0 == 0)
			{
				func_15(&iVar0);
				func_14(&Global_1836647, Static_21);
				Static_20 = Static_20 + 1;
			}
			else
			{
				iVar13 = Static_20;
				bVar12 = func_13(&iVar0);
			
				if (!bVar12)
				{
					BUILTIN::WAIT(0);
				}
				else
				{
					func_15(&iVar0);
				
					if (pVar11 != &main)
						pVar11(iVar13, &Static_23[iVar13]);
				
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
						if (Static_20 != 0 && iVar14 != 0 && Static_20 % 2 == 0)
							Static_22 = MISC::GET_FRAME_COUNT() + 1;
				
					iVar14 = 0;
				}
			}
		}
	}

	MISC::SET_BIT(&Global_1836646, 0);
	Static_21 = 0;
	Static_18 = 2;
}

bool func_13(var uParam0) // Position - 0xD1E
{
	var uVar0;
	var uVar1;
	var uVar2;

	if (!STREAMING::IS_MODEL_VALID(uParam0->f_1))
	{
		Static_20 = Static_20 + 1;
		return 1;
	}

	if (!STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_1))
	{
		Static_20 = Static_20 + 1;
		return 1;
	}

	STREAMING::REQUEST_MODEL(uParam0->f_1);

	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
		return 0;

	if (*uParam0 == 1)
	{
		if (uParam0->f_6 != -1 && ENTITY::DOES_ENTITY_EXIST(Static_23[uParam0->f_6]) && ENTITY::IS_ENTITY_A_VEHICLE(Static_23[uParam0->f_6]))
			uVar0 = PED::CREATE_PED_INSIDE_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Static_23[uParam0->f_6]), 26, uParam0->f_1, uParam0->f_7, 0, 0);
		else
			uVar0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_2, uParam0->f_5, 0, 0);
	
		PED::SET_PED_TREATED_AS_FRIENDLY(uVar0, 1, 1);
		PED::SET_PED_CONFIG_FLAG(uVar0, 150, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(uVar0, 512, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(uVar0, 1024, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(uVar0, 32768, 1);
		Static_23[Static_20] = uVar0;
	}

	if (*uParam0 == 2)
	{
		uVar1 = VEHICLE::CREATE_VEHICLE(uParam0->f_1, uParam0->f_2, uParam0->f_5, 0, 0, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(uVar1, 3);
		Static_23[Static_20] = uVar1;
	}

	if (*uParam0 == 3)
	{
		uVar2 = OBJECT::CREATE_OBJECT(uParam0->f_1, uParam0->f_2, 0, 0, 0);
		ENTITY::SET_ENTITY_HEADING(uVar2, uParam0->f_5);
		Static_23[Static_20] = uVar2;
	
		if (uParam0->f_8 != -1)
			OBJECT::SET_OBJECT_TINT_INDEX(uVar2, uParam0->f_8);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(Static_23[Static_20]))
		return 0;

	ENTITY::SET_ENTITY_INVINCIBLE(Static_23[Static_20], 1, 0);

	if (uParam0->f_6 == -1)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Static_23[Static_20], uParam0->f_2, 0, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Static_23[Static_20], 1);
	}

	if (uParam0->f_9)
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);

	Static_20 = Static_20 + 1;
	return 1;
}

void func_14(var uParam0, int iParam1) // Position - 0xED2
{
	MISC::SET_BIT(&uParam0->[iParam1 / 32], iParam1 & 31);
}

void func_15(var uParam0) // Position - 0xEEC
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = { 0f, 0f, 0f };
	uParam0->f_5 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
}

int func_16(var uParam0, int iParam1) // Position - 0xF1F
{
	return func_17(uParam0, iParam1, 1);
}

int func_17(var uParam0, int iParam1, int iParam2) // Position - 0xF30
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (iParam1 >= 20)
		return 0;

	switch (iParam2)
	{
		case 2:
			iVar0 = 178;
			break;
	
		case 3:
			iVar0 = 179;
			break;
	
		case 1:
			iVar0 = 177;
			break;
	
		default:
			return 0;
	}

	iVar1 = func_44(func_56(iVar0), -1);

	if (!func_43(iParam1, 0, 607, false))
		return 0;

	bVar3 = iVar1 + iParam1;
	func_42(bVar3, &iVar2, false);

	if (iVar2 == -1)
	{
		*uParam0 = 0;
		return 1;
	}

	if (IS_BIT_SET(Global_1583772[iVar2 /*143*/].f_104, 0) || IS_BIT_SET(Global_1583772[iVar2 /*143*/].f_104, 1) || IS_BIT_SET(Global_1583772[iVar2 /*143*/].f_104, 6))
	{
		*uParam0 = 0;
		return 1;
	}

	if (IS_BIT_SET(Global_1583772[iVar2 /*143*/].f_104, 27) || func_26(iVar0, bVar3))
	{
		*uParam0 = 0;
		return 1;
	}

	iVar4 = func_23(Global_1583772[iVar2 /*143*/].f_66);

	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 1;
	}

	*uParam0 = 3;
	uParam0->f_1 = iVar4;

	if (iVar4 == joaat("M25_2_PROP_M52_VEHICLE_COVER"))
		uParam0->f_8 = 3;

	uParam0->f_2 = { func_21(iParam1, iVar4, iVar0) };
	uParam0->f_5 = func_18(iParam1, iVar4, iVar0);
	uParam0->f_9 = 1;
	return 1;
}

float func_18(int iParam0, int iParam1, int iParam2) // Position - 0x1072
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = 0f;
	fVar1 = func_19(iParam2, iParam0 < 10 ? 1 : 2);

	switch (iParam0)
	{
		case 0:
			fVar0 = 270.0977f;
			break;
	
		case 1:
			fVar0 = 269.9389f;
			break;
	
		case 2:
			fVar0 = 269.9331f;
			break;
	
		case 3:
			fVar0 = 269.9795f;
			break;
	
		case 4:
			fVar0 = 269.9351f;
			break;
	
		case 5:
			fVar0 = 269.9319f;
			break;
	
		case 6:
			fVar0 = 269.9535f;
			break;
	
		case 7:
			fVar0 = 269.9371f;
			break;
	
		case 8:
			fVar0 = 269.9372f;
			break;
	
		case 9:
			fVar0 = 123.9779f;
			break;
	
		case 10:
			fVar0 = 269.9379f;
			break;
	
		case 11:
			fVar0 = 269.9826f;
			break;
	
		case 12:
			fVar0 = 269.9833f;
			break;
	
		case 13:
			fVar0 = 269.933f;
			break;
	
		case 14:
			fVar0 = 269.9367f;
			break;
	
		case 15:
			fVar0 = 269.9321f;
			break;
	
		case 16:
			fVar0 = 269.9366f;
			break;
	
		case 17:
			fVar0 = 269.9326f;
			break;
	
		case 18:
			fVar0 = 269.9318f;
			break;
	
		case 19:
			fVar0 = 123.9805f;
			break;
	}

	switch (iParam1)
	{
		case 690729399:
		case joaat("M25_2_PROP_M52_BIKECOVER_01A"):
			fVar0 = fVar0 + 180f;
			break;
	}

	for (fVar2 = fVar0 + fVar1; fVar2 < 0f; fVar2 = fVar2 + 360f)
	{
	}

	while (fVar2 >= 360f)
	{
		fVar2 = fVar2 - 360f;
	}

	return fVar2;
}

float func_19(int iParam0, int iParam1) // Position - 0x122C
{
	switch (iParam0)
	{
		case 177:
			return -84.083f;
	
		case 178:
			return 17.77f;
	
		case 179:
			return -51.69f;
	}

	return 0f;
}

var func_20(bool bParam0, var uParam1, var uParam2) // Position - 0x126F
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Vector3 func_21(int iParam0, int iParam1, int iParam2) // Position - 0x1286
{
	var uVar0;
	bool bVar3;
	var uVar4;
	float fVar7;

	bVar3 = iParam1 == joaat("IMP_PROP_COVERED_VEHICLE_03A") || iParam1 == joaat("M25_2_PROP_M52_VEHICLE_COVER");

	if (bVar3)
	{
		switch (iParam0)
		{
			case 0:
				uVar0 = { -4.5875f, -24.8865f, 0.6376f };
				break;
		
			case 1:
				uVar0 = { -4.5862f, -20.7417f, 0.6376f };
				break;
		
			case 2:
				uVar0 = { -4.5742f, -14.3925f, 0.6376f };
				break;
		
			case 3:
				uVar0 = { -4.5709f, -10.1505f, 0.6376f };
				break;
		
			case 4:
				uVar0 = { -4.5509f, 6.8381f, 0.6376f };
				break;
		
			case 5:
				uVar0 = { -4.5467f, 11.1438f, 0.6376f };
				break;
		
			case 6:
				uVar0 = { -4.5387f, 17.3683f, 0.6376f };
				break;
		
			case 7:
				uVar0 = { -4.5339f, 21.7255f, 0.6376f };
				break;
		
			case 8:
				uVar0 = { 2.9498f, 29.4998f, 0.6376f };
				break;
		
			case 9:
				uVar0 = { 8.9362f, 18.0617f, 0.6376f };
				break;
		
			case 10:
				uVar0 = { -4.5867f, -24.8895f, -4.0288f };
				break;
		
			case 11:
				uVar0 = { -4.5825f, -20.746f, -4.0288f };
				break;
		
			case 12:
				uVar0 = { -4.5744f, -14.3966f, -4.0288f };
				break;
		
			case 13:
				uVar0 = { -4.5712f, -10.1492f, -4.0288f };
				break;
		
			case 14:
				uVar0 = { -4.5506f, 6.8371f, -4.0288f };
				break;
		
			case 15:
				uVar0 = { -4.5453f, 11.1429f, -4.0288f };
				break;
		
			case 16:
				uVar0 = { -4.5384f, 17.37f, -4.0288f };
				break;
		
			case 17:
				uVar0 = { -4.5335f, 21.7262f, -4.0288f };
				break;
		
			case 18:
				uVar0 = { 2.9489f, 29.4989f, -4.0288f };
				break;
		
			case 19:
				uVar0 = { 8.9359f, 18.0618f, -4.0288f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				uVar0 = { -4.5875f, -24.8865f, 0.6376f };
				break;
		
			case 1:
				uVar0 = { -4.5862f, -20.7417f, 0.6376f };
				break;
		
			case 2:
				uVar0 = { -4.5742f, -14.3925f, 0.6376f };
				break;
		
			case 3:
				uVar0 = { -4.5709f, -10.1505f, 0.6376f };
				break;
		
			case 4:
				uVar0 = { -4.5509f, 6.8381f, 0.6376f };
				break;
		
			case 5:
				uVar0 = { -4.5467f, 11.1438f, 0.6376f };
				break;
		
			case 6:
				uVar0 = { -4.5387f, 17.3683f, 0.6376f };
				break;
		
			case 7:
				uVar0 = { -4.5339f, 21.7255f, 0.6376f };
				break;
		
			case 8:
				uVar0 = { 2.9498f, 29.4998f, 0.6376f };
				break;
		
			case 9:
				uVar0 = { 8.9362f, 18.0617f, 0.6376f };
				break;
		
			case 10:
				uVar0 = { -4.5867f, -24.8895f, -4.0288f };
				break;
		
			case 11:
				uVar0 = { -4.5825f, -20.746f, -4.0288f };
				break;
		
			case 12:
				uVar0 = { -4.5744f, -14.3966f, -4.0288f };
				break;
		
			case 13:
				uVar0 = { -4.5712f, -10.1492f, -4.0288f };
				break;
		
			case 14:
				uVar0 = { -4.5506f, 6.8371f, -4.0288f };
				break;
		
			case 15:
				uVar0 = { -4.5453f, 11.1429f, -4.0288f };
				break;
		
			case 16:
				uVar0 = { -4.5384f, 17.37f, -4.0288f };
				break;
		
			case 17:
				uVar0 = { -4.5335f, 21.7262f, -4.0288f };
				break;
		
			case 18:
				uVar0 = { 2.9489f, 29.4989f, -4.0288f };
				break;
		
			case 19:
				uVar0 = { 8.9359f, 18.0618f, -4.0288f };
				break;
		}
	}

	switch (iParam1)
	{
		case joaat("IMP_PROP_COVERED_VEHICLE_01A"):
			break;
	}

	uVar4 = { func_22(iParam2, iParam0 < 10 ? 0 : 1) };
	uVar0.f_2 = 0f;
	fVar7 = func_19(iParam2, iParam0 < 10 ? 1 : 2);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uVar4, fVar7, uVar0);
}

Vector3 func_22(int iParam0, int iParam1) // Position - 0x1767
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 177:
					return -2568.9338f, 1920.2028f, 155.51825f;
			
				case 178:
					return -1679.8766f, 493.596f, 117.36438f;
			
				case 179:
					return 548.6964f, 766.88684f, 190.50447f;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 177:
					return -2568.9338f, 1920.2028f, 151.08981f;
			
				case 178:
					return -1679.8766f, 493.596f, 112.93594f;
			
				case 179:
					return 548.6964f, 766.88684f, 186.07603f;
			}
			break;
	}

	return 0f, 0f, 0f;
}

int func_23(bool bParam0) // Position - 0x183B
{
	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(bParam0))
		return 0;

	if (func_25(bParam0))
		return joaat("IMP_PROP_COVERED_VEHICLE_04A");

	if (VEHICLE::IS_THIS_MODEL_A_BIKE(bParam0))
		return joaat("M25_2_PROP_M52_BIKECOVER_01A");

	if (func_24(bParam0))
		return joaat("IMP_PROP_COVERED_VEHICLE_03A");

	switch (bParam0)
	{
		case joaat("BTYPE"):
		case joaat("BTYPE2"):
		case joaat("BTYPE3"):
			return joaat("IMP_PROP_COVERED_VEHICLE_05A");
	
		case joaat("ZTYPE"):
			return joaat("IMP_PROP_COVERED_VEHICLE_06A");
	
		case joaat("HALFTRACK"):
		case joaat("INSURGENT3"):
		case joaat("INSURGENT"):
		case joaat("APC"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
		case joaat("BOXVILLE"):
		case joaat("ZHABA"):
			return joaat("M25_2_PROP_M52_VEHICLE_COVER");
	
		default:
		
	}

	switch (VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(bParam0))
	{
		case 0:
			return joaat("IMP_PROP_COVERED_VEHICLE_04A");
	
		case 1:
		case 18:
			return joaat("IMP_PROP_COVERED_VEHICLE_03A");
	
		case 2:
		case 19:
		case 9:
		case 12:
			return 690729399;
	
		case 3:
			return joaat("IMP_PROP_COVERED_VEHICLE_02A");
	
		case 4:
			return joaat("IMP_PROP_COVERED_VEHICLE_03A");
	
		case 5:
			return joaat("IMP_PROP_COVERED_VEHICLE_01A");
	
		case 6:
			return joaat("IMP_PROP_COVERED_VEHICLE_01A");
	
		case 7:
		case 22:
			return joaat("IMP_PROP_COVERED_VEHICLE_01A");
	
		case 8:
			return joaat("M25_2_PROP_M52_BIKECOVER_01A");
	
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 20:
		case 21:
			return joaat("M25_2_PROP_M52_VEHICLE_COVER");
	}

	return 0;
}

bool func_24(bool bParam0) // Position - 0x19F4
{
	switch (bParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	
		case joaat("POLGAUNTLET"):
		case joaat("PRANGER"):
		case joaat("POLICE5"):
		case joaat("POLIMPALER5"):
		case joaat("POLIMPALER6"):
		case joaat("POLGREENWOOD"):
		case joaat("POLDORADO"):
		case joaat("POLDOMINATOR10"):
		case joaat("POLTERMINUS"):
		case joaat("POLCARACARA"):
		case joaat("POLCOQUETTE4"):
		case joaat("POLFACTION2"):
		case joaat("POLICEB2"):
		case joaat("POLBUFFALO"):
		case joaat("POLBUFFALO6"):
			return true;
	}

	return false;
}

bool func_25(bool bParam0) // Position - 0x1AAE
{
	switch (bParam0)
	{
		case joaat("VETO"):
		case joaat("VETO2"):
			return true;
	
		default:
		
	}

	return false;
}

bool func_26(int iParam0, bool bParam1) // Position - 0x1ACE
{
	bool bVar0;
	int iVar1;

	bVar0 = func_28(false, false);
	iVar1 = func_27(iParam0) - 1;
	return bParam1 == Global_1882717[bVar0 /*315*/].f_158.f_43.f_7[iVar1] || bParam1 == Global_1882717[bVar0 /*315*/].f_158.f_43.f_11[iVar1] || bParam1 == Global_1882717[bVar0 /*315*/].f_158.f_43.f_15[iVar1];
}

int func_27(int iParam0) // Position - 0x1B36
{
	switch (iParam0)
	{
		case 177:
			return 1;
	
		case 178:
			return 2;
	
		case 179:
			return 3;
	
		default:
		
	}

	return 0;
}

bool func_28(bool bParam0, bool bParam1) // Position - 0x1B64
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_39(false))
		return PLAYER::PLAYER_ID();

	if (bParam0)
		if (!func_38(Global_1926084, false, true) || func_36(Global_1926084))
			return func_35();

	if (Global_1926084 == func_34())
	{
		if (Global_2686095.f_6524 != -1)
		{
			for (bVar0 = 0; bVar0 <= 31; bVar0 = bVar0 + 1)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
				{
				}
				else if (MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(bVar0)) == Global_2686095.f_6524)
				{
					return bVar0;
				}
			}
		}
	}

	if (func_30(PLAYER::PLAYER_ID(), 0) || func_29() || bParam1)
	{
		bVar1 = -1;
	
		for (iVar2 = 0; iVar2 <= 31; iVar2 = iVar2 + 1)
		{
			if (IS_BIT_SET(Global_1845299[iVar2 /*883*/].f_36.f_18, 14) || Global_1845299[iVar2 /*883*/].f_198 == 8)
			{
			}
			else if (Global_1845299[iVar2 /*883*/].f_57)
			{
				bVar1 = iVar2;
			}
		}
	
		if (bVar1 != -1)
			return bVar1;
	}

	return Global_1926084;
}

bool func_29() // Position - 0x1C71
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_30(bool bParam0, int iParam1) // Position - 0x1C8B
{
	bool bVar0;

	if (!func_33(bParam0))
		return false;

	if (bParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_31(-1, false) == 8;
	else
		bVar0 = Global_1845299[bParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;

	return bVar0;
}

bool func_31(bool bParam0, bool bParam1) // Position - 0x1CE4
{
	bool bVar0;
	bool bVar1;

	bVar1 = bParam0;

	if (bVar1 == -1)
		bVar1 = func_32();

	if (Global_1575072[bVar1] == true)
	{
		bParam1;
		bVar0 = 8;
	}
	else
	{
		bVar0 = Global_1574921[bVar1];
		bParam1;
	}

	return bVar0;
}

bool func_32() // Position - 0x1D25
{
	return Global_1574927;
}

bool func_33(bool bParam0) // Position - 0x1D31
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 < false)
		return false;

	if (bVar0 >= 32)
		return false;

	return true;
}

bool func_34() // Position - 0x1D53
{
	return -1;
}

bool func_35() // Position - 0x1D5C
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	for (iVar2 = 0; iVar2 <= 31; iVar2 = iVar2 + 1)
	{
		bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
	
		if (!func_38(bVar0, false, true))
		{
		}
		else if (func_36(bVar0))
		{
		}
		else
		{
			bVar1 = bVar0;
			break;
		}
	}

	return bVar1;
}

bool func_36(bool bParam0) // Position - 0x1DA3
{
	if (func_30(bParam0, 0))
		return true;

	if (func_37())
		if (bParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[bParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

bool func_37() // Position - 0x1DE2
{
	return IS_BIT_SET(Global_2621446, 3);
}

bool func_38(bool bParam0, bool bParam1, bool bParam2) // Position - 0x1DF0
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
					return false;
		
			if (bParam2)
				if (bVar0 == Global_2673274.f_3)
					return Global_2673274.f_2;
				else if (Global_2658294[bVar0 /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

bool func_39(bool bParam0) // Position - 0x1E50
{
	if (bParam0 && Global_1575064)
		if (func_40())
			return false;
		else
			return true;

	return Global_1575064;
}

bool func_40() // Position - 0x1E7C
{
	if (func_41())
		return true;

	return Global_1575067;
}

bool func_41() // Position - 0x1E97
{
	if (Global_1575064 || Global_1575070)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_DEATHMATCH_CONTROLER")) != 0)
			return true;

	return false;
}

void func_42(bool bParam0, var uParam1, bool bParam2) // Position - 0x1EC2
{
	if (Global_262145.f_10745 /* Tunable: MPSV_DISABLE_DISPLAY_SLOTS */)
		*uParam1 = bParam0;

	if (bParam0 >= false)
	{
		*uParam1 = Global_1944744[bParam0] - 1;
	
		if (bParam2)
			MISC::GET_FRAME_COUNT() % 5 == 0;
	}
	else
	{
		*uParam1 = -1;
	}
}

bool func_43(int iParam0, int iParam1, int iParam2, bool bParam3) // Position - 0x1F02
{
	if (bParam3)
		return iParam0 >= iParam1 && iParam0 <= iParam2;

	return iParam0 >= iParam1 && iParam0 < iParam2;
}

int func_44(int iParam0, int iParam1) // Position - 0x1F30
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
			return 88;
	
		case 9:
			return 108;
	
		case 10:
			return 128;
	
		case 11:
			return 148;
	
		case 6:
			return 65;
	
		case 7:
			return 75;
	
		case 5:
			return -1;
	
		case 12:
			if (iParam1 == 1)
				return 517;
			else if (iParam1 == 2)
				return 532;
		
			return 159;
	
		case 13:
			return 179;
	
		case 14:
			return 191;
	
		case 15:
			return 192;
	
		case 16:
			return 202;
	
		case 17:
			return 212;
	
		case 18:
			return 227;
	
		case 19:
			return 237;
	
		case 20:
			return 247;
	
		case 21:
			return 258;
	
		case 22:
			return 268;
	
		case 23:
			return 281;
	
		case 24:
			return 294;
	
		case 25:
			return 307;
	
		case 26:
			return 317;
	
		case 27:
			return 337;
	
		case 28:
			return 350;
	
		case 29:
			return 363;
	
		case 30:
			return 415;
	
		case 31:
			return 515;
	
		case 32:
			return 537;
	
		case 33:
			return 547;
	
		case 34:
			return 567;
	
		case 35:
			return 587;
	}

	if (func_55(iParam0))
	{
		iVar0 = func_54(iParam0);
		return func_53(iVar0);
	}

	return func_45(iParam0, -1, true) * iParam0;
}

int func_45(int iParam0, int iParam1, bool bParam2) // Position - 0x213F
{
	if (iParam0 == -1)
		if (iParam1 >= 1)
			if (func_49(iParam1, false, false))
				return 20;
			else if (func_48(iParam1))
				return 0;
			else if (func_47(iParam1, -1))
				return 10;
			else if (iParam1 == 115)
				return 8;
			else if (iParam1 == 116)
				return func_46();
			else if (iParam1 == 117)
				return 7;
			else if (iParam1 == 118)
				return 1;
			else if (iParam1 == 119 || iParam1 == 120 || iParam1 == 121)
				return 10;
			else if (iParam1 == 122)
				return 9;
			else if (iParam1 == 123 || iParam1 == 124)
				return 10;
			else if (iParam1 == 125)
				return 10;
			else if (iParam1 == 126)
				return 10;
			else if (iParam1 == 127)
				return 10;
			else if (iParam1 == 128)
				return 20;
			else if (iParam1 == 129)
				return 50;
			else if (iParam1 == 131)
				return 100;
			else if (iParam1 == 132)
				return 2;
			else if (iParam1 == 133)
				return 10;
			else if (iParam1 == 137 || iParam1 == 136 || iParam1 == 135)
				return 20;
			else if (iParam1 <= 131 && iParam1 > 0)
				if (Global_1312440[iParam1 /*1951*/].f_33 == 2)
					if (bParam2)
						return 3;
					else
						return 2;
				else if (Global_1312440[iParam1 /*1951*/].f_33 == 6)
					if (bParam2)
						return 8;
					else
						return 6;
				else if (Global_1312440[iParam1 /*1951*/].f_33 == 10)
					if (bParam2)
						return 13;
					else
						return 10;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
	
		case 5:
			return 0;
	
		case 6:
			return 10;
	
		case 8:
		case 9:
		case 10:
			return 20;
	
		case 11:
			return 8;
	
		case 12:
			return func_46();
	
		case 13:
			return 7;
	
		case 14:
			return 1;
	
		case 15:
		case 16:
		case 17:
			return 10;
	
		case 18:
		case 19:
		case 20:
			return 10;
	
		case 21:
			return 10;
	
		case 22:
			return 10;
	
		case 25:
			return 10;
	
		case 26:
			return 20;
	
		case 29:
			return 50;
	
		case 30:
			return 100;
	
		case 31:
			return 2;
	
		case 32:
			return 10;
	
		case 33:
		case 34:
		case 35:
			return 20;
	}

	return 0;
}

int func_46() // Position - 0x249F
{
	return 40;
}

bool func_47(int iParam0, int iParam1) // Position - 0x24AE
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

bool func_48(int iParam0) // Position - 0x258B
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

bool func_49(int iParam0, bool bParam1, bool bParam2) // Position - 0x25BA
{
	if (bParam2)
		return func_50(PLAYER::PLAYER_ID(), false);

	if (bParam1)
	{
		if (func_50(PLAYER::PLAYER_ID(), false))
			return false;
	
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}

	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}

	return false;
}

bool func_50(int iParam0, bool bParam1) // Position - 0x2695
{
	if (Global_1845128 != func_34())
	{
		if (!func_52(Global_1845128))
			return false;
	
		if (bParam1)
			if (PLAYER::PLAYER_ID() != Global_1845128)
				if (IS_BIT_SET(Global_2658294[Global_1845128 /*468*/].f_203, 24) || func_51(Global_1845128))
					return true;
	}

	return IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 24);
}

bool func_51(bool bParam0) // Position - 0x26FB
{
	if (bParam0 != func_34())
		return IS_BIT_SET(Global_2658294[bParam0 /*468*/].f_203, 9);

	return false;
}

bool func_52(bool bParam0) // Position - 0x271E
{
	if (bParam0 != func_34())
		return IS_BIT_SET(Global_1845299[bParam0 /*883*/].f_260.f_397, 2);

	return false;
}

int func_53(int iParam0) // Position - 0x2747
{
	switch (iParam0)
	{
		case 0:
			return 156;
	
		case 2:
			return 223;
	
		case 1:
			return 224;
	
		case 3:
			return 278;
	
		default:
		
	}

	return -1;
}

int func_54(int iParam0) // Position - 0x2784
{
	iParam0 = iParam0 - 1000;

	if (iParam0 >= 0 && iParam0 <= 4)
		return iParam0;

	return -1;
}

bool func_55(int iParam0) // Position - 0x27AA
{
	if (iParam0 >= 1000 && iParam0 < 1004)
		return true;

	return false;
}

int func_56(int iParam0) // Position - 0x27CB
{
	switch (iParam0)
	{
		case 177:
			return 33;
	
		case 178:
			return 34;
	
		case 179:
			return 35;
	
		default:
		
	}

	return -1;
}

int func_57(var uParam0, int iParam1) // Position - 0x27FC
{
	return func_17(uParam0, iParam1, 3);
}

int func_58(var uParam0, int iParam1) // Position - 0x280D
{
	return func_17(uParam0, iParam1, 2);
}

void func_59(int iParam0, var uParam1) // Position - 0x281E
{
	var uVar0;
	int iVar1;
	var uVar105;

	if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam1))
	{
		uVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam1);
		iVar1.f_9 = 49;
		iVar1.f_59 = 2;
		iVar1.f_78 = -1;
		iVar1.f_79 = -1;
		iVar1.f_96 = -1;
		iVar1.f_97 = 1;
		iVar1.f_99 = 132;
		iVar1.f_100 = -1;
	
		if (iParam0 == 0)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 4, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "43MLR467", 16);
			iVar1.f_5 = 135;
			iVar1.f_6 = 135;
			iVar1.f_7 = 135;
			iVar1.f_8 = 135;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 171;
			iVar1.f_75 = 63;
			MISC::SET_BIT(&(iVar1.f_77), 28);
			MISC::SET_BIT(&(iVar1.f_77), 29);
			MISC::SET_BIT(&(iVar1.f_77), 30);
			MISC::SET_BIT(&(iVar1.f_77), 31);
			iVar1.f_9[22] = 1;
			iVar1.f_9[48] = 12;
		}
		else if (iParam0 == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "42OTM958", 16);
			iVar1.f_5 = 92;
			iVar1.f_6 = 92;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[0] = 1;
			iVar1.f_9[4] = 1;
			iVar1.f_9[5] = 1;
			iVar1.f_9[6] = 2;
			iVar1.f_9[10] = 2;
			iVar1.f_9[23] = 8;
			iVar1.f_9[48] = 13;
		}
		else if (iParam0 == 2)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "42PHO918", 16);
			iVar1.f_5 = 128;
			iVar1.f_6 = 111;
			iVar1.f_7 = 128;
			iVar1.f_8 = 128;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 15;
		}
		else if (iParam0 == 3)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "63ADH761", 16);
			iVar1.f_5 = 27;
			iVar1.f_6 = 27;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[1] = 2;
			iVar1.f_9[4] = 3;
			iVar1.f_9[5] = 1;
			iVar1.f_9[7] = 5;
			iVar1.f_9[15] = 4;
			iVar1.f_9[23] = 6;
			iVar1.f_9[24] = 1;
		}
		else if (iParam0 == 4)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "47RNO136", 16);
			iVar1.f_5 = 15;
			iVar1.f_6 = 15;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[0] = 1;
			iVar1.f_9[1] = 2;
			iVar1.f_9[2] = 1;
			iVar1.f_9[5] = 1;
			iVar1.f_9[7] = 4;
			iVar1.f_9[15] = 2;
			iVar1.f_9[23] = 8;
			iVar1.f_9[24] = 1;
			iVar1.f_9[48] = 3;
		}
		else if (iParam0 == 5)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 0, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 0, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "56RAF112", 16);
			iVar1.f_5 = 12;
			iVar1.f_6 = 12;
			iVar1.f_7 = 12;
			iVar1.f_8 = 12;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 2;
		}
		else if (iParam0 == 6)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 4, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "66PJT141", 16);
			iVar1.f_5 = 34;
			iVar1.f_6 = 34;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[1] = 3;
			iVar1.f_9[4] = 1;
			iVar1.f_9[6] = 1;
			iVar1.f_9[23] = 3;
			iVar1.f_9[24] = 1;
			iVar1.f_9[27] = 14;
			iVar1.f_9[33] = 1;
			iVar1.f_9[37] = 3;
			iVar1.f_9[48] = 7;
		}
		else if (iParam0 == 7)
		{
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "40AJF699", 16);
			iVar1.f_5 = 15;
			iVar1.f_6 = 15;
			iVar1.f_7 = 15;
			iVar1.f_8 = 15;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 14;
		}
		else if (iParam0 == 8)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 4, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "82YLM383", 16);
			iVar1.f_5 = 12;
			iVar1.f_6 = 12;
			iVar1.f_7 = 12;
			iVar1.f_8 = 12;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 13;
		}
		else if (iParam0 == 9)
		{
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "69TJS608", 16);
			iVar1.f_5 = 88;
			iVar1.f_6 = 19;
			iVar1.f_7 = 88;
			iVar1.f_8 = 88;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 12;
		}
		else if (iParam0 == 10)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "03QMA772", 16);
			iVar1.f_5 = 15;
			iVar1.f_6 = 27;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 2;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[1] = 2;
			iVar1.f_9[23] = 8;
			iVar1.f_9[24] = 1;
			iVar1.f_9[48] = 3;
		}
		else if (iParam0 == 11)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "45MCA163", 16);
			iVar1 = 3;
			iVar1.f_5 = 12;
			iVar1.f_6 = 12;
			iVar1.f_7 = 12;
			iVar1.f_8 = 12;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 2;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			MISC::SET_BIT(&(iVar1.f_77), 1);
			iVar1.f_9[48] = 5;
		}
		else if (iParam0 == 12)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 4, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "43QZA094", 16);
			iVar1 = 3;
			iVar1.f_5 = 88;
			iVar1.f_6 = 88;
			iVar1.f_7 = 88;
			iVar1.f_8 = 88;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 2;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 217;
			iVar1.f_75 = 166;
			MISC::SET_BIT(&(iVar1.f_77), 28);
			MISC::SET_BIT(&(iVar1.f_77), 29);
			MISC::SET_BIT(&(iVar1.f_77), 30);
			MISC::SET_BIT(&(iVar1.f_77), 31);
			MISC::SET_BIT(&(iVar1.f_77), 2);
			iVar1.f_9[22] = 1;
			iVar1.f_9[48] = 7;
		}
		else if (iParam0 == 13)
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 5, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 5, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "82BPG904", 16);
			iVar1.f_5 = 34;
			iVar1.f_6 = 34;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 2;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[1] = 3;
			iVar1.f_9[4] = 1;
			iVar1.f_9[6] = 1;
			iVar1.f_9[8] = 1;
			iVar1.f_9[23] = 3;
			iVar1.f_9[24] = 1;
			iVar1.f_9[27] = 14;
			iVar1.f_9[33] = 1;
			iVar1.f_9[37] = 3;
			iVar1.f_9[48] = 7;
		}
		else if (iParam0 == 14)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 4, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "61OEN493", 16);
			iVar1.f_5 = 15;
			iVar1.f_6 = 15;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 7;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[0] = 1;
			iVar1.f_9[4] = 1;
			iVar1.f_9[5] = 1;
			iVar1.f_9[6] = 2;
			iVar1.f_9[10] = 2;
			iVar1.f_9[23] = 8;
			iVar1.f_9[48] = 13;
		}
		else if (iParam0 == 15)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "00BUC112", 16);
			iVar1.f_5 = 145;
			iVar1.f_6 = 145;
			iVar1.f_7 = 145;
			iVar1.f_8 = 145;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 7;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 176;
			iVar1.f_75 = 18;
			iVar1.f_76 = 89;
			MISC::SET_BIT(&(iVar1.f_77), 28);
			MISC::SET_BIT(&(iVar1.f_77), 29);
			MISC::SET_BIT(&(iVar1.f_77), 30);
			MISC::SET_BIT(&(iVar1.f_77), 31);
			iVar1.f_9[22] = 1;
			iVar1.f_9[48] = 16;
		}
		else if (iParam0 == 16)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "42YAG396", 16);
			iVar1.f_5 = 148;
			iVar1.f_6 = 148;
			iVar1.f_7 = 148;
			iVar1.f_8 = 148;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 7;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 15;
		}
		else if (iParam0 == 17)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "80QDM423", 16);
			iVar1.f_5 = 18;
			iVar1.f_6 = 18;
			iVar1.f_7 = 18;
			iVar1.f_8 = 18;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 7;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 14;
		}
		else if (iParam0 == 18)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "89AXX718", 16);
			iVar1.f_5 = 111;
			iVar1.f_6 = 111;
			iVar1.f_7 = 111;
			iVar1.f_8 = 111;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 7;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 87;
			iVar1.f_75 = 89;
			iVar1.f_76 = 97;
			MISC::SET_BIT(&(iVar1.f_77), 28);
			MISC::SET_BIT(&(iVar1.f_77), 29);
			MISC::SET_BIT(&(iVar1.f_77), 30);
			MISC::SET_BIT(&(iVar1.f_77), 31);
			iVar1.f_9[22] = 1;
			iVar1.f_9[48] = 10;
		}
		else if (iParam0 == 19)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 2, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 3, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "46ODB296", 16);
			iVar1.f_5 = 62;
			iVar1.f_6 = 62;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[4] = 1;
			iVar1.f_9[6] = 1;
			iVar1.f_9[23] = 3;
			iVar1.f_9[24] = 1;
			iVar1.f_9[33] = 1;
			iVar1.f_9[37] = 3;
			iVar1.f_9[48] = 7;
		}
		else if (iParam0 == 20)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 2, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 3, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "01OWK692", 16);
			iVar1.f_5 = 62;
			iVar1.f_6 = 62;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[4] = 1;
			iVar1.f_9[6] = 1;
			iVar1.f_9[23] = 3;
			iVar1.f_9[24] = 1;
			iVar1.f_9[33] = 1;
			iVar1.f_9[37] = 3;
			iVar1.f_9[48] = 7;
		}
		else if (iParam0 == 21)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 2, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 3, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "83NGU235", 16);
			iVar1.f_5 = 62;
			iVar1.f_6 = 62;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[0] = 1;
			iVar1.f_9[5] = 1;
			iVar1.f_9[23] = 8;
			iVar1.f_9[24] = 1;
			iVar1.f_9[48] = 3;
		}
		else if (iParam0 == 22)
		{
			ENTITY::FREEZE_ENTITY_POSITION(uVar0, 0);
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 2, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 2, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "02HJE974", 16);
			iVar1.f_5 = 137;
			iVar1.f_6 = 137;
			iVar1.f_7 = 137;
			iVar1.f_8 = 137;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 143;
			iVar1.f_75 = 47;
			iVar1.f_76 = 85;
			MISC::SET_BIT(&(iVar1.f_77), 28);
			MISC::SET_BIT(&(iVar1.f_77), 29);
			MISC::SET_BIT(&(iVar1.f_77), 30);
			MISC::SET_BIT(&(iVar1.f_77), 31);
			iVar1.f_9[22] = 1;
			iVar1.f_9[48] = 9;
		}
		else if (iParam0 == 23)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 4, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "61KDG752", 16);
			iVar1.f_5 = 111;
			iVar1.f_6 = 111;
			iVar1.f_7 = 111;
			iVar1.f_8 = 111;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 240;
			iVar1.f_75 = 240;
			iVar1.f_76 = 240;
			MISC::SET_BIT(&(iVar1.f_77), 28);
			MISC::SET_BIT(&(iVar1.f_77), 29);
			MISC::SET_BIT(&(iVar1.f_77), 30);
			MISC::SET_BIT(&(iVar1.f_77), 31);
			iVar1.f_9[22] = 1;
			iVar1.f_9[48] = 14;
		}
		else if (iParam0 == 24)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "65TLM709", 16);
			iVar1.f_5 = 135;
			iVar1.f_6 = 135;
			iVar1.f_7 = 135;
			iVar1.f_8 = 135;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 10;
		}
		else if (iParam0 == 25)
		{
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "03SVZ064", 16);
			iVar1.f_5 = 31;
			iVar1.f_6 = 31;
			iVar1.f_7 = 31;
			iVar1.f_8 = 31;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 15;
		}
		else if (iParam0 == 26)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "01PMT053", 16);
			iVar1.f_5 = 67;
			iVar1.f_6 = 67;
			iVar1.f_7 = 67;
			iVar1.f_8 = 67;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_74 = 255;
			iVar1.f_76 = 255;
			iVar1.f_9[48] = 12;
		}
		else if (iParam0 == 27)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(uVar0, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(uVar0, 4, 0, 1);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar0, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(iVar1.f_1), "81QBV287", 16);
			iVar1.f_5 = 15;
			iVar1.f_6 = 15;
			iVar1.f_7 = 0;
			iVar1.f_8 = 0;
			iVar1.f_97 = 1;
			iVar1.f_99 = 132;
			iVar1.f_98 = 0;
			iVar1.f_69 = 1;
			iVar1.f_62 = 255;
			iVar1.f_63 = 255;
			iVar1.f_64 = 255;
			iVar1.f_9[1] = 3;
			iVar1.f_9[4] = 1;
			iVar1.f_9[6] = 1;
			iVar1.f_9[8] = 1;
			iVar1.f_9[23] = 3;
			iVar1.f_9[48] = 7;
		}
	
		func_60(uVar0, &iVar1, false, true, false);
	}
	else if (ENTITY::IS_ENTITY_A_PED(*uParam1))
	{
		uVar105 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
	
		if (iParam0 == 28)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 29)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 30)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 31)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 32)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 33)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 34)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 0, 2, 0, 0, 1);
		}
		else if (iParam0 == 35)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 36)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 37)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 38)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 39)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 40)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 41)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 42)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 4, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 43)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 44)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 0, 0, 0, 0, 1);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 45)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 46)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 47)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 48)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 49)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 0, 1, 0, 0, 1);
		}
		else if (iParam0 == 50)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 51)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 52)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 53)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 0, 1, 0, 0, 1);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 54)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 55)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 56)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 0, 1, 0, 0, 1);
		}
		else if (iParam0 == 57)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 58)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 59)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 60)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 61)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 62)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 0, 1, 0, 0, 1);
		}
		else if (iParam0 == 63)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 64)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(uVar105, 0, 0, 0, 0, 1);
			PED::SET_PED_PROP_INDEX(uVar105, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 65)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 66)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 67)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 3, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
		else if (iParam0 == 68)
		{
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 0, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 2, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 3, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 4, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 5, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 6, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uVar105, 11, 0, 0, 0);
		}
	}
}

void func_60(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) // Position - 0x4ED9
{
	var uVar0;
	float fVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
		
			if (PLAYER::PLAYER_ID() != func_34())
				uParam1->f_100 = PLAYER::PLAYER_ID();
		
			if (uParam1->f_70 == 0)
				uParam1->f_70 = 1;
		
			func_124(uParam0, uParam1, bParam2, bParam3);
		
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 1);
					VEHICLE::SET_DRIFT_TYRES(uParam0, 0);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 0);
					VEHICLE::SET_DRIFT_TYRES(uParam0, 0);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 1);
					VEHICLE::SET_DRIFT_TYRES(uParam0, 1);
				}
			}
		
			func_119(uParam0, uParam1);
		
			if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("TITAN2"))
				VEHICLE::SET_PLANE_CONTROL_SECTIONS_SHOULD_BREAK_OFF_FROM_EXPLOSIONS(uParam0, 0);
		
			if (!(uParam1->f_78 == -1) && uParam1->f_9[14] == -1)
				AUDIO::OVERRIDE_VEH_HORN(uParam0, 1, uParam1->f_78);
		
			if (!(uParam1->f_79 == -1))
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(uParam0, uParam1->f_79);
		
			if (func_118(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
				uParam1->f_80 = fVar1;
		
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(uParam0, uParam1->f_80);
		
			if (uParam1->f_97 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(uParam0, uParam1->f_97);
		
			if (uParam1->f_99 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(uParam0, uParam1->f_99);
		
			if (func_117(uParam0))
				func_111(uParam0, func_114(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(uParam0) > 1 && uParam1->f_98 >= 0)
				VEHICLE::SET_VEHICLE_LIVERY2(uParam0, uParam1->f_98);
		
			if (IS_BIT_SET(uParam1->f_95, 0))
				func_81(uParam0, &(uParam1->f_81));
		
			if (!func_71(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_68(uParam0);
		
			if (func_67(uVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
						break;
				
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB2")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB3")))
							VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 0, 0);
						else
							VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 2, 0);
						break;
				
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB2")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB3")))
							VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 1, 0);
						else
							VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 3, 0);
						break;
				
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB2")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB3")))
							VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 2, 0);
						else
							VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 4, 0);
						break;
				
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 16);
						
							if (VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB2")) || VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("SCARAB3")))
								VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 2, 0);
							else
								VEHICLE::SET_VEHICLE_MOD(uParam0, 16, 4, 0);
						}
						break;
				}
			}
		
			if (func_64(ENTITY::GET_ENTITY_MODEL(uParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(uParam0, 0);
						VEHICLE::SET_VEHICLE_STRONG(uParam0, 1);
					
						if (uParam1->f_9[16] == 5)
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(uParam0, Global_262145.f_21547 /* Tunable: IMANI_ARMOR_PLATING_DAMAGE_SCALE */ + 0.05f);
						else
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(uParam0, Global_262145.f_21547 /* Tunable: IMANI_ARMOR_PLATING_DAMAGE_SCALE */);
					
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(uParam0, 1);
						break;
				
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(uParam0, 0);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(uParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(uParam0, 1);
						break;
				}
			}
		
			if (func_62(uParam0))
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0, 18, 1);
		
			switch (uParam1->f_94)
			{
				case 0:
					break;
			
				case 1:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
					{
						if (IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(uParam0, "Player_Vehicle", -1);
					}
					break;
			
				case 2:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
							DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						if (func_61(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
							DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						else
							DECORATOR::DECOR_SET_INT(uParam0, "Veh_Modded_By_Player", -1);
					break;
			
				case 3:
					break;
			
				case 4:
					break;
			}
		}
	}
}

var func_61(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x53C2
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_62(var uParam0) // Position - 0x53D2
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		return false;

	uVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);

	if (func_63(uVar0))
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 36) != -1)
			return true;

	return false;
}

bool func_63(int iParam0) // Position - 0x5418
{
	switch (iParam0)
	{
		case joaat("BRIOSO"):
		case joaat("SENTINEL"):
		case joaat("HAKUCHOU2"):
		case joaat("TURISMO2"):
		case joaat("DEVESTE"):
		case joaat("BANSHEE"):
		case joaat("ARBITERGT"):
		case joaat("ASTRON2"):
		case joaat("CYCLONE2"):
		case joaat("IGNUS2"):
		case joaat("S95"):
		case joaat("VIGERO2"):
		case joaat("FELTZER3"):
		case joaat("ENTITY3"):
		case joaat("ISSI8"):
		case joaat("BUFFALO5"):
		case joaat("MONSTROCITI"):
		case joaat("STINGERTT"):
		case joaat("COUREUR"):
		case joaat("VIGERO3"):
		case joaat("VIVANITE"):
		case joaat("EUROSX32"):
		case joaat("NIOBE"):
		case joaat("BANSHEE3"):
		case joaat("FIREBOLT"):
		case joaat("TAMPA4"):
		case joaat("WOODLANDER"):
		case joaat("FMJ2"):
		case joaat("ASTRALE"):
			return true;
	
		default:
		
	}

	return false;
}

bool func_64(int iParam0) // Position - 0x54DA
{
	switch (iParam0)
	{
		case joaat("POLTERMINUS"):
			return true;
	}

	return func_66(iParam0) && !func_65(iParam0);
}

bool func_65(int iParam0) // Position - 0x5508
{
	switch (iParam0)
	{
		case joaat("COUREUR"):
		case joaat("MONSTROCITI"):
		case joaat("TURISMO3"):
		case joaat("BALLER8"):
		case joaat("ENVISAGE"):
			return true;
	}

	return false;
}

bool func_66(int iParam0) // Position - 0x553D
{
	switch (iParam0)
	{
		case joaat("DEITY"):
		case joaat("GRANGER2"):
		case joaat("BUFFALO4"):
		case joaat("JUBILEE"):
		case joaat("PATRIOT3"):
		case joaat("CHAMPION"):
		case joaat("GREENWOOD"):
		case joaat("OMNISEGT"):
		case joaat("VIRTUE"):
		case joaat("R300"):
		case joaat("STINGERTT"):
		case joaat("BUFFALO5"):
		case joaat("COUREUR"):
		case joaat("MONSTROCITI"):
		case joaat("ALEUTIAN"):
		case joaat("TURISMO3"):
		case joaat("BALLER8"):
		case joaat("TERMINUS"):
		case joaat("ENVISAGE"):
		case joaat("PARAGON3"):
			return true;
	}

	return false;
}

bool func_67(int iParam0) // Position - 0x55CC
{
	switch (iParam0)
	{
		case joaat("POUNDER2"):
		case joaat("MULE4"):
		case joaat("SPEEDO4"):
		case joaat("SPEEDO5"):
		case joaat("IMPERATOR"):
		case joaat("DEATHBIKE"):
		case joaat("CERBERUS"):
		case joaat("BRUISER"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("ISSI4"):
		case joaat("IMPERATOR2"):
		case joaat("DEATHBIKE2"):
		case joaat("CERBERUS2"):
		case joaat("BRUISER2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("ISSI5"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("CERBERUS3"):
		case joaat("BRUISER3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
		case joaat("ISSI6"):
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUTUS"):
		case joaat("BRUTUS2"):
		case joaat("BRUTUS3"):
			return true;
	}

	return false;
}

void func_68(var uParam0) // Position - 0x56D3
{
	var uVar0;

	if (Global_262145.f_19992 /* Tunable: ENABLED_LOCK_ANY_AMBIENT_DOZER_OF_THIS_ZOLA */)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uParam0))
			{
				uVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
				uVar0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(uParam0));
			
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(uParam0, "RandomID"))
					{
						uVar0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(uParam0, "RandomID", uVar0.f_2);
					}
					else
					{
						uVar0.f_2 = DECORATOR::DECOR_GET_INT(uParam0, "RandomID");
					}
				}
			
				func_69(uVar0);
			}
		}
	}
}

void func_69(var uParam0, var uParam1, var uParam2) // Position - 0x5762
{
	int iVar0;

	iVar0 = -1251853784;
	iVar0.f_1 = PLAYER::PLAYER_ID();
	iVar0.f_3 = uParam0;
	iVar0.f_3.f_1 = uParam0.f_1;
	iVar0.f_3.f_2 = uParam0.f_2;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &iVar0, 6, func_70(true, true), iVar0);
}

var func_70(bool bParam0, bool bParam1) // Position - 0x57A3
{
	var uVar0;
	int iVar1;
	bool bVar2;

	for (iVar1 = 0; iVar1 < 32; iVar1 = iVar1 + 1)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
	
		if (func_38(bVar2, false, false))
			if (bVar2 != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&uVar0, iVar1);
				else if (!func_30(bVar2, 0))
					MISC::SET_BIT(&uVar0, iVar1);
	}

	return uVar0;
}

bool func_71(int iParam0) // Position - 0x5808
{
	int iVar0;

	if (func_80())
	{
		for (iVar0 = 0; iVar0 < 65; iVar0 = iVar0 + 1)
		{
			if (func_79(iVar0) == iParam0)
				if (func_72(iVar0))
					return true;
		}
	}

	return false;
}

bool func_72(int iParam0) // Position - 0x5843
{
	return func_73(iParam0, 6, true);
}

bool func_73(int iParam0, int iParam1, bool bParam2) // Position - 0x5853
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_102506.f_1442[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_78() == 0)
			return IS_BIT_SET(func_74(func_77(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114931.f_668[iParam0], iParam1);

	return false;
}

int func_74(int iParam0, int iParam1) // Position - 0x58B3
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_75(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

var func_75(int iParam0, int iParam1) // Position - 0x58E2
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_76(iParam1));
}

bool func_76(bool bParam0) // Position - 0x58F7
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam0;

	if (bVar0 == -1)
	{
		bVar1 = func_32();
	
		if (bVar1 > -1)
		{
			Global_2741524 = 0;
			bVar0 = bVar1;
		}
		else
		{
			bVar0 = false;
			Global_2741524 = 1;
		}
	}

	return bVar0;
}

int func_77(int iParam0) // Position - 0x592B
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return &func_7;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return &func_8;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 14766;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		case 61:
			return 12447;
	
		case 62:
			return 14262;
	
		case 63:
			return 14263;
	
		case 64:
			return 14264;
	
		default:
			break;
	}

	return 18486;
}

int func_78() // Position - 0x5D0F
{
	return Global_33792;
}

int func_79(int iParam0) // Position - 0x5D1A
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 0;
	
		case 63:
			return 2;
	
		case 64:
			return 3;
	}

	return 6;
}

bool func_80() // Position - 0x6084
{
	return Global_102506.f_418 > 0;
}

int func_81(var uParam0, var uParam1) // Position - 0x6095
{
	int iVar0;
	var uVar1;

	if (!func_91(uParam0, uParam1))
		return 1;

	iVar0 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(uParam0, 0);

	if (iVar0 == 0)
	{
		if (!func_89(uParam0))
		{
			uVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
		
			if (func_84(&uParam0, uVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_82(uParam0))
	{
	}

	return 0;
}

bool func_82(var uParam0) // Position - 0x6112
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(uParam0, 0);

	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				uVar1 = NETWORK::GET_NETWORK_TIME();
			else
				uVar1 = MISC::GET_GAME_TIMER();
		
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uVar1, Global_1576401));
			iVar3 = 20000;
		
			if (Global_1836756)
				iVar3 = 2000;
		
			if (iVar2 > iVar3)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(uParam0);
				func_83(uParam0);
				return false;
			}
		}
	
		return true;
	}

	return false;
}

void func_83(var uParam0) // Position - 0x619F
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (DECORATOR::DECOR_EXIST_ON(uParam0, "MPBitset"))
				iVar0 = DECORATOR::DECOR_GET_INT(uParam0, "MPBitset");

	if (!IS_BIT_SET(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(uParam0, "MPBitset", iVar0);
	}
}

bool func_84(var uParam0, var uParam1) // Position - 0x61FF
{
	func_88();

	if (Global_1574634.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0))
	{
		Global_1950600.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
	
		if (Global_1950600.f_11 < 0f)
			Global_1950600.f_11 = 0f;
	}

	func_86(*uParam0, &Global_1950600, &(Global_1950600.f_1), &(Global_1950600.f_4), &(Global_1950600.f_7), &(Global_1950600.f_10));
	Global_1950600.f_1.f_2 = Global_1950600.f_1.f_2 - Global_1950600.f_11;

	if (Global_1950600.f_4.f_2 < 0f)
		Global_1950600.f_12 = 1;

	Global_1950600.f_13 = 200;

	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("WINDSOR") || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("COMET4"))
		Global_1950600.f_13 = 255;

	if (Global_1950600.f_12)
	{
		if (func_85(uParam0, uParam1, Global_1950600, Global_1950600.f_1, Global_1950600.f_4, Global_1950600.f_7, Global_1950600.f_10, 0, Global_1950600.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1576401 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1576401 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}
	else
	{
		Global_1950600.f_14 = { Global_1950600.f_1 };
		Global_1950600.f_14 = Global_1950600.f_14 * -1f;
		Global_1950600.f_17 = { Global_1950600.f_4 };
		Global_1950600.f_17 = Global_1950600.f_17 * -1f;
		Global_1950600.f_20 = { Global_1950600.f_7 };
		Global_1950600.f_20.f_1 = Global_1950600.f_20.f_1 * -1f;
		Global_1950600.f_20.f_2 = Global_1950600.f_20.f_2 * -1f;
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 0))
			Global_1950600.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 0);
		else
			Global_1950600.f_23 = 3;
	
		Global_1950600.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 1))
			Global_1950600.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
		else
			Global_1950600.f_24 = 3;
	
		if (Global_1950600.f_23 == 0 && func_85(uParam0, uParam1, Global_1950600, Global_1950600.f_1, Global_1950600.f_4, Global_1950600.f_7, Global_1950600.f_10, 0, Global_1950600.f_13) || Global_1950600.f_23 != 0 && Global_1950600.f_24 == 0 && func_85(uParam0, uParam1, Global_1950600, Global_1950600.f_14, Global_1950600.f_17, Global_1950600.f_20, Global_1950600.f_10, 1, Global_1950600.f_13) || Global_1950600.f_24 != 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1576401 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1576401 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}

	return false;
}

bool func_85(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, var uParam14) // Position - 0x64AA
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(uParam1), iParam2, uParam3, uParam6, uParam9, uParam12, iParam13, uParam14);
}

int func_86(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x64D3
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		return 0;

	*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");

	if (!func_87(Global_1950626, 0f, 0f, 0f, false) && !func_87(Global_1950629, 0f, 0f, 0f, false) && !func_87(Global_1950632, 0f, 0f, 0f, false) && !(Global_1950635 == 0f))
	{
		*uParam2 = { Global_1950626 };
		*uParam3 = { Global_1950629 };
		*uParam4 = { Global_1950632 };
		*uParam5 = Global_1950635;
		return 1;
	}

	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("DOMINATOR"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("FELTZER2"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ADDER"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("AKUMA"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
	
		case joaat("ASEA"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ASTEROPE"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BAGGER"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
	
		case joaat("BALLER"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BALLER2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BANSHEE"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("BATI"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("BATI2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("BFINJECTION"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BISON"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BJXL"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("BLISTA"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
	
		case joaat("BOBCATXL"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
	
		case joaat("BODHI2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BUCCANEER"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
	
		case joaat("BUFFALO"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BUFFALO2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("BULLET"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("CARBONRS"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
	
		case joaat("CARBONIZZARE"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("CAVALCADE"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
	
		case joaat("CAVALCADE2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("CHEETAH"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("COGCABRIO"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("COMET2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("COQUETTE"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
	
		case joaat("DAEMON"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("DILETTANTE"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("DLOADER"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("DOUBLE"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("DUBSTA"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("DUBSTA2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
	
		case joaat("ELEGY2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("EMPEROR"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("EMPEROR2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ENTITYXF"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("EXEMPLAR"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("F620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("FAGGIO2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("FELON"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("FELON2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("FQ2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("FUGITIVE"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("FUSILADE"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("DRIFTFUTO2"):
		case joaat("FUTO"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("GAUNTLET"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("GRANGER"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("GRESLEY"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("HABANERO"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("HEXER"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
	
		case joaat("HOTKNIFE"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("INFERNUS"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("INGOT"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("INTRUDER"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ISSI2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("JACKAL"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("JB700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
	
		case joaat("KHAMELION"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
	
		case joaat("LANDSTALKER"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("MANANA"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
	
		case joaat("MESA"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("MESA3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("MINIVAN"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("MONROE"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
	
		case joaat("NEMESIS"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("NINEF"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("NINEF2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ORACLE"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ORACLE2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PATRIOT"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PCJ"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("PENUMBRA"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PEYOTE"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PHOENIX"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
	
		case joaat("PICADOR"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.425f;
			break;
	
		case joaat("PRAIRIE"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
	
		case joaat("PREMIER"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PRIMO"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("RADI"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("RANCHERXL"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("RAPIDGT"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("RAPIDGT2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("RATLOADER"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("REBEL"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("REBEL2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("REGINA"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ROCOTO"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ROMERO"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("RUFFIAN"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
	
		case joaat("RUINER"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SABREGT"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("SADLER"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SANDKING"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SANDKING2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SCHAFTER2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("SCHWARZER"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("SEMINOLE"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SENTINEL"):
		case joaat("DRIFTSENTINEL2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SENTINEL2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SERRANO"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
	
		case joaat("STANIER"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("STINGER"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("STINGERGT"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("STRATUM"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SULTAN"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("SUPERD"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SURANO"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SURFER"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
	
		case joaat("SURFER2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
	
		case joaat("SURGE"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("TAILGATER"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("TORNADO"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("TORNADO2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("TORNADO3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("VACCA"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("VADER"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("VIGERO"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("VOLTIC"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
	
		case joaat("VOODOO2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("WASHINGTON"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("YOUGA"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
	
		case joaat("ZION"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("ZION2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("ZTYPE"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("KALAHARI"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PARADISE"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("ALPHA"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("HUNTLEY"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ZENTORNO"):
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("JESTER"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("MASSACRO"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("TURISMOR"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("THRUST"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
	
		case joaat("BTYPE"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
	
		case joaat("RHAPSODY"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
	
		case joaat("GLENDALE"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
	
		case joaat("WARRENER"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
	
		case joaat("BLADE"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
	
		case joaat("PANTO"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("DUBSTA3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PIGALLE"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("COQUETTE2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("INNOVATION"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
	
		case joaat("HAKUCHOU"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
	
		case joaat("FUROREGT"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("RATLOADER2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("SLAMVAN"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("DUKES2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
	
		case joaat("DUKES"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
	
		case joaat("STALION"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
	
		case joaat("BLISTA2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
	
		case joaat("CASCO"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("ENDURO"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("GBURRITO2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("GUARDIAN"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("KURUMA"):
		case joaat("KURUMA2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
	
		case joaat("LECTRO"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
	
		case joaat("FELTZER3"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("OSIRIS"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("VIRGO"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("WINDSOR"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
	
		case joaat("BRAWLER"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("CHINO"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("COQUETTE3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("T20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("VINDICATOR"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("FACTION"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("FACTION2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BUCCANEER2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
	
		case joaat("CHINO2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("MOONBEAM"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("MOONBEAM2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PRIMO2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("VOODOO"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("FACTION3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SABREGT2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("TORNADO5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("VIRGO2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
	
		case joaat("VIRGO3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
	
		case joaat("MINIVAN2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SLAMVAN3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BTYPE2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("LURCHER"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("BALLER3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BALLER4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BALLER5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BALLER6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("COG55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("COG552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("COGNOSCENTI"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("COGNOSCENTI2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("MAMBA"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("NIGHTSHADE"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("SCHAFTER3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("SCHAFTER4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("SCHAFTER5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("SCHAFTER6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("VERLIERER2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("TAMPA"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("BANSHEE2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SULTANRS"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("BTYPE3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("BESTIAGTS"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SEVEN70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("FMJ"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("PFISTER811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("PROTOTIPO"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("REAPER"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("RUMPO3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("WINDSOR2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
	
		case joaat("XLS"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("XLS2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("BRIOSO"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("CONTENDER"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("LE7B"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("OMNIS"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("TROPOS"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("AVARUS"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("DAEMON2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("DEFILER"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
	
		case joaat("ESSKEY"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
	
		case joaat("HAKUCHOU2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("NIGHTBLADE"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
	
		case joaat("RATBIKE"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("SHOTARO"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("ZOMBIEA"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("ZOMBIEB"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("VORTEX"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
	
		case joaat("TORNADO6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("YOUGA2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
	
		case joaat("WOLFSBANE"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("FAGGIO3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("FAGGIO"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
	
		case joaat("COMET3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DIABLOUS"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("DIABLOUS2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("ELEGY"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("FCR"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("FCR2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("ITALIGTB"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("ITALIGTB2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("NERO"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("NERO2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("PENETRATOR"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("RUINER2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("RUINER3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SPECTER"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("SPECTER2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("TECHNICAL2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("TEMPESTA"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("VOLTIC2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
	
		case joaat("INFERNUS2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("RUSTON"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("TURISMO2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("ARDENT"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("CHEETAH3"):
		case joaat("CHEETAH2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("HALFTRACK"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("NIGHTSHARK"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("OPPRESSOR"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
	
		case joaat("TAMPA3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
	
		case joaat("TECHNICAL3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
	
		case joaat("TORERO"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("VAGNER"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("XA21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("PHANTOM3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("HAULER2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("CYCLONE"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("VISIONE"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("VIGILANTE"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
	
		case joaat("RETINUE"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("RAPIDGT3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
	
		case joaat("AVENGER"):
		case joaat("AVENGER3"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DELUXO"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("STROMBERG"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("RIOT2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("CHERNOBOG"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
	
		case joaat("KHANJALI"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("BARRAGE"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("COMET4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
	
		case joaat("NEON"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("STREITER"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SENTINEL3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("YOSEMITE"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("SC1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("AUTARCH"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("GT500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("HUSTLER"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("REVOLTER"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("PARIAH"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("RAIDEN"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("SAVESTRA"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("RIATA"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("HERMES"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("COMET5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("Z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("VISERIS"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
	
		case joaat("KAMACHO"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("GB200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
	
		case joaat("FAGALOA"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ELLIE"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("ISSI3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("MICHELLI"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("FLASHGT"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("HOTRING"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("TEZERACT"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
	
		case joaat("TYRANT"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("DOMINATOR3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("TAIPAN"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ENTITY2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("DRIFTJESTER3"):
		case joaat("JESTER3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DRIFTCHEBUREK"):
		case joaat("CHEBUREK"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
	
		case joaat("CARACARA"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SPEEDO4"):
		case joaat("SPEEDO5"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("MULE4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("POUNDER2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
	
		case joaat("SWINGER"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("MENACER"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SCRAMJET"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("PATRIOT2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("STAFFORD"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("FREECRAWLER"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("OPPRESSOR2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
	
		case joaat("TERBYTE"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("BRUISER"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
	
		case joaat("BRUISER2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
	
		case joaat("BRUISER3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
	
		case joaat("BRUTUS"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("BRUTUS2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("BRUTUS3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("CERBERUS"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("CERBERUS2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("CERBERUS3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("CLIQUE"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DEVESTE"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("DEVIANT"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("DOMINATOR4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DOMINATOR5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DOMINATOR6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("IMPALER"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("IMPALER2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("IMPALER3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("IMPALER4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("IMPERATOR"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("IMPERATOR2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("IMPERATOR3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ISSI4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ISSI5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ISSI6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ITALIGTO"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("MONSTER3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("MONSTER4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("MONSTER5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("SCHLAGEN"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SLAMVAN4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SLAMVAN5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("SLAMVAN6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("TOROS"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("TULIP"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("VAMOS"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("ZR380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("ZR3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("ZR3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("CARACARA2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DRAFTER"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DYNASTY"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("EMERUS"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("GAUNTLET3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("DRIFTGAUNTLET4"):
		case joaat("GAUNTLET4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("HELLION"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("ISSI7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("JUGULAR"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("KRIEGER"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("LOCUST"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("NEBULA"):
		case joaat("DRIFTNEBULA"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("NEO"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("NOVAK"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("PARAGON"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("PARAGON2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("PEYOTE2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("S80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("THRAX"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("ZION3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("ZORRUSSO"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("SLAMVAN2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("REBLA"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("ASBO"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("SUGOI"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("KOMODA"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("VSTR"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SULTAN2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("KANJO"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("JB7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
	
		case joaat("YOSEMITE2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("RETINUE2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("FURIA"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("EVERON"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("IMORGON"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("ZHABA"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("GAUNTLET5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
	
		case joaat("DUKES3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
	
		case joaat("MANANA2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
	
		case joaat("CLUB"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
	
		case joaat("GLENDALE2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
	
		case joaat("YOUGA3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
	
		case joaat("YOSEMITE3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
	
		case joaat("SEMINOLE2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("PENUMBRA2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("LANDSTALKER2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("COQUETTE4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("TIGON"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("PEYOTE3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("BRIOSO2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("SLAMTRUCK"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("ITALIRSX"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("TOREADOR"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
	
		case joaat("WEEVIL"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("ZR350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
	
		case joaat("CALICO"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("JESTER4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("COMET6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("WARRENER2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("REMUS"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("VECTRE"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DOMINATOR7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("CYPHER"):
		case joaat("DRIFTCYPHER"):
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("DRIFTRT3000"):
		case joaat("RT3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("SULTAN3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
	
		case joaat("TAILGATER2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("PREVION"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DOMINATOR8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("FUTO2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("EUROS"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("GROWLER"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("CINQUEMILA"):
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("CHAMPION"):
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("GRANGER2"):
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DEITY"):
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("BUFFALO4"):
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("BALLER7"):
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("ZENO"):
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
	
		case joaat("COMET7"):
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("ASTRON"):
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("PATRIOT3"):
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
	
		case joaat("JUBILEE"):
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("SHINOBI"):
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.045f;
			break;
	
		case joaat("REEVER"):
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("IWAGEN"):
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("CYCLONE2"):
			*uParam2 = { -1f, 0.434f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("ARBITERGT"):
			*uParam2 = { -1f, 0.184f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("ASTRON2"):
			*uParam2 = { -1f, 0.326f, 0.475f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("S95"):
			*uParam2 = { -1f, 0.102f, 0.157f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("BRIOSO3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("CORSITA"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("GREENWOOD"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("KANJOSJ"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("POSTLUDE"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("RHINEHART"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
	
		case joaat("TENF"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("TENF2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("TORERO2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("VIGERO2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("WEEVIL2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("DRAUGUR"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("RUINER4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("SENTINEL4"):
		case joaat("DRIFTSENTINEL"):
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SM722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("OMNISEGT"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
	
		case joaat("POWERSURGE"):
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("ENTITY3"):
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("MANCHEZ3"):
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("SURFER3"):
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("BOOR"):
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("EUDORA"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7f;
			break;
	
		case joaat("TULIP2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("R300"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("VIRTUE"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("ISSI8"):
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("BROADWAY"):
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("PANTHERE"):
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("TAHOMA"):
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("EVERON2"):
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.6f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("L35"):
			*uParam2 = { -1f, 0.2f, 0.43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("BRIGHAM"):
			*uParam2 = { -0.003f, 2.764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("GAUNTLET6"):
			*uParam2 = { -1.5f, 0.4f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
	
		case joaat("STINGERTT"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("BUFFALO5"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("RATEL"):
			*uParam2 = { -1f, 0.128f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.42f;
			break;
	
		case joaat("CLIQUE2"):
			*uParam2 = { -1f, 0.088f, 0.438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("COUREUR"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("MONSTROCITI"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("DRIFTFR36"):
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.44f;
			break;
	
		case joaat("DRIFTYOSEMITE"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("DRIFTREMUS"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DRIFTEUROS"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DRIFTFUTO"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DRIFTJESTER"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DRIFTZR350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
	
		case joaat("ALEUTIAN"):
			*uParam2 = { 0f, 2.1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("DOMINATOR9"):
		case joaat("DRIFTDOMINATOR9"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("FR36"):
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.44f;
			break;
	
		case joaat("CAVALCADE3"):
			*uParam2 = { -1.6f, 0.585f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("IMPALER5"):
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
	
		case joaat("ASTEROPE2"):
			*uParam2 = { -1f, 0.15f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.46f;
			break;
	
		case joaat("DORADO"):
			*uParam2 = { -1f, 0.229f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
	
		case joaat("IMPALER6"):
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.41f;
			break;
	
		case joaat("VIVANITE"):
			*uParam2 = { -1f, 0.475f, 0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("VORSCHLAGHAMMER"):
		case joaat("DRIFTVORSCHLAG"):
			*uParam2 = { 0f, 1.141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
	
		case joaat("POLIMPALER5"):
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
	
		case joaat("CASTIGATOR"):
			*uParam2 = { -1f, 0.315f, 0.1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0455f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("POLIMPALER6"):
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.41f;
			break;
	
		case joaat("PIPISTRELLO"):
			*uParam2 = { -1f, -0.0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2375f;
			break;
	
		case joaat("ENVISAGE"):
			*uParam2 = { -1f, 0f, 0.2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
	
		case joaat("DOMINATOR10"):
		case joaat("DRIFTDOMINATOR10"):
			*uParam2 = { -1f, 0f, 0.0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("YOSEMITE1500"):
			*uParam2 = { -1.229f, 0.6f, 0.361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("EUROSX32"):
			*uParam2 = { 0f, 1.71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("NIOBE"):
			*uParam2 = { -1f, 0.175f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("COQUETTE5"):
			*uParam2 = { -1f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PARAGON3"):
			*uParam2 = { -1f, 0f, 0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("PIZZABOY"):
			*uParam2 = { 0f, 1.0569f, 1f };
			*uParam3 = { 0f, -0.5995f, -1f };
			*uParam4 = { -0.4071f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
	
		case joaat("CHAVOSV6"):
		case joaat("DRIFTCHAVOSV6"):
			*uParam2 = { -1f, 0.2073f, 0.1513f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0285f };
			*uParam5 = 0.365f;
			break;
	
		case joaat("BANSHEE3"):
		case joaat("JESTER5"):
		case joaat("COQUETTE6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.335f;
			break;
	
		case joaat("URANUS"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.335f;
			break;
	
		case joaat("FIREBOLT"):
			*uParam2 = { -1f, 0.2805f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.445f;
			break;
	
		case joaat("SENTINEL5"):
			*uParam2 = { -1f, -0.138f, 0.152f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
	
		case joaat("HARDY"):
		case joaat("DRIFTHARDY"):
			*uParam2 = { -1f, 0.126f, 0.1025f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2575f;
			break;
	
		case joaat("DRIFTL352"):
		case joaat("L352"):
			*uParam2 = { -1f, 0.15f, 0.386f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	
		case joaat("SUZUME"):
			*uParam2 = { -1f, 0.1692f, -0.005f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1525f;
			break;
	
		case joaat("TAMPA4"):
			*uParam2 = { -1f, 0.1117f, 0.2103f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2775f;
			break;
	
		case joaat("EVERON3"):
			*uParam2 = { -1f, 0.49f, 0.525f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("RAPIDGT4"):
			*uParam2 = { -1f, 0f, 0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("MINIMUS"):
			*uParam2 = { -1f, 0.355f, 0.205f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
	
		case joaat("ITALI2"):
			*uParam2 = { -1.0113f, -0.1503f, 0.139f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.405f;
			break;
	
		case joaat("KEITORA"):
		case joaat("DRIFTKEITORA"):
			*uParam2 = { 1f, 0.93f, 0.54f };
			*uParam3 = { -1f, 0f, 0f };
			*uParam4 = { 0f, 1f, 0f };
			*uParam5 = 0.4f;
			break;
	
		case joaat("SENTINEL6"):
			*uParam2 = { 0f, 1.6402f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	
		case joaat("LUIVA"):
			*uParam2 = { -0.9362f, 0.2907f, 0.4678f };
			*uParam3 = { 0.495f, 0.3753f, -0.521f };
			*uParam4 = { 0.1125f, -0.6432f, -0.0953f };
			*uParam5 = 0.455f;
			break;
	
		case joaat("XTREME"):
			*uParam2 = { -1f, 0.43f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	
		case joaat("GT750"):
			*uParam2 = { -1f, 0.2f, 0.284f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
	
		case joaat("FMJ2"):
			*uParam2 = { -1f, -0.06f, 0.41f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
	
		case joaat("ASTRALE"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	}

	return 1;
}

bool func_87(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, bool bParam6) // Position - 0xC5D7
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_88() // Position - 0xC61E
{
	Global_1950600 = 0;
	Global_1950600.f_1 = { 0f, 0f, 0f };
	Global_1950600.f_4 = { 0f, 0f, 0f };
	Global_1950600.f_7 = { 0f, 0f, 0f };
	Global_1950600.f_10 = 0f;
	Global_1950600.f_11 = 0f;
	Global_1950600.f_12 = 0;
	Global_1950600.f_13 = 0;
	Global_1950600.f_14 = { 0f, 0f, 0f };
	Global_1950600.f_17 = { 0f, 0f, 0f };
	Global_1950600.f_20 = { 0f, 0f, 0f };
	Global_1950600.f_23 = 0;
	Global_1950600.f_24 = 0;
}

bool func_89(var uParam0) // Position - 0xC697
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(uParam0, 0) || func_90(uParam0))
			return true;

	return false;
}

bool func_90(var uParam0) // Position - 0xC6CF
{
	int iVar0;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (DECORATOR::DECOR_EXIST_ON(uParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(uParam0, "MPBitset");
				return IS_BIT_SET(iVar0, 16);
			}
		}
	}

	return false;
}

bool func_91(var uParam0, var uParam1) // Position - 0xC71A
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
		bVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	else
		bVar0 = func_34();

	bVar1 = false;

	if (bVar0 == PLAYER::PLAYER_ID())
		if (func_103(15, false))
			bVar1 = true;
		else if (func_99(true))
			bVar1 = true;
	else
		bVar1 = true;

	if (!bVar1 && ENTITY::DOES_ENTITY_EXIST(uParam0) && !ENTITY::IS_ENTITY_DEAD(uParam0, 0) && NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))
	{
		bVar2 = Global_2359296[func_98() /*5574*/].f_681.f_2;
	
		if (bVar2 > -1 && bVar2 < 607)
			if (IS_BIT_SET(Global_1583772[bVar2 /*143*/].f_104, 8))
				bVar1 = true;
	}

	if (!(ENTITY::DOES_ENTITY_EXIST(uParam0) && !ENTITY::IS_ENTITY_DEAD(uParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1) || !(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1)) || bVar0 == func_34() || !func_38(bVar0, false, false) || !bVar1 || func_92(uParam0))
		return false;

	return true;
}

bool func_92(var uParam0) // Position - 0xC877
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (func_94(PLAYER::PLAYER_ID()) == 3)
		if (func_93(uParam0) != -1)
			return true;

	if (Global_1950625)
		return true;

	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("SANCHEZ"):
		case joaat("SANCHEZ2"):
		case joaat("BLAZER"):
		case joaat("BLAZER3"):
		case joaat("SURFER"):
		case joaat("SURFER2"):
		case joaat("BIFTA"):
		case joaat("SOVEREIGN"):
		case joaat("HEXER"):
		case joaat("DUNE"):
		case joaat("DUNE2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("BLISTA3"):
		case joaat("STALION2"):
		case joaat("GAUNTLET2"):
		case joaat("DOMINATOR2"):
		case joaat("BUFFALO3"):
		case joaat("MASSACRO2"):
		case joaat("JESTER2"):
		case joaat("OMNIS"):
		case joaat("BF400"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CLIFFHANGER"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
		case joaat("LE7B"):
		case joaat("TYRUS"):
		case joaat("LYNX"):
		case joaat("SHEAVA"):
		case joaat("CHIMERA"):
		case joaat("SANCTUS"):
		case joaat("BLAZER4"):
		case joaat("MANCHEZ"):
		case joaat("RAPTOR"):
		case joaat("BLAZER5"):
		case joaat("STRYDER"):
		case joaat("FORMULA"):
		case joaat("FORMULA2"):
		case joaat("MINITANK"):
		case joaat("OUTLAW"):
		case joaat("VAGRANT"):
		case joaat("OPENWHEEL1"):
		case joaat("OPENWHEEL2"):
		case joaat("MANCHEZ2"):
		case joaat("SQUADDIE"):
		case joaat("WINKY"):
		case joaat("VETO"):
		case joaat("VETO2"):
		case joaat("VERUS"):
		case joaat("LM87"):
		case joaat("GP1"):
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("INSURGENT3"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("THRUSTER"):
		case joaat("TERBYTE"):
		case joaat("RCBANDITO"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("RROCKET"):
		case joaat("BLAZER2"):
		case joaat("BURRITO2"):
		case joaat("IGNUS"):
		case joaat("DRAUGUR"):
		case joaat("BRICKADE2"):
		case joaat("JOURNEY2"):
		case joaat("STINGERTT"):
		case joaat("DRIFTTAMPA"):
		case joaat("TURISMO3"):
		case joaat("POLGAUNTLET"):
		case joaat("POLICE5"):
		case joaat("POLICE4"):
		case joaat("BALLER8"):
		case joaat("VIGERO3"):
		case joaat("TERMINUS"):
		case joaat("POLIMPALER5"):
		case joaat("POLIMPALER6"):
		case joaat("POLGREENWOOD"):
		case joaat("POLDORADO"):
		case joaat("POLDOMINATOR10"):
		case joaat("POLTERMINUS"):
		case joaat("POLCOQUETTE4"):
		case joaat("POLCARACARA"):
		case joaat("POLFACTION2"):
		case joaat("POLICEB2"):
		case joaat("WOODLANDER"):
		case joaat("POLBUFFALO"):
		case joaat("POLBUFFALO6"):
		case joaat("FMJ2"):
		case joaat("IGNUS2"):
		case joaat("PRANGER"):
			return true;
	
		case joaat("YOUGA"):
		case joaat("YOUGA2"):
			if (VEHICLE::GET_VEHICLE_MOD(uParam0, 7) != -1)
				return true;
			break;
	
		case joaat("SURANO"):
			if (VEHICLE::GET_VEHICLE_MOD(uParam0, 5) == 1)
				return true;
			break;
	
		case joaat("CLUB"):
			if (VEHICLE::GET_VEHICLE_MOD(uParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(uParam0, 7) == 1 || VEHICLE::GET_VEHICLE_MOD(uParam0, 7) == 7)
				return true;
			break;
	
		case joaat("YOSEMITE3"):
			if (VEHICLE::GET_VEHICLE_MOD(uParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(uParam0, 45) == 5 || VEHICLE::GET_VEHICLE_MOD(uParam0, 45) == 6)
				return true;
			break;
	}

	return false;
}

int func_93(var uParam0) // Position - 0xCBE0
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
		if (DECORATOR::DECOR_EXIST_ON(uParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(uParam0, "FMDeliverableID");

	return -1;
}

int func_94(bool bParam0) // Position - 0xCC0F
{
	if (func_97(bParam0) == 233)
		return func_95(bParam0);

	return -1;
}

int func_95(bool bParam0) // Position - 0xCC2C
{
	if (func_96(bParam0, false))
		return Global_1892798[bParam0 /*615*/].f_10.f_183;

	return -1;
}

bool func_96(bool bParam0, bool bParam1) // Position - 0xCC4F
{
	if (func_33(bParam0))
		if (Global_1892798[bParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892798[bParam0 /*615*/].f_10.f_33 != -1)
			return true;

	return false;
}

bool func_97(bool bParam0) // Position - 0xCC93
{
	if (func_33(bParam0))
		if (func_96(bParam0, false))
			return Global_1892798[bParam0 /*615*/].f_10.f_34;

	return -1;
}

int func_98() // Position - 0xCCBF
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

bool func_99(bool bParam0) // Position - 0xCCCC
{
	return func_100(PLAYER::PLAYER_ID(), bParam0);
}

bool func_100(bool bParam0, bool bParam1) // Position - 0xCCDE
{
	return func_101(bParam0, bParam1, 1);
}

int func_101(bool bParam0, bool bParam1, int iParam2) // Position - 0xCCEF
{
	bool bVar0;

	if (!func_33(bParam0))
		return 0;

	if (!bParam1)
		if (func_102(bParam0, iParam2))
			return 0;

	bVar0 = Global_1892798[bParam0 /*615*/].f_10;

	if (func_33(bVar0) && Global_1892798[bVar0 /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

bool func_102(bool bParam0, int iParam1) // Position - 0xCD4B
{
	if (func_33(bParam0))
		if (func_33(Global_1892798[bParam0 /*615*/].f_10))
			if (Global_1892798[bParam0 /*615*/].f_10 == bParam0 && Global_1892798[bParam0 /*615*/].f_10.f_433 == iParam1)
				return true;

	return false;
}

bool func_103(int iParam0, bool bParam1) // Position - 0xCD9A
{
	int iVar0;
	int iVar1;

	if (bParam1)
		if (iParam0 == 15)
			return true;

	if (func_108(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return true;
		}
	}

	iVar0 = func_105(iParam0);
	iVar1 = iParam0;
	return IS_BIT_SET(iVar0, func_104(iVar1));
}

int func_104(int iParam0) // Position - 0xCDF8
{
	return iParam0 % 32;
}

int func_105(int iParam0) // Position - 0xCE05
{
	int iVar0;

	iVar0 = func_74(func_106(iParam0), -1);
	return iVar0;
}

int func_106(int iParam0) // Position - 0xCE1C
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_107(iVar0);

	switch (iVar1)
	{
		case 0:
			return 1291;
	}

	return 1291;
}

int func_107(int iParam0) // Position - 0xCE49
{
	return iParam0 / 32;
}

bool func_108(bool bParam0) // Position - 0xCE56
{
	if (bParam0 != func_34())
		if (func_109(bParam0) && Global_2658294[bParam0 /*468*/].f_325.f_11 == bParam0)
			return true;

	return false;
}

bool func_109(bool bParam0) // Position - 0xCE8B
{
	if (bParam0 != func_34())
		if (func_38(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_110(Global_2658294[bParam0 /*468*/].f_325.f_8) == 22;

	return false;
}

int func_110(bool bParam0) // Position - 0xCED2
{
	switch (bParam0)
	{
		case false:
		case true:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 180:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 181:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	
		case 174:
		case 175:
		case 176:
			return 34;
	
		case 177:
		case 178:
		case 179:
			return 35;
	}

	return -1;
}

void func_111(var uParam0, int iParam1) // Position - 0xD43B
{
	var uVar0;
	int iVar1;

	iVar1 = func_113(iParam1);
	func_112(iVar1, &uVar0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(uParam0, uVar0);
}

bool func_112(int iParam0, var uParam1) // Position - 0xD45C
{
	*uParam1 = -1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
	
		case 1:
			*uParam1 = 5;
			break;
	
		case 2:
			*uParam1 = 6;
			break;
	
		case 3:
			*uParam1 = 7;
			break;
	
		case 4:
			*uParam1 = 111;
			break;
	
		case 5:
			*uParam1 = 112;
			break;
	
		case 6:
			*uParam1 = 107;
			break;
	
		case 7:
			*uParam1 = 104;
			break;
	
		case 8:
			*uParam1 = 98;
			break;
	
		case 9:
			*uParam1 = 100;
			break;
	
		case 10:
			*uParam1 = 102;
			break;
	
		case 11:
			*uParam1 = 99;
			break;
	
		case 12:
			*uParam1 = 105;
			break;
	
		case 13:
			*uParam1 = 106;
			break;
	
		case 14:
			*uParam1 = 37;
			break;
	
		case 15:
			*uParam1 = 90;
			break;
	
		case 16:
			*uParam1 = 88;
			break;
	
		case 17:
			*uParam1 = 89;
			break;
	
		case 18:
			*uParam1 = 91;
			break;
	
		case 19:
			*uParam1 = 38;
			break;
	
		case 20:
			*uParam1 = 138;
			break;
	
		case 21:
			*uParam1 = 36;
			break;
	
		case 22:
			*uParam1 = 27;
			break;
	
		case 23:
			*uParam1 = 28;
			break;
	
		case 24:
			*uParam1 = 29;
			break;
	
		case 25:
			*uParam1 = 150;
			break;
	
		case 26:
			*uParam1 = 30;
			break;
	
		case 27:
			*uParam1 = 31;
			break;
	
		case 28:
			*uParam1 = 32;
			break;
	
		case 29:
			*uParam1 = 35;
			break;
	
		case 30:
			*uParam1 = 135;
			break;
	
		case 31:
			*uParam1 = 137;
			break;
	
		case 32:
			*uParam1 = 136;
			break;
	
		case 33:
			*uParam1 = 71;
			break;
	
		case 34:
			*uParam1 = 145;
			break;
	
		case 35:
			*uParam1 = 63;
			break;
	
		case 36:
			*uParam1 = 64;
			break;
	
		case 37:
			*uParam1 = 65;
			break;
	
		case 38:
			*uParam1 = 66;
			break;
	
		case 39:
			*uParam1 = 67;
			break;
	
		case 40:
			*uParam1 = 68;
			break;
	
		case 41:
			*uParam1 = 69;
			break;
	
		case 42:
			*uParam1 = 73;
			break;
	
		case 43:
			*uParam1 = 70;
			break;
	
		case 44:
			*uParam1 = 74;
			break;
	
		case 45:
			*uParam1 = 51;
			break;
	
		case 46:
			*uParam1 = 53;
			break;
	
		case 47:
			*uParam1 = 54;
			break;
	
		case 48:
			*uParam1 = 92;
			break;
	}

	return *uParam1 != -1;
}

int func_113(int iParam0) // Position - 0xD71E
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 36;
	
		case 2:
			return 35;
	
		case 3:
			return 46;
	
		case 4:
			return 48;
	
		case 5:
			return 16;
	
		case 6:
			return 14;
	
		case 7:
			return 19;
	
		case 8:
			return 22;
	
		case 9:
			return 31;
	
		case 10:
			return 30;
	
		case 11:
			return 33;
	
		case 12:
			return 34;
	
		default:
		
	}

	return 0;
}

int func_114(int iParam0, int iParam1, int iParam2) // Position - 0xD7BC
{
	if (iParam0 == 222 && iParam1 == 222 && iParam2 == 255)
		return 0;

	if (iParam0 == 2 && iParam1 == 21 && iParam2 == 255)
		return 1;

	if (iParam0 == 3 && iParam1 == 83 && iParam2 == 255)
		return 2;

	if (iParam0 == 0 && iParam1 == 255 && iParam2 == 140)
		return 3;

	if (iParam0 == 94 && iParam1 == 255 && iParam2 == 1)
		return 4;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 0)
		return 5;

	if (iParam0 == 255 && iParam1 == 150 && iParam2 == 5)
		return 6;

	if (iParam0 == 255 && iParam1 == 62 && iParam2 == 0)
		return 7;

	if (iParam0 == 255 && iParam1 == 1 && iParam2 == 1)
		return 8;

	if (iParam0 == 255 && iParam1 == 50 && iParam2 == 100)
		return 9;

	if (iParam0 == 255 && iParam1 == 5 && iParam2 == 190)
		return 10;

	if (iParam0 == 35 && iParam1 == 1 && iParam2 == 255)
		return 11;

	if (iParam0 == 15 && iParam1 == 3 && iParam2 == 255)
		return 12;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_115() && Global_1576249)
		if (iParam0 == Global_1576250 && iParam1 == Global_1576251 && iParam2 == Global_1576252)
			return 13;

	return 0;
}

int func_115() // Position - 0xD99E
{
	var uVar0;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			uVar0 = { func_116() };
		
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uVar0))
				return 1;
		}
	}

	return 0;
}

struct<13> func_116() // Position - 0xD9E6
{
	var uVar0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0, 13);
	return uVar0;
}

bool func_117(var uParam0) // Position - 0xD9FB
{
	switch (ENTITY::GET_ENTITY_MODEL(uParam0))
	{
		case joaat("DEATHBIKE2"):
			return true;
	}

	return false;
}

bool func_118(int iParam0, var uParam1) // Position - 0xDA1C
{
	*uParam1 = -1f;

	switch (iParam0)
	{
		case joaat("DUNE5"):
			*uParam1 = 1f;
			break;
	
		case joaat("BOXVILLE5"):
			*uParam1 = 1f;
			break;
	
		case joaat("WASTELANDER"):
			*uParam1 = 1f;
			break;
	
		case joaat("ALPHAZ1"):
			*uParam1 = 0.2f;
			break;
	
		case joaat("BOMBUSHKA"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("HOWARD"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("HUNTER"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("MICROLIGHT"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("MOGUL"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("MOLOTOK"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("NOKOTA"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("PYRO"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("ROGUE"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("SEABREEZE"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("STARLING"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("TULA"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("KHANJALI"):
			*uParam1 = 0.6f;
			break;
	
		case joaat("BRUISER"):
			*uParam1 = 1f;
			break;
	
		case joaat("BRUISER2"):
			*uParam1 = 1f;
			break;
	
		case joaat("BRUISER3"):
			*uParam1 = 1f;
			break;
	
		case joaat("BRUTUS"):
			*uParam1 = 1f;
			break;
	
		case joaat("BRUTUS2"):
			*uParam1 = 1f;
			break;
	
		case joaat("BRUTUS3"):
			*uParam1 = 1f;
			break;
	
		case joaat("CERBERUS"):
			*uParam1 = 1f;
			break;
	
		case joaat("CERBERUS2"):
			*uParam1 = 1f;
			break;
	
		case joaat("CERBERUS3"):
			*uParam1 = 1f;
			break;
	
		case joaat("DEATHBIKE"):
			*uParam1 = 1f;
			break;
	
		case joaat("DEATHBIKE2"):
			*uParam1 = 1f;
			break;
	
		case joaat("DEATHBIKE3"):
			*uParam1 = 1f;
			break;
	
		case joaat("DOMINATOR4"):
			*uParam1 = 1f;
			break;
	
		case joaat("DOMINATOR5"):
			*uParam1 = 1f;
			break;
	
		case joaat("DOMINATOR6"):
			*uParam1 = 1f;
			break;
	
		case joaat("IMPALER2"):
			*uParam1 = 1f;
			break;
	
		case joaat("IMPALER3"):
			*uParam1 = 1f;
			break;
	
		case joaat("IMPALER4"):
			*uParam1 = 1f;
			break;
	
		case joaat("IMPERATOR"):
			*uParam1 = 1f;
			break;
	
		case joaat("IMPERATOR2"):
			*uParam1 = 1f;
			break;
	
		case joaat("IMPERATOR3"):
			*uParam1 = 1f;
			break;
	
		case joaat("ISSI4"):
			*uParam1 = 1f;
			break;
	
		case joaat("ISSI5"):
			*uParam1 = 1f;
			break;
	
		case joaat("ISSI6"):
			*uParam1 = 1f;
			break;
	
		case joaat("MONSTER3"):
			*uParam1 = 1f;
			break;
	
		case joaat("MONSTER4"):
			*uParam1 = 1f;
			break;
	
		case joaat("MONSTER5"):
			*uParam1 = 1f;
			break;
	
		case joaat("SCARAB"):
			*uParam1 = 1f;
			break;
	
		case joaat("SCARAB2"):
			*uParam1 = 1f;
			break;
	
		case joaat("SCARAB3"):
			*uParam1 = 1f;
			break;
	
		case joaat("SLAMVAN4"):
			*uParam1 = 1f;
			break;
	
		case joaat("SLAMVAN5"):
			*uParam1 = 1f;
			break;
	
		case joaat("SLAMVAN6"):
			*uParam1 = 1f;
			break;
	
		case joaat("ZR380"):
			*uParam1 = 1f;
			break;
	
		case joaat("ZR3802"):
			*uParam1 = 1f;
			break;
	
		case joaat("ZR3803"):
			*uParam1 = 1f;
			break;
	}

	return *uParam1 != -1f;
}

void func_119(var uParam0, var uParam1) // Position - 0xDD1D
{
	if (func_66(ENTITY::GET_ENTITY_MODEL(uParam0)))
		if (uParam1->f_9[44] == 2)
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 0, 1);
		else
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 1, 1);

	if (func_123(ENTITY::GET_ENTITY_MODEL(uParam0)))
	{
		if (IS_BIT_SET(uParam1->f_103, 0) || func_122(ENTITY::GET_ENTITY_MODEL(uParam0)))
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 0, 1);
			func_121(uParam0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 1, 1);
			func_120(uParam0);
		}
	}

	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("IGNUS2"))
		if (uParam1->f_9[6] == 1)
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 0, 1);
		else
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(uParam0, 1, 1);
}

void func_120(var uParam0) // Position - 0xDDC2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", 2))
			if (DECORATOR::DECOR_EXIST_ON(uParam0, "MLJ"))
				DECORATOR::DECOR_REMOVE(uParam0, "MLJ");
}

void func_121(var uParam0) // Position - 0xDDF7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", 2))
			if (!DECORATOR::DECOR_EXIST_ON(uParam0, "MLJ"))
				DECORATOR::DECOR_SET_BOOL(uParam0, "MLJ", 1);
}

bool func_122(int iParam0) // Position - 0xDE2E
{
	switch (iParam0)
	{
		case joaat("JESTER5"):
		case joaat("CHEETAH3"):
			return true;
	}

	return false;
}

bool func_123(int iParam0) // Position - 0xDE51
{
	if (!Global_80305 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	switch (iParam0)
	{
		case joaat("FELTZER3"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 0);
	
		case joaat("COMET5"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 1);
	
		case joaat("BATI2"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 2);
	
		case joaat("STINGERGT"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 3);
	
		case joaat("SANCHEZ"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 4);
	
		case joaat("SANCHEZ2"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 5);
	
		case joaat("INFERNUS"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 6);
	
		case joaat("COG55"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 7);
	
		case joaat("NINEF"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 8);
	
		case joaat("NINEF2"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 9);
	
		case joaat("CHEBUREK"):
		case joaat("DRIFTCHEBUREK"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 10);
	
		case joaat("SAVESTRA"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 11);
	
		case joaat("XA21"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 12);
	
		case joaat("S80"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 13);
	
		case joaat("DOUBLE"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 14);
	
		case joaat("BUFFALO2"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 15);
	
		case joaat("ZTYPE"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 16);
	
		case joaat("COG552"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 17);
	
		case joaat("BALLER5"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 18);
	
		case joaat("BATI"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 19);
	
		case joaat("POLGAUNTLET"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 20);
	
		case joaat("POLGREENWOOD"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 21);
	
		case joaat("WEEVIL2"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 22);
	
		case joaat("ZENTORNO"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 23);
	
		case joaat("JESTER4"):
		case joaat("DRIFTJESTER"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 24);
	
		case joaat("LE7B"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 25);
	
		case joaat("DUKES2"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 26);
	
		case joaat("EUDORA"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 27);
	
		case joaat("BROADWAY"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 28);
	
		case joaat("CARACARA2"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 29);
	
		case joaat("COMET7"):
			return IS_BIT_SET(*Global_262145.f_36822 /* Tunable: -654758752 */, 30);
	
		case joaat("FUTO2"):
		case joaat("DRIFTFUTO"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 0);
	
		case joaat("MANCHEZ2"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 1);
	
		case joaat("ZOMBIEB"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 2);
	
		case joaat("SHOTARO"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 3);
	
		case joaat("PIPISTRELLO"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 4);
	
		case joaat("POLICE5"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 5);
	
		case joaat("POLIMPALER5"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 6);
	
		case joaat("POLIMPALER6"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 7);
	
		case joaat("RUMPO3"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 8);
	
		case joaat("DRIFTGAUNTLET4"):
		case joaat("GAUNTLET4"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 9);
	
		case joaat("COMET6"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 10);
	
		case joaat("KRIEGER"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 11);
	
		case joaat("VIGERO2"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 12);
	
		case joaat("POLCARACARA"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 13);
	
		case joaat("POLTERMINUS"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 14);
	
		case joaat("POLCOQUETTE4"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 15);
	
		case joaat("POLFACTION2"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 16);
	
		case joaat("ZORRUSSO"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 17);
	
		case joaat("TIGON"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 18);
	
		case joaat("CYCLONE"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 19);
	
		case joaat("NEO"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 20);
	
		case joaat("LOCUST"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 21);
	
		case joaat("JESTER5"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 22);
	
		case joaat("DRIFTCHAVOSV6"):
		case joaat("CHAVOSV6"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 23);
	
		case joaat("JB7002"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 24);
	
		case joaat("COQUETTE6"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 25);
	
		case joaat("URANUS"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 26);
	
		case joaat("FIREBOLT"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 27);
	
		case joaat("BANSHEE3"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 28);
	
		case joaat("CHEETAH3"):
			return IS_BIT_SET(*Global_262145.f_36823 /* Tunable: -1019215570 */, 29);
	
		case joaat("HELLION"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 0);
	
		case joaat("SCHAFTER4"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 1);
	
		case joaat("SCHAFTER6"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 2);
	
		case joaat("XLS2"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 3);
	
		case joaat("RAIDEN"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 4);
	
		case joaat("AKUMA"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 5);
	
		case joaat("SHEAVA"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 6);
	
		case joaat("PARAGON"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 7);
	
		case joaat("VISERIS"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 8);
	
		case joaat("IMORGON"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 9);
	
		case joaat("PFISTER811"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 10);
	
		case joaat("COMET2"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 11);
	
		case joaat("TORERO"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 12);
	
		case joaat("TYRUS"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 13);
	
		case joaat("HAKUCHOU"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 14);
	
		case joaat("SC1"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 15);
	
		case joaat("STANIER"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 16);
	
		case joaat("ZION3"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 17);
	
		case joaat("COGNOSCENTI2"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 18);
	
		case joaat("DEVIANT"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 19);
	
		case joaat("CONTENDER"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 20);
	
		case joaat("REVOLTER"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 21);
	
		case joaat("GP1"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 22);
	
		case joaat("HERMES"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 23);
	
		case joaat("SWINGER"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 24);
	
		case joaat("POLICE4"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 25);
	
		case joaat("POLDOMINATOR10"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 26);
	
		case joaat("POLDORADO"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 27);
	
		case joaat("JUGULAR"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 28);
	
		case joaat("TENF"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 29);
	
		case joaat("TENF2"):
			return IS_BIT_SET(*Global_262145.f_37146 /* Tunable: -596902856 */, 30);
	
		case joaat("BALLER6"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 0);
	
		case joaat("DEVESTE"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 1);
	
		case joaat("TORERO2"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 2);
	
		case joaat("ENTITY3"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 3);
	
		case joaat("HAKUCHOU2"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 4);
	
		case joaat("CALICO"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 5);
	
		case joaat("DOMINATOR8"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 6);
	
		case joaat("DOMINATOR7"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 7);
	
		case joaat("EUROS"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 8);
	
		case joaat("VSTR"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 9);
	
		case joaat("DOMINATOR"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 10);
	
		case joaat("REEVER"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 11);
	
		case joaat("REMUS"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 12);
	
		case joaat("IMPALER6"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 13);
	
		case joaat("DUBSTA3"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 14);
	
		case joaat("SHINOBI"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 15);
	
		case joaat("KURUMA"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 16);
	
		case joaat("COGNOSCENTI"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 17);
	
		case joaat("XLS"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 18);
	
		case joaat("EVERON3"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 19);
	
		case joaat("WOODLANDER"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 20);
	
		case joaat("TAMPA4"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 21);
	
		case joaat("POLICEB2"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 22);
	
		case joaat("MINIMUS"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 23);
	
		case joaat("SENTINEL5"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 24);
	
		case joaat("L352"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 25);
	
		case joaat("DRIFTL352"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 26);
	
		case joaat("SUZUME"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 27);
	
		case joaat("RAPIDGT4"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 28);
	
		case joaat("DRIFTHARDY"):
		case joaat("HARDY"):
			return IS_BIT_SET(*Global_262145.f_37147 /* Tunable: -1447782710 */, 29);
	
		case joaat("CONADA"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 0);
	
		case joaat("ALPHAZ1"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 1);
	
		case joaat("CARGOBOB5"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 2);
	
		case joaat("HOWARD"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 3);
	
		case joaat("CARGOBOB"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 4);
	
		case joaat("CARGOBOB2"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 5);
	
		case joaat("SWIFT2"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 6);
	
		case joaat("DODO"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 7);
	
		case joaat("VOLATUS"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 8);
	
		case joaat("MAVERICK"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 9);
	
		case joaat("SUPERVOLITO"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 10);
	
		case joaat("SUPERVOLITO2"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 11);
	
		case joaat("LUXOR2"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 12);
	
		case joaat("LUXOR"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 13);
	
		case joaat("BESRA"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 14);
	
		case joaat("FUTO"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 15);
	
		case joaat("SCHAFTER3"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 16);
	
		case joaat("SCHAFTER5"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 17);
	
		case joaat("IGNUS"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 18);
	
		case joaat("MANCHEZ"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 19);
	
		case joaat("BF400"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 20);
	
		case joaat("BALLER4"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 21);
	
		case joaat("ARDENT"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 22);
	
		case joaat("ELEGY2"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 23);
	
		case joaat("VORTEX"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 24);
	
		case joaat("KOMODA"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 25);
	
		case joaat("PIZZABOY"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 26);
	
		case joaat("CAVALCADE3"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 27);
	
		case joaat("BTYPE"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 28);
	
		case joaat("BTYPE3"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 29);
	
		case joaat("MESA3"):
			return IS_BIT_SET(*Global_262145.f_37636 /* Tunable: -2015896079 */, 30);
	
		case joaat("RAPTOR"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 0);
	
		case joaat("GAUNTLET"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 1);
	
		case joaat("BODHI2"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 2);
	
		case joaat("BRAWLER"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 3);
	
		case joaat("MASSACRO"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 4);
	
		case joaat("MASSACRO2"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 5);
	
		case joaat("CHEETAH"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 6);
	
		case joaat("HEXER"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 7);
	
		case joaat("VACCA"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 8);
	
		case joaat("PATRIOT"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 9);
	
		case joaat("BLAZER"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 10);
	
		case joaat("BULLET"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 11);
	
		case joaat("FMJ"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 12);
	
		case joaat("PEYOTE2"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 13);
	
		case joaat("BAGGER"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 14);
	
		case joaat("ISSI2"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 15);
	
		case joaat("ISSI7"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 16);
	
		case joaat("SENTINEL2"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 17);
	
		case joaat("NIOBE"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 18);
	
		case joaat("ITALI2"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 19);
	
		case joaat("ASTRALE"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 20);
	
		case joaat("GT750"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 21);
	
		case joaat("LUIVA"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 22);
	
		case joaat("XTREME"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 23);
	
		case joaat("SENTINEL6"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 24);
	
		case joaat("DRIFTKEITORA"):
		case joaat("KEITORA"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 25);
	
		case joaat("POLBUFFALO6"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 26);
	
		case joaat("POLBUFFALO"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 27);
	
		case joaat("FMJ2"):
			return IS_BIT_SET(*Global_262145.f_37637 /* Tunable: 1070976506 */, 28);
	
		default:
		
	}

	return false;
}

void func_124(var uParam0, var uParam1, bool bParam2, bool bParam3) // Position - 0xEE16
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		uParam1->f_66 != 0;
	
		if (!func_149(uParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0, *uParam1);
		}
	
		if (uParam1->f_66 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("CASCO"))
		{
			iVar0 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_148(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_148(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_148(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_148(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("FORMULA") || uParam1->f_66 == joaat("FORMULA2"))
		{
			for (iVar2 = 1; iVar2 <= 9; iVar2 = iVar2 + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_148(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_148(iVar2));
				}
			}
		}
		else if (uParam1->f_66 == joaat("OPENWHEEL1"))
		{
			for (iVar3 = 1; iVar3 <= 6; iVar3 = iVar3 + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_148(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_148(iVar3));
				}
			}
		}
		else if (uParam1->f_66 == joaat("OPENWHEEL2"))
		{
			for (iVar4 = 1; iVar4 <= 11; iVar4 = iVar4 + 1)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_148(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_148(iVar4));
					}
				}
			}
		}
		else if (uParam1->f_66 == joaat("SURFER3"))
		{
			for (iVar5 = 1; iVar5 <= 2; iVar5 = iVar5 + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_148(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_148(iVar5));
				}
			}
		}
		else if (uParam1->f_66 == joaat("DINGHY5"))
		{
			if (IS_BIT_SET(uParam1->f_77, func_148(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_148(4));
			}
		}
		else if (uParam1->f_66 == joaat("COQUETTE4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(uParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == joaat("YOSEMITE2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_148(1));
		}
		else if (uParam1->f_66 == joaat("DRIFTYOSEMITE"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_148(1));
		}
		else if (uParam1->f_66 == joaat("HOTKNIFE"))
		{
			for (iVar6 = 1; iVar6 <= 2; iVar6 = iVar6 + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_148(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_148(iVar6));
				}
			}
		}
	
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(uParam0, 0);
		
			if (VEHICLE::GET_VEHICLE_MOD(uParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(uParam0, 1);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(uParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(uParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(uParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(uParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_146(uParam1->f_5) || func_146(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(uParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_145(uParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_144())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(uParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_143(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(uParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(uParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(uParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0, 0);
			VEHICLE::SET_DRIFT_TYRES(uParam0, 0);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(uParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(uParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(uParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(uParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(uParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(uParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(uParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(uParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uParam0)))
					if (uParam1->f_69 == 6)
						func_142(uParam0, uParam1->f_69);
				else
					func_142(uParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(uParam0, 0))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(uParam0, 1);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(uParam0, 1);
	
		if (bParam3)
			func_133(&uParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (iVar7 = 0; iVar7 <= 11; iVar7 = iVar7 + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_148(iVar7 + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, iVar7 + 1))
						VEHICLE::SET_VEHICLE_EXTRA(uParam0, iVar7 + 1, 0);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, iVar7 + 1))
					VEHICLE::SET_VEHICLE_EXTRA(uParam0, iVar7 + 1, 1);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("SHEAVA") || ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("OMNIS") || ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("LE7B"))
			if (VEHICLE::GET_VEHICLE_MOD(uParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(uParam0, 1, 0);
	
		if (func_127() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(uParam0) && !VEHICLE::IS_VEHICLE_MODEL(uParam0, joaat("AVENGER")) && !VEHICLE::IS_VEHICLE_MODEL(uParam0, func_126(true)))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (!IS_BIT_SET(uParam1->f_77, 22) && func_125(uParam0, 5f))
					VEHICLE::CONTROL_LANDING_GEAR(uParam0, 3);
				else
					VEHICLE::CONTROL_LANDING_GEAR(uParam0, 2);
			else
				VEHICLE::CONTROL_LANDING_GEAR(uParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(uParam0, "IgnoredByQuickSave", 1);
		else
			DECORATOR::DECOR_SET_BOOL(uParam0, "IgnoredByQuickSave", 0);
	}
}

bool func_125(var uParam0, float fParam1) // Position - 0xF537
{
	var uVar0;
	var uVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(uVar0, &uVar3, 0, 0))
			if (MISC::ABSF(uVar0.f_2 - uVar3) > fParam1)
				return true;
		else if (uVar0.f_2 > PATHFIND::GET_APPROX_FLOOR_FOR_POINT(uVar0, uVar0.f_1) + fParam1)
			return true;
		else if (uVar0.f_2 > 300f)
			return true;
	}

	return false;
}

int func_126(bool bParam0) // Position - 0xF5A8
{
	if (bParam0)
		return joaat("AVENGER3");

	return joaat("AVENGER");
}

int func_127() // Position - 0xF5C2
{
	if (*Global_4718592.f_128128 == 6 || *Global_4718592.f_128128 == 7 || *Global_4718592.f_128128 == 18 || *Global_4718592.f_128128 == 19 && Global_4718592.f_2 == 20)
		return 0;

	if (func_131(7))
		if (func_129(Global_2673274.f_4.f_16) || func_128(Global_2673274.f_4.f_16))
			return 0;

	return 1;
}

bool func_128(bool bParam0) // Position - 0xF651
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 != -1)
		return Global_1882717[bVar0 /*315*/].f_82.f_75 != 0;

	return false;
}

bool func_129(bool bParam0) // Position - 0xF676
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 != -1)
		return func_130(bParam0, 9);

	return false;
}

bool func_130(bool bParam0, int iParam1) // Position - 0xF694
{
	return IS_BIT_SET(Global_1892798[bParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_131(int iParam0) // Position - 0xF6AC
{
	return func_132(&(Global_2673274.f_194), iParam0);
}

bool func_132(var uParam0, int iParam1) // Position - 0xF6C0
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam1;
	iVar1 = iVar0 / 32;
	iVar2 = iVar0 % 32;
	return IS_BIT_SET(uParam0->[iVar1], iVar2);
}

int func_133(var uParam0, var uParam1, var uParam2) // Position - 0xF6E3
{
	int iVar0;
	int iVar1;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (iVar0 = 0; iVar0 < *uParam1; iVar0 = iVar0 + 1)
	{
		iVar1 = iVar0;
	
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if (uParam1->[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, 1);
			
				if (uParam1->[iVar0] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[iVar0] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, 0);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) != uParam1->[iVar0] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
		
			if (uParam1->[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] - 1, uParam2->[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] - 1, uParam2->[1] > 0);
				}
				else if (func_140(*uParam0, iVar1, uParam1->[iVar0] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] - 1, 0);
				}
			}
		}
	}

	if (func_62(*uParam0))
		if (uParam1->[11] > 0)
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 11, uParam1->[11] - 1, 0);

	if (func_138(ENTITY::GET_ENTITY_MODEL(*uParam0)) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_136(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_136(*uParam0, uParam1->[38] - 1), 0);

	func_135(uParam0);

	if (func_134(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
	}

	return 1;
}

bool func_134(var uParam0) // Position - 0xF8E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0) && VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(uParam0, 0);
	
		for (iVar0 = 0; iVar0 < 49; iVar0 = iVar0 + 1)
		{
			iVar1 = iVar0;
		
			if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(uParam0, iVar1) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar3, VEHICLE::GET_MOD_TEXT_LABEL(uParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(uParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&uVar3);
			
				if (iVar2 != 0)
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */) || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
						return true;
			}
		}
	}

	return false;
}

void func_135(var uParam0) // Position - 0xF9BD
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("STARLING"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, 0);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case joaat("SLAMTRUCK"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, 0);
			break;
	
		default:
			if (func_62(*uParam0))
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, 18, 1);
			break;
	}
}

int func_136(var uParam0, int iParam1) // Position - 0xFA28
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(uParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case joaat("FACTION3"):
				return 3;
		}
	
		iVar0 = func_137(uParam0, 38) + 1;
		iVar1 = func_137(uParam0, 24) + 1;
		fVar2 = BUILTIN::TO_FLOAT(iParam1 + 1) / BUILTIN::TO_FLOAT(iVar0);
		iVar3 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar1) * fVar2) - 1;
	
		if (iVar3 < 0)
			iVar3 = 0;
	
		if (iVar3 >= iVar0)
			iVar3 = iVar0 - 1;
	
		return iVar3;
	}

	return 0;
}

bool func_137(var uParam0, int iParam1) // Position - 0xFB11
{
	bool bVar0;

	if (STREAMING::IS_MODEL_VALID(Global_153827) && VEHICLE::IS_VEHICLE_MODEL(uParam0, Global_153827) && Global_153828 == iParam1)
		return Global_153829;

	for (bVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(uParam0, iParam1) - 1; bVar0 >= 0 && func_140(uParam0, iParam1, bVar0); bVar0 = bVar0 - 1)
	{
	}

	return bVar0;
}

bool func_138(int iParam0) // Position - 0xFB73
{
	if (func_139(iParam0, 1))
		return true;

	switch (iParam0)
	{
		case joaat("POLFACTION2"):
			return true;
	}

	return false;
}

bool func_139(int iParam0, int iParam1) // Position - 0xFB9E
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
	
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("SABREGT2"):
			if (!Global_262145.f_14794 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
				return false;
			else
				return true;
			break;
	
		case joaat("TORNADO5"):
			if (!Global_262145.f_14795 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
				return false;
			else
				return true;
			break;
	
		case joaat("VIRGO2"):
			if (!Global_262145.f_14793 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
				return false;
			else
				return true;
			break;
	
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14796 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
				return false;
			else
				return true;
			break;
	
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14798 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
				return false;
			else
				return true;
			break;
	
		case joaat("FACTION3"):
			if (!Global_262145.f_14797 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
				return false;
			else
				return true;
			break;
	
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("COMET3"):
			if (Global_262145.f_19041 /* Tunable: ENABLE_IE_COMET3 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("DIABLOUS2"):
			if (Global_262145.f_19043 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("FCR2"):
			if (Global_262145.f_19047 /* Tunable: ENABLE_IE_FCR2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("ELEGY"):
			if (Global_262145.f_19044 /* Tunable: ENABLE_IE_ELEGY */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("NERO2"):
			if (Global_262145.f_19051 /* Tunable: ENABLE_IE_NERO2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("ITALIGTB2"):
			if (Global_262145.f_19049 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("SPECTER2"):
			if (Global_262145.f_19054 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20927 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("INSURGENT3"):
			if (Global_262145.f_20928 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("YOUGA3"):
		case joaat("GAUNTLET5"):
		case joaat("YOSEMITE3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("MANANA2"):
		case joaat("PEYOTE3"):
		case joaat("GLENDALE2"):
			return true;
	}

	return false;
}

bool func_140(var uParam0, int iParam1, int iParam2) // Position - 0xFF84
{
	if (!func_141() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2))
		return true;

	return false;
}

bool func_141() // Position - 0xFFA8
{
	return true;
}

void func_142(var uParam0, var uParam1) // Position - 0xFFB5
{
	int iVar0;
	int iVar1;

	if (VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(uParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(uParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(uParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(uParam0, uParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("TORNADO6") || ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("PEYOTE2"))
			return;
	
		if (iVar0 == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(uParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(uParam0, 24, iVar0, iVar1 == 1);
	}
}

bool func_143(int iParam0) // Position - 0x1002F
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
	
		default:
		
	}

	return false;
}

bool func_144() // Position - 0x1004F
{
	return DLC::IS_DLC_PRESENT(joaat("MPINDEPENDENCE"));
}

bool func_145(var uParam0) // Position - 0x10060
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(uParam0, "MPBitset"))
					iVar0 = DECORATOR::DECOR_GET_INT(uParam0, "MPBitset");
			
				return IS_BIT_SET(iVar0, 4);
			}
		}
	}

	return false;
}

int func_146(var uParam0) // Position - 0x100A8
{
	if (!func_141() && func_147(uParam0))
		return 1;

	return 0;
}

bool func_147(int iParam0) // Position - 0x100C8
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

int func_148(int iParam0) // Position - 0x1011B
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

bool func_149(var uParam0) // Position - 0x101CB
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		if (!func_150(PLAYER::PLAYER_ID(), -1))
			uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		return false;

	if (func_94(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (func_93(uParam0) != -1)
				return true;

	return false;
}

bool func_150(bool bParam0, int iParam1) // Position - 0x10252
{
	var uVar0;

	if (func_38(bParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), 0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iParam1, 0))
					return true;
		}
	}

	return false;
}

bool func_151(var uParam0, int iParam1) // Position - 0x1029F
{
	if (iParam1 == 0)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("JESTER4");
		uParam0->f_2 = { -2186.969f, 1133.193f, 29.14f };
		uParam0->f_5 = 104.776f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("JESTER4");
		uParam0->f_2 = { -2165.045f, 1086.494f, 28.037f };
		uParam0->f_5 = 84.029f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("JESTER4");
		uParam0->f_2 = { -2158.909f, 1122.865f, 28.029f };
		uParam0->f_5 = 275.171f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("SABREGT2");
		uParam0->f_2 = { -2203.007f, 1125.796f, 29.203f };
		uParam0->f_5 = 104.647f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("SABREGT2");
		uParam0->f_2 = { -2178.267f, 1095.497f, 28.097f };
		uParam0->f_5 = 272.49f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("SABREGT2");
		uParam0->f_2 = { -2146.942f, 1084.26f, 28.097f };
		uParam0->f_5 = 64.843f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 6)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("SABREGT2");
		uParam0->f_2 = { -2202.77f, 1084.578f, 29.203f };
		uParam0->f_5 = 264.647f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 7)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("DOMINATOR8");
		uParam0->f_2 = { -2186.986f, 1086.496f, 29.312f };
		uParam0->f_5 = 102.525f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 8)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("DOMINATOR8");
		uParam0->f_2 = { -2177.141f, 1126.924f, 28.199f };
		uParam0->f_5 = 282.22f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 9)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("DOMINATOR8");
		uParam0->f_2 = { -2187.171f, 1123.06f, 29.311f };
		uParam0->f_5 = 98.927f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 10)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MANANA2");
		uParam0->f_2 = { -2185.955f, 1109.241f, 29.236f };
		uParam0->f_5 = 86.364f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 11)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MANANA2");
		uParam0->f_2 = { -2164.252f, 1097.661f, 28.131f };
		uParam0->f_5 = 99.416f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 12)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MANANA2");
		uParam0->f_2 = { -2198.294f, 1148.431f, 29.217f };
		uParam0->f_5 = 94.89f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 13)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MANANA2");
		uParam0->f_2 = { -2186.849f, 1129.136f, 29.225f };
		uParam0->f_5 = 274.523f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("FR36");
		uParam0->f_2 = { -2204.765f, 1116.982f, 29.323f };
		uParam0->f_5 = 309.354f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 15)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("FR36");
		uParam0->f_2 = { -2177.001f, 1133.992f, 28.21f };
		uParam0->f_5 = 285.879f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 16)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("FR36");
		uParam0->f_2 = { -2145.605f, 1093.173f, 28.217f };
		uParam0->f_5 = 104.282f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 17)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("FR36");
		uParam0->f_2 = { -2158.942f, 1094.775f, 28.218f };
		uParam0->f_5 = 254.94f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 18)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("FR36");
		uParam0->f_2 = { -2176.339f, 1117.263f, 28.211f };
		uParam0->f_5 = 259.999f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 19)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MOONBEAM2");
		uParam0->f_2 = { -2201.448f, 1088.407f, 29.227f };
		uParam0->f_5 = 65.053f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 20)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MOONBEAM2");
		uParam0->f_2 = { -2177.569f, 1107.335f, 28.116f };
		uParam0->f_5 = 122.728f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 21)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MOONBEAM2");
		uParam0->f_2 = { -2164.509f, 1119.274f, 28.114f };
		uParam0->f_5 = 96.929f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 22)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("MOONBEAM2");
		uParam0->f_2 = { -2177.436f, 1084.843f, 28.132f };
		uParam0->f_5 = 275.551f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 23)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("REMUS");
		uParam0->f_2 = { -2164.164f, 1093.637f, 27.969f };
		uParam0->f_5 = 81.181f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 24)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("REMUS");
		uParam0->f_2 = { -2164.076f, 1126.173f, 27.967f };
		uParam0->f_5 = 82.019f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 25)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("REMUS");
		uParam0->f_2 = { -2186.993f, 1089.684f, 29.079f };
		uParam0->f_5 = 78.939f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 26)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("REMUS");
		uParam0->f_2 = { -2158.688f, 1086.626f, 27.975f };
		uParam0->f_5 = 262.371f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 27)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("DUKES3");
		uParam0->f_2 = { -2164.622f, 1113.476f, 28.228f };
		uParam0->f_5 = 82.948f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 28)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2185.534f, 1135.436f, 29.771f };
		uParam0->f_5 = 121.266f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 29)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2189.618f, 1133.607f, 29.771f };
		uParam0->f_5 = 248.176f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 30)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2155.376f, 1123.575f, 28.659f };
		uParam0->f_5 = 40.814f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 31)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2190.006f, 1132.5f, 29.771f };
		uParam0->f_5 = 299.343f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 32)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2202.929f, 1119.595f, 29.771f };
		uParam0->f_5 = 174.043f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 33)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2199.087f, 1084.818f, 29.772f };
		uParam0->f_5 = 40.426f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 34)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2165.921f, 1126.391f, 28.359f };
		uParam0->f_5 = 85.228f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 35)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2067.447f, 984.539f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 36)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2061.541f, 984.165f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 37)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2053.578f, 984.469f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 38)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -1972.939f, 1237.736f, 28.668f };
		uParam0->f_5 = 192.002f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 39)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2167.451f, 1093.677f, 28.666f };
		uParam0->f_5 = 74.105f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 40)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2189.986f, 1109.881f, 29.771f };
		uParam0->f_5 = 262.922f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 41)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2176.759f, 1105.552f, 28.662f };
		uParam0->f_5 = 291.142f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 42)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CARCLUB_01");
		uParam0->f_2 = { -2146.979f, 1083.111f, 28.686f };
		uParam0->f_5 = 2.5f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 43)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2186.592f, 1135.125f, 29.771f };
		uParam0->f_5 = 302.826f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 44)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2166.739f, 1076.728f, 28.668f };
		uParam0->f_5 = 195.814f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 45)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2161.535f, 1078.041f, 28.668f };
		uParam0->f_5 = 190.814f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 46)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2173.829f, 1134.234f, 28.658f };
		uParam0->f_5 = 81.91f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 47)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2173.818f, 1127.106f, 28.659f };
		uParam0->f_5 = 81.708f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 48)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2155.852f, 1124.458f, 28.659f };
		uParam0->f_5 = 204.001f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 49)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2204.262f, 1123.472f, 29.771f };
		uParam0->f_5 = 243.383f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 50)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2203.077f, 1121.944f, 29.771f };
		uParam0->f_5 = 356.754f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 51)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2202.377f, 1123.428f, 29.771f };
		uParam0->f_5 = 108.708f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 52)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2201.697f, 1118.357f, 29.771f };
		uParam0->f_5 = 116.051f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 53)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2173.74f, 1128.388f, 28.659f };
		uParam0->f_5 = 123.225f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 54)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2199.776f, 1085.704f, 29.772f };
		uParam0->f_5 = 230.454f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 55)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2174.801f, 1095.769f, 28.665f };
		uParam0->f_5 = 109.413f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 56)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2188.647f, 1109.457f, 29.771f };
		uParam0->f_5 = 95.778f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 57)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2167.494f, 1113.8f, 28.659f };
		uParam0->f_5 = 276.041f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 58)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2202.1f, 1148.97f, 29.771f };
		uParam0->f_5 = 192.541f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 59)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2201.614f, 1147.849f, 29.771f };
		uParam0->f_5 = 17.325f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 60)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2063.803f, 984.474f, 28.668f };
		uParam0->f_5 = 351.802f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 61)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2062.927f, 984.191f, 28.668f };
		uParam0->f_5 = 357.402f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 62)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2052.328f, 984.154f, 28.668f };
		uParam0->f_5 = 7.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 63)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -1962.712f, 1237.788f, 28.668f };
		uParam0->f_5 = 192.001f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 64)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -1971.941f, 1238.135f, 28.668f };
		uParam0->f_5 = 147.341f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 65)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2167.429f, 1096.591f, 28.666f };
		uParam0->f_5 = 279.722f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 66)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2168.691f, 1094.195f, 28.666f };
		uParam0->f_5 = 263.663f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 67)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2175.549f, 1105.981f, 28.662f };
		uParam0->f_5 = 106.49f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 68)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CARCLUB_01");
		uParam0->f_2 = { -2146.711f, 1080.604f, 28.667f };
		uParam0->f_5 = 44.585f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 69)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("PROP_AMB_PHONE");
		uParam0->f_2 = { -2188.0664f, 1133.2179f, 29.6579f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 70)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("PROP_AMB_PHONE");
		uParam0->f_2 = { -2164.229f, 1097.166f, 29.24f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 71)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("PROP_AMB_PHONE");
		uParam0->f_2 = { -2187.425f, 1119.407f, 30.001f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 72)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("PROP_AMB_PHONE");
		uParam0->f_2 = { -2186.842f, 1086.662f, 30.177f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 73)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("PROP_AMB_PHONE");
		uParam0->f_2 = { -2185.955f, 1109.241f, 30.236f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 74)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("PROP_AMB_PHONE");
		uParam0->f_2 = { -2190.006f, 1132.5f, 35f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 1;
	}

	return *uParam0 != 0;
}

void func_152() // Position - 0x1139F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_MISSION_CREATOR")) == 0 || Global_1836651 == false)
		Static_18 = 3;

	if (Static_19 != false)
		Static_18 = 3;

	if (Static_19 == false)
		Static_19 = Global_1836651;

	Global_1836646 = 0;
	Static_18 = 1;
}

