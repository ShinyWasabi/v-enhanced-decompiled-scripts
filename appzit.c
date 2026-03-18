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
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	var Static_24 = 0;
	var Static_25 = 0;
	var Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	var Static_29 = 0;
	var Static_30 = 0;
	var Static_31 = 0;
	var Static_32 = 0;
	var Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	var Static_37 = 0;
	var Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	int Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	bool Static_58 = 0;
	bool Static_59 = 0;
	int Static_60 = 0;
	int Static_61 = 0;
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
	Static_49 = -99;
	TEXT_LABEL_ASSIGN_STRING(&Static_50, "TRACKID", 32);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::REQUEST_ADDITIONAL_TEXT(&Static_50, 1);

	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		BUILTIN::WAIT(0);
	}

	func_15();
	func_14();
	func_11();
	BUILTIN::SETTIMERA(0);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Static_59)
		{
			if (Static_61 < 101)
			{
				if (BUILTIN::TIMERA() > 30)
				{
					Static_61 = Static_61 + 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10("CELL_4005");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Static_61);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_9(Global_21608, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
					BUILTIN::SETTIMERA(0);
				}
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_9(Global_21608, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				Static_60 = 1;
				Static_59 = false;
			}
		}
	
		if (Global_21627.f_1 != 9)
		{
			switch (Global_21627.f_1)
			{
				case 7:
					func_8();
				
					if (Static_58 == false)
						func_6();
					break;
			
				case 8:
					if (func_5(2, Global_21595, 0))
					{
						func_4();
						Static_59 = false;
						Static_60 = 0;
						Global_21605 = true;
						func_14();
					
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

bool func_1() // Position - 0x1C6
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x209
{
	Static_59 = false;
	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_3() // Position - 0x218
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x241
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21616, 1);
}

bool func_5(int iParam0, int iParam1, int iParam2) // Position - 0x262
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

void func_6() // Position - 0x2D4
{
	if (BUILTIN::TIMERA() > 2200)
	{
		if (Global_21615)
			func_7(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
		else
			func_7(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		Static_58 = true;
	}
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x324
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
		func_10(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_10(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_10(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_10(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_10(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_8() // Position - 0x3D7
{
	if (Global_21605 == false)
	{
		if (func_5(2, Global_21596, 0))
		{
			if (Static_58 && Static_60 == 0 && Static_59 == false)
			{
				Static_61 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_10("CELL_4005");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Static_61);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_9(Global_21608, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
			
				if (Global_21615)
				{
					func_7(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					func_7(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			
				func_7(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
				Static_59 = true;
				BUILTIN::SETTIMERA(0);
			}
		}
	}
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4ED
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10(char* sParam0) // Position - 0x550
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_11() // Position - 0x562
{
	var uVar0;

	func_13(134, 1);
	uVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();

	switch (func_12(uVar0))
	{
		case 1:
			func_13(82, 1);
			break;
	
		case 2:
			func_13(81, 1);
			break;
	
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0) // Position - 0x5AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
	
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
	
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
	}

	return 0;
}

void func_13(int iParam0, int iParam1) // Position - 0x638
{
	int iVar0;

	if (iParam1 < 1)
		return;

	if (Global_60769[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60769[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60769[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = iVar0 + iParam1;
		STATS::STAT_SET_INT(Global_60769[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14() // Position - 0x695
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_10("CELL_4001");
	func_10(&Static_18);
	func_10(&(Static_18.f_16));
	func_10("CELL_4002");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Static_18.f_24);
	func_10("CELL_4003");
	func_10(&(Static_18.f_25));
	func_10("CELL_4004");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_9(Global_21608, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);

	if (Global_21615)
	{
		if (Static_58)
			func_7(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
		else
			func_7(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
	
		func_7(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
	}
	else
	{
		if (Static_58)
			func_7(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		else
			func_7(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		func_7(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_7(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
}

void func_15() // Position - 0x7E5
{
	Static_49 = AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
	TEXT_LABEL_ASSIGN_STRING(&Static_18, "", 64);
	TEXT_LABEL_APPEND_INT(&Static_18, Static_49, 64);
	TEXT_LABEL_APPEND_STRING(&Static_18, "S", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Static_18.f_16), "", 32);
	TEXT_LABEL_APPEND_INT(&(Static_18.f_16), Static_49, 32);
	TEXT_LABEL_APPEND_STRING(&(Static_18.f_16), "A", 32);
	TEXT_LABEL_ASSIGN_STRING(&(Static_18.f_25), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 24);

	if (!HUD::DOES_TEXT_LABEL_EXIST(&Static_18))
		TEXT_LABEL_ASSIGN_STRING(&Static_18, "CELL_195" /* GXT: Unknown */, 64);

	if (!HUD::DOES_TEXT_LABEL_EXIST(&(Static_18.f_16)))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Static_18.f_16), "CELL_195" /* GXT: Unknown */, 32);
		TEXT_LABEL_ASSIGN_STRING(&(Static_18.f_25), "CELL_195" /* GXT: Unknown */, 24);
	}
}

