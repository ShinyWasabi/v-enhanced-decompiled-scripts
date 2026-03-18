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
	int Static_16 = 0;
	char* Static_17 = 0;
	var Static_18 = 0;
	var Static_19 = 0;
	float Static_20 = 0f;
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	float Static_24 = 0f;
	float Static_25 = 0f;
	var Static_26 = 0;
	int Static_27 = 0;
	var Static_28 = 0;
	var Static_29 = 0;
	float Static_30 = 0f;
	float Static_31 = 0f;
	float Static_32 = 0f;
	var Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	var Static_37 = 0;
	int Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	int Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	float Static_48 = 0f;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	int Static_52 = 0;
	int Static_53 = 0;
	bool Static_54 = 0;
	bool Static_55 = 0;
	bool Static_56 = 0;
	bool Static_57 = 0;
	int Static_58 = 0;
	int Static_59 = 0;
	int Static_60 = 0;
	bool Static_61 = 0;
	bool Static_62 = 0;
	bool Static_63 = 0;
	bool Static_64 = 0;
	bool Static_65 = 0;
	bool Static_66 = 0;
	char* Static_67 = 0;
	float Static_68 = 0f;
	bool Static_69 = 0;
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
	Static_17 = "NULL";
	Static_20 = 0f;
	Static_24 = -0.0375f;
	Static_25 = 0.17f;
	Static_27 = 3;
	Static_30 = 80f;
	Static_31 = 140f;
	Static_32 = 180f;
	Static_38 = 1;
	Static_39 = 65;
	Static_40 = 49;
	Static_41 = 64;
	Static_58 = -1;
	Static_59 = -1;
	Static_68 = 0f;
	Static_69 = true;

	if (Global_80305)
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Static_53 = func_102();
	HUD::REQUEST_ADDITIONAL_TEXT("email", 1);

	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		BUILTIN::WAIT(0);
	}

	Global_24033 = false;
	Global_24034 = false;
	Global_21627.f_1 = 8;
	Global_24034 = true;
	Global_46120 = 1;

	if (Global_21609)
	{
		func_101(false);
		func_100(true);
		func_98(false);
	}

	BUILTIN::SETTIMERB(0);
	Static_45 = { Global_21580[Global_21572 /*3*/] };
	Static_48 = { Static_45 };
	Static_48 = Static_48 - 10f;
	Static_48.f_1 = Static_48.f_1 + 20f;

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21627.f_1 != 9)
		{
			if (Global_24034 && !Global_24033)
				func_96();
			else if (Global_24033)
				func_91();
		
			if (!Static_54)
			{
				Static_54 = true;
			}
			else if (Global_21609)
			{
				if (!Static_55)
				{
					Static_55 = true;
					func_89(Global_21608, Static_53);
					func_88(Global_21608, "SET_HEADER", "EM_INBOX" /* GXT: Inbox */, 0, 0, 0, 0);
					func_87(Global_21608, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_46121)
					{
						Global_46121 = false;
						Static_56 = true;
					}
				
					if (Static_56)
					{
						BUILTIN::SETTIMERA(0);
						BUILTIN::SETTIMERB(0);
					
						if (Static_58 == -1)
						{
							if (Static_69)
							{
								Static_69 = false;
								Static_68 = 0f;
							}
						
							func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_89(Global_21608, Static_53);
							func_88(Global_21608, "SET_HEADER", "EM_INBOX" /* GXT: Inbox */, 0, 0, 0, 0);
							Static_57 = false;
						
							if (iVar0 > 0)
								func_101(true);
							else
								func_101(false);
						
							func_100(true);
							func_98(false);
							func_87(Global_21608, "DISPLAY_VIEW", 8f, Static_68, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							BUILTIN::WAIT(0);
							func_87(Global_21608, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							BUILTIN::WAIT(0);
							func_100(true);
							func_86();
						
							if (Static_59 == -1)
							{
								func_84(Static_53, Static_58);
								func_79(Global_21608, Static_53, Static_58);
								Global_24060 = false;
								Static_66 = func_77(Static_53, Static_58);
							
								if (Static_66)
								{
									Static_67 = func_74(Static_53, Static_58);
								
									if (!func_73(37))
									{
										switch (func_71("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */))
										{
											case 2:
												func_68("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_67(37);
												break;
										}
									}
									else if (MISC::IS_PC_VERSION())
									{
										if (!IS_BIT_SET(Global_4524844, 17))
										{
											MISC::SET_BIT(&Global_4524844, 17);
											func_66("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */, -1);
										}
									}
								
									func_98(true);
								}
								else
								{
									if (!func_73(38))
									{
										switch (func_71("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */))
										{
											case 2:
												func_68("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_67(38);
												break;
										}
									}
								
									func_98(false);
								}
							
								func_87(Global_21608, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								BUILTIN::WAIT(0);
								func_87(Global_21608, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								BUILTIN::WAIT(0);
								func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_63(Global_21608, Static_53, Static_58);
								func_87(Global_21608, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
					
						Static_56 = false;
					}
					else
					{
						func_40();
					}
				}
			}
		
			if (!(Static_53 == func_102()))
			{
				Global_46120 = 0;
				func_4();
			}
		}
	
		if (func_3())
		{
			Global_24033 = false;
			Global_24034 = false;
			Global_46120 = 0;
			func_1(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0) // Position - 0x48F
{
	if (func_2())
		if (iParam0 == 1)
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(1);
		else if (Global_21627.f_1 > 3)
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(0);
}

bool func_2() // Position - 0x4BA
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

bool func_3() // Position - 0x501
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x544
{
	if (Global_55429 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_39(Global_55429));
		Global_55429 = -1;
	}

	Global_46120 = 0;

	if (Global_21627.f_1 > 4)
	{
		Global_21627.f_1 = 6;
		func_5();
	}

	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5() // Position - 0x57D
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
			func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_37(Global_10102);
		
			if (Global_10102 == 1)
			{
				func_87(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21631), -1082130432, -1082130432, -1082130432);
				Global_21607 = Global_21631;
			}
			else
			{
				func_87(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21632), -1082130432, -1082130432, -1082130432);
				Global_21607 = Global_21632;
			}
		
			if (Global_21615)
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21861 == 0)
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else if (Global_80305)
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else
			{
				if (Global_21860 == true)
					if (Global_21615)
						func_36(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					else
						func_36(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_21615)
					func_36(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				else
					func_36(Global_21608, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_9463, 17);
			}
		
			if (Global_80305)
			{
				Global_21607 = Global_21631;
			
				if (func_35() && IS_BIT_SET(Global_9465, 9))
					func_11(false);
			
				func_87(Global_21608, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
				func_87(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_87(Global_21608, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_36(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_36(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		
			if (IS_BIT_SET(Global_9463, 20))
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21615)
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
			
				if (Global_21570)
					func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_21626 == 1)
			{
				func_10();
				func_87(Global_21608, "SET_THEME", BUILTIN::TO_FLOAT(Global_114931.f_14058[Global_21627 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_23013)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23015);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_8(Global_8778, Global_21627) == 0)
				{
					func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2339[Global_8778 /*29*/].f_3), 0);
				}
			
				func_87(Global_21608, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_23000 == 4 || Global_23000 == 3)
			{
				func_87(Global_21608, "SET_THEME", BUILTIN::TO_FLOAT(Global_114931.f_14058[Global_21627 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
			
				if (Global_23013)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23015);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_23258)
						TEXT_LABEL_ASSIGN_STRING(&uVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uVar0, "CELL_211" /* GXT: DIALING... */, 24);
				
					if (func_8(Global_8778, Global_21627) == 0)
					{
						func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &uVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), &uVar0, &(Global_2339[Global_8778 /*29*/].f_3), 0);
					}
				}
			
				func_87(Global_21608, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_6();
			break;
	
		default:
			break;
	}
}

void func_6() // Position - 0xB69
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21608))
	{
		func_7();
	
		if (Global_21626 == 1)
		{
			if (Global_21615)
				func_36(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			else
				func_36(Global_21608, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_23047)
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_9463, 20))
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_21615)
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			else
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_36(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else
		{
			func_36(Global_21608, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_36(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		
			if (IS_BIT_SET(Global_9463, 20))
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21615)
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
			
				if (Global_21570)
					func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_36(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7() // Position - 0xCE7
{
	if (Global_80305)
	{
		func_36(Global_21608, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9463, 17);
	}
}

int func_8(int iParam0, int iParam1) // Position - 0xD17
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_9(char* sParam0) // Position - 0xD41
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10() // Position - 0xD53
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

void func_11(bool bParam0) // Position - 0xFCA
{
	int iVar0;

	MISC::SET_BIT(&Global_9465, 9);

	if (bParam0)
		func_87(Global_21608, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	func_34();
	func_33();

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		Global_10026[iVar0] = 0;
		Global_10064[iVar0] = 0;
	}

	if (func_30() && func_14())
	{
		func_12(21, "CELL_37" /* GXT: Quick Join */, 0, "AppJIPMP", 14);
		func_12(10, "CELL_16" /* GXT: Settings */, 1, "appSettings", 24);
	}
	else if (func_30() && !func_14())
	{
		func_12(21, "CELL_37" /* GXT: Quick Join */, 0, "AppJIPMP", 14);
	}
	else if (!func_30() && func_14())
	{
		func_12(10, "CELL_16" /* GXT: Settings */, 0, "appSettings", 24);
	}

	if (bParam0)
	{
		func_87(Global_21608, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
		func_87(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21607), -1082130432, -1082130432, -1082130432);
	}
}

void func_12(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4) // Position - 0x10E3
{
	func_13(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10064[iParam2] = 1;
	Global_10026[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_9(&Global_9470[iParam0 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_13(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1152
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

bool func_14() // Position - 0x1208
{
	return !(func_29() || NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_27() || func_15(false));
}

bool func_15(bool bParam0) // Position - 0x1234
{
	if (bParam0)
		return func_18();

	return func_16(func_17());
}

bool func_16(int iParam0) // Position - 0x1250
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_17() // Position - 0x1265
{
	return Global_1912540[PLAYER::PLAYER_ID() /*319*/].f_279;
}

bool func_18() // Position - 0x127B
{
	return func_25(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_24() != 0 && !func_19(0);
}

bool func_19(int iParam0) // Position - 0x12AB
{
	int iVar0;

	iVar0 = func_20(16738, -1);
	return IS_BIT_SET(iVar0, iParam0);
}

int func_20(int iParam0, int iParam1) // Position - 0x12C2
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

var func_21(int iParam0, int iParam1) // Position - 0x12F1
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_22(iParam1));
}

int func_22(int iParam0) // Position - 0x1306
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

int func_23() // Position - 0x133A
{
	return Global_1574927;
}

int func_24() // Position - 0x1346
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

bool func_25(int iParam0, int iParam1) // Position - 0x1352
{
	var uVar0;
	bool bVar1;

	uVar0 = func_26(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(uVar0, &bVar1, -1))
		return bVar1;

	return false;
}

var func_26(int iParam0, int iParam1) // Position - 0x1376
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_22(iParam1));
}

bool func_27() // Position - 0x138B
{
	return func_28(*Global_4718592.f_139000);
}

bool func_28(int iParam0) // Position - 0x13A1
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (Global_262145.f_31313[iVar0] == iParam0)
			return 1;
	}

	return 0;
}

bool func_29() // Position - 0x13D0
{
	return IS_BIT_SET(Global_1674270, 4);
}

bool func_30() // Position - 0x13DE
{
	return func_31() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

bool func_31() // Position - 0x13F4
{
	return func_32(9539, -1);
}

bool func_32(int iParam0, int iParam1) // Position - 0x1404
{
	if (iParam1 == -1)
		iParam1 = func_23();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_33() // Position - 0x1420
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		Global_10064[iVar0] = 0;
	}
}

void func_34() // Position - 0x1443
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_9(&Global_9470[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	func_87(Global_21608, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_87(Global_21608, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

bool func_35() // Position - 0x14D2
{
	if (func_14())
		return true;

	if (func_30())
		return true;

	return false;
}

void func_36(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x14F1
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

void func_37(int iParam0) // Position - 0x15A4
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
	func_33();

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		iVar1 = 0;
	
		if (func_38(14))
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
								func_9(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696976)
								if (iVar1 == 14)
									func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24063), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
						
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
							
								func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24069), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
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
								
									func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(iVar4), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
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
								
									func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(iVar6), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24063), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&Global_9470[iVar1 /*15*/]);
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
								func_9(&Global_9470[iVar1 /*15*/]);
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
								func_9(&Global_9470[iVar1 /*15*/]);
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
								func_9(&Global_9470[iVar1 /*15*/]);
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
								func_9(&Global_9470[iVar1 /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9470[iVar1 /*15*/].f_10 == 57 && iVar1 == 25)
							{
								iVar9 = 0;
								iVar9 = Global_1882126.f_1;
								func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(iVar9), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_36(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(iVar0), BUILTIN::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_9470[iVar1 /*15*/], 0, 0, 0, 0);
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

bool func_38(int iParam0) // Position - 0x1B1E
{
	return Global_44886 == iParam0;
}

char* func_39(int iParam0) // Position - 0x1B2C
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
	
		case 1:
			return "Epsilon_Cars";
	
		case 2:
			return "Epsilon_Cars";
	
		case 3:
			return "Epsilon_Cars";
	
		case 4:
			return "Epsilon_Cars";
	
		case 5:
			return "Epsilon_Cars";
	
		case 6:
			return "Epsilon_Cars";
	
		case 12:
			return "Assassinations";
	
		case 13:
			return "Assassinations";
	
		case 14:
			return "Assassinations";
	
		case 15:
			return "Assassinations";
	
		case 64:
			return "BSPBadHacker";
	
		case 65:
			return "BPDGoodHacker";
	
		case 66:
			return "BPSMedHacker";
	
		case 75:
			return "email_quarry_bail_bond";
	
		case 76:
			return "email_abandonedfarm_bail_bond";
	
		case 77:
			return "email_mountain_bail_bond";
	
		case 78:
			return "email_hobocamp_bail_bond";
	
		case 80:
			return "email_quarry_bail_bond";
	
		case 81:
			return "email_abandonedfarm_bail_bond";
	
		case 82:
			return "email_mountain_bail_bond";
	
		case 83:
			return "email_hobocamp_bail_bond";
	
		case 205:
			return "hush_foxymama21";
	
		case 209:
			return "hush_alterego";
	
		case 212:
			return "hush_michael";
	
		case 238:
			return "hush_trevor";
	
		default:
		
	}

	return "NULL";
}

void func_40() // Position - 0x1C8F
{
	bool bVar0;

	if (Global_24060)
	{
		Static_58 = 0;
		Static_68 = BUILTIN::TO_FLOAT(Static_58);
	
		if (func_62(Static_53) == 0)
			Static_58 = -1;
	
		if (!(Static_58 == -1))
		{
			Global_21627.f_1 = 8;
			Static_56 = true;
			BUILTIN::SETTIMERB(0);
			func_60();
		}
	
		return;
	}

	if (func_59())
		return;

	if (Global_24033)
		return;

	if (!Static_62)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 172) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			Static_62 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
			BUILTIN::SETTIMERA(0);
			Static_69 = true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_CONTROL_PRESSED(2, 181))
	{
		if (BUILTIN::TIMERA() > 100 && Static_58 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			BUILTIN::SETTIMERA(0);
			Static_69 = true;
		}
	}
	else
	{
		Static_62 = false;
	}

	if (!Static_63)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 173) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			Static_63 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
			BUILTIN::SETTIMERB(0);
			Static_69 = true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_CONTROL_PRESSED(2, 180))
	{
		if (BUILTIN::TIMERB() > 100 && Static_58 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			BUILTIN::SETTIMERB(0);
			Static_69 = true;
		}
	}
	else
	{
		Static_63 = false;
	}

	if (!Static_64)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 174))
		{
			Static_64 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 174))
	{
		Static_64 = false;
	}

	if (!Static_65)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 175))
		{
			Static_65 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21616, 1);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, 175))
	{
		Static_65 = false;
	}

	if (!Static_61)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 176) && BUILTIN::TIMERB() > 100)
		{
			if (Static_58 == -1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "GET_CURRENT_SELECTION");
				Static_51 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(Static_51))
				{
					BUILTIN::WAIT(0);
				}
			
				Static_52 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(Static_51);
				Static_58 = Static_52;
			
				if (func_62(Static_53) == 0)
					Static_58 = -1;
			
				if (!(Static_58 == -1))
				{
					if (Static_69 == true)
					{
						Static_68 = BUILTIN::TO_FLOAT(Static_58);
						Static_69 = false;
					}
				
					Global_21627.f_1 = 8;
					Static_56 = true;
					BUILTIN::SETTIMERB(0);
					func_60();
				}
			}
			else if (Static_59 == -1)
			{
				if (func_57(Static_53, Static_58) && !Static_57)
				{
					Static_59 = 0;
					Static_56 = true;
					BUILTIN::SETTIMERB(0);
					func_60();
				}
			}
			else
			{
				Static_59 = 0;
				func_45(Static_53, Static_58, Static_59);
				Static_57 = true;
				Static_59 = -1;
				Static_56 = true;
				func_60();
				BUILTIN::SETTIMERB(0);
			}
		
			Static_61 = true;
		}
	}
	else
	{
		Static_61 = false;
	}

	if (BUILTIN::TIMERB() > 100)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 177))
		{
			bVar0 = false;
		
			if (Static_60 == 0)
			{
				if (!(Static_58 == -1))
				{
					if (Static_59 == -1)
					{
						Static_58 = BUILTIN::ROUND(Static_68);
						Static_66 = false;
						BUILTIN::SETTIMERB(0);
						bVar0 = true;
						func_44();
					}
					else
					{
						BUILTIN::SETTIMERB(0);
						Static_59 = -1;
						func_44();
					}
				
					Static_56 = true;
				}
				else
				{
					if (func_71("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */) == 0)
						func_67(37);
				
					if (func_71("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */) == 0)
						func_67(38);
				
					if (Global_24034 == false && !Global_24033)
					{
						func_44();
						Global_24033 = true;
						Global_46120 = 0;
					}
				}
			
				Static_60 = 1;
			}
		
			if (bVar0)
				Static_58 = -1;
		}
		else
		{
			Static_60 = 0;
		}
	}

	if (PAD::IS_CONTROL_PRESSED(2, 179))
	{
		if (Static_66)
		{
			if (func_71("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */) == 0)
				func_67(37);
		
			if (func_71("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */) == 0)
				func_67(38);
		
			TEXT_LABEL_ASSIGN_STRING(&Global_77342, Static_67, 64);
			func_41(7, 0);
			Static_66 = false;
			func_60();
		}
	}
}

void func_41(int iParam0, int iParam1) // Position - 0x2073
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	Global_77473 = iParam0;
	bVar0 = iParam1 == 1;
	bVar1 = iParam1 == 2;
	bVar2 = iParam1 == 3;

	switch (Global_77473)
	{
		case 3:
			Global_77471 = 0;
			break;
	
		case 4:
			Global_77471 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPSECUROSERV")) > 0)
	{
		if (bVar0)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPBIKERBUSINESS")) > 0)
	{
		if (bVar1)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPIMPORTEXPORT")) > 0)
	{
		if (bVar2)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPINTERNET")) > 0)
	{
		if (bVar0 || bVar1 || bVar2)
		{
		}
	
		return;
	}

	if (Global_80305 && func_43())
		return;

	if (!Global_80305 && func_42())
		return;

	if (Global_80305)
	{
		Global_77324 = iParam1;
	}
	else if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
			SCRIPT::REQUEST_SCRIPT("appImportExport");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
			SCRIPT::REQUEST_SCRIPT("appInternet");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appInternet", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}
}

bool func_42() // Position - 0x2267
{
	return Global_77360;
}

bool func_43() // Position - 0x2273
{
	return Global_1935999;
}

void func_44() // Position - 0x227F
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21616, 1);
}

void func_45(int iParam0, int iParam1, int iParam2) // Position - 0x22A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 < -1 && iVar0 > 3)
		return;

	for (iVar1 = Global_55068[iVar0 /*120*/] - 1 - iParam1; iVar1 >= 16; iVar1 = iVar1 - 16)
	{
	}

	iVar2 = iVar1;
	iVar3 = Global_55068[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_55068[iVar0 /*120*/].f_1[iVar2];

	if (iVar4 < 0 || iVar3 < 0 || !(iVar4 < 9) || !(iVar3 < 122))
		return;

	iVar5 = Global_49455[iVar3 /*46*/].f_32[iVar4];

	if (Global_46130[iVar5 /*12*/].f_4 == 0)
		return;

	Global_55068[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_55068[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_46(iVar3, iParam2);
}

void func_46(int iParam0, int iParam1) // Position - 0x239B
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!Global_49455[iParam0 /*46*/] && !Global_49455[iParam0 /*46*/].f_1)
		return;

	iVar0 = Global_49455[iParam0 /*46*/].f_42 - 1;

	if (iVar0 < 0)
		return;

	iVar1 = Global_49455[iParam0 /*46*/].f_32[iVar0];

	if (!(iParam1 < Global_46130[iVar1 /*12*/].f_4))
		return;

	iVar2 = Global_46130[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;

	if (Global_49455[iParam0 /*46*/].f_31 < Global_49455[iParam0 /*46*/].f_30 - 1)
	{
		iVar4 = Global_49455[iParam0 /*46*/].f_8[Global_49455[iParam0 /*46*/].f_31];
	
		if (iVar2 == iVar4)
			bVar3 = true;
	}

	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_56(iParam0, iVar2);
			iVar5 = Global_49455[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_46130[iVar2 /*12*/].f_2;
		
			for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1)
			{
				if (!(iVar6 == iVar7))
					func_50(Global_49455[iParam0 /*46*/].f_3[iVar6], iParam0, false, false, false);
			}
		}
	}

	if (Global_46130[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
		func_47(Global_46130[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, false);

	if (Global_46130[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_49455[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_49455[iParam0 /*46*/].f_45 = Global_46130[iVar2 /*12*/].f_10;
		Global_49455[iParam0 /*46*/].f_43 = Global_46130[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_49455[iParam0 /*46*/].f_45 = 0;
	}

	if (Global_49455[iParam0 /*46*/].f_43 < 30000)
		Global_49455[iParam0 /*46*/].f_43 = 30000;
}

void func_47(int iParam0, bool bParam1) // Position - 0x253E
{
	Global_46121 = true;

	if (!Global_49455[iParam0 /*46*/] && !Global_49455[iParam0 /*46*/].f_1)
	{
		Global_49455[iParam0 /*46*/] = true;
		func_49(iParam0, bParam1);
	}
	else
	{
		func_48(iParam0);
		func_47(iParam0, bParam1);
	}
}

void func_48(int iParam0) // Position - 0x2585
{
	Global_49455[iParam0 /*46*/] = false;
	Global_49455[iParam0 /*46*/].f_31 = 0;
	Global_49455[iParam0 /*46*/].f_42 = 0;
	Global_49455[iParam0 /*46*/].f_45 = 0;
	Global_49455[iParam0 /*46*/].f_43 = 0;
	Global_49455[iParam0 /*46*/].f_1 = 0;
}

void func_49(int iParam0, bool bParam1) // Position - 0x25C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!Global_49455[iParam0 /*46*/] && !Global_49455[iParam0 /*46*/].f_1)
		return;

	if (Global_49455[iParam0 /*46*/].f_31 == Global_49455[iParam0 /*46*/].f_30)
	{
		iVar0 = Global_49455[iParam0 /*46*/].f_42 - 1;
	
		if (iVar0 < 0)
			return;
	
		if (Global_46130[Global_49455[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
			Global_49455[iParam0 /*46*/].f_1 = 1;
	
		return;
	}

	if (Global_49455[iParam0 /*46*/].f_1)
		return;

	iVar1 = Global_49455[iParam0 /*46*/].f_8[Global_49455[iParam0 /*46*/].f_31];
	Global_49455[iParam0 /*46*/].f_31 = Global_49455[iParam0 /*46*/].f_31 + 1;
	func_56(iParam0, iVar1);
	Global_49455[iParam0 /*46*/].f_45 = Global_46130[iVar1 /*12*/].f_10;
	Global_49455[iParam0 /*46*/].f_43 = Global_46130[iVar1 /*12*/].f_11;
	iVar2 = Global_49455[iParam0 /*46*/].f_2;
	func_50(Global_46130[iVar1 /*12*/].f_3, iParam0, false, false, bParam1);

	for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1)
	{
		if (Global_49455[iParam0 /*46*/].f_3[iVar3] != Global_46130[iVar1 /*12*/].f_2 && Global_49455[iParam0 /*46*/].f_3[iVar3] != Global_46130[iVar1 /*12*/].f_3)
			func_50(Global_49455[iParam0 /*46*/].f_3[iVar3], iParam0, false, false, bParam1);
	}

	if (Global_49455[iParam0 /*46*/].f_31 == Global_49455[iParam0 /*46*/].f_30)
	{
		if (Global_46130[Global_49455[iParam0 /*46*/].f_32[Global_49455[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0)
		{
			Global_49455[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_50(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) // Position - 0x2763
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!(iParam0 < 3))
		return;

	iVar0 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uVar3, "UNSET", 64);

	if (!bParam2)
	{
		iVar19 = Global_49455[iParam1 /*46*/].f_42 - 1;
	
		if (iVar19 < 0)
			return;
	
		iVar20 = Global_49455[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		uVar3 = { func_55(Global_46130[iVar20 /*12*/].f_1) };
	
		if (Global_46130[iVar20 /*12*/].f_2 == iParam0 && !(Global_46130[iVar20 /*12*/].f_3 == iParam0))
			return;
	
		iVar1 = Global_46130[iVar20 /*12*/].f_2;
		iVar0 = Global_55068[iParam0 /*120*/];
	
		for (bVar21 = false; iVar0 >= 16; bVar21 = true)
		{
			iVar0 = iVar0 - 16;
		}
	
		if (bVar21)
		{
			if (!Global_55068[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_46122 = Global_46122 - 1;
					
						if (Global_46122 < 0)
							Global_46122 = 0;
						break;
				
					case 1:
						Global_46123 = Global_46123 - 1;
					
						if (Global_46123 < 0)
							Global_46123 = 0;
						break;
				
					case 2:
						Global_46124 = Global_46124 - 1;
					
						if (Global_46124 < 0)
							Global_46124 = 0;
						break;
				}
			}
		}
	
		Global_55068[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_55068[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_55068[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_55068[iParam0 /*120*/].f_86[iVar0] = false;
		Global_55068[iParam0 /*120*/].f_69[iVar0] = false;
		Global_55068[iParam0 /*120*/] = Global_55068[iParam0 /*120*/] + 1;
	}
	else
	{
		iVar0 = Global_55068[iParam0 /*120*/];
	
		for (bVar22 = false; iVar0 >= 16; bVar22 = true)
		{
			iVar0 = iVar0 - 16;
		}
	
		if (bVar22)
		{
			if (!Global_55068[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_46122 = Global_46122 - 1;
					
						if (Global_46122 < 0)
							Global_46122 = 0;
						break;
				
					case 1:
						Global_46123 = Global_46123 - 1;
					
						if (Global_46123 < 0)
							Global_46123 = 0;
						break;
				
					case 2:
						Global_46124 = Global_46124 - 1;
					
						if (Global_46124 < 0)
							Global_46124 = 0;
						break;
				}
			}
		}
	
		iVar23 = -1;
		iVar24 = 0;
	
		for (iVar24 = 0; iVar24 < 7; iVar24 = iVar24 + 1)
		{
			if (Global_55430[iVar24 /*203*/].f_1 == iParam1 && Global_55430[iVar24 /*203*/].f_9 > 0)
				iVar23 = iVar24;
		}
	
		if (iVar23 == -1)
			return;
	
		Global_55068[iParam0 /*120*/].f_18[iVar0] = Global_55430[iVar23 /*203*/].f_1;
		Global_55068[iParam0 /*120*/].f_1[iVar0] = Global_55430[iVar23 /*203*/].f_9 - 1;
		Global_55068[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_55068[iParam0 /*120*/].f_86[iVar0] = true;
		Global_55068[iParam0 /*120*/].f_69[iVar0] = false;
		Global_55068[iParam0 /*120*/] = Global_55068[iParam0 /*120*/] + 1;
		iVar25 = Global_55068[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_55430[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_46130[iVar26 /*12*/].f_2;
	
		if (Global_55430[iVar23 /*203*/].f_10[Global_55430[iVar23 /*203*/].f_9 - 1 /*48*/].f_1)
			TEXT_LABEL_COPY(&uVar3, { Global_55430[iVar23 /*203*/].f_10[Global_55430[iVar23 /*203*/].f_9 - 1 /*48*/].f_2 }, 16);
		else
			uVar3 = { func_55(Global_46130[iVar26 /*12*/].f_1) };
	}

	if (!bParam4)
	{
		if (!Global_55068[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_51(0, iVar1, iVar2, &uVar3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 1:
					if (iVar2 == 249)
						func_51(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					else
						func_51(1, iVar1, iVar2, &uVar3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 2:
					func_51(2, iVar1, iVar2, &uVar3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}
}

void func_51(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x2B38
{
	int iVar0;
	bool bVar1;
	var uVar2;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	iVar0 = func_102();
	bVar1 = false;
	TEXT_LABEL_ASSIGN_STRING(&uVar2, func_54(iParam1, &bVar1), 64);

	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
		
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
		
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
		
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam4);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam5);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam6);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam9);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam10);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam11);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam12))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam12);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam13))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam13);
				break;
		}
	
		if (bVar1)
			func_52(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar2, &uVar2, 0, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_53(iParam1)), 0));
		else
			func_52(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_53(iParam1)), 0));
	
		switch (Global_21627)
		{
			case 0:
				TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Michael", 24);
				Global_46122 = Global_46122 + 1;
			
				if (Global_46122 > 16)
					Global_46122 = 16;
				break;
		
			case 2:
				TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Trevor", 24);
				Global_46124 = Global_46124 + 1;
			
				if (Global_46124 > 16)
					Global_46124 = 16;
				break;
		
			case 1:
				TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Franklin", 24);
				Global_46123 = Global_46123 + 1;
			
				if (Global_46123 > 16)
					Global_46123 = 16;
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_21616, "Phone_SoundSet_Default", 24);
				break;
		}
	
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_21616, 1);
	}
}

void func_52(int iParam0) // Position - 0x2D20
{
	Global_46125[Global_46129] = iParam0;
	Global_24058 = 1;
	Global_24057 = iParam0;
	Global_46129 = Global_46129 + 1;

	if (Global_46129 == 3)
		Global_46129 = 0;
}

char* func_53(int iParam0) // Position - 0x2D4E
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /* GXT: Mike */;
	
		case 3:
			return "EMSTR_3" /* GXT: Jimmy */;
	
		case 1:
			return "EMSTR_6" /* GXT: Franklin */;
	
		case 2:
			return "EMSTR_9" /* GXT: Trevor */;
	
		case 4:
			return "EMSTR_12" /* GXT: Marnie */;
	
		case 5:
			return "EMSTR_29" /* GXT: Epsilon Store */;
	
		case 6:
			return "EMSTR_36" /* GXT: Maude */;
	
		case 7:
			return "EMSTR_39" /* GXT: Lester */;
	
		case 8:
			return "EMSTR_52" /* GXT: Maze Bank */;
	
		case 9:
			return "EMSTR_55" /* GXT: Fleeca */;
	
		case 10:
			return "EMSTR_58" /* GXT: Bank of Liberty */;
	
		case 11:
			return "EMSTR_78" /* GXT: Legendary Motorsport Sales */;
	
		case 12:
			return "EMSTR_81" /* GXT: Elitas Sales */;
	
		case 13:
			return "EMSTR_84" /* GXT: Cache & Carry */;
	
		case 14:
			return "EMSTR_87" /* GXT: DockTease */;
	
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
	
		case 16:
			return "EMSTR_114" /* GXT: AMMU-NATION */;
	
		case 17:
			return "EMSTR_142" /* GXT: Christian Feltz */;
	
		case 18:
			return "EMSTR_145" /* GXT: Paige Harris */;
	
		case 19:
			return "EMSTR_152" /* GXT: Los Santos Tourist Info */;
	
		case 20:
			return "EMSTR_157" /* GXT: Rickie Luckens */;
	
		case 21:
			return "EMSTR_163" /* GXT: Minotaur Property Management */;
	
		case 22:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
	
		case 23:
			return "EMSTR_187" /* GXT: Vanilla Unicorn */;
	
		case 24:
			return "EMSTR_190" /* GXT: Dr Isiah Friedlander */;
	
		case 25:
			return "EMSTR_206" /* GXT: TRACEYHEARTSTEALER */;
	
		case 26:
			return "EMSTR_219" /* GXT: Dave Norton */;
	
		case 27:
			return "EMSTR_226" /* GXT: Amanda De Santa */;
	
		case 28:
			return "EMSTR_233" /* GXT: Donald Percival */;
	
		case 29:
			return "EMSTR_242" /* GXT: Ron */;
	
		case 30:
			return "EMSTR_249" /* GXT: Tanisha Marks */;
	
		case 31:
			return "EMSTR_262" /* GXT: Denise */;
	
		case 32:
			return "EMSTR_269" /* GXT: Lamar Davis */;
	
		case 33:
			return "EMSTR_319" /* GXT: Brad */;
	
		case 34:
			return "EMSTR_340" /* GXT: Patricia Madrazo */;
	
		case 35:
			return "EMSTR_348" /* GXT: Eileen Haworth */;
	
		case 36:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
	
		case 37:
			return "EMSTR_357" /* GXT: Gray Nicholson */;
	
		case 38:
			return "EMSTR_360" /* GXT: Nigel */;
	
		case 39:
			return "EMSTR_369" /* GXT: Hookies */;
	
		case 40:
			return "EMSTR_376" /* GXT: Towing Impound */;
	
		case 41:
			return "EMSTR_379" /* GXT: Downtown Cab Co, */;
	
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
	
		case 43:
			return "EMSTR_384" /* GXT: Sonar Collections Dock */;
	
		case 44:
			return "EMSTR_387" /* GXT: Los Santos Customs */;
	
		case 45:
			return "EMSTR_390" /* GXT: Cinema Doppler */;
	
		case 46:
			return "EMSTR_393" /* GXT: Ten Cent Theater */;
	
		case 47:
			return "EMSTR_396" /* GXT: Tivoli Cinema */;
	
		case 48:
			return "EMSTR_399" /* GXT: Los Santos Golf Club */;
	
		case 49:
			return "EMSTR_402" /* GXT: Car Scrap Yard */;
	
		case 50:
			return "EMSTR_405" /* GXT: Smoke on the Water */;
	
		case 51:
			return "EMSTR_408" /* GXT: Tequi-la-la */;
	
		case 52:
			return "EMSTR_411" /* GXT: Pitchers */;
	
		case 53:
			return "EMSTR_414" /* GXT: The Hen House */;
	
		case 54:
			return "EMSTR_465" /* GXT: Pedal & Metal Sales */;
	
		case 55:
			return "EMSTR_468" /* GXT: SSA Super Autos Sales */;
	
		case 56:
			return "EMSTR_489" /* GXT: Hush Smush */;
	
		case 57:
			return "EMSTR_492" /* GXT: foxymama21 */;
	
		case 58:
			return "EMSTR_495" /* GXT: Altarego12 */;
	
		case 59:
			return "EMSTR_498" /* GXT: BadKitty11 */;
	
		case 60:
			return "EMSTR_501" /* GXT: 7yearbitch */;
	
		case 61:
			return "EMSTR_504" /* GXT: Froggy69 */;
	
		case 62:
			return "EMSTR_507" /* GXT: Misscuddles */;
	
		case 63:
			return "EMSTR_640" /* GXT: Off-Road Events */;
	
		case 64:
			return "EMSTR_643" /* GXT: DockTease */;
	
		case 65:
			return "EMSTR_652" /* GXT: Brother Adrian */;
	
		default:
		
	}

	return "NULL";
}

char* func_54(int iParam0, var uParam1) // Position - 0x30B9
{
	*uParam1 = 1;

	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[0 /*29*/].f_7));
	
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[1 /*29*/].f_7));
	
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[2 /*29*/].f_7));
	
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[12 /*29*/].f_7));
	
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[60 /*29*/].f_7));
	
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[62 /*29*/].f_7));
	
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[14 /*29*/].f_7));
	
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[97 /*29*/].f_7));
	
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[99 /*29*/].f_7));
	
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[96 /*29*/].f_7));
	
		case 63:
			return "CHAR_CARSITE2";
	
		case 64:
			return "CHAR_BOATSITE";
	
		case 8:
			return "CHAR_BANK_MAZE";
	
		case 9:
			return "CHAR_BANK_FLEECA";
	
		case 10:
			return "CHAR_BANK_BOL";
	
		case 21:
			return "CHAR_MINOTAUR";
	
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[15 /*29*/].f_7));
	
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[30 /*29*/].f_7));
	
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[17 /*29*/].f_7));
	
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[20 /*29*/].f_7));
	
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[43 /*29*/].f_7));
	
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[44 /*29*/].f_7));
	
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[19 /*29*/].f_7));
	
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[40 /*29*/].f_7));
	
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /* GXT: CHAR_SAEEDA */);
	
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[64 /*29*/].f_7));
	
		case 5:
			return "CHAR_EPSILON";
	
		case 13:
			return "CHAR_MILSITE";
	
		case 11:
			return "CHAR_CARSITE";
	
		case 14:
			return "CHAR_BOATSITE";
	
		case 12:
			return "CHAR_PLANESITE";
	
		case 24:
			return "CHAR_DR_FRIEDLANDER";
	
		case 55:
			return "CHAR_CARSITE2";
	
		case 54:
			return "CHAR_BIKESITE";
	
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[122 /*29*/].f_7));
	
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[125 /*29*/].f_7));
	
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[113 /*29*/].f_7));
	
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[126 /*29*/].f_7));
	
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[127 /*29*/].f_7));
	
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[124 /*29*/].f_7));
	
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[114 /*29*/].f_7));
	
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[115 /*29*/].f_7));
	
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[116 /*29*/].f_7));
	
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[123 /*29*/].f_7));
	
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[117 /*29*/].f_7));
	
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[118 /*29*/].f_7));
	
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[119 /*29*/].f_7));
	
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[120 /*29*/].f_7));
	
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[121 /*29*/].f_7));
	
		default:
		
	}

	*uParam1 = 0;
	return "ERROR!";
}

struct<16> func_55(int iParam0) // Position - 0x3484
{
	var uVar0;
	var uVar16;

	if (iParam0 > -1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "EMSTR_", 64);
		TEXT_LABEL_APPEND_INT(&uVar0, iParam0, 64);
		return uVar0;
	}

	TEXT_LABEL_ASSIGN_STRING(&uVar16, "FAIL", 64);
	return uVar16;
}

int func_56(int iParam0, int iParam1) // Position - 0x34B5
{
	if (Global_49455[iParam0 /*46*/].f_42 >= 9)
		return 0;

	Global_49455[iParam0 /*46*/].f_32[Global_49455[iParam0 /*46*/].f_42] = iParam1;
	Global_49455[iParam0 /*46*/].f_42 = Global_49455[iParam0 /*46*/].f_42 + 1;
	return 1;
}

bool func_57(int iParam0, int iParam1) // Position - 0x34FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return false;

	for (iVar1 = Global_55068[iVar0 /*120*/] - 1 - iParam1; iVar1 >= 16; iVar1 = iVar1 - 16)
	{
	}

	iVar2 = iVar1;

	if (!Global_55068[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_55068[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_55068[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_49455[iVar3 /*46*/].f_32[iVar4];
	
		if (Global_46130[iVar5 /*12*/].f_4 == 0)
			return false;
	
		if (Global_55068[iVar0 /*120*/].f_35[iVar2] == 1)
			return false;
	
		if (!func_58(iVar0, iVar2))
			return false;
	
		return true;
	}

	return false;
}

bool func_58(int iParam0, int iParam1) // Position - 0x35D9
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!(iParam0 < 3))
		return false;

	iVar0 = Global_55068[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_55068[iParam0 /*120*/].f_18[iParam1];

	if (!(Global_49455[iVar1 /*46*/] && !Global_49455[iVar1 /*46*/].f_1))
		return false;

	if (!(iVar0 == Global_49455[iVar1 /*46*/].f_42 - 1))
		return false;

	iVar2 = Global_49455[iVar1 /*46*/].f_32[Global_49455[iVar1 /*46*/].f_42 - 1];

	if (Global_46130[iVar2 /*12*/].f_4 > 0)
		return true;

	return false;
}

bool func_59() // Position - 0x3669
{
	return Global_77359;
}

void func_60() // Position - 0x3675
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21616, 1);
		func_61();
	}
}

void func_61() // Position - 0x369B
{
	if (func_2())
		MOBILE::CELL_SET_INPUT(5);
}

int func_62(int iParam0) // Position - 0x36AF
{
	int iVar0;

	iVar0 = -1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	return Global_55068[iVar0 /*120*/];
}

void func_63(var uParam0, int iParam1, int iParam2) // Position - 0x36EC
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
	var uVar9;
	var uVar25;

	iVar0 = -1;

	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return;

	for (iVar1 = Global_55068[iVar0 /*120*/] - 1 - iParam2; iVar1 >= 16; iVar1 = iVar1 - 16)
	{
	}

	iVar2 = iVar1;

	if (!Global_55068[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_55068[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_55068[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_49455[iVar3 /*46*/].f_32[iVar4];
	
		if (Global_46130[iVar5 /*12*/].f_4 == 0)
			return;
	
		iVar6 = 0;
		iVar7 = Global_46130[iVar5 /*12*/].f_4;
	
		if (iVar7 > 1)
			iVar7 = 1;
	
		for (iVar6 = 0; iVar6 < iVar7; iVar6 = iVar6 + 1)
		{
			iVar8 = Global_46130[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			uVar9 = { func_55(Global_46130[iVar8 /*12*/].f_1) };
			uVar25 = { func_55(Global_46130[iVar8 /*12*/].f_1) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW" /* GXT: Response: */);
			func_9(&uVar25);
			func_9(func_65(Global_46130[iVar8 /*12*/].f_2));
			func_64(iVar8, Global_46130[iVar8 /*12*/].f_2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_64(int iParam0, int iParam1) // Position - 0x3855
{
	int iVar0;

	iVar0 = iParam0;

	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
	
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
	
		case 34:
		case 35:
		case 36:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
	
		case 31:
		case 32:
		case 33:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
	
		default:
		
	}

	switch (iParam1)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
	
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
	
		case 19:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			return;
	
		default:
			return;
	}
}

char* func_65(int iParam0) // Position - 0x396F
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2" /* GXT: -Michael */;
	
		case 3:
			return "EMSTR_5" /* GXT: J */;
	
		case 1:
			return "EMSTR_8" /* GXT: F */;
	
		case 2:
			return "EMSTR_11" /* GXT: T */;
	
		case 4:
			return "EMSTR_14" /* GXT: M */;
	
		case 5:
			return "EMSTR_31" /* GXT: Praise Kraff */;
	
		case 6:
			return "EMSTR_38" /* GXT: -Maude */;
	
		case 7:
			return "EMSTR_41" /* GXT: -Lester */;
	
		case 8:
			return "EMSTR_54" /* GXT: Maze Online Support */;
	
		case 9:
			return "EMSTR_57" /* GXT: Fleeca Customer Services */;
	
		case 10:
			return "EMSTR_60" /* GXT: BoL Transaction Services */;
	
		case 11:
			return "EMSTR_80" /* GXT: Legendary Motorsport */;
	
		case 12:
			return "EMSTR_83" /* GXT: Elitas Travel */;
	
		case 13:
			return "EMSTR_86" /* GXT: C&C */;
	
		case 14:
			return "EMSTR_89" /* GXT: DT Sales */;
	
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
	
		case 16:
			return "EMSTR_116" /* GXT: ~b~<u>www.ammunation.net</u>~s~ */;
	
		case 17:
			return "EMSTR_144" /* GXT: C */;
	
		case 18:
			return "EMSTR_147" /* GXT: P */;
	
		case 19:
			return "EMSTR_154" /* GXT: LS Tourist Info */;
	
		case 20:
			return "EMSTR_159" /* GXT: R */;
	
		case 21:
			return "EMSTR_165" /* GXT: Minotaur Finance - navigating the maze that is property ownership */;
	
		case 22:
			return "EMSTR_184" /* GXT: -Saeeda Kadam */;
	
		case 23:
			return "EMSTR_189" /* GXT: -Vanilla Unicorn */;
	
		case 24:
			return "EMSTR_192" /* GXT: Isiah Friedlander */;
	
		case 25:
			return "EMSTR_208" /* GXT: - Tracey */;
	
		case 26:
			return "EMSTR_221" /* GXT: - Davey */;
	
		case 27:
			return "EMSTR_228" /* GXT: - Amanda */;
	
		case 28:
			return "EMSTR_235" /* GXT: - Donald Percival */;
	
		case 29:
			return "EMSTR_244" /* GXT: - Ron */;
	
		case 30:
			return "EMSTR_251" /* GXT: - Tanisha */;
	
		case 31:
			return "EMSTR_264" /* GXT: - Denise */;
	
		case 32:
			return "EMSTR_271" /* GXT: - Lamar */;
	
		case 33:
			return "EMSTR_321" /* GXT: - Brad */;
	
		case 34:
			return "EMSTR_342" /* GXT: - Patricia M */;
	
		case 35:
			return "EMSTR_350" /* GXT: - Eileen Haworth */;
	
		case 36:
			return "EMSTR_354" /* GXT: - Saeeda Kadam */;
	
		case 37:
			return "EMSTR_359" /* GXT: - Gray N */;
	
		case 38:
			return "EMSTR_362" /* GXT: - Nigel */;
	
		case 39:
			return "EMSTR_371" /* GXT: - Hookies */;
	
		case 40:
			return "EMSTR_378" /* GXT: - Towing Impound */;
	
		case 41:
			return "EMSTR_381" /* GXT: - Downtown Cab Co. */;
	
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
	
		case 43:
			return "EMSTR_386" /* GXT: - Sonar Collections Dock */;
	
		case 44:
			return "EMSTR_389" /* GXT: - Los Santos Customs */;
	
		case 45:
			return "EMSTR_392" /* GXT: - Cinema Doppler */;
	
		case 46:
			return "EMSTR_395" /* GXT: - Ten Cent Theater */;
	
		case 47:
			return "EMSTR_398" /* GXT: - Tivoli Cinema */;
	
		case 48:
			return "EMSTR_401" /* GXT: - Los Santos Golf Club */;
	
		case 49:
			return "EMSTR_404" /* GXT: - Car Scrap Yard */;
	
		case 50:
			return "EMSTR_407" /* GXT: - Smoke on the Water */;
	
		case 51:
			return "EMSTR_410" /* GXT: - Tequi-la-la */;
	
		case 52:
			return "EMSTR_413" /* GXT: - Pitchers */;
	
		case 53:
			return "EMSTR_416" /* GXT: - The Hen House */;
	
		case 54:
			return "EMSTR_467" /* GXT: Pedal & Metal Cycles */;
	
		case 55:
			return "EMSTR_470" /* GXT: SSA Super Autos */;
	
		case 56:
			return "EMSTR_491" /* GXT: Hush Smush */;
	
		case 57:
			return "EMSTR_494" /* GXT: foxymama21 */;
	
		case 58:
			return "EMSTR_497" /* GXT: Altarego12 */;
	
		case 59:
			return "EMSTR_500" /* GXT: BadKitty11 */;
	
		case 60:
			return "EMSTR_503" /* GXT: 7yearbitch */;
	
		case 61:
			return "EMSTR_506" /* GXT: Froggy69 */;
	
		case 62:
			return "EMSTR_509" /* GXT: Misscuddles */;
	
		case 63:
			return "EMSTR_642" /* GXT: - Southern San Andreas Super Autos */;
	
		case 64:
			return "EMSTR_645" /* GXT: - DockTease Events */;
	
		case 65:
			return "EMSTR_654" /* GXT: Brother Adrian */;
	
		default:
		
	}

	return "NULL";
}

void func_66(char* sParam0, int iParam1) // Position - 0x3CDA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_67(int iParam0) // Position - 0x3CF1
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

void func_68(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x3D33
{
	func_69(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_69(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x3D55
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
		func_70();
	}
}

void func_70() // Position - 0x3F29
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

int func_71(char* sParam0) // Position - 0x4041
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113571))
		return 1;

	if (func_72(sParam0))
		return 0;

	return 2;
}

bool func_72(char* sParam0) // Position - 0x4068
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114931.f_20417[iVar0 /*16*/]))
			return true;
	}

	return false;
}

bool func_73(int iParam0) // Position - 0x40A3
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

char* func_74(int iParam0, int iParam1) // Position - 0x40E3
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return "";

	iVar4 = func_76(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_55068[iVar0 /*120*/].f_86[iVar4];

	if (!bVar6)
	{
		iVar5 = Global_49455[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
	
		for (iVar8 = 0; iVar8 < 7; iVar8 = iVar8 + 1)
		{
			if (Global_55430[iVar8 /*203*/].f_1 == iVar2)
				iVar7 = iVar8;
		}
	
		iVar5 = Global_55430[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}

	return func_75(iVar5);
}

char* func_75(int iParam0) // Position - 0x41A3
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
	
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 17:
			return "WWW_MAZE_D_BANK_COM";
	
		case 18:
			return "WWW_FLEECA_COM";
	
		case 19:
			return "WWW_MAZE_D_BANK_COM";
	
		case 20:
			return "WWW_MAZE_D_BANK_COM";
	
		case 21:
			return "WWW_MAZE_D_BANK_COM";
	
		case 22:
			return "WWW_MAZE_D_BANK_COM";
	
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 24:
			return "WWW_FLEECA_COM";
	
		case 25:
			return "WWW_FLEECA_COM";
	
		case 26:
			return "WWW_FLEECA_COM";
	
		case 27:
			return "WWW_FLEECA_COM";
	
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
	
		case 47:
			return "WWW_AMMUNATION_NET";
	
		case 48:
			return "WWW_AMMUNATION_NET";
	
		case 49:
			return "WWW_AMMUNATION_NET";
	
		case 50:
			return "WWW_AMMUNATION_NET";
	
		case 51:
			return "WWW_AMMUNATION_NET";
	
		case 52:
			return "WWW_AMMUNATION_NET";
	
		case 53:
			return "WWW_AMMUNATION_NET";
	
		case 54:
			return "WWW_AMMUNATION_NET";
	
		case 55:
			return "WWW_ELITASTRAVEL_COM";
	
		case 56:
			return "WWW_DOCKTEASE_COM";
	
		case 57:
			return "WWW_ELITASTRAVEL_COM";
	
		case 58:
			return "WWW_ELITASTRAVEL_COM";
	
		case 59:
			return "WWW_ELITASTRAVEL_COM";
	
		case 60:
			return "WWW_DOCKTEASE_COM";
	
		case 61:
			return "WWW_DOCKTEASE_COM";
	
		case 62:
			return "WWW_ELITASTRAVEL_COM";
	
		case 63:
			return "WWW_ELITASTRAVEL_COM";
	
		case 68:
			return "WWW_AMMUNATION_NET";
	
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
	
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 194:
			return "WWW_HUSHSMUSH_COM";
	
		case 195:
			return "WWW_HUSHSMUSH_COM";
	
		case 196:
			return "WWW_HUSHSMUSH_COM";
	
		case 197:
			return "WWW_HUSHSMUSH_COM";
	
		case 198:
			return "WWW_HUSHSMUSH_COM";
	
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
	
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 270:
			return "WWW_AMMUNATION_NET";
	
		case 271:
			return "WWW_AMMUNATION_NET";
	
		case 272:
			return "WWW_AMMUNATION_NET";
	
		case 273:
			return "WWW_AMMUNATION_NET";
	
		case 274:
			return "WWW_AMMUNATION_NET";
	
		case 275:
			return "WWW_AMMUNATION_NET";
	
		case 276:
			return "WWW_AMMUNATION_NET";
	
		default:
		
	}

	return "NULL";
}

int func_76(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x44B3
{
	int iVar0;
	int iVar1;

	for (iVar0 = Global_55068[iParam0 /*120*/] - 1 - iParam1; iVar0 >= 16; iVar0 = iVar0 - 16)
	{
	}

	iVar1 = iVar0;
	*uParam2 = Global_55068[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_55068[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_55068[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

bool func_77(int iParam0, int iParam1) // Position - 0x4510
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return 0;

	iVar4 = func_76(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_55068[iVar0 /*120*/].f_86[iVar4];

	if (!bVar6)
	{
		iVar5 = Global_49455[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
	
		for (iVar8 = 0; iVar8 < 7; iVar8 = iVar8 + 1)
		{
			if (Global_55430[iVar8 /*203*/].f_1 == iVar1)
				iVar7 = iVar8;
		}
	
		iVar5 = Global_55430[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}

	return func_78(iVar5);
}

int func_78(int iParam0) // Position - 0x45CD
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_79(var uParam0, int iParam1, int iParam2) // Position - 0x4743
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;
	var uVar23;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	var uVar63;
	bool bVar79;
	int iVar80;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = -1;

	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return;

	iVar4 = func_76(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_55068[iVar0 /*120*/].f_86[iVar4];

	if (!Global_55068[iVar0 /*120*/].f_69[iVar4])
		func_83(-1);

	Global_55068[iVar0 /*120*/].f_69[iVar4] = true;

	if (!bVar5)
	{
		iVar6 = Global_49455[iVar2 /*46*/].f_32[iVar3];
		uVar7 = { func_55(Global_46130[iVar6 /*12*/]) };
		uVar23 = { func_55(Global_46130[iVar6 /*12*/].f_1) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_9(func_82(Global_46130[iVar6 /*12*/].f_3));
		func_9(func_82(Global_46130[iVar6 /*12*/].f_2));
		func_9(&uVar7);
		func_9(&uVar23);
		func_9(func_65(Global_46130[iVar6 /*12*/].f_2));
		func_64(iVar6, Global_46130[iVar6 /*12*/].f_2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		if (Global_46130[iVar6 /*12*/].f_4 == 0)
			func_101(false);
		else if (bVar1 || !func_58(iVar0, iVar4))
			func_101(false);
		else
			func_101(true);
	
		if (Global_49455[iVar2 /*46*/].f_42 > 1)
		{
			iVar39 = iVar3;
			iVar40 = iVar3 - 1;
			iVar41 = 0;
		
			for (iVar41 = 0; iVar41 < iVar39; iVar41 = iVar41 + 1)
			{
				iVar6 = Global_49455[iVar2 /*46*/].f_32[iVar40];
				uVar7 = { func_55(Global_46130[iVar6 /*12*/]) };
				uVar23 = { func_55(Global_46130[iVar6 /*12*/].f_1) };
				iVar42 = func_81(iParam1, Global_46130[iVar6 /*12*/].f_3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar41 + 1);
				func_9(func_82(iVar42));
				func_9(func_82(Global_46130[iVar6 /*12*/].f_2));
				func_9(&uVar7);
				func_9(&uVar23);
				func_9(func_65(Global_46130[iVar6 /*12*/].f_2));
				func_64(iVar6, Global_46130[iVar6 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar40 = iVar40 - 1;
			}
		}
	}
	else
	{
		iVar43 = -1;
		iVar44 = 0;
	
		for (iVar44 = 0; iVar44 < 7; iVar44 = iVar44 + 1)
		{
			if (Global_55430[iVar44 /*203*/].f_1 == iVar2)
				iVar43 = iVar44;
		}
	
		if (iVar43 == -1)
		{
			return;
		}
		else
		{
			iVar45 = Global_55430[iVar43 /*203*/].f_10[iVar3 /*48*/];
			iVar46 = Global_55430[iVar43 /*203*/].f_10[iVar3 /*48*/];
			uVar47 = { func_55(Global_46130[iVar45 /*12*/]) };
			uVar63 = { func_55(Global_46130[iVar45 /*12*/].f_1) };
		
			if (Global_55430[iVar43 /*203*/].f_10[iVar3 /*48*/].f_1)
				TEXT_LABEL_COPY(&uVar63, { Global_55430[iVar43 /*203*/].f_10[iVar3 /*48*/].f_2 }, 16);
		
			if (Global_46130[iVar45 /*12*/].f_4 == 0)
				func_101(false);
			else if (bVar1)
				func_101(false);
			else
				func_101(true);
		
			bVar79 = false;
			bVar79 = func_80(uParam0, Global_55430[iVar43 /*203*/].f_1, iVar3, iVar46);
		
			if (!bVar79)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(func_82(Global_46130[iVar45 /*12*/].f_3));
				func_9(func_82(Global_46130[iVar45 /*12*/].f_2));
				func_9(&uVar47);
			
				if (Global_55430[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&uVar63);
					iVar80 = 0;
				
					for (iVar80 = 0; iVar80 < Global_55430[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6; iVar80 = iVar80 + 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_55430[iVar43 /*203*/].f_10[iVar3 /*48*/].f_7[iVar80 /*4*/]);
					}
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&uVar63);
				}
			
				func_9(func_65(Global_46130[iVar45 /*12*/].f_2));
				func_64(iVar45, Global_46130[iVar45 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

bool func_80(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4B30
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar19;
	int iVar35;
	int iVar36;
	bool bVar37;
	char* sVar38;

	iVar0 = 0;
	iVar1 = iParam1;
	iVar1 = iParam2;
	iVar1 = iVar1;
	iVar2 = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uVar3 = { func_55(Global_46130[iParam3 /*12*/]) };

	switch (iParam3)
	{
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar19, "PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */, 64);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar19, "PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */, 64);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar19, "PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */, 64);
			break;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	func_9(func_82(Global_46130[iParam3 /*12*/].f_3));
	func_9(func_82(Global_46130[iParam3 /*12*/].f_2));
	func_9(&uVar3);
	func_9(&uVar19);
	func_9(func_65(Global_46130[iParam3 /*12*/].f_2));
	func_9("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar2 = iVar2 + 1;

	for (iVar35 = 0; iVar35 < 16; iVar35 = iVar35 + 1)
	{
		iVar36 = iVar35;
		bVar37 = false;
	
		switch (iParam3)
		{
			case 72:
				if (Global_114931.f_24911[iVar36 /*4*/] == 0)
					bVar37 = true;
				break;
		
			case 73:
				if (Global_114931.f_24911[iVar36 /*4*/] == 1)
					bVar37 = true;
				break;
		
			case 74:
				if (Global_114931.f_24911[iVar36 /*4*/] == 2)
					bVar37 = true;
				break;
		}
	
		if (bVar37)
		{
			switch (iVar36)
			{
				case 0:
					sVar38 = "ACCNA_TOWING" /* GXT: Towing Impound */;
					break;
			
				case 1:
					sVar38 = "ACCNA_TAXI_LOT" /* GXT: Downtown Cab Co. */;
					break;
			
				case 2:
					sVar38 = "ACCNA_ARMS" /* GXT: McKenzie Field Hangar */;
					break;
			
				case 3:
					sVar38 = "ACCNA_SONAR" /* GXT: Sonar Collections Dock */;
					break;
			
				case 4:
					sVar38 = "ACCNA_CARMOD" /* GXT: Los Santos Customs */;
					break;
			
				case 5:
					sVar38 = "ACCNA_VCINEMA" /* GXT: Cinema Doppler */;
					break;
			
				case 6:
					sVar38 = "ACCNA_DCINEMA" /* GXT: Ten Cent Theater */;
					break;
			
				case 7:
					sVar38 = "ACCNA_MCINEMA" /* GXT: Tivoli Cinema */;
					break;
			
				case 8:
					sVar38 = "ACCNA_GOLF" /* GXT: Los Santos Golf Club */;
					break;
			
				case 9:
					sVar38 = "ACCNA_CSCRAP" /* GXT: Car Scrapyard */;
					break;
			
				case 10:
					sVar38 = "ACCNA_SMOKE" /* GXT: Smoke on the Water */;
					break;
			
				case 11:
					sVar38 = "ACCNA_TEQUILA" /* GXT: Tequi-la-la */;
					break;
			
				case 12:
					sVar38 = "ACCNA_PITCHERS" /* GXT: Pitchers */;
					break;
			
				case 13:
					sVar38 = "ACCNA_HEN" /* GXT: The Hen House */;
					break;
			
				case 14:
					sVar38 = "ACCNA_HOOKIES" /* GXT: Hookies */;
					break;
			
				case 15:
					sVar38 = "ACCNA_STRP" /* GXT: Vanilla Unicorn */;
					break;
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PROPR_INCEMAIL4" /* GXT: ~a~: $~1~ */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sVar38);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114931.f_24911[iVar36 /*4*/].f_3);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2 = iVar2 + 1;
			iVar0 = 1;
		}
	}

	return iVar0;
}

int func_81(int iParam0, int iParam1) // Position - 0x4DC9
{
	if (iParam1 == 0)
		if (iParam0 == 1)
			return 1;
		else if (iParam0 == 2)
			return 2;

	return iParam1;
}

char* func_82(int iParam0) // Position - 0x4DF0
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1" /* GXT: Mike@eyefind.info */;
	
		case 3:
			return "EMSTR_4" /* GXT: jimmy@eyefind.info */;
	
		case 1:
			return "EMSTR_7" /* GXT: Frankie@eyefind.info */;
	
		case 2:
			return "EMSTR_10" /* GXT: trev@eyefind.info */;
	
		case 4:
			return "EMSTR_13" /* GXT: Marnie@epsilonprogram.com */;
	
		case 5:
			return "EMSTR_30" /* GXT: noreply@epsilonprogram.com */;
	
		case 6:
			return "EMSTR_37" /* GXT: Maude@eyefind.info */;
	
		case 7:
			return "EMSTR_40" /* GXT: t34b4g99@eyefind.info */;
	
		case 8:
			return "EMSTR_53" /* GXT: services@maze-bank.com */;
	
		case 9:
			return "EMSTR_56" /* GXT: services@fleeca.com */;
	
		case 10:
			return "EMSTR_59" /* GXT: transactions@thebankofliberty.com */;
	
		case 11:
			return "EMSTR_79" /* GXT: sales@legendarymotorsport.net */;
	
		case 12:
			return "EMSTR_82" /* GXT: sales@elitastravel.com */;
	
		case 13:
			return "EMSTR_85" /* GXT: CnCsales@warstock-cache-and-carry.com */;
	
		case 14:
			return "EMSTR_88" /* GXT: sales@docktease.com */;
	
		case 15:
			return "EMSTR_107" /* GXT: MODS@lossantoscustoms.com */;
	
		case 16:
			return "EMSTR_115" /* GXT: GUNS@ammunation.net */;
	
		case 17:
			return "EMSTR_143" /* GXT: Feltz@eyefind.info */;
	
		case 18:
			return "EMSTR_146" /* GXT: Paige@eyefind.info */;
	
		case 19:
			return "EMSTR_153" /* GXT: info@LSTouristInfo.com */;
	
		case 20:
			return "EMSTR_158" /* GXT: Rickie@lifeinvader.com */;
	
		case 21:
			return "EMSTR_164" /* GXT: property@minotaurfinance.com */;
	
		case 22:
			return "EMSTR_183" /* GXT: SKadam@eyefind.info */;
	
		case 23:
			return "EMSTR_188" /* GXT: promotions@vanillaunicorn.xxx */;
	
		case 24:
			return "EMSTR_191" /* GXT: DrFriedlander@eyefind.info */;
	
		case 25:
			return "EMSTR_207" /* GXT: tracey@eyefind.info */;
	
		case 26:
			return "EMSTR_220" /* GXT: DaveNorton@eyefind.info */;
	
		case 27:
			return "EMSTR_227" /* GXT: AmandaDS@eyefind.info */;
	
		case 28:
			return "EMSTR_234" /* GXT: Don.Percival@merryweather.com */;
	
		case 29:
			return "EMSTR_243" /* GXT: BigBadRon@eyefind.info */;
	
		case 30:
			return "EMSTR_250" /* GXT: TanishaMarks@eyefind.info */;
	
		case 31:
			return "EMSTR_263" /* GXT: denise@eyefind.info */;
	
		case 32:
			return "EMSTR_270" /* GXT: LamDav@eyefind.info */;
	
		case 33:
			return "EMSTR_320" /* GXT: Bradley@eyefind.info */;
	
		case 34:
			return "EMSTR_341" /* GXT: PatriciaMadrazo@eyefind.info */;
	
		case 35:
			return "EMSTR_349" /* GXT: EileenHaworth@eyefind.info */;
	
		case 36:
			return "EMSTR_353" /* GXT: SaeedaKadam@eyefind.info */;
	
		case 37:
			return "EMSTR_358" /* GXT: GrayNicholson@eyefind.info */;
	
		case 38:
			return "EMSTR_361" /* GXT: Nigel@eyefind.info */;
	
		case 39:
			return "EMSTR_370" /* GXT: Hookies@eyefind.info */;
	
		case 40:
			return "EMSTR_377" /* GXT: TowingImpound@eyefind.info */;
	
		case 41:
			return "EMSTR_380" /* GXT: DowntownCabCo@eyefind.info */;
	
		case 42:
			return "EMSTR_383" /* GXT: McKenzieField@eyefind.info */;
	
		case 43:
			return "EMSTR_385" /* GXT: SonarCollections@eyefind.info */;
	
		case 44:
			return "EMSTR_388" /* GXT: LosSantosCustoms@eyefind.info */;
	
		case 45:
			return "EMSTR_391" /* GXT: CinemaDoppler@eyefind.info */;
	
		case 46:
			return "EMSTR_394" /* GXT: TenCentTheater@eyefind.info */;
	
		case 47:
			return "EMSTR_397" /* GXT: TivoliCinema@eyefind.info */;
	
		case 48:
			return "EMSTR_400" /* GXT: LosSantosGolfClub@eyefind.info */;
	
		case 49:
			return "EMSTR_403" /* GXT: CarScrapYard@eyefind.info */;
	
		case 50:
			return "EMSTR_406" /* GXT: SmokeOnTheWater@eyefind.info */;
	
		case 51:
			return "EMSTR_409" /* GXT: Tequi-la-la@eyefind.info */;
	
		case 52:
			return "EMSTR_412" /* GXT: Pitchers@eyefind.info */;
	
		case 53:
			return "EMSTR_415" /* GXT: TheHenHouse@eyefind.info */;
	
		case 54:
			return "EMSTR_466" /* GXT: sales@pandmcycles.com */;
	
		case 55:
			return "EMSTR_469" /* GXT: sales@southernsanandreassuperautos.com */;
	
		case 56:
			return "EMSTR_490" /* GXT: promotions@hushmush.com */;
	
		case 57:
			return "EMSTR_493" /* GXT: foxymama21@hushmush.com */;
	
		case 58:
			return "EMSTR_496" /* GXT: Altarego12@hushmush.com */;
	
		case 59:
			return "EMSTR_499" /* GXT: BadKitty11@hushmush.com */;
	
		case 60:
			return "EMSTR_502" /* GXT: 7yearbitch@hushmush.com */;
	
		case 61:
			return "EMSTR_505" /* GXT: Froggy69@hushmush.com */;
	
		case 62:
			return "EMSTR_508" /* GXT: Misscuddles@hushmush.com */;
	
		case 63:
			return "EMSTR_641" /* GXT: events@SouthernSanAndreasSuperAutos.com */;
	
		case 64:
			return "EMSTR_644" /* GXT: RaceOrganiser@docktease.com */;
	
		case 65:
			return "EMSTR_653" /* GXT: adrian@mydivinewithin.com */;
	
		default:
		
	}

	return "NULL";
}

void func_83(int iParam0) // Position - 0x515B
{
	switch (func_102())
	{
		case 0:
			Global_46122 = Global_46122 + iParam0;
		
			if (Global_46122 < 0)
				Global_46122 = 0;
			break;
	
		case 2:
			Global_46124 = Global_46124 + iParam0;
		
			if (Global_46124 < 0)
				Global_46124 = 0;
			break;
	
		case 1:
			Global_46123 = Global_46123 + iParam0;
		
			if (Global_46123 < 0)
				Global_46123 = 0;
			break;
	
		default:
			break;
	}
}

void func_84(int iParam0, int iParam1) // Position - 0x51C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return;

	for (iVar1 = Global_55068[iVar0 /*120*/] - 1 - iParam1; iVar1 >= 16; iVar1 = iVar1 - 16)
	{
	}

	iVar2 = iVar1;
	iVar3 = Global_55068[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_55068[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_55068[iVar0 /*120*/].f_86[iVar2];

	if (!bVar6)
	{
		iVar5 = Global_49455[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
	
		for (iVar8 = 0; iVar8 < 7; iVar8 = iVar8 + 1)
		{
			if (Global_55430[iVar8 /*203*/].f_1 == iVar3)
				iVar7 = iVar8;
		}
	
		if (iVar7 == -1)
			return;
	
		iVar5 = Global_55430[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}

	if (!func_85(iVar5))
		return;

	if (Global_55429 != -1)
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_39(Global_55429));

	Global_55429 = iVar5;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_39(iVar5), 0);

	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_39(iVar5)))
	{
		BUILTIN::WAIT(100);
	}
}

bool func_85(int iParam0) // Position - 0x52F8
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return true;
	
		default:
		
	}

	return false;
}

void func_86() // Position - 0x53A8
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (Global_46125[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_46125[iVar0]);
			Global_46125[iVar0] = -1;
		}
	}

	Global_46129 = 0;
}

void func_87(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x53E7
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

void func_88(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x544A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_9(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_9(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_9(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_9(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_9(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_89(var uParam0, int iParam1) // Position - 0x54A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;

	func_90(iParam1);
	iVar0 = -1;

	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return 0;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (Global_55068[iVar0 /*120*/] < 1)
		return 0;

	for (iVar1 = Global_55068[iVar0 /*120*/] - 1; iVar1 >= 16; iVar1 = iVar1 - 16)
	{
	}

	iVar2 = Global_55068[iVar0 /*120*/];

	if (iVar2 > 16)
		iVar2 = 16;

	if (iVar1 < 0 || iVar1 > 15)
		return 0;

	iVar3 = 0;

	for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1)
	{
		if (!Global_55068[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_55068[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_55068[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_49455[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
		
			if (Global_55068[iVar0 /*120*/].f_69[iVar1])
				iVar7 = 1;
		
			if (iVar7 == 1)
				if (Global_46130[iVar6 /*12*/].f_4 > 0)
					if (Global_55068[iVar0 /*120*/].f_35[iVar1] == 0)
						iVar7 = 2;
		
			TEXT_LABEL_COPY(&uVar8, { func_55(Global_46130[iVar6 /*12*/]) }, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9(func_82(Global_46130[iVar6 /*12*/].f_2));
			func_9(&uVar8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			iVar12 = Global_55068[iVar0 /*120*/].f_18[iVar1];
			iVar13 = -1;
			iVar14 = 0;
		
			for (iVar14 = 0; iVar14 < 7; iVar14 = iVar14 + 1)
			{
				if (Global_55430[iVar14 /*203*/].f_1 == iVar12)
					iVar13 = iVar14;
			}
		
			if (iVar13 == -1)
			{
				return 1;
			}
			else
			{
				iVar15 = Global_55068[iVar0 /*120*/].f_1[iVar1];
				iVar16 = 0;
			
				if (Global_55068[iVar0 /*120*/].f_69[iVar1])
					iVar16 = 1;
			
				iVar17 = Global_55430[iVar13 /*203*/].f_10[iVar15 /*48*/];
			
				if (iVar16 == 1)
					if (Global_46130[iVar17 /*12*/].f_4 > 0)
						if (Global_55068[iVar0 /*120*/].f_35[iVar1] == 0)
							iVar16 = 2;
			
				uVar18 = { func_55(Global_46130[iVar17 /*12*/]) };
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(func_82(Global_46130[iVar17 /*12*/].f_2));
				func_9(&uVar18);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		iVar1 = iVar1 - 1;
	
		if (iVar1 < 0)
			iVar1 = 15;
	}

	return iVar2;
}

void func_90(int iParam0) // Position - 0x5734
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar124;
	bool bVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;

	iVar0 = -1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
	
		case 1:
			iVar0 = 1;
			break;
	
		case 2:
			iVar0 = 2;
			break;
	}

	if (iVar0 == -1)
		return;

	if (Global_55068[iVar0 /*120*/] < 1)
		return;

	for (iVar1 = Global_55068[iVar0 /*120*/] - 1; iVar1 >= 16; iVar1 = iVar1 - 16)
	{
	}

	iVar2 = Global_55068[iVar0 /*120*/];

	if (iVar2 > 16)
		iVar2 = 16;

	if (iVar1 < 0 || iVar1 > 15)
		return;

	iVar3 = iVar1 - iVar2 - 1;

	if (iVar3 < 0)
		iVar3 = 16 + iVar3;

	iVar4.f_1 = 16;
	iVar4.f_18 = 16;
	iVar4.f_35 = 16;
	iVar4.f_52 = 16;
	iVar4.f_69 = 16;
	iVar4.f_86 = 16;
	iVar4.f_103 = 16;

	for (iVar124 = 0; iVar124 < iVar2; iVar124 = iVar124 + 1)
	{
		bVar125 = true;
	
		if (Global_55068[iVar0 /*120*/].f_103[iVar3])
			bVar125 = false;
	
		if (Global_55068[iVar0 /*120*/].f_86[iVar3])
		{
			iVar126 = Global_55068[iVar0 /*120*/].f_18[iVar3];
			iVar127 = -1;
			iVar128 = 0;
		
			for (iVar128 = 0; iVar128 < 7; iVar128 = iVar128 + 1)
			{
				if (Global_55430[iVar128 /*203*/].f_1 == iVar126)
					iVar127 = iVar128;
			}
		
			if (iVar127 == -1)
				bVar125 = false;
		}
	
		if (bVar125)
		{
			iVar129 = iVar4;
			iVar4.f_1[iVar129] = Global_55068[iVar0 /*120*/].f_1[iVar3];
			iVar4.f_18[iVar129] = Global_55068[iVar0 /*120*/].f_18[iVar3];
			iVar4.f_35[iVar129] = Global_55068[iVar0 /*120*/].f_35[iVar3];
			iVar4.f_52[iVar129] = Global_55068[iVar0 /*120*/].f_52[iVar3];
			iVar4.f_69[iVar129] = Global_55068[iVar0 /*120*/].f_69[iVar3];
			iVar4.f_86[iVar129] = Global_55068[iVar0 /*120*/].f_86[iVar3];
			iVar4 = iVar4 + 1;
		}
	
		iVar3 = iVar3 + 1;
	
		if (iVar3 == 16)
			iVar3 = 0;
	}

	Global_55068[iVar0 /*120*/] = iVar4;

	for (iVar124 = 0; iVar124 < 16; iVar124 = iVar124 + 1)
	{
		Global_55068[iVar0 /*120*/].f_103[iVar124] = false;
		Global_55068[iVar0 /*120*/].f_1[iVar124] = iVar4.f_1[iVar124];
		Global_55068[iVar0 /*120*/].f_18[iVar124] = iVar4.f_18[iVar124];
		Global_55068[iVar0 /*120*/].f_35[iVar124] = iVar4.f_35[iVar124];
		Global_55068[iVar0 /*120*/].f_52[iVar124] = iVar4.f_52[iVar124];
		Global_55068[iVar0 /*120*/].f_69[iVar124] = iVar4.f_69[iVar124];
		Global_55068[iVar0 /*120*/].f_86[iVar124] = iVar4.f_86[iVar124];
	}
}

void func_91() // Position - 0x59D0
{
	float fVar0;

	fVar0 = func_92(Static_48, Static_45, -90f, 0f, 90f, Global_21587, 350f, false);

	if (Global_10301 == 0)
		MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * (1f - fVar0)));

	if (fVar0 >= 1f)
	{
		Global_24033 = false;
		func_1(0);
		func_4();
		Static_16 = 0;
	}
}

float func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13) // Position - 0x5A2E
{
	var uVar0;
	float fVar3;
	float fVar4;
	float fVar5;

	if (Global_4525123 == 0)
	{
		if (IS_BIT_SET(Global_9463, 14) && Global_21627.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&uVar0);
		
			if (Global_21580[Global_21572 /*3*/].f_1 == uVar0.f_1)
				Global_4525123 = 1;
		}
	}

	if (func_95() && Global_4525123 == 0)
		return 2f;

	if (Static_16 == 0)
		Static_16 = MISC::GET_GAME_TIMER();

	fVar3 = func_94(BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER() - Static_16) / fParam12, 0f, 1f);

	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
	
		if (bParam13)
		{
			fVar4 = fVar4 - 1f;
			fVar5 = 0.670158f;
			fVar4 = (fVar4 * fVar4 * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f;
		}
		else
		{
			fVar4 = BUILTIN::SIN(fVar3 * 90f);
		}
	
		Global_21555 = { func_93(uParam0, uParam3, fVar4) };
		Global_21558 = { func_93(fParam6, fParam9, fVar4) };
	}
	else
	{
		Global_21555 = { uParam3 };
		Global_21558 = { fParam9 };
	}

	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21558, 0);
	return fVar3;
}

Vector3 func_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x5B3D
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_94(float fParam0, float fParam1, float fParam2) // Position - 0x5B57
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

bool func_95() // Position - 0x5B7E
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
	
		if (func_38(14))
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

void func_96() // Position - 0x5DC7
{
	float fVar0;

	fVar0 = func_92(Static_45, Static_48, Global_21587, -90f, 0f, 90f, 350f, false);

	if (Global_10301 == 0)
		if (MISC::IS_PC_VERSION())
			if (!func_97())
				MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * fVar0));
		else
			MOBILE::SET_MOBILE_PHONE_SCALE(500f + (75f * fVar0));

	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_24034 = false;
		Static_16 = 0;
	}
}

bool func_97() // Position - 0x5E43
{
	var uVar0;
	int iVar1;

	uVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);

	if (iVar1 == 4)
		return true;

	return false;
}

void func_98(bool bParam0) // Position - 0x5E67
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (MISC::IS_XBOX360_VERSION() || func_99())
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	else
		HUD::GET_HUD_COLOUR(126, &uVar0, &uVar1, &uVar2, &uVar3);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_99() // Position - 0x5EE5
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_100(bool bParam0) // Position - 0x5EFB
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (MISC::IS_XBOX360_VERSION() || func_99())
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	else
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_101(bool bParam0) // Position - 0x5F75
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (MISC::IS_XBOX360_VERSION() || func_99())
		HUD::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
	else
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);

	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21608, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_102() // Position - 0x5FF1
{
	func_103();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_103() // Position - 0x600A
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_106(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_105(PLAYER::PLAYER_PED_ID());
		
			if (func_104(iVar0) && !func_38(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_104(Global_114931.f_2370.f_539.f_4321))
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

bool func_104(int iParam0) // Position - 0x6107
{
	return iParam0 < 3;
}

int func_105(var uParam0) // Position - 0x6113
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_106(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_106(int iParam0) // Position - 0x6150
{
	if (func_104(iParam0))
		return func_107(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_107(int iParam0) // Position - 0x6175
{
	return Global_2339[iParam0 /*29*/];
}

