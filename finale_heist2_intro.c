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
	var Static_26 = 0;
	var Static_27 = 0;
	float Static_28 = 0f;
	float Static_29 = 0f;
	float Static_30 = 0f;
	var Static_31 = 0;
	var Static_32 = 0;
	var Static_33 = 0;
#endregion

void main() // Position - 0x0
{
	var uVar0;
	bool bVar1;

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
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_20();

	MISC::SET_MISSION_FLAG(1);
	func_19(0);
	func_18();
	SCRIPT::SCRIPT_THREAD_ITERATOR_RESET();

	while (!bVar1)
	{
		uVar0 = SCRIPT::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	
		if (MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_NAME_OF_SCRIPT_WITH_THIS_ID(uVar0), "heist_ctrl_finale"))
			bVar1 = true;
	}

	CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(uVar0);
	func_17();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, true, true, true, false, false);
	func_20();
}

void func_1(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15) // Position - 0xE8
{
	func_2(fParam0, fParam3, fParam6, fParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_2(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18) // Position - 0x111
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	float fVar7;
	var uVar10;
	int iVar13;
	var uVar14;
	int iVar15;

	if (bParam15)
		bParam15 = false;

	bVar2 = true;
	iVar3 = 0;
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 0);
			iVar3 = 1;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (bParam18)
				func_16(uVar0);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar0, uParam0, uParam3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				uVar10 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
			
				if (uVar10.f_2 > uParam0.f_2 && uVar10.f_2 < uParam3.f_2 || uVar10.f_2 > uParam3.f_2 && uVar10.f_2 < uParam0.f_2)
					if (func_13(uVar0, uParam0, uParam3, fParam6))
						bVar1 = true;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("TAXI")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0 + uParam3) / { 2f, 2f, 2f }, ENTITY::GET_ENTITY_COORDS(uVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
		
			if (bParam16)
				if (func_4(uVar0, func_6(), true))
					bVar1 = false;
		
			if (bVar1)
			{
				if (!func_3(fParam11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(uVar0);
						VEHICLE::GET_VEHICLE_SIZE(uVar0, &uVar4, &fVar7);
					
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							fParam11 = fParam11 + 3f;
							fParam11.f_1 = fParam11.f_1 + 3f;
						}
					
						if (iVar13 == joaat("ZENTORNO") || iVar13 == joaat("BTYPE") || iVar13 == joaat("DUBSTA3") || iVar13 == joaat("MONSTER"))
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (iVar13 == joaat("T20") || iVar13 == joaat("VIRGO"))
							fParam11 = { fParam11 * { 1.2f, 1.2f, 1.2f } };
					
						if (fVar7 - uVar4 > fParam11)
							bVar2 = false;
						else if (fVar7.f_1 - uVar4.f_1 > fParam11.f_1)
							bVar2 = false;
						else if (fVar7.f_2 - uVar4.f_2 > fParam11.f_2)
							bVar2 = false;
					}
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(uParam7, 5f, 0, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(uVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(uVar0, uParam7, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uVar0, 1084227584);
					
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 0, 1, 0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(uVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uVar0, 1))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 1);
					
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar0, 0))
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uVar0, 1), 1, 0, 0, 1);
					
						VEHICLE::DELETE_VEHICLE(&uVar0);
					}
				}
			}
		
			if (bParam14)
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(uParam0, uParam3, fParam6, 0, 0, 0, 0, 0, 0, 0);
		
			if (iVar3 == 1)
				if (ENTITY::DOES_ENTITY_EXIST(uVar0))
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0))
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 0);
		
			uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
				ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
		
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
		
			if (iVar15 <= 2)
			{
				uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0);
			
				if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
					ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
			}
		
			if (iVar15 <= 4)
			{
				uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 1, 0);
			
				if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
					ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
			
				uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 2, 0);
			
				if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
					ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
			}
		
			VEHICLE::DELETE_VEHICLE(&uVar0);
		}
	}
}

bool func_3(float fParam0, var uParam1, var uParam2) // Position - 0x507
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

bool func_4(var uParam0, int iParam1, bool bParam2) // Position - 0x531
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		return false;

	for (iVar0 = 0; func_5(iParam1, iVar0, &uVar1, &iVar9); iVar0 = iVar0 + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114931.f_7236[iVar9], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&uVar1, uParam0))
				return true;
	}

	return false;
}

bool func_5(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x59F
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

int func_6() // Position - 0x670
{
	func_7();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_7() // Position - 0x689
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_11(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER::PLAYER_PED_ID());
		
			if (func_9(iVar0) && !func_8(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_9(Global_114931.f_2370.f_539.f_4321))
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

bool func_8(int iParam0) // Position - 0x786
{
	return Global_44886 == iParam0;
}

bool func_9(int iParam0) // Position - 0x794
{
	return iParam0 < 3;
}

int func_10(var uParam0) // Position - 0x7A0
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_11(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_11(int iParam0) // Position - 0x7DD
{
	if (func_9(iParam0))
		return func_12(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_12(int iParam0) // Position - 0x802
{
	return Global_2339[iParam0 /*29*/];
}

bool func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x811
{
	float fVar0;
	var uVar3;
	var uVar6;
	var uVar9;
	var uVar12;
	var uVar15;
	var uVar18;
	var uVar31;
	var uVar34;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		uParam1.f_2 = uParam4.f_2;
		fVar0 = { func_15(uParam1 - uParam4) };
		uVar3 = { fVar0 };
		uVar18 = 4;
		fVar0 = -uVar3.f_1;
		fVar0.f_1 = uVar3;
		fVar0.f_2 = 0f;
		uVar6 = { uParam1 - (fVar0 * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		uVar9 = { uParam1 + (fVar0 * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		uVar12 = { uParam4 - (fVar0 * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		uVar15 = { uParam4 + (fVar0 * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0), &uVar31, &uVar34);
		uVar18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, uVar31, uVar31.f_1, 0f) };
		uVar18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, uVar31, uVar34.f_1, 0f) };
		uVar18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, uVar34, uVar31.f_1, 0f) };
		uVar18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, uVar34, uVar34.f_1, 0f) };
	
		if (func_14(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar6, uVar9) || func_14(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar9, uVar15) || func_14(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar12, uVar15) || func_14(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar6, uVar12) || func_14(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar6, uVar9) || func_14(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar9, uVar15) || func_14(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar12, uVar15) || func_14(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar6, uVar12) || func_14(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar6, uVar9) || func_14(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar9, uVar15) || func_14(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar12, uVar15) || func_14(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar6, uVar12) || func_14(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar6, uVar9) || func_14(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar9, uVar15) || func_14(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar12, uVar15) || func_14(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar6, uVar12))
			return true;
	}

	return false;
}

bool func_14(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0xB07
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	fVar0 = fParam0;
	fVar1 = fParam0.f_1;
	fVar2 = fParam3;
	fVar3 = fParam3.f_1;
	uVar4 = uParam6;
	uVar5 = uParam6.f_1;
	fVar6 = fParam9;
	fVar7 = fParam9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - uVar4;
	fVar11 = fVar7 - uVar5;
	fVar12 = ((-fVar9 * (fVar0 - uVar4)) + (fVar8 * (fVar1 - uVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11));
	fVar13 = ((fVar10 * (fVar1 - uVar5)) - (fVar11 * (fVar0 - uVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11));

	if (fVar12 >= 0f && fVar12 <= 1f && fVar13 >= 0f && fVar13 <= 1f)
		return true;

	return false;
}

Vector3 func_15(float fParam0, var uParam1, var uParam2) // Position - 0xBBB
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(fParam0);

	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		fParam0 = { fParam0 * { fVar1, fVar1, fVar1 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_16(var uParam0) // Position - 0xBFA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0) <= 200f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0, 500f);
		
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam0) <= 700f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0, 900f);
		
			if (ENTITY::GET_ENTITY_HEALTH(uParam0) < 200)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0, 500f);
		}
	}
}

void func_17() // Position - 0xC5F
{
	Global_113954 = 1;
}

void func_18() // Position - 0xC6C
{
	int iVar0;

	iVar0 = func_6();

	switch (iVar0)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("BS_2A_2B_INT", 12, 8);
			break;
	
		case 1:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("BS_2A_2B_INT", 14, 8);
			break;
	
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("BS_2A_2B_INT", 8);
			break;
	}

	while (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
	{
		BUILTIN::WAIT(0);
	}
}

void func_19(int iParam0) // Position - 0xCCC
{
	Global_79095.f_138 = iParam0;
}

void func_20() // Position - 0xCDC
{
	func_25(24, 1);
	func_21(true, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_21(bool bParam0, bool bParam1) // Position - 0xCF5
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Global_65029)
		Global_65029 = bParam1;

	if (bParam0)
	{
		if (func_24(false) && Global_80552.f_1 == 1 && func_23(Global_80552))
		{
		}
		else
		{
			Global_65027 = true;
		}
	}

	if (Global_114931.f_9092 || func_24(false))
	{
		iVar0 = func_22();
		iVar1 = Global_93181[iVar0 /*5*/];
		iVar2 = Global_80576.f_109[iVar1 /*4*/];
	
		if (iVar0 == -1)
		{
			Global_114931.f_9092;
			return;
		}
	
		if (IS_BIT_SET(Global_93181[iVar0 /*5*/].f_1, 4))
			return;
	
		if (IS_BIT_SET(Global_93181[iVar0 /*5*/].f_1, 5))
			return;
	
		MISC::SET_BIT(&(Global_93181[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_80554, 1);
		Global_80570 = iVar2;
		Global_80571 = MISC::GET_GAME_TIMER();
	}
}

int func_22() // Position - 0xDC5
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 7; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_93181[iVar0 /*5*/].f_1, 2))
			return iVar0;
	}

	return -1;
}

bool func_23(int iParam0) // Position - 0xDF7
{
	switch (iParam0)
	{
		case 71:
			return true;
	
		case 86:
			return true;
	
		case 91:
			return true;
	
		default:
			return false;
	}

	return false;
}

bool func_24(bool bParam0) // Position - 0xE35
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

void func_25(int iParam0, bool bParam1) // Position - 0xE5D
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114931.f_9092.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114931.f_9092.f_99.f_58[iParam0] = bParam1;
}

