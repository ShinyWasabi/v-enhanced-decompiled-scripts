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
	bool Static_18 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar11;
	int iVar12;
	int iVar13;

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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_18();

	iVar0 = Global_44847;
	iVar1 = 15;
	uVar2 = 8;

	while (true)
	{
		if (Global_44886 != 15)
			if (Global_44849 != 0)
				if (Global_44848 != -1)
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_44849))
						func_17(&Global_44848);
	
		if (Global_44847 > 0)
		{
			Global_44852 = true;
		
			if (Global_44847 == iVar0)
			{
				iVar11 = 0;
			
				if (Global_44847 > 1)
				{
					iVar12 = 0;
				
					for (iVar12 = 0; iVar12 < Global_44847; iVar12 = iVar12 + 1)
					{
						if (func_15(Global_44853[iVar12 /*4*/].f_2))
							uVar2[iVar12] = 0;
						else
							uVar2[iVar12] = 1;
					
						if (Global_44853[iVar12 /*4*/].f_1 == 7)
							uVar2[iVar12] = 1;
					}
				
					iVar13 = 0;
					iVar12 = 0;
				
					for (iVar12 = 0; iVar12 < Global_44847 - 1; iVar12 = iVar12 + 1)
					{
						if (!uVar2[iVar12 + 1])
							if (Global_44853[iVar12 + 1 /*4*/].f_1 < Global_44853[iVar13 /*4*/].f_1)
								iVar13 = iVar12 + 1;
					}
				
					iVar11 = iVar13;
				
					if (Global_44853[iVar11 /*4*/].f_2 == 15)
						iVar11 = -1;
				
					if (iVar11 != -1)
						if (!func_15(Global_44853[iVar11 /*4*/].f_2))
							iVar11 = -1;
				}
			
				if (iVar11 > -1)
				{
					Global_44848 = Global_44853[iVar11 /*4*/];
					Global_44849 = Global_44853[iVar11 /*4*/].f_3;
					Global_44886 = Global_44853[iVar11 /*4*/].f_2;
					Global_44847 = 0;
					Global_44852 = false;
				}
				else
				{
					Global_44847 = 0;
					Global_44852 = false;
				}
			}
		}
	
		if (iVar1 != Global_44886)
		{
			if (iVar1 == 15)
				func_14(false);
		
			if (Global_44886 == 15)
				func_14(true);
		
			Global_44852 = false;
			Global_40224 = true;
		
			if (Global_44886 != 5 && Global_44886 != 15)
				PLAYER::FORCE_CLEANUP(8);
		
			if (Global_44886 == 15 || Global_44886 == 6)
				func_13(false);
			else
				func_13(true);
		
			if (func_12(Global_44886))
			{
				if (!Static_18)
				{
					NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(1);
					Static_18 = true;
				}
			}
			else if (Static_18)
			{
				NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(0);
				Static_18 = false;
			}
		}
	
		iVar1 = Global_44886;
		iVar0 = Global_44847;
		Global_113354 = func_1();
		Global_34069 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		BUILTIN::WAIT(0);
	}

	Global_44852 = false;
}

var func_1() // Position - 0x244
{
	var uVar0;

	func_11(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_10(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_9(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_4(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_3(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_2(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_2(var uParam0, int iParam1) // Position - 0x28A
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}
}

void func_3(var uParam0, int iParam1) // Position - 0x310
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
}

void func_4(var uParam0, int iParam1) // Position - 0x343
{
	int iVar0;
	int iVar1;

	iVar0 = func_8(*uParam0);
	iVar1 = func_6(*uParam0);

	if (iParam1 < 1 || iParam1 > func_5(iVar0, iVar1))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
}

int func_5(int iParam0, int iParam1) // Position - 0x394
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_6(int iParam0) // Position - 0x436
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_7(bool bParam0, var uParam1, var uParam2) // Position - 0x458
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_8(int iParam0) // Position - 0x46F
{
	return iParam0 & 15;
}

void func_9(var uParam0, int iParam1) // Position - 0x47C
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
}

void func_10(var uParam0, int iParam1) // Position - 0x4B6
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
}

void func_11(var uParam0, int iParam1) // Position - 0x4F1
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
}

bool func_12(int iParam0) // Position - 0x52D
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return true;
	}

	return false;
}

void func_13(bool bParam0) // Position - 0x58C
{
	if (!bParam0)
		Global_113570 = MISC::GET_GAME_TIMER() + 250;

	Global_113567 = bParam0;
}

void func_14(bool bParam0) // Position - 0x5AA
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		for (iVar1 = 0; iVar1 < 11; iVar1 = iVar1 + 1)
		{
			Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
		}
	}

	for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
	{
		Global_62209[iVar0 /*3*/][0] = Global_114931.f_20571[iVar0];
		Global_62209.f_31[iVar0 /*3*/][0] = Global_114931.f_20571.f_11[iVar0];
		Global_62209.f_62[iVar0 /*3*/][0] = Global_114931.f_20571.f_22[iVar0];
		Global_62209.f_93[iVar0 /*3*/][0] = Global_114931.f_20571.f_33[iVar0];
		Global_62209.f_124[iVar0 /*3*/][0] = Global_114931.f_20571.f_44[iVar0];
		Global_62209.f_155[iVar0 /*3*/][0] = Global_114931.f_20571.f_55[iVar0];
		Global_62209.f_186[iVar0 /*3*/][0] = Global_114931.f_20571.f_66[iVar0];
		Global_62209.f_217[iVar0 /*3*/][0] = Global_114931.f_20571.f_77[iVar0];
		Global_62209.f_248[iVar0 /*3*/][0] = Global_114931.f_20571.f_88[iVar0];
	
		if (!bParam0)
		{
			Global_62209[iVar0 /*3*/][1] = Global_114931.f_20571[iVar0];
			Global_62209.f_31[iVar0 /*3*/][1] = Global_114931.f_20571.f_11[iVar0];
			Global_62209.f_62[iVar0 /*3*/][1] = Global_114931.f_20571.f_22[iVar0];
			Global_62209.f_93[iVar0 /*3*/][1] = Global_114931.f_20571.f_33[iVar0];
			Global_62209.f_124[iVar0 /*3*/][1] = Global_114931.f_20571.f_44[iVar0];
			Global_62209.f_155[iVar0 /*3*/][1] = Global_114931.f_20571.f_55[iVar0];
			Global_62209.f_186[iVar0 /*3*/][1] = Global_114931.f_20571.f_66[iVar0];
			Global_62209.f_217[iVar0 /*3*/][1] = Global_114931.f_20571.f_77[iVar0];
			Global_62209.f_248[iVar0 /*3*/][1] = Global_114931.f_20571.f_88[iVar0];
		}
	}
}

bool func_15(int iParam0) // Position - 0x82C
{
	return func_16(iParam0, Global_44886);
}

bool func_16(int iParam0, int iParam1) // Position - 0x83D
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

void func_17(int iParam0) // Position - 0xA1E
{
	if (*iParam0 == -1)
		return;

	if (!(*iParam0 == Global_44848))
	{
		*iParam0 = -1;
		return;
	}

	*iParam0 = -1;
	Global_44847 = 0;
	Global_44849 = 0;
	Global_44886 = 15;
	Global_65024 = false;
	Global_65025 = 0;
}

void func_18() // Position - 0xA5B
{
	func_17(&Global_44848);
	Global_44852 = false;
	SCRIPT::TERMINATE_THIS_THREAD();
}

