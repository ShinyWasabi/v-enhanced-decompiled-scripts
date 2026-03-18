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
	var Static_16 = 4;
	var Static_17 = 0;
	var Static_18 = 0;
	var Static_19 = 0;
	var Static_20 = 0;
	int Static_21 = 0;
	int Static_22 = 0;
	int Static_23 = 0;
	int Static_24 = 0;
	float Static_25 = 0f;
	float Static_26 = 0f;
	float Static_27 = 0f;
	float Static_28 = 0f;
	bool Static_29 = 0;
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
	Static_25 = 0.72f;
	Static_26 = 0.42f;
	Static_27 = 0f;
	Static_28 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_24066 = 0;
	Global_21858 = 0;
	func_18();
	Global_21627.f_1 = 7;
	func_17(Global_21608, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_21608, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21627.f_1 != 9)
		{
			switch (Global_21627.f_1)
			{
				case 7:
					if (Global_24066 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
			
				case 8:
					if (Global_24066 == 1)
						func_5();
					break;
			
				case 3:
					SCRIPT::TERMINATE_THIS_THREAD();
					break;
			
				default:
					break;
			}
		
			if (Global_24066 == 0)
			{
				if (func_4())
					func_3();
			}
			else if (func_2(2, Global_21595, 0))
			{
				Global_21605 = true;
				Global_24066 = 0;
				Global_21627.f_1 = 7;
				func_18();
				func_17(Global_21608, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_21608, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
			}
		}
	
		if (func_1())
			func_3();
	}
}

bool func_1() // Position - 0x163
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

bool func_2(int iParam0, int iParam1, int iParam2) // Position - 0x1A6
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

void func_3() // Position - 0x218
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_4() // Position - 0x224
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_5() // Position - 0x24D
{
	GRAPHICS::DRAW_RECT(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6() // Position - 0x277
{
	int iVar0;

	Static_27 = Static_25;
	Static_28 = Static_26;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(Static_27, Static_28, &(Global_2339[Global_24289[Static_23 /*9*/] /*29*/].f_3), 0);
	Static_27 = Static_27 + 0.07f;
	func_10(255, 255, 255, 205);

	if (Global_24289[Static_23 /*9*/].f_2.f_1 < 10)
		func_7(Static_27, Static_28, "CELL_506" /* GXT: ~1~:0~1~ */, Global_24289[Static_23 /*9*/].f_2.f_2, Global_24289[Static_23 /*9*/].f_2.f_1);
	else
		func_7(Static_27, Static_28, "CELL_503" /* GXT: ~1~:~1~ */, Global_24289[Static_23 /*9*/].f_2.f_2, Global_24289[Static_23 /*9*/].f_2.f_1);

	Static_27 = Static_27 + 0.07f;
	func_10(255, 255, 255, 205);
	func_7(Static_27, Static_28, "CELL_505" /* GXT: ~1~/~1~ */, Global_24289[Static_23 /*9*/].f_2.f_3, Global_24289[Static_23 /*9*/].f_2.f_4);
	Static_27 = Static_25;
	func_10(255, 255, 255, 205);
	Static_28 = Static_28 + 0.02f;

	if (Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_8 == 0)
		func_9();

	HUD::SET_TEXT_WRAP(0f, 0.93f);
	func_8(Static_27, Static_28, &(Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_4), 0);
	Static_28 = Static_28 + 0.07f;

	for (iVar0 = 1; iVar0 <= Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_9; iVar0 = iVar0 + 1)
	{
		func_10(255, 255, 255, 255);
		Static_28 = Static_28 + 0.04f;
	
		if (Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
			func_8(Static_27, Static_28, &Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/], 0);
		else
			func_7(Static_27, Static_28, &Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/], Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_27[iVar0], Global_24120[Global_24289[Static_23 /*9*/].f_1 /*42*/].f_32[iVar0]);
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, var uParam3, int iParam4) // Position - 0x458
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0x47B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_9() // Position - 0x493
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_COLOUR(255, 128, 0, 255);
	HUD::SET_TEXT_DROPSHADOW(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4BD
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(1);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_11() // Position - 0x4FC
{
	if (func_2(2, Global_21596, 0))
	{
		Static_23 = Static_16[Static_22];
		Global_24066 = 1;
		func_12(Global_21608, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287" /* GXT: Send Photo(s) */, "CELL_280" /* GXT: Take Photo */, "CELL_285" /* GXT: Move */, "CELL_284" /* GXT: Zoom */, 0);
		func_17(Global_21608, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_21608, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
		Global_21627.f_1 = 8;
		Global_24066 = 1;
	}
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x57A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_13(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_13(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_13(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_13(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_13(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_13(char* sParam0) // Position - 0x62D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_14() // Position - 0x63F
{
	if (Static_29)
		if (BUILTIN::TIMERA() > 50)
			Static_29 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_2(2, 181, 0))
			if (Static_22 > 0)
				Static_22 = Static_22 - 1;
	
		if (func_2(2, 180, 0))
		{
			Static_22 = Static_22 + 1;
		
			if (Static_22 == Static_21)
				Static_22 = 0;
		}
	}

	if (Static_29 == false)
	{
		if (func_2(2, Global_21603, 0))
		{
			if (Static_22 > 0)
				Static_22 = Static_22 - 1;
		
			Static_29 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_2(2, Global_21604, 0))
		{
			Static_22 = Static_22 + 1;
		
			if (Static_22 == Static_21)
				Static_22 = 0;
		
			Static_29 = true;
			BUILTIN::SETTIMERA(0);
		}
	}
}

void func_15() // Position - 0x6DC
{
	int iVar0;

	iVar0 = 0;
	Static_27 = Static_25;
	Static_28 = Static_26;
	Static_24 = Static_21;

	while (iVar0 < Static_24)
	{
		func_10(255, 255, 255, 205);
	
		if (iVar0 == Static_22)
			func_9();
	
		func_8(Static_27, Static_28, &(Global_2339[Global_24289[Static_16[iVar0] /*9*/] /*29*/].f_3), 0);
		Static_27 = Static_27 + 0.07f;
		func_10(255, 255, 255, 205);
	
		if (Global_24289[Static_16[iVar0] /*9*/].f_2.f_1 < 10)
			func_7(Static_27, Static_28, "CELL_506" /* GXT: ~1~:0~1~ */, Global_24289[Static_16[iVar0] /*9*/].f_2.f_2, Global_24289[Static_16[iVar0] /*9*/].f_2.f_1);
		else
			func_7(Static_27, Static_28, "CELL_503" /* GXT: ~1~:~1~ */, Global_24289[Static_16[iVar0] /*9*/].f_2.f_2, Global_24289[Static_16[iVar0] /*9*/].f_2.f_1);
	
		Static_27 = Static_27 + 0.07f;
		func_10(255, 255, 255, 205);
		func_7(Static_27, Static_28, "CELL_505" /* GXT: ~1~/~1~ */, Global_24289[Static_16[iVar0] /*9*/].f_2.f_3, Global_24289[Static_16[iVar0] /*9*/].f_2.f_4);
		Static_27 = Static_25;
		func_10(255, 255, 255, 205);
	
		if (iVar0 == Static_22)
			func_9();
	
		Static_28 = Static_28 + 0.02f;
		HUD::SET_TEXT_WRAP(0f, 0.93f);
		func_8(Static_27, Static_28, &Global_24120[Global_24289[Static_16[iVar0] /*9*/].f_1 /*42*/], 0);
		Static_28 = Static_28 + 0.05f;
		iVar0 = iVar0 + 1;
	}
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x83F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_13(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_13(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_13(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_13(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_13(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_17(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x89A
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

void func_18() // Position - 0x8FD
{
	var uVar0;
	int iVar5;
	int iVar6;
	int iVar7;

	Static_21 = 0;
	uVar0 = 4;

	for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_24289[iVar7 /*9*/].f_2 = -1;
		Global_24289[iVar7 /*9*/].f_2.f_1 = 0;
		Global_24289[iVar7 /*9*/].f_2.f_2 = 0;
		Global_24289[iVar7 /*9*/].f_2.f_3 = 0;
		Global_24289[iVar7 /*9*/].f_2.f_5 = 0;
	
		while (iVar6 < 4)
		{
			if (uVar0[iVar6] == 0)
				if (Global_24289[iVar6 /*9*/].f_8 != 0)
					if (func_19(Global_24289[iVar6 /*9*/].f_2, Global_24289[iVar7 /*9*/].f_2))
						iVar7 = iVar6;
		
			iVar6 = iVar6 + 1;
		}
	
		Static_16[iVar5] = iVar7;
		uVar0[iVar7] = 1;
	
		if (Global_24289[iVar5 /*9*/].f_8 != 0)
			Static_21 = Static_21 + 1;
	}

	func_12(Global_21608, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287" /* GXT: Send Photo(s) */, "CELL_280" /* GXT: Take Photo */, 0, 0, 0);
}

bool func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x9E8
{
	int iVar0;
	int iVar6;
	int iVar12;
	int iVar13;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			iVar0 = iParam0;
			iVar0.f_1 = iParam0.f_1 * 60;
			iVar0.f_2 = iParam0.f_2 * 3600;
			iVar0.f_3 = iParam0.f_3 * 86400;
			iVar12 = iVar0 + iVar0.f_1 + iVar0.f_2 + iVar0.f_3;
			iVar6 = iParam6;
			iVar6.f_1 = iParam6.f_1 * 60;
			iVar6.f_2 = iParam6.f_2 * 3600;
			iVar6.f_3 = iParam6.f_3 * 86400;
			iVar13 = iVar6 + iVar6.f_1 + iVar6.f_2 + iVar6.f_3;
		
			if (iVar12 > iVar13 || iVar12 == iVar13)
				return true;
			else
				return false;
		}
	}

	return false;
}

