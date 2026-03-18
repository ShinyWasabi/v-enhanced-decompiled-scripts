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
	int Static_41 = 0;
	int Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	int Static_49 = 0;
	var Static_50 = 0;
	int Static_51 = 0;
	int Static_52 = 0;
	var Static_53 = 0;
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
	BUILTIN::WAIT(0);
	Static_43 = { ScriptArg_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_23();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_3(3))
			{
				switch (Static_41)
				{
					case 0:
						if (Static_42 == 1)
							Static_41 = 1;
						else
							func_2();
						break;
				
					case 1:
						if (Static_49 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_23();
			}
		}
		else
		{
			func_23();
		}
	}
}

void func_1() // Position - 0xEC
{
	if (BUILTIN::TIMERB() > 7000)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Static_50, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Static_50, 10f, 10f, 10f, 0, 1, 0) && Static_52 == 0)
			{
				BUILTIN::SETTIMERB(0);
				Static_46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				TASK::OPEN_SEQUENCE_TASK(&Static_53);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Static_46, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(Static_53);
			
				if (!ENTITY::IS_ENTITY_DEAD(Static_50, 0))
					TASK::TASK_PERFORM_SEQUENCE(Static_50, Static_53);
			
				TASK::CLEAR_SEQUENCE_TASK(&Static_53);
				Static_52 = 1;
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Static_50, 3f, 3f, 3f, 0, 1, 0) && Static_51 == 0)
			{
				Static_46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				BUILTIN::SETTIMERB(0);
				TASK::OPEN_SEQUENCE_TASK(&Static_53);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Static_46, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(Static_53);
				TASK::TASK_PERFORM_SEQUENCE(Static_50, Static_53);
			}
		
			TASK::CLEAR_SEQUENCE_TASK(&Static_53);
			Static_51 = 1;
		}
	}
}

void func_2() // Position - 0x1FE
{
	STREAMING::REQUEST_MODEL(joaat("S_M_M_STRPREACH_01"));
	STREAMING::REQUEST_ANIM_DICT("amb@PREACHER");

	while (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_STRPREACH_01")) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@PREACHER"))
	{
		BUILTIN::WAIT(0);
	}

	Static_46.f_2 = Static_43.f_2 - 1f;
	Static_50 = PED::CREATE_PED(19, joaat("S_M_M_STRPREACH_01"), Static_43, Static_43.f_1, Static_46.f_2, 0f, 1, 1);

	if (!ENTITY::IS_ENTITY_DEAD(Static_50, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&Static_53);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, Static_46, 0);
		TASK::TASK_PLAY_ANIM(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(Static_53);
		TASK::TASK_PERFORM_SEQUENCE(Static_50, Static_53);
		TASK::CLEAR_SEQUENCE_TASK(&Static_53);
	}

	Static_42 = 1;
}

bool func_3(int iParam0) // Position - 0x2A7
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_22(6) || func_22(7))
				return true;
			else
				return func_3(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (func_20(5))
				if (func_4(4))
					return true;
			break;
	}

	return false;
}

bool func_4(int iParam0) // Position - 0x319
{
	int iVar0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_15();
			
				if (!func_14(iVar0))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_113978 || Global_33795 || func_12() || func_11(8, -1) || func_10() || func_9() || func_8() || func_7() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_13() || Global_33795 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_113978 || Global_33795 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114931.f_7695.f_919[iVar0] == 5 || Global_45433 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_113978 || Global_33795 || func_12() || func_11(8, -1) || func_10() || func_9() || func_7() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 4:
						if (func_13() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_11(8, -1) || func_7() || func_6() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 5:
						if (func_11(8, -1) || func_10() || func_9() || func_6() || func_5())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_13() || Global_33795 || func_12() || func_11(8, -1) || func_9() || func_8() || func_7() || Global_114931.f_7695.f_919[iVar0] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_13() || func_9() || Global_113978 || Global_33795 || func_12() || Global_46111 || func_11(8, -1) || func_8() || func_6() || func_7() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_13() || Global_113978 || Global_33795 || func_12() || func_11(8, -1) || func_8() || func_6() || func_10() || func_9() || func_7())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

bool func_5() // Position - 0xA36
{
	return Global_102493.f_1;
}

bool func_6() // Position - 0xA44
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 13);

	return false;
}

bool func_7() // Position - 0xA67
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

bool func_8() // Position - 0xA81
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

bool func_9() // Position - 0xAAB
{
	return Global_102506.f_418 > 0;
}

bool func_10() // Position - 0xABC
{
	return Global_102506.f_417 > 0;
}

bool func_11(int iParam0, int iParam1) // Position - 0xACD
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677594.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677594.f_1048, iParam0);
}

bool func_12() // Position - 0xB05
{
	return Global_1575092;
}

bool func_13() // Position - 0xB11
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

bool func_14(int iParam0) // Position - 0xB2D
{
	return iParam0 < 3;
}

int func_15() // Position - 0xB39
{
	func_16();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_16() // Position - 0xB52
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_18(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_17(PLAYER::PLAYER_PED_ID());
		
			if (func_14(iVar0) && !func_22(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_14(Global_114931.f_2370.f_539.f_4321))
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

int func_17(var uParam0) // Position - 0xC4F
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_18(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_18(int iParam0) // Position - 0xC8C
{
	if (func_14(iParam0))
		return func_19(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_19(int iParam0) // Position - 0xCB1
{
	return Global_2339[iParam0 /*29*/];
}

bool func_20(int iParam0) // Position - 0xCC0
{
	return func_21(iParam0, Global_44886);
}

bool func_21(int iParam0, int iParam1) // Position - 0xCD1
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

bool func_22(int iParam0) // Position - 0xEB2
{
	return Global_44886 == iParam0;
}

void func_23() // Position - 0xEC0
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

