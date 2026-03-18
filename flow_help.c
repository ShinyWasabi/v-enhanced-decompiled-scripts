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
	int Static_35 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;

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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
		func_23();

	while (true)
	{
		if (Global_114931.f_20417.f_145 > 0 || Global_113568)
		{
			if (!Global_113568)
			{
				if (Global_44886 != 6 && Global_44886 != 15 && !Global_98436)
					func_23();
			
				if (!Global_113567)
				{
					if (Global_114931.f_20417.f_145 > 0)
					{
						if (func_20(&Global_114931.f_20417[Static_35 /*16*/]))
						{
							if (func_18(func_19()))
							{
								if (IS_BIT_SET(Global_114931.f_20417[Static_35 /*16*/].f_11, func_12()))
								{
									if (Global_114931.f_20417[Static_35 /*16*/].f_12 == Global_114931.f_20417.f_146[func_12()])
									{
										if (MISC::GET_GAME_TIMER() > Global_113570)
										{
											if (MISC::GET_GAME_TIMER() > Global_114931.f_20417[Static_35 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_114931.f_20417[Static_35 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_11(&Global_114931.f_20417[Static_35 /*16*/]);
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_10(&Global_114931.f_20417[Static_35 /*16*/], &(Global_114931.f_20417[Static_35 /*16*/].f_4));
												}
											
												if (Global_114931.f_20417[Static_35 /*16*/].f_13 != 0)
													func_9(Global_114931.f_20417[Static_35 /*16*/].f_13, 0);
											
												Static_18 = { Global_114931.f_20417[Static_35 /*16*/] };
												Static_18.f_4 = { Global_114931.f_20417[Static_35 /*16*/].f_4 };
												Static_18.f_8 = Global_114931.f_20417[Static_35 /*16*/].f_8;
												Static_18.f_10 = Global_114931.f_20417[Static_35 /*16*/].f_10;
												Static_18.f_9 = Global_114931.f_20417[Static_35 /*16*/].f_9;
												Static_18.f_11 = Global_114931.f_20417[Static_35 /*16*/].f_11;
												Static_18.f_12 = Global_114931.f_20417[Static_35 /*16*/].f_12;
												Static_18.f_13 = Global_114931.f_20417[Static_35 /*16*/].f_13;
												Static_18.f_14 = Global_114931.f_20417[Static_35 /*16*/].f_14;
												Static_18.f_15 = Global_114931.f_20417[Static_35 /*16*/].f_15;
												Static_18.f_16 = 0;
												Global_113571 = { Global_114931.f_20417[Static_35 /*16*/] };
												Global_113569 = MISC::GET_GAME_TIMER();
											
												for (iVar0 = Static_35; iVar0 <= Global_114931.f_20417.f_145 - 2; iVar0 = iVar0 + 1)
												{
													func_8(iVar0, iVar0 + 1);
												}
											
												func_7(Global_114931.f_20417.f_145 - 1);
												Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 - 1;
												func_6();
												Global_113568 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Static_18.f_4), ""))
					if (func_3(&Static_18))
						HUD::CLEAR_HELP(0);
				else if (func_2(&Static_18, &(Static_18.f_4)))
					HUD::CLEAR_HELP(0);
			
				if (MISC::GET_GAME_TIMER() - Global_113569 > 4000 || Static_18.f_16)
				{
					if (Static_18.f_14 != 0)
						func_9(Static_18.f_14, 0);
				
					Global_113570 = MISC::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Static_18.f_10 != -1)
						iVar1 = 20000;
					else
						iVar1 = -1;
				
					func_1(&Static_18, &(Static_18.f_4), Static_18.f_12, 1000, iVar1, Static_18.f_9, Static_18.f_11, Static_18.f_13, Static_18.f_14, Static_18.f_15);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&Static_18, "", 16);
				TEXT_LABEL_ASSIGN_STRING(&(Static_18.f_4), "", 16);
				Static_18.f_8 = 0;
				Static_18.f_9 = 0;
				Static_18.f_10 = -1;
				Static_18.f_11 = 0;
				Static_18.f_12 = 0;
				Static_18.f_13 = 0;
				Static_18.f_14 = 0;
				Static_18.f_15 = 0;
				Static_18.f_16 = 0;
				Global_113569 = 0;
				Global_113568 = false;
			}
		
			if (!MISC::ARE_STRINGS_EQUAL(&Global_114931.f_20417[Static_35 /*16*/], &Static_18) && !MISC::ARE_STRINGS_EQUAL(&Global_114931.f_20417[Static_35 /*16*/], ""))
			{
				if (Global_114931.f_20417[Static_35 /*16*/].f_10 != -1)
				{
					if (MISC::GET_GAME_TIMER() > Global_114931.f_20417[Static_35 /*16*/].f_10)
					{
						for (iVar2 = Static_35; iVar2 <= Global_114931.f_20417.f_145 - 2; iVar2 = iVar2 + 1)
						{
							func_8(iVar2, iVar2 + 1);
						}
					
						func_7(Global_114931.f_20417.f_145 - 1);
						Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 - 1;
						func_6();
					}
				}
			}
		
			Static_35 = Static_35 + 1;
		
			if (Static_35 >= Global_114931.f_20417.f_145)
				Static_35 = 0;
		}
		else if (Global_44886 != 6 && Global_44886 != 15 && !Global_98436)
		{
			func_23();
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9) // Position - 0x472
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
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_12 = uParam2;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_15 = uParam9;
	
		if (iParam4 != -1)
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = -1;
	
		Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 + 1;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1) // Position - 0x644
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_3(var uParam0) // Position - 0x65D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_4() // Position - 0x670
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (func_5())
		return false;

	if (Static_18.f_9 != -1 && MISC::GET_GAME_TIMER() - Global_113569 > Static_18.f_9)
		return false;

	if (Global_113567)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (MISC::ARE_STRINGS_EQUAL(&(Static_18.f_4), ""))
	{
		if (!func_3(&Static_18))
		{
			Static_18.f_16 = 1;
			return false;
		}
	}
	else if (!func_2(&Static_18, &(Static_18.f_4)))
	{
		Static_18.f_16 = 1;
		return false;
	}

	return true;
}

bool func_5() // Position - 0x6FF
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

void func_6() // Position - 0x719
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

void func_7(int iParam0) // Position - 0x830
{
	TEXT_LABEL_ASSIGN_STRING(&Global_114931.f_20417[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_20417[iParam0 /*16*/].f_4), "", 16);
	Global_114931.f_20417[iParam0 /*16*/].f_8 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_9 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_11 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_10 = -1;
	Global_114931.f_20417[iParam0 /*16*/].f_12 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_13 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_14 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1) // Position - 0x8C8
{
	Global_114931.f_20417[iParam0 /*16*/] = { Global_114931.f_20417[iParam1 /*16*/] };
	Global_114931.f_20417[iParam0 /*16*/].f_4 = { Global_114931.f_20417[iParam1 /*16*/].f_4 };
	Global_114931.f_20417[iParam0 /*16*/].f_8 = Global_114931.f_20417[iParam1 /*16*/].f_8;
	Global_114931.f_20417[iParam0 /*16*/].f_10 = Global_114931.f_20417[iParam1 /*16*/].f_10;
	Global_114931.f_20417[iParam0 /*16*/].f_9 = Global_114931.f_20417[iParam1 /*16*/].f_9;
	Global_114931.f_20417[iParam0 /*16*/].f_11 = Global_114931.f_20417[iParam1 /*16*/].f_11;
	Global_114931.f_20417[iParam0 /*16*/].f_12 = Global_114931.f_20417[iParam1 /*16*/].f_12;
	Global_114931.f_20417[iParam0 /*16*/].f_13 = Global_114931.f_20417[iParam1 /*16*/].f_13;
	Global_114931.f_20417[iParam0 /*16*/].f_14 = Global_114931.f_20417[iParam1 /*16*/].f_14;
	Global_114931.f_20417[iParam0 /*16*/].f_15 = Global_114931.f_20417[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1) // Position - 0x9D8
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_114931.f_8620[iParam0] = true;
	Global_114931.f_8620.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
}

void func_10(char* sParam0, char* sParam1) // Position - 0xA15
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_11(char* sParam0) // Position - 0xA31
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_12() // Position - 0xA47
{
	func_13();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_13() // Position - 0xA60
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
		
			if (func_18(iVar0) && !func_14(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_18(Global_114931.f_2370.f_539.f_4321))
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

bool func_14(int iParam0) // Position - 0xB5D
{
	return Global_44886 == iParam0;
}

int func_15(var uParam0) // Position - 0xB6B
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_16(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_16(int iParam0) // Position - 0xBA8
{
	if (func_18(iParam0))
		return func_17(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_17(int iParam0) // Position - 0xBCD
{
	return Global_2339[iParam0 /*29*/];
}

bool func_18(int iParam0) // Position - 0xBDC
{
	return iParam0 < 3;
}

int func_19() // Position - 0xBE8
{
	func_13();
	return Global_114931.f_2370.f_539.f_4321;
}

bool func_20(char* sParam0) // Position - 0xC01
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return false;

	if (func_22())
		return false;

	if (func_5())
		return false;

	if (sParam0->f_12 < 3)
	{
		if (func_21())
			return false;
	
		if (Global_80303)
			return false;
	
		if (Global_99349)
			return false;
	
		if (!IS_BIT_SET(sParam0->f_15, 1))
			if (Global_99357)
				return false;
	}

	return true;
}

bool func_21() // Position - 0xC8B
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

bool func_22() // Position - 0xCB5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

void func_23() // Position - 0xCD1
{
	if (Global_113568)
		if (MISC::ARE_STRINGS_EQUAL(&(Static_18.f_4), ""))
			if (func_3(&Static_18))
				HUD::CLEAR_HELP(1);
		else if (func_2(&Static_18, &(Static_18.f_4)))
			HUD::CLEAR_HELP(1);

	Global_113569 = 0;
	Global_113568 = false;
	SCRIPT::TERMINATE_THIS_THREAD();
}

