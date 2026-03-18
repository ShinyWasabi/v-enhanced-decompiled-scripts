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
	float Static_21 = 0f;
	float Static_22 = 0f;
	float Static_23 = 0f;
	float Static_24 = 0f;
	float Static_25 = 0f;
	float Static_26 = 0f;
	float Static_27 = 0f;
	float Static_28 = 0f;
	int Static_29 = 0;
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
	Static_25 = 9.99f;
	Static_26 = 0f;
	Static_27 = 0f;
	Static_28 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_10();
	func_7();
	BUILTIN::SETTIMERA(0);
	BUILTIN::SETTIMERB(0);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21627.f_1 != 9)
		{
			switch (Global_21627.f_1)
			{
				case 7:
					if (BUILTIN::TIMERA() > 125)
					{
						func_10();
						BUILTIN::SETTIMERA(0);
					}
				
					if (BUILTIN::TIMERB() > BUILTIN::FLOOR(Static_27) * 30 && BUILTIN::TIMERB() > 150)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						BUILTIN::SETTIMERB(0);
					}
				
					if (BUILTIN::TIMERB() > 2000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						BUILTIN::SETTIMERB(0);
					}
					break;
			
				case 8:
					if (func_6(2, Global_21595, 0))
					{
						func_5();
						Global_21605 = true;
						func_10();
						func_7();
					
						if (Global_21627.f_1 > 3)
							Global_21627.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_4())
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

bool func_1() // Position - 0x144
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x187
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	MISC::CLEAR_BIT(&Global_9464, 22);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, int iParam1) // Position - 0x1BA
{
	Global_4525097[iParam0] = iParam1;
}

bool func_4() // Position - 0x1CC
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_5() // Position - 0x1F5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21616, 1);
}

bool func_6(int iParam0, int iParam1, int iParam2) // Position - 0x216
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

void func_7() // Position - 0x288
{
	if (Global_21615)
	{
		func_8(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
		func_8(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_8(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x31A
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
		func_9(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_9(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_9(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_9(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_9(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_9(char* sParam0) // Position - 0x3CD
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10() // Position - 0x3DF
{
	int iVar0;
	bool bVar1;

	if (func_18() == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			Static_18 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Static_21 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			func_17();
			func_16();
			func_15();
			Static_22 = 360f - Static_21;
			Static_25 = Static_25 - Static_22;
		
			if (Static_25 < 0f)
				Static_25 = Static_25 + 360f;
		
			if (Static_29 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			
				if (IS_BIT_SET(Global_9464, 30))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Static_25));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Static_26));
				}
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			
				if (IS_BIT_SET(Global_9464, 22))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			
				if (IS_BIT_SET(Global_9464, 29))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			
				if (IS_BIT_SET(Global_9465, 1))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_28);
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			Static_21 == Static_21;
			func_14(Global_21608, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Static_18 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Static_21 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		Global_4525119 > 21;
	
		for (iVar0 = 0; iVar0 < Global_4525119; iVar0 = iVar0 + 1)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			Static_22 = 360f - Static_21;
			Static_25 = Static_25 - Static_22;
		
			if (Static_25 < 0f)
				Static_25 = Static_25 + 360f;
		
			if (Static_29 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				bVar1 = false;
			
				switch (iVar0)
				{
					case 0:
						if (IS_BIT_SET(Global_4524844, 5))
							bVar1 = true;
						break;
				
					case 1:
						if (IS_BIT_SET(Global_4524844, 6))
							bVar1 = true;
						break;
				
					case 2:
						if (IS_BIT_SET(Global_4524844, 7))
							bVar1 = true;
						break;
				
					case 3:
						if (IS_BIT_SET(Global_4524844, 8))
							bVar1 = true;
						break;
				}
			
				if (bVar1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Static_25));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(Static_26));
				}
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			
				if (IS_BIT_SET(Global_9464, 22))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			
				if (IS_BIT_SET(Global_9464, 29))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_28);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4525097[iVar0]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			Static_21 == Static_21;
			func_14(Global_21608, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
}

float func_11(int iParam0) // Position - 0x68E
{
	Static_23 = Global_4525033[iParam0 /*3*/] - Static_18;
	Static_24 = BUILTIN::COS((3.14159f / 180f) * Static_18) * (Global_4525033[iParam0 /*3*/].f_1 - Static_18.f_1);
	Static_25 = MISC::ATAN2(Static_23, Static_24);

	if (Static_25 < 0f)
		Static_25 = Static_25 + 360f;

	return Static_25;
}

float func_12(int iParam0) // Position - 0x6E4
{
	Static_27 = BUILTIN::SQRT(BUILTIN::VDIST2(Global_4525033[iParam0 /*3*/], Static_18));
	Static_28 = Global_4525033[iParam0 /*3*/].f_2 - Static_18.f_2;
	return Static_27;
}

float func_13(int iParam0) // Position - 0x717
{
	Static_26 = BUILTIN::SQRT(((Global_4525033[iParam0 /*3*/] - Static_18) * (Global_4525033[iParam0 /*3*/] - Static_18)) + ((Global_4525033[iParam0 /*3*/].f_1 - Static_18.f_1) * (Global_4525033[iParam0 /*3*/].f_1 - Static_18.f_1)));
	return Static_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x75E
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

float func_15() // Position - 0x7C1
{
	Static_23 = Global_24107 - Static_18;
	Static_24 = BUILTIN::COS((3.14159f / 180f) * Static_18) * (Global_24107.f_1 - Static_18.f_1);
	Static_25 = MISC::ATAN2(Static_23, Static_24);

	if (Static_25 < 0f)
		Static_25 = Static_25 + 360f;

	return Static_25;
}

float func_16() // Position - 0x80D
{
	Static_27 = BUILTIN::SQRT(BUILTIN::VDIST2(Global_24107, Static_18));
	Static_28 = Global_24107.f_2 - Static_18.f_2;
	return Static_27;
}

float func_17() // Position - 0x836
{
	Static_26 = BUILTIN::SQRT(((Global_24107 - Static_18) * (Global_24107 - Static_18)) + ((Global_24107.f_1 - Static_18.f_1) * (Global_24107.f_1 - Static_18.f_1)));
	return Static_26;
}

int func_18() // Position - 0x869
{
	if (Global_80305 == true)
		return 1;

	return 0;
}

