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
	int Static_26 = 0;
	bool Static_27 = 0;
	bool Static_28 = 0;
	bool Static_29 = 0;
	bool Static_30 = 0;
	var Static_31 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;

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
	Static_26 = -1;
	Static_30 = true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("EXILE_CITY_DENIAL")) > 1)
	{
		Global_44851 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_42(18);
	func_41();
	BUILTIN::SETTIMERA(0);
	BUILTIN::SETTIMERB(0);
	iVar0 = 2;
	iVar1 = 0;

	while (!Static_29)
	{
		Static_29 = true;
	
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		{
			Global_44851 = 0;
		
			if (!func_40(130))
			{
				func_39(18);
				func_38();
			}
			else if (func_40(131))
			{
				func_39(18);
				func_38();
			}
		
			switch (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP())
			{
				case 16:
					func_39(18);
					func_38();
					break;
			
				case 2:
					func_38();
					break;
			
				case 1:
					func_25(1628462442);
					func_25(1791324372);
					func_25(-240877892);
					func_25(1806999335);
					func_25(2054503592);
					func_25(-2009081795);
					Static_27 = 0;
				
					while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						BUILTIN::WAIT(1000);
					}
				
					Static_29 = false;
					break;
			}
		}
	}

	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 = iVar1 - BUILTIN::TIMERA();
			BUILTIN::SETTIMERA(0);
		
			if (iVar1 < 0)
				iVar1 = 0;
		}
	
		uVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		Static_27 = func_24(uVar2, &Static_30);
	
		if (Global_80576 || Global_80576.f_1)
			Static_27 = 0;
	
		bVar5 = false;
		bVar6 = false;
	
		if (func_40(131))
			bVar5 = true;
	
		if (!func_40(130))
			bVar5 = true;
	
		if (bVar5)
		{
			Global_44851 = 0;
			func_39(18);
			func_38();
		}
	
		if (func_22() == 1)
			bVar6 = true;
	
		Global_44851 = Static_27;
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					Static_27 = 0;
	
		if (Static_28 != Static_27)
		{
			if (!Static_27)
				func_20();
		
			if (Static_27 && !bVar6)
			{
				bVar7 = false;
				bVar8 = true;
			
				while (bVar8)
				{
					switch (func_18(&Static_26, 6, 12, false, 0))
					{
						case 0:
							bVar8 = false;
							bVar7 = false;
							break;
					
						case 1:
							bVar8 = false;
							bVar7 = true;
							break;
					
						default:
							BUILTIN::WAIT(0);
							break;
					}
				
					if (Global_80305)
						SCRIPT::TERMINATE_THIS_THREAD();
				}
			
				if (bVar7)
				{
					PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
				
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						uVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					
						while (INTERIOR::IS_VALID_INTERIOR(uVar9))
						{
							BUILTIN::WAIT(5000);
							PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
						
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								uVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						}
					}
				
					if (func_15(PLAYER::PLAYER_PED_ID()) == 0)
						if (!IS_BIT_SET(Global_114931.f_7695.f_923, 0))
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_114931.f_7695.f_923, 1))
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_114931.f_7695.f_923, 2))
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
					else if (func_15(PLAYER::PLAYER_PED_ID()) == 2)
						if (!IS_BIT_SET(Global_114931.f_7695.f_923, 3))
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_114931.f_7695.f_923, 4))
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_114931.f_7695.f_923, 4))
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
				
					if (iVar1 == 0 && !bVar6)
					{
						if (!func_9(0) && !func_9(4) && !func_9(3))
						{
							if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256)
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &Static_31, 0, 0);
						
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (Static_30)
									func_8("CITDENAL" /* GXT: Michael and Trevor have been exiled from the city. If they enter the city, Martin's henchmen will track them down. */, -1);
								else
									func_8("CITDENAL_R" /* GXT: Michael and Trevor have been exiled by Martin. Approaching his ranch will cause his henchmen to attack. */, -1);
							
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					Static_27 = false;
				}
			}
			else
			{
				func_20();
			}
		}
	
		if (Static_27)
			if (!MISC::IS_INCIDENT_VALID(Static_31))
				if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256)
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &Static_31, 0, 0);
	
		if (Static_27 && BUILTIN::TIMERB() > 60000)
		{
			BUILTIN::SETTIMERB(0);
			iVar0 = iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2);
		
			if (iVar0 < 8)
				if (MISC::IS_INCIDENT_VALID(Static_31))
					MISC::SET_INCIDENT_REQUESTED_UNITS(Static_31, 11, iVar0);
				else if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(11) < 256)
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &Static_31, 0, 0);
			else
				iVar0 = 8;
		}
	
		Static_28 = Static_27;
	
		if (bVar6)
		{
			Global_44851 = 0;
		
			if (Static_27)
				func_20();
		
			func_4();
		
			while (func_22() == 1)
			{
				BUILTIN::WAIT(2000);
			}
		
			func_41();
			bVar6 = false;
		}
	
		if (Static_27)
			BUILTIN::WAIT(0);
		else
			BUILTIN::WAIT(10000);
	
		if (func_1(12) && !func_9(12))
		{
			if (Static_27)
				func_20();
		
			while (func_9(0) || func_9(4))
			{
				BUILTIN::WAIT(8000);
			}
		}
	}

	func_4();
}

bool func_1(int iParam0) // Position - 0x5EE
{
	if (Global_44886 == 15)
		return false;

	if (func_2(iParam0))
		return false;

	return true;
}

bool func_2(int iParam0) // Position - 0x610
{
	return func_3(iParam0, Global_44886);
}

bool func_3(int iParam0, int iParam1) // Position - 0x621
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

void func_4() // Position - 0x802
{
	func_7(0, true);
	func_7(2, true);
	func_7(1, true);
	func_5(0, true);
	func_5(1, true);
	func_5(3, true);
	func_5(2, true);
}

void func_5(int iParam0, bool bParam1) // Position - 0x834
{
	if (iParam0 == 7)
		return;

	if (bParam1)
		MISC::SET_BIT(&Global_114931.f_7236.f_17[iParam0], 0);
	else
		MISC::CLEAR_BIT(&Global_114931.f_7236.f_17[iParam0], 0);

	MISC::DISABLE_POLICE_RESTART(Global_97568[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_97568[iParam0 /*9*/].f_7, false, false);
}

void func_6(int iParam0, bool bParam1, bool bParam2) // Position - 0x892
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		bVar1 = IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 15);
	
		if (bVar1 == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
	
		if (Global_34169 == true)
			Global_34170 = true;
	
		Global_34169 = true;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_34172[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_34172[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

void func_7(int iParam0, bool bParam1) // Position - 0x992
{
	if (iParam0 == 5)
		return;

	if (bParam1)
		MISC::SET_BIT(&Global_114931.f_7236.f_11[iParam0], 0);
	else
		MISC::CLEAR_BIT(&Global_114931.f_7236.f_11[iParam0], 0);

	MISC::DISABLE_HOSPITAL_RESTART(Global_97632[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_97632[iParam0 /*9*/].f_7, 0, false);
}

void func_8(char* sParam0, int iParam1) // Position - 0x9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_9(int iParam0) // Position - 0xA07
{
	return Global_44886 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xA15
{
	int iVar0;
	int iVar15;

	if (func_14(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam8 == 76)
		return 0;

	if (iParam9 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam4 < 3)
		if (iParam4 != iParam3)
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_114931.f_7695.f_136 < 9)
	{
		iVar0 = iParam0;
	
		if (Global_114931.f_7695.f_911 == iVar0)
			Global_114931.f_7695.f_911 = -1;
	
		iVar0.f_3 = func_13(iParam1);
		iVar0.f_1 = iParam11;
		iVar0.f_2 = iParam2;
		iVar0.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		iVar0.f_5 = iParam6;
		iVar0.f_6 = iParam3;
		iVar0.f_14 = iParam4;
		iVar0.f_10 = iParam7;
		iVar0.f_11 = -1;
		iVar0.f_7 = iParam8;
		iVar0.f_8 = iParam9;
		iVar0.f_9 = iParam10;
		MISC::CLEAR_BIT(&(iVar0.f_1), 1);
		MISC::CLEAR_BIT(&(iVar0.f_1), 0);
	
		if (iParam7 != -1)
			MISC::SET_BIT(&(iVar0.f_1), 11);
		else if (iParam1 == 0)
			MISC::SET_BIT(&(iVar0.f_1), 10);
	
		Global_114931.f_7695[Global_114931.f_7695.f_136 /*15*/] = { iVar0 };
		Global_114931.f_7695.f_136 = Global_114931.f_7695.f_136 + 1;
	
		for (iVar15 = 0; iVar15 < 3; iVar15 = iVar15 + 1)
		{
			if (IS_BIT_SET(iParam2, iVar15))
				func_11(iVar15);
		}
	
		return 1;
	}

	return 0;
}

void func_11(int iParam0) // Position - 0xB8F
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;

	if (!func_12(iParam0))
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

bool func_12(int iParam0) // Position - 0xC4D
{
	return iParam0 < 3;
}

int func_13(int iParam0) // Position - 0xC59
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

bool func_14(bool bParam0) // Position - 0xCC3
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

int func_15(var uParam0) // Position - 0xCEB
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

int func_16(int iParam0) // Position - 0xD28
{
	if (func_12(iParam0))
		return func_17(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_17(int iParam0) // Position - 0xD4D
{
	return Global_2339[iParam0 /*29*/];
}

int func_18(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4) // Position - 0xD5C
{
	int iVar0;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99907.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_1(0))
			return 0;
	
		Global_44850 = Global_44850 + 1;
		*uParam0 = Global_44850;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_24407.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44886 = iParam2;
		Global_44848 = *uParam0;
		Global_44849 = iParam4;
		Global_44847 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44847 > 0)
		{
			iVar0 = 0;
		
			for (iVar0 = 0; iVar0 < Global_44847; iVar0 = iVar0 + 1)
			{
				if (Global_44853[iVar0 /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44848 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!func_2(iParam2))
			return 0;
	
		if (Global_44847 == 8)
			return 0;
	
		Global_44850 = Global_44850 + 1;
		*uParam0 = Global_44850;
		Global_44853[Global_44847 /*4*/] = Global_44850;
		Global_44853[Global_44847 /*4*/].f_1 = iParam1;
		Global_44853[Global_44847 /*4*/].f_2 = iParam2;
		Global_44853[Global_44847 /*4*/].f_3 = 0;
		Global_44847 = Global_44847 + 1;
	
		if (iParam4 != 0)
			func_19(uParam0, iParam4);
	}

	return 2;
}

void func_19(var uParam0, int iParam1) // Position - 0xE93
{
	int iVar0;

	if (Global_44847 == 0)
		return;

	if (*uParam0 == -1)
		return;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < Global_44847; iVar0 = iVar0 + 1)
	{
		if (Global_44853[iVar0 /*4*/] == *uParam0)
			Global_44853[iVar0 /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
}

void func_20() // Position - 0xEE2
{
	if (Static_26 != -1)
		func_21(&Static_26);

	func_25(1628462442);
	func_25(1791324372);
	func_25(-240877892);
	func_25(1806999335);
	func_25(2054503592);
	func_25(-2009081795);
	Static_27 = 0;
	Static_28 = false;
	Global_44851 = 0;
	MISC::DELETE_INCIDENT(Static_31);
}

void func_21(var uParam0) // Position - 0xF42
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44848))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44847 = 0;
	Global_44849 = 0;
	Global_44886 = 15;
	Global_65024 = false;
	Global_65025 = 0;
}

int func_22() // Position - 0xF7F
{
	func_23();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_23() // Position - 0xF98
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
		
			if (func_12(iVar0) && !func_9(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_12(Global_114931.f_2370.f_539.f_4321))
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

int func_24(float fParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1095
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
		return 0;

	if (fParam0.f_1 < 400f)
	{
		if (fParam0 < 1400f)
		{
			if (fParam0 > -1900f)
			{
				if (fParam0.f_1 > -3500f)
				{
					*uParam3 = 1;
					return 1;
				}
			}
		}
	}

	if (fParam0 < 1536.35f)
	{
		if (fParam0.f_1 > 1016.18f)
		{
			if (fParam0.f_1 < 1213.53f)
			{
				if (fParam0 > 1278.08f)
				{
					*uParam3 = 0;
					return 1;
				}
			}
		}
	}

	return 0;
}

int func_25(int iParam0) // Position - 0x1124
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
				func_37(iVar0);
				func_29(iParam0);
				iVar1 = 1;
			}
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_198; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar0 /*15*/] == iParam0)
		{
			func_29(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_650; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar0 /*15*/] == iParam0)
		{
			func_28(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_764; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_651[iVar0 /*14*/] == iParam0)
		{
			func_27(iVar0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_866; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_765[iVar0 /*10*/] == iParam0)
		{
			func_26(iVar0);
			iVar1 = 1;
		}
	}

	return iVar1;
}

void func_26(int iParam0) // Position - 0x124B
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

void func_27(int iParam0) // Position - 0x1304
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

	func_11(0);
	func_11(1);
	func_11(2);
}

void func_28(int iParam0) // Position - 0x13CC
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

void func_29(int iParam0) // Position - 0x1479
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_198; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar15 /*15*/] == iParam0)
		{
			func_30(Global_114931.f_7695.f_137[iVar15 /*15*/].f_6);
		
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

int func_30(int iParam0) // Position - 0x1535
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (func_36(iParam0, Global_21627) == 1)
		{
			func_35(iParam0, Global_21627, 0);
		
			if (func_34(iParam0, Global_21627) == 0)
			{
				iVar0 = Global_21627;
				func_31(iParam0, iVar0);
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

void func_31(int iParam0, int iParam1) // Position - 0x158B
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
			func_33(iParam0, iVar0, 0);
			func_32(iParam0, iVar0, 0);
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2) // Position - 0x15C0
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
}

void func_33(int iParam0, int iParam1, int iParam2) // Position - 0x1605
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
}

int func_34(int iParam0, int iParam1) // Position - 0x164A
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_35(int iParam0, int iParam1, int iParam2) // Position - 0x1674
{
	Global_2339[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_19[iParam1] = iParam2;
}

int func_36(int iParam0, int iParam1) // Position - 0x16A5
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

void func_37(int iParam0) // Position - 0x16CF
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
			func_11(iVar0);
	}
}

void func_38() // Position - 0x17A7
{
	func_20();
	func_4();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_39(int iParam0) // Position - 0x17BB
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

bool func_40(int iParam0) // Position - 0x1812
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

void func_41() // Position - 0x183F
{
	func_7(0, false);
	func_7(2, false);
	func_7(1, false);
	func_5(0, false);
	func_5(1, false);
	func_5(3, false);
	func_5(2, false);
}

int func_42(int iParam0) // Position - 0x1871
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

