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
	var Static_17 = 0;
	var Static_18 = 0;
	var Static_19 = 0;
	int Static_20 = 0;
	var ScriptArg_0 = 0;
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

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_1690446, 1))
		{
			func_27();
		}
		else
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
			func_22(0, -1, false);
			MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
			Static_20 = 1;
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_27();
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Static_20 == 1)
			if (func_14())
				func_27();
	
		if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(ScriptArg_0))
			{
				switch (Static_16)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(ScriptArg_0))
						{
							Static_17 = { ENTITY::GET_ENTITY_COORDS(ScriptArg_0, 1) };
							Static_16 = 1;
						}
						break;
				
					case 1:
						if (OBJECT::HAS_OBJECT_BEEN_BROKEN(ScriptArg_0, 0) && ENTITY::IS_ENTITY_VISIBLE(ScriptArg_0) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(ScriptArg_0))
						{
							func_1();
							Static_16 = 2;
						}
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_27();
			}
		}
		else
		{
			func_27();
		}
	}
}

void func_1() // Position - 0x111
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar0 = joaat("PROP_MONEY_BAG_01");
	iVar1 = joaat("PICKUP_MONEY_MED_BAG");
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(70, 121);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = joaat("PROP_CASH_PILE_01");
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(50, 101);
		iVar3 = func_13(iVar3, 1);
	}

	MISC::SET_BIT(&uVar2, 3);
	MISC::SET_BIT(&uVar2, 4);
	STREAMING::REQUEST_MODEL(iVar0);

	while (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		BUILTIN::WAIT(0);
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_2(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Static_17, 1067030938, 1069547520), uVar2, iVar3, iVar0, false, 0);
	else
		OBJECT::CREATE_PICKUP(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Static_17, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
}

struct<5> func_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8) // Position - 0x1C5
{
	var uVar0;

	uVar0 = 123;

	if (func_12() && func_11(iParam0))
		uVar0 = { func_3(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7) };
	else
		uVar0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7, iParam8);

	return uVar0;
}

struct<5> func_3(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7) // Position - 0x21C
{
	var uVar0;
	int iVar5;
	int iVar6;
	int iVar11;

	uVar0 = 123;

	if (func_10() == -1)
		return uVar0;

	iVar5 = func_9(-1);

	if (iVar5 == -1)
		return uVar0;

	iVar6 = 123;
	iVar6 = iParam0;
	iVar6.f_1 = { uParam1 };

	if (func_4(&iVar6) != -1)
		return uVar0;

	MISC::SET_BIT(&uParam4, 5);
	iVar6.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7, 0);
	iVar11 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (bParam7)
	{
		Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
	
		if (Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}

	Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/] = { iVar6 };
	Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_5 = { uParam1 };
	Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_8 = uParam4;
	Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_9 = iParam5;
	Global_1912540[iVar11 /*319*/].f_102.f_21[iVar5 /*14*/].f_10 = iParam6;
	return iVar6;
}

int func_4(var uParam0) // Position - 0x399
{
	int iVar0;

	if (!func_7(uParam0))
		return -1;

	for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
	{
		if (func_5(uParam0, &Global_2652582.f_2452[iVar0 /*16*/]))
			return iVar0;
	}

	return -1;
}

bool func_5(var uParam0, var uParam1) // Position - 0x3DC
{
	if (*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, false) && uParam0->f_4 == uParam1->f_4)
		return true;

	return false;
}

bool func_6(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, bool bParam6) // Position - 0x417
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

bool func_7(var uParam0) // Position - 0x45E
{
	if (*uParam0 == 123 || func_8(uParam0->f_1) || uParam0->f_4 == 0)
		return false;

	return true;
}

bool func_8(float fParam0, var uParam1, var uParam2) // Position - 0x490
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_9(int iParam0) // Position - 0x4BA
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	iVar0 = -1;

	for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1)
	{
		if (!func_7(&Global_1912540[iParam0 /*319*/].f_102.f_21[iVar1 /*14*/]))
		{
			iVar0 = iVar1;
			break;
		}
	}

	return iVar0;
}

int func_10() // Position - 0x506
{
	int iVar0;
	int iVar1;

	iVar0 = -1;

	for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1)
	{
		if (!func_7(&Global_2652582.f_2452[iVar1 /*16*/]))
		{
			iVar0 = iVar1;
			break;
		}
	}

	return iVar0;
}

bool func_11(int iParam0) // Position - 0x540
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
		case joaat("PICKUP_VEHICLE_MONEY_VARIABLE"):
			return 1;
	
		default:
		
	}

	return 0;
}

bool func_12() // Position - 0x590
{
	return Global_262145.f_30377 /* Tunable: ENABLESYNCEDAMBIENTPICKUPS */;
}

int func_13(int iParam0, int iParam1) // Position - 0x59F
{
	float fVar0;

	switch (iParam1)
	{
		case 0:
			break;
	
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = BUILTIN::TO_FLOAT(iParam0) * Global_262145;
				iParam0 = BUILTIN::ROUND(fVar0);
			}
			break;
	
		default:
			break;
	}

	return iParam0;
}

bool func_14() // Position - 0x5E0
{
	if (Global_1575064 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_21())
		return true;

	if (Global_2699585)
		return true;

	if (func_20())
		return true;

	if (func_19(159))
		if (!func_18())
			return true;

	if (func_19(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (func_15() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_15()) == 0)
			return true;

	return false;
}

int func_15() // Position - 0x664
{
	switch (func_17())
	{
		case 0:
			return func_16();
	
		case 2:
			return joaat("CREATOR");
	}

	return 0;
}

int func_16() // Position - 0x697
{
	switch (Global_2699694)
	{
		case 0:
			return joaat("FREEMODE");
	
		default:
		
	}

	return joaat("FREEMODE");
}

int func_17() // Position - 0x6BB
{
	return Global_33792;
}

bool func_18() // Position - 0x6C6
{
	return Global_2685153.f_700;
}

bool func_19(int iParam0) // Position - 0x6D5
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
		return true;

	return false;
}

bool func_20() // Position - 0x6EC
{
	return Global_2696981;
}

bool func_21() // Position - 0x6F8
{
	return Global_2685153.f_695;
}

int func_22(int iParam0, int iParam1, bool bParam2) // Position - 0x707
{
	int iVar0;

	for (iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS(); iVar0 != 2; iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (iVar0 == 3 || iVar0 == 4 || iVar0 == 5 || iVar0 == 6)
			if (!bParam2)
				func_26();
			else
				return 0;
	
		if (!func_23(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_26();
					else
						return 0;
			
				if (func_21())
					if (!bParam2)
						func_26();
					else
						return 0;
			
				if (func_19(157))
					if (!bParam2)
						func_26();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_26();
				else
					return 0;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574668 = iVar0;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_26();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_26();
		else
			return 0;

	return 1;
}

bool func_23(bool bParam0) // Position - 0x81D
{
	if (bParam0 && Global_1575064)
		if (func_24())
			return false;
		else
			return true;

	return Global_1575064;
}

bool func_24() // Position - 0x849
{
	if (func_25())
		return true;

	return Global_1575067;
}

bool func_25() // Position - 0x864
{
	if (Global_1575064 || Global_1575070)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_DEATHMATCH_CONTROLER")) != 0)
			return true;

	return false;
}

void func_26() // Position - 0x88F
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_27() // Position - 0x89B
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

