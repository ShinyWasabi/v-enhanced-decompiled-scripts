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
	int Static_18 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (Static_18 == 0)
	{
		func_11();
		func_10();
		Static_18 = 1;
		BUILTIN::SETTIMERA(0);
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21627.f_1 != 9)
		{
			switch (Global_21627.f_1)
			{
				case 7:
					if (Static_18 == 1 && BUILTIN::TIMERA() > 1500)
					{
						func_6();
						BUILTIN::SETTIMERA(0);
					}
					break;
			
				case 8:
					if (func_5(2, Global_21595, 0))
					{
						func_4();
						Global_21605 = true;
					
						if (Global_21627.f_1 > 3)
							Global_21627.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_3())
				func_2();
		}
		else
		{
			Global_21629 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}
}

bool func_1() // Position - 0xE5
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x128
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_3() // Position - 0x134
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x15D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21616, 1);
}

bool func_5(int iParam0, int iParam1, int iParam2) // Position - 0x17D
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

void func_6() // Position - 0x1EF
{
	func_7();
}

void func_7() // Position - 0x1FB
{
	func_9(Global_21608, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (IS_BIT_SET(Global_4524844, 23))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		func_8("CELL_EXTBYOU" /* GXT: You */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524845);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525125));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524846);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525125.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524847);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525125.f_2));
		func_8("CELL_BODYG" /* GXT: Guard */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524848);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525128));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524849);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525128.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524850);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525128.f_2));
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		func_8("CELL_EXTBYOU" /* GXT: You */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524848);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525128));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524849);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525128.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524850);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525128.f_2));
		func_8("CELL_EXTBTARG" /* GXT: Target */);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524845);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525125));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524846);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525125.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4524847);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Global_4525125.f_2));
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_9(Global_21608, "DISPLAY_VIEW", 24f, BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0) // Position - 0x396
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3A8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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

void func_10() // Position - 0x40B
{
	func_7();
}

void func_11() // Position - 0x417
{
	if (Global_21615)
	{
		func_12(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
		func_12(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_12(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x4A9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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
		func_8(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_8(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_8(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_8(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_8(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

