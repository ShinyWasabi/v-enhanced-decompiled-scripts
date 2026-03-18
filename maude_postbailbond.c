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
	char* Static_16 = 0;
	var Static_17 = 0;
	var Static_18 = 0;
	float Static_19 = 0f;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	float Static_23 = 0f;
	float Static_24 = 0f;
	var Static_25 = 0;
	var Static_26 = 0;
	var Static_27 = 0;
	float Static_28 = 0f;
	float Static_29 = 0f;
	float Static_30 = 0f;
	var Static_31 = 0;
	var Static_32 = 0;
	int Static_33 = 0;
	var Static_34 = 0;
	int Static_35 = 10;
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
	bool Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	int Static_82 = 0;
	int Static_83 = 0;
	int Static_84 = 0;
	int Static_85 = 0;
	var Static_86 = 0;
#endregion

void main() // Position - 0x0
{
	var uVar0;
	var uVar3;

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
	Static_16 = "NULL";
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;
	Static_33 = 3;
	Static_83 = -1;
	Static_84 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
		func_56();

	if (!func_52())
		func_56();

	if (!func_51(Static_80))
	{
		func_56();
	}
	else
	{
		func_50();
		Static_81 = MISC::GET_GAME_TIMER();
		Static_83 = func_49();
		Static_82 = 0;
		func_48(true, &Static_86);
	}

	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_51(Static_80))
				func_56();
		
			uVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			uVar3 = { ENTITY::GET_ENTITY_COORDS(Static_80, 1) };
		
			if (BUILTIN::VDIST2(uVar0, uVar3) >= 100f * 100f)
				func_56();
		
			switch (Static_85)
			{
				case 0:
					func_43(uVar3, uVar0, 18000, 1101004800);
				
					if (func_25(&Static_80, false))
					{
						func_24();
						func_16(false);
						func_12(uVar3, uVar0);
						STREAMING::REQUEST_ANIM_DICT(func_11());
						Static_85 = 1;
					}
					break;
			
				case 1:
					if (func_5(&Static_80, &Static_77, &Static_84))
						Static_85 = 2;
					break;
			
				case 2:
					if (!func_4(Static_80, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !PED::IS_PED_FLEEING(Static_80))
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Static_80, func_11(), func_3(), 3))
							func_1();
					else
						func_56();
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x1B3
{
	if (func_51(Static_80))
	{
		func_2(&Static_80);
		TASK::TASK_SMART_FLEE_PED(Static_80, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(Static_80, 1);
	}
}

void func_2(var uParam0) // Position - 0x1E3
{
	if (func_51(*uParam0))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 2, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 64, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 128, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 8, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 32, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 118, 1);
	}
}

char* func_3() // Position - 0x24C
{
	return "female_Flee_Table_Left_Maude";
}

bool func_4(var uParam0, int iParam1) // Position - 0x256
{
	if (func_51(uParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 0)
			return true;

	return false;
}

bool func_5(var uParam0, var uParam1, var uParam2) // Position - 0x289
{
	int iVar0;

	if (func_51(*uParam0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, func_10(), func_9(), 3))
		{
			if (!PED::IS_PED_RAGDOLL(*uParam0) || TASK::IS_PED_GETTING_UP(*uParam0))
			{
				STREAMING::REQUEST_ANIM_DICT(func_11());
			
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_11()))
				{
					*uParam2 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam2, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam2, 0);
				
					if (func_4(*uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -1000f, 1);
				
					TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, *uParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
				
					if (func_8(*uParam1))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, func_10(), func_7(), 3))
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam1, -16f, 0);
					
						iVar0 = 0;
						iVar0 = iVar0 + 16;
						iVar0 = iVar0 + 64;
						iVar0 = iVar0 + 512;
						iVar0 = iVar0 + 4096;
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*uParam1, *uParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
				
					return true;
				}
			}
			else
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

char* func_6() // Position - 0x3D5
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7() // Position - 0x3E0
{
	return "base_chair";
}

bool func_8(int iParam0) // Position - 0x3EB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
			return true;

	return false;
}

char* func_9() // Position - 0x40C
{
	return "base";
}

char* func_10() // Position - 0x417
{
	return "special_ped@maude@base";
}

char* func_11() // Position - 0x422
{
	return "special_ped@maude@exit_flee";
}

void func_12(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x42D
{
	if (func_51(Static_80))
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Static_80))
			if (BUILTIN::VDIST2(uParam3, uParam0) < 35f * 35f)
				func_13(&Static_80, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x473
{
	bool bVar0;

	if (func_51(*uParam0))
	{
		bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(*uParam0);
	
		if (bVar0)
			AUDIO::STOP_PED_SPEAKING(*uParam0, 0);
	
		func_14(*uParam0, sParam1, sParam2, iParam3, 0);
	
		if (bVar0)
			AUDIO::STOP_PED_SPEAKING(*uParam0, 1);
	}
}

void func_14(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x4B6
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_15(iParam3), iParam4);
}

char* func_15(int iParam0) // Position - 0x4D0
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	sVar0 = 0;
	return sVar0;
}

void func_16(bool bParam0) // Position - 0x6C0
{
	var uVar0;
	char* sVar6;

	if (func_23())
	{
		uVar0 = { func_22() };
		sVar6 = func_21();
	
		if (MISC::ARE_STRINGS_EQUAL(&uVar0, sVar6))
			if (bParam0)
				func_19();
			else
				func_17();
	}
}

void func_17() // Position - 0x6F8
{
	Global_21866 = 0;
	func_18();
}

void func_18() // Position - 0x708
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24011 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_23000 = 6;
	}
}

void func_19() // Position - 0x729
{
	Global_21866 = 0;
	func_20();
}

void func_20() // Position - 0x739
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_24011 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_23000 = 6;
		return;
	}
}

char* func_21() // Position - 0x75D
{
	if (IS_BIT_SET(Global_114931.f_24993, 3))
		return "BB4_loiter";
	else if (IS_BIT_SET(Global_114931.f_24993, 2))
		return "BB3_loiter";
	else if (IS_BIT_SET(Global_114931.f_24993, 1))
		return "BB2_loiter";
	else if (IS_BIT_SET(Global_114931.f_24993, 0))
		return "BB1_loiter";

	return "MAUDE_loiter";
}

struct<6> func_22() // Position - 0x7BE
{
	var uVar0;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "NULL", 24);

	if (Global_23000 == 4)
		return Global_22619;

	return uVar0;
}

bool func_23() // Position - 0x7E2
{
	if (Global_23000 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_24() // Position - 0x804
{
	if (ENTITY::DOES_ENTITY_EXIST(Static_79))
		ENTITY::FREEZE_ENTITY_POSITION(Static_79, 0);

	if (ENTITY::DOES_ENTITY_EXIST(Static_78))
		ENTITY::FREEZE_ENTITY_POSITION(Static_78, 0);
}

bool func_25(var uParam0, bool bParam1) // Position - 0x82C
{
	if (func_51(*uParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam0))
			return true;
	
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
				return true;
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_77))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Static_77))
					return true;
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_78))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Static_78))
					return true;
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_79))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Static_79))
					return true;
		}
	
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 61))
			return true;
	
		if (PED::IS_PED_RAGDOLL(*uParam0))
			if (ENTITY::IS_ENTITY_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
				return true;
	
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 51))
			return true;
	
		if (func_33(*uParam0, 1126825984))
			return true;
	
		if (func_26(*uParam0, true, false, false, false))
			return true;
	
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 15f))
			return true;
	
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 73))
			return true;
	
		if (bParam1)
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				return true;
	}
	else
	{
		return true;
	}

	return false;
}

bool func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) // Position - 0x97E
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;

	if (bParam1 == false)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}

	if (bParam2)
		fVar0 = 2f;

	if (func_8(PLAYER::PLAYER_PED_ID()) && func_8(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
	
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
	
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
				return true;
		
			if (func_27(iParam0, fVar1, bParam3, bParam4))
				return true;
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
						return true;
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
			
				if (func_32(iParam0, bParam1, fVar0, fVar1))
					return true;
			}
		
			if (func_27(iParam0, fVar1, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

bool func_27(int iParam0, float fParam1, bool bParam2, bool bParam3) // Position - 0xA79
{
	float fVar0;
	float fVar3;

	fVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	fVar3 = { fVar0 };
	fVar0 = fVar0 - fParam1;
	fVar0.f_1 = fVar0.f_1 - fParam1;
	fVar0.f_2 = fVar0.f_2 - fParam1;
	fVar3 = fVar3 + fParam1;
	fVar3.f_1 = fVar3.f_1 + fParam1;
	fVar3.f_2 = fVar3.f_2 + fParam1;

	if (bParam2)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("WEAPON_GRENADE"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("WEAPON_MOLOTOV"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("WEAPON_SMOKEGRENADE"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
				if (func_28(iParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_28(iParam0, fParam1))
				return true;
			else
				return false;
	
		if (MISC::IS_PROJECTILE_IN_AREA(fVar0, fVar3, 1))
			return true;
	}

	return false;
}

bool func_28(int iParam0, float fParam1) // Position - 0xB85
{
	var uVar0;
	var uVar1;

	if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_GRENADE"), fParam1, &uVar1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &uVar1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_BZGAS"), fParam1, &uVar1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &uVar1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_MOLOTOV"), fParam1, &uVar1, &uVar0, 0))
		if (func_29(iParam0, uVar1, 90f, 0))
			return true;

	return false;
}

bool func_29(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xC1A
{
	var uVar0;
	var uVar3;
	float fVar6;

	uVar0 = { func_31(uParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		uVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	else
		uVar3 = { func_31(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };

	fVar6 = func_30(uVar3, uVar0);

	if (fVar6 <= BUILTIN::COS(fParam4 / 2f))
		return false;

	return true;
}

float func_30(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xCA8
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_31(float fParam0, var uParam1, var uParam2) // Position - 0xCC9
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

bool func_32(int iParam0, bool bParam1, float fParam2, float fParam3) // Position - 0xD08
{
	if (bParam1)
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
				return true;

	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
		return true;

	return false;
}

bool func_33(var uParam0, int iParam1) // Position - 0xD50
{
	float fVar0;

	if (func_8(PLAYER::PLAYER_PED_ID()) && func_8(uParam0))
	{
		if (func_42(uParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				fVar0 = 40f;
			else
				fVar0 = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
				if (func_34(uParam0, iParam1))
					return true;
		}
	}

	return false;
}

bool func_34(var uParam0, int iParam1) // Position - 0xDC6
{
	return func_35(uParam0, PLAYER::PLAYER_PED_ID(), iParam1, 1, 250, 7);
}

bool func_35(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xDDE
{
	bool bVar0;
	var uVar1;
	int iVar4;

	iVar4 = func_41(uParam0, uParam1);

	if (!func_8(uParam0) || !func_8(uParam1))
	{
		if (iVar4 != -1)
			func_40(&Static_35[iVar4 /*4*/]);
	
		return false;
	}

	if (!func_39(uParam0, uParam1, iParam2, iParam3))
		return false;

	if (iVar4 == -1)
	{
		iVar4 = func_38();
	
		if (iVar4 == -1)
			return false;
	
		Static_35[iVar4 /*4*/].f_1 = uParam0;
		Static_35[iVar4 /*4*/].f_2 = uParam1;
	}

	uVar1 = { PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_36(&Static_35[iVar4 /*4*/], uVar1, uParam1, &(Static_35[iVar4 /*4*/].f_3), uParam0, iParam5);
	return bVar0 || MISC::GET_GAME_TIMER() - Static_35[iVar4 /*4*/].f_3 < iParam4;
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xE9F
{
	var uVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;

	if (!func_8(uParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		uVar1 = { func_37(uParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam1, uVar1 + ((uVar1 - uParam1) * { 0.1f, 0.1f, 0.1f }), 511, uParam6, 7);
		return 0;
	}

	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &uVar1, &uVar4, &iVar7);

	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_8(iVar7);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == uParam4)
		{
			if (Static_76)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(uParam1, ENTITY::GET_ENTITY_COORDS(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_8(iVar7);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(uParam4, 0))
			{
				if (Static_76)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(uParam1, ENTITY::GET_ENTITY_COORDS(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_37(var uParam0, int iParam1) // Position - 0xFCB
{
	int iVar0;

	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(uParam0, 1);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(uParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(uParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(uParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(uParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(uParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(uParam0, 1);
}

int func_38() // Position - 0x1090
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Static_35; iVar0 = iVar0 + 1)
	{
		if (Static_35[iVar0 /*4*/] == 0 && Static_35[iVar0 /*4*/].f_1 == 0 && Static_35[iVar0 /*4*/].f_2 == 0)
			return iVar0;
	}

	return -1;
}

bool func_39(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x10DA
{
	var uVar0;
	var uVar3;
	float fVar6;

	uVar0 = { func_31(ENTITY::GET_ENTITY_COORDS(uParam1, 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		uVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0) };
	else
		uVar3 = { func_31(PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(uParam0, 31086, 0f, 0f, 0f)) };

	fVar6 = func_30(uVar3, uVar0);

	if (fVar6 <= BUILTIN::COS(iParam2 / 2f))
		return false;

	return true;
}

void func_40(var uParam0) // Position - 0x116B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(var uParam0, var uParam1) // Position - 0x1186
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Static_35; iVar0 = iVar0 + 1)
	{
		if (Static_35[iVar0 /*4*/].f_1 == uParam0 && Static_35[iVar0 /*4*/].f_2 == uParam1)
			return iVar0;
	}

	return -1;
}

int func_42(var uParam0) // Position - 0x11C5
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return 1;

	return 0;
}

int func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7) // Position - 0x11ED
{
	var uVar0;
	char* sVar165;
	char* sVar166;

	if (Static_82 < Static_83)
	{
		if (!func_23())
		{
			if (BUILTIN::VDIST2(uParam3, uParam0) < iParam7 * iParam7)
			{
				if (MISC::GET_GAME_TIMER() - Static_81 > iParam6 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, Static_80, "MAUDE", 0, 1);
					sVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, sVar165, sVar166, 7, 0, 0);
					Static_81 = MISC::GET_GAME_TIMER();
					Static_82 = Static_82 + 1;
					return 1;
				}
			}
		}
		else
		{
			Static_81 = MISC::GET_GAME_TIMER();
		}
	}

	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1277
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_21866, 0);
	Global_23003 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_22990, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x12B2
{
	Global_22454 = { *uParam0 };
	Global_8779 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23070, sParam2, 24);
	Global_23989 = iParam5;

	if (iParam3 == 0)
	{
		Global_23987 = 1;
		Global_23985 = 0;
	}
	else
	{
		Global_23987 = 0;
		Global_23985 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23988 = 1;
		Global_23986 = 0;
	}
	else
	{
		Global_23988 = 0;
		Global_23986 = 1;
	}
}

char* func_46() // Position - 0x1308
{
	if (IS_BIT_SET(Global_114931.f_24993, 3))
		return "BB4AUD";
	else if (IS_BIT_SET(Global_114931.f_24993, 2))
		return "BB3AUD";
	else if (IS_BIT_SET(Global_114931.f_24993, 1))
		return "BB2AUD";
	else if (IS_BIT_SET(Global_114931.f_24993, 0))
		return "BB1AUD";

	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1369
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80305)
	{
		if (!PED::IS_PED_INJURED(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
	
		if (!PED::IS_PED_INJURED(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
	}
}

void func_48(bool bParam0, var uParam1) // Position - 0x1404
{
	var uVar0;
	var uVar3;

	uVar0 = { 2711.1978f, 4134.4253f, 32.90168f };
	uVar3 = { 2739.9814f, 4155.2207f, 50.28859f };

	if (bParam0)
	{
		*uParam1 = PED::ADD_SCENARIO_BLOCKING_AREA(uVar0, uVar3, 0, 1, 1, 1, 1);
		PED::SET_PED_NON_CREATION_AREA(uVar0, uVar3);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uVar0, uVar3, 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(uVar0, uVar3, 0);
		PATHFIND::SET_ROADS_IN_AREA(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 0, 1);
		MISC::CLEAR_AREA(2728.3328f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uVar0, uVar3, 1, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 1);
	}
}

int func_49() // Position - 0x14F2
{
	if (IS_BIT_SET(Global_114931.f_24993, 3))
		return 4;
	else if (IS_BIT_SET(Global_114931.f_24993, 2))
		return 4;
	else if (IS_BIT_SET(Global_114931.f_24993, 1))
		return 4;
	else if (IS_BIT_SET(Global_114931.f_24993, 0))
		return 3;

	return 4;
}

void func_50() // Position - 0x1544
{
	var uVar0;

	if (func_51(Static_80))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Static_80))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_80, 1, 0);
	
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_80, 1);
		PED::SET_PED_MONEY(Static_80, 0);
		PED::SET_PED_CAN_BE_TARGETTED(Static_80, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_80, joaat("PLAYER"));
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Static_80, 0);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Static_80, 0);
		PED::SET_PED_CONFIG_FLAG(Static_80, 118, 0);
		uVar0 = { 2728.33f, 4145.6f, 43.89f };
	
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(uVar0, 10f, joaat("PROP_TABLE_03B"), 0))
		{
			Static_78 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uVar0, 10f, joaat("PROP_TABLE_03B"), 1, 0, 1);
		
			if (func_8(Static_78))
			{
				ENTITY::SET_ENTITY_COORDS(Static_78, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Static_78, -92.17f);
				ENTITY::FREEZE_ENTITY_POSITION(Static_78, 1);
			}
		}
	
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(uVar0, 10f, joaat("PROP_LAPTOP_01A"), 0))
		{
			Static_79 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uVar0, 10f, joaat("PROP_LAPTOP_01A"), 0, 0, 1);
		
			if (func_8(Static_79))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Static_79))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_79, 1, 0);
			
				ENTITY::SET_ENTITY_COORDS(Static_79, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Static_79, 71f);
				ENTITY::FREEZE_ENTITY_POSITION(Static_79, 1);
			}
		}
	
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(uVar0, 10f, joaat("PROP_TABLE_03_CHR"), 0))
		{
			Static_77 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uVar0, 10f, joaat("PROP_TABLE_03_CHR"), 0, 0, 1);
		
			if (func_8(Static_77))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Static_77))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_77, 1, 0);
			
				ENTITY::SET_ENTITY_COORDS(Static_77, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Static_77, -91.28f);
			}
		}
	}
}

bool func_51(var uParam0) // Position - 0x16F1
{
	if (func_8(uParam0))
		if (!PED::IS_PED_INJURED(uParam0))
			return true;

	return false;
}

bool func_52() // Position - 0x1711
{
	int iVar0;
	int iVar1;
	var uVar2;

	uVar2 = 32;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	
		for (iVar1 = 0; iVar1 < iVar0; iVar1 = iVar1 + 1)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == func_53(62))
				{
					Static_80 = uVar2[iVar1];
					return true;
				}
			}
		}
	}

	return false;
}

int func_53(int iParam0) // Position - 0x1778
{
	if (!func_55(iParam0))
		return func_54(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_54(int iParam0) // Position - 0x179E
{
	return Global_2339[iParam0 /*29*/];
}

bool func_55(int iParam0) // Position - 0x17AD
{
	return iParam0 < 3;
}

void func_56() // Position - 0x17B9
{
	func_48(false, &Static_86);

	if (func_8(Static_79))
		ENTITY::FREEZE_ENTITY_POSITION(Static_79, 0);

	func_58(&Static_79, false);

	if (func_8(Static_78))
		ENTITY::FREEZE_ENTITY_POSITION(Static_78, 0);

	func_58(&Static_78, false);

	if (func_8(Static_77))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Static_77, 0);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_77, "special_ped@maude@base", "base_chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Static_77, "base_chair", "special_ped@maude@base", -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Static_77, -1000f, 1);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_77, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Static_77, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Static_77, -1000f, 1);
		}
	}

	func_58(&Static_77, false);

	if (func_51(Static_80))
	{
		PED::SET_PED_KEEP_TASK(Static_80, 1);
		PED::SET_PED_CONFIG_FLAG(Static_80, 118, 1);
	}

	func_57(&Static_80, 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT(func_11());
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x189E
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
		
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_58(var uParam0, bool bParam1) // Position - 0x18EE
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
	
		if (!bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		else
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*uParam0);
	}
}

