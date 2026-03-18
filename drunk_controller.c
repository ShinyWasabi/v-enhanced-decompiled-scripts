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
	bool Static_12 = 0;
	int Static_13 = 0;
	int Static_14 = 0;
	int Static_15 = 0;
	float Static_16 = 0f;
	int Static_17 = 8;
	var Static_18 = 0;
	var Static_19 = 0;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	var Static_24 = 0;
	var Static_25 = 0;
	float Static_26 = 0f;
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
	Static_16 = -99f;
	Static_26 = -1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		func_32();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		Static_13 = Static_13 + 1;
	
		if (Static_13 >= 16)
			Static_13 = 0;
	
		Static_14 = Static_14 + 1;
	
		if (Static_14 >= 16)
			Static_14 = 0;
	
		Static_15 = Static_15 + 1;
	
		if (Static_15 >= 5)
			Static_15 = 0;
	
		if (!func_1())
			func_32();
	}
}

bool func_1() // Position - 0xA6
{
	if (Global_46076)
		return true;

	if (CAM::DOES_CAM_EXIST(Global_46077))
		return true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DRUNK")) > 0)
		return true;

	if (Global_45864 > 0)
		return true;

	return false;
}

void func_2() // Position - 0xE3
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;

	if (!Global_46076)
		return;

	iVar1 = MISC::GET_GAME_TIMER();

	if (Global_46078 > iVar1 || Global_46078 == -1)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			return;
	
		fVar2 = func_14();
	
		for (iVar0 = Static_17 - 1; iVar0 >= 1; iVar0 = iVar0 + -1)
		{
			Static_17[iVar0] = Static_17[iVar0 - 1];
		}
	
		Static_17[0] = fVar2;
		iVar4 = 0;
	
		for (iVar0 = 0; iVar0 < Static_17; iVar0 = iVar0 + 1)
		{
			fVar3 = fVar3 + Static_17[iVar0];
			iVar4 = iVar4 + 1;
		}
	
		fVar3 = fVar3 / (float)iVar4;
		fVar5 = func_9();
	
		if (Global_46081 != Global_46082)
		{
			fVar6 = Global_46082 - Global_46081;
			Global_46081 = Global_46081 + (fVar6 * 0.1f);
		
			if (MISC::ABSF(Global_46081 - Global_46082) < 0.01f)
				Global_46081 = Global_46082;
		}
	
		if (!func_8(PLAYER::PLAYER_ID()))
		{
			if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
				CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", Global_46081 * fVar3 * fVar5);
		
			if (MISC::GET_GAME_TIMER() % 100 == 0)
			{
				if (Global_46078 == -1)
				{
				}
				else
				{
					if (Static_26 == -1f)
						Static_26 = fVar3;
				
					CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(Global_46081 * fVar3 * fVar5);
					CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(Global_46080 * fVar3 * fVar5);
					Static_26 = fVar3;
				}
			}
		}
	
		if (Global_46080 * fVar3 * fVar5 < 1f)
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(Global_46080 * fVar3 * fVar5);
		else
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(1f);
	
		if (!CAM::IS_CINEMATIC_CAM_SHAKING())
			CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", Global_46081 * Global_46075 * fVar3 * fVar5);
	
		CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(Global_46081 * Global_46075 * fVar3 * fVar5);
	
		if (CAM::DOES_CAM_EXIST(Global_46077))
			if (CAM::IS_CAM_SHAKING(Global_46077))
				CAM::SET_CAM_SHAKE_AMPLITUDE(Global_46077, Global_46081 * fVar3 * fVar5);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_46105) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_46089))
		{
			AUDIO::START_AUDIO_SCENE(&Global_46089);
			TEXT_LABEL_ASSIGN_STRING(&Global_46105, "", 16);
		}
	
		CAM::INVALIDATE_IDLE_CAM();
	
		if (Global_46084 > 0f)
		{
			if (Static_16 != Global_46084)
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
				{
				}
				else if (!GRAPHICS::GET_IS_TIMECYCLE_TRANSITIONING_OUT())
				{
					GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(&Global_46085, 15f);
					Static_16 = Global_46084;
				
					if (Global_46083 != 1f)
						GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(Global_46083);
				}
			}
			else
			{
				if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
					Static_16 = -99f;
			
				AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(2);
				iVar7 = Global_46078 - iVar1;
			
				if (iVar7 <= Global_46079 / 2 && Global_46078 != -1)
				{
					bVar8 = false;
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
							bVar8 = true;
				
					if (func_6(PLAYER::PLAYER_PED_ID()))
					{
						Global_46078 = Global_46078 + 1000;
					}
					else if (bVar8)
					{
						Global_46078 = Global_46078 + 1000;
					}
					else if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
					{
						Global_46078 = Global_46078 + 1000;
					}
					else if (func_5())
					{
						Global_46078 = Global_46078 + 1000;
					}
					else
					{
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
							GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(BUILTIN::TO_FLOAT(Global_46079 / 2) / 1000f);
					
						Static_16 = -99f;
						Global_46084 = 0f;
						TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
					}
				}
			}
		}
	
		return;
	}

	for (iVar0 = 0; iVar0 < Static_17; iVar0 = iVar0 + 1)
	{
		Static_17[iVar0] = 0f;
	}

	Static_26 = -1f;
	Static_16 = -99f;
	func_3(true);
	Static_12 = true;
}

void func_3(bool bParam0) // Position - 0x406
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_46089))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_46089))
			AUDIO::STOP_AUDIO_SCENE(&Global_46089);

	if (CAM::DOES_CAM_EXIST(Global_46077))
	{
		if (CAM::IS_CAM_SHAKING(Global_46077))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_46077, 0f);
			CAM::STOP_CAM_SHAKING(Global_46077, 1);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_46089, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_46105, "", 16);
	func_4();
}

void func_4() // Position - 0x4E0
{
	Global_46076 = false;
	Global_46077 = 0;
	Global_46078 = 0;
	Global_46079 = 30000;
	Global_46080 = 0f;
	Global_46082 = 0f;
	Global_46081 = 0f;
	Global_46083 = 1f;
	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
}

bool func_5() // Position - 0x516
{
	return Global_2712200;
}

bool func_6(int iParam0) // Position - 0x522
{
	if (iParam0 == 0)
		return false;

	if (func_7(iParam0) == -1)
		return false;

	return true;
}

int func_7(int iParam0) // Position - 0x543
{
	int iVar0;

	if (iParam0 == 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (!(Global_45897[iVar0 /*5*/] == -1))
			if (iParam0 == Global_45897[iVar0 /*5*/].f_1)
				return iVar0;
	}

	return -1;
}

bool func_8(int iParam0) // Position - 0x58C
{
	return IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_325.f_3, 13);
}

float func_9() // Position - 0x5A5
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = 0.1f;
	iVar1 = func_13(PLAYER::PLAYER_PED_ID());
	iVar2 = func_10(PLAYER::PLAYER_PED_ID());

	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(10);
		
			if (fVar0 > 1f)
				fVar0 = 1f;
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(5);
	
		if (fVar0 > 1f)
			fVar0 = 1f;
	}

	return fVar0;
}

int func_10(int iParam0) // Position - 0x624
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return 0;

	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);

	if (iVar1 == -1)
		return -1;

	return Global_45897[iVar1 /*5*/].f_4;
}

int func_11(int iParam0) // Position - 0x667
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (Global_45897[iVar0 /*5*/] == iParam0)
			return iVar0;
	}

	return -1;
}

int func_12(int iParam0) // Position - 0x697
{
	int iVar0;

	if (iParam0 == 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam0 == Global_45897[iVar0 /*5*/].f_1)
			return Global_45897[iVar0 /*5*/];
	}

	return -1;
}

int func_13(int iParam0) // Position - 0x6D8
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return 0;

	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);

	if (iVar1 == -1)
		return -1;

	return Global_45897[iVar1 /*5*/].f_3;
}

float func_14() // Position - 0x71B
{
	var uVar0;
	float fVar1;
	int iVar2;

	uVar0 = MISC::GET_GAME_TIMER();
	fVar1 = 1f;
	iVar2 = Global_46078 - uVar0;

	if (iVar2 <= Global_46079)
		if (Global_46078 != -1)
			fVar1 = BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(Global_46079);

	return fVar1;
}

void func_15() // Position - 0x755
{
	if (Global_45866[Static_15 /*6*/] == 0)
		func_16(Static_15);
}

void func_16(int iParam0) // Position - 0x76E
{
	int iVar0;
	struct<6> Var1;

	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_45866[iParam0 /*6*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}

	if (func_6(Global_45866[iParam0 /*6*/].f_1))
	{
		func_19(iParam0);
		return;
	}

	if (!SCRIPT::HAS_SCRIPT_LOADED("drunk"))
	{
		SCRIPT::REQUEST_SCRIPT("drunk");
		return;
	}

	iVar0 = func_18();

	if (iVar0 == -1)
	{
		func_19(iParam0);
		return;
	}

	Global_45897[iVar0 /*5*/] = func_17();
	Global_45897[iVar0 /*5*/].f_1 = Global_45866[iParam0 /*6*/].f_1;
	Global_45897[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_45866[iParam0 /*6*/] };
	BUILTIN::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 6, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("drunk");
	func_19(iParam0);
}

int func_17() // Position - 0x836
{
	int iVar0;

	iVar0 = Global_45863;
	Global_45863 = Global_45863 + 1;
	return iVar0;
}

int func_18() // Position - 0x84D
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (Global_45897[iVar0 /*5*/] == -1)
			return iVar0;
	}

	return -1;
}

void func_19(int iParam0) // Position - 0x87C
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45866[iParam0 /*6*/].f_1 == 0))
		if (Global_45866[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_46109 = 0;

	Global_45866[iParam0 /*6*/] = 13;
	Global_45866[iParam0 /*6*/].f_1 = 0;
	Global_45866[iParam0 /*6*/].f_2 = 0;
	Global_45866[iParam0 /*6*/].f_3 = 0;
	Global_45866[iParam0 /*6*/].f_4 = 0;
	Global_45864 = Global_45864 - 1;

	if (Global_45864 < 0)
		Global_45864 = 0;
}

void func_20() // Position - 0x8FF
{
	if (!(Global_45978[Static_13 /*6*/].f_2 == 6))
	{
		if (Global_45978[Static_13 /*6*/].f_1 == 0)
		{
			func_22(Static_13);
			func_21(Static_13);
		}
	}
}

void func_21(int iParam0) // Position - 0x92F
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_45978[iParam0 /*6*/] = -1;
	Global_45978[iParam0 /*6*/].f_1 = -1;
	Global_45978[iParam0 /*6*/].f_2 = 6;
	Global_45978[iParam0 /*6*/].f_3 = 0;
	Global_45978[iParam0 /*6*/].f_4 = 0;
}

void func_22(int iParam0) // Position - 0x97C
{
	int iVar0;

	iVar0 = Global_45978[iParam0 /*6*/].f_2;

	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
	
		default:
			break;
	}
}

void func_23() // Position - 0x9C6
{
	int iVar0;

	iVar0 = -1;

	if (!(Global_45897[Static_14 /*5*/] == -1))
	{
		iVar0 = func_29(Global_45897[Static_14 /*5*/], 0);
	
		if (iVar0 == -1)
			func_24(Global_45897[Static_14 /*5*/]);
		else
			func_21(iVar0);
	}
}

void func_24(int iParam0) // Position - 0xA06
{
	int iVar0;

	func_27(iParam0);
	iVar0 = func_26(iParam0);

	if (iVar0 == -1)
		return;

	func_25(iVar0);
}

void func_25(int iParam0) // Position - 0xA2B
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_45897[iParam0 /*5*/] = -1;
	Global_45897[iParam0 /*5*/].f_1 = 0;
	Global_45897[iParam0 /*5*/].f_2 = -1;
	Global_45897[iParam0 /*5*/].f_3 = 0;
	Global_45897[iParam0 /*5*/].f_4 = 0;
}

int func_26(int iParam0) // Position - 0xA78
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (Global_45897[iVar0 /*5*/] == iParam0)
			return iVar0;
	}

	return -1;
}

void func_27(int iParam0) // Position - 0xAA8
{
	func_31(iParam0);
	func_28(iParam0);
}

void func_28(int iParam0) // Position - 0xABC
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam0 == Global_45978[iVar0 /*6*/].f_1)
			func_21(iVar0);
	}
}

int func_29(int iParam0, int iParam1) // Position - 0xAEE
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam1 == Global_45978[iVar0 /*6*/].f_2)
			if (iParam0 == Global_45978[iVar0 /*6*/])
				return iVar0;
	}

	return -1;
}

void func_30() // Position - 0xB2C
{
	if (Global_45978[Static_13 /*6*/] == 1)
		Global_45978[Static_13 /*6*/] = 0;
}

void func_31(int iParam0) // Position - 0xB47
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam0 == Global_45978[iVar0 /*6*/])
			func_21(iVar0);
	}
}

void func_32() // Position - 0xB77
{
	func_33();

	if (!Static_12)
		func_3(true);

	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_33() // Position - 0xB92
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_46110 = 0;
	Global_46109 = 0;
	Global_45864 = 0;
	MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drunk");
}

void func_34() // Position - 0xBBD
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		func_21(iVar0);
	}
}

void func_35() // Position - 0xBE1
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		func_25(iVar0);
	}
}

void func_36() // Position - 0xC05
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
	{
		func_19(iVar0);
	}
}

