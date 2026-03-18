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
	var Static_16 = 15;
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
	int Static_32 = 0;
	int Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	int Static_36 = 0;
	bool Static_37 = 0;
	float Static_38 = 0f;
	float Static_39 = 0f;
	float Static_40 = 0f;
	float Static_41 = 0f;
	bool Static_42 = 0;
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
	Static_38 = 0.82f;
	Static_39 = 0.42f;
	Static_40 = 0f;
	Static_41 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_28();
	Static_37 = true;
	func_27();
	func_26();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21627.f_1 != 9)
		{
			switch (Global_21627.f_1)
			{
				case 7:
					func_21();
				
					if (Static_37)
						func_18();
					else
						func_12();
					break;
			
				case 8:
					func_21();
					func_12();
				
					if (func_11(2, Global_21595, 0))
					{
						func_10();
						Global_21605 = true;
						func_9(Global_21608, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
					
						if (Global_21627.f_1 > 3)
							Global_21627.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_8())
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

bool func_1() // Position - 0x113
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x156
{
	func_7();

	if (func_4(0))
		func_3();

	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3() // Position - 0x172
{
	if (Global_10302[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_10302[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_10302[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_10302[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_10302[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_10302[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_9463, 25);
	MISC::SET_BIT(&Global_9464, 11);
}

bool func_4(int iParam0) // Position - 0x1EF
{
	if (Global_44886 == 15)
		return false;

	if (func_5(iParam0))
		return false;

	return true;
}

bool func_5(int iParam0) // Position - 0x211
{
	return func_6(iParam0, Global_44886);
}

bool func_6(int iParam0, int iParam1) // Position - 0x222
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

void func_7() // Position - 0x403
{
	func_28();
	Global_10302[Global_21627 /*2811*/][0 /*281*/].f_124[2] = 1;
}

bool func_8() // Position - 0x422
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_9(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x44B
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

void func_10() // Position - 0x4AE
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21616, 1);
}

bool func_11(int iParam0, int iParam1, int iParam2) // Position - 0x4CF
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

void func_12() // Position - 0x541
{
	if (Global_21605 == false)
	{
		if (func_11(2, Global_21596, 0))
		{
			func_15();
			Global_21605 = true;
			func_28();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "GET_CURRENT_SELECTION");
			Static_34 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(Static_34))
			{
				BUILTIN::WAIT(0);
			}
		
			Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_259 = Static_16[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(Static_34)];
			func_13(Global_21608, "SET_HEADER", &Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_7[Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
				func_9(Global_21608, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			else
				func_9(Global_21608, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		
			if (func_4(0))
				func_3();
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x638
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_14(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_14(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_14(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_14(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_14(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0) // Position - 0x693
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15() // Position - 0x6A5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21616, 1);
		func_16();
	}
}

void func_16() // Position - 0x6CA
{
	if (func_17())
		MOBILE::CELL_SET_INPUT(5);
}

bool func_17() // Position - 0x6DE
{
	var uVar0;
	int iVar1;
	bool bVar2;

	if (Global_80305)
		return false;

	bVar2 = 0;
	uVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);

	if (iVar1 == 4)
		bVar2 = 1;

	if (Global_4525122 || bVar2)
		return true;

	return true;
}

void func_18() // Position - 0x725
{
	Global_21605 = true;
	Static_36 = 0;
	Static_37 = false;
	func_19();
}

void func_19() // Position - 0x73B
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;

	func_9(Global_21608, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	Static_32 = 0;
	uVar0 = 15;

	for (iVar16 = 0; iVar16 < 9; iVar16 = iVar16 + 1)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_84[iVar18] = 5000;
	
		while (iVar17 < 9)
		{
			if (Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_124[iVar17] == 1)
			{
				if (uVar0[iVar17] == 0)
				{
					if (Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_84[iVar17] < Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						func_20(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(iVar16), BUILTIN::TO_FLOAT(Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_104[iVar18]), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_7[iVar18 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			iVar17 = iVar17 + 1;
		}
	
		Static_16[iVar16] = iVar18;
		uVar0[iVar18] = 1;
	
		if (Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_124[iVar16] == 1)
			Static_32 = Static_32 + 1;
	}

	func_9(Global_21608, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_21608, "SET_HEADER", &Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_7[Global_10302[Global_21627 /*2811*/][Static_36 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_21615)
	{
		func_20(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_20(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x942
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
		func_14(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
		func_14(iParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
		func_14(iParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
		func_14(iParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
		func_14(iParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_21() // Position - 0x9F5
{
	if (Static_42)
		if (BUILTIN::TIMERA() > 50)
			Static_42 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_11(2, 181, 0))
		{
			if (Static_33 > 0)
				Static_33 = Static_33 - 1;
		
			func_24();
		}
	
		if (func_11(2, 180, 0))
		{
			Static_33 = Static_33 + 1;
		
			if (Static_33 == Static_32)
				Static_33 = 0;
		
			func_22();
		}
	}

	if (Static_42 == false)
	{
		if (func_11(2, Global_21603, 0))
		{
			if (Static_33 > 0)
				Static_33 = Static_33 - 1;
		
			func_24();
			Static_42 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_11(2, Global_21604, 0))
		{
			Static_33 = Static_33 + 1;
		
			if (Static_33 == Static_32)
				Static_33 = 0;
		
			func_22();
			Static_42 = true;
			BUILTIN::SETTIMERA(0);
		}
	}
}

void func_22() // Position - 0xAA2
{
	func_9(Global_21608, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
	func_23();
}

void func_23() // Position - 0xADD
{
	if (func_17())
		if (Global_21864 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);
}

void func_24() // Position - 0xB00
{
	func_9(Global_21608, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
	func_25();
}

void func_25() // Position - 0xB3B
{
	if (func_17())
		if (Global_21864 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);
}

void func_26() // Position - 0xB5E
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;

	Static_32 = 0;
	uVar0 = 15;
	iVar16 = 0;
	func_28();

	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_10302[Global_21627 /*2811*/][iVar18 /*281*/] = 5000;
	
		while (iVar17 < 9)
		{
			if (Global_10302[Global_21627 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (uVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_10302[Global_21627 /*2811*/][iVar17 /*281*/] < Global_10302[Global_21627 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							func_20(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(2), BUILTIN::TO_FLOAT(iVar16), -1f, -1f, -1f, &(Global_10302[Global_21627 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			iVar17 = iVar17 + 1;
		}
	
		Static_16[iVar16] = iVar18;
		uVar0[iVar18] = 1;
	
		if (Global_10302[Global_21627 /*2811*/][iVar16 /*281*/].f_280 == 1)
			Static_32 = Static_32 + 1;
	
		iVar16 = iVar16 + 1;
	}

	func_9(Global_21608, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_21608, "SET_HEADER", "CELL_16" /* GXT: Settings */, 0, 0, 0, 0);

	if (Global_21615)
	{
		func_20(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_20(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
}

void func_27() // Position - 0xCF9
{
	if (Global_44886 != 15)
	{
		func_28();
		Global_10302[Global_21627 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28() // Position - 0xD20
{
	if (func_35(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[0 /*29*/])
				Global_21627 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[1 /*29*/])
				Global_21627 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[2 /*29*/])
				Global_21627 = 2;
			else
				Global_21627 = 0;
	}
	else
	{
		Global_21627 = func_29();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

int func_29() // Position - 0xDC2
{
	func_30();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_30() // Position - 0xDDB
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
		
			if (func_31(iVar0) && !func_35(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_31(Global_114931.f_2370.f_539.f_4321))
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

bool func_31(int iParam0) // Position - 0xED8
{
	return iParam0 < 3;
}

int func_32(var uParam0) // Position - 0xEE4
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_33(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_33(int iParam0) // Position - 0xF21
{
	if (func_31(iParam0))
		return func_34(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_34(int iParam0) // Position - 0xF46
{
	return Global_2339[iParam0 /*29*/];
}

bool func_35(int iParam0) // Position - 0xF55
{
	return Global_44886 == iParam0;
}

