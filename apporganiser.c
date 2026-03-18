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
	bool Static_16 = 0;
	bool Static_17 = 0;
	bool Static_18 = 0;
	bool Static_19 = 0;
	bool Static_20 = 0;
	bool Static_21 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_14();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_8();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21627.f_1 != 9)
		{
			if (!Static_16)
			{
				Static_16 = true;
			}
			else if (Global_21609)
			{
				if (!Static_17)
				{
					Static_17 = true;
					func_7(Global_21608, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_21608, true);
					func_7(Global_21608, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
		
			if (func_2())
				func_14();
		}
	
		if (func_1())
			func_14();
	}
}

bool func_1() // Position - 0xDC
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

bool func_2() // Position - 0x11F
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x148
{
	if (!Static_18)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 172))
		{
			Static_18 = true;
			func_7(Global_21608, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 172))
	{
		Static_18 = false;
	}

	if (!Static_19)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 173))
		{
			Static_19 = true;
			func_7(Global_21608, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 173))
	{
		Static_19 = false;
	}

	if (!Static_20)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 174))
		{
			Static_20 = true;
			func_7(Global_21608, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 174))
	{
		Static_20 = false;
	}

	if (!Static_21)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 175))
		{
			Static_21 = true;
			func_7(Global_21608, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 175))
	{
		Static_21 = false;
	}
}

void func_4(int iParam0, bool bParam1) // Position - 0x25C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;

	if (Global_99516 == Global_99517)
		if (!bParam1)
			return;

	if (iParam0 == 0)
		return;

	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
		return;

	func_8();
	iVar0 = Global_99520;
	iVar1 = Global_99519;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;

	while (bVar2)
	{
		iVar4 = iVar3;
		iVar3 = Global_99521[iVar0 /*25*/][iVar1];
	
		if (!(iVar3 == iVar4))
		{
			if (!(iVar3 == 0))
			{
				switch (iVar0)
				{
					case 0:
						sVar6 = "fSu" /* GXT: SUNDAY */;
						break;
				
					case 1:
						sVar6 = "fMo" /* GXT: MONDAY */;
						break;
				
					case 2:
						sVar6 = "fTu" /* GXT: TUESDAY */;
						break;
				
					case 3:
						sVar6 = "fWe" /* GXT: WEDNESDAY */;
						break;
				
					case 4:
						sVar6 = "fTh" /* GXT: THURSDAY */;
						break;
				
					case 5:
						sVar6 = "fFr" /* GXT: FRIDAY */;
						break;
				
					case 6:
						sVar6 = "fSa" /* GXT: SATURDAY */;
						break;
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(-1f);
				func_6(sVar6);
				func_6(func_5(iVar3));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar5 = iVar5 + 1;
			}
		}
	
		iVar1 = iVar1 + 1;
	
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0 = iVar0 + 1;
		}
	
		if (iVar0 > 6)
			iVar0 = 0;
	
		if (iVar0 == Global_99520 && iVar1 == Global_99519)
			bVar2 = false;
	}

	Global_99517 = Global_99516;
}

char* func_5(int iParam0) // Position - 0x3D0
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0" /* GXT: NOT SET! */;
	
		case 1:
			return "ORG_EV_1" /* GXT: House Viewing */;
	}

	return "ORG_EV_0" /* GXT: NOT SET! */;
}

void func_6(char* sParam0) // Position - 0x400
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_7(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x412
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_8() // Position - 0x475
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!Global_99515)
	{
		Global_99699 = CLOCK::GET_CLOCK_MONTH();
		Global_99698 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		Global_99697 = CLOCK::GET_CLOCK_HOURS();
		Global_99515 = true;
		Global_99520 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		Global_99519 = CLOCK::GET_CLOCK_HOURS();
		func_12();
		return;
	}

	iVar0 = CLOCK::GET_CLOCK_MONTH();
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = Global_99699;
	iVar4 = Global_99698;
	iVar5 = Global_99697;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = func_9(iVar4, iVar3, iVar1, iVar0);

	if (iVar11 > 0)
	{
		iVar10 = 0;
	
		if (iVar11 > 7)
		{
			iVar8 = 0;
			iVar9 = 0;
		
			for (iVar8 = 0; iVar8 < 7; iVar8 = iVar8 + 1)
			{
				for (iVar9 = 0; iVar9 < 24; iVar9 = iVar9 + 1)
				{
					if (!(Global_99521[iVar6 /*25*/][iVar7] == 0))
					{
						Global_99516 = Global_99516 + 1;
						Global_99518 = Global_99518 - 1;
					}
				
					Global_99521[iVar6 /*25*/][iVar7] = 0;
				}
			}
		}
		else if (iVar11 > 1)
		{
			iVar10 = iVar10 + ((iVar11 - 1) * 24);
		}
	
		iVar10 = iVar10 + (24 - iVar5);
		iVar10 = iVar10 + (24 - 24 - iVar2);
		iVar8 = 0;
		iVar7 = Global_99519;
		iVar6 = Global_99520;
	
		for (iVar8 = 0; iVar8 < iVar10; iVar8 = iVar8 + 1)
		{
			if (iVar7 > 23)
			{
				iVar7 = 0;
				iVar6 = iVar6 + 1;
			}
		
			if (iVar6 > 6)
				iVar6 = 0;
		
			if (!(Global_99521[iVar6 /*25*/][iVar7] == 0))
			{
				Global_99516 = Global_99516 + 1;
				Global_99518 = Global_99518 - 1;
			}
		
			Global_99521[iVar6 /*25*/][iVar7] = 0;
			iVar7 = iVar7 + 1;
		}
	
		Global_99519 = iVar7 - 1;
		Global_99520 = iVar6;
	}
	else
	{
		if (iVar5 > iVar2)
		{
			Global_99699 = iVar0;
			Global_99698 = iVar1;
			Global_99697 = iVar2;
			Global_99520 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
			Global_99519 = CLOCK::GET_CLOCK_HOURS();
			return;
		}
	
		if (iVar5 == iVar2)
		{
			return;
		}
		else
		{
			iVar10 = iVar2 - iVar5;
			iVar8 = 0;
			iVar7 = Global_99519;
			iVar6 = Global_99520;
		
			for (iVar8 = 0; iVar8 < iVar10; iVar8 = iVar8 + 1)
			{
				if (!(Global_99521[iVar6 /*25*/][iVar7] == 0))
				{
					Global_99516 = Global_99516 + 1;
					Global_99518 = Global_99518 - 1;
				}
			
				Global_99521[iVar6 /*25*/][iVar7] = 0;
				iVar7 = iVar7 + 1;
			
				if (iVar7 > 23)
				{
					iVar7 = 0;
					iVar6 = iVar6 + 1;
				}
			
				if (iVar6 > 6)
					iVar6 = 0;
			}
		
			Global_99519 = iVar7;
			Global_99520 = iVar6;
		}
	}

	Global_99516 > Global_99517;

	if (iVar3 == iVar0 && iVar5 == iVar2 && iVar4 == iVar1)
	{
	}
	else
	{
		Global_99699 = iVar0;
		Global_99698 = iVar1;
		Global_99697 = iVar2;
	}
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x712
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;

	if (!(iParam1 == iParam3))
	{
		if (iParam1 < iParam3)
		{
			iVar1 = func_10(iParam1) - func_10(iParam1) - iParam0;
			iVar2 = 0;
		
			if (iParam3 > iParam1 + 1)
			{
				iVar3 = iParam3 - iParam1;
				iVar4 = iParam1 + 1;
				iVar0 = 0;
			
				for (iVar0 = 0; iVar0 < iVar3; iVar0 = iVar0 + 1)
				{
					if (iVar4 > 11)
						iVar4 = 0;
				
					iVar2 = iVar2 + func_10(iVar4);
					iVar4 = iVar4 + 1;
				}
			}
		
			iVar5 = func_10(iParam3) - iParam2;
			iVar6 = iVar1 + iVar2 + iVar5;
			return iVar6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
			return 0;
	
		if (iParam2 == iParam0)
			return 0;
	
		return iParam2 - iParam0;
	}

	return 0;
}

int func_10(int iParam0) // Position - 0x7C5
{
	return func_11(iParam0);
}

int func_11(int iParam0) // Position - 0x7D3
{
	switch (iParam0)
	{
		case 8:
			return 30;
	
		case 3:
			return 30;
	
		case 5:
			return 30;
	
		case 10:
			return 30;
	
		case 1:
			return 28;
	
		default:
		
	}

	return 31;
}

void func_12() // Position - 0x81F
{
	int iVar0;
	int iVar1;

	Global_99519 = 0;
	Global_99520 = 0;
	iVar0 = 0;
	iVar1 = 0;

	for (iVar0 = 0; iVar0 < 7; iVar0 = iVar0 + 1)
	{
		for (iVar1 = 0; iVar1 < 24; iVar1 = iVar1 + 1)
		{
			Global_99521[iVar0 /*25*/][iVar1] = 0;
		}
	}

	func_13();
}

void func_13() // Position - 0x86D
{
	Global_99519 = 0;
	Global_99520 = 0;
	Global_99697 = CLOCK::GET_CLOCK_HOURS();
	Global_99698 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	Global_99699 = CLOCK::GET_CLOCK_MONTH();
}

void func_14() // Position - 0x897
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

