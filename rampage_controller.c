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
	int Static_27 = 0;
	int Static_28 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;

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
	Static_26 = 77;
	Static_27 = 194;
	Static_28 = 52;
	Static_26 = 77;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RAMPAGE_CONTROLLER")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_37();

	if (!func_36(108))
		func_37();

	func_35(23);

	for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
	{
		func_27(Static_27 + iVar0, 0, 0);
		MISC::SET_BIT(&Global_114931.f_18581[Static_28 + iVar0 /*6*/], 3);
	}

	func_19(1);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!func_18(40))
		{
			switch (func_16("RAMP_NEW_ALL" /* GXT: All rampages are now unlocked. */))
			{
				case 2:
					func_13("RAMP_NEW_ALL" /* GXT: All rampages are now unlocked. */, 1, 0, 2000, 10000, 4, 0, 0, 0);
					break;
			
				case 1:
					func_12(40);
					break;
			}
		}
	
		if (func_1())
		{
			func_19(0);
		
			while (func_1())
			{
				BUILTIN::WAIT(0);
			}
		
			while (MISC::IS_AUTO_SAVE_IN_PROGRESS())
			{
				BUILTIN::WAIT(0);
			}
		
			func_19(1);
		}
	}
}

bool func_1() // Position - 0x13C
{
	return func_9(9) || Global_33795 || func_2() != 2 || Global_114018[56 /*10*/].f_3;
}

int func_2() // Position - 0x16F
{
	func_3();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_3() // Position - 0x188
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_7(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_6(PLAYER::PLAYER_PED_ID());
		
			if (func_5(iVar0) && !func_4(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_5(Global_114931.f_2370.f_539.f_4321))
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

bool func_4(int iParam0) // Position - 0x285
{
	return Global_44886 == iParam0;
}

bool func_5(int iParam0) // Position - 0x293
{
	return iParam0 < 3;
}

int func_6(var uParam0) // Position - 0x29F
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_7(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_7(int iParam0) // Position - 0x2DC
{
	if (func_5(iParam0))
		return func_8(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_8(int iParam0) // Position - 0x301
{
	return Global_2339[iParam0 /*29*/];
}

bool func_9(int iParam0) // Position - 0x310
{
	if (Global_44886 == 15)
		return false;

	if (func_10(iParam0))
		return false;

	return true;
}

bool func_10(int iParam0) // Position - 0x332
{
	return func_11(iParam0, Global_44886);
}

bool func_11(int iParam0, int iParam1) // Position - 0x343
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

void func_12(int iParam0) // Position - 0x524
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	for (iVar1 = 0; iVar0 > 31; iVar1 = iVar1 + 1)
	{
		iVar0 = iVar0 - 32;
	}

	if (iVar1 < 3)
		MISC::SET_BIT(&Global_114931.f_20417.f_150[iVar1], iVar0);
}

void func_13(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x566
{
	func_14(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_14(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x587
{
	int iVar0;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114931.f_20417[iVar0 /*16*/], sParam0))
			return;
	}

	if (Global_114931.f_20417.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_4), sParam1, 16);
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_9 = iParam5;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_11 = iParam6;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_12 = iParam2;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = -1;
	
		Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 + 1;
		func_15();
	}
}

void func_15() // Position - 0x75A
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		Global_114931.f_20417.f_146[iVar0] = 0;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 0))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[0])
				Global_114931.f_20417.f_146[0] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 1))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[1])
				Global_114931.f_20417.f_146[1] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 2))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[2])
				Global_114931.f_20417.f_146[2] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	}
}

int func_16(char* sParam0) // Position - 0x871
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113571))
		return 1;

	if (func_17(sParam0))
		return 0;

	return 2;
}

bool func_17(char* sParam0) // Position - 0x898
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114931.f_20417[iVar0 /*16*/]))
			return true;
	}

	return false;
}

bool func_18(int iParam0) // Position - 0x8D3
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	for (iVar1 = 0; iVar0 > 31; iVar1 = iVar1 + 1)
	{
		iVar0 = iVar0 - 32;
	}

	if (iVar1 < 3)
		return IS_BIT_SET(Global_114931.f_20417.f_150[iVar1], iVar0);

	return false;
}

void func_19(int iParam0) // Position - 0x913
{
	int iVar0;
	int iVar1;

	for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
	{
		iVar1 = Static_26 + iVar0;
		func_26(iVar1, iParam0, false);
		func_24(iVar1, true, 2, false);
		func_23(iVar1, true);
		func_22(iVar1, 44);
	
		if (Global_114931.f_2359[iVar0 /*2*/] >= 1 || func_36(108) == true || func_21(Static_27 + iVar0, 0) || IS_BIT_SET(Global_114931.f_18581[Static_28 + iVar0 /*6*/], 3))
			func_20(iVar1, true);
	}
}

void func_20(int iParam0, bool bParam1) // Position - 0x9A0
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 20))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 20);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 20);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 20);
}

bool func_21(int iParam0, int iParam1) // Position - 0xA26
{
	if (Global_114931.f_10201[iParam0 /*12*/].f_5 == true)
	{
		iParam1 == 1;
		return true;
	}

	return false;
}

void func_22(int iParam0, int iParam1) // Position - 0xA4D
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	MISC::SET_BITS_IN_RANGE(&(Global_34172[iVar0 /*23*/].f_11), 21, 26, iParam1);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_23(int iParam0, bool bParam1) // Position - 0xAAB
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 7))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 7);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 7);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_24(int iParam0, bool bParam1, int iParam2, bool bParam3) // Position - 0xB2E
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1)
	{
		if (!bParam3)
		{
			Global_34172[iVar0 /*23*/].f_17 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 8))
				MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
		
			MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 8);
		}
		else
		{
			Global_34172[iVar0 /*23*/].f_18 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 10))
				MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
		
			MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 10);
		}
	
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
	}
	else
	{
		func_25(iParam0);
	}
}

void func_25(int iParam0) // Position - 0xBF6
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 8) || IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 10))
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);

	MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 8);
	MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 10);
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_26(int iParam0, bool bParam1, bool bParam2) // Position - 0xC81
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		bVar1 = IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 15);
	
		if (bVar1 == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
	
		if (Global_34169 == true)
			Global_34170 = true;
	
		Global_34169 = true;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_34172[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_34172[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

void func_27(int iParam0, int iParam1, int iParam2) // Position - 0xD81
{
	bool bVar0;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_33(891 + iParam0, 1, -1);
	}

	bVar0 = true;

	if (Global_114931.f_10201[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114931.f_10201[iParam0 /*12*/].f_6 == 11 || Global_114931.f_10201[iParam0 /*12*/].f_6 == 12)
			bVar0 = false;
	}
	else
	{
		Global_114931.f_10201[iParam0 /*12*/].f_5 = 1;
		Global_114931.f_10201[iParam0 /*12*/].f_10 = iParam1;
		Global_114931.f_10201[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (bVar0)
		func_28();
}

void func_28() // Position - 0xE67
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_114667 = 0;
	Global_114668 = 0;
	Global_114669 = 0;
	Global_114670 = 0;
	Global_114671 = 0;
	Global_114672 = 0;
	Global_114673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114931.f_10201.f_3853;
	Global_114931.f_10201.f_3853 = 0f;

	while (iVar0 < 321)
	{
		if (Global_114931.f_10201[iVar0 /*12*/].f_5 == true)
		{
			switch (Global_114931.f_10201[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114667 = Global_114667 + 1;
					fVar1 = fVar1 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 3:
					Global_114668 = Global_114668 + 1;
					fVar2 = fVar2 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 5:
					Global_114669 = Global_114669 + 1;
					fVar3 = fVar3 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 7:
					Global_114670 = Global_114670 + 1;
					fVar4 = fVar4 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 9:
					Global_114671 = Global_114671 + 1;
					fVar5 = fVar5 + (Global_114931.f_10201[iVar0 /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114672 = Global_114672 + 1;
					fVar6 = fVar6 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 13:
					Global_114673 = Global_114673 + 1;
					fVar7 = fVar7 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		iVar0 = iVar0 + 1;
	}

	if (Global_114650 > 0)
		if (Global_114667 == Global_114650)
			fVar1 = 55f;

	if (Global_114651 > 0)
		if (Global_114668 == Global_114651)
			fVar2 = 10f;

	if (Global_114652 > 0)
		if (Global_114669 == Global_114652)
			fVar3 = 0f;

	if (Global_114653 > 0)
		if (Global_114670 == Global_114653)
			fVar4 = 10f;

	if (Global_114654 > 0)
	{
		if (Global_114671 == Global_114654 || (Global_114654 * 10) / Global_114671 < 41 || Global_114671 > Global_114657 || Global_114671 == Global_114657)
		{
			if (!IS_BIT_SET(Global_114931.f_10201.f_3856, 14))
			{
				if (Global_114671 == Global_114654)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114654, 0);
					MISC::SET_BIT(&(Global_114931.f_10201.f_3856), 14);
				}
			}
		
			fVar5 = 5f;
		}
	}

	if (Global_114655 > 0)
		if (Global_114672 == Global_114655)
			fVar6 = 15f;

	if (Global_114656 > 0)
		if (Global_114673 == Global_114656)
			fVar7 = 5f;

	Global_114931.f_10201.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;

	if (Global_114671 > Global_114657 || Global_114671 == Global_114657)
		iVar9 = Global_114657;
	else
		iVar9 = Global_114671;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114667, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114650, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114668, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114651, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114669, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114652, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114670, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114653, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114657, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_114673 + Global_114672, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_114656 + Global_114655, 1);
	Global_114674 = (Global_114667 * 100) / Global_114650;
	Global_114676 = ((Global_114669 + Global_114668) * 100) / (Global_114652 + Global_114651);
	Global_114675 = ((Global_114670 + iVar9) * 100) / (Global_114653 + Global_114657);
	Global_114677 = ((Global_114672 + Global_114673) * 100) / (Global_114655 + Global_114656);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114931.f_10201.f_3853, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114674, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114675, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114676, 1);

	if (fVar8 > 0f && BUILTIN::FLOOR(fVar8) < BUILTIN::FLOOR(Global_114931.f_10201.f_3853))
		func_32(13, BUILTIN::FLOOR(Global_114931.f_10201.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80305)
		{
			if (func_31() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114665 = false;
			
				if (!Global_65027)
					func_29();
			}
		}
	}
}

int func_29() // Position - 0x1325
{
	if (func_30(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_30(bool bParam0) // Position - 0x1370
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

int func_31() // Position - 0x1398
{
	return Global_33792;
}

int func_32(int iParam0, int iParam1) // Position - 0x13A3
{
	int iVar0;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > iVar0)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return 0;
}

void func_33(int iParam0, int iParam1, bool bParam2) // Position - 0x13F4
{
	if (bParam2 == -1)
		bParam2 = func_34();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, bParam2);
}

bool func_34() // Position - 0x1412
{
	return Global_1574927;
}

int func_35(int iParam0) // Position - 0x141E
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114931.f_9092.f_99.f_219[iVar0], iVar1))
		return 0;

	MISC::SET_BIT(&Global_114931.f_9092.f_99.f_219[iVar0], iVar1);
	return 1;
}

bool func_36(int iParam0) // Position - 0x1475
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

void func_37() // Position - 0x14A2
{
	func_19(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

