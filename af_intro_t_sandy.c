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
	int Static_33 = 0;
	var Static_34 = 0;
	int Static_35 = 0;
	var Static_36 = 15;
	var Static_37 = 0;
	var Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	var Static_61 = 0;
	var Static_62 = 0;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 0;
	var Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	var Static_83 = 0;
	var Static_84 = 0;
	var Static_85 = 0;
	var Static_86 = 0;
	var Static_87 = 0;
#endregion

void main() // Position - 0x0
{
	var uVar0;
	var uVar3;

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
	Static_33 = 3;
	func_35(29);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
		func_34();

	Static_35 = 0;
	func_33(&Static_36);
	func_32(&Static_36, 1701.7803f, 3225.1482f, 40.0202f);
	func_32(&Static_36, 1678.909f, 3287.6023f, 39.9648f);
	func_32(&Static_36, 1710.4376f, 3326.4993f, 40.1797f);
	func_32(&Static_36, 1738.8787f, 3335.25f, 40.1493f);
	func_32(&Static_36, 1768.3873f, 3312.1008f, 40.2875f);
	func_32(&Static_36, 1819.2413f, 3225.4495f, 42.9019f);
	func_31(&Static_36);

	while (true)
	{
		switch (Static_35)
		{
			case 0:
				if (func_23())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						uVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						uVar3 = { 1749.71f, 3267.83f, 40.24f };
					
						if (func_22(uVar0, uVar3, 75f))
							if (func_21(&Static_36, uVar0))
								if (uVar0.f_2 > 39f && uVar0.f_2 < 43f)
									Static_35 = 1;
								else
									BUILTIN::WAIT(100);
							else
								BUILTIN::WAIT(100);
						else
							BUILTIN::WAIT(1500);
					}
				}
				else
				{
					BUILTIN::WAIT(1500);
				}
				break;
		
			case 1:
				func_2();
				break;
		
			case 2:
				func_1(29);
				func_34();
				break;
		}
	
		BUILTIN::WAIT(0);
	}
}

int func_1(int iParam0) // Position - 0x1D9
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

void func_2() // Position - 0x230
{
	func_6(-815326385);
	func_3("SHI_T_SANDY_2" /* GXT: Planes you purchase from websites or that you land inside will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HANGAR~~s~~n~Ground vehicles too large for a garage will also be stored here. */, 0, 0, -1, 10000, 7, 0, 0, 0);
	BUILTIN::WAIT(0);
	func_3("SHI_T_SANDY_3" /* GXT: Helicopters purchased from websites or that you land on the helipad will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HELIPAD~ */, 0, 0, -1, 10000, 7, 0, 0, 0);
	Static_35 = 2;
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x26B
{
	func_4(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_4(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x28C
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
		func_5();
	}
}

void func_5() // Position - 0x45F
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

int func_6(int iParam0) // Position - 0x576
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
				func_20(iVar0);
				func_12(iParam0);
				iVar1 = 1;
			}
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_198; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar0 /*15*/] == iParam0)
		{
			func_12(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_650; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar0 /*15*/] == iParam0)
		{
			func_11(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_764; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_651[iVar0 /*14*/] == iParam0)
		{
			func_8(iVar0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_866; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_765[iVar0 /*10*/] == iParam0)
		{
			func_7(iVar0);
			iVar1 = 1;
		}
	}

	return iVar1;
}

void func_7(int iParam0) // Position - 0x69D
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

void func_8(int iParam0) // Position - 0x756
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

void func_9(int iParam0) // Position - 0x81E
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

bool func_10(int iParam0) // Position - 0x8DC
{
	return iParam0 < 3;
}

void func_11(int iParam0) // Position - 0x8E8
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

void func_12(int iParam0) // Position - 0x995
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_198; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar15 /*15*/] == iParam0)
		{
			func_13(Global_114931.f_7695.f_137[iVar15 /*15*/].f_6);
		
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

int func_13(int iParam0) // Position - 0xA51
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (func_19(iParam0, Global_21627) == 1)
		{
			func_18(iParam0, Global_21627, 0);
		
			if (func_17(iParam0, Global_21627) == 0)
			{
				iVar0 = Global_21627;
				func_14(iParam0, iVar0);
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

void func_14(int iParam0, int iParam1) // Position - 0xAA7
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
			func_16(iParam0, iVar0, 0);
			func_15(iParam0, iVar0, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2) // Position - 0xADC
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
}

void func_16(int iParam0, int iParam1, int iParam2) // Position - 0xB21
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
}

int func_17(int iParam0, int iParam1) // Position - 0xB66
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_18(int iParam0, int iParam1, int iParam2) // Position - 0xB90
{
	Global_2339[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_19[iParam1] = iParam2;
}

int func_19(int iParam0, int iParam1) // Position - 0xBC1
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

void func_20(int iParam0) // Position - 0xBEB
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

bool func_21(var uParam0, float fParam1, var uParam2, var uParam3) // Position - 0xCC3
{
	bool bVar0;
	int iVar1;
	int iVar2;

	uParam0->f_46 < 3;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = uParam0->f_46 - 1;

	while (iVar1 < uParam0->f_46)
	{
		if (uParam0->[iVar1 /*3*/].f_1 < fParam1.f_1 && uParam0->[iVar2 /*3*/].f_1 >= fParam1.f_1 || uParam0->[iVar2 /*3*/].f_1 < fParam1.f_1 && uParam0->[iVar1 /*3*/].f_1 >= fParam1.f_1)
			if (uParam0->[iVar1 /*3*/] + (((fParam1.f_1 - uParam0->[iVar1 /*3*/].f_1) / (uParam0->[iVar2 /*3*/].f_1 - uParam0->[iVar1 /*3*/].f_1)) * (uParam0->[iVar2 /*3*/] - uParam0->[iVar1 /*3*/])) < fParam1)
				bVar0 = !bVar0;
	
		iVar2 = iVar1;
		iVar1 = iVar1 + 1;
	}

	return bVar0;
}

bool func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0xD7F
{
	float fVar0;

	fVar0 = { uParam3 - uParam0 };
	return (fVar0 * fVar0) + (fVar0.f_1 * fVar0.f_1) <= fParam6 * fParam6;
}

bool func_23() // Position - 0xDA9
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return false;

	if (func_25() != 2)
		return false;

	if (Global_33795)
		return false;

	if (Global_65021)
		return false;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_24())
		return false;

	return true;
}

bool func_24() // Position - 0xE1F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

int func_25() // Position - 0xE39
{
	func_26();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_26() // Position - 0xE52
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_29(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_28(PLAYER::PLAYER_PED_ID());
		
			if (func_10(iVar0) && !func_27(14) || Global_113879)
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

bool func_27(int iParam0) // Position - 0xF4F
{
	return Global_44886 == iParam0;
}

int func_28(var uParam0) // Position - 0xF5D
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_29(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_29(int iParam0) // Position - 0xF9A
{
	if (func_10(iParam0))
		return func_30(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_30(int iParam0) // Position - 0xFBF
{
	return Global_2339[iParam0 /*29*/];
}

void func_31(var uParam0) // Position - 0xFCE
{
	int iVar0;
	float fVar1;

	uParam0->f_51 == 0;
	uParam0->f_46 < 3;

	for (iVar0 = 0; iVar0 < uParam0->f_46; iVar0 = iVar0 + 1)
	{
		uParam0->f_47 = { uParam0->f_47 + uParam0->[iVar0 /*3*/] };
	}

	uParam0->f_47 = { uParam0->f_47 / F2V(BUILTIN::TO_FLOAT(iVar0)) };

	for (iVar0 = 0; iVar0 < uParam0->f_46; iVar0 = iVar0 + 1)
	{
		fVar1 = BUILTIN::VDIST2(uParam0->f_47, uParam0->[iVar0 /*3*/]);
	
		if (fVar1 > uParam0->f_50)
			uParam0->f_50 = fVar1;
	}

	uParam0->f_50 = BUILTIN::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_32(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x106E
{
	uParam0->f_51 == 0;
	uParam0->f_46 >= 15;
	uParam0->[uParam0->f_46 /*3*/] = { fParam1 };
	uParam0->f_46 = uParam0->f_46 + 1;
}

void func_33(var uParam0) // Position - 0x109F
{
	uParam0->f_51;
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_34() // Position - 0x10C6
{
	BRAIN::REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_35(int iParam0) // Position - 0x10DA
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

