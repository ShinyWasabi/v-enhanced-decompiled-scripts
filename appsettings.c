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
	var Static_16 = 20;
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
	int Static_37 = 0;
	int Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	int Static_41 = 0;
	int Static_42 = 0;
	int Static_43 = 0;
	int Static_44 = 0;
	int Static_45 = 0;
	int Static_46 = 0;
	int Static_47 = 0;
	bool Static_48 = 0;
	bool Static_49 = 0;
	bool Static_50 = 0;
	bool Static_51 = 0;
	int Static_52 = 0;
	var Static_53 = 0;
	bool Static_54 = 0;
	bool Static_55 = 0;
	float Static_56 = 0f;
	float Static_57 = 0f;
	float Static_58 = 0f;
	float Static_59 = 0f;
	bool Static_60 = 0;
	float Static_61 = 0f;
	float Static_62 = 0f;
	int Static_63 = 0;
	int Static_64 = 0;
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
	Static_56 = 0.82f;
	Static_57 = 0.42f;
	Static_58 = 0f;
	Static_59 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_47(Global_21608, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_46();

	if (Global_21572 == 0)
	{
		Static_61 = 0.75f;
		Static_62 = 0.8f;
	}
	else
	{
		Static_61 = 0.65f;
		Static_62 = 0.77f;
	}

	Global_10302[Global_21627 /*2811*/][2 /*281*/].f_259 = Global_114931.f_14058[Global_21627 /*20*/].f_6;
	Global_10302[Global_21627 /*2811*/][4 /*281*/].f_259 = Global_114931.f_14058[Global_21627 /*20*/].f_9;

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		if (Global_80305)
		{
			Global_10302[Global_21627 /*2811*/][1 /*281*/].f_259 = func_45(1199, -1);
			Global_10302[Global_21627 /*2811*/][2 /*281*/].f_259 = func_45(2030, -1);
			Global_10302[Global_21627 /*2811*/][4 /*281*/].f_259 = func_45(2029, -1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_14058[Global_21627 /*20*/].f_11), &Global_10302[Global_21627 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/]))
		{
			Global_10302[Global_21627 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
	}

	if (Global_80305)
		Global_114931.f_14058[3 /*20*/].f_10 = func_45(1198, -1);

	Global_10302[Global_21627 /*2811*/][3 /*281*/].f_259 = Global_114931.f_14058[Global_21627 /*20*/].f_10;
	func_44();

	if (Global_80305)
	{
		Global_10302[3 /*2811*/][0 /*281*/] = 190;
		Global_10302[3 /*2811*/][0 /*281*/].f_1 = 190;
		TEXT_LABEL_ASSIGN_STRING(&(Global_10302[3 /*2811*/][0 /*281*/].f_2), "CELL_701" /* GXT: Snapmatic */, 16);
		Global_10302[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_10302[3 /*2811*/][0 /*281*/].f_280 = 1;
		TEXT_LABEL_ASSIGN_STRING(&Global_10302[3 /*2811*/][0 /*281*/].f_7[0 /*4*/], "CELL_704" /* GXT: Quick launch Off */, 16);
		Global_10302[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_10302[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_10302[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_10302[3 /*2811*/][0 /*281*/].f_7[1 /*4*/], "CELL_703" /* GXT: Quick launch On */, 16);
		Global_10302[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_10302[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_10302[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_10302[3 /*2811*/][0 /*281*/].f_7[2 /*4*/], "CELL_801" /* GXT: Sleep Mode */, 16);
		Global_10302[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_10302[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_10302[3 /*2811*/][0 /*281*/].f_104[2] = 26;
	
		if (func_45(2092, -1) == 0)
			Global_10302[3 /*2811*/][0 /*281*/].f_259 = 0;
		else
			Global_10302[3 /*2811*/][0 /*281*/].f_259 = 1;
	}

	func_34();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Static_48)
		{
			if (BUILTIN::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			
				Static_48 = false;
			}
		}
	
		if (Global_21627.f_1 != 9)
		{
			switch (Global_21627.f_1)
			{
				case 7:
					func_29();
					func_27();
					break;
			
				case 8:
					if (Static_54 || Static_55)
					{
						if (Static_54)
						{
							Static_54 = false;
							BUILTIN::SETTIMERB(0);
							Global_114931.f_14058.f_82 = 1;
							Static_55 = true;
						}
						else if (BUILTIN::TIMERB() > 7500)
						{
							Static_55 = false;
							HUD::CLEAR_HELP(1);
						}
					}
					else
					{
						func_29();
						func_12();
					
						if (Static_51)
							func_11();
					
						if (func_10(2, Global_21595, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						
							Static_51 = false;
							func_9();
							Global_21605 = true;
							func_47(Global_21608, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_34();
						
							if (Global_21627.f_1 > 3)
								Global_21627.f_1 = 7;
						}
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

bool func_1() // Position - 0x449
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x48C
{
	func_7();

	if (func_4(0))
		func_3();

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (Static_54)
		HUD::CLEAR_HELP(1);

	if (Global_114931.f_14058.f_83 == 0 || Global_114931.f_14058.f_82 == 0)
		func_3();

	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3() // Position - 0x4EF
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

bool func_4(int iParam0) // Position - 0x56C
{
	if (Global_44886 == 15)
		return false;

	if (func_5(iParam0))
		return false;

	return true;
}

bool func_5(int iParam0) // Position - 0x58E
{
	return func_6(iParam0, Global_44886);
}

bool func_6(int iParam0, int iParam1) // Position - 0x59F
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

void func_7() // Position - 0x780
{
	func_46();
	Global_10302[Global_21627 /*2811*/][0 /*281*/].f_124[2] = 1;
}

bool func_8() // Position - 0x79F
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_9() // Position - 0x7C8
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21616, 1);
}

bool func_10(int iParam0, int iParam1, int iParam2) // Position - 0x7E9
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

void func_11() // Position - 0x85B
{
	int iVar0;

	Static_52 = MISC::GET_GAME_TIMER();
	iVar0 = Static_52 - Static_53;

	if (iVar0 % 600 <= 300 && iVar0 < 3000)
		PAD::SET_CONTROL_SHAKE(0, 100, 100);
}

void func_12() // Position - 0x890
{
	int iVar0;
	var uVar1;
	var uVar17;
	int iVar30;

	if (Static_41 == 1)
	{
		if (Static_50)
		{
			Static_52 = MISC::GET_GAME_TIMER();
		
			if (Static_52 - Static_53 > 1000)
			{
				Static_49 = true;
				Static_50 = false;
			}
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
			{
				Static_63 = 1;
				Static_64 = 0;
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				Static_63 = 0;
				Static_64 = 1;
			}
		}
	
		if (func_10(2, Global_21603, 0) || func_10(2, Global_21604, 0) || Static_49 || Static_63 == 1 || Static_64 == 1)
		{
			Static_63 = 0;
			Static_64 = 0;
			Static_49 = false;
			Static_50 = false;
			BUILTIN::SETTIMERB(0);
			Static_48 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "GET_CURRENT_SELECTION");
			Static_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(Static_39))
			{
				BUILTIN::WAIT(0);
			}
		
			Static_45 = Static_16[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(Static_39)];
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				BUILTIN::WAIT(100);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Global_10302[Global_21627 /*2811*/][1 /*281*/].f_144[Static_45 /*6*/], "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&Global_10302[Global_21627 /*2811*/][1 /*281*/].f_144[Static_45 /*6*/], PLAYER::PLAYER_PED_ID(), 1);
						}
					}
				}
			}
		}
	}

	if (Global_21605 == false)
	{
		if (func_10(2, Global_21596, 0))
		{
			func_24();
			Global_21605 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "GET_CURRENT_SELECTION");
			Static_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(Static_39))
			{
				BUILTIN::WAIT(0);
			}
		
			Static_44 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(Static_39);
		
			if (Static_44 < 0)
				Static_44 = 0;
		
			Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_259 = Static_16[Static_44];
		
			if (Static_41 == 2)
			{
				iVar0 = Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_259;
				Global_114931.f_14058[Global_21627 /*20*/].f_6 = Global_10302[Global_21627 /*2811*/][2 /*281*/].f_260[iVar0];
				func_47(Global_21608, "SET_THEME", BUILTIN::TO_FLOAT(Global_114931.f_14058[Global_21627 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_80305)
				{
					Global_4525120 = Global_10302[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_10302[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_47(Global_21608, "SET_THEME", BUILTIN::TO_FLOAT(Global_4525120), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_47(Global_21608, "SET_THEME", BUILTIN::TO_FLOAT(Global_114931.f_14058[Global_21627 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_19();
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_43), BUILTIN::TO_FLOAT(23), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_44), BUILTIN::TO_FLOAT(48), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_44] /*4*/], 0, 0, 0, 0);
				Static_43 = Static_44;
				func_47(Global_21608, "DISPLAY_VIEW", 22f, BUILTIN::TO_FLOAT(Static_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (Static_41 == 4)
			{
				Global_114931.f_14058[Global_21627 /*20*/].f_9 = Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_259;
			
				if (Global_80305)
				{
					Global_4525121 = Global_10302[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_10302[3 /*2811*/][4 /*281*/].f_259, -1, 1);
				
					if (Global_4525121 == 0)
					{
						uVar17 = { func_17(PLAYER::PLAYER_ID()) };
						iVar30 = 0;
						NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0;
					
						if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uVar17) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4525124 == 0)
						{
							BUILTIN::SETTIMERA(0);
						
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&uVar17, &uVar1) && BUILTIN::TIMERA() < 3000)
							{
								BUILTIN::WAIT(0);
							
								if (BUILTIN::TIMERA() > 2999)
									iVar30 = 1;
							}
						
							if (iVar30 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_47(Global_21608, "SET_BACKGROUND_IMAGE", BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_47(Global_21608, "SET_BACKGROUND_IMAGE", BUILTIN::TO_FLOAT(Global_4525121), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_47(Global_21608, "SET_BACKGROUND_IMAGE", BUILTIN::TO_FLOAT(Global_114931.f_14058[Global_21627 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_43), BUILTIN::TO_FLOAT(23), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_44), BUILTIN::TO_FLOAT(48), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_44] /*4*/], 0, 0, 0, 0);
				Static_43 = Static_44;
				func_47(Global_21608, "DISPLAY_VIEW", 22f, BUILTIN::TO_FLOAT(Static_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (Static_41 == 1)
			{
				Global_114931.f_14058[Global_21627 /*20*/].f_11 = { Global_10302[Global_21627 /*2811*/][1 /*281*/].f_144[Global_10302[Global_21627 /*2811*/][1 /*281*/].f_259 /*6*/] };
			
				if (Global_80305)
					func_20(1199, Global_10302[3 /*2811*/][1 /*281*/].f_259, -1, 1);
			
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_43), BUILTIN::TO_FLOAT(18), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_44), BUILTIN::TO_FLOAT(48), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_44] /*4*/], 0, 0, 0, 0);
				Static_43 = Static_44;
				func_47(Global_21608, "DISPLAY_VIEW", 22f, BUILTIN::TO_FLOAT(Static_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (Static_41 == 3)
			{
				Global_114931.f_14058[Global_21627 /*20*/].f_10 = Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_259;
			
				if (Global_80305)
					func_20(1198, Global_114931.f_14058[3 /*20*/].f_10, -1, 1);
			
				if (Global_114931.f_14058[Global_21627 /*20*/].f_10 == 1)
				{
					Static_51 = true;
					Static_53 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Static_51 = false;
				}
			}
		
			if (Static_41 == 0)
			{
				if (Global_80305 == true)
				{
					Global_10302[3 /*2811*/][Static_41 /*281*/].f_259 = Static_16[Static_44];
					func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_43), BUILTIN::TO_FLOAT(19), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_43] /*4*/], 0, 0, 0, 0);
					func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(Static_44), BUILTIN::TO_FLOAT(48), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Static_16[Static_44] /*4*/], 0, 0, 0, 0);
					Static_43 = Static_44;
					func_47(Global_21608, "DISPLAY_VIEW", 22f, BUILTIN::TO_FLOAT(Static_44), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_10302[3 /*2811*/][Static_41 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_10302[0 /*2811*/][Static_41 /*281*/].f_259 = Static_16[Static_44];
					Global_10302[1 /*2811*/][Static_41 /*281*/].f_259 = Static_16[Static_44];
					Global_10302[2 /*2811*/][Static_41 /*281*/].f_259 = Static_16[Static_44];
				
					if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_44886 == 15)
						{
							if (Global_114931.f_14058.f_82 == 0)
							{
								HUD::CLEAR_HELP(1);
								func_16("CELL_7050" /* GXT: If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode. */);
								Static_61 == Static_62;
								Static_54 = true;
							}
							else
							{
								func_47(Global_21608, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_9463, 25);
								MISC::SET_BIT(&Global_9464, 11);
							
								if (Global_114931.f_14058.f_83 == 0)
								{
									HUD::CLEAR_HELP(1);
									func_15("CELL_7051" /* GXT: When Sleep Mode is active, the Sleep symbol will be displayed near the Radar. */, -1);
									Global_114931.f_14058.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_47(Global_21608, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_9463, 25);
						MISC::SET_BIT(&Global_9464, 11);
					}
				}
			}
		
			func_13(Global_21608, "SET_HEADER", &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (func_4(0))
				func_3();
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x1148
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
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

void func_14(char* sParam0) // Position - 0x11A3
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15(char* sParam0, int iParam1) // Position - 0x11B5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_16(char* sParam0) // Position - 0x11CC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

struct<13> func_17(var uParam0) // Position - 0x11E2
{
	var uVar0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &uVar0, 13);
	return uVar0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x11F9
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
		func_14(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_14(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_14(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_14(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_14(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_19() // Position - 0x12AC
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_21627 == 0)
		{
			switch (Global_114931.f_14058[Global_21627 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_21627 == 1)
		{
			switch (Global_114931.f_14058[Global_21627 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_21627 == 2)
		{
			switch (Global_114931.f_14058[Global_21627 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_21627 == 3)
		{
			switch (Global_4525120)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1523
{
	int iVar0;

	if (iParam0 != 18486)
	{
		iVar0 = func_21(iParam0, iParam2);
	
		if (iVar0 != 0)
			STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_21(int iParam0, int iParam1) // Position - 0x1551
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_22(iParam1));
}

int func_22(int iParam0) // Position - 0x1566
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_23();
	
		if (iVar1 > -1)
		{
			Global_2741524 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741524 = 1;
		}
	}

	return iVar0;
}

int func_23() // Position - 0x159A
{
	return Global_1574927;
}

void func_24() // Position - 0x15A6
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21616, 1);
		func_25();
	}
}

void func_25() // Position - 0x15CB
{
	if (func_26())
		MOBILE::CELL_SET_INPUT(5);
}

bool func_26() // Position - 0x15DF
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

void func_27() // Position - 0x1626
{
	if (Global_21605 == false)
	{
		if (func_10(2, Global_21596, 0))
		{
			func_24();
			Global_21605 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "GET_CURRENT_SELECTION");
			Static_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(Static_39))
			{
				BUILTIN::WAIT(0);
			}
		
			Static_42 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(Static_39);
			Static_41 = Static_16[Static_42];
		
			switch (Static_41)
			{
				case 0:
					if (Global_80305 == false)
					{
						if (Global_44886 == 15)
						{
							if (Global_114931.f_14058.f_82 == 0)
							{
								HUD::CLEAR_HELP(1);
								func_16("CELL_7050" /* GXT: If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode. */);
								Static_61 == Static_62;
								Static_54 = true;
							}
						}
					}
					break;
			
				case 1:
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			}
		
			if (Global_21627.f_1 > 3)
				Global_21627.f_1 = 8;
		
			func_28();
			Static_50 = true;
			Static_53 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_28() // Position - 0x16F8
{
	var uVar0;
	int iVar20;
	var uVar21;
	int iVar34;
	int iVar35;

	func_47(Global_21608, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	Static_37 = 0;
	uVar0 = 19;
	iVar20 = 0;

	if (Global_80305)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_10302[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_CREWEMB" /* GXT: Crew Emblem */, 16);
		uVar21 = { func_17(PLAYER::PLAYER_ID()) };
	
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uVar21))
			TEXT_LABEL_ASSIGN_STRING(&Global_10302[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_840" /* GXT: Default */, 16);
	}

	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_84[iVar35] = 5000;
	
		while (iVar34 < 19)
		{
			if (Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_124[iVar34] == 1)
			{
				if (uVar0[iVar34] == 0)
				{
					if (Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_84[iVar34] < Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(iVar20), BUILTIN::TO_FLOAT(Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_104[iVar35]), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[iVar35 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			iVar34 = iVar34 + 1;
		}
	
		Static_16[iVar20] = iVar35;
		uVar0[iVar35] = 1;
	
		if (MISC::ARE_STRINGS_EQUAL(&Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_259 /*4*/], &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[iVar35 /*4*/]))
		{
			Static_46 = iVar20;
		
			if (Static_46 < 0)
				Static_46 = 0;
		
			if (Static_41 == 1 || Static_41 == 4 || Static_41 == 2)
			{
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(iVar20), BUILTIN::TO_FLOAT(48), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[iVar35 /*4*/], 0, 0, 0, 0);
				Static_43 = iVar20;
			}
		
			if (Static_41 == 0 && Global_80305 == true)
			{
				func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(22), BUILTIN::TO_FLOAT(iVar20), BUILTIN::TO_FLOAT(48), -1f, -1f, &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[iVar35 /*4*/], 0, 0, 0, 0);
				Static_43 = iVar20;
			}
		}
	
		if (Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_124[iVar20] == 1)
			Static_37 = Static_37 + 1;
	
		iVar20 = iVar20 + 1;
	}

	func_47(Global_21608, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_21608, "SET_HEADER", &Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_7[Global_10302[Global_21627 /*2811*/][Static_41 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_21615)
	{
		func_18(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_18(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
}

void func_29() // Position - 0x1A3D
{
	if (Static_60)
		if (BUILTIN::TIMERA() > 50)
			Static_60 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_10(2, 181, 0))
		{
			if (Static_38 > 0)
				Static_38 = Static_38 - 1;
		
			func_32();
		}
	
		if (func_10(2, 180, 0))
		{
			Static_38 = Static_38 + 1;
		
			if (Static_38 == Static_37)
				Static_38 = 0;
		
			func_30();
		}
	}

	if (Static_60 == false)
	{
		if (func_10(2, Global_21603, 0))
		{
			if (Static_38 > 0)
				Static_38 = Static_38 - 1;
		
			func_32();
			Static_60 = true;
			BUILTIN::SETTIMERA(0);
		}
	
		if (func_10(2, Global_21604, 0))
		{
			Static_38 = Static_38 + 1;
		
			if (Static_38 == Static_37)
				Static_38 = 0;
		
			func_30();
			Static_60 = true;
			BUILTIN::SETTIMERA(0);
		}
	}
}

void func_30() // Position - 0x1AEA
{
	func_47(Global_21608, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
	func_31();
}

void func_31() // Position - 0x1B27
{
	if (func_26())
		if (Global_21864 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);
}

void func_32() // Position - 0x1B4A
{
	func_47(Global_21608, "SET_INPUT_EVENT", BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
	func_33();
}

void func_33() // Position - 0x1B87
{
	if (func_26())
		if (Global_21864 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);
}

void func_34() // Position - 0x1BAA
{
	var uVar0;
	int iVar21;
	int iVar22;
	int iVar23;

	Static_37 = 0;
	uVar0 = 20;

	for (iVar21 = 0; iVar21 < 9; iVar21 = iVar21 + 1)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_10302[Global_21627 /*2811*/][iVar23 /*281*/] = 5000;
	
		if (MISC::GET_PROFILE_SETTING(2) == 0)
			Global_10302[Global_21627 /*2811*/][3 /*281*/].f_280 = 0;
		else
			Global_10302[Global_21627 /*2811*/][3 /*281*/].f_280 = 1;
	
		while (iVar22 < 9)
		{
			if (Global_10302[Global_21627 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (uVar0[iVar22] == 0)
				{
					if (Global_10302[Global_21627 /*2811*/][iVar22 /*281*/] < Global_10302[Global_21627 /*2811*/][iVar23 /*281*/])
					{
						if (Global_80305)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_43(iVar22, iVar23);
								func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(iVar21), BUILTIN::TO_FLOAT(Static_47), -1f, -1f, &(Global_10302[Global_21627 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_43(iVar22, iVar23);
								func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(iVar21), BUILTIN::TO_FLOAT(Static_47), -1f, -1f, &(Global_10302[Global_21627 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_35() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_43(iVar22, iVar23);
								func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(iVar21), BUILTIN::TO_FLOAT(Static_47), -1f, -1f, &(Global_10302[Global_21627 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_43(iVar22, iVar23);
							func_18(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(iVar21), BUILTIN::TO_FLOAT(Static_47), -1f, -1f, &(Global_10302[Global_21627 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			iVar22 = iVar22 + 1;
		}
	
		Static_16[iVar21] = iVar23;
		uVar0[iVar23] = 1;
	
		if (Global_10302[Global_21627 /*2811*/][iVar21 /*281*/].f_280 == 1)
			Static_37 = Static_37 + 1;
	}

	func_47(Global_21608, "DISPLAY_VIEW", 13f, BUILTIN::TO_FLOAT(Static_42), -1082130432, -1082130432, -1082130432);
	func_13(Global_21608, "SET_HEADER", "CELL_16" /* GXT: Settings */, 0, 0, 0, 0);

	if (Global_21615)
	{
		func_18(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_18(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
}

int func_35() // Position - 0x1E76
{
	if (Global_80305)
		Global_21627 = 3;
	else
		Global_21627 = func_36();

	if (Global_21627 > 3)
		Global_21627 = 3;

	return Global_114931.f_14058[Global_21627 /*20*/].f_7;
}

int func_36() // Position - 0x1EAC
{
	func_37();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_37() // Position - 0x1EC5
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_41(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_40(PLAYER::PLAYER_PED_ID());
		
			if (func_39(iVar0) && !func_38(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_39(Global_114931.f_2370.f_539.f_4321))
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

bool func_38(int iParam0) // Position - 0x1FC2
{
	return Global_44886 == iParam0;
}

bool func_39(int iParam0) // Position - 0x1FD0
{
	return iParam0 < 3;
}

int func_40(var uParam0) // Position - 0x1FDC
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_41(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_41(int iParam0) // Position - 0x2019
{
	if (func_39(iParam0))
		return func_42(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_42(int iParam0) // Position - 0x203E
{
	return Global_2339[iParam0 /*29*/];
}

void func_43(int iParam0, int iParam1) // Position - 0x204D
{
	switch (iParam0)
	{
		case 0:
			if (Global_80305)
				Static_47 = 19;
			else if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
				Static_47 = 26;
			else
				Static_47 = 25;
			break;
	
		case 3:
			if (Global_10302[Global_21627 /*2811*/][3 /*281*/].f_259 == 1)
				Static_47 = 20;
			else
				Static_47 = 21;
			break;
	
		default:
			Static_47 = Global_10302[Global_21627 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_44() // Position - 0x20CF
{
	if (Global_44886 != 15)
	{
		func_46();
		Global_10302[Global_21627 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_45(int iParam0, int iParam1) // Position - 0x20F6
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_21(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

void func_46() // Position - 0x2125
{
	if (func_38(14))
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
		Global_21627 = func_36();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

void func_47(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21C7
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

