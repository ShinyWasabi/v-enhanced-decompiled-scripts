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
	int Static_43 = 0;
	int Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	int Static_54 = 0;
	var Static_55 = 0;
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
	Static_45 = { ScriptArg_0.f_1[0 /*3*/] };
	Static_42 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	func_28();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_28();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_8(3))
			{
				switch (Static_41)
				{
					case 0:
						if (Static_43 == 1)
							Static_41 = 1;
						else
							func_7();
						break;
				
					case 1:
						if (!ENTITY::IS_ENTITY_DEAD(Static_52, 0))
							if (Static_44 == 0)
								if (func_2(Static_52, 0, 1056964608, 0, 0, false))
									Static_44 = 1;
					
						if (Static_54 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}
}

void func_1() // Position - 0x119
{
	if (BUILTIN::TIMERB() > 10000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_45, 10f, 10f, 10f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			BUILTIN::SETTIMERB(0);
		
			if (!ENTITY::IS_ENTITY_DEAD(Static_52, 0))
			{
				if (Static_42 == 0)
				{
					Static_44 == 0;
					TASK::OPEN_SEQUENCE_TASK(&Static_55);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(Static_55);
					TASK::TASK_PERFORM_SEQUENCE(Static_52, Static_55);
					TASK::CLEAR_SEQUENCE_TASK(&Static_55);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Static_53, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Static_52, Static_53, 0);
					Static_44 == 0;
					TASK::TASK_WANDER_STANDARD(Static_53, 1193033728, 0);
					Static_42 = 0;
				}
			}
		}
	}
}

bool func_2(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5) // Position - 0x1E1
{
	float fVar0;

	if (iParam4 == 2)
		fVar0 = 150f;
	else if (iParam4 == 1)
		fVar0 = 100f;
	else if (iParam4 == 0)
		fVar0 = 40f;

	switch (iParam3)
	{
		case 2:
			if (func_3(uParam0, func_6(iParam1, 2, iParam2), fVar0, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 3, iParam2), fVar0, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 5, iParam2), fVar0, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 6, iParam2), fVar0, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 7, iParam2), fVar0, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 8, iParam2), fVar0, iParam2, bParam5))
				return true;
		
			[[fallthrough]];
	
		case 1:
			if (func_3(uParam0, func_6(iParam1, 1, iParam2), fVar0, iParam2, bParam5))
				return true;
		
			[[fallthrough]];
	
		case 0:
			if (func_3(uParam0, func_6(iParam1, 0, iParam2), fVar0, iParam2, bParam5))
				return true;
			break;
	}

	return false;
}

bool func_3(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, bool bParam6) // Position - 0x314
{
	float fVar0;
	var uVar1;

	if (iParam5 < 1f)
		fVar0 = 1f + 0.5f;
	else
		fVar0 = iParam5 + 0.5f;

	uVar1 = { iParam5 + 0.2f, iParam5 + 0.2f, fVar0 };

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, uParam1), uVar1, 0, 1, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam0, 1), fParam4) && func_5(bParam6) && !PED::IS_PED_RAGDOLL(uParam0) && !TASK::IS_PED_GETTING_UP(uParam0))
		{
			func_4(uParam0, true);
			return true;
		}
		else
		{
			func_4(uParam0, false);
		}
	}

	return false;
}

void func_4(var uParam0, bool bParam1) // Position - 0x3C7
{
	bParam1;
	!ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

bool func_5(bool bParam0) // Position - 0x3DF
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		if (bParam0)
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 0f)
				return true;
		else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f)
			return true;

	return false;
}

Vector3 func_6(int iParam0, int iParam1, int iParam2) // Position - 0x42D
{
	var uVar0;

	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
				uVar0 = { 0f, iParam2, 0f };
			else if (iParam0 == 1)
				uVar0 = { iParam2, 0f, 0f };
			else if (iParam0 == 3)
				uVar0 = { 0f, -iParam2, 0f };
			else if (iParam0 == 2)
				uVar0 = { -iParam2, 0f, 0f };
			break;
	
		case 1:
			if (iParam0 == 3)
				uVar0 = { 0f, iParam2, 0f };
			else if (iParam0 == 2)
				uVar0 = { iParam2, 0f, 0f };
			else if (iParam0 == 0)
				uVar0 = { 0f, -iParam2, 0f };
			else if (iParam0 == 1)
				uVar0 = { -iParam2, 0f, 0f };
			break;
	
		case 2:
			if (iParam0 == 2)
				uVar0 = { 0f, iParam2, 0f };
			else if (iParam0 == 3)
				uVar0 = { iParam2, 0f, 0f };
			else if (iParam0 == 1)
				uVar0 = { 0f, -iParam2, 0f };
			else if (iParam0 == 0)
				uVar0 = { -iParam2, 0f, 0f };
			break;
	
		case 3:
			if (iParam0 == 1)
				uVar0 = { 0f, iParam2, 0f };
			else if (iParam0 == 0)
				uVar0 = { iParam2, 0f, 0f };
			else if (iParam0 == 2)
				uVar0 = { 0f, -iParam2, 0f };
			else if (iParam0 == 3)
				uVar0 = { -iParam2, 0f, 0f };
			break;
	
		case 5:
			if (iParam0 == 1)
				uVar0 = { iParam2, iParam2, 0f };
			else if (iParam0 == 0)
				uVar0 = { -iParam2, iParam2, 0f };
			else if (iParam0 == 3)
				uVar0 = { iParam2, -iParam2, 0f };
			else if (iParam0 == 2)
				uVar0 = { -iParam2, -iParam2, 0f };
			break;
	
		case 6:
			if (iParam0 == 0)
				uVar0 = { iParam2, iParam2, 0f };
			else if (iParam0 == 2)
				uVar0 = { -iParam2, iParam2, 0f };
			else if (iParam0 == 1)
				uVar0 = { iParam2, -iParam2, 0f };
			else if (iParam0 == 3)
				uVar0 = { -iParam2, -iParam2, 0f };
			break;
	
		case 7:
			if (iParam0 == 3)
				uVar0 = { iParam2, iParam2, 0f };
			else if (iParam0 == 1)
				uVar0 = { -iParam2, iParam2, 0f };
			else if (iParam0 == 2)
				uVar0 = { iParam2, -iParam2, 0f };
			else if (iParam0 == 0)
				uVar0 = { -iParam2, -iParam2, 0f };
			break;
	
		case 8:
			if (iParam0 == 2)
				uVar0 = { iParam2, iParam2, 0f };
			else if (iParam0 == 3)
				uVar0 = { -iParam2, iParam2, 0f };
			else if (iParam0 == 0)
				uVar0 = { iParam2, -iParam2, 0f };
			else if (iParam0 == 1)
				uVar0 = { -iParam2, -iParam2, 0f };
			break;
	}

	if (iParam2 < 0f)
		iParam2 = iParam2 * -1f;

	return uVar0;
}

void func_7() // Position - 0x6C5
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_45, 50f, 50f, 50f, 0, 1, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("A_M_O_TRAMP_01"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_STRPUNK_01"));
		STREAMING::REQUEST_ANIM_DICT("amb@drug_dealer");
	
		while (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_TRAMP_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_STRPUNK_01")) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@drug_dealer"))
		{
			BUILTIN::WAIT(0);
		}
	
		PED::ADD_RELATIONSHIP_GROUP("homeless", &Static_51);
		Static_48.f_2 = Static_45.f_2 - 1f;
		Static_52 = PED::CREATE_PED(19, joaat("A_M_O_TRAMP_01"), Static_45, Static_45.f_1, Static_48.f_2, 0f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_52, Static_51);
	
		if (Static_42 == 1)
		{
			Static_48 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Static_52, 0.8f, 0.8f, -1f) };
			Static_53 = PED::CREATE_PED(5, joaat("G_M_Y_STRPUNK_01"), Static_48, 0f, 1, 1);
			PED::ADD_RELATIONSHIP_GROUP("homeless", &Static_51);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_53, Static_51);
		
			if (!ENTITY::IS_ENTITY_DEAD(Static_52, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&Static_55);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Static_48, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(Static_55);
				TASK::TASK_PERFORM_SEQUENCE(Static_52, Static_55);
				TASK::CLEAR_SEQUENCE_TASK(&Static_55);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(Static_53, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&Static_55);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Static_45, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(Static_55);
				TASK::TASK_PERFORM_SEQUENCE(Static_53, Static_55);
				TASK::CLEAR_SEQUENCE_TASK(&Static_55);
			}
		}
	
		Static_43 = 1;
	}
}

bool func_8(int iParam0) // Position - 0x843
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_27(6) || func_27(7))
				return true;
			else
				return func_8(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (func_25(5))
				if (func_9(4))
					return true;
			break;
	}

	return false;
}

bool func_9(int iParam0) // Position - 0x8B5
{
	int iVar0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_20();
			
				if (!func_19(iVar0))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_18() || Global_113978 || Global_33795 || func_17() || func_16(8, -1) || func_15() || func_14() || func_13() || func_12() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_18() || Global_33795 || func_17() || func_16(8, -1) || func_13() || func_15() || func_14() || func_12() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_18() || Global_113978 || Global_33795 || func_17() || func_16(8, -1) || func_13() || func_15() || func_14() || func_12() || Global_114931.f_7695.f_919[iVar0] == 5 || Global_45433 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_18() || Global_113978 || Global_33795 || func_17() || func_16(8, -1) || func_15() || func_14() || func_12() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 4:
						if (func_18() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_16(8, -1) || func_12() || func_11() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 5:
						if (func_16(8, -1) || func_15() || func_14() || func_11() || func_10())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_18() || Global_33795 || func_17() || func_16(8, -1) || func_14() || func_13() || func_12() || Global_114931.f_7695.f_919[iVar0] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_18() || func_14() || Global_113978 || Global_33795 || func_17() || Global_46111 || func_16(8, -1) || func_13() || func_11() || func_12() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_18() || Global_113978 || Global_33795 || func_17() || func_16(8, -1) || func_13() || func_11() || func_15() || func_14() || func_12())
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

bool func_10() // Position - 0xFD2
{
	return Global_102493.f_1;
}

bool func_11() // Position - 0xFE0
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 13);

	return false;
}

bool func_12() // Position - 0x1003
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

bool func_13() // Position - 0x101D
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

bool func_14() // Position - 0x1047
{
	return Global_102506.f_418 > 0;
}

bool func_15() // Position - 0x1058
{
	return Global_102506.f_417 > 0;
}

bool func_16(int iParam0, int iParam1) // Position - 0x1069
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

bool func_17() // Position - 0x10A1
{
	return Global_1575092;
}

bool func_18() // Position - 0x10AD
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

bool func_19(int iParam0) // Position - 0x10C9
{
	return iParam0 < 3;
}

int func_20() // Position - 0x10D5
{
	func_21();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_21() // Position - 0x10EE
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
		
			if (func_19(iVar0) && !func_27(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_19(Global_114931.f_2370.f_539.f_4321))
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

int func_22(var uParam0) // Position - 0x11EB
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

int func_23(int iParam0) // Position - 0x1228
{
	if (func_19(iParam0))
		return func_24(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_24(int iParam0) // Position - 0x124D
{
	return Global_2339[iParam0 /*29*/];
}

bool func_25(int iParam0) // Position - 0x125C
{
	return func_26(iParam0, Global_44886);
}

bool func_26(int iParam0, int iParam1) // Position - 0x126D
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

bool func_27(int iParam0) // Position - 0x144E
{
	return Global_44886 == iParam0;
}

void func_28() // Position - 0x145C
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

