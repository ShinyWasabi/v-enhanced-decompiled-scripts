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
	char* Static_16 = 0;
	var Static_17 = 0;
	var Static_18 = 0;
	float Static_19 = 0f;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	float Static_23 = 0f;
	float Static_24 = 0f;
	var Static_25 = 0;
	int Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	float Static_29 = 0f;
	float Static_30 = 0f;
	float Static_31 = 0f;
	var Static_32 = 0;
	var Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	int Static_37 = 0;
	int Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	int Static_44 = 0;
	int Static_45 = 0;
	int Static_46 = 0;
	int Static_47 = 0;
	int Static_48 = 0;
	int Static_49 = 0;
	int Static_50 = 0;
	int Static_51 = 0;
	int Static_52 = 0;
	int Static_53 = 0;
	int Static_54 = 0;
	int Static_55 = 0;
	int Static_56 = 0;
	int Static_57 = 0;
	int Static_58 = 0;
	int Static_59 = 0;
	int Static_60 = 0;
	int Static_61 = 0;
	int Static_62 = 0;
	int Static_63 = 0;
	int Static_64 = 0;
	int Static_65 = 0;
	var Static_66 = 0;
	int Static_67 = 0;
	char* Static_68 = 0;
	int Static_69 = 0;
	int Static_70 = 0;
	int Static_71 = 0;
	var Static_72 = 0;
	int Static_73 = 0;
	int Static_74 = 0;
	int Static_75 = 0;
	float Static_76 = 0f;
	int Static_77 = 0;
	var Static_78 = 10;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	var Static_83 = 0;
	var Static_84 = 0;
	var Static_85 = 0;
	var Static_86 = 0;
	var Static_87 = 0;
	var Static_88 = 0;
	int Static_89 = 0;
	bool Static_90 = 0;
	bool Static_91 = 0;
	int Static_92 = 0;
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
	Static_16 = "NULL";
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;
	Static_26 = 3;
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_37 = 1;
	Static_38 = 65;
	Static_39 = 49;
	Static_40 = 64;
	Static_44 = 1;
	Static_45 = 1;
	Static_46 = 1;
	Static_47 = 1;
	Static_48 = 1;
	Static_49 = 1;
	Static_50 = 1;
	Static_51 = 1;
	Static_52 = 1;
	Static_53 = 1;
	Static_54 = 1;
	Static_55 = 1;
	Static_56 = 1;
	Static_57 = 1;
	Static_58 = 1;
	Static_59 = 1;
	Static_60 = 1;
	Static_61 = 1;
	Static_62 = 1;
	Static_63 = 1;
	Static_64 = 1;
	Static_65 = joaat("BMX");
	Static_71 = 300000;
	Static_76 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_113();

	Global_34042 = 0;
	Global_34041 = 0;
	Global_34043 = 0;
	Global_34044 = 0;
	Global_34046 = 0;
	Global_34045 = 0;
	func_112();

	while (true)
	{
		func_2();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1(PLAYER::PLAYER_ID(), true, true) && !Global_1836529 && Global_33792 == 0)
			func_113();
	
		BUILTIN::WAIT(0);
	}
}

bool func_1(bool bParam0, bool bParam1, bool bParam2) // Position - 0x127
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
					return false;
		
			if (bParam2)
				if (bVar0 == Global_2673274.f_3)
					return Global_2673274.f_2;
				else if (Global_2658294[bVar0 /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_2() // Position - 0x187
{
	func_88();
	func_68();
	func_22();
	func_3(Static_65);
}

void func_3(int iParam0) // Position - 0x1A1
{
	switch (Static_44)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			if (INTERIOR::IS_INTERIOR_SCENE())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /* GXT: Can't spawn that vehicle here. */);
				Static_44 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
	
		case 4:
			func_4(iParam0);
			break;
	
		default:
			break;
	}
}

void func_4(int iParam0) // Position - 0x1F6
{
	var uVar0;
	float fVar3;
	bool bVar4;

	bVar4 = false;

	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Static_66))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Static_66, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Static_66, 0))
					{
						uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_66, 1) };
						fVar3 = ENTITY::GET_ENTITY_HEADING(Static_66);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uVar0, uVar0.f_1, uVar0.f_2 + 4f, 1, 0, 0, 1);
						bVar4 = true;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(&Static_66);
			}
		
			if (!bVar4)
			{
				if (iParam0 == joaat("DUSTER") || iParam0 == joaat("STUNT"))
					uVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1.5f, 3.5f, 1f) };
				else if (iParam0 == joaat("BUZZARD"))
					uVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 2f) };
				else
					uVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 3.5f, 1f) };
			
				fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f;
			}
		
			if (func_18(iParam0, uVar0, fVar3))
			{
				Static_66 = VEHICLE::CREATE_VEHICLE(iParam0, uVar0, fVar3, 0, 1, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Static_66, 1084227584);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Static_66);
				func_16(Static_68);
				func_5(20);
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /* GXT: Can't spawn that vehicle here. */);
			}
		
			Static_44 = 1;
		}
	}
}

void func_5(int iParam0) // Position - 0x339
{
	if (!func_15(14) && !func_14(""))
	{
		MISC::SET_BIT(&Global_34043, iParam0);
		Global_34046 = 1;
		func_6();
	}
}

void func_6() // Position - 0x36C
{
	int iVar0;

	iVar0 = func_8();

	switch (iVar0)
	{
		case 0:
			func_7(joaat("SP0_TIMES_CHEATED"), 1);
			break;
	
		case 1:
			func_7(joaat("SP1_TIMES_CHEATED"), 1);
			break;
	
		case 2:
			func_7(joaat("SP2_TIMES_CHEATED"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1) // Position - 0x3BA
{
	int iVar0;

	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = iVar0 + iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_8() // Position - 0x3DD
{
	func_9();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_9() // Position - 0x3F6
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER::PLAYER_PED_ID());
		
			if (func_10(iVar0) && !func_15(14) || Global_113879)
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

bool func_10(int iParam0) // Position - 0x4F3
{
	return iParam0 < 3;
}

int func_11(var uParam0) // Position - 0x4FF
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_12(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_12(int iParam0) // Position - 0x53C
{
	if (func_10(iParam0))
		return func_13(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_13(int iParam0) // Position - 0x561
{
	return Global_2339[iParam0 /*29*/];
}

bool func_14(char* sParam0) // Position - 0x570
{
	if (Static_92 != 0)
	{
		if (func_15(14) && CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP" /* GXT: Super jump. */) && INTERIOR::IS_INTERIOR_SCENE())
				return false;
		
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON" /* GXT: Moon gravity. */) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				return false;
		}
	
		return true;
	}

	return false;
}

bool func_15(int iParam0) // Position - 0x5DA
{
	return Global_44886 == iParam0;
}

void func_16(char* sParam0) // Position - 0x5E8
{
	if (func_14(""))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_ACTIVATED" /* GXT: Cheat activated:~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
		STATS::PLAYSTATS_CHEAT_APPLIED(sParam0);
	}
}

void func_17(var uParam0) // Position - 0x61A
{
	Static_78[Static_89] = uParam0;
	Static_89 = Static_89 + 1;

	if (Static_89 >= 10)
		Static_89 = 0;
}

bool func_18(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x63A
{
	var uVar0;
	var uVar28;
	float fVar31;
	float fVar34;
	var uVar37;
	var uVar40;
	int iVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;

	uVar0 = 9;
	MISC::GET_MODEL_DIMENSIONS(iParam0, &uVar28, &fVar31);
	fVar34 = MISC::ABSF(fVar31 - uVar28) / 2f;
	fVar34.f_1 = MISC::ABSF(fVar31.f_1 - uVar28.f_1) / 2f;
	fVar34.f_2 = MISC::ABSF(fVar31.f_2 - uVar28.f_2) / 2f;
	uVar0[0 /*3*/] = { uParam1 };
	uVar0[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, -fVar34, -fVar34.f_1, -fVar34.f_2) };
	uVar0[2 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, fVar34, -fVar34.f_1, -fVar34.f_2) };
	uVar0[3 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, fVar34, fVar34.f_1, -fVar34.f_2) };
	uVar0[4 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, -fVar34, fVar34.f_1, -fVar34.f_2) };
	uVar0[5 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, -fVar34, -fVar34.f_1, fVar34.f_2) };
	uVar0[6 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, fVar34, -fVar34.f_1, fVar34.f_2) };
	uVar0[7 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, fVar34, fVar34.f_1, fVar34.f_2) };
	uVar0[8 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1, fParam4, -fVar34, fVar34.f_1, fVar34.f_2) };

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam1))
		return false;

	uVar50 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(func_19(PLAYER::PLAYER_ID()) + { 1f, 0f, 0f }, uParam1, 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);

	if (iVar43 != 0)
		return false;

	uVar44 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(uVar0[1 /*3*/], uVar0[3 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);

	if (iVar43 != 0)
		return false;

	uVar45 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(uVar0[2 /*3*/], uVar0[4 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);

	if (iVar43 != 0)
		return false;

	uVar46 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(uVar0[5 /*3*/], uVar0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);

	if (iVar43 != 0)
		return false;

	uVar47 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(uVar0[6 /*3*/], uVar0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);

	if (iVar43 != 0)
		return false;

	uVar48 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(uVar0[1 /*3*/], uVar0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);

	if (iVar43 != 0)
		return false;

	uVar49 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(uVar0[2 /*3*/], uVar0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);

	if (iVar43 != 0)
		return false;

	return true;
}

Vector3 func_19(var uParam0) // Position - 0x8F6
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_20(int iParam0) // Position - 0x909
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
	
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
			Static_44 = 4;
	}
}

void func_21(char* sParam0) // Position - 0x92C
{
	if (!func_15(14))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DENIED" /* GXT: Cheat denied:~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
	}
}

void func_22() // Position - 0x958
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23() // Position - 0x984
{
	switch (Static_64)
	{
		case 1:
			break;
	
		case 4:
			func_31(19, true);
			func_30();
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(19))
			{
				Static_64 = 9;
				return;
			}
		
			func_25();
			break;
	
		case 9:
			func_24("CHEAT_AIM_SLOW_MO" /* GXT: Slow motion aim. */);
			func_31(19, false);
			MISC::SET_TIME_SCALE(1f);
			Static_75 = 0;
			Static_64 = 1;
			break;
	
		default:
			break;
	}
}

void func_24(char* sParam0) // Position - 0xA23
{
	if (func_14(sParam0))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DEACTIVATED" /* GXT: Cheat deactivated:~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
	}
}

void func_25() // Position - 0xA4E
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		if (PAD::IS_CONTROL_PRESSED(2, 25))
			if (func_26(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && func_26(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))
				MISC::SET_TIME_SCALE(Static_76);
			else
				MISC::SET_TIME_SCALE(1f);
		else
			MISC::SET_TIME_SCALE(1f);
}

int func_26(var uParam0) // Position - 0xAA5
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
	return iVar0;
}

bool func_27(int iParam0) // Position - 0xAB9
{
	if (IS_BIT_SET(Global_34041, iParam0))
		return true;

	return false;
}

bool func_28() // Position - 0xACF
{
	if (func_15(0) || func_15(11) || func_15(4) || func_15(9) || func_15(10) || func_15(3) || func_15(2) || func_29(35))
		return true;

	return false;
}

bool func_29(int iParam0) // Position - 0xB35
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

void func_30() // Position - 0xB62
{
	Static_75 = Static_75 + 1;

	if (Static_75 > 3)
	{
		Static_75 = 0;
		Static_64 = 9;
		return;
	}

	switch (Static_75)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1" /* GXT: Slow motion aim level 1. */);
			Static_76 = 0.6f;
			break;
	
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2" /* GXT: Slow motion aim level 2. */);
			Static_76 = 0.4f;
			break;
	
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3" /* GXT: Slow motion aim level 3. */);
			Static_76 = 0.2f;
			break;
	
		default:
			break;
	}

	Static_64 = 5;
}

void func_31(int iParam0, bool bParam1) // Position - 0xBD2
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_34042, iParam0);
		func_5(iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_34042, iParam0);
	}
}

void func_32() // Position - 0xBFA
{
	switch (Static_61)
	{
		case 1:
			break;
	
		case 4:
			func_31(16, true);
			func_35();
			break;
	
		case 5:
			PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
		
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_34() || func_33(true) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 37) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 19) || func_27(23) || func_27(21) || func_27(16))
				Static_61 = 9;
			break;
	
		case 9:
			PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
			func_24("CHEAT_SLOW_MO" /* GXT: Slow Motion. */);
			func_31(16, false);
			Static_74 = 0;
			MISC::SET_TIME_SCALE(1f);
			Static_61 = 1;
			break;
	
		default:
			break;
	}
}

bool func_33(bool bParam0) // Position - 0xCE1
{
	if (bParam0)
		return Global_24407.f_4 && Global_24407.f_104 == 4;

	return Global_24407.f_4;
}

bool func_34() // Position - 0xD0A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

void func_35() // Position - 0xD26
{
	Static_74 = Static_74 + 1;

	if (Static_74 > 3)
	{
		Static_61 = 9;
		return;
	}

	switch (Static_74)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1" /* GXT: Slow motion level 1. */);
			MISC::SET_TIME_SCALE(0.6f);
			break;
	
		case 2:
			func_16("CHEAT_SLOW_MO2" /* GXT: Slow motion level 2. */);
			MISC::SET_TIME_SCALE(0.4f);
			break;
	
		case 3:
			func_16("CHEAT_SLOW_MO3" /* GXT: Slow motion level 3. */);
			MISC::SET_TIME_SCALE(0.2f);
			break;
	
		default:
			break;
	}

	Static_61 = 5;
}

void func_36() // Position - 0xD99
{
	var uVar0;
	var uVar3;
	float fVar4;

	switch (Static_62)
	{
		case 1:
			break;
	
		case 2:
			func_31(17, true);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, 0, 1);
			uVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			uVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			MISC::GET_GROUND_Z_FOR_3D_COORD(uVar0, &fVar4, 0, 0);
			fVar4 = fVar4 + 500f;
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uVar0, uVar0.f_1, fVar4, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
			Static_70 = MISC::GET_GAME_TIMER();
			CAM::DO_SCREEN_FADE_OUT(0);
			Static_62 = 3;
			break;
	
		case 3:
			if (func_38(1000, Static_70))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				Static_70 = MISC::GET_GAME_TIMER();
				Static_62 = 4;
			}
			break;
	
		case 4:
			if (func_38(1000, Static_70))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 149, 1);
			
				if (func_8() == 0)
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
				else
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
			
				CAM::DO_SCREEN_FADE_IN(250);
				Static_70 = MISC::GET_GAME_TIMER();
				func_16("CHEAT_SKYFALL" /* GXT: Skyfall. */);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				Static_62 = 5;
			}
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(17))
			{
				Static_62 = 9;
				break;
			}
		
			PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
			
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
					Static_62 = 9;
			}
			else
			{
				Static_62 = 9;
			}
			break;
	
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL" /* GXT: Skyfall. */);
			func_31(17, false);
			Static_62 = 1;
			break;
	
		default:
			break;
	}
}

void func_37() // Position - 0xF99
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));

	if (Static_60 != 5)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
	}

	MISC::SET_INSTANCE_PRIORITY_HINT(0);
}

bool func_38(int iParam0, int iParam1) // Position - 0xFDE
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = iVar0 - iParam0;

	if (iVar1 > iParam1)
		return true;

	return false;
}

void func_39() // Position - 0xFFF
{
	var uVar0;

	switch (Static_60)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_INVINCIBILITY" /* GXT: Invincible for 5 minutes. */);
			func_31(15, true);
			Static_60 = 5;
			Static_72 = MISC::GET_GAME_TIMER();
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Static_60 = 9;
				return;
			}
		
			uVar0 = { func_19(PLAYER::PLAYER_ID()) };
		
			if (func_28() || func_34() || func_27(23) || func_27(21) || func_27(15) || uVar0.f_2 <= -170f)
			{
				Static_60 = 9;
				return;
			}
		
			Static_73 = MISC::GET_GAME_TIMER() - Static_72;
		
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPINTERNET")) == 0)
				func_40(Static_71 - Static_73, "CHEAT_INV" /* GXT: INVINCIBILITY */, 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		
			if (Static_73 >= Static_71 - 1000)
			{
				Static_60 = 9;
				return;
			}
		
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			STATS::STAT_SET_CHEAT_IS_ACTIVE();
			break;
	
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF" /* GXT: Invincibility */);
			func_31(15, false);
			Static_60 = 1;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x117A
{
	int iVar0;
	int iVar1;

	iVar0 = -1;

	for (iVar1 = 0; iVar1 <= 9; iVar1 = iVar1 + 1)
	{
		if (iVar0 == -1)
			if (func_42(7, iVar1) == false)
				iVar0 = iVar1;
	}

	if (iVar0 > -1)
	{
		Global_1679155.f_1 = 1;
		func_41(7, iVar0);
		Global_1679155.f_4714[iVar0] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_4714.f_11[iVar0 /*16*/], sParam1, 64);
		Global_1679155.f_4714.f_172[iVar0] = iParam2;
		Global_1679155.f_4714.f_216[iVar0] = iParam3;
		Global_1679155.f_4714.f_183[iVar0] = iParam4;
		Global_1679155.f_4714.f_194[iVar0] = iParam5;
		Global_1679155.f_4714.f_249[iVar0] = iParam6;
		Global_1679155.f_4714.f_260[iVar0] = iParam7;
		Global_1679155.f_4714.f_205[iVar0] = iParam8;
		Global_1679155.f_4714.f_314[iVar0] = iParam9;
		Global_1679155.f_4714.f_325[iVar0] = iParam10;
		Global_1679155.f_4714.f_357[iVar0] = iParam11;
		Global_1679155.f_4714.f_238[iVar0] = iParam12;
		Global_1679155.f_4714.f_271[iVar0] = iParam13;
		Global_1679155.f_4714.f_368[iVar0] = iParam14;
		Global_1679155.f_4714.f_379[iVar0] = iParam15;
		Global_1679155.f_4714.f_390[iVar0] = iParam16;
		Global_1679155.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_41(int iParam0, int iParam1) // Position - 0x12D7
{
	MISC::SET_BIT(&Global_1679155.f_7064[iParam0], iParam1);
}

bool func_42(int iParam0, int iParam1) // Position - 0x12F0
{
	return IS_BIT_SET(Global_1679155.f_7064[iParam0], iParam1);
}

void func_43() // Position - 0x1306
{
	switch (Static_57)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FLAMING_BULLETS" /* GXT: Flaming bullets. */);
			func_31(12, true);
			Static_57 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(12))
			{
				Static_57 = 9;
				return;
			}
		
			if (func_28())
			{
				Static_57 = 9;
				return;
			}
		
			MISC::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24("CHEAT_FLAMING_BULLETS" /* GXT: Flaming bullets. */);
			func_31(12, false);
			Static_57 = 1;
			break;
	
		default:
			break;
	}
}

void func_44() // Position - 0x13AD
{
	switch (Static_58)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE" /* GXT: Explosive melee attacks. */);
			func_31(13, true);
			Static_58 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(13) || func_28())
			{
				Static_58 = 9;
				return;
			}
		
			MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE" /* GXT: Explosive melee attacks. */);
			func_31(13, false);
			Static_58 = 1;
			break;
	
		default:
			break;
	}
}

void func_45() // Position - 0x1450
{
	switch (Static_63)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_DRUNK" /* GXT: Drunk mode. */);
			func_31(18, true);
			func_60(PLAYER::PLAYER_PED_ID());
			func_58(30000, 1050253722, 1065353216, 0);
			Static_63 = 5;
			break;
	
		case 5:
			if (func_28() || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(18))
				Static_63 = 9;
			break;
	
		case 9:
			func_24("CHEAT_DRUNK" /* GXT: Drunk mode. */);
			func_31(18, false);
			func_49(PLAYER::PLAYER_PED_ID());
			func_48(1000);
			Static_63 = 1;
			break;
	
		case 10:
			func_46(true);
			func_31(18, false);
			Static_63 = 1;
			break;
	
		default:
			break;
	}
}

void func_46(bool bParam0) // Position - 0x152A
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_46089))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_46089))
			AUDIO::STOP_AUDIO_SCENE(&Global_46089);

	if (CAM::DOES_CAM_EXIST(Global_46077))
	{
		if (CAM::IS_CAM_SHAKING(Global_46077))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_46077, 0f);
			CAM::STOP_CAM_SHAKING(Global_46077, 1);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_46089, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_46105, "", 16);
	func_47();
}

void func_47() // Position - 0x1606
{
	Global_46076 = false;
	Global_46077 = 0;
	Global_46078 = 0;
	Global_46079 = 30000;
	Global_46080 = 0f;
	Global_46082 = 0f;
	Global_46081 = 0f;
	Global_46083 = 1f;
	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
}

void func_48(int iParam0) // Position - 0x163C
{
	int iVar0;

	if (!Global_46076)
		return;

	iVar0 = MISC::GET_GAME_TIMER();
	Global_46078 = iVar0 + iParam0;
	Global_46079 = iParam0;
}

void func_49(int iParam0) // Position - 0x1661
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return;

	iVar0 = func_57(iParam0);

	if (!(iVar0 == -1))
	{
		iVar1 = Global_45897[iVar0 /*5*/];
		func_52(1, iVar1, 1);
		return;
	}

	iVar2 = func_51(iParam0);

	if (iVar2 == -1)
		return;

	func_50(iVar2);
}

void func_50(int iParam0) // Position - 0x16BA
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45866[iParam0 /*6*/].f_1 == 0))
		if (Global_45866[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_46109 = 0;

	Global_45866[iParam0 /*6*/] = 13;
	Global_45866[iParam0 /*6*/].f_1 = 0;
	Global_45866[iParam0 /*6*/].f_2 = 0;
	Global_45866[iParam0 /*6*/].f_3 = 0;
	Global_45866[iParam0 /*6*/].f_4 = 0;
	Global_45864 = Global_45864 - 1;

	if (Global_45864 < 0)
		Global_45864 = 0;
}

int func_51(int iParam0) // Position - 0x173D
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
	{
		if (Global_45866[iVar0 /*6*/].f_1 == iParam0)
			return iVar0;
	}

	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2) // Position - 0x176E
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1783
{
	int iVar0;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_55(iParam0, iParam1, iParam2))
		return;

	iVar0 = func_54();

	if (iVar0 == -1)
		return;

	Global_45978[iVar0 /*6*/] = iParam0;
	Global_45978[iVar0 /*6*/].f_1 = iParam1;
	Global_45978[iVar0 /*6*/].f_2 = iParam2;
	Global_45978[iVar0 /*6*/].f_3 = iParam3;
	Global_45978[iVar0 /*6*/].f_4 = iParam4;
	Global_45978[iVar0 /*6*/].f_5 = iParam5;
}

int func_54() // Position - 0x1805
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (Global_45978[iVar0 /*6*/].f_2 == 6)
			return iVar0;
	}

	return -1;
}

bool func_55(int iParam0, int iParam1, int iParam2) // Position - 0x1836
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1851
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam2 == Global_45978[iVar0 /*6*/].f_2)
			if (iParam0 == Global_45978[iVar0 /*6*/])
				if (iParam1 == Global_45978[iVar0 /*6*/].f_1)
					return iVar0;
	}

	return -1;
}

int func_57(int iParam0) // Position - 0x189D
{
	int iVar0;

	if (iParam0 == 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (!(Global_45897[iVar0 /*5*/] == -1))
			if (iParam0 == Global_45897[iVar0 /*5*/].f_1)
				return iVar0;
	}

	return -1;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18E6
{
	func_59(-1, iParam0, iParam1, iParam2, iParam3, true);
}

void func_59(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5) // Position - 0x18FC
{
	int iVar0;

	if (Global_4)
		return;

	if (Global_46076)
		return;

	if (!bParam5)
		if (iParam0 < 0)
			return;

	if (fParam2 < 0f || fParam2 > 5f)
		return;

	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);

	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", fParam3 * Global_46075);

	if (CAM::DOES_CAM_EXIST(iParam4))
	{
		CAM::SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_46077 = iParam4;
	}
	else
	{
		Global_46077 = 0;
	}

	Global_46076 = true;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_46078 = iVar0 + iParam0;

	if (bParam5)
		if (iParam0 == -1)
			Global_46078 = -1;

	Global_46079 = iParam1;
	Global_46080 = fParam2;
	Global_46082 = fParam3;
	Global_46081 = fParam3;
}

int func_60(int iParam0) // Position - 0x19B7
{
	return func_61(iParam0, -1, true, -1082130432);
}

int func_61(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x19CC
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return 0;

	iVar0 = func_63(iParam0);

	if (!(iVar0 == -1))
		return 1;

	iVar1 = func_51(iParam0);

	if (!(iVar1 == -1))
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	iVar2 = func_62();

	if (iVar2 == -1)
		return 0;

	Global_45866[iVar2 /*6*/] = 0;
	Global_45866[iVar2 /*6*/].f_1 = iParam0;
	Global_45866[iVar2 /*6*/].f_2 = iParam1;
	Global_45866[iVar2 /*6*/].f_3 = iParam1;
	Global_45866[iVar2 /*6*/].f_4 = 0;
	Global_45866[iVar2 /*6*/].f_5 = iParam3;

	if (iParam0 == PLAYER::PLAYER_PED_ID())
		Global_46109 = 1;

	Global_45864 = Global_45864 + 1;
	return 1;
}

int func_62() // Position - 0x1A93
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
	{
		if (Global_45866[iVar0 /*6*/] == 13)
			return iVar0;
	}

	return -1;
}

int func_63(int iParam0) // Position - 0x1AC2
{
	int iVar0;

	if (iParam0 == 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam0 == Global_45897[iVar0 /*5*/].f_1)
			return Global_45897[iVar0 /*5*/];
	}

	return -1;
}

void func_64() // Position - 0x1B03
{
	switch (Static_56)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_BANG_BANG" /* GXT: Bang bang! */);
			func_31(11, true);
			Static_56 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(11))
			{
				Static_56 = 9;
				return;
			}
		
			if (func_28())
			{
				Static_56 = 9;
				return;
			}
		
			MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24("CHEAT_BANG_BANG" /* GXT: Bang bang! */);
			func_31(11, false);
			Static_56 = 1;
			break;
	
		default:
			break;
	}
}

void func_65() // Position - 0x1BAA
{
	switch (Static_59)
	{
		case 1:
			break;
	
		case 4:
			func_5(14);
			func_31(14, true);
			func_67();
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(14) || func_66(17) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					Static_59 = 9;
			else
				Static_59 = 9;
			break;
	
		case 9:
			func_24("CHEAT_GRAVITY_MOON" /* GXT: Moon gravity. */);
			func_31(14, false);
			MISC::SET_GRAVITY_LEVEL(0);
			Static_77 = 0;
			Static_59 = 1;
			break;
	
		default:
			break;
	}
}

bool func_66(int iParam0) // Position - 0x1C75
{
	if (IS_BIT_SET(Global_34042, iParam0))
		return true;

	return false;
}

void func_67() // Position - 0x1C8B
{
	Static_77 = Static_77 + 1;

	if (Static_77 > 1)
	{
		Static_59 = 9;
		return;
	}

	switch (Static_77)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON" /* GXT: Moon gravity. */);
			MISC::SET_GRAVITY_LEVEL(1);
			break;
	
		default:
			break;
	}

	Static_59 = 5;
}

void func_68() // Position - 0x1CC8
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69() // Position - 0x1CFC
{
	if (Static_55 == 4)
	{
		Static_55 = 1;
	
		if (func_27(23) || func_27(22) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_GIVE_PARACHUTE" /* GXT: Parachute given. */);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, 1, 1);
			func_5(10);
		}
	}
}

bool func_70() // Position - 0x1D74
{
	if (Static_91)
	{
		Static_91 = false;
		return false;
	}

	if (func_71(0))
		return true;

	return false;
}

bool func_71(int iParam0) // Position - 0x1D95
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

void func_72() // Position - 0x1DEC
{
	int iVar0;

	if (Static_54 == 4)
	{
		Static_54 = 1;
	
		if (func_27(23) || func_27(22) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
				return;
			}
		
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN" /* GXT: Wanted Level down. */);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar0 - 1, 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED" /* GXT: No Wanted Level active. */);
			}
		}
	}
}

void func_73() // Position - 0x1E8F
{
	int iVar0;

	if (Static_53 == 4)
	{
		Static_53 = 1;
	
		if (func_27(23) || func_27(22) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
				return;
			}
		
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		
			if (iVar0 < PLAYER::GET_MAX_WANTED_LEVEL())
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar0 + 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_16("CHEAT_WANTED_UP" /* GXT: Wanted Level up. */);
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED" /* GXT: Current max Wanted Level reached. */);
			}
		}
	}
}

void func_74() // Position - 0x1F3E
{
	if (Static_52 == 4)
	{
		Static_52 = 1;
	
		if (func_27(23) || func_27(22) || func_27(7) || func_15(9) || func_15(10) || !PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(func_75()) || !PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1, 0);
			func_16("CHEAT_SPECIAL_ABILITY" /* GXT: Special ability recharged. */);
			func_5(7);
		}
	}
}

var func_75() // Position - 0x1FE5
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_76() // Position - 0x1FF5
{
	var uVar0;

	if (Static_51 == 4)
	{
		Static_51 = 1;
	
		if (func_27(23) || func_27(22) || func_27(6) || func_15(9) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_HEALTH_ARMOR" /* GXT: Max health and armor. */);
			func_5(6);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0, 0);
			PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()) - PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()));
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (ENTITY::DOES_ENTITY_EXIST(uVar0))
					if (!ENTITY::IS_ENTITY_DEAD(uVar0, 0))
						VEHICLE::SET_VEHICLE_FIXED(uVar0);
			}
		}
	}
}

void func_77() // Position - 0x20CE
{
	if (Static_50 == 4)
	{
		Static_50 = 1;
	
		if (func_27(23) || func_27(22) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		func_5(5);
	
		switch (Static_69)
		{
			case 0:
				Static_69 = 1;
				[[fallthrough]];
		
			case 1:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY" /* GXT: Extra sunny weather. */);
				Static_69 = 2;
				break;
		
			case 2:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR" /* GXT: Clear weather. */);
				Static_69 = 3;
				break;
		
			case 3:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY" /* GXT: Cloudy weather. */);
				Static_69 = 4;
				break;
		
			case 4:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY" /* GXT: Smoggy weather. */);
				Static_69 = 6;
				break;
		
			case 6:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST" /* GXT: Overcast weather. */);
				Static_69 = 7;
				break;
		
			case 7:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN" /* GXT: Rainy weather. */);
				func_31(5, true);
				Static_69 = 8;
				break;
		
			case 8:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER" /* GXT: Thundery weather. */);
				Static_69 = 9;
				break;
		
			case 9:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING" /* GXT: Clearing weather. */);
				Static_69 = 11;
				break;
		
			case 11:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW" /* GXT: Snowy weather. */);
				Static_69 = 0;
				break;
		
			default:
				break;
		}
	}
}

void func_78() // Position - 0x225D
{
	if (Static_49 == 4)
	{
		Static_49 = 1;
	
		if (func_27(23) || func_27(22) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		func_16("CHEAT_GIVE_WEAPONS" /* GXT: Give weapons. */);
		func_5(4);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_KNIFE"), -1, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMG"), 300, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), 300, 1);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 150, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), 30, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), 5, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RPG"), 5, 0);
		}
	}
}

void func_79() // Position - 0x2332
{
	switch (Static_48)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_SWIM" /* GXT: Fast swim. */);
			func_31(3, true);
			Static_48 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(3))
			{
				Static_48 = 9;
			}
			else
			{
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
	
		case 9:
			PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_SWIM" /* GXT: Fast swim. */);
			func_31(3, false);
			Static_48 = 1;
			break;
	
		default:
			break;
	}
}

void func_80() // Position - 0x23DA
{
	switch (Static_47)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_RUN" /* GXT: Fast run. */);
			func_31(2, true);
			Static_47 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_27(23) || func_27(22) || func_27(2))
			{
				Static_47 = 9;
			}
			else
			{
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				else
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
	
		case 9:
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_RUN" /* GXT: Fast run. */);
			func_31(2, false);
			Static_47 = 1;
			break;
	
		default:
			break;
	}
}

void func_81() // Position - 0x24C3
{
	int iVar0;

	switch (Static_46)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SLIDEY_CARS" /* GXT: Slidey cars. */);
			func_31(1, true);
			Static_46 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(1))
				Static_46 = 9;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
					{
						if (Static_67 == 0)
						{
							Static_67 = iVar0;
						
							if (!ENTITY::IS_ENTITY_DEAD(Static_67, 0))
								if (func_82(1))
									VEHICLE::SET_VEHICLE_REDUCE_GRIP(Static_67, 1);
								else
									Static_67 = 0;
						}
						else if (Static_67 != iVar0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Static_67, 0))
								VEHICLE::SET_VEHICLE_REDUCE_GRIP(Static_67, 0);
						
							Static_67 = 0;
						}
					}
				}
			}
			break;
	
		case 9:
			func_24("CHEAT_SLIDEY_CARS" /* GXT: Slidey cars. */);
			Static_46 = 10;
			break;
	
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(Static_67, 0))
			{
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(Static_67, 0);
				Static_67 = 0;
			}
		
			func_31(1, false);
			Static_46 = 1;
			break;
	
		default:
			break;
	}
}

bool func_82(int iParam0) // Position - 0x25EA
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(uVar0);
				iVar2 = func_8();
			
				if (iParam0 & 1 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
						return false;
			
				if (iParam0 & 2 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
						return false;
			
				if (iParam0 & 4 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
						return false;
			
				if (iParam0 & 8 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1))
						return false;
			
				if (iParam0 & 16 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_pside_r") != -1)
						return false;
			
				if (iParam0 & 32 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_pside_r") == -1)
						return false;
			
				if (iParam0 & 64 != 0)
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
						if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_r") == -1)
							return false;
					else if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_pside_r") != -1)
						return false;
			
				if (iParam0 & 128 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_pside_r") == -1)
						return false;
			
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
						return false;
				
					if (func_85(iVar2, 0) != iVar1)
						return false;
				}
			
				if (iParam0 & 512 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
						return false;
				
					if (VEHICLE::IS_BIG_VEHICLE(uVar0))
						return false;
				
					uVar4 = ENTITY::GET_ENTITY_SCRIPT(uVar0, &uVar3);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar4))
						if (MISC::GET_HASH_KEY(uVar4) == MISC::GET_HASH_KEY("taxiService"))
							return false;
				
					if (func_83(uVar0, iVar2, false))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

bool func_83(var uParam0, int iParam1, bool bParam2) // Position - 0x27EB
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		return false;

	for (iVar0 = 0; func_84(iParam1, iVar0, &uVar1, &iVar9); iVar0 = iVar0 + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114931.f_7236[iVar9], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&uVar1, uParam0))
				return true;
	}

	return false;
}

bool func_84(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x2859
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

int func_85(int iParam0, int iParam1) // Position - 0x2931
{
	int iVar0;

	if (func_10(iParam0))
	{
		iVar0.f_11 = 12;
		iVar0.f_31 = 49;
		iVar0.f_81 = 2;
		func_86(iParam0, &iVar0, iParam1);
		return iVar0;
	}
	else
	{
		iParam0 != 145;
	}

	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2) // Position - 0x2973
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
		
			if (Global_114931.f_9092.f_99.f_58[128] && !Global_114931.f_9092.f_99.f_58[131])
				iVar0 = joaat("PREMIER");
		
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case 2:
			iVar0 = joaat("BODHI2");
		
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114931.f_9092.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case 1:
			if (iParam2 == 1)
				iVar0 = joaat("BUFFALO2");
			else if (iParam2 == 2)
				iVar0 = joaat("BAGGER");
			else if (Global_114931.f_9092.f_99.f_58[118])
				iVar0 = joaat("BAGGER");
			else
				iVar0 = joaat("BUFFALO2");
		
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}
}

void func_87() // Position - 0x2BCF
{
	switch (Static_45)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SUPER_JUMP" /* GXT: Super jump. */);
			func_31(0, true);
			Static_45 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(0) || INTERIOR::IS_INTERIOR_SCENE())
			{
				Static_45 = 9;
				return;
			}
		
			MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, 1);
			break;
	
		case 9:
			func_24("CHEAT_SUPER_JUMP" /* GXT: Super jump. */);
			func_31(0, false);
			Static_45 = 1;
			break;
	
		default:
			break;
	}
}

void func_88() // Position - 0x2C78
{
	if (func_111() || Static_92 != 0 || func_15(14))
		PAD::DISABLE_CONTROL_ACTION(2, 243, 1);

	func_110();

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	if (func_34() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return;

	if (func_109())
	{
		if (!Static_90)
		{
			func_108();
			Static_90 = true;
		}
	
		return;
	}

	Static_90 = false;
	Static_91 = false;

	if (func_107(988027572, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BUZZOFF")) || func_106(20, joaat("BUZZARD")))
		func_103(joaat("BUZZARD"), "CHEAT_SPAWN_VEH1" /* GXT: Spawn Buzzard. */);

	if (func_107(-1134279030, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BANDIT")) || func_106(20, joaat("BMX")))
		func_103(joaat("BMX"), "CHEAT_SPAWN_VEH2" /* GXT: Spawn BMX. */);

	if (func_107(971352167, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HOLEIN1")) || func_106(20, joaat("CADDY")))
		func_103(joaat("CADDY"), "CHEAT_SPAWN_VEH3" /* GXT: Spawn Caddy. */);

	if (func_107(-269863225, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("COMET")) || func_106(20, joaat("COMET2")))
		func_103(joaat("COMET2"), "CHEAT_SPAWN_VEH4" /* GXT: Spawn Comet. */);

	if (func_107(458579068, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("FLYSPRAY")) || func_106(20, joaat("DUSTER")))
		func_103(joaat("DUSTER"), "CHEAT_SPAWN_VEH5" /* GXT: Spawn Duster. */);

	if (func_107(-666513193, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("ROCKET")) || func_106(20, joaat("PCJ")))
		func_103(joaat("PCJ"), "CHEAT_SPAWN_VEH6" /* GXT: Spawn PCJ. */);

	if (func_107(-1245984749, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("RAPIDGT")) || func_106(20, joaat("RAPIDGT")))
		func_103(joaat("RAPIDGT"), "CHEAT_SPAWN_VEH7" /* GXT: Spawn Rapid GT. */);

	if (func_107(2076774618, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("OFFROAD")) || func_106(20, joaat("SANCHEZ")))
		func_103(joaat("SANCHEZ"), "CHEAT_SPAWN_VEH8" /* GXT: Spawn Sanchez. */);

	if (func_107(855685457, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("VINEWOOD")) || func_106(20, joaat("STRETCH")))
		func_103(joaat("STRETCH"), "CHEAT_SPAWN_VEH9" /* GXT: Spawn Stretch Limo. */);

	if (func_107(-591395876, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BARNSTORM")) || func_106(20, joaat("STUNT")))
		func_103(joaat("STUNT"), "CHEAT_SPAWN_VEH10" /* GXT: Spawn Stunt Plane. */);

	if (func_107(-1399217582, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("TRASHED")) || func_106(20, joaat("TRASH")))
		func_103(joaat("TRASH"), "CHEAT_SPAWN_VEH11" /* GXT: Spawn Trashmaster. */);

	if (func_102())
	{
		if (func_107(-375917581, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("EXTINCT")) || func_106(20, joaat("DODO")))
			func_103(joaat("DODO"), "CHEAT_SPAWN_VEH12" /* GXT: Spawn Dodo Sea Plane. */);
	
		if (func_107(-2124307881, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("DEATHCAR")) || func_106(20, joaat("DUKES2")))
			func_103(joaat("DUKES2"), "CHEAT_SPAWN_VEH13" /* GXT: Spawn Duke O'Death. */);
	
		if (func_107(1028964594, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BUBBLES")) || func_106(20, joaat("SUBMERSIBLE2")))
			func_103(joaat("SUBMERSIBLE2"), "CHEAT_SPAWN_VEH14" /* GXT: Spawn Kraken submersible. */);
	}

	if (func_107(-393416581, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HOPTOIT")) || func_106(0, 0))
		func_101();

	if (func_107(-296509791, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SNOWDAY")) || func_106(1, 0))
		func_100();

	if (func_107(1120820643, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("CATCHME")) || func_106(2, 0))
		func_99();

	if (func_107(-421458016, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("GOTGILLS")) || func_106(3, 0))
		func_98();

	if (func_107(372390926, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("TOOLUP")) || func_106(4, 0))
		Static_49 = 4;

	if (func_107(606506837, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("MAKEITRAIN")) || func_106(5, 0))
		Static_50 = 4;

	if (func_107(453014206, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("TURTLE")) || func_106(6, 0))
		Static_51 = 4;

	if (func_107(1773187142, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("POWERUP")) || func_106(7, 0))
		Static_52 = 4;

	if (func_107(1173296014, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("FUGITIVE")) || func_106(8, 0))
		Static_53 = 4;

	if (func_107(-381269753, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("LAWYERUP")) || func_106(9, 0))
		Static_54 = 4;

	if (func_107(-2023988698, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SKYDIVE")) || func_106(10, 0))
		Static_55 = 4;

	if (func_107(-835863906, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HIGHEX")) || func_106(11, 0))
		func_97();

	if (func_107(1958387485, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("INCENDIARY")) || func_106(12, 0))
		func_96();

	if (func_107(-903985180, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HOTHANDS")) || func_106(13, 0))
		func_95();

	if (func_107(2087642905, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("FLOATER")) || func_106(14, 0))
		func_94();

	if (func_107(1257820019, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("PAINKILLER")) || func_106(15, 0))
		func_93();

	if (func_107(1540206179, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SLOWMO")) || func_106(16, 0))
		func_92();

	if (func_107(115565392, 16) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SKYFALL")) || func_106(17, 0))
		func_91();

	if (func_107(-1276513277, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("LIQUOR")) || func_106(18, 0))
		func_90();

	if (func_107(2040433593, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("DEADEYE")) || func_106(19, 0))
		func_89();
}

void func_89() // Position - 0x33DC
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (Static_61 != 1)
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
	else
		Static_64 = 4;
}

void func_90() // Position - 0x3448
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		Static_63 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		Static_63 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		Static_63 = 1;
		return;
	}

	if (Static_63 == 1)
		Static_63 = 4;
	else if (Static_63 == 5)
		Static_63 = 9;
}

void func_91() // Position - 0x34BF
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_HERE" /* GXT: Can't activate that cheat here. */);
		return;
	}

	if (Static_62 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE" /* GXT: Cheat already active. */);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(17) || func_66(0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RESPAWN_CONTROLLER")) > 0)
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	Static_62 = 2;
}

void func_92() // Position - 0x3598
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (Static_64 != 1)
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
	else
		Static_61 = 4;
}

void func_93() // Position - 0x3604
{
	var uVar0;

	uVar0 = { func_19(PLAYER::PLAYER_ID()) };

	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(15) || uVar0.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (Static_60 == 1)
		Static_60 = 4;
	else if (Static_60 == 5)
		Static_60 = 9;
}

void func_94() // Position - 0x368E
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(14) || func_66(17) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	Static_59 = 4;
}

void func_95() // Position - 0x3703
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		Static_58 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		Static_58 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		Static_58 = 1;
		return;
	}

	if (Static_58 == 1)
		Static_58 = 4;
	else if (Static_58 == 5)
		Static_58 = 9;
}

void func_96() // Position - 0x377A
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		Static_57 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		Static_57 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		Static_57 = 1;
		return;
	}

	if (Static_57 == 1)
		Static_57 = 4;
	else if (Static_57 == 5)
		Static_57 = 9;
}

void func_97() // Position - 0x37F1
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /* GXT: Not available on a mission or pastime. */);
		Static_56 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		Static_56 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		Static_56 = 1;
		return;
	}

	if (Static_56 == 1)
		Static_56 = 4;
	else if (Static_56 == 5)
		Static_56 = 9;
}

void func_98() // Position - 0x3868
{
	if (func_27(23) || func_27(22) || func_27(3) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (Static_48 == 1)
		Static_48 = 4;
	else if (Static_48 == 5)
		Static_48 = 9;
}

void func_99() // Position - 0x38DB
{
	if (func_27(23) || func_27(22) || func_27(2) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (Static_47 == 1)
		Static_47 = 4;
	else if (Static_47 == 5)
		Static_47 = 9;
}

void func_100() // Position - 0x394E
{
	if (func_27(23) || func_27(22) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (Static_46 == 1)
		Static_46 = 4;
	else if (Static_46 == 5)
		Static_46 = 9;
}

void func_101() // Position - 0x39A9
{
	if (func_27(23) || func_27(22) || func_27(0) || INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
		return;
	}

	if (Static_45 == 1)
		Static_45 = 4;
	else if (Static_45 == 5)
		Static_45 = 9;
}

bool func_102() // Position - 0x3A0E
{
	var uVar0;

	if (Global_153815 == 2)
		return true;
	else if (Global_153815 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				MISC::SET_BIT(&uVar0, 2);
				MISC::SET_BIT(&uVar0, 4);
				MISC::SET_BIT(&uVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

void func_103(int iParam0, char* sParam1) // Position - 0x3AC6
{
	if (Static_44 == 1)
	{
		if (func_15(9) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BARRY1")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("TENNIS")) > 0 || func_27(23) || func_27(22) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW" /* GXT: Can't activate that cheat right now. */);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /* GXT: Can't activate cheats while using the cellphone. */);
			return;
		}
	
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED" /* GXT: Vehicle is not unlocked yet. */);
			return;
		}
	
		Static_65 = iParam0;
		Static_68 = sParam1;
		Static_44 = 2;
	}
}

bool func_104(int iParam0) // Position - 0x3B60
{
	switch (iParam0)
	{
		case joaat("DODO"):
			if (func_105(66, 0) == false)
				return false;
			break;
	
		case joaat("DUKES2"):
			if (func_105(64, 0) == false)
				return false;
			break;
	
		case joaat("SUBMERSIBLE2"):
			if (func_105(63, 0) == false)
				return false;
			break;
	}

	return true;
}

bool func_105(int iParam0, int iParam1) // Position - 0x3BB8
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114931.f_32757[iParam0], iParam1);
}

bool func_106(int iParam0, int iParam1) // Position - 0x3BD8
{
	if (IS_BIT_SET(Global_34044, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_34045)
			{
				MISC::CLEAR_BIT(&Global_34044, iParam0);
				Static_91 = true;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_34044, iParam0);
			Static_91 = true;
			return true;
		}
	}

	return false;
}

int func_107(int iParam0, int iParam1) // Position - 0x3C22
{
	if (!func_15(14))
		return MISC::HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(iParam0, iParam1);

	return 0;
}

void func_108() // Position - 0x3C40
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
	{
		if (Static_78[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Static_78[iVar0]);
			Static_78[iVar0] = -1;
		}
	}
}

bool func_109() // Position - 0x3C76
{
	if (Global_102454 == 13 || Global_102454 == 10 || Global_102454 == 11 || Global_102454 == 12)
		return false;

	return true;
}

void func_110() // Position - 0x3CB4
{
	if (func_15(14) || !CAM::IS_SCREEN_FADED_IN() && Static_92 != 0)
		Static_92 = MISC::GET_GAME_TIMER();

	if (Static_92 != 0)
		if (!func_15(14))
			if (MISC::GET_GAME_TIMER() - Static_92 > 1000)
				Static_92 = 0;
}

bool func_111() // Position - 0x3CFF
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

void func_112() // Position - 0x3D29
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
	{
		Static_78[iVar0] = -1;
	}

	Static_90 = false;
	Static_89 = 0;
}

void func_113() // Position - 0x3D51
{
	MISC::SET_RIOT_MODE_ENABLED(0);

	if (Static_62 == 5)
		func_37();

	if (Static_63 == 5)
		func_46(true);

	if (Static_61 == 5 || Static_64 == 5)
		MISC::SET_TIME_SCALE(1f);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (Static_60 == 5)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
	
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	}

	MISC::SET_GRAVITY_LEVEL(0);
	Global_34042 = 0;
	Global_34041 = 0;
	Global_34043 = 0;
	Global_34044 = 0;
	Global_34046 = 0;
	Global_34045 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

