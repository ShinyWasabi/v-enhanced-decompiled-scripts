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
	int Static_16 = 0;
	int Static_17 = 0;
	var Static_18 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
		SCRIPT::TERMINATE_THIS_THREAD();

	func_1();
}

void func_1() // Position - 0x4F
{
	var uVar0;
	var uVar3;

	while (!func_9(&Static_18))
	{
		BUILTIN::WAIT(0);
	}

	if (!PED::IS_PED_INJURED(Static_18))
	{
		if (!Global_98924)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_18, 1, 1);
		
			if (TASK::GET_SCRIPT_TASK_STATUS(Static_18, joaat("SCRIPT_TASK_ANY")) != 7)
				TASK::CLEAR_PED_TASKS(Static_18);
		
			uVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_18, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar3);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(Static_18, 0))
				if (!PED::IS_PED_IN_COMBAT(Static_18, 0) && !PED::IS_PED_IN_ANY_VEHICLE(Static_18, 0))
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, uVar0, 6000);
		
			TASK::TASK_LOOK_AT_COORD(0, uVar0, 6000, 0, 2);
			TASK::CLOSE_SEQUENCE_TASK(uVar3);
			TASK::TASK_PERFORM_SEQUENCE(Static_18, uVar3);
		}
	
		func_2(Static_18);
	}

	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		BUILTIN::WAIT(0);
	}

	if (ENTITY::DOES_ENTITY_EXIST(Static_18))
	{
		if (!PED::IS_PED_INJURED(Static_18))
			PED::SET_PED_KEEP_TASK(Static_18, 1);
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_18);
	}

	Global_98924 = false;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0) // Position - 0x13C
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER() + 1000;

	while (MISC::GET_GAME_TIMER() < iVar0 && !CAM::IS_SCREEN_FADED_OUT())
	{
		BUILTIN::WAIT(0);
	}

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (Static_17 == 1)
		{
			switch (func_5(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3, 0);
					break;
			
				case 0:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3, 0);
					break;
			}
		}
		else if (Static_17 == 2)
		{
			switch (func_5(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3, 0);
					break;
			
				case 0:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3, 0);
					break;
			}
		}
		else if (Static_17 == 0)
		{
			switch (func_5(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3, 0);
					break;
			
				case 1:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3, 0);
					break;
			}
		}
	}
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x23A
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_4(iParam3), iParam4);
}

char* func_4(int iParam0) // Position - 0x254
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

int func_5(int iParam0) // Position - 0x443
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_6(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_6(int iParam0) // Position - 0x480
{
	if (func_8(iParam0))
		return func_7(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_7(int iParam0) // Position - 0x4A5
{
	return Global_2339[iParam0 /*29*/];
}

bool func_8(int iParam0) // Position - 0x4B4
{
	return iParam0 < 3;
}

bool func_9(var uParam0) // Position - 0x4C0
{
	var uVar0;

	for (Static_16 = 0; Static_16 < 9; Static_16 = Static_16 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99798[Static_16]) && !PED::IS_PED_INJURED(Global_99798[Static_16]))
		{
			if (Global_99798[Static_16] != PLAYER::PLAYER_PED_ID())
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_99798[Static_16]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_99798[Static_16], 0) || !ENTITY::IS_ENTITY_ATTACHED(Global_99798[Static_16]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_99798[Static_16], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 10f)
						{
							Static_17 = func_5(Global_99798[Static_16]);
						
							if (Static_17 == 0 || Static_17 == 2 || Static_17 == 1)
							{
								if (Static_17 != func_10())
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_99798[Static_16], PLAYER::PLAYER_PED_ID(), 17))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(Global_99798[Static_16], 0))
											uVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_99798[Static_16], 0);
									
										if (ENTITY::DOES_ENTITY_EXIST(uVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0) || !ENTITY::DOES_ENTITY_EXIST(uVar0))
										{
											*uParam0 = Global_99798[Static_16];
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	if (CAM::IS_SCREEN_FADED_OUT())
		return true;

	return false;
}

int func_10() // Position - 0x605
{
	func_11();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_11() // Position - 0x61E
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_6(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_5(PLAYER::PLAYER_PED_ID());
		
			if (func_8(iVar0) && !func_12(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_8(Global_114931.f_2370.f_539.f_4321))
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

bool func_12(int iParam0) // Position - 0x71B
{
	return Global_44886 == iParam0;
}

