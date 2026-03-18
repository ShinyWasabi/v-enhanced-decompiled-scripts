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
	var Static_18 = 0;
	var Static_19 = 0;
	var Static_20 = 0;
	char* Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	float Static_24 = 0f;
	float Static_25 = 0f;
	float Static_26 = 0f;
	var Static_27 = 0;
	var Static_28 = 0;
	float Static_29 = 0f;
	var Static_30 = 0;
	var Static_31 = 0;
	var Static_32 = 0;
	float Static_33 = 0f;
	float Static_34 = 0f;
	var Static_35 = 0;
	var Static_36 = 0;
	int Static_37 = 0;
	var Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	int Static_41 = 0;
	int Static_42 = 0;
	int Static_43 = 0;
	int Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
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
	int iVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	int iVar6;

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
	Static_21 = "NULL";
	Static_24 = 80f;
	Static_25 = 140f;
	Static_26 = 180f;
	Static_29 = 0f;
	Static_33 = -0.0375f;
	Static_34 = 0.17f;
	Static_37 = 3;
	Static_41 = 1;
	Static_42 = 65;
	Static_43 = 49;
	Static_44 = 64;
	iVar1 = joaat("CARWASH1");
	sVar2 = "carwash1";
	uVar3 = { ScriptArg_0.f_1[0 /*3*/] };

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("AM_MP_CARWASH_LAUNCH")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(131838674) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(131838674);
		
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(131838674))
			{
				BUILTIN::WAIT(0);
			}
		
			BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(131838674, &ScriptArg_0, 23, 1424);
		}
	
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_15(PLAYER::PLAYER_PED_ID());
	iVar6 = 0;

	while (iVar6 == 0)
	{
		if (func_12(PLAYER::PLAYER_ID(), true, false) || func_11() || !func_10(PLAYER::PLAYER_ID()) || func_9() || func_8(PLAYER::PLAYER_ID()) || func_7(PLAYER::PLAYER_ID()) || func_6(PLAYER::PLAYER_ID()) || func_2(PLAYER::PLAYER_ID(), true))
			iVar6 = 0;
		else
			iVar6 = 1;
	
		BUILTIN::WAIT(0);
	}

	if (BUILTIN::VDIST2(uVar3, func_1(157)) < BUILTIN::VDIST2(uVar3, func_1(156)))
		sVar2 = "carwash2";

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = MISC::GET_HASH_KEY(sVar2);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iVar1) == 0)
	{
		SCRIPT::REQUEST_SCRIPT(sVar2);
	
		while (!SCRIPT::HAS_SCRIPT_LOADED(sVar2))
		{
			SCRIPT::REQUEST_SCRIPT(sVar2);
			BUILTIN::WAIT(0);
		
			if (MISC::GET_GAME_TIMER() > iVar0 + 20000)
				SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		if (SCRIPT::HAS_SCRIPT_LOADED(sVar2))
		{
			BUILTIN::START_NEW_SCRIPT(sVar2, 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar2);
		}
	}

	SCRIPT::TERMINATE_THIS_THREAD();
}

Vector3 func_1(int iParam0) // Position - 0x20E
{
	int iVar0;

	iVar0 = iParam0;
	return Global_34172[iVar0 /*23*/][0 /*3*/];
}

bool func_2(int iParam0, bool bParam1) // Position - 0x226
{
	var uVar0;
	var uVar1;

	if (iParam0 != func_5())
	{
		if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_325.f_6, 15))
		{
			if (bParam1)
			{
				uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			
				if (ENTITY::DOES_ENTITY_EXIST(uVar0) && !ENTITY::IS_ENTITY_DEAD(uVar0, 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uVar0) && func_4(uVar0, 0) == -1)
					{
						uVar1 = PED::GET_VEHICLE_PED_IS_IN(uVar0, 0);
					
						if (func_3(uVar1, true))
							return true;
					}
				}
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

bool func_3(var uParam0, bool bParam1) // Position - 0x2A4
{
	if (Global_80305)
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
				if (DECORATOR::DECOR_EXIST_ON(uParam0, "TestDrive"))
					return DECORATOR::DECOR_GET_BOOL(uParam0, "TestDrive");

	return false;
}

int func_4(var uParam0, int iParam1) // Position - 0x2F5
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0, iParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
			
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
			
				for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1)
				{
					iVar3 = iVar2 - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == uParam0)
							return iVar3;
				}
			}
		}
	}

	return iVar3;
}

int func_5() // Position - 0x37A
{
	return -1;
}

bool func_6(int iParam0) // Position - 0x383
{
	if (iParam0 != func_5())
		return IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_325.f_5, 4);

	return false;
}

bool func_7(int iParam0) // Position - 0x3A8
{
	if (iParam0 != func_5())
		return IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_260.f_439.f_2, 16);

	return false;
}

bool func_8(int iParam0) // Position - 0x3D1
{
	if (iParam0 != func_5())
		return IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_260.f_376, 29);

	return false;
}

bool func_9() // Position - 0x3F8
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 0);
}

bool func_10(int iParam0) // Position - 0x411
{
	return IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_140, 6);
}

int func_11() // Position - 0x426
{
	int iVar0;

	iVar0 = Global_2673274;

	if (IS_BIT_SET(Global_1882717[iVar0 /*315*/].f_17, 0) && Global_1882717[iVar0 /*315*/].f_27 == 2)
		return 1;

	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2) // Position - 0x45B
{
	if (bParam1)
		if (func_13(iParam0))
			return 1;

	!bParam2;

	if (Global_1845299[iParam0 /*883*/] == -1)
		return 0;

	return 1;
}

bool func_13(int iParam0) // Position - 0x48D
{
	return func_14(iParam0);
}

bool func_14(int iParam0) // Position - 0x49B
{
	return IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_11.f_1, 0);
}

bool func_15(var uParam0) // Position - 0x4B2
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

