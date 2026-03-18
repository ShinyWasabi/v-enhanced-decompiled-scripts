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
	Static_18 = "NULL";
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_3();
		func_2();
	}

	MISC::SET_MISSION_FLAG(1);

	while (true)
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.75f, 0.9f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_1(0.05f, 0.63f, "PLCHLD_MISS", 0);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.4f, 0.45f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_1(0.05f, 0.7f, "PLCHLD_PASS", 0);
		BUILTIN::WAIT(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0xD8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_2() // Position - 0xF0
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3() // Position - 0xFC
{
	int iVar0;

	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
		BUILTIN::START_NEW_SCRIPT("buddyDeathResponse", 1424);

	if (Global_114931.f_9092 || func_19(false))
	{
		if (!func_18())
		{
			iVar0 = func_17();
		
			if (iVar0 != -1)
			{
				if (!func_12(iVar0))
					return;
			
				MISC::SET_BIT(&(Global_93181[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_4();
		}
	}
}

void func_4() // Position - 0x16B
{
	Global_102489 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_80538))
		{
			switch (func_5())
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&Global_80538, "CMN_MARRE" /* GXT: ~s~Michael was arrested. */, 16);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&Global_80538, "CMN_FARRE" /* GXT: ~s~Franklin was arrested. */, 16);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&Global_80538, "CMN_TARRE" /* GXT: ~s~Trevor was arrested. */, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_80542, "", 16);
		}
	
		Global_102489 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_80538))
		{
			switch (func_5())
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&Global_80538, "CMN_MDIED" /* GXT: ~s~Michael died. */, 16);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&Global_80538, "CMN_FDIED" /* GXT: ~s~Franklin died. */, 16);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&Global_80538, "CMN_TDIED" /* GXT: ~s~Trevor died. */, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_80542, "", 16);
		}
	
		Global_102489 = 0;
		MISC::SET_BIT(&(Global_102454.f_20), 25);
	}
}

int func_5() // Position - 0x252
{
	func_6();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_6() // Position - 0x26B
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_10(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_9(PLAYER::PLAYER_PED_ID());
		
			if (func_8(iVar0) && !func_7(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_8(Global_114931.f_2370.f_539.f_4321))
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

bool func_7(int iParam0) // Position - 0x368
{
	return Global_44886 == iParam0;
}

bool func_8(int iParam0) // Position - 0x376
{
	return iParam0 < 3;
}

int func_9(var uParam0) // Position - 0x382
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_10(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_10(int iParam0) // Position - 0x3BF
{
	if (func_8(iParam0))
		return func_11(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_11(int iParam0) // Position - 0x3E4
{
	return Global_2339[iParam0 /*29*/];
}

bool func_12(int iParam0) // Position - 0x3F3
{
	int iVar0;
	int iVar1;

	func_4();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::START_FIRING_AMNESTY(5000);

	iVar0 = Global_93181[iParam0 /*5*/];
	iVar1 = Global_80576.f_109[iVar0 /*4*/];
	func_16(iVar1, true);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_13(&(Global_114931.f_2370.f_539), iVar1);

	if (Global_96604 == Global_102491)
		Global_114931.f_9092.f_330[iVar1 /*6*/].f_1 = Global_114931.f_9092.f_330[iVar1 /*6*/].f_1 + 1;

	if (!IS_BIT_SET(Global_93217[iVar1 /*34*/].f_15, 1))
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);

	Global_114931.f_9092.f_330[iVar1 /*6*/].f_2 = Global_114931.f_9092.f_330[iVar1 /*6*/].f_2 + 1;
	Global_96604 = Global_102491;

	if (iParam0 == -1)
	{
		Global_114931.f_9092;
		return false;
	}

	if (IS_BIT_SET(Global_93181[iParam0 /*5*/].f_1, 4))
		return false;

	if (IS_BIT_SET(Global_93181[iParam0 /*5*/].f_1, 5))
		return false;

	return true;
}

void func_13(var uParam0, int iParam1) // Position - 0x503
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar5;

	if (iParam1 == 94)
		return;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		iVar1 = Global_114931.f_18540[iVar0];
	
		if (iVar1 == 8 || iVar1 == 9 || iVar1 == 10 || iVar1 == 11 || iVar1 == 34 || iVar1 == 72 || iVar1 == 73 && !IS_BIT_SET(Global_114931.f_9092.f_99.f_219[0], 9))
		{
		}
		else
		{
			uVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
		
			if (!func_15(Global_114931.f_18540[iVar0], &uVar2, &fVar5))
			{
				Global_114931.f_18540[iVar0] = 318;
				func_14(&uParam0->f_2296[iVar0]);
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_99819[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_99819[iVar0 /*29*/].f_9 = 0f;
				Global_99819[iVar0 /*29*/].f_12 = 0f;
				Global_99819[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_99819[iVar0 /*29*/].f_10 = 0f;
				Global_99819[iVar0 /*29*/].f_13 = 0f;
				Global_99819[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_99819[iVar0 /*29*/].f_11 = 0f;
				Global_99819[iVar0 /*29*/].f_14 = 0f;
				Global_99819[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_99819[iVar0 /*29*/].f_26 = 0f;
				Global_99819[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_99819[iVar0 /*29*/].f_27 = 0f;
				Global_99819[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_99819[iVar0 /*29*/].f_28 = 0f;
			}
		}
	}
}

void func_14(var uParam0) // Position - 0x6C9
{
	*uParam0 = -15;
}

bool func_15(int iParam0, var uParam1, var uParam2) // Position - 0x6D7
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
	
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
	
		case 9:
			return func_15(8, uParam1, uParam2);
	
		case 10:
			return func_15(8, uParam1, uParam2);
	
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
	
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
	
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
	
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
	
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return true;
	
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
	
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
	
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
	
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
	
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = 250.4535f - 360f;
			return true;
	
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
	
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
	
		case 24:
			*uParam1 = { 744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f };
			*uParam2 = 51.7279f;
			return true;
	
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
	
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
	
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
	
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
	
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
	
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
	
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
	
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
	
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
	
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
	
		case 42:
			*uParam1 = { { 4.0205f, -2975.3408f, 798.4536f } + { 1f, 0f, 0f } };
			*uParam2 = 90f;
			return true;
	
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
	
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
	
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
	
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
	
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = 42f + 180f;
			return true;
	
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
	
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
	
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
	
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
	
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
	
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
	
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
	
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
	
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
	
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
	
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
	
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		default:
			break;
	}

	return false;
}

void func_16(int iParam0, bool bParam1) // Position - 0x1046
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_96414[iParam0 /*2*/] = true;
	else
		Global_96414[iParam0 /*2*/] = false;
}

int func_17() // Position - 0x1084
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

bool func_18() // Position - 0x10B6
{
	if (Global_102454 == 13 || Global_102454 == 10 || Global_102454 == 11 || Global_102454 == 12)
		return false;

	return true;
}

bool func_19(bool bParam0) // Position - 0x10F4
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

