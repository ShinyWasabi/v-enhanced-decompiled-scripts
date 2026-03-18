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
	bool Static_25 = 0;
	var Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	float Static_29 = 0f;
	float Static_30 = 0f;
	float Static_31 = 0f;
	var Static_32 = 0;
	var Static_33 = 0;
	int Static_34 = 0;
	var Static_35 = 0;
	bool Static_36 = 0;
	float Static_37 = 0f;
	float Static_38 = 0f;
	bool Static_39 = 0;
	int Static_40 = 0;
	var Static_41 = 4;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 4;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 4;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 4;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	int Static_61 = 0;
	int Static_62 = 0;
	var Static_63 = 0;
	var Static_64 = 0;
	int Static_65 = 0;
	int Static_66 = 0;
	int Static_67 = 0;
	int Static_68 = 0;
	int Static_69 = 0;
	var Static_70 = 0;
	int Static_71 = 0;
	var Static_72 = 0;
	int Static_73 = 0;
	int Static_74 = 0;
	int Static_75 = 0;
	var Static_76 = 0;
	int Static_77 = 0;
	int Static_78 = 0;
	int Static_79 = 0;
	bool Static_80 = 0;
	var Static_81 = 0;
	float Static_82 = 0f;
	float Static_83 = 0f;
	float Static_84 = 0f;
	float Static_85 = 0f;
	float Static_86 = 0f;
	float Static_87 = 0f;
	var Static_88 = 0;
	int Static_89 = 0;
	int Static_90 = 0;
	int Static_91 = 0;
	int Static_92 = 0;
	var Static_93 = 0;
	var Static_94 = 0;
	int Static_95 = 0;
	int Static_96 = 0;
	int Static_97 = 0;
#endregion

void main() // Position - 0x0
{
	var uVar0;
	int iVar395;

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
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_34 = 3;
	Static_37 = 0f;
	Static_38 = 0f;
	Static_84 = 0.95f;
	Static_85 = 0.07f;
	Static_86 = 0.755f;
	Static_97 = 9999;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_114873 = MISC::GET_GAME_TIMER();
	func_159();
	func_156();
	func_155();
	Global_21627.f_1 = 3;
	Global_21615 = false;
	Global_21861 = 0;
	Global_24035 = 0;
	uVar0.f_23 = 2;
	uVar0.f_56 = 21;

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21627.f_1 > 3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 374, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 390, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 391, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 394, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 390, 1);
		}
	
		if (Static_95 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Static_95 = 1;
				Static_97 = func_153(14769, -1);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Static_95 == 1)
			{
				switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
				{
					case -1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
				
					case 0:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
				
					case 1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_fr");
						break;
				
					case 2:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ge");
						break;
				
					case 3:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_it");
						break;
				
					case 4:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_sp");
						break;
				
					case 5:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pt");
						break;
				
					case 6:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pl");
						break;
				
					case 7:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ru");
						break;
				
					case 8:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ko");
						break;
				
					case 9:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ch");
						break;
				
					case 10:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ja");
						break;
				
					case 11:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_me");
						break;
				
					case 12:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_cn");
						break;
				}
			
				SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 1);
				Static_95 = 2;
			}
		
			if (Static_95 == 2)
			{
				Static_96 = SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
			
				switch (Static_96)
				{
					case 3:
						break;
				
					case 0:
						if (SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() > 0)
						{
							SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(0, &uVar0);
						
							if (uVar0.f_1 != Static_97)
							{
								Global_4521273 = 1;
								Global_4521274 = uVar0.f_394;
							}
							else
							{
								Global_4521273 = 0;
							}
						}
					
						Static_95 = 3;
						break;
				
					case 1:
						break;
				
					case 4:
						Global_4521273 = 0;
						Static_95 = 3;
						break;
				}
			}
		}
		else
		{
			Global_4521273 = 0;
			Static_95 = 0;
		}
	
		if (MISC::IS_PC_VERSION())
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
				if (Global_21627.f_1 == 6)
					Global_21627.f_1 = 3;
	
		if (func_152(146))
		{
			if (Global_80305 == false)
			{
				iVar395 = func_118(0, false, 119);
			
				if (iVar395 != 0)
					func_116(iVar395);
				else
					func_115();
			
				func_111(0);
			}
		}
	
		if (Global_2733138.f_3739 == true)
			if (Global_21627.f_1 > 3)
				Global_21627.f_1 = 3;
	
		if (Global_80305 == true)
		{
			if (Global_21627.f_1 == 3)
			{
				if (IS_BIT_SET(Global_4524844, 15))
				{
					MISC::SET_BIT(&Global_4524844, 14);
					BUILTIN::WAIT(0);
				
					while (!func_109(3, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524844, 14);
					MISC::CLEAR_BIT(&Global_4524844, 15);
				}
			
				if (IS_BIT_SET(Global_4524844, 16))
				{
					MISC::SET_BIT(&Global_4524844, 14);
					BUILTIN::WAIT(0);
				
					while (!func_109(17, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524844, 14);
					MISC::CLEAR_BIT(&Global_4524844, 16);
					MISC::CLEAR_BIT(&Global_4524844, 27);
				}
			
				if (IS_BIT_SET(Global_4524844, 27))
				{
					MISC::SET_BIT(&Global_4524844, 14);
					BUILTIN::WAIT(0);
				
					while (!func_109(25, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524844, 14);
					MISC::CLEAR_BIT(&Global_4524844, 16);
					MISC::CLEAR_BIT(&Global_4524844, 27);
				}
			
				if (IS_BIT_SET(Global_4524844, 29))
				{
					MISC::SET_BIT(&Global_4524844, 14);
					BUILTIN::WAIT(0);
				
					while (!func_109(1, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524844, 14);
					MISC::CLEAR_BIT(&Global_4524844, 29);
				}
			}
		}
	
		if (Global_80305 == false)
		{
			if (IS_BIT_SET(Global_4524844, 11))
			{
				if (Global_21627.f_1 != 10 && Global_21627.f_1 != 9 || func_108() == false)
				{
					MISC::CLEAR_BIT(&Global_4524844, 11);
					MISC::SET_BIT(&Global_9464, 11);
				}
			}
			else if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
			{
				if (func_108())
				{
					MISC::SET_BIT(&Global_4524844, 11);
					MISC::SET_BIT(&Global_9464, 11);
				}
			}
		
			if (IS_BIT_SET(Global_4524844, 12))
			{
				MISC::CLEAR_BIT(&Global_4524844, 12);
				MISC::SET_BIT(&Global_9464, 11);
			}
		}
		else if (IS_BIT_SET(Global_4524844, 12))
		{
			if (Global_24063 == 0 || Global_24064 == false && !Global_24065)
			{
				MISC::CLEAR_BIT(&Global_4524844, 12);
				MISC::SET_BIT(&Global_9464, 11);
			}
		}
		else if (Global_24065 || Global_24063 > 0 && Global_24064 == true)
		{
			MISC::SET_BIT(&Global_4524844, 12);
			MISC::SET_BIT(&Global_9464, 11);
		}
	
		if (MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_IS_PUSH_TO_TALK_ACTIVE())
			{
				if (!IS_BIT_SET(Global_4524844, 19))
				{
					MISC::SET_BIT(&Global_4524844, 19);
					MISC::SET_BIT(&Global_9464, 11);
				}
			}
			else if (IS_BIT_SET(Global_4524844, 19))
			{
				MISC::CLEAR_BIT(&Global_4524844, 19);
				MISC::SET_BIT(&Global_9464, 11);
			}
		}
	
		if (Static_91 == 0)
		{
			if (IS_BIT_SET(Global_9463, 25))
			{
				STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &Static_90, -1);
				Static_88 = MISC::GET_GAME_TIMER();
				Static_91 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_9463, 25))
		{
			STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &Static_90, -1);
			Static_89 = MISC::GET_GAME_TIMER();
			Static_91 = 0;
			STATS::STAT_SET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), Static_90 + (Static_89 - Static_88), 1);
		}
	
		func_107();
		func_106();
		func_105();
		func_103();
		func_84();
		func_83();
		func_82();
	
		if (IS_BIT_SET(Global_9464, 21))
			if (!AUDIO::IS_MOBILE_INTERFERENCE_ACTIVE())
				MISC::CLEAR_BIT(&Global_9464, 21);
	
		if (IS_BIT_SET(Global_9463, 7))
		{
			func_77();
			MISC::CLEAR_BIT(&Global_9463, 7);
		}
	
		if (IS_BIT_SET(Global_9463, 0))
			func_76();
	
		if (IS_BIT_SET(Global_4524844, 0))
			func_73();
	
		if (IS_BIT_SET(Global_9464, 11))
		{
			Global_10201 = 0;
		
			if (IS_BIT_SET(Global_9463, 25))
				Global_10201 = Global_10201 + 1;
		
			if (IS_BIT_SET(Global_4524844, 11))
				if (Global_80305 == false)
					Global_10201 = Global_10201 + 1;
		
			if (IS_BIT_SET(Global_4524844, 28))
				if (Global_80305 == true)
					Global_10201 = Global_10201 + 1;
		
			if (IS_BIT_SET(Global_4524844, 12))
				if (Global_80305 && Global_24064 || Global_24065)
					Global_10201 = Global_10201 + 1;
		
			if (IS_BIT_SET(Global_4524844, 19))
				Global_10201 = Global_10201 + 1;
		
			if (Global_10201 == 0)
			{
				MISC::CLEAR_BIT(&Global_9464, 11);
				Static_39 = false;
			}
			else
			{
				Static_39 = true;
			}
		}
	
		if (Global_80305)
			if (Static_92 == 0)
				if (IS_BIT_SET(Global_1984029, 0))
					if (func_71(&Static_93, 10000, false))
						if (func_68())
							Static_92 = 1;
	
		if (!func_67())
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
				if (Global_21627.f_1 == 3)
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								if (Global_80305)
									func_58();
								else
									func_58();
		
			if (Global_21627.f_1 == 4)
				if (IS_BIT_SET(Global_9464, 21))
					func_58();
		
			func_23();
		}
		else
		{
			func_16();
		}
	
		switch (Global_24035)
		{
			case 0:
				func_15();
			
				if (Global_24037 == 1)
					func_14();
				break;
		
			case 1:
				func_13();
				break;
		
			case 2:
				func_12();
				break;
		
			case 3:
				func_11();
				break;
		
			case 4:
				func_10();
				break;
		
			case 5:
				func_9();
				break;
		
			case 14:
				func_14();
				break;
		
			case 6:
				if (Global_24037 == 1)
					func_14();
			
				if (Global_24038 == 1)
				{
					Global_24035 = 9;
					Global_24038 = 0;
				}
				break;
		
			case 8:
				func_8();
				break;
		
			case 9:
				func_5();
				break;
		
			case 10:
				func_4();
				break;
		
			case 11:
				func_3();
				break;
		
			case 12:
				func_2();
				break;
		
			case 13:
				func_1();
				break;
		}
	}
}

void func_1() // Position - 0x87C
{
	Static_68 = GRAPHICS::GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(Global_24039);

	switch (Static_68)
	{
		case 0:
			Global_24035 = 4;
			break;
	
		case 1:
			break;
	
		case 2:
			MISC::SET_BIT(&Global_9464, 15);
			func_14();
			break;
	}
}

void func_2() // Position - 0x8C0
{
	if (GRAPHICS::LOAD_HIGH_QUALITY_PHOTO(Global_24039))
		Global_24035 = 13;
	else
		func_14();
}

void func_3() // Position - 0x8DE
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Static_66 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Static_64);
	}
	else
	{
		Static_65 = MISC::GET_GAME_TIMER();
		Static_66 = Static_65 - Static_63;
	}

	if (Static_66 > 3000)
		HUD::BUSYSPINNER_OFF();

	if (Static_66 > 3200)
		Global_24035 = 6;
}

void func_4() // Position - 0x921
{
	Static_68 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();

	switch (Static_68)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Static_64 = NETWORK::GET_NETWORK_TIME();
			else
				Static_63 = MISC::GET_GAME_TIMER();
		
			Global_24035 = 11;
			BUILTIN::SETTIMERB(0);
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}
}

void func_5() // Position - 0x975
{
	Global_24040 = -1;

	if (Global_80305)
	{
		if (func_7())
			GRAPHICS::SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(*Global_4718592.f_192086, Global_4718592.f_192086.f_1);
	
		if (func_6(&(Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_447), 0))
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(1);
		else
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(0);
	}

	if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_24040))
	{
		Global_24035 = 10;
		HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278" /* GXT: Saving Photo to Gallery */);
		HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
	}
	else
	{
		func_14();
	}
}

bool func_6(int iParam0, int iParam1) // Position - 0x9ED
{
	return IS_BIT_SET(*iParam0, iParam1);
}

bool func_7() // Position - 0x9FB
{
	return IS_BIT_SET(*Global_4718592.f_192014, 12);
}

void func_8() // Position - 0xA10
{
	Static_68 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);

	switch (Static_68)
	{
		case 0:
			Global_24035 = 9;
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}
}

void func_9() // Position - 0xA4A
{
	Static_68 = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Static_69);

	switch (Static_68)
	{
		case 0:
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(1, 1);
			Global_24035 = 6;
			break;
	
		case 1:
			break;
	
		case 2:
			if (Static_69 == 3)
			{
				MISC::SET_BIT(&Global_9464, 14);
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				Global_24035 = 6;
			}
		
			if (Global_24035 == 5)
			{
				if (Static_69 == 0)
				{
					Global_24035 = 4;
					Static_69 = 1;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					BUILTIN::WAIT(0);
				}
			}
		
			if (Global_24035 == 5)
			{
				if (Static_69 == 1)
				{
					Global_24035 = 4;
					Static_69 = 2;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					BUILTIN::WAIT(0);
				}
			}
		
			if (Global_24035 == 5)
			{
				if (Static_69 == 2)
				{
					Global_24035 = 4;
					Static_69 = 3;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					BUILTIN::WAIT(0);
				}
			}
			break;
	}
}

void func_10() // Position - 0xAFE
{
	if (GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Static_69))
	{
		Global_24035 = 5;
	}
	else
	{
		MISC::SET_BIT(&Global_9464, 15);
		func_14();
	}
}

void func_11() // Position - 0xB23
{
	Static_68 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();

	switch (Static_68)
	{
		case 0:
			Global_24035 = 4;
			Static_69 = 2;
			break;
	
		case 1:
			break;
	
		case 2:
			Global_21627.f_1 = 3;
			func_14();
			break;
	}
}

void func_12() // Position - 0xB64
{
	if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
		Global_24035 = 3;
}

void func_13() // Position - 0xB77
{
	if (BUILTIN::TIMERB() > 0)
		Global_24035 = 2;
}

void func_14() // Position - 0xB8B
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	HUD::BUSYSPINNER_OFF();
	Global_24036 = false;
	Global_24037 = 0;
	Global_24038 = 0;
	Global_24035 = 0;
}

void func_15() // Position - 0xBB5
{
	if (Global_24036)
	{
		Global_24035 = 1;
		MISC::CLEAR_BIT(&Global_9464, 14);
		BUILTIN::SETTIMERB(0);
	}
}

bool func_16() // Position - 0xBD5
{
	var uVar0;

	if (func_22(2, Global_21594, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (MISC::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				uVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_ANTIH_A" /* GXT: ALERT! */);
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH" /* GXT: You haven't paid your phone bill. Phone use may be impeded. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, uVar0, 0);
			}
		}
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (func_21(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					return false;
	
		Global_24059 = 0;
		Global_24060 = false;
	
		if (HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() == Global_24057 && HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() != -1)
		{
			Global_24059 = Global_24058;
			Static_72 = MISC::GET_GAME_TIMER();
			Static_74 = 0;
			Static_75 = 0;
		
			while (func_20(2, Global_21594) && Static_74 < 250 && Global_21867 == 0 && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_10201 > 0)
					func_17();
			
				BUILTIN::WAIT(0);
				Static_73 = MISC::GET_GAME_TIMER();
				Static_74 = Static_73 - Static_72;
			
				if (Global_10201 > 0)
					func_17();
			}
		
			if (func_20(2, Global_21594) && Global_21867 == 0 && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
				Static_75 = 1;
		
			if (Global_21867 == 0)
			{
				if (Static_75 == 1)
				{
					Global_24060 = true;
					Global_24059 = Global_24058;
					Global_24059 == 1;
					Global_24059 == 2;
					Global_24059 == 3;
					Global_24059 == 0;
					Global_24059 == 4;
				}
				else
				{
					Global_24059 = 0;
				}
			}
			else
			{
				Global_24059 = 0;
			}
		}
		else
		{
			Global_24059 = 0;
		}
	
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(19))
		{
			return true;
		}
		else
		{
			Global_24059 = 0;
			Global_24060 = false;
			return false;
		}
	}

	return false;
}

void func_17() // Position - 0xD8E
{
	int iVar0;

	iVar0 = 255;

	if (Global_24065)
	{
		Static_85 = -0.055f;
		Static_86 = 0.745f;
		Static_81 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		Static_87 = (100f * Static_84) - (100f * Static_81);
		Static_82 = Static_85 + (Static_87 * 0.005f);
		Static_83 = Static_86 - (Static_87 * 0.005f);
	
		if (!func_19())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		
			if (MISC::IS_PC_VERSION())
				GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
		
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Static_35, Static_82, Static_83, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		}
	}
	else
	{
		if (MISC::IS_PC_VERSION())
			if (Global_2647285.f_1593)
				Static_36 = false;
			else if (IS_BIT_SET(Global_9463, 13))
				if (IS_BIT_SET(Global_4524844, 19))
					Static_36 = false;
				else
					Static_36 = true;
			else
				Static_36 = false;
		else if (Global_2647285.f_1593 || IS_BIT_SET(Global_9463, 13))
			Static_36 = true;
		else
			Static_36 = false;
	
		if (func_67())
			Static_36 = true;
	
		if (IS_BIT_SET(Global_4524844, 28))
		{
			iVar0 = 125;
		
			if (Static_36 == true)
				Static_36 = false;
		}
	
		if (HUD::IS_MINIMAP_RENDERING())
		{
			if (!HUD::IS_RADAR_HIDDEN())
			{
				if (!Static_36)
				{
					if (!func_18())
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
							
								if (MISC::IS_PC_VERSION() && Global_2647285.f_1593)
								{
									Static_85 = 0.165f;
									Static_86 = 0.755f;
								}
								else
								{
									Static_85 = 0.07f;
									Static_86 = 0.755f;
								}
							
								Static_81 = GRAPHICS::GET_SAFE_ZONE_SIZE();
								Static_87 = (100f * Static_84) - (100f * Static_81);
								Static_82 = Static_85 + (Static_87 * 0.005f);
								Static_83 = Static_86 - (Static_87 * 0.005f);
							
								if (!func_19())
								{
									if (MISC::IS_PC_VERSION())
										GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
								
									if (Global_2647285.f_1593)
									{
										Static_37 = 0.09f;
										Static_38 = -0.25f;
									
										if (MISC::IS_PC_VERSION())
										{
											if (IS_BIT_SET(Global_4524844, 28))
											{
											}
											else
											{
												GRAPHICS::DRAW_SCALEFORM_MOVIE(Static_35, Static_82, Static_83, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE(Static_35, Static_82 + Static_37, Static_83 + Static_38, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										GRAPHICS::DRAW_SCALEFORM_MOVIE(Static_35, Static_82, Static_83, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_18() // Position - 0xFDD
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPCAMERA")) > 0)
		return true;

	return false;
}

bool func_19() // Position - 0xFFA
{
	if (IS_BIT_SET(Global_9465, 3))
		return true;

	return false;
}

bool func_20(int iParam0, var uParam1) // Position - 0x1012
{
	if (PAD::IS_CONTROL_PRESSED(iParam0, uParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

int func_21(var uParam0) // Position - 0x1058
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
		
			if (iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER") || iVar0 == joaat("WEAPON_MARKSMANRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
				return 1;
		}
	}

	return 0;
}

bool func_22(int iParam0, var uParam1, int iParam2) // Position - 0x10B5
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1))
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

void func_23() // Position - 0x1127
{
	switch (Global_21627.f_1)
	{
		case 4:
			if (IS_BIT_SET(Global_9464, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_21624))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_21624))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
						
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								BUILTIN::WAIT(0);
							
								if (Global_10201 > 0)
									func_17();
							}
						
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
								Global_21624 = BUILTIN::START_NEW_SCRIPT("cellphone_flashhand", 1424);
						
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
				
					func_57(false);
				}
			
				if (Global_23010 || Global_23011)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_21624))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
						
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								BUILTIN::WAIT(0);
							
								if (Global_10201 > 0)
									func_17();
							}
						
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
								Global_21624 = BUILTIN::START_NEW_SCRIPT("cellphone_flashhand", 1424);
						
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
				
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21608) && Global_21610 == 0)
					{
						BUILTIN::WAIT(0);
					
						if (Global_10201 > 0)
							func_17();
					}
				
					if (Global_21610 == 0)
					{
						Global_21627.f_1 = 9;
						func_24();
					}
				}
				else
				{
					Static_80 = false;
				
					if (Global_80305 && Global_24062 || Global_1882126.f_5)
						Static_80 = true;
				
					if (Global_114931.f_14058[Global_21627 /*20*/].f_18 == 1 || Global_114931.f_14058[Global_21627 /*20*/].f_17 == 1 || Static_80 == true || Global_24059 != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21608) && Global_21610 == 0)
						{
							BUILTIN::WAIT(0);
						
							if (Global_10201 > 0)
								func_17();
						}
					
						if (Global_21610 == 0)
						{
							if (Global_21627.f_1 > 3)
							{
								Global_21627.f_1 = 6;
							
								if (Global_24059 == 0)
								{
									if (Static_80)
									{
									}
									else if (Global_80305 == false)
									{
										if (Global_114931.f_14058[Global_21627 /*20*/].f_17 == 1)
											func_109(1, 0, 1, false);
									}
								}
								else
								{
									Global_24059 == 3;
									Global_24059 == 1;
									Global_24059 == 2;
									Global_24059 == 4;
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21608) && Global_21610 == 0)
						{
							BUILTIN::WAIT(0);
						
							if (Global_10201 > 0)
								func_17();
						}
					
						if (Global_21610 == 0)
							if (Global_21627.f_1 > 3)
								if (Global_23010 || Global_23011)
									Global_21627.f_1 = 9;
								else
									Global_21627.f_1 = 6;
					}
				}
			}
			break;
	}
}

void func_24() // Position - 0x13B0
{
	var uVar0;

	if (Global_21610 == 1)
		return;

	if (Global_21627.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21608))
	{
		if (Global_80305)
			return;
	
		BUILTIN::WAIT(0);
	}

	switch (Global_21627.f_1)
	{
		case 6:
			func_56(Global_21608, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_54(Global_10102);
		
			if (Global_10102 == 1)
			{
				func_56(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21631), -1082130432, -1082130432, -1082130432);
				Global_21607 = Global_21631;
			}
			else
			{
				func_56(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21632), -1082130432, -1082130432, -1082130432);
				Global_21607 = Global_21632;
			}
		
			if (Global_21615)
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21861 == 0)
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else if (Global_80305)
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else
			{
				if (Global_21860 == true)
					if (Global_21615)
						func_53(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					else
						func_53(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_21615)
					func_53(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				else
					func_53(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_9463, 17);
			}
		
			if (Global_80305)
			{
				Global_21607 = Global_21631;
			
				if (func_52() && IS_BIT_SET(Global_9465, 9))
					func_30(false);
			
				func_56(Global_21608, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
				func_56(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_56(Global_21608, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_53(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_53(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		
			if (IS_BIT_SET(Global_9463, 20))
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21615)
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
			
				if (Global_21570)
					func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_21626 == 1)
			{
				func_29();
				func_56(Global_21608, "SET_THEME", BUILTIN::TO_FLOAT(Global_114931.f_14058[Global_21627 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_23013)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23015);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_28("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_28("CELL_217" /* GXT: INCOMING CALL */);
					func_28("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_27(Global_8778, Global_21627) == 0)
				{
					func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2339[Global_8778 /*29*/].f_3), 0);
				}
			
				func_56(Global_21608, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_23000 == 4 || Global_23000 == 3)
			{
				func_56(Global_21608, "SET_THEME", BUILTIN::TO_FLOAT(Global_114931.f_14058[Global_21627 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_29();
			
				if (Global_23013)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23015);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_28("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_28("CELL_219" /* GXT: CONNECTED */);
					func_28("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_23258)
						TEXT_LABEL_ASSIGN_STRING(&uVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uVar0, "CELL_211" /* GXT: DIALING... */, 24);
				
					if (func_27(Global_8778, Global_21627) == 0)
					{
						func_56(Global_21608, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &uVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_56(Global_21608, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), &uVar0, &(Global_2339[Global_8778 /*29*/].f_3), 0);
					}
				}
			
				func_56(Global_21608, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_25();
			break;
	
		default:
			break;
	}
}

void func_25() // Position - 0x19C9
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21608))
	{
		func_26();
	
		if (Global_21626 == 1)
		{
			if (Global_21615)
				func_53(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			else
				func_53(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_23047)
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_9463, 20))
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_21615)
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			else
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_53(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else
		{
			func_53(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_53(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		
			if (IS_BIT_SET(Global_9463, 20))
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21615)
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
			
				if (Global_21570)
					func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_53(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_26() // Position - 0x1B57
{
	if (Global_80305)
	{
		func_53(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9463, 17);
	}
}

int func_27(int iParam0, int iParam1) // Position - 0x1B88
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_28(char* sParam0) // Position - 0x1BB2
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_29() // Position - 0x1BC4
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

void func_30(bool bParam0) // Position - 0x1E3B
{
	int iVar0;

	MISC::SET_BIT(&Global_9465, 9);

	if (bParam0)
		func_56(Global_21608, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	func_51();
	func_50();

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		Global_10026[iVar0] = 0;
		Global_10064[iVar0] = 0;
	}

	if (func_47() && func_33())
	{
		func_31(21, "CELL_37" /* GXT: Quick Join */, 0, "AppJIPMP", 14);
		func_31(10, "CELL_16" /* GXT: Settings */, 1, "appSettings", 24);
	}
	else if (func_47() && !func_33())
	{
		func_31(21, "CELL_37" /* GXT: Quick Join */, 0, "AppJIPMP", 14);
	}
	else if (!func_47() && func_33())
	{
		func_31(10, "CELL_16" /* GXT: Settings */, 0, "appSettings", 24);
	}

	if (bParam0)
	{
		func_56(Global_21608, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
		func_56(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
	}
}

void func_31(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4) // Position - 0x1F5E
{
	func_32(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10064[iParam2] = 1;
	Global_10026[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_28(&Global_9470[iParam0 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_32(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1FCE
{
	TEXT_LABEL_ASSIGN_STRING(&Global_9470[iParam0 /*15*/], sParam1, 16);
	Global_9470[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_9470[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9470[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9470[iParam0 /*15*/].f_10 = iParam4;
	Global_9470[iParam0 /*15*/].f_11 = iParam5;
	Global_9470[iParam0 /*15*/].f_12 = iParam6;
	Global_9470[iParam0 /*15*/].f_13 = iParam7;
	Global_9470[iParam0 /*15*/].f_14 = iParam8;

	if (Global_9470[iParam0 /*15*/].f_12 == 0)
		Global_9470[iParam0 /*15*/].f_12 = 0;

	if (Global_9470[iParam0 /*15*/].f_13 == 0)
		Global_9470[iParam0 /*15*/].f_13 = 0;

	if (Global_9470[iParam0 /*15*/].f_14 == 0)
		Global_9470[iParam0 /*15*/].f_14 = 0;
}

bool func_33() // Position - 0x2084
{
	return !(func_46() || NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_44() || func_34(false));
}

bool func_34(bool bParam0) // Position - 0x20B0
{
	if (bParam0)
		return func_37();

	return func_35(func_36());
}

bool func_35(int iParam0) // Position - 0x20CC
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_36() // Position - 0x20E1
{
	return Global_1912540[PLAYER::PLAYER_ID() /*319*/].f_279;
}

bool func_37() // Position - 0x20F7
{
	return func_40(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_39() != 0 && !func_38(0);
}

bool func_38(int iParam0) // Position - 0x2127
{
	int iVar0;

	iVar0 = func_153(16738, -1);
	return IS_BIT_SET(iVar0, iParam0);
}

int func_39() // Position - 0x213E
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

bool func_40(int iParam0, int iParam1) // Position - 0x214A
{
	var uVar0;
	bool bVar1;

	uVar0 = func_41(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(uVar0, &bVar1, -1))
		return bVar1;

	return false;
}

var func_41(int iParam0, int iParam1) // Position - 0x216E
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_42(iParam1));
}

int func_42(int iParam0) // Position - 0x2183
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_43();
	
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

int func_43() // Position - 0x21B7
{
	return Global_1574927;
}

bool func_44() // Position - 0x21C3
{
	return func_45(*Global_4718592.f_139000);
}

bool func_45(int iParam0) // Position - 0x21D9
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (Global_262145.f_31313[iVar0] == iParam0)
			return 1;
	}

	return 0;
}

bool func_46() // Position - 0x2208
{
	return IS_BIT_SET(Global_1674270, 4);
}

bool func_47() // Position - 0x2216
{
	return func_48() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

bool func_48() // Position - 0x222C
{
	return func_49(9539, -1);
}

bool func_49(int iParam0, int iParam1) // Position - 0x223C
{
	if (iParam1 == -1)
		iParam1 = func_43();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_50() // Position - 0x2258
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		Global_10064[iVar0] = 0;
	}
}

void func_51() // Position - 0x227B
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_28(&Global_9470[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	func_56(Global_21608, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_56(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

bool func_52() // Position - 0x230B
{
	if (func_33())
		return true;

	if (func_47())
		return true;

	return false;
}

void func_53(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x232A
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
		func_28(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_28(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_28(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_28(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_28(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_54(int iParam0) // Position - 0x23DD
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

	Global_24069 = 0;
	Global_10102 = iParam0;
	func_50();

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		iVar1 = 0;
	
		if (func_55(14))
		{
			while (iVar1 < 36)
			{
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10064[iVar0] == 0)
						{
							Global_10026[iVar0] = iVar1;
						
							if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_9464, 3))
								{
									iVar2 = 42;
									Global_21863 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21863 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696976)
								if (iVar1 == 14)
									func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24063), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
						
							Global_10064[iVar0] = 1;
						}
					}
				}
			
				iVar1 = iVar1 + 1;
			}
		}
		else
		{
			while (iVar1 < 36)
			{
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10064[iVar0] == 0)
						{
							Global_10026[iVar0] = iVar1;
						
							if (iVar1 == 1)
							{
								for (iVar3 = 0; iVar3 < 35; iVar3 = iVar3 + 1)
								{
									if (Global_114931.f_14148[iVar3 /*104*/].f_24 != 0)
										if (Global_114931.f_14148[iVar3 /*104*/].f_28 == 0)
											if (Global_114931.f_14148[iVar3 /*104*/].f_99[Global_21627] == true)
												Global_24069 = Global_24069 + 1;
								}
							
								func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24069), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_80305)
								{
									iVar4 = 0;
									iVar4 = Global_4521273;
								
									for (iVar5 = 0; iVar5 < 12; iVar5 = iVar5 + 1)
									{
										if (Global_4521275[iVar5 /*296*/].f_24 != 0)
											if (Global_4521275[iVar5 /*296*/].f_28 == 0)
												if (Global_4521275[iVar5 /*296*/].f_291[Global_21627] == 1)
													iVar4 = iVar4 + 1;
									}
								
									func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(iVar4), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21627)
									{
										case 0:
											iVar6 = Global_46122;
											break;
									
										case 1:
											iVar6 = Global_46123;
											break;
									
										case 2:
											iVar6 = Global_46124;
											break;
									
										default:
											break;
									}
								
									func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(iVar6), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24063), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9469);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (IS_BIT_SET(Global_9464, 6))
									iVar7 = 42;
								else
									iVar7 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_9464, 3))
								{
									iVar8 = 42;
									Global_21863 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21863 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 25 && MISC::ARE_STRINGS_EQUAL(&Global_9470[iVar1 /*15*/], "CELL_BENWEB" /* GXT: Benny's */) && IS_BIT_SET(Global_9464, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9470[iVar1 /*15*/].f_10 == 57 && iVar1 == 25)
							{
								iVar9 = 0;
								iVar9 = Global_1882126.f_1;
								func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(iVar9), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
							}
						
							Global_10064[iVar0] = 1;
						}
					}
				}
			
				iVar1 = iVar1 + 1;
			}
		}
	}
}

bool func_55(int iParam0) // Position - 0x2964
{
	return Global_44886 == iParam0;
}

void func_56(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2972
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

void func_57(bool bParam0) // Position - 0x29D5
{
	if (bParam0)
		if (Global_21627.f_1 == 9)
			Global_21859 = true;
	else
		Global_21859 = false;
}

void func_58() // Position - 0x29F7
{
	if (func_16() || IS_BIT_SET(Global_9463, 8))
	{
		MISC::CLEAR_BIT(&Global_9463, 8);
		func_60();
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_59())
				{
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
				{
					if (IS_BIT_SET(Global_9464, 21))
						MISC::CLEAR_BIT(&Global_9464, 21);
				
					if (Global_21867 == 1)
						Global_21867 = 0;
				
					switch (Global_21627.f_1)
					{
						case 3:
							Global_21627.f_1 = 4;
							break;
					
						default:
							break;
					}
				
					Global_21857 = 1;
				}
			}
		}
	}
}

bool func_59() // Position - 0x2A8C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
			return true;
		else
			return false;

	return true;
}

void func_60() // Position - 0x2AF7
{
	if (func_55(14))
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
		Global_21627 = func_61();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

int func_61() // Position - 0x2B99
{
	func_62();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_62() // Position - 0x2BB2
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_65(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_64(PLAYER::PLAYER_PED_ID());
		
			if (func_63(iVar0) && !func_55(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_63(Global_114931.f_2370.f_539.f_4321))
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

bool func_63(int iParam0) // Position - 0x2CAF
{
	return iParam0 < 3;
}

int func_64(var uParam0) // Position - 0x2CBB
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_65(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_65(int iParam0) // Position - 0x2CF8
{
	if (func_63(iParam0))
		return func_66(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_66(int iParam0) // Position - 0x2D1D
{
	return Global_2339[iParam0 /*29*/];
}

bool func_67() // Position - 0x2D2C
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

bool func_68() // Position - 0x2D53
{
	if (*Global_262145.f_36828 /* Tunable: -1457071898 */)
		return false;

	if (Global_4521273 == 1)
	{
		func_69(Global_4521274, true);
		Global_4521274 = -1;
		Global_4521273 = 0;
		return true;
	}

	return false;
}

void func_69(int iParam0, bool bParam1) // Position - 0x2D8C
{
	char* sVar0;

	switch (iParam0)
	{
		case 35132310:
			sVar0 = "RSG_MAIL_NOT1" /* GXT: You have received a conduct warning regarding your voice/text chat. Remember to follow our Community Guidelines. Check Safety and Alerts for details. */;
			break;
	
		case 595818427:
			sVar0 = "RSG_MAIL_NOT2" /* GXT: Your access to voice/text chat has been suspended due to a Community Guidelines violation. Check Safety and Alerts for details. */;
			break;
	
		case 2061960091:
			sVar0 = "RSG_MAIL_NOT3" /* GXT: You've been suspended from GTA Online and text/voice chat for violating Community Guidelines. Check Safety and Alerts for details. */;
			break;
	
		case 1321488310:
			sVar0 = "RSG_MAIL_NOT4" /* GXT: You've been banned from accessing voice/text chat for violating our Community Guidelines. Check Safety and Alerts for details. */;
			break;
	
		case -1601690383:
			sVar0 = "RSG_MAIL_NOT5" /* GXT: Your access to certain features has been suspended due to a Community Guidelines violation. Check Safety and Alerts for details. */;
			break;
	
		case 951709659:
			sVar0 = "RSG_MAIL_NOT6" /* GXT: You've been banned from certain features for violating our Community Guidelines. Check Safety and Alerts for details. */;
			break;
	
		case 1085859112:
			sVar0 = "RSG_MAIL_NOT7" /* GXT: Your content was removed due to a Community Guidelines violation. Check Safety and Alerts for details. */;
			break;
	
		case 1614079778:
			sVar0 = "RSG_MAIL_NOT8" /* GXT: Your content was removed and your content creation features have been suspended due to a Community Guidelines violation. Check Safety and Alerts for details. */;
			break;
	
		case 1682565288:
			sVar0 = "RSG_MAIL_NOT9" /* GXT: You've been banned from accessing content creation features due to a Community Guidelines violation. Check Safety and Alerts for details. */;
			break;
	
		case 905049745:
			sVar0 = "RSG_MAIL_NOT10" /* GXT: Your access to GTA Online has been suspended due to a Community Guidelines violation. Check Safety and Alerts for details. */;
			break;
	
		case 1061715359:
			sVar0 = "RSG_MAIL_NOT11" /* GXT: You've been banned from accessing GTA Online for violating our Community Guidelines. Check Safety and Alerts for details. */;
			break;
	
		case -756531422:
			sVar0 = "RSG_MAIL_NOT12" /* GXT: There's an update regarding a report you filed. Check Safety and Alerts for details. */;
			break;
	
		case 471439883:
			sVar0 = "RSG_MAIL_NOT13" /* GXT: There's an update regarding an appeal you filed. Check Safety and Alerts for details. */;
			break;
	
		case 1225343603:
		default:
			sVar0 = "RSG_MAIL_NOT" /* GXT: You have a notification regarding our Community Guidelines. Check Safety and Alerts for details. */;
			break;
	}

	func_70(sVar0, 2, bParam1);
}

int func_70(char* sParam0, int iParam1, bool bParam2) // Position - 0x2E77
{
	int iVar0;

	iVar0 = -1;

	if (bParam2)
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", "Phone_SoundSet_Default", 1);

	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);

	if (iParam1 == 0)
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	else if (iParam1 == 2 || iParam1 == 1)
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_ROCKSTAR", "CHAR_ROCKSTAR", 0, iParam1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_179" /* GXT: Rockstar Games */), 0);

	return iVar0;
}

bool func_71(var uParam0, int iParam1, bool bParam2) // Position - 0x2ED9
{
	if (iParam1 == -1)
		return true;

	func_72(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_72(var uParam0, bool bParam1, bool bParam2) // Position - 0x2F37
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}
}

void func_73() // Position - 0x2F7C
{
	var uVar0;
	int iVar16;
	var uVar17;
	var uVar33;
	var uVar37;
	var uVar53;
	var uVar69;
	var uVar85;

	MISC::CLEAR_BIT(&Global_4524844, 0);

	if (Global_24061 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_24061))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_24061))
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_24061), 64);
				Global_24070[Global_24068] = Global_24061;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
				Global_24070[Global_4524828] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
			Global_24070[Global_4524828] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_4521275[Global_4524828 /*296*/].f_17 /*29*/].f_7)), 64);
		Global_24070[Global_4524828] = 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
	else if (MISC::ARE_STRINGS_EQUAL(&uVar0, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);

	if (Global_4521275[Global_4524828 /*296*/].f_32 == 4 || Global_4521275[Global_4524828 /*296*/].f_32 == 5 || Global_4521275[Global_4524828 /*296*/].f_32 == 6 || Global_4521275[Global_4524828 /*296*/].f_32 == 7 || Global_4521275[Global_4524828 /*296*/].f_32 == 8 || Global_4521275[Global_4524828 /*296*/].f_32 == 9 || Global_4521275[Global_4524828 /*296*/].f_32 == 10 || Global_4521275[Global_4524828 /*296*/].f_32 == 11)
	{
		iVar16 = 0;
	
		switch (Global_4521275[Global_4524828 /*296*/].f_49)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /* GXT: ~a~ ~a~. */);
				break;
		
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
				break;
		
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
				break;
		
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		}
	
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521275[Global_4524828 /*296*/]);
	
		while (iVar16 < Global_4521275[Global_4524828 /*296*/].f_49)
		{
			switch (Global_4521275[Global_4524828 /*296*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2733138.f_849[iVar16 /*4*/]);
					break;
			
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935498[iVar16 /*4*/]);
					break;
			
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935539[iVar16 /*4*/]);
					break;
			
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935560[iVar16 /*4*/]);
					break;
			
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935577[iVar16 /*4*/]);
					break;
			
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935590[iVar16 /*4*/]);
					break;
			
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935603[iVar16 /*4*/]);
					break;
			
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935616[iVar16 /*4*/]);
					break;
			}
		
			iVar16 = iVar16 + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&uVar17, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_4521275[Global_4524828 /*296*/].f_17 /*29*/].f_3)), 64);
		Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 2, &uVar17, 0);
		MISC::SET_BIT(&Global_4524844, 1);
		Global_24058 = 1;
		Global_24057 = Static_62;
		Global_24061 = 0;
	}
	else if (Global_4521275[Global_4524828 /*296*/].f_32 == 13)
	{
		func_74(Global_4524828, &uVar33);
		TEXT_LABEL_ASSIGN_STRING(&uVar37, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_4521275[Global_4524828 /*296*/].f_17 /*29*/].f_3)), 64);
		Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 2, &uVar37, 0);
		MISC::SET_BIT(&Global_4524844, 1);
		Global_24058 = 1;
		Global_24057 = Static_62;
		Global_24061 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&Global_4521275[Global_4524828 /*296*/]);
	
		switch (Global_4521275[Global_4524828 /*296*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_33));
			
				if (Global_4521275[Global_4524828 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521275[Global_4524828 /*296*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_67));
			
				if (Global_4521275[Global_4524828 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521275[Global_4524828 /*296*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_4521275[Global_4524828 /*296*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521275[Global_4524828 /*296*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521275[Global_4524828 /*296*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521275[Global_4524828 /*296*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521275[Global_4524828 /*296*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_83));
				}
				break;
		
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521275[Global_4524828 /*296*/].f_49);
				break;
		
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521275[Global_4524828 /*296*/].f_49);
			
				if (Global_4521275[Global_4524828 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521275[Global_4524828 /*296*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_67));
			
				if (Global_4521275[Global_4524828 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521275[Global_4524828 /*296*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_4521275[Global_4524828 /*296*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521275[Global_4524828 /*296*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521275[Global_4524828 /*296*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521275[Global_4524828 /*296*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521275[Global_4524828 /*296*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521275[Global_4524828 /*296*/].f_83));
				}
				break;
		}
	
		if (Global_4521275[Global_4524828 /*296*/].f_17 == 145)
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar53, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&uVar53, &Global_10185, 64);
			TEXT_LABEL_APPEND_STRING(&uVar53, "</C>", 64);
			Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 2, &uVar53, 0);
			MISC::SET_BIT(&Global_4524844, 1);
			Global_24058 = 1;
			Global_24057 = Static_62;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar69, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_4521275[Global_4524828 /*296*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_4521275[Global_4524828 /*296*/].f_17 == 98)
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar85, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&uVar85, &uVar69, 64);
				Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 2, &uVar85, 0);
			}
			else
			{
				Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 2, &uVar69, 0);
			}
		
			MISC::SET_BIT(&Global_4524844, 1);
			Global_24058 = 1;
			Global_24057 = Static_62;
			Global_24061 = 0;
		}
	}

	Global_4521275[Global_4524828 /*296*/].f_16 = Static_62;
}

void func_74(int iParam0, char* sParam1) // Position - 0x3656
{
	int iVar0;

	iVar0 = 0;
	func_75(Global_4521275[iParam0 /*296*/].f_49, sParam1);

	if (IS_BIT_SET(Global_1989318, 0))
	{
		TEXT_LABEL_APPEND_STRING(sParam1, "p", 16);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam1);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1989319[iVar0 /*4*/]);
		iVar0 = iVar0 + 1;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam1);
	}

	while (iVar0 < Global_4521275[iParam0 /*296*/].f_49)
	{
		switch (Global_4521275[iParam0 /*296*/].f_32)
		{
			case 13:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1989319[iVar0 /*4*/]);
				break;
		}
	
		iVar0 = iVar0 + 1;
	}
}

void func_75(int iParam0, char* sParam1) // Position - 0x36E2
{
	switch (iParam0)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL01" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~ */, 16);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL02" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~ */, 16);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL03" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~~n~~a~ */, 16);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL04" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~~n~~a~~n~~a~ */, 16);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL05" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~ */, 16);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL06" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~ */, 16);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL07" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~ */, 16);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL08" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~ */, 16);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL09" /* GXT: For a limited time only, the following vehicles are available for members to borrow or purchase at an exclusive discount at The Vinewood Car Club:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~ */, 16);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL10", 16);
			break;
	}
}

void func_76() // Position - 0x379B
{
	var uVar0;
	var uVar16;
	var uVar32;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_10183 /*29*/].f_7)), 64);

	if (Global_10202 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&uVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_10107[1 /*6*/]), 64);
		uVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 3, uVar32, &uVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_10107[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_9463, 0);
}

void func_77() // Position - 0x3818
{
	if (IS_BIT_SET(Global_9463, 1))
	{
		func_80();
		func_78();
		Global_114931.f_14058[Global_21627 /*20*/].f_18 = 1;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Static_51[Global_21627] = NETWORK::GET_NETWORK_TIME();
			Static_41[Global_21627] = 1;
		}
		else if (!IS_BIT_SET(Global_9463, 10))
		{
			Static_46[Global_21627] = MISC::GET_GAME_TIMER();
			Static_41[Global_21627] = 1;
		}
		else
		{
			Static_46[0] = MISC::GET_GAME_TIMER();
			Static_46[2] = MISC::GET_GAME_TIMER();
			Static_46[1] = MISC::GET_GAME_TIMER();
			Static_41[0] = 1;
			Static_41[2] = 1;
			Static_41[1] = 1;
		}
	
		MISC::CLEAR_BIT(&Global_9463, 1);
	}
}

void func_78() // Position - 0x38B1
{
	func_60();

	if (Global_80305)
		Global_114931.f_14058[3 /*20*/].f_10 = func_153(1198, -1);

	if (Global_114931.f_14058[Global_21627 /*20*/].f_10 == 1)
		if (!func_79(0))
			PAD::SET_CONTROL_SHAKE(0, 2000, 100);
}

bool func_79(int iParam0) // Position - 0x38FD
{
	if (iParam0 == 1)
		if (Global_21627.f_1 > 3)
			if (IS_BIT_SET(Global_9463, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_21627.f_1 > 3)
		return true;

	return false;
}

void func_80() // Position - 0x3954
{
	var uVar0;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar34;
	var uVar50;
	var uVar66;

	if (Global_24061 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_24061))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_24061))
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_24061), 64);
				Global_24070[Global_24068] = Global_24061;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
				Global_24070[Global_24068] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
			Global_24070[Global_24068] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_114931.f_14148[Global_24068 /*104*/].f_17 /*29*/].f_7)), 64);
	
		if (Global_114931.f_14148[Global_24068 /*104*/].f_17 == 159)
			TEXT_LABEL_ASSIGN_STRING(&uVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_COMIC_P" /* GXT: CHAR_COMIC_STORE */), 64);
	
		Global_24070[Global_24068] = 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
	else if (MISC::ARE_STRINGS_EQUAL(&uVar0, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);

	if (Global_114931.f_14148[Global_24068 /*104*/].f_32 == 4 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 5 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 6 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 7 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 8 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 9 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 10 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 11 || Global_114931.f_14148[Global_24068 /*104*/].f_32 == 12)
	{
		iVar16 = 0;
		iVar17 = func_81(9, Global_114931.f_14148[Global_24068 /*104*/].f_49);
	
		switch (iVar17)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /* GXT: ~a~ ~a~. */);
				break;
		
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
				break;
		
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
				break;
		
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		}
	
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_114931.f_14148[Global_24068 /*104*/]);
	
		while (iVar16 < iVar17)
		{
			switch (Global_114931.f_14148[Global_24068 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2733138.f_849[iVar16 /*4*/]);
					break;
			
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935498[iVar16 /*4*/]);
					break;
			
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935539[iVar16 /*4*/]);
					break;
			
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935560[iVar16 /*4*/]);
					break;
			
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935577[iVar16 /*4*/]);
					break;
			
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935590[iVar16 /*4*/]);
					break;
			
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935603[iVar16 /*4*/]);
					break;
			
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935616[iVar16 /*4*/]);
					break;
			
				case 12:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935629[iVar16 /*4*/]);
					break;
			}
		
			iVar16 = iVar16 + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&uVar18, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_114931.f_14148[Global_24068 /*104*/].f_17 /*29*/].f_3)), 64);
		Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 1, &uVar18, 0);
		Global_24058 = 3;
		Global_24057 = Static_62;
		Global_24061 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&Global_114931.f_14148[Global_24068 /*104*/]);
	
		switch (Global_114931.f_14148[Global_24068 /*104*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_33));
			
				if (Global_114931.f_14148[Global_24068 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_14148[Global_24068 /*104*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_67));
			
				if (Global_114931.f_14148[Global_24068 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_14148[Global_24068 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_14148[Global_24068 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114931.f_14148[Global_24068 /*104*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114931.f_14148[Global_24068 /*104*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114931.f_14148[Global_24068 /*104*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114931.f_14148[Global_24068 /*104*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_83));
				}
				break;
		
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114931.f_14148[Global_24068 /*104*/].f_49);
				break;
		
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114931.f_14148[Global_24068 /*104*/].f_49);
			
				if (Global_114931.f_14148[Global_24068 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_14148[Global_24068 /*104*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_67));
			
				if (Global_114931.f_14148[Global_24068 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_14148[Global_24068 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_14148[Global_24068 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114931.f_14148[Global_24068 /*104*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114931.f_14148[Global_24068 /*104*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114931.f_14148[Global_24068 /*104*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114931.f_14148[Global_24068 /*104*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114931.f_14148[Global_24068 /*104*/].f_83));
				}
				break;
		}
	
		if (Global_114931.f_14148[Global_24068 /*104*/].f_17 == 145)
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar34, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&uVar34, &Global_10185, 64);
			TEXT_LABEL_APPEND_STRING(&uVar34, "</C>", 64);
			Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 1, &uVar34, 0);
			Global_24058 = 3;
			Global_24057 = Static_62;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar50, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_114931.f_14148[Global_24068 /*104*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_114931.f_14148[Global_24068 /*104*/].f_17 == 98)
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar66, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&uVar66, &uVar50, 64);
				Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 1, &uVar66, 0);
			}
			else
			{
				Static_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar0, &uVar0, 0, 1, &uVar50, 0);
			}
		
			Global_24058 = 3;
			Global_24057 = Static_62;
			Global_24061 = 0;
		}
	}

	Global_114931.f_14148[Global_24068 /*104*/].f_16 = Static_62;
}

int func_81(int iParam0, int iParam1) // Position - 0x4022
{
	if (iParam0 < iParam1)
		return iParam0;
	else if (iParam1 < iParam0)
		return iParam1;

	return iParam0;
}

void func_82() // Position - 0x4047
{
	if (IS_BIT_SET(Global_9463, 19))
	{
		MISC::CLEAR_BIT(&Global_9463, 19);
		func_60();
		Global_114931.f_14058[3 /*20*/].f_18 = 0;
		Global_114931.f_14058[3 /*20*/].f_17 = 0;
	}
}

void func_83() // Position - 0x407F
{
	if (Static_41[Global_21627] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Static_61 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Static_51[Global_21627]);
		}
		else
		{
			Static_56[Global_21627] = MISC::GET_GAME_TIMER();
			Static_61 = Static_56[Global_21627] - Static_46[Global_21627];
		}
	
		if (Static_61 > 300000)
		{
			Global_114931.f_14058[Global_21627 /*20*/].f_18 = 0;
			Global_114931.f_14058[Global_21627 /*20*/].f_17 = 0;
			Static_41[Global_21627] = 0;
		}
	}
}

void func_84() // Position - 0x40F8
{
	int iVar0;

	func_60();

	if (Global_80305 == false)
	{
		if (!func_67())
		{
			if (Static_67 == 0)
			{
				if (Global_114931.f_14148[21 /*104*/].f_24 != 0 || Global_114931.f_14148[22 /*104*/].f_24 != 0 || Global_114931.f_14148[23 /*104*/].f_24 != 0)
				{
					switch (Global_21627)
					{
						case 0:
							if (Global_114931.f_14148[21 /*104*/].f_24 != 0)
							{
								Static_40 = 21;
								Static_67 = 1;
								BUILTIN::SETTIMERA(0);
							}
							break;
					
						case 1:
							if (Global_114931.f_14148[22 /*104*/].f_24 != 0)
							{
								Static_40 = 22;
								Static_67 = 1;
								BUILTIN::SETTIMERA(0);
							}
							break;
					
						case 2:
							if (Global_114931.f_14148[23 /*104*/].f_24 != 0)
							{
								Static_40 = 23;
								Static_67 = 1;
								BUILTIN::SETTIMERA(0);
							}
							break;
					
						default:
							break;
					}
				}
			}
			else if (BUILTIN::TIMERA() > 15000)
			{
				Static_67 = 0;
				iVar0 = 0;
				func_60();
			
				if (Static_40 == 21 && Global_21627 != 0)
					iVar0 = 1;
			
				if (Static_40 == 22 && Global_21627 != 1)
					iVar0 = 1;
			
				if (Static_40 == 23 && Global_21627 != 2)
					iVar0 = 1;
			
				if (Global_114931.f_14148[Static_40 /*104*/].f_24 != 0 && iVar0 == 0)
					if (!func_55(14))
						if (func_87(Global_114931.f_14148[Static_40 /*104*/].f_17, &Global_114931.f_14148[Static_40 /*104*/], Global_114931.f_14148[Static_40 /*104*/].f_24, Global_114931.f_14148[Static_40 /*104*/].f_25, Global_114931.f_14148[Static_40 /*104*/].f_26, Global_114931.f_14148[Static_40 /*104*/].f_29, 0, true, Global_114931.f_14148[Static_40 /*104*/].f_31, Global_114931.f_14148[Static_40 /*104*/].f_30))
							Global_114931.f_14148[Static_40 /*104*/].f_24 = 0;
			}
		
			if (Static_78 == 0)
			{
				if (Global_10173[Global_21627])
				{
					Static_78 = 1;
					Static_79 = Global_21627;
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						Static_76 = NETWORK::GET_NETWORK_TIME();
					else
						Static_70 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Static_77 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Static_76);
				}
				else
				{
					Static_71 = MISC::GET_GAME_TIMER();
					Static_77 = Static_71 - Static_70;
				}
			
				if (Static_77 > 7000)
				{
					if (func_85(0))
					{
						Global_10107[1 /*6*/] = { Global_10156[Global_21627 /*4*/] };
						Global_10183 = Global_10178[Global_21627];
						Global_10173[Global_21627] = false;
						Static_78 = 0;
					}
				}
			
				if (Static_79 != Global_21627)
					Static_78 = 0;
			}
		}
	}
}

bool func_85(int iParam0) // Position - 0x4364
{
	return func_86(iParam0, Global_44886);
}

bool func_86(int iParam0, int iParam1) // Position - 0x4375
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

bool func_87(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9) // Position - 0x4556
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;

	MISC::CLEAR_BIT(&Global_9463, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;

	if (func_89(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == true)
		{
			Global_10204 = iParam6;
			Global_10107[3 /*6*/] = { func_88(iParam0) };
			Global_10184 = iParam0;
			MISC::SET_BIT(&Global_9463, 1);
			MISC::SET_BIT(&Global_9463, 7);
		}
	
		return true;
	}

	return false;
}

struct<4> func_88(int iParam0) // Position - 0x45E5
{
	return Global_2339[iParam0 /*29*/].f_3;
}

int func_89(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x45F8
{
	int iVar0;
	int iVar1;

	iParam13 > 99;
	MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
	func_60();
	iVar0 = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_21627 == 0)
				iVar0 = 0;
			else
				iVar0 = 1;
			break;
	
		case 2:
			if (Global_21627 == 2)
				iVar0 = 0;
			else
				iVar0 = 1;
			break;
	
		case 1:
			if (Global_21627 == 1)
				iVar0 = 0;
			else
				iVar0 = 1;
			break;
	
		default:
			iVar0 = 0;
			break;
	}

	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				return 0;
	
		if (Global_114931.f_14058[Global_21627 /*20*/].f_17 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPTEXTMESSAGE")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPTEXTMESSAGE")) > 0)
			return 0;
	}

	if (func_102() == 0)
	{
		func_100();
		return 0;
	}

	func_99(Global_24068);
	TEXT_LABEL_ASSIGN_STRING(&Global_114931.f_14148[Global_24068 /*104*/], sParam1, 64);
	Global_114931.f_14148[Global_24068 /*104*/].f_17 = iParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114931.f_14148[Global_24068 /*104*/].f_24 = iParam2;
	}

	Global_114931.f_14148[Global_24068 /*104*/].f_25 = iParam7;
	Global_114931.f_14148[Global_24068 /*104*/].f_26 = iParam8;
	Global_114931.f_14148[Global_24068 /*104*/].f_29 = iParam9;
	Global_114931.f_14148[Global_24068 /*104*/].f_30 = iParam12;
	Global_114931.f_14148[Global_24068 /*104*/].f_31 = iParam11;
	Global_114931.f_14148[Global_24068 /*104*/].f_28 = 0;
	Global_114931.f_14148[Global_24068 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_14148[Global_24068 /*104*/].f_33), sParam4, 64);
	Global_114931.f_14148[Global_24068 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_14148[Global_24068 /*104*/].f_50), sParam5, 64);
	Global_114931.f_14148[Global_24068 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_14148[Global_24068 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_14148[Global_24068 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_9463, 10))
	{
		Global_114931.f_14148[Global_24068 /*104*/].f_99[0] = true;
		Global_114931.f_14148[Global_24068 /*104*/].f_99[1] = true;
		Global_114931.f_14148[Global_24068 /*104*/].f_99[2] = true;
		Global_10203 = 4;
		func_98(0);
		func_98(2);
		func_98(1);
	}
	else
	{
		func_60();
	
		switch (iParam16)
		{
			case 3:
				Global_114931.f_14148[Global_24068 /*104*/].f_99[Global_21627] = true;
				break;
		
			case 0:
				Global_114931.f_14148[Global_24068 /*104*/].f_99[0] = true;
				break;
		
			case 2:
				Global_114931.f_14148[Global_24068 /*104*/].f_99[2] = true;
				break;
		
			case 1:
				Global_114931.f_14148[Global_24068 /*104*/].f_99[1] = true;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_21627)
			{
				case 0:
					func_98(0);
					Global_10203 = 0;
					break;
			
				case 1:
					func_98(1);
					Global_10203 = 1;
					break;
			
				case 2:
					func_98(2);
					Global_10203 = 2;
					break;
			
				case 3:
					func_98(3);
					Global_10203 = 3;
					break;
			
				default:
					Global_10203 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_9463, 10))
		{
			Global_114931.f_14058[0 /*20*/].f_17 = 1;
			Global_114931.f_14058[1 /*20*/].f_17 = 1;
			Global_114931.f_14058[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114931.f_14058[Global_21627 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114931.f_14058[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114931.f_14058[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114931.f_14058[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_24070[Global_24068] = 0;

	if (bParam10)
	{
		func_60();
	
		if (Global_21570)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21627)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Michael", 24);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Trevor", 24);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_97())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21616, 1);
	}

	if (!Global_21860 && !IS_BIT_SET(Global_9465, 9))
	{
		if (Global_21627.f_1 == 6)
		{
			func_56(Global_21608, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_54(1);
			func_56(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1979864 != -1 && iParam0 == Global_1979864)
		iVar1 = 1;

	func_90(iParam0, sParam1, iVar1, func_96(PLAYER::PLAYER_ID()));
	return 1;
}

void func_90(int iParam0, char* sParam1, bool bParam2, int iParam3) // Position - 0x4ADD
{
	int iVar0;

	if (!func_91())
		return;

	iVar0 = iParam0;
	iVar0.f_1 = 1654525105;
	iVar0.f_2 = MISC::GET_HASH_KEY(sParam1);
	iVar0.f_3 = 0;
	iVar0.f_4 = bParam2;
	iVar0.f_5 = iParam3;
	iVar0.f_6 = Global_1979847.f_7;
	iVar0.f_7 = Global_1979847.f_8;
	iVar0.f_8 = Global_1979847.f_9;
	iVar0.f_9 = Global_1979847.f_10;
	iVar0.f_10 = Global_1979847.f_11;
	iVar0.f_11 = Global_1979847.f_12;
	iVar0.f_12 = Global_1979847.f_13;
	iVar0.f_13 = Global_1979847.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&iVar0);

	if (bParam2)
		Global_1979864 = -1;
}

bool func_91() // Position - 0x4B78
{
	if (!Global_262145.f_28523 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
		return false;

	if (!Global_80305)
		return false;

	if (PLAYER::PLAYER_ID() == func_95())
		return false;

	if (func_92(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

bool func_92(int iParam0) // Position - 0x4BDB
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_94(8))
			return true;
	
		if (Global_2733138.f_6061.f_1 > 0)
			return true;
	}

	return func_93(iParam0, 20);
}

bool func_93(int iParam0, int iParam1) // Position - 0x4C12
{
	return IS_BIT_SET(Global_1892798[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_94(int iParam0) // Position - 0x4C2A
{
	return IS_BIT_SET(Global_2733138.f_6050, iParam0);
}

int func_95() // Position - 0x4C3C
{
	return -1;
}

int func_96(int iParam0) // Position - 0x4C45
{
	return Global_1845299[iParam0 /*883*/].f_198.f_6;
}

bool func_97() // Position - 0x4C5A
{
	return Global_1575092;
}

void func_98(int iParam0) // Position - 0x4C66
{
	var uVar0;
	var uVar1;

	uVar0 = Global_114931.f_14058[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_99(int iParam0) // Position - 0x4C85
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_114931.f_14148[iParam0 /*104*/].f_18 = uVar0;
	Global_114931.f_14148[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_114931.f_14148[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_114931.f_14148[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_114931.f_14148[iParam0 /*104*/].f_18.f_4 = iVar4;
	Global_114931.f_14148[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_100() // Position - 0x4D17
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_80305)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}

	iVar2 = iVar0;
	Global_24068 = 34;
	Global_114931.f_14148[Global_24068 /*104*/].f_18 = -1;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_1 = 0;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_2 = 0;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_3 = 0;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_5 = 99999;

	while (iVar2 < iVar1)
	{
		if (!func_101(Global_114931.f_14148[iVar2 /*104*/].f_18, Global_114931.f_14148[Global_24068 /*104*/].f_18))
			Global_24068 = iVar2;
	
		iVar2 = iVar2 + 1;
	}

	Global_114931.f_14148[Global_24068 /*104*/].f_24 = 1;
}

bool func_101(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x4DE2
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

int func_102() // Position - 0x4ECD
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_80305)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}

	for (iVar2 = iVar0; iVar2 < iVar1; iVar2 = iVar2 + 1)
	{
		if (Global_114931.f_14148[iVar2 /*104*/].f_24 == 0)
		{
			Global_24068 = iVar2;
			return 1;
		}
	}

	iVar2 = iVar0;
	Global_24068 = 34;
	Global_114931.f_14148[Global_24068 /*104*/].f_18 = -1;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_1 = 0;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_2 = 0;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_3 = 0;
	Global_114931.f_14148[Global_24068 /*104*/].f_18.f_5 = 99999;

	while (iVar2 < iVar1)
	{
		if (Global_114931.f_14148[iVar2 /*104*/].f_24 == 0 || Global_114931.f_14148[iVar2 /*104*/].f_24 == 1)
			if (!func_101(Global_114931.f_14148[iVar2 /*104*/].f_18, Global_114931.f_14148[Global_24068 /*104*/].f_18))
				Global_24068 = iVar2;
	
		Global_114931.f_14148[iVar2 /*104*/].f_24 == 2;
		iVar2 = iVar2 + 1;
	}

	if (Global_24068 == 34)
		return 0;

	Global_114931.f_14148[Global_24068 /*104*/].f_99[0] = false;
	Global_114931.f_14148[Global_24068 /*104*/].f_99[1] = false;
	Global_114931.f_14148[Global_24068 /*104*/].f_99[2] = false;
	return 1;
}

void func_103() // Position - 0x5035
{
	if (IS_BIT_SET(Global_9463, 6))
	{
		if (Global_10201 > 0)
		{
			if (IS_BIT_SET(Global_9464, 11))
			{
				if (Static_39)
				{
					func_104(Static_35, "CLEAR_ALL");
				
					if (IS_BIT_SET(Global_9463, 25))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_35, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					if (IS_BIT_SET(Global_4524844, 11))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_35, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					if (Global_80305 == true)
					{
						if (IS_BIT_SET(Global_4524844, 12))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_35, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					
						if (IS_BIT_SET(Global_4524844, 28))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_35, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(60);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(148f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				
					if (IS_BIT_SET(Global_4524844, 19))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_35, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
					
						if (IS_BIT_SET(Global_4524844, 12) || IS_BIT_SET(Global_4524844, 11) || IS_BIT_SET(Global_9463, 25))
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
						else
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
					
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					MISC::CLEAR_BIT(&Global_9464, 11);
					Static_39 = false;
				}
			}
		}
	
		if (Global_10201 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Static_35);
			MISC::CLEAR_BIT(&Global_9463, 6);
		}
		else
		{
			func_17();
		}
	}
	else if (Global_10201 > 0)
	{
		Static_35 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_alert_popup");
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Static_35))
		{
			BUILTIN::WAIT(0);
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		MISC::SET_BIT(&Global_9463, 6);
	}
}

void func_104(var uParam0, char* sParam1) // Position - 0x51EA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_105() // Position - 0x51FF
{
	if (IS_BIT_SET(Global_9464, 7))
	{
		MISC::SET_BIT(&Global_9464, 6);
		MISC::CLEAR_BIT(&Global_9464, 7);
		return;
	}

	if (!IS_BIT_SET(Global_9464, 7))
	{
		MISC::CLEAR_BIT(&Global_9464, 6);
		return;
	}
}

void func_106() // Position - 0x5236
{
	if (IS_BIT_SET(Global_9464, 4))
	{
		MISC::SET_BIT(&Global_9464, 3);
		MISC::CLEAR_BIT(&Global_9464, 4);
		return;
	}

	if (!IS_BIT_SET(Global_9464, 4))
	{
		MISC::CLEAR_BIT(&Global_9464, 3);
		return;
	}
}

void func_107() // Position - 0x526D
{
	if (IS_BIT_SET(Global_9464, 2))
	{
		if (!(Global_21627.f_1 == 1))
			Global_21627.f_1 = 0;
	
		MISC::CLEAR_BIT(&Global_9464, 2);
		return;
	}

	if (!IS_BIT_SET(Global_9464, 2))
	{
		if (!(Global_21627.f_1 == 1))
			if (Global_21627.f_1 < 4)
				Global_21627.f_1 = 3;
	
		return;
	}
}

bool func_108() // Position - 0x52BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
			if (Global_21570 == false)
				if (Global_8778 != 128)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						Global_23000 != 2;
	
		if (func_55(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_38, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926938))
			return false;
	
		if (Global_113979)
			return false;
	}

	if (Global_80305)
		return false;

	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);

	if (iVar1 == 4 && iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
	{
		iVar2 = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("SEASHARK") || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("SEASHARK2") || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("RHINO") || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("SUBMERSIBLE") || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("SUBMERSIBLE2") || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("TORO"))
					iVar2 = 0;
			}
		}
	}

	if (Global_4525122 || iVar2 == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPTRACKIFY")) > 0 || Global_114931.f_14058.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MICHAEL2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

bool func_109(int iParam0, int iParam1, int iParam2, bool bParam3) // Position - 0x5508
{
	func_60();

	if (Global_80305 == false)
	{
		if (func_55(14))
		{
			if (Global_24059 == 2 || Global_24059 == 4)
			{
			}
			else
			{
				return false;
			}
		}
	}

	if (Global_21627.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_79(0) == true)
			return false;

	if (Global_21593 == 1)
		return false;

	if (Global_21627.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21624))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
		{
			if (Global_21627.f_1 < 4)
			{
				func_110("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) == 0)
					Global_21624 = BUILTIN::START_NEW_SCRIPT("cellphone_flashhand", 1424);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_21609)
	{
		BUILTIN::WAIT(0);
	}

	func_156();
	func_155();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) == 0)
	{
		Global_10103 = 0;
		Global_21627.f_1 = 7;
		func_110(&(Global_9470[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) == 0)
				Global_21625 = BUILTIN::START_NEW_SCRIPT(&(Global_9470[iParam0 /*15*/].f_5), 4000);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) == 0)
			Global_21625 = BUILTIN::START_NEW_SCRIPT(&(Global_9470[iParam0 /*15*/].f_5), 2600);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9470[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_110(char* sParam0) // Position - 0x566B
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_111(int iParam0) // Position - 0x568B
{
	if (func_114())
		return;

	if (Global_21859)
		if (func_113())
			func_112(true, true);
		else
			func_112(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_67())
		Global_21627.f_1 = 3;
}

void func_112(bool bParam0, bool bParam1) // Position - 0x5715
{
	if (bParam0)
	{
		if (func_79(0))
		{
			Global_21859 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21564);
		
			Global_21555 = { Global_21573[Global_21572 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
		}
	}
	else if (Global_21859 == true)
	{
		Global_21859 = false;
		Global_21555 = { Global_21580[Global_21572 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21564);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
	}
}

bool func_113() // Position - 0x5789
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_114() // Position - 0x5797
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_115() // Position - 0x57A6
{
	float fVar0;

	MISC::SET_GAME_PAUSED(1);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);

	for (fVar0 = 0f; !PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_JUST_PRESSED(2, 202) || fVar0 < 1f; fVar0 = fVar0 + MISC::GET_FRAME_TIME())
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT" /* GXT: ALERT */, "VE_DIR_MODE_SURE" /* GXT: Are you sure you want to launch Director Mode? */, 18, 0, 0, -1, 0, 0, 1, 0);
		BUILTIN::WAIT(0);
	}

	MISC::SET_GAME_PAUSED(0);

	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		Global_113873 = true;
	}
}

void func_116(int iParam0) // Position - 0x5825
{
	float fVar0;
	char* sVar1;

	MISC::SET_GAME_PAUSED(1);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);

	for (fVar0 = 0f; !PAD::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f; fVar0 = fVar0 + MISC::GET_FRAME_TIME())
	{
		sVar1 = func_117(iParam0, 119);
		HUD::SET_WARNING_MESSAGE("FBR_GENERIC" /* GXT: ~a~ is not available while ~a~. */, 16384, 0, 0, -1, "FBR_DIR_MODE" /* GXT: Director Mode */, sVar1, 1, 0);
		BUILTIN::WAIT(0);
	}

	MISC::SET_GAME_PAUSED(0);
}

char* func_117(int iParam0, int iParam1) // Position - 0x5887
{
	iParam1 = iParam1;

	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
	
		case 2:
			return "FBR_BLK_RNNNG" /* GXT: feature is already running */;
	
		case 13:
			return "FBR_BLK_DEAD" /* GXT: dead */;
	
		case 3:
			return "FBR_BLK_MISS" /* GXT: playing a mission */;
	
		case 5:
			return "FBR_BLK_SHOP" /* GXT: browsing a shop */;
	
		case 4:
			return "FBR_BLK_CUTS" /* GXT: watching a cutscene */;
	
		case 6:
			return "FBR_BLK_WANT" /* GXT: wanted */;
	
		case 7:
			return "FBR_BLK_ONLI" /* GXT: playing GTA Online */;
	
		case 8:
			return "FBR_BLK_ACT" /* GXT: performing this action */;
	
		case 9:
			return "FBR_BLK_LOC" /* GXT: in this location */;
	
		case 10:
			return "FBR_BLK_VEH" /* GXT: in a vehicle */;
	
		case 11:
			return "FBR_BLK_PARA" /* GXT: skydiving */;
	
		case 12:
			return "FBR_BLK_FALL" /* GXT: falling */;
	
		default:
			return "ERROR";
	}

	return "ERROR";
}

int func_118(int iParam0, bool bParam1, int iParam2) // Position - 0x5978
{
	int iVar0;

	iParam2 = iParam2;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		return 13;

	if (bParam1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
			return 2;

	if (func_151() && !func_55(14))
		return 3;

	if (func_150())
		return 3;

	if (func_149())
		return 8;

	if (bParam1)
		if (func_148())
			return 8;

	if (Global_99349)
		return 3;

	if (Global_34050)
		return 8;

	if (Global_33941)
		return 8;

	if (Global_2883694)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0)
			return 3;
	else if (Global_2883693)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0)
			return 3;
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MISSION_STAT_WATCHER")) > 0)
		return 3;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FINALE_CHOICE")) > 0)
		return 3;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CREATOR")) > 0)
		return 3;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RESPAWN_CONTROLLER")) > 0)
		return 13;

	if (func_147(bParam1))
		return 3;

	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		return 12;

	if (func_146(Global_113955, 256))
		return 3;

	if (func_145() || func_144() || func_139() || func_138())
		return 5;

	if (func_138())
		return 5;

	if (func_137())
		return 5;

	if (func_136())
		return 5;

	if (func_144())
		return 5;

	if (func_135() && !Global_113878)
		return 8;

	if (func_139())
		return 5;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_134())
		return 4;

	if (func_97())
		return 4;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_122(60);
		
			if (iVar0 != 0)
				return iVar0;
		
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
				return 11;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || Global_113978)
				return 10;
		}
	}

	if (Global_34048)
		return 8;

	if (Global_80303)
		return 4;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
			return 6;
	
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
			return 8;
	
		if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
			return 8;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 7;

	if (func_121())
		return 8;

	if (Global_33795)
		return 3;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		return 4;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
		return 9;

	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		return 9;

	if (bParam1)
		if (!func_119(false))
			return 8;

	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return 9;

	return 0;
}

bool func_119(bool bParam0) // Position - 0x5CB4
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
		return false;

	if (func_97() || Global_24407.f_4 || func_120() || MISC::IS_MEMORY_CARD_IN_USE() || MISC::IS_AUTO_SAVE_IN_PROGRESS() || func_134() || func_150())
		return false;

	if (!bParam0)
		if (MISC::GET_MISSION_FLAG())
			return false;

	return true;
}

bool func_120() // Position - 0x5DC4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

bool func_121() // Position - 0x5DE0
{
	return Global_62208;
}

int func_122(int iParam0) // Position - 0x5DEB
{
	var uVar0;
	int iVar3;
	int iVar4;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		return 5;

	uVar0 = { func_133(PLAYER::PLAYER_ID()) };

	if (Global_114018[10 /*10*/].f_1)
		if (BUILTIN::VDIST2(uVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
			return 3;

	if (func_132(2) && !func_132(17))
		if (BUILTIN::VDIST2(uVar0, -59.966286f, -1099.0055f, 25.520878f) < 8f)
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(uVar0, -61.266285f, -1096.5055f, 25.520878f, -58.433327f, -1101.1473f, 29.24937f, 1.25f, 0, 1))
				return 9;

	if (BUILTIN::VDIST2(uVar0, -740.9346f, 5599.4263f, 40.71515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(uVar0, -746.1299f, 5599.2256f, 40.475605f, -737.63196f, 5599.364f, 44.169304f, 3.375f, 0, 1))
			return 9;

	if (BUILTIN::VDIST2(uVar0, -740.9346f, 5590.4263f, 40.71515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(uVar0, -746.1299f, 5590.6675f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
			return 9;

	if (BUILTIN::VDIST2(uVar0, 446.32654f, 5566.35f, 780.21515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(uVar0, 451.16608f, 5566.451f, 780.1703f, 442.52106f, 5566.374f, 783.98193f, 3.375f, 0, 1))
			return 9;

	if (BUILTIN::VDIST2(uVar0, 446.32654f, 5577.35f, 780.21515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(uVar0, 451.16608f, 5577.8667f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
			return 9;

	if (BUILTIN::VDIST2(uVar0, 128.83f, -1297.98f, 29.3f) < 2f || BUILTIN::VDIST2(uVar0, 95.07f, -1284.98f, 29.3f) < 2f)
		return 9;

	if (BUILTIN::VDIST2(uVar0, 1081.9506f, -1976.7618f, 30.47218f) < 6f && func_131(26))
		return 9;

	if (!Static_25)
		func_123(iParam0);

	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());

	if (iVar3 == 0)
		return 0;
	else if (iVar3 == Global_113893 || iVar3 == Global_113894 || iVar3 == Global_113895)
		return 9;
	else if (iVar3 == Global_113884)
		return 9;
	else if (iVar3 == Global_113885)
		return 9;
	else if (iVar3 == Global_113888)
		return 9;
	else if (iVar3 == Global_113887)
		return 9;
	else if (iVar3 == Global_113889)
		return 9;
	else if (iVar3 == Global_113890)
		return 9;
	else if (iVar3 == Global_113891)
		return 9;
	else if (iVar3 == Global_113892)
		return 9;
	else if (iVar3 == Global_113896)
		return 9;
	else if (iVar3 == Global_113897)
		return 9;
	else if (iVar3 == Global_113898)
		return 9;
	else if (iVar3 == Global_113899)
		return 9;
	else if (iVar3 == Global_113900)
		return 9;
	else if (iVar3 == Global_113901 || iVar3 == Global_113902 && func_132(67))
		return 9;

	for (iVar4 = 0; iVar4 <= 19 - 1; iVar4 = iVar4 + 1)
	{
		if (iVar3 == Global_113903[iVar4])
			return 9;
	}

	return 0;
}

void func_123(int iParam0) // Position - 0x6213
{
	int iVar0;

	iParam0 = iParam0;
	func_126(24, &Global_113884);
	func_126(47, &Global_113885);
	func_126(10, &Global_113893);
	func_126(9, &Global_113894);
	func_126(8, &Global_113895);
	func_126(21, &Global_113896);
	func_126(11, &Global_113897);
	func_126(18, &Global_113901);
	func_126(19, &Global_113902);
	Global_113888 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.1914f, 32.2412f, "V_factory1");
	Global_113887 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.0225f, 31.924f, "V_factory2");
	Global_113889 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.7485f, 32.4102f, "V_factory3");
	Global_113890 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.9775f, 31.3353f, "V_factory4");
	Global_113891 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.2587f, 28.797f, "v_gun");
	Global_113892 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.1304f, 28.2847f, "v_strip3");
	Global_113898 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.1454f, 126.0262f, "cs6_08_mine_int");
	Global_113899 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.5984f, 2571.9353f, 45.6802f, "ch3_01_trlr_int");
	Global_113900 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");

	for (iVar0 = 0; iVar0 <= 19 - 1; iVar0 = iVar0 + 1)
	{
		Global_113903[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(func_124(iVar0));
	}

	Static_25 = true;
}

Vector3 func_124(int iParam0) // Position - 0x639F
{
	if (!func_125(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
	
		case 1:
			return -52.7185f, -1756.1747f, 28.4432f;
	
		case 2:
			return 1159.4408f, -325.6666f, 68.2272f;
	
		case 3:
			return 1699.4293f, 4928.6416f, 41.0858f;
	
		case 4:
			return -1822.9261f, 788.9531f, 137.212f;
	
		case 5:
			return 1166.4265f, 2703.5283f, 37.1574f;
	
		case 6:
			return -2973.4138f, 390.6885f, 14.0433f;
	
		case 7:
			return -1225.8604f, -903.5782f, 11.3263f;
	
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
	
		case 9:
			return -1490.2753f, -382.8514f, 39.1634f;
	
		case 10:
			return -3240.7188f, 1004.5081f, 11.8468f;
	
		case 11:
			return -3039.2488f, 589.3831f, 6.9251f;
	
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
	
		case 13:
			return 2558.7542f, 385.599f, 107.6391f;
	
		case 14:
			return 2681.5112f, 3282.7627f, 54.2573f;
	
		case 15:
			return 1731.1532f, 6411.6333f, 34.0373f;
	
		case 16:
			return 1964.9305f, 3741.207f, 31.3599f;
	
		case 17:
			return 29.0707f, -1348.7728f, 28.5101f;
	
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

bool func_125(int iParam0) // Position - 0x6589
{
	if (iParam0 >= 19)
		return false;
	else if (iParam0 <= -1)
		return false;

	return true;
}

var func_126(int iParam0, int iParam1) // Position - 0x65AA
{
	var uVar0;

	uVar0 = { func_127(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uVar0, uVar0.f_3);
	return uVar0.f_4;
}

struct<5> func_127(int iParam0) // Position - 0x65CF
{
	var uVar0;
	var uVar5;

	switch (iParam0)
	{
		case 0:
			uVar0 = { -447.4833f, 280.3197f, 77.5215f };
			uVar0.f_3 = "v_comedy";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 1:
			uVar0 = { -1906.7858f, -573.7576f, 19.0773f };
			uVar0.f_3 = "v_psycheoffice";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 2:
			uVar0 = { 1399.973f, 1148.7559f, 113.3336f };
			uVar0.f_3 = "v_ranch";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 3:
			uVar0 = { -598.6379f, -1608.3986f, 26.0108f };
			uVar0.f_3 = "v_recycle";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 4:
			uVar0 = { -556.5089f, 286.3181f, 81.1763f };
			uVar0.f_3 = "v_rockclub";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 5:
			uVar0 = { -111.7116f, -11.912f, 69.5196f };
			uVar0.f_3 = "v_janitor";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 6:
			uVar0 = { 1274.9338f, -1714.7256f, 53.7715f };
			uVar0.f_3 = "v_lesters";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 7:
			uVar0 = { 147.433f, -2201.3704f, 3.688f };
			uVar0.f_3 = "v_torture";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 8:
			uVar0 = { 320.9934f, 265.2515f, 82.1221f };
			uVar0.f_3 = "v_cinema";
			uVar0.f_4 = "v_cinema (Vinewood)";
			break;
	
		case 9:
			uVar0 = { -1425.5645f, -244.3f, 15.8053f };
			uVar0.f_3 = "v_cinema";
			uVar0.f_4 = "v_cinema (Morningwood)";
			break;
	
		case 10:
			uVar0 = { 377.153f, -717.567f, 10.0536f };
			uVar0.f_3 = "v_cinema";
			uVar0.f_4 = "v_cinema (Downtown)";
			break;
	
		case 11:
			uVar0 = { 245.1564f, 370.211f, 104.7382f };
			uVar0.f_3 = "v_epsilonism";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 12:
			uVar0 = { 173.1176f, -1003.2789f, -99.9999f };
			uVar0.f_3 = "v_garages";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 13:
			uVar0 = { 199.9715f, -999.6678f, -100f };
			uVar0.f_3 = "v_garagem";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 14:
			uVar0 = { 228.6058f, -992.0537f, -99.9999f };
			uVar0.f_3 = "v_garagel";
			uVar0.f_3 = "hei_dlc_garage_high_new";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 15:
			uVar0 = { 1854.2538f, 3686.7385f, 33.2671f };
			uVar0.f_3 = "v_sheriff";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 16:
			uVar0 = { -444.8907f, 6013.587f, 30.7164f };
			uVar0.f_3 = "v_sheriff2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 17:
			uVar0 = { 3522.8452f, 3707.9653f, 19.9918f };
			uVar0.f_3 = "v_lab";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 18:
			uVar0 = { 717.2994f, -974.4271f, 23.9142f };
			uVar0.f_3 = "v_sweat";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 19:
			uVar0 = { 717.299f, -974.4271f, 23.9142f };
			uVar0.f_3 = "v_sweatempty";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 20:
			uVar0 = { 2449.7852f, 4983.8247f, 45.8106f };
			uVar0.f_3 = "v_farmhouse";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 22:
			uVar0 = { 1087.1952f, -1988.445f, 28.649f };
			uVar0.f_3 = "v_foundry";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 23:
			uVar0 = { 982.233f, -2160.3816f, 28.4761f };
			uVar0.f_3 = "v_abattoir";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 21:
			uVar0 = { 479.0568f, -1316.8253f, 28.2038f };
			uVar0.f_3 = "v_chopshop";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 24:
			uVar0 = { -1005.6632f, -478.3461f, 49.0265f };
			uVar0.f_3 = "v_58_sol_office";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 25:
			uVar5 = { func_130(1, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
	
		case 26:
			uVar5 = { func_130(2, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
	
		case 27:
			uVar5 = { func_130(3, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
	
		case 28:
			uVar5 = { func_130(4, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
	
		case 29:
			uVar5 = { func_130(5, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
	
		case 30:
			uVar5 = { func_130(6, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
	
		case 31:
			uVar5 = { func_130(7, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
	
		case 32:
			uVar0 = { Global_1312440[34 /*1951*/].f_146.f_1517 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
	
		case 33:
			uVar5 = { func_130(35, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
	
		case 34:
			uVar5 = { func_130(36, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
	
		case 35:
			uVar5 = { func_130(37, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
	
		case 36:
			uVar5 = { func_130(38, false) };
			uVar0 = { -20.1f, -580.8f, 91.3f };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
	
		case 37:
			uVar5 = { func_130(39, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
	
		case 38:
			uVar5 = { func_130(40, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
	
		case 39:
			uVar5 = { func_130(41, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
	
		case 40:
			uVar5 = { func_130(42, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
	
		case 41:
			uVar5 = { func_130(43, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
	
		case 42:
			uVar0 = { -470.3754f, -698.5207f, 51.5276f };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
	
		case 43:
			uVar0 = { -460.6133f, -691.5562f, 69.9067f };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
	
		case 44:
			uVar0 = { 300.633f, -997.4288f, -99.9727f };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
	
		case 49:
			uVar0 = { -171.3969f, 494.2671f, 134.4935f };
			uVar0.f_3 = "apa_v_mp_stilts_b";
			uVar0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
	
		case 50:
			uVar0 = { 339.4982f, 434.0887f, 146.2206f };
			uVar0.f_3 = "apa_v_mp_stilts_b";
			uVar0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
	
		case 51:
			uVar0 = { -761.3884f, 615.7333f, 140.9805f };
			uVar0.f_3 = "apa_v_mp_stilts_b";
			uVar0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
	
		case 52:
			uVar0 = { -678.1752f, 591.0076f, 142.2196f };
			uVar0.f_3 = "apa_v_mp_stilts_b";
			uVar0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
	
		case 53:
			uVar0 = { 120.0541f, 553.793f, 181.0943f };
			uVar0.f_3 = "apa_v_mp_stilts_a";
			uVar0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
	
		case 54:
			uVar0 = { -571.4039f, 655.2008f, 142.6293f };
			uVar0.f_3 = "apa_v_mp_stilts_a";
			uVar0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
	
		case 55:
			uVar0 = { -742.2565f, 587.6547f, 143.0577f };
			uVar0.f_3 = "apa_v_mp_stilts_a";
			uVar0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
	
		case 56:
			uVar0 = { -857.2222f, 685.051f, 149.6502f };
			uVar0.f_3 = "apa_v_mp_stilts_a";
			uVar0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
	
		case 57:
			uVar0 = { -1287.6498f, 443.2707f, 94.6919f };
			uVar0.f_3 = "apa_v_mp_stilts_a";
			uVar0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
	
		case 58:
			uVar0 = { 374.2012f, 416.9688f, 142.5991f };
			uVar0.f_3 = "apa_v_mp_stilts_a";
			uVar0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
	
		case 45:
			uVar0 = { -16.295849f, -684.0385f, 33.508316f };
			uVar0.f_3 = "dt1_03_carpark";
			uVar0.f_4 = "dt1_03_carpark";
			break;
	
		case 46:
			uVar0 = { 341.1f, -1000f, -99.2f };
			uVar0.f_3 = "v_apart_midspaz";
			uVar0.f_4 = "v_apart_midspaz";
			break;
	
		case 47:
			uVar0 = { 199.97156f, -1018.95416f, -100f };
			uVar0.f_3 = "v_garagem_sp";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 48:
			uVar0 = { -1388.0013f, -618.4197f, 30.8196f };
			uVar0.f_3 = "v_bahama";
			uVar0.f_4 = uVar0.f_3;
			break;
	}

	switch (iParam0)
	{
		case 59:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 60:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 61:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_03";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 62:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_04";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 63:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_05";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 64:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_06";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 65:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_07";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 66:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = "apa_v_mp_h_08";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 67:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 68:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 69:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_03";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 70:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_04";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 71:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_05";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 72:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_06";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 73:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_07";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 74:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = "apa_v_mp_h_08";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 75:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 76:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 77:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_03";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 78:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_04";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 79:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_05";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 80:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_06";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 81:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_07";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 82:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = "apa_v_mp_h_08";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 83:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 84:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 85:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 86:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 87:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 88:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 89:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 90:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 91:
			uVar5 = { func_130(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 92:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 93:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 94:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 95:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 96:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 97:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 98:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 99:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 100:
			uVar5 = { func_130(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 101:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 102:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 103:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 104:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 105:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 106:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 107:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 108:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 109:
			uVar5 = { func_130(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 110:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 111:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 112:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 113:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 114:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 115:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 116:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 117:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 118:
			uVar5 = { func_130(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 119:
			uVar5 = { func_130(91, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "bkr_biker_dlc_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 120:
			uVar5 = { func_130(97, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "bkr_biker_dlc_int_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 121:
			uVar5 = { func_130(103, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 122:
			uVar5 = { func_130(104, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 123:
			uVar5 = { func_130(105, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 124:
			uVar5 = { func_130(106, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 125:
			uVar5 = { func_130(107, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 126:
			uVar5 = { func_130(108, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 127:
			uVar5 = { func_130(109, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 128:
			uVar5 = { func_130(110, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 129:
			uVar5 = { func_130(111, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 130:
			uVar5 = { func_130(112, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 131:
			uVar5 = { func_130(113, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 132:
			uVar5 = { func_130(114, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 133:
			uVar5 = { func_130(103, true) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 134:
			uVar5 = { func_130(106, true) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 135:
			uVar5 = { func_130(109, true) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 136:
			uVar5 = { func_130(112, true) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 137:
			uVar0 = { 938.3077f, -3196.1116f, -100f };
			uVar0.f_3 = "gr_grdlc_int_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 138:
			uVar0 = { 512.5f, 4852f, -62.6f };
			uVar0.f_3 = "xm_x17dlc_int_sub";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 139:
			uVar0 = { 2047f, 2942f, -61.9f };
			uVar0.f_3 = "xm_x17dlc_int_facility";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 140:
			uVar0 = { -1047.5997f, -232.3503f, 38.0135f };
			uVar0.f_3 = "v_faceoffice";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 22:
			uVar0 = { 1100f, -2004f, 37f };
			uVar0.f_3 = "v_foundry";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 141:
			uVar0 = { 361f, 6306f, -159f };
			uVar0.f_3 = "xm_x17dlc_int_silo_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 142:
			uVar0 = { 305f, 6298f, -160f };
			uVar0.f_3 = "xm_x17dlc_int_silo_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 143:
			uVar0 = { 244f, 6163f, -159f };
			uVar0.f_3 = "xm_x17dlc_int_lab";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 144:
			uVar0 = { 2168f, 2920f, -84f };
			uVar0.f_3 = "xm_x17dlc_int_facility2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 145:
			uVar0 = { 446f, 5922f, -158f };
			uVar0.f_3 = "xm_x17dlc_int_bse_tun";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 146:
			uVar0 = { 252f, 5972f, -156f };
			uVar0.f_3 = "xm_x17dlc_int_base_loop";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 147:
			uVar0 = { 682f, 5959f, -152f };
			uVar0.f_3 = "xm_x17dlc_int_base_ent";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 148:
			uVar0 = { 551f, 5939f, -158f };
			uVar0.f_3 = "xm_x17dlc_int_base";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 149:
			uVar0 = { 520.0001f, 4750f, -70f };
			uVar0.f_3 = "xm_x17dlc_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 150:
			uVar0 = { -1266.8022f, -3014.849f, -49.4903f };
			uVar0.f_3 = "sm_smugdlc_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 151:
			uVar0 = { 974.9203f, -3000.0647f, -40.647f };
			uVar0.f_3 = "imp_impexp_intwaremed";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 152:
			uVar0 = { 969.5376f, -3000.4111f, -48.647f };
			uVar0.f_3 = "imp_impexp_int_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 153:
			uVar0 = { 1094.9966f, -3100.0117f, -39.9999f };
			uVar0.f_3 = "ex_int_warehouse_s_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 154:
			uVar0 = { 1059.9949f, -3100f, -39.9999f };
			uVar0.f_3 = "ex_int_warehouse_m_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 155:
			uVar0 = { 1010.0083f, -3100f, -39.9999f };
			uVar0.f_3 = "ex_int_warehouse_l_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 156:
			uVar0 = { 372.6707f, 405.5235f, 144.5326f };
			uVar0.f_3 = "apa_v_mp_stilts_a";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 157:
			uVar0 = { -282.0588f, -955.17f, 85.3036f };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 158:
			uVar0 = { 342.7946f, -997.4225f, -99.7444f };
			uVar0.f_3 = "v_apart_midspaz";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 159:
			uVar0 = { 260.3268f, -997.4298f, -100.0086f };
			uVar0.f_3 = "v_studio_lo";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 160:
			uVar0 = { 108.2369f, -753.5364f, 233.1523f };
			uVar0.f_3 = "v_fib01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 161:
			uVar0 = { 135.3226f, -746.3677f, 253.1523f };
			uVar0.f_3 = "v_fib03";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 162:
			uVar0 = { 108.2572f, -753.5342f, 44.7548f };
			uVar0.f_3 = "v_office_lobby";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 163:
			uVar0 = { 228.6161f, -992.053f, -99.9999f };
			uVar0.f_3 = "heist_dlc_garage_high_new";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 164:
			uVar0 = { 575f, 4750f, -60f };
			uVar0.f_3 = "xm_v_apart_midspaz";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 165:
			uVar0 = { 600f, 4750f, -60f };
			uVar0.f_3 = "xm_v_studio_lo";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 166:
			uVar0 = { 630f, 4750f, -60f };
			uVar0.f_3 = "xm_v_garagem";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 167:
			uVar0 = { 1257f, 4796.7f, -39.1f };
			uVar0.f_3 = "xm_x17dlc_int_tun_entry";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 168:
			uVar0 = { 694.4f, 5898.9f, -152.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_straight";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 169:
			uVar0 = { 1121.8f, 5516.3f, -101.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_straight";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 170:
			uVar0 = { 1279.6f, 5233.2f, -80.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_straight";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 171:
			uVar0 = { 1158.6f, 5467.1f, -101.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 172:
			uVar0 = { 705.9f, 5838.5f, -152.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 173:
			uVar0 = { 1316.5f, 5184f, -80.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 174:
			uVar0 = { 1248f, 5276.1f, -80.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 175:
			uVar0 = { 1090.2f, 5559.2f, -101.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 176:
			uVar0 = { 1261f, 4808.6f, -39.3f };
			uVar0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 177:
			uVar0 = { 721.8f, 5781.4f, -146.7f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_r";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 178:
			uVar0 = { 780.8f, 5703.4f, -136.7f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_r";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 179:
			uVar0 = { 868.1f, 5659.2f, -126.7f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_r";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 180:
			uVar0 = { 1218.2f, 5321.2f, -85.7f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_r";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 181:
			uVar0 = { 1278.5f, 4859.7f, -44.7f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_r";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 182:
			uVar0 = { 1187.2f, 5419.8f, -96.4f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_l";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 183:
			uVar0 = { 1344.7f, 5136.4f, -75.4f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_l";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 184:
			uVar0 = { 1363.4f, 5039.5f, -65.4f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_l";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 185:
			uVar0 = { 1049.3f, 5602.1f, -107.4f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_l";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 186:
			uVar0 = { 1337.8f, 4944.3f, -55.4f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_l";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 187:
			uVar0 = { 961.5f, 5646.9f, -117.4f };
			uVar0.f_3 = "xm_x17dlc_int_tun_30d_l";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 188:
			uVar0 = { 345.0041f, 4842.001f, -59.9997f };
			uVar0.f_3 = "xm_x17dlc_int_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 189:
			uVar0 = { 279.9322f, -1337.4902f, 23.7419f };
			uVar0.f_3 = "v_coroner";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 190:
			uVar0 = { -1604.6643f, -3012.5828f, -79.9999f };
			uVar0.f_3 = "ba_dlc_int_01_ba";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 191:
		case 212:
			uVar0 = { -1505.783f, -3012.5867f, -79.9999f };
			uVar0.f_3 = "ba_dlc_int_02_ba";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 192:
			uVar0 = { -630.4205f, -236.7843f, 37.057f };
			uVar0.f_3 = "V_JEWEL2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 193:
			uVar0 = { 2800f, -3800f, 100f };
			uVar0.f_3 = "xs_x18_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 194:
			uVar0 = { 2800f, -3942f, 182.5f };
			uVar0.f_3 = "xs_arena_vip";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 195:
			uVar0 = { 1049.6f, -3196.6f, -38.5f };
			uVar0.f_3 = "bkr_biker_dlc_int_ware02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 223:
			uVar0 = { 2920f, 4470f, -100f };
			uVar0.f_3 = "sf_dlc_warehouse_sec";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 196:
			uVar0 = { 1093.6f, -3196.6f, -38.5f };
			uVar0.f_3 = "bkr_biker_dlc_int_ware03";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 197:
			uVar0 = { 1009.5f, -3196.6f, -38.5f };
			uVar0.f_3 = "bkr_biker_dlc_int_ware01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 198:
			uVar0 = { 1100f, 245f, -49f };
			uVar0.f_3 = "vw_dlc_casino_main";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 199:
			uVar0 = { 1380f, 200f, -50f };
			uVar0.f_3 = "vw_dlc_casino_carpark";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 200:
			uVar0 = { 976.6364f, 70.29476f, 115.16413f };
			uVar0.f_3 = "vw_dlc_casino_apart";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 201:
			uVar0 = { 1295f, 230f, -50f };
			uVar0.f_3 = "vw_dlc_casino_garage";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 202:
			uVar0 = { 2479.3f, -273.9f, -58f };
			uVar0.f_3 = "ch_DLC_Casino_Heist";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 203:
			uVar0 = { 2730f, -380f, -49f };
			uVar0.f_3 = "ch_DLC_Arcade";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 204:
			uVar0 = { 2800f, -380f, -48.5f };
			uVar0.f_3 = "ch_DLC_Plan";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 205:
			uVar0 = { 2497.7f, -312.8f, -69.9f };
			uVar0.f_3 = "ch_DLC_Tunnel";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 206:
			uVar0 = { 2523.4f, -270f, -58.7f };
			uVar0.f_3 = "ch_DLC_Casino_Back";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 207:
			uVar0 = { 2504.4f, -257.2f, -39.1f };
			uVar0.f_3 = "ch_DLC_Casino_Hotel";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 208:
			uVar0 = { 2554f, -281.4f, -64.7f };
			uVar0.f_3 = "ch_DLC_Casino_Loading";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 209:
			uVar0 = { 2488.3f, -267.4f, -70.6f };
			uVar0.f_3 = "ch_DLC_Casino_Vault";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 210:
			uVar0 = { 2519.9f, -255.3f, -24.1f };
			uVar0.f_3 = "ch_DLC_Casino_Utility";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 211:
			uVar0 = { 2572.9f, -253.4f, -64.7f };
			uVar0.f_3 = "ch_dlc_casino_shaft";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 213:
			uVar0 = { 1103.5624f, -3000f, -40f };
			uVar0.f_3 = "gr_grdlc_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 214:
			uVar0 = { 1210f, 1857f, -50f };
			uVar0.f_3 = "tr_Tuner_MethLab_1";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 215:
			uVar0 = { 1569f, -2130f, -50f };
			uVar0.f_3 = "tr_Tuner_MethLab_1";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 216:
			uVar0 = { 839f, 2176f, -50f };
			uVar0.f_3 = "tr_Tuner_MethLab_1";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 217:
			uVar0 = { 982f, -143f, -50f };
			uVar0.f_3 = "tr_Tuner_MethLab_1";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 218:
			uVar0 = { -2000f, 1113.4f, 25.7f };
			uVar0.f_3 = "tr_tuner_car_meet";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 219:
			uVar0 = { -1350f, 160f, -99.2f };
			uVar0.f_3 = "tr_tuner_mod_garage";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 220:
			uVar0 = { 1.1f, -705.6f, 16.1f };
			uVar0.f_3 = "finbank";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 221:
			uVar0 = { -1010f, -70f, -99.4f };
			uVar0.f_3 = "sf_dlc_studio_sec";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 222:
			uVar0 = { 1550f, 250f, -50f };
			uVar0.f_3 = "h4_dlc_int_02_h4";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 224:
			uVar0 = { -935.7f, -2992.2f, 13.9f };
			uVar0.f_3 = "v_hanger";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 225:
			uVar0 = { 730f, -2990f, -39f };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 226:
			uVar0 = { 152.3f, -1004.4f, -97.8f };
			uVar0.f_3 = "v_motel_mp";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 227:
			uVar0 = { 170f, 5190f, 10f };
			uVar0.f_3 = "xs_x18_int_mod2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 228:
			uVar0 = { 850f, -3000f, -50f };
			uVar0.f_3 = "reh_dlc_int_04_sum2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 229:
			uVar0 = { 495f, -2560f, -50f };
			uVar0.f_3 = "xm3_DLC_INT_04_xm3";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 230:
			uVar0 = { 570f, -415.1f, -69.6f };
			uVar0.f_3 = "xm3_DLC_INT_03_xm3";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 231:
			uVar0 = { 984.4f, -95.4f, 76.8f };
			uVar0.f_3 = "bkr_biker_dlc_int_03";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 232:
			uVar0 = { -880f, -2770f, -49f };
			uVar0.f_3 = "M23_1_dlc_int_01_M23_1";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 233:
			uVar0 = { 800f, -3000f, -69f };
			uVar0.f_3 = "reh_dlc_int_03_sum2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 234:
			uVar0 = { 930.1f, -2269.9f, -50.4f };
			uVar0.f_3 = "m23_2_int_counterfeit";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 235:
			uVar0 = { 930.1f, -2240.1f, -50.4f };
			uVar0.f_3 = "m23_2_int_counterfeit";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 236:
			uVar0 = { 930.1f, -2213.2f, -50.4f };
			uVar0.f_3 = "m23_2_int_counterfeit";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 237:
			uVar0 = { 930.1f, -2183.4f, -50.4f };
			uVar0.f_3 = "m23_2_int_counterfeit";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 238:
			uVar0 = { 1000f, -2200f, -50f };
			uVar0.f_3 = "m23_2_dlc_int_warehouse2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 239:
			uVar0 = { 1000f, -2230f, -50f };
			uVar0.f_3 = "m23_2_dlc_int_warehouse2";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 240:
			uVar0 = { 1220f, -2280f, -49f };
			uVar0.f_3 = "m23_2_int_warehouse";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 241:
			uVar0 = { -1421.0149f, -3012.5867f, -80f };
			uVar0.f_3 = "ba_dlc_int_03_ba";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 242:
			uVar0 = { -2000f, 1113.2f, 27.6f };
			uVar0.f_3 = "tr_tuner_car_meet";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 243:
			uVar0 = { Global_4718592.f_238097[0 /*160*/].f_16 };
			uVar0.f_3 = func_129(&Global_4718592.f_238097[0 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 244:
			uVar0 = { Global_4718592.f_238097[1 /*160*/].f_16 };
			uVar0.f_3 = func_129(&Global_4718592.f_238097[1 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 245:
			uVar0 = { Global_4718592.f_238097[2 /*160*/].f_16 };
			uVar0.f_3 = func_129(&Global_4718592.f_238097[2 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 246:
			uVar0 = { Global_4718592.f_238097[3 /*160*/].f_16 };
			uVar0.f_3 = func_129(&Global_4718592.f_238097[3 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 247:
			uVar0 = { Global_4718592.f_238097[4 /*160*/].f_16 };
			uVar0.f_3 = func_129(&Global_4718592.f_238097[4 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 248:
			uVar0 = { -196.14f, -580.65f, 135f };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = "imp_dt1_02_cargarage_a";
			break;
	}

	switch (iParam0)
	{
		case 249:
			uVar0 = { -24.4f, -73.8f, -75f };
			uVar0.f_3 = "m25_1_int_tycoon_studio_lo";
			uVar0.f_4 = "m25_1_int_tycoon_studio_lo";
			break;
	
		case 250:
			uVar0 = { 60.37f, -80.918f, -75f };
			uVar0.f_3 = "m25_1_int_tycoon_studio_mid";
			uVar0.f_4 = "m25_1_int_tycoon_studio_mid";
			break;
	}

	func_128(uVar0);
	return uVar0;
}

bool func_128(float fParam0, var uParam1, var uParam2) // Position - 0x928C
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

char* func_129(char* sParam0) // Position - 0x92B6
{
	return sParam0;
}

struct<6> func_130(int iParam0, bool bParam1) // Position - 0x92C0
{
	var uVar0;

	switch (iParam0)
	{
		case -1:
			uVar0 = { -794.9184f, 339.6266f, 200.4135f };
			uVar0.f_3 = { 0f, 0f, 180f };
			break;
	
		case 1:
			uVar0 = { -794.9184f, 339.6266f, 200.4135f };
			uVar0.f_3 = { 0f, 0f, 180f };
			break;
	
		case 2:
			uVar0 = { -761.0982f, 317.6259f, 169.59628f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			uVar0 = { -761.1888f, 317.6295f, 216.0503f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			uVar0 = { -795.3856f, 340.0188f, 152.7941f };
			uVar0.f_3 = { 0f, 0f, 179.99997f };
			break;
	
		case 61:
			uVar0 = { -778.5056f, 332.3779f, 212.1968f };
			uVar0.f_3 = { 0f, 0f, 90f };
			break;
	
		case 5:
			uVar0 = { -258.1807f, -950.6853f, 70.0239f };
			uVar0.f_3 = { 0f, 0f, 70f };
			break;
	
		case 6:
			uVar0 = { -285.0051f, -957.6552f, 85.3035f };
			uVar0.f_3 = { 0f, 0f, -109.99999f };
			break;
	
		case 7:
			uVar0 = { -1471.8821f, -530.7484f, 62.34918f };
			uVar0.f_3 = { 0f, 0f, -145f };
			break;
	
		case 34:
			uVar0 = { -1471.8821f, -530.7484f, 49.72156f };
			uVar0.f_3 = { 0f, 0f, -145f };
			break;
	
		case 62:
			uVar0 = { -1463.15f, -540.2369f, 74.2439f };
			uVar0.f_3 = { 0f, 0f, -145f };
			break;
	
		case 35:
			uVar0 = { -885.3702f, -451.4775f, 119.327f };
			uVar0.f_3 = { 0f, 0f, 27.55617f };
			break;
	
		case 36:
			uVar0 = { -913.0385f, -438.4284f, 114.39966f };
			uVar0.f_3 = { 0f, 0f, -153.30931f };
			break;
	
		case 37:
			uVar0 = { -892.5499f, -430.4789f, 88.25368f };
			uVar0.f_3 = { 0f, 0f, 116.9193f };
			break;
	
		case 38:
			uVar0 = { -35.0462f, -576.317f, 82.90739f };
			uVar0.f_3 = { 0f, 0f, 160f };
			break;
	
		case 39:
			uVar0 = { -10.3788f, -590.7431f, 93.02542f };
			uVar0.f_3 = { 0f, 0f, 70f };
			break;
	
		case 65:
			uVar0 = { -22.2487f, -589.1461f, 80.2305f };
			uVar0.f_3 = { 0f, 0f, 69.88f };
			break;
	
		case 40:
			uVar0 = { -900.6311f, -376.7462f, 78.27306f };
			uVar0.f_3 = { 0f, 0f, 26.92611f };
			break;
	
		case 41:
			uVar0 = { -929.483f, -374.5104f, 102.23286f };
			uVar0.f_3 = { 0f, 0f, -152.55307f };
			break;
	
		case 63:
			uVar0 = { -914.4202f, -375.8189f, 114.4743f };
			uVar0.f_3 = { 0f, 0f, -63f };
			break;
	
		case 42:
			uVar0 = { -617.1647f, 64.6042f, 100.8196f };
			uVar0.f_3 = { 0f, 0f, 180f };
			break;
	
		case 43:
			uVar0 = { -584.2015f, 42.7133f, 86.4187f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			uVar0 = { -609.5665f, 50.2203f, 98.3998f };
			uVar0.f_3 = { 0f, 0f, -90f };
			break;
	
		case 73:
			uVar0 = { -171.3969f, 494.2671f, 134.4935f };
			uVar0.f_3 = { 0f, 0f, 11f };
			break;
	
		case 74:
			uVar0 = { 339.4982f, 434.0887f, 146.2206f };
			uVar0.f_3 = { 0f, 0f, -63.5f };
			break;
	
		case 75:
			uVar0 = { -761.3884f, 615.7333f, 140.9805f };
			uVar0.f_3 = { 0f, 0f, -71.5f };
			break;
	
		case 76:
			uVar0 = { -678.1752f, 591.0076f, 142.2196f };
			uVar0.f_3 = { 0f, 0f, 40.5f };
			break;
	
		case 77:
			uVar0 = { 120.0541f, 553.793f, 181.0943f };
			uVar0.f_3 = { 0f, 0f, 6f };
			break;
	
		case 78:
			uVar0 = { -571.4039f, 655.2008f, 142.6293f };
			uVar0.f_3 = { 0f, 0f, -14.5f };
			break;
	
		case 79:
			uVar0 = { -742.2565f, 587.6547f, 143.0577f };
			uVar0.f_3 = { 0f, 0f, -29f };
			break;
	
		case 80:
			uVar0 = { -857.2222f, 685.051f, 149.6502f };
			uVar0.f_3 = { 0f, 0f, 4.5f };
			break;
	
		case 81:
			uVar0 = { -1287.6498f, 443.2707f, 94.6919f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 82:
			uVar0 = { 374.2012f, 416.9688f, 142.6977f };
			uVar0.f_3 = { 0f, 0f, -14f };
			break;
	
		case 83:
			uVar0 = { -787.7805f, 334.9232f, 186.1134f };
			uVar0.f_3 = { 0f, 0f, 90f };
			break;
	
		case 84:
			uVar0 = { -787.7805f, 334.9232f, 215.8384f };
			uVar0.f_3 = { 0f, 0f, 90f };
			break;
	
		case 85:
			uVar0 = { -773.2258f, 322.8252f, 194.8862f };
			uVar0.f_3 = { 0f, 0f, -90f };
			break;
	
		case 86:
			uVar0 = { -1573.0981f, -4085.806f, 9.7851f };
			uVar0.f_3 = { 0f, 0f, 162f };
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			uVar0 = { 342.8157f, -997.4288f, -100f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			uVar0 = { 260.3297f, -997.4288f, -100f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 87:
			uVar0 = { -1572.1869f, -570.8315f, 109.9879f };
			uVar0.f_3 = { 0f, 0f, -54f };
			break;
	
		case 88:
			uVar0 = { -1383.9543f, -476.7112f, 73.507f };
			uVar0.f_3 = { 0f, 0f, 8f };
			break;
	
		case 89:
			uVar0 = { -138.0029f, -629.739f, 170.2854f };
			uVar0.f_3 = { 0f, 0f, -84f };
			break;
	
		case 90:
			uVar0 = { -74.8895f, -817.6883f, 244.8508f };
			uVar0.f_3 = { 0f, 0f, 70f };
			break;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			uVar0 = { 1100.7644f, -3159.384f, -34.9342f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			uVar0 = { 1005.806f, -3157.6702f, -36.0897f };
			uVar0.f_3 = { 0f, 0f, 0f };
			break;
	
		case 103:
			if (!bParam1)
			{
				uVar0 = { -1576.5712f, -569.7595f, 85.5f };
				uVar0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				uVar0 = { -1578.0225f, -576.4251f, 104.2f };
				uVar0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 104:
			if (!bParam1)
			{
				uVar0 = { -1571.2538f, -566.5865f, 85.5f };
				uVar0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				uVar0 = { -1578.0225f, -576.4251f, 104.2f };
				uVar0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 105:
			if (!bParam1)
			{
				uVar0 = { -1568.0984f, -571.9171f, 85.5f };
				uVar0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				uVar0 = { -1578.0225f, -576.4251f, 104.2f };
				uVar0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 106:
			if (!bParam1)
			{
				uVar0 = { -1384.5178f, -475.8657f, 56.1f };
				uVar0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				uVar0 = { -1391.245f, -473.9638f, 77.2f };
				uVar0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 107:
			if (!bParam1)
			{
				uVar0 = { -1384.5383f, -475.8829f, 48.1f };
				uVar0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				uVar0 = { -1391.245f, -473.9638f, 77.2f };
				uVar0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 108:
			if (!bParam1)
			{
				uVar0 = { -1378.9939f, -477.2481f, 56.1f };
				uVar0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				uVar0 = { -1391.245f, -473.9638f, 77.2f };
				uVar0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 109:
			if (!bParam1)
			{
				uVar0 = { -186.5683f, -576.4624f, 135f };
				uVar0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				uVar0 = { -146.6167f, -596.6301f, 166f };
				uVar0.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 110:
			if (!bParam1)
			{
				uVar0 = { -113.886f, -564.3862f, 135f };
				uVar0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				uVar0 = { -146.6167f, -596.6301f, 166f };
				uVar0.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 111:
			if (!bParam1)
			{
				uVar0 = { -134.6568f, -635.1774f, 135f };
				uVar0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				uVar0 = { -146.6167f, -596.6301f, 166f };
				uVar0.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 112:
			if (!bParam1)
			{
				uVar0 = { -79.0479f, -822.6393f, 221f };
				uVar0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				uVar0 = { -73.904f, -821.6204f, 284f };
				uVar0.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 113:
			if (!bParam1)
			{
				uVar0 = { -70.3086f, -819.5784f, 221f };
				uVar0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				uVar0 = { -73.904f, -821.6204f, 284f };
				uVar0.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 114:
			if (!bParam1)
			{
				uVar0 = { -79.9861f, -818.425f, 221f };
				uVar0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				uVar0 = { -73.904f, -821.6204f, 284f };
				uVar0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}

	return uVar0;
}

bool func_131(int iParam0) // Position - 0x9E76
{
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_96414[iParam0 /*2*/])
		return true;

	for (iVar0 = 0; iVar0 < Global_93181; iVar0 = iVar0 + 1)
	{
		if (Global_93181[iVar0 /*5*/] != -1)
			if (Global_80576.f_109[Global_93181[iVar0 /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

bool func_132(int iParam0) // Position - 0x9EDE
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

Vector3 func_133(var uParam0) // Position - 0x9F0A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

bool func_134() // Position - 0x9F1D
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

bool func_135() // Position - 0x9F37
{
	return MISC::GET_GAME_TIMER() <= Global_24546.f_6481 + 100;
}

bool func_136() // Position - 0x9F4C
{
	return IS_BIT_SET(Global_80554, 9);
}

bool func_137() // Position - 0x9F5B
{
	return IS_BIT_SET(Global_80554, 8);
}

bool func_138() // Position - 0x9F6A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
			return true;

	return false;
}

bool func_139() // Position - 0xA0FF
{
	int iVar0;

	if (func_145())
	{
		for (iVar0 = 0; iVar0 < 65; iVar0 = iVar0 + 1)
		{
			if (func_140(iVar0))
				return true;
		}
	}

	return false;
}

bool func_140(int iParam0) // Position - 0xA12F
{
	return func_141(iParam0, 20, true);
}

bool func_141(int iParam0, int iParam1, bool bParam2) // Position - 0xA140
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_102506.f_1442[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_143() == 0)
			return IS_BIT_SET(func_153(func_142(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114931.f_668[iParam0], iParam1);

	return false;
}

int func_142(int iParam0) // Position - 0xA1A0
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 14766;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		case 61:
			return 12447;
	
		case 62:
			return 14262;
	
		case 63:
			return 14263;
	
		case 64:
			return 14264;
	
		default:
			break;
	}

	return 18486;
}

int func_143() // Position - 0xA584
{
	return Global_33792;
}

bool func_144() // Position - 0xA58F
{
	return Global_102506.f_418 > 0;
}

bool func_145() // Position - 0xA5A0
{
	return Global_102506.f_417 > 0;
}

bool func_146(int iParam0, int iParam1) // Position - 0xA5B1
{
	return iParam0 && iParam1 != false;
}

bool func_147(bool bParam0) // Position - 0xA5C0
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

bool func_148() // Position - 0xA5E8
{
	return Global_102493.f_1;
}

bool func_149() // Position - 0xA5F6
{
	return Global_80573;
}

bool func_150() // Position - 0xA602
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

bool func_151() // Position - 0xA62C
{
	if (Global_44886 == 15)
		return false;

	return true;
}

bool func_152(int iParam0) // Position - 0xA641
{
	if (Global_24115 || Global_24114 || Global_24116)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_118[iParam0 /*10*/].f_8 != 198)
		if (Global_21627.f_1 == 10)
			if (Global_8778 == iParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

int func_153(int iParam0, int iParam1) // Position - 0xA6A5
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_154(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

var func_154(int iParam0, int iParam1) // Position - 0xA6D4
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_42(iParam1));
}

void func_155() // Position - 0xA6E9
{
	if (Global_80305 == false)
	{
		Global_9470[14 /*15*/].f_4 = -99;
		Global_9470[4 /*15*/].f_4 = -99;
	
		if (Global_2696976)
		{
			if (func_55(14))
			{
				func_32(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_32(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_32(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_32(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_156() // Position - 0xA777
{
	int iVar0;
	int iVar1;
	int iVar2;

	for (iVar0 = 0; iVar0 < 36; iVar0 = iVar0 + 1)
	{
		Global_9470[iVar0 /*15*/].f_4 = -99;
	}

	if (Global_80305 == false)
	{
		iVar1 = 0;
	
		while (iVar2 < 161)
		{
			if (func_158(iVar2, Global_21627) == 1)
				iVar1 = 1;
		
			iVar2 = iVar2 + 1;
		}
	
		func_32(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_32(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_32(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44886 == 15 && func_147(false) == false && Global_9468 == 0)
		{
			func_32(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21862 = 0;
			Global_9469 = 255;
		}
		else
		{
			func_32(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21862 = 1;
			Global_9469 = 42;
		}
	
		if (iVar1 == 1)
			func_32(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_32(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_32(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_32(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_32(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114931.f_14058.f_89 == true)
			func_32(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114931.f_14058.f_88 == 1)
			func_32(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_32(27, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_32(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_32(29, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(30, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(31, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_32(32, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(33, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(34, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_32(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
	
		if (func_33())
			func_32(23, "CELL_VINEWOOD" /* GXT: Vinewood Club */, 5, "appVinewoodMenu", 61, 1, 1, 0, 0);
		else
			func_32(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
	
		if (func_47())
			func_32(24, "CELL_HACKER_ROB" /* GXT: Darnell Inc. */, 3, "appHackerDen", 62, 1, 1, 0, 0);
		else
			func_32(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		func_32(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_32(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_32(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_32(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_32(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4524844, 4))
			func_32(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_32(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_32(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_32(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_32(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_32(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_32(25, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_32(26, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_32(27, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_32(28, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_32(29, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_32(30, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_32(31, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_32(32, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_32(33, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_32(34, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_32(35, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4524844, 4))
			if (Global_1836236)
				func_32(25, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524844, 20))
				func_32(25, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524844, 22))
				func_32(25, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524844, 26))
				if (func_157())
					func_32(25, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_32(25, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4524844, 4) == false && Global_1836236 == false && IS_BIT_SET(Global_4524844, 20) == false && IS_BIT_SET(Global_4524844, 22) == false && IS_BIT_SET(Global_4524844, 26) == false)
			if (func_157())
				func_32(25, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_32(25, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}
}

bool func_157() // Position - 0xAD60
{
	if (Global_80305)
		if (Global_1836644 || Global_1836645 == 1)
			return true;

	return false;
}

int func_158(int iParam0, int iParam1) // Position - 0xAD87
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

void func_159() // Position - 0xADB1
{
}

