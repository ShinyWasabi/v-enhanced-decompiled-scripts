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
	var Static_19 = 0;
	var Static_20 = 0;
	float Static_21 = 0f;
	float Static_22 = 0f;
	float Static_23 = 0f;
	var Static_24 = 0;
	var Static_25 = 0;
	float Static_26 = 0f;
	var Static_27 = 0;
	var Static_28 = 0;
	var Static_29 = 0;
	float Static_30 = 0f;
	float Static_31 = 0f;
	var Static_32 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;
	int iVar1;
	var uVar2;

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
	Static_21 = 80f;
	Static_22 = 140f;
	Static_23 = 180f;
	Static_26 = 0f;
	Static_30 = -0.0375f;
	Static_31 = 0.17f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
		func_15();

	func_14();
	iVar0 = 0;

	while (true)
	{
		BUILTIN::WAIT(500);
		iVar1 = 0;
		uVar2 = { 0f, 0f, 0f };
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			uVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	
		while (iVar1 != 2)
		{
			if (func_13(&Global_34133[iVar0 /*7*/]))
			{
				if (func_12(iVar0, uVar2))
				{
					func_11(&Global_34133[iVar0 /*7*/], 2);
				
					if (Global_34133[iVar0 /*7*/].f_5 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(Global_34133[iVar0 /*7*/].f_5))
							PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_34133[iVar0 /*7*/].f_5, 1);
					
						Global_34133[iVar0 /*7*/].f_5 = 0;
					}
				}
			}
			else if (!func_10(Global_34133[iVar0 /*7*/], 4))
			{
				if (func_5(&Global_34133[iVar0 /*7*/], uVar2))
					func_1(iVar0);
			}
		
			iVar1 = iVar1 + 1;
			iVar0 = iVar0 + 1;
		
			if (iVar0 == 5)
				iVar0 = 0;
		}
	}
}

void func_1(int iParam0) // Position - 0x14A
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = 1424;
	bVar3 = true;

	switch (iParam0)
	{
		case 0:
			sVar0 = "re_ArmyBase";
			iVar1 = joaat("RE_ARMYBASE");
			break;
	
		case 1:
			iVar2 = 5050;
			sVar0 = "golf_ai_foursome";
			iVar1 = joaat("GOLF_AI_FOURSOME");
			bVar3 = false;
			break;
	
		case 3:
			sVar0 = "re_Prison";
			iVar1 = joaat("RE_PRISON");
			break;
	
		case 2:
			iVar2 = 5050;
			sVar0 = "golf_ai_foursome_putting";
			iVar1 = joaat("GOLF_AI_FOURSOME_PUTTING");
			bVar3 = false;
			break;
	
		case 4:
			iVar2 = 2050;
			sVar0 = "stripclub";
			iVar1 = joaat("STRIPCLUB");
			bVar3 = false;
			break;
	}

	if (!bVar3 && func_3())
		return;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0) != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iVar1) == 0)
		{
			SCRIPT::REQUEST_SCRIPT(sVar0);
		
			while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0))
			{
				BUILTIN::WAIT(0);
			}
		
			Global_34133[iParam0 /*7*/].f_5 = BUILTIN::START_NEW_SCRIPT(sVar0, iVar2);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		
			if (Global_34133[iParam0 /*7*/].f_5 != 0)
				func_2(&Global_34133[iParam0 /*7*/], 2);
		}
	}
}

void func_2(int iParam0, int iParam1) // Position - 0x24F
{
	*iParam0 = *iParam0 || iParam1;
}

bool func_3() // Position - 0x260
{
	if (func_4() == 0)
		return true;

	return false;
}

int func_4() // Position - 0x275
{
	return Global_33792;
}

bool func_5(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x280
{
	if (!func_10(*iParam0, 1))
		if (func_9() && !func_6(6))
			return false;

	if (BUILTIN::VDIST2(uParam1, iParam0->f_2) > iParam0->f_1)
		return false;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 1, 0, 0))
			return false;

	return true;
}

bool func_6(int iParam0) // Position - 0x306
{
	if (Global_44886 == 15)
		return false;

	if (func_7(iParam0))
		return false;

	return true;
}

bool func_7(int iParam0) // Position - 0x328
{
	return func_8(iParam0, Global_44886);
}

bool func_8(int iParam0, int iParam1) // Position - 0x339
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

bool func_9() // Position - 0x51A
{
	if (Global_44886 == 15)
		return false;

	return true;
}

bool func_10(int iParam0, int iParam1) // Position - 0x52F
{
	return iParam0 && iParam1 != false;
}

void func_11(int iParam0, int iParam1) // Position - 0x53E
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
}

bool func_12(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x553
{
	uParam1.f_2 = 0f;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_34133[iParam0 /*7*/].f_5))
		return true;

	if (func_10(Global_34133[iParam0 /*7*/], 4))
		return true;

	if (func_9() && !func_6(6))
		if (!func_10(Global_34133[iParam0 /*7*/], 1))
			if (iParam0 == 1 || iParam0 == 2)
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("GOLF")) == 0)
					return true;
			else
				return true;

	if (BUILTIN::VDIST2(Global_34133[iParam0 /*7*/].f_2, uParam1) > Global_34133[iParam0 /*7*/].f_1 + 400f)
		return true;

	return false;
}

bool func_13(int iParam0) // Position - 0x5FE
{
	return func_10(*iParam0, 2);
}

void func_14() // Position - 0x60E
{
	int iVar0;

	Global_34133[0 /*7*/].f_2 = { -2189.5447f, 3129.6125f, 0f };
	Global_34133[0 /*7*/].f_1 = 1000f * 1000f;
	Global_34133[0 /*7*/] = 0;
	Global_34133[0 /*7*/].f_5 = 0;
	Global_34133[1 /*7*/].f_2 = { -1172.8221f, 66.5235f, 0f };
	Global_34133[1 /*7*/].f_1 = 300f * 300f;
	Global_34133[1 /*7*/] = 0;
	Global_34133[1 /*7*/].f_5 = 0;
	Global_34133[3 /*7*/].f_2 = { 1692.1469f, 2562.3127f, 0f };
	Global_34133[3 /*7*/].f_1 = 300f * 300f;
	Global_34133[3 /*7*/] = 0;
	Global_34133[3 /*7*/].f_5 = 0;
	Global_34133[2 /*7*/].f_2 = { -1329.6797f, 60.3478f, 0f };
	Global_34133[2 /*7*/].f_1 = 250f * 250f;
	Global_34133[2 /*7*/] = 0;
	Global_34133[2 /*7*/].f_5 = 0;
	Global_34133[4 /*7*/].f_2 = { 114.64f, -1290.34f, 0f };
	Global_34133[4 /*7*/].f_1 = 100f * 100f;
	Global_34133[4 /*7*/] = 1;
	Global_34133[4 /*7*/].f_5 = 0;

	for (iVar0 = 0; iVar0 <= 5 - 1; iVar0 = iVar0 + 1)
	{
		Global_34133[iVar0 /*7*/].f_2.f_2 = 0f;
	}
}

void func_15() // Position - 0x74E
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

