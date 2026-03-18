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
	var Static_25 = 0;
	bool Static_26 = 0;
#endregion

void main() // Position - 0x0
{
	bool bVar0;

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
	Static_26 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_62();

	func_61(20);
	func_60();
	func_59(1);
	func_59(0);
	func_59(2);
	func_59(13);
	func_59(12);
	Global_9468 = 1;
	func_58();

	if (!func_57(-1615086084))
		func_56(-1615086084, 2, 2, 2, 1, -1, 5);

	if (!func_57(-1970925435))
		func_56(-1970925435, 2, 0, 0, 1, -1, 5);

	if (!func_57(-1817481777))
		func_56(-1817481777, 2, 12, 3, 1, -1, 5);

	bVar0 = false;

	while (func_55(23) && !func_54(134))
	{
		if (func_49() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if (!bVar0)
						{
							if (!(func_48() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_47()))
								if (func_13())
									bVar0 = true;
						}
						else
						{
							if (Static_26)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 384);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(0, 173, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 172, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 174, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 175, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 176, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 177, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 178, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 179, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							}
						
							switch (func_12())
							{
								case -1615086084:
									if (!func_57(-1989308064))
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 2, 1);
									break;
							
								case -1970925435:
									if (!func_57(-1060930305))
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1060930305:
									func_7(12, 1);
									func_6(134, true);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 1, 1);
									break;
							
								case -1817481777:
									func_7(12, 2);
									func_6(134, true);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 3, 1);
									break;
							
								default:
									if (!func_5(0))
										bVar0 = false;
									else if (Static_26)
										if (func_4())
											Static_26 = false;
									break;
							}
						}
					}
				}
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_3(20);
	Global_102493 = false;
	func_1();
	func_62();
}

int func_1() // Position - 0x2F3
{
	if (func_2(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_2(bool bParam0) // Position - 0x33E
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

int func_3(int iParam0) // Position - 0x366
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114931.f_9092.f_99.f_219[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&Global_114931.f_9092.f_99.f_219[iVar0], iVar1);
		return 1;
	}

	return 0;
}

bool func_4() // Position - 0x3BD
{
	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		return true;

	return false;
}

bool func_5(int iParam0) // Position - 0x3E6
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

void func_6(int iParam0, bool bParam1) // Position - 0x43D
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114931.f_9092.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114931.f_9092.f_99.f_58[iParam0] = bParam1;
}

void func_7(int iParam0, int iParam1) // Position - 0x482
{
	if (iParam0 == 13 || iParam0 == -1)
		return;

	if (Global_114931.f_9092.f_99.f_205[iParam0] == iParam1)
		return;

	Global_114931.f_9092.f_99.f_205[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x4C7
{
	int iVar0;
	int iVar15;

	if (func_2(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam7 == 76)
		return 0;

	if (iParam8 == 235)
		return 0;

	if (iParam3 == iParam2)
		return 0;

	if (iParam2 != 144 && iParam2 != 0 && iParam2 != 1 && iParam2 != 2)
		return 0;

	if (Global_114931.f_7695.f_136 < 9)
	{
		iVar0 = iParam0;
	
		if (Global_114931.f_7695.f_911 == iVar0)
			Global_114931.f_7695.f_911 = -1;
	
		iVar0.f_3 = func_11(iParam1);
		iVar0.f_5 = iParam6;
		iVar0.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		iVar0.f_1 = iParam10;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam2);
		iVar0.f_2 = iVar15;
		iVar0.f_6 = iParam3;
		iVar0.f_14 = iParam4;
		iVar0.f_10 = -1;
		iVar0.f_11 = -1;
		iVar0.f_7 = iParam7;
		iVar0.f_8 = iParam8;
		iVar0.f_9 = iParam9;
		MISC::SET_BIT(&(iVar0.f_1), 0);
		MISC::CLEAR_BIT(&(iVar0.f_1), 1);
	
		if (iParam1 == 0)
			MISC::SET_BIT(&(iVar0.f_1), 10);
	
		Global_114931.f_7695[Global_114931.f_7695.f_136 /*15*/] = { iVar0 };
		Global_114931.f_7695.f_136 = Global_114931.f_7695.f_136 + 1;
		func_9(iParam2);
		return 1;
	}

	return 0;
}

void func_9(int iParam0) // Position - 0x618
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;

	if (!func_10(iParam0))
		return;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_7695[iVar0 /*15*/].f_2, iParam0))
			if (Global_114931.f_7695[iVar0 /*15*/].f_3 > iVar1)
				iVar1 = Global_114931.f_7695[iVar0 /*15*/].f_3;
	}

	for (iVar2 = 0; iVar2 < Global_114931.f_7695.f_764; iVar2 = iVar2 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_7695.f_651[iVar2 /*14*/].f_2, iParam0))
			if (Global_114931.f_7695.f_651[iVar2 /*14*/].f_3 == 5)
				iVar1 = 5;
	}

	Global_114931.f_7695.f_919[iParam0] = iVar1;
}

bool func_10(int iParam0) // Position - 0x6D6
{
	return iParam0 < 3;
}

int func_11(int iParam0) // Position - 0x6E2
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

int func_12() // Position - 0x74C
{
	return Global_114931.f_7695.f_911;
}

bool func_13() // Position - 0x75E
{
	if (Global_21627.f_1 > 3)
	{
		MISC::CLEAR_BIT(&Global_9464, 0);
		func_42(0);
		return false;
	}

	MISC::SET_BIT(&Global_9464, 0);

	if (func_14(0, 0, 1, true))
		return true;

	MISC::CLEAR_BIT(&Global_9464, 0);
	return false;
}

bool func_14(int iParam0, int iParam1, int iParam2, bool bParam3) // Position - 0x7A3
{
	if (Global_80305)
	{
		if (iParam0 != 17 && iParam0 != 3 && iParam0 != 25 && iParam0 != 1)
			return false;
	
		if (!IS_BIT_SET(Global_4524844, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4524844, 14);
				MISC::SET_BIT(&Global_4524844, 16);
			}
		
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4524844, 14);
				MISC::SET_BIT(&Global_4524844, 15);
			}
		
			if (iParam0 == 25)
			{
				MISC::SET_BIT(&Global_4524844, 14);
				MISC::SET_BIT(&Global_4524844, 27);
			}
		
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4524844, 14);
				MISC::SET_BIT(&Global_4524844, 29);
			}
		}
	
		if (Global_9470[iParam0 /*15*/].f_9 == 0)
			func_20();
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4524844, 14);
			MISC::CLEAR_BIT(&Global_4524844, 16);
			MISC::CLEAR_BIT(&Global_4524844, 15);
			MISC::CLEAR_BIT(&Global_4524844, 27);
			MISC::CLEAR_BIT(&Global_4524844, 29);
			return true;
		}
		else
		{
			return false;
		}
	}

	func_19();

	if (Global_21627.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_5(0) == true)
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
				func_18("cellphone_flashhand");
			
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

	func_20();
	func_15();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9470[iParam0 /*15*/].f_9) == 0)
	{
		Global_10103 = 0;
		Global_21627.f_1 = 7;
		func_18(&(Global_9470[iParam0 /*15*/].f_5));
	
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

void func_15() // Position - 0x9DE
{
	if (Global_80305 == false)
	{
		Global_9470[14 /*15*/].f_4 = -99;
		Global_9470[4 /*15*/].f_4 = -99;
	
		if (Global_2696976)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xA62
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

bool func_17(int iParam0) // Position - 0xB18
{
	return Global_44886 == iParam0;
}

void func_18(char* sParam0) // Position - 0xB26
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_19() // Position - 0xB46
{
	if (func_17(14))
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
		Global_21627 = func_49();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

void func_20() // Position - 0xBE8
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
			if (func_41(iVar2, Global_21627) == 1)
				iVar1 = 1;
		
			iVar2 = iVar2 + 1;
		}
	
		func_16(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44886 == 15 && func_2(false) == false && Global_9468 == 0)
		{
			func_16(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21862 = 0;
			Global_9469 = 255;
		}
		else
		{
			func_16(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21862 = 1;
			Global_9469 = 42;
		}
	
		if (iVar1 == 1)
			func_16(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_16(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_16(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114931.f_14058.f_89 == true)
			func_16(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114931.f_14058.f_88 == 1)
			func_16(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_16(27, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(29, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(34, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
	
		if (func_26())
			func_16(23, "CELL_VINEWOOD" /* GXT: Vinewood Club */, 5, "appVinewoodMenu", 61, 1, 1, 0, 0);
		else
			func_16(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
	
		if (func_22())
			func_16(24, "CELL_HACKER_ROB" /* GXT: Darnell Inc. */, 3, "appHackerDen", 62, 1, 1, 0, 0);
		else
			func_16(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		func_16(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4524844, 4))
			func_16(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_16(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(25, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(34, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(35, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4524844, 4))
			if (Global_1836236)
				func_16(25, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524844, 20))
				func_16(25, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524844, 22))
				func_16(25, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524844, 26))
				if (func_21())
					func_16(25, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_16(25, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4524844, 4) == false && Global_1836236 == false && IS_BIT_SET(Global_4524844, 20) == false && IS_BIT_SET(Global_4524844, 22) == false && IS_BIT_SET(Global_4524844, 26) == false)
			if (func_21())
				func_16(25, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_16(25, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}
}

bool func_21() // Position - 0x1153
{
	if (Global_80305)
		if (Global_1836644 || Global_1836645 == 1)
			return true;

	return false;
}

bool func_22() // Position - 0x117A
{
	return func_23() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

bool func_23() // Position - 0x1190
{
	return func_24(9539, -1);
}

bool func_24(int iParam0, int iParam1) // Position - 0x11A0
{
	if (iParam1 == -1)
		iParam1 = func_25();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_25() // Position - 0x11BC
{
	return Global_1574927;
}

bool func_26() // Position - 0x11C8
{
	return !(func_40() || NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_38() || func_27(false));
}

bool func_27(bool bParam0) // Position - 0x11F4
{
	if (bParam0)
		return func_30();

	return func_28(func_29());
}

bool func_28(int iParam0) // Position - 0x1210
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_29() // Position - 0x1225
{
	return Global_1912540[PLAYER::PLAYER_ID() /*319*/].f_279;
}

bool func_30() // Position - 0x123B
{
	return func_36(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_35() != 0 && !func_31(0);
}

bool func_31(int iParam0) // Position - 0x126B
{
	int iVar0;

	iVar0 = func_32(16738, -1);
	return IS_BIT_SET(iVar0, iParam0);
}

int func_32(int iParam0, int iParam1) // Position - 0x1282
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_33(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

var func_33(int iParam0, int iParam1) // Position - 0x12B1
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_34(iParam1));
}

int func_34(int iParam0) // Position - 0x12C6
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_25();
	
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

int func_35() // Position - 0x12FA
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

bool func_36(int iParam0, int iParam1) // Position - 0x1306
{
	var uVar0;
	bool bVar1;

	uVar0 = func_37(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(uVar0, &bVar1, -1))
		return bVar1;

	return false;
}

var func_37(int iParam0, int iParam1) // Position - 0x132A
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_34(iParam1));
}

bool func_38() // Position - 0x133F
{
	return func_39(*Global_4718592.f_139000);
}

bool func_39(int iParam0) // Position - 0x1355
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (Global_262145.f_31313[iVar0] == iParam0)
			return 1;
	}

	return 0;
}

bool func_40() // Position - 0x1384
{
	return IS_BIT_SET(Global_1674270, 4);
}

int func_41(int iParam0, int iParam1) // Position - 0x1392
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

void func_42(int iParam0) // Position - 0x13BC
{
	if (func_46())
		return;

	if (Global_21859)
		if (func_45())
			func_44(true, true);
		else
			func_44(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_43())
		Global_21627.f_1 = 3;
}

bool func_43() // Position - 0x1446
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_44(bool bParam0, bool bParam1) // Position - 0x146D
{
	if (bParam0)
	{
		if (func_5(0))
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

bool func_45() // Position - 0x14E1
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_46() // Position - 0x14EF
{
	return IS_BIT_SET(Global_1964705, 19);
}

bool func_47() // Position - 0x14FE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

int func_48() // Position - 0x151A
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return 1;

	return 0;
}

int func_49() // Position - 0x1534
{
	func_50();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_50() // Position - 0x154D
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_52(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_51(PLAYER::PLAYER_PED_ID());
		
			if (func_10(iVar0) && !func_17(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_10(Global_114931.f_2370.f_539.f_4321))
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

int func_51(var uParam0) // Position - 0x164A
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_52(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_52(int iParam0) // Position - 0x1687
{
	if (func_10(iParam0))
		return func_53(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_53(int iParam0) // Position - 0x16AC
{
	return Global_2339[iParam0 /*29*/];
}

bool func_54(int iParam0) // Position - 0x16BB
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

bool func_55(int iParam0) // Position - 0x16E8
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1714
{
	int iVar0;

	if (func_2(false))
		return 0;

	if (iParam2 < 3)
		if (IS_BIT_SET(iParam1, iParam2))
			return 0;

	if (iParam1 < 1 || iParam1 > 7)
		return 0;

	if (iParam4 <= 0)
		return 0;

	if (Global_114931.f_7695.f_650 < 30)
	{
		iVar0 = iParam0;
	
		if (Global_114931.f_7695.f_911 == iVar0)
			Global_114931.f_7695.f_911 = -1;
	
		iVar0.f_1 = 0;
		iVar0.f_6 = iParam2;
		iVar0.f_2 = iParam1;
		iVar0.f_14 = iParam3;
		iVar0.f_3 = iParam6;
		iVar0.f_7 = -1;
		iVar0.f_8 = 0;
		iVar0.f_9 = -1;
		iVar0.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		iVar0.f_9 = iParam5;
		iVar0.f_10 = -1;
		iVar0.f_11 = -1;
		MISC::SET_BIT(&(iVar0.f_1), 0);
		MISC::SET_BIT(&(iVar0.f_1), 6);
		Global_114931.f_7695.f_199[Global_114931.f_7695.f_650 /*15*/] = { iVar0 };
		Global_114931.f_7695.f_650 = Global_114931.f_7695.f_650 + 1;
		return 1;
	}

	return 0;
}

bool func_57(int iParam0) // Position - 0x1817
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695[iVar0 /*15*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_650; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar0 /*15*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_198; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar0 /*15*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_764; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_651[iVar0 /*14*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_866; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_765[iVar0 /*10*/] == iParam0)
			return true;
	}

	return false;
}

void func_58() // Position - 0x1913
{
	Global_102493 = true;
}

void func_59(int iParam0) // Position - 0x1920
{
	if (iParam0 == 144 || iParam0 == 145 || iParam0 == 161 || iParam0 == 222 || iParam0 == 221 || iParam0 == 162)
		return;

	Global_45438[iParam0] = MISC::GET_GAME_TIMER();
}

void func_60() // Position - 0x1975
{
	Global_45437 = MISC::GET_GAME_TIMER();
}

int func_61(int iParam0) // Position - 0x1984
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114931.f_9092.f_99.f_219[iVar0], iVar1))
		return 0;

	MISC::SET_BIT(&Global_114931.f_9092.f_99.f_219[iVar0], iVar1);
	return 1;
}

void func_62() // Position - 0x19DB
{
	func_63(-1615086084);
	func_63(-1989308064);
	func_63(-1970925435);
	func_63(-1060930305);
	func_63(-1817481777);
	Global_9468 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_63(int iParam0) // Position - 0x1A27
{
	int iVar0;
	int iVar1;

	iVar1 = 0;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695[iVar0 /*15*/] == iParam0)
		{
			if (Global_45433 != iVar0)
			{
				func_74(iVar0);
				func_67(iParam0);
				iVar1 = 1;
			}
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_198; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar0 /*15*/] == iParam0)
		{
			func_67(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_650; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar0 /*15*/] == iParam0)
		{
			func_66(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_764; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_651[iVar0 /*14*/] == iParam0)
		{
			func_65(iVar0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_866; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_765[iVar0 /*10*/] == iParam0)
		{
			func_64(iVar0);
			iVar1 = 1;
		}
	}

	return iVar1;
}

void func_64(int iParam0) // Position - 0x1B4E
{
	int iVar0;
	var uVar1;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_866)
		return;

	if (Global_114931.f_7695.f_866 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_866 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695.f_765[iVar0 /*10*/] = { Global_114931.f_7695.f_765[iVar0 + 1 /*10*/] };
		}
	}

	if (Global_114931.f_7695.f_866 > 0)
	{
		Global_114931.f_7695.f_765[Global_114931.f_7695.f_866 - 1 /*10*/] = { uVar1 };
		Global_114931.f_7695.f_866 = Global_114931.f_7695.f_866 - 1;
	}
}

void func_65(int iParam0) // Position - 0x1C07
{
	int iVar0;
	var uVar1;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_764)
		return;

	if (Global_114931.f_7695.f_764 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_764 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695.f_651[iVar0 /*14*/] = { Global_114931.f_7695.f_651[iVar0 + 1 /*14*/] };
		}
	}

	if (Global_114931.f_7695.f_764 > 0)
	{
		Global_114931.f_7695.f_651[Global_114931.f_7695.f_764 - 1 /*14*/] = { uVar1 };
		Global_114931.f_7695.f_764 = Global_114931.f_7695.f_764 - 1;
	}

	func_9(0);
	func_9(1);
	func_9(2);
}

void func_66(int iParam0) // Position - 0x1CCF
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_650; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar15 /*15*/] == iParam0)
		{
			for (iVar16 = iVar15; iVar16 <= Global_114931.f_7695.f_650 - 2; iVar16 = iVar16 + 1)
			{
				Global_114931.f_7695.f_199[iVar16 /*15*/] = { Global_114931.f_7695.f_199[iVar16 + 1 /*15*/] };
			}
		
			Global_114931.f_7695.f_199[Global_114931.f_7695.f_650 - 1 /*15*/] = { uVar0 };
			Global_114931.f_7695.f_650 = Global_114931.f_7695.f_650 - 1;
			return;
		}
	}
}

void func_67(int iParam0) // Position - 0x1D7C
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_198; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar15 /*15*/] == iParam0)
		{
			func_68(Global_114931.f_7695.f_137[iVar15 /*15*/].f_6);
		
			for (iVar16 = iVar15; iVar16 <= Global_114931.f_7695.f_198 - 2; iVar16 = iVar16 + 1)
			{
				Global_114931.f_7695.f_137[iVar16 /*15*/] = { Global_114931.f_7695.f_137[iVar16 + 1 /*15*/] };
			}
		
			Global_114931.f_7695.f_137[Global_114931.f_7695.f_198 - 1 /*15*/] = { uVar0 };
			Global_114931.f_7695.f_198 = Global_114931.f_7695.f_198 - 1;
			return;
		}
	}
}

int func_68(int iParam0) // Position - 0x1E38
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (func_41(iParam0, Global_21627) == 1)
		{
			func_73(iParam0, Global_21627, 0);
		
			if (func_72(iParam0, Global_21627) == 0)
			{
				iVar0 = Global_21627;
				func_69(iParam0, iVar0);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_69(int iParam0, int iParam1) // Position - 0x1E8E
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_71(iParam0, iVar0, 0);
			func_70(iParam0, iVar0, 0);
		}
	}
}

void func_70(int iParam0, int iParam1, int iParam2) // Position - 0x1EC3
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
}

void func_71(int iParam0, int iParam1, int iParam2) // Position - 0x1F08
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
}

int func_72(int iParam0, int iParam1) // Position - 0x1F4D
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_73(int iParam0, int iParam1, int iParam2) // Position - 0x1F77
{
	Global_2339[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_19[iParam1] = iParam2;
}

void func_74(int iParam0) // Position - 0x1FA8
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_136)
		return;

	iVar1 = Global_114931.f_7695[iParam0 /*15*/].f_2;

	if (Global_114931.f_7695.f_136 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_136 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695[iVar0 /*15*/] = { Global_114931.f_7695[iVar0 + 1 /*15*/] };
		}
	}

	if (Global_114931.f_7695.f_136 > 0)
	{
		Global_114931.f_7695[Global_114931.f_7695.f_136 - 1 /*15*/] = { uVar2 };
		Global_114931.f_7695.f_136 = Global_114931.f_7695.f_136 - 1;
	}

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(iVar1, iVar0))
			func_9(iVar0);
	}
}

