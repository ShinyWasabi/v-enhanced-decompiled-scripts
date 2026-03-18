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
	char* Static_18 = 0;
	float Static_19 = 0f;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	float Static_23 = 0f;
	float Static_24 = 0f;
	var Static_25 = 0;
	int Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	float Static_29 = 0f;
	float Static_30 = 0f;
	float Static_31 = 0f;
	var Static_32 = 0;
	var Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	int Static_37 = 0;
	int Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 10;
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
	int Static_88 = 0;
	var Static_89 = 0;
	var Static_90 = 0;
	var Static_91 = 0;
	var Static_92 = 0;
	var Static_93 = 0;
	var Static_94 = 0;
	int Static_95 = 0;
	char* Static_96 = 0;
	int Static_97 = 0;
	var Static_98 = 0;
	int Static_99 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 5;
	var ScriptArg_2 = 0;
	var ScriptArg_3 = 0;
	var ScriptArg_4 = 0;
	var ScriptArg_5 = 0;
	var ScriptArg_6 = 0;
	var ScriptArg_7 = 0;
	var ScriptArg_8 = 0;
	var ScriptArg_9 = 0;
	var ScriptArg_10 = 0;
	var ScriptArg_11 = 0;
	var ScriptArg_12 = 0;
	var ScriptArg_13 = 0;
	var ScriptArg_14 = 0;
	var ScriptArg_15 = 0;
	var ScriptArg_16 = 0;
	var ScriptArg_17 = 5;
	var ScriptArg_18 = 0;
	var ScriptArg_19 = 0;
	var ScriptArg_20 = 0;
	var ScriptArg_21 = 0;
	var ScriptArg_22 = 0;
#endregion

void main() // Position - 0x0
{
	var uVar0;

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
	Static_18 = "NULL";
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;
	Static_26 = 3;
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_37 = 1;
	Static_38 = 65;
	Static_39 = 49;
	Static_40 = 64;
	Static_88 = joaat("U_M_O_TAPHILLBILLY");
	Static_96 = "SPECIAL_PED@MOUNTAIN_DANCER@MONOLOGUE_1@MONOLOGUE_1A";
	Static_99 = -1;
	Static_89 = { ScriptArg_0.f_1[0 /*3*/] };
	Static_92 = ScriptArg_0.f_17[0];

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_37(false);

	if (func_36(Global_114931.f_20124, 16384))
		func_37(false);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_93))
		{
			if (ENTITY::IS_ENTITY_DEAD(Static_93, 0) && !(Static_97 == 7))
			{
				func_35(&(Global_114931.f_20124), 16384);
				Static_97 = 7;
			}
		}
	
		switch (Static_97)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_34() && !func_12())
				{
					if (func_11())
					{
						Static_93 = PED::CREATE_PED(26, Static_88, Static_89, Static_92, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_93, 1);
						Static_94 = OBJECT::CREATE_OBJECT(joaat("PROP_TAPEPLAYER_01"), 704.7615f, 4179.5737f, 39.7093f, 1, 1, 0);
						ENTITY::SET_ENTITY_HEADING(Static_94, 233.8288f + 180f);
						PED::SET_PED_PROP_INDEX(Static_93, 0, 0, 0, 0, 1);
						Static_97 = 1;
					}
				}
				else
				{
					func_37(false);
				}
				break;
		
			case 1:
				Static_99 = PED::CREATE_SYNCHRONIZED_SCENE(Static_89 + { 1f, 0f, 0f }, 0f, 0f, Static_92, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Static_93, Static_99, Static_96, "MTN_DNC_if_you_want_to_get_to_heaven", 2f, -2f, 1, 0, 1148846080, 0);
				AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("MNT_DNC", Static_93);
				Static_97 = 2;
				break;
		
			case 2:
				if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(Static_99, "MNT_DNC") == 1)
				{
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(Static_99);
					Static_97 = 3;
				}
				break;
		
			case 3:
				uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_93, 1) };
				PED::SET_PED_LOD_MULTIPLIER(Static_93, 3f);
			
				if (func_10(PLAYER::PLAYER_PED_ID(), Static_93) < 10f)
				{
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, Static_93, 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(Static_93, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
				}
			
				if (func_9(Static_93, PLAYER::PLAYER_PED_ID(), 1) < 25f)
				{
					if (!HUD::DOES_BLIP_EXIST(Static_98))
					{
						func_5(&Static_98, &Static_93, false);
						HUD::SET_BLIP_COLOUR(Static_98, 3);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Static_98))
				{
					func_4(&Static_98);
				}
			
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Static_99) > 0.9999999f)
					Static_97 = 1;
			
				if (PED::IS_PED_RAGDOLL(Static_93))
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(Static_99);
					Static_97 = 4;
				}
			
				if (PED::IS_PED_INJURED(Static_93) || MISC::IS_BULLET_IN_AREA(uVar0, 50f, 1) || MISC::IS_BULLET_IN_AREA(uVar0, 50f, 0) || MISC::IS_PROJECTILE_IN_AREA(uVar0, 20f, 20f, 20f, 0) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, uVar0, 50f) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Static_93) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Static_93) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uVar0, 1) < 25f && func_1(Static_93, PLAYER::PLAYER_PED_ID(), 1126825984, 0))
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(Static_99);
					Static_97 = 4;
					Static_95 = 1;
				}
				break;
		
			case 4:
				if (HUD::DOES_BLIP_EXIST(Static_98))
					func_4(&Static_98);
			
				if (!PED::IS_PED_RAGDOLL(Static_93))
				{
					if (Static_95 == 1)
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Static_93, 723.1315f, 4171.9565f, 39.7091f, 2f, -1, 1f, 1024, 1193033728);
					else
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Static_93, 723.1315f, 4171.9565f, 39.7091f, 1f, -1, 1f, 1024, 1193033728);
				
					PED::SET_PED_KEEP_TASK(Static_93, 1);
					Static_97 = 6;
				}
				break;
		
			case 6:
				if (TASK::GET_SCRIPT_TASK_STATUS(Static_93, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Static_93, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_93, 0);
				
					if (Static_95 == 1)
						TASK::TASK_SMART_FLEE_PED(Static_93, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					else
						TASK::TASK_WANDER_STANDARD(Static_93, 1193033728, 0);
				
					PED::SET_PED_KEEP_TASK(Static_93, 1);
					Static_97 = 5;
				}
				break;
		
			case 5:
				if (ENTITY::IS_ENTITY_OCCLUDED(Static_93) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Static_93, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
					func_37(true);
				break;
		
			case 7:
				if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
					func_37(false);
				break;
		}
	}
}

bool func_1(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x494
{
	var uVar0;
	var uVar3;
	float fVar6;

	uVar0 = { func_3(ENTITY::GET_ENTITY_COORDS(uParam1, 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		uVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0) };
	else
		uVar3 = { func_3(PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 0f, 0f)) };

	fVar6 = func_2(uVar3, uVar0);

	if (fVar6 <= BUILTIN::COS(iParam2 / 2f))
		return false;

	return true;
}

float func_2(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x525
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_3(float fParam0, var uParam1, var uParam2) // Position - 0x546
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(fParam0);

	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		fParam0 = { fParam0 * { fVar1, fVar1, fVar1 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_4(var uParam0) // Position - 0x585
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
		HUD::REMOVE_BLIP(uParam0);
}

void func_5(var uParam0, var uParam1, bool bParam2) // Position - 0x59D
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				*uParam0 = func_6(*uParam1, bParam2, 145);
			
				if (bParam2 == false)
					HUD::SET_BLIP_PRIORITY(*uParam0, 7);
			}
		}
	}
}

int func_6(var uParam0, bool bParam1, int iParam2) // Position - 0x5E1
{
	int iVar0;

	iVar0 = func_7(uParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2339[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2339[iParam2 /*29*/].f_3));

	return iVar0;
}

int func_7(var uParam0, bool bParam1, bool bParam2) // Position - 0x62B
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return 0;

	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		else
			HUD::SET_BLIP_COLOUR(iVar0, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return iVar0;
}

var func_8(bool bParam0, var uParam1, var uParam2) // Position - 0x6CF
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

float func_9(var uParam0, var uParam1, int iParam2) // Position - 0x6E6
{
	var uVar0;
	var uVar3;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	else
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };

	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
		uVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	else
		uVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uVar3, iParam2);
}

float func_10(var uParam0, var uParam1) // Position - 0x744
{
	return func_9(uParam0, uParam1, 1);
}

bool func_11() // Position - 0x755
{
	STREAMING::REQUEST_MODEL(Static_88);
	STREAMING::REQUEST_ANIM_DICT(Static_96);

	if (STREAMING::HAS_MODEL_LOADED(Static_88) && STREAMING::HAS_ANIM_DICT_LOADED(Static_96))
		return true;

	return false;
}

bool func_12() // Position - 0x782
{
	if (!func_32(5))
		return true;

	if (func_28())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_27())
			return false;

	if (func_13(100f, true) != -1)
		return true;

	return false;
}

int func_13(float fParam0, bool bParam1) // Position - 0x7E4
{
	var uVar0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_25(func_26()))
		{
			iVar36 = func_19();
			iVar37 = 0;
		
			for (iVar37 = 0; iVar37 < 63; iVar37 = iVar37 + 1)
			{
				iVar32 = iVar37;
			
				if (IS_BIT_SET(Global_114931.f_18581[iVar32 /*6*/], 2) && !IS_BIT_SET(Global_114931.f_18581[iVar32 /*6*/], 3))
				{
					func_14(iVar32, &uVar0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), uVar0.f_6, 1);
				
					if (fVar35 < fVar34)
					{
						bVar38 = true;
					
						if (bParam1)
							if (iVar36 != uVar0.f_26)
								bVar38 = false;
					
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
			}
		}
	}

	return iVar33;
}

void func_14(int iParam0, var uParam1) // Position - 0x895
{
	switch (iParam0)
	{
		case 0:
			func_15(uParam1, "Abigail1", func_17(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 1:
			func_15(uParam1, "Abigail2", func_17(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 2:
			func_15(uParam1, "Barry1", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 3:
			func_15(uParam1, "Barry2", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 4:
			func_15(uParam1, "Barry3", func_17(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 5:
			func_15(uParam1, "Barry3A", func_17(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 6:
			func_15(uParam1, "Barry3C", func_17(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 7:
			func_15(uParam1, "Barry4", func_17(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_16(iParam0), 0, 0);
			break;
	
		case 8:
			func_15(uParam1, "Dreyfuss1", func_17(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 9:
			func_15(uParam1, "Epsilon1", func_17(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 10:
			func_15(uParam1, "Epsilon2", func_17(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 11:
			func_15(uParam1, "Epsilon3", func_17(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 12:
			func_15(uParam1, "Epsilon4", func_17(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 13:
			func_15(uParam1, "Epsilon5", func_17(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 14:
			func_15(uParam1, "Epsilon6", func_17(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 15:
			func_15(uParam1, "Epsilon7", func_17(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 16:
			func_15(uParam1, "Epsilon8", func_17(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 17:
			func_15(uParam1, "Extreme1", func_17(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 18:
			func_15(uParam1, "Extreme2", func_17(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 19:
			func_15(uParam1, "Extreme3", func_17(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 20:
			func_15(uParam1, "Extreme4", func_17(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 21:
			func_15(uParam1, "Fanatic1", func_17(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_16(iParam0), 1, 0);
			break;
	
		case 22:
			func_15(uParam1, "Fanatic2", func_17(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_16(iParam0), 1, 0);
			break;
	
		case 23:
			func_15(uParam1, "Fanatic3", func_17(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_16(iParam0), 0, 1);
			break;
	
		case 24:
			func_15(uParam1, "Hao1", func_17(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_16(iParam0), 0, 1);
			break;
	
		case 25:
			func_15(uParam1, "Hunting1", func_17(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 26:
			func_15(uParam1, "Hunting2", func_17(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 27:
			func_15(uParam1, "Josh1", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 28:
			func_15(uParam1, "Josh2", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 29:
			func_15(uParam1, "Josh3", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 30:
			func_15(uParam1, "Josh4", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 31:
			func_15(uParam1, "Maude1", func_17(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 32:
			func_15(uParam1, "Minute1", func_17(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 33:
			func_15(uParam1, "Minute2", func_17(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 34:
			func_15(uParam1, "Minute3", func_17(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 35:
			func_15(uParam1, "MrsPhilips1", func_17(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 36:
			func_15(uParam1, "MrsPhilips2", func_17(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 37:
			func_15(uParam1, "Nigel1", func_17(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 38:
			func_15(uParam1, "Nigel1A", func_17(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 39:
			func_15(uParam1, "Nigel1B", func_17(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
	
		case 40:
			func_15(uParam1, "Nigel1C", func_17(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
	
		case 41:
			func_15(uParam1, "Nigel1D", func_17(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
	
		case 42:
			func_15(uParam1, "Nigel2", func_17(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 43:
			func_15(uParam1, "Nigel3", func_17(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 44:
			func_15(uParam1, "Omega1", func_17(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 45:
			func_15(uParam1, "Omega2", func_17(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 46:
			func_15(uParam1, "Paparazzo1", func_17(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 47:
			func_15(uParam1, "Paparazzo2", func_17(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 48:
			func_15(uParam1, "Paparazzo3", func_17(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 49:
			func_15(uParam1, "Paparazzo3A", func_17(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 50:
			func_15(uParam1, "Paparazzo3B", func_17(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 51:
			func_15(uParam1, "Paparazzo4", func_17(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 52:
			func_15(uParam1, "Rampage1", func_17(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 54:
			func_15(uParam1, "Rampage3", func_17(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 55:
			func_15(uParam1, "Rampage4", func_17(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 56:
			func_15(uParam1, "Rampage5", func_17(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 53:
			func_15(uParam1, "Rampage2", func_17(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 57:
			func_15(uParam1, "TheLastOne", func_17(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 58:
			func_15(uParam1, "Tonya1", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 59:
			func_15(uParam1, "Tonya2", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 60:
			func_15(uParam1, "Tonya3", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 61:
			func_15(uParam1, "Tonya4", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 62:
			func_15(uParam1, "Tonya5", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		default:
			break;
	}
}

void func_15(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x1A37
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_16(int iParam0) // Position - 0x1AC8
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
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
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_17(int iParam0) // Position - 0x1E0E
{
	var uVar0;
	var uVar2;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 8);
	uVar2 = { func_18(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar2))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&uVar0, &uVar2, 8);
	}

	return uVar0;
}

struct<2> func_18(int iParam0) // Position - 0x1E45
{
	var uVar0;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON5", 8);
			break;
	
		default:
			break;
	}

	return uVar0;
}

int func_19() // Position - 0x2291
{
	func_20();

	switch (Global_114931.f_2370.f_539.f_4321)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	}

	return 0;
}

void func_20() // Position - 0x22D7
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
		
			if (func_25(iVar0) && !func_21(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_25(Global_114931.f_2370.f_539.f_4321))
					Global_114931.f_2370.f_539.f_4322 = Global_114931.f_2370.f_539.f_4321;
			
				Global_114931.f_2370.f_539.f_4323 = iVar0;
				Global_114931.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114931.f_2370.f_539.f_4321 != 145)
				Global_114931.f_2370.f_539.f_4323 = Global_114931.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114931.f_2370.f_539.f_4321 = 145;
}

bool func_21(int iParam0) // Position - 0x23D4
{
	return Global_44886 == iParam0;
}

int func_22(var uParam0) // Position - 0x23E2
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_23(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_23(int iParam0) // Position - 0x241F
{
	if (func_25(iParam0))
		return func_24(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_24(int iParam0) // Position - 0x2444
{
	return Global_2339[iParam0 /*29*/];
}

bool func_25(int iParam0) // Position - 0x2453
{
	return iParam0 < 3;
}

int func_26() // Position - 0x245F
{
	func_20();
	return Global_114931.f_2370.f_539.f_4321;
}

bool func_27() // Position - 0x2478
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

bool func_28() // Position - 0x2495
{
	if (func_31() && !func_27())
		return true;

	if (func_30() && func_29())
		return true;

	return false;
}

bool func_29() // Position - 0x24C7
{
	return Global_114649 > 0;
}

bool func_30() // Position - 0x24D5
{
	if (Global_99351 != -1)
		return true;

	return false;
}

bool func_31() // Position - 0x24EA
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 20);

	return false;
}

bool func_32(int iParam0) // Position - 0x250D
{
	return func_33(iParam0, Global_44886);
}

bool func_33(int iParam0, int iParam1) // Position - 0x251E
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

bool func_34() // Position - 0x26FF
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Static_42) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_27())
			return false;
	}

	if (func_28())
		return true;

	if (func_13(100f, true) != -1)
		return true;

	return false;
}

void func_35(int iParam0, int iParam1) // Position - 0x2785
{
	*iParam0 = *iParam0 || iParam1;
}

bool func_36(int iParam0, int iParam1) // Position - 0x2796
{
	return iParam0 && iParam1 != false;
}

void func_37(bool bParam0) // Position - 0x27A5
{
	if (ENTITY::DOES_ENTITY_EXIST(Static_94))
		OBJECT::DELETE_OBJECT(&Static_94);

	if (HUD::DOES_BLIP_EXIST(Static_98))
		func_4(&Static_98);

	if (ENTITY::DOES_ENTITY_EXIST(Static_93))
		if (bParam0)
			PED::DELETE_PED(&Static_93);
		else
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_93);

	SCRIPT::TERMINATE_THIS_THREAD();
}

