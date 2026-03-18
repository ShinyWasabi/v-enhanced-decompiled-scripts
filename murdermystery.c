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
	var Static_44 = 0;
	float Static_45 = 0f;
	float Static_46 = 0f;
	float Static_47 = 0f;
	float Static_48 = 0f;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	float Static_58 = 0f;
	var Static_59 = 0;
	var Static_60 = 0;
	var Static_61 = 0;
	float Static_62 = 0f;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	int Static_70 = 0;
	int Static_71 = 0;
	var Static_72 = 0;
	int Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	char* Static_77 = 0;
	char* Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	int Static_83 = 0;
	int Static_84 = 0;
	int Static_85 = 0;
	char* Static_86 = 0;
	char* Static_87 = 0;
	char* Static_88 = 0;
	char* Static_89 = 0;
	int Static_90 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 5;
	var ScriptArg_2 = 0;
	var ScriptArg_3 = 0;
	var ScriptArg_4 = 0;
	var ScriptArg_5 = 0;
	var ScriptArg_6 = 0;
	var ScriptArg_7 = 0;
	var ScriptArg_8 = 0;
	var ScriptArg_9 = 0;
	var ScriptArg_10 = 0;
	var ScriptArg_11 = 0;
	var ScriptArg_12 = 0;
	var ScriptArg_13 = 0;
	var ScriptArg_14 = 0;
	var ScriptArg_15 = 0;
	var ScriptArg_16 = 0;
	var ScriptArg_17 = 5;
	var ScriptArg_18 = 0;
	var ScriptArg_19 = 0;
	var ScriptArg_20 = 0;
	var ScriptArg_21 = 0;
	var ScriptArg_22 = 0;
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
	Static_26 = 3;
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_37 = 1;
	Static_38 = 65;
	Static_39 = 49;
	Static_40 = 64;
	Static_45 = 175f * 175f;
	Static_46 = 5f * 5f;
	Static_47 = 5f * 5f;
	Static_48 = 2f * 2f;
	Static_49 = { -1011.7365f, -480.254f, 39.0734f };
	Static_52 = { -1003.0779f, -477.962f, 49.1374f };
	Static_55 = { -1018.3756f, -483.9436f, 36.0964f };
	Static_58 = 114.7664f;
	Static_59 = { -1005.1911f, -478.2104f, 49.0262f };
	Static_62 = 80.6659f;
	Static_63 = { 1f, 1f, 2f };
	Static_66 = { -596.05f, 2088.56f, 130.59f };
	Static_77 = "FOUND_CLUE";
	Static_78 = "NOIR_FILTER_SOUNDS";
	Static_83 = 7;
	Static_86 = "missmurder";
	Static_87 = "idle";
	Static_88 = "MM_LETREAD" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to read the letter. */;
	Static_89 = "MM_LETCANC" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stop reading. */;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_91();

	func_84(ScriptArg_0.f_1[0 /*3*/]);

	while (true)
	{
		func_83();
	
		if (func_78())
			func_1();
		else
			func_91();
	
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x15D
{
	switch (Static_83)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_77(Static_83))
				if (func_74() && !func_73() && func_72() && !func_71(false))
					if (Static_85 != 0)
						if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Static_85))
							func_69(Static_83, true, false);
			break;
	
		case 4:
			if (func_68(Static_76))
				PED::SET_PED_CAPSULE(Static_76, 0.75f);
		
			if (!func_77(4))
				if (func_74() && func_72() && !func_71(false))
					func_69(4, true, false);
			break;
	
		case 5:
			if (func_64())
				func_35();
		
			if (!func_77(5) && Static_71 == 4 && func_72() && !func_71(false))
				func_69(5, true, false);
			break;
	
		case 6:
			if (!func_34(3))
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.89136f, 2033.1201f, 130.51126f, -578.47833f, 2035.0287f, 127.561455f, 0.75f, 0, 1, 0))
					func_33(3, true);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.23047f, 2032.0541f, 130.29276f, -577.6669f, 2033.9175f, 127.51573f, 0.75f, 0, 1, 0))
			{
				if (func_34(3))
				{
					func_24(-595.17456f, 2085.7678f, 136.88127f, -601.57544f, 2106.1616f, 125.46188f, 20.5f, -602.8466f, 2115.5112f, 126.4209f, 128.0735f, 13.5f, 22.2f, 5.7f, true, false, true, true, false);
					func_33(3, false);
				}
			}
		
			if (!func_34(2))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.23047f, 2032.0541f, 130.29276f, -577.6669f, 2033.9175f, 127.51573f, 0.75f, 0, 1, 0) || CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::CREATE_MODEL_HIDE(Static_66, 200f, joaat("PROP_MINESHAFT_DOOR"), 0);
					func_33(2, true);
				}
			}
		
			if (func_74() && !func_73())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
			
				if (func_22(6))
				{
					if (!func_77(6) && func_72() && !func_71(false))
					{
						func_7(134, 4, true);
						func_69(6, true, false);
						func_33(1, true);
					}
				}
			
				if (func_6())
				{
					if (!func_5(0))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
							func_3();
					
						func_2("MM_TOGGLE" /* GXT: Press ~INPUT_CONTEXT~ to cycle Vintage filters. */, 10);
					}
				}
			}
		
			if (func_34(1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -594.9976f, 2089.0046f, 130.34494f, -597.1125f, 2088.3645f, 133.30351f, 1f, 0, 1, 0))
				{
					func_2("MM_HELP" /* GXT: Return to Isaac's corpse or call him on your cellphone to cycle Vintage filters. */, 10000);
					func_33(1, false);
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1) // Position - 0x449
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_3() // Position - 0x460
{
	switch (Global_114931.f_10056.f_134)
	{
		case 0:
			Global_114931.f_10056.f_134 = 1;
			break;
	
		case 1:
			Global_114931.f_10056.f_134 = 2;
			GRAPHICS::SET_EXTRA_TCMODIFIER(func_4());
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ON", "NOIR_FILTER_SOUNDS", 1);
			break;
	
		case 2:
			Global_114931.f_10056.f_134 = 0;
			break;
	}
}

char* func_4() // Position - 0x4C3
{
	switch (Global_114931.f_10056.f_134)
	{
		case 1:
			return "NG_filmnoir_BW02";
	
		case 2:
			return "NG_filmnoir_BW01";
	
		default:
		
	}

	return "";
}

bool func_5(int iParam0) // Position - 0x4F4
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

bool func_6() // Position - 0x54B
{
	return Global_114931.f_10056.f_133 == 127;
}

void func_7(int iParam0, int iParam1, bool bParam2) // Position - 0x55F
{
	int iVar0;

	Global_10183 = iParam0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		func_14();
	
		if (iParam1 == 4)
		{
			func_13(iParam0, 0, 1);
			func_13(iParam0, 1, 1);
			func_13(iParam0, 2, 1);
			func_12(iParam0, 0, 1);
			func_12(iParam0, 1, 1);
			func_12(iParam0, 2, 1);
		}
		else
		{
			if (func_11(iParam0, iParam1) == 1 && func_10(iParam0, iParam1) == 1)
				bParam2 = false;
		
			iVar0 = iParam1;
			func_13(iParam0, iVar0, 1);
			func_12(iParam0, iVar0, 1);
		
			if (iParam0 == 172 && !IS_BIT_SET(Global_2733138.f_5841, 4))
				bParam2 = false;
		
			if (iParam0 == 171 && !IS_BIT_SET(Global_2733138.f_5841, 3))
				bParam2 = false;
		
			if (iParam0 == 173 && !IS_BIT_SET(Global_2733138.f_5841, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_80305)
			{
				if (iParam1 != 4)
				{
					if (Global_21627 != iParam1)
					{
						Global_10156[iParam1 /*4*/] = { func_9(iParam0) };
						Global_10173[iParam1] = true;
						Global_10178[iParam1] = iParam0;
					}
					else if (iParam0 == Global_21627)
					{
					}
					else
					{
						Global_10107[1 /*6*/] = { func_9(iParam0) };
						Global_10107[1 /*6*/].f_5 = iParam1;
						func_8();
					}
				}
				else
				{
					Global_10107[1 /*6*/] = { func_9(iParam0) };
					Global_10107[1 /*6*/].f_5 = iParam1;
					func_8();
				}
			}
			else
			{
				Global_10107[1 /*6*/] = { func_9(iParam0) };
				Global_10107[1 /*6*/].f_5 = iParam1;
				func_8();
			}
		}
	}
}

void func_8() // Position - 0x6DD
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

struct<4> func_9(int iParam0) // Position - 0x756
{
	return Global_2339[iParam0 /*29*/].f_3;
}

int func_10(int iParam0, int iParam1) // Position - 0x769
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

int func_11(int iParam0, int iParam1) // Position - 0x793
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_12[iParam1];
}

void func_12(int iParam0, int iParam1, int iParam2) // Position - 0x7BD
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
}

void func_13(int iParam0, int iParam1, int iParam2) // Position - 0x802
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
}

void func_14() // Position - 0x847
{
	if (func_21(14))
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
		Global_21627 = func_15();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

int func_15() // Position - 0x8E9
{
	func_16();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_16() // Position - 0x902
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
		
			if (func_17(iVar0) && !func_21(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_17(Global_114931.f_2370.f_539.f_4321))
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

bool func_17(int iParam0) // Position - 0x9FF
{
	return iParam0 < 3;
}

int func_18(var uParam0) // Position - 0xA0B
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_19(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_19(int iParam0) // Position - 0xA48
{
	if (func_17(iParam0))
		return func_20(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_20(int iParam0) // Position - 0xA6D
{
	return Global_2339[iParam0 /*29*/];
}

bool func_21(int iParam0) // Position - 0xA7C
{
	return Global_44886 == iParam0;
}

bool func_22(int iParam0) // Position - 0xA8A
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == 0)
		return true;

	iVar1 = MISC::GET_BITS_IN_RANGE(Global_114931.f_10056.f_133, 0, iVar0 - 1);
	return iVar1 == func_23(2, iVar0) - 1;
}

int func_23(int iParam0, int iParam1) // Position - 0xAC3
{
	if (iParam1 == 0)
		return 1;

	return iParam0 * func_23(iParam0, iParam1 - 1);
}

void func_24(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18) // Position - 0xAE5
{
	func_25(fParam0, fParam3, fParam6, fParam7, fParam10, fParam11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, var uParam12, var uParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18) // Position - 0xB0F
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
				func_32(uVar0);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar0, uParam0, uParam3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				uVar10 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
			
				if (uVar10.f_2 > uParam0.f_2 && uVar10.f_2 < uParam3.f_2 || uVar10.f_2 > uParam3.f_2 && uVar10.f_2 < uParam0.f_2)
					if (func_29(uVar0, uParam0, uParam3, fParam6))
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
				if (func_27(uVar0, func_15(), true))
					bVar1 = false;
		
			if (bVar1)
			{
				if (!func_26(fParam11))
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

bool func_26(float fParam0, var uParam1, var uParam2) // Position - 0xF05
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

bool func_27(var uParam0, int iParam1, bool bParam2) // Position - 0xF2F
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		return false;

	for (iVar0 = 0; func_28(iParam1, iVar0, &uVar1, &iVar9); iVar0 = iVar0 + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114931.f_7236[iVar9], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&uVar1, uParam0))
				return true;
	}

	return false;
}

bool func_28(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xF9D
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

bool func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x106E
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
		fVar0 = { func_31(uParam1 - uParam4) };
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
	
		if (func_30(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar6, uVar9) || func_30(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar9, uVar15) || func_30(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar12, uVar15) || func_30(uVar18[0 /*3*/], uVar18[1 /*3*/], uVar6, uVar12) || func_30(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar6, uVar9) || func_30(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar9, uVar15) || func_30(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar12, uVar15) || func_30(uVar18[1 /*3*/], uVar18[3 /*3*/], uVar6, uVar12) || func_30(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar6, uVar9) || func_30(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar9, uVar15) || func_30(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar12, uVar15) || func_30(uVar18[3 /*3*/], uVar18[2 /*3*/], uVar6, uVar12) || func_30(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar6, uVar9) || func_30(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar9, uVar15) || func_30(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar12, uVar15) || func_30(uVar18[2 /*3*/], uVar18[0 /*3*/], uVar6, uVar12))
			return true;
	}

	return false;
}

bool func_30(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0x1364
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

Vector3 func_31(float fParam0, var uParam1, var uParam2) // Position - 0x1418
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

void func_32(var uParam0) // Position - 0x1457
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

void func_33(int iParam0, bool bParam1) // Position - 0x14BC
{
	if (bParam1)
		MISC::SET_BIT(&Static_90, iParam0);
	else
		MISC::CLEAR_BIT(&Static_90, iParam0);
}

bool func_34(int iParam0) // Position - 0x14DC
{
	return IS_BIT_SET(Static_90, iParam0);
}

void func_35() // Position - 0x14E9
{
	int iVar0;

	switch (Static_70)
	{
		case 0:
			if (!MISC::GET_MISSION_FLAG())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_49, Static_63, 1, 1, 0))
				{
					if (func_63())
					{
						Static_70 = 2;
						func_62(false, 800);
					}
				}
			}
			break;
	
		case 1:
			func_61();
		
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_52, Static_63, 1, 1, 0))
				{
					func_55(0);
					Static_70 = 3;
					func_62(false, 800);
				}
			
				func_50();
			
				if (func_68(PLAYER::PLAYER_PED_ID()))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
						if (iVar0 != joaat("WEAPON_UNARMED"))
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 0);
				
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 294, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				}
			}
			break;
	
		case 2:
			func_61();
		
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_46(24, false);
				func_45(PLAYER::PLAYER_PED_ID(), Static_59, Static_62);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_44(true);
				func_24(-1023.43915f, -479.5592f, 35.81806f, -1014.3829f, -495.12393f, 40.107964f, 18.5f, -1024.0964f, -485.1923f, 35.9779f, 209.0203f, func_43(), true, false, true, true, false);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Static_59, 20f, 0);
				func_39(24, &Static_69);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(Static_69);
				Static_84 = MISC::GET_GAME_TIMER() + 40000;
			
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() || !INTERIOR::IS_INTERIOR_READY(Static_69) && Static_84 > MISC::GET_GAME_TIMER())
				{
					BUILTIN::WAIT(0);
				}
			
				STREAMING::NEW_LOAD_SCENE_STOP();
			
				if (Static_84 <= MISC::GET_GAME_TIMER())
				{
					INTERIOR::UNPIN_INTERIOR(Static_69);
					func_45(PLAYER::PLAYER_PED_ID(), Static_55, Static_58);
					func_62(true, 800);
					Static_70 = 0;
				}
				else
				{
					func_62(true, 800);
					Static_70 = 1;
					func_38();
				}
			}
			break;
	
		case 3:
			func_61();
			func_55(0);
		
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_45(PLAYER::PLAYER_PED_ID(), Static_55, Static_58);
				func_46(24, true);
				INTERIOR::UNPIN_INTERIOR(Static_69);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				func_44(false);
				func_37();
				func_36(Static_55, 30f, 12, 5000, false, false);
				func_62(true, 800);
				Static_70 = 0;
			}
			break;
	}
}

void func_36(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) // Position - 0x1798
{
	var uVar0;
	int iVar1;

	uVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(uParam0, fParam3, iParam4, 127);

	if (STREAMING::STREAMVOL_IS_VALID(uVar0))
	{
		iVar1 = MISC::GET_GAME_TIMER() + iParam5;
	
		while (!STREAMING::STREAMVOL_HAS_LOADED(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam7)
				func_55(0);
		
			if (bParam6)
				func_61();
		
			BUILTIN::WAIT(0);
		}
	
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
	
		STREAMING::STREAMVOL_DELETE(uVar0);
	}
}

void func_37() // Position - 0x1808
{
	if (MISC::IS_PC_VERSION())
	{
		if (func_34(0))
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			func_33(0, false);
		}
	}
}

void func_38() // Position - 0x1829
{
	if (MISC::IS_PC_VERSION())
	{
		if (!func_34(0))
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("MYSTERY LETTER CAM");
			func_33(0, true);
		}
	}
}

char* func_39(int iParam0, var uParam1) // Position - 0x1850
{
	var uVar0;

	uVar0 = { func_40(iParam0) };
	*uParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uVar0, uVar0.f_3);
	return uVar0.f_4;
}

struct<5> func_40(int iParam0) // Position - 0x1875
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
			uVar5 = { func_42(1, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
	
		case 26:
			uVar5 = { func_42(2, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
	
		case 27:
			uVar5 = { func_42(3, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
	
		case 28:
			uVar5 = { func_42(4, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
	
		case 29:
			uVar5 = { func_42(5, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
	
		case 30:
			uVar5 = { func_42(6, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
	
		case 31:
			uVar5 = { func_42(7, false) };
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
			uVar5 = { func_42(35, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
	
		case 34:
			uVar5 = { func_42(36, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
	
		case 35:
			uVar5 = { func_42(37, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
	
		case 36:
			uVar5 = { func_42(38, false) };
			uVar0 = { -20.1f, -580.8f, 91.3f };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
	
		case 37:
			uVar5 = { func_42(39, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
	
		case 38:
			uVar5 = { func_42(40, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
	
		case 39:
			uVar5 = { func_42(41, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
	
		case 40:
			uVar5 = { func_42(42, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "hei_dlc_apart_high_new";
			uVar0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
	
		case 41:
			uVar5 = { func_42(43, false) };
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
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 84:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 85:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 86:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 87:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 88:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 89:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 90:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 91:
			uVar5 = { func_42(87, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 92:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 93:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 94:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 95:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 96:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 97:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 98:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 99:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 100:
			uVar5 = { func_42(88, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 101:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 102:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 103:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 104:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 105:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 106:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 107:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 108:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 109:
			uVar5 = { func_42(89, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 110:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 111:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 112:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_01c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 113:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 114:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 115:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_02c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 116:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03a_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 117:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03b_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 118:
			uVar5 = { func_42(90, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "ex_int_office_03c_dlc";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 119:
			uVar5 = { func_42(91, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "bkr_biker_dlc_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 120:
			uVar5 = { func_42(97, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "bkr_biker_dlc_int_02";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 121:
			uVar5 = { func_42(103, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 122:
			uVar5 = { func_42(104, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 123:
			uVar5 = { func_42(105, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 124:
			uVar5 = { func_42(106, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 125:
			uVar5 = { func_42(107, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 126:
			uVar5 = { func_42(108, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 127:
			uVar5 = { func_42(109, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 128:
			uVar5 = { func_42(110, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 129:
			uVar5 = { func_42(111, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 130:
			uVar5 = { func_42(112, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 131:
			uVar5 = { func_42(113, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 132:
			uVar5 = { func_42(114, false) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_impexp_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 133:
			uVar5 = { func_42(103, true) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 134:
			uVar5 = { func_42(106, true) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 135:
			uVar5 = { func_42(109, true) };
			uVar0 = { uVar5 + { 1f, 0f, 0f } };
			uVar0.f_3 = "imp_imptexp_mod_int_01";
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 136:
			uVar5 = { func_42(112, true) };
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
			uVar0.f_3 = func_41(&Global_4718592.f_238097[0 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 244:
			uVar0 = { Global_4718592.f_238097[1 /*160*/].f_16 };
			uVar0.f_3 = func_41(&Global_4718592.f_238097[1 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 245:
			uVar0 = { Global_4718592.f_238097[2 /*160*/].f_16 };
			uVar0.f_3 = func_41(&Global_4718592.f_238097[2 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 246:
			uVar0 = { Global_4718592.f_238097[3 /*160*/].f_16 };
			uVar0.f_3 = func_41(&Global_4718592.f_238097[3 /*160*/]);
			uVar0.f_4 = uVar0.f_3;
			break;
	
		case 247:
			uVar0 = { Global_4718592.f_238097[4 /*160*/].f_16 };
			uVar0.f_3 = func_41(&Global_4718592.f_238097[4 /*160*/]);
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

	func_26(uVar0);
	return uVar0;
}

char* func_41(char* sParam0) // Position - 0x4533
{
	return sParam0;
}

struct<6> func_42(int iParam0, bool bParam1) // Position - 0x453D
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

Vector3 func_43() // Position - 0x50F3
{
	return 2.55f, 5.665f, 2.55f;
}

void func_44(bool bParam0) // Position - 0x510A
{
	func_33(5, bParam0);
	CLOCK::PAUSE_CLOCK(bParam0);
}

void func_45(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x511F
{
	ENTITY::SET_ENTITY_COORDS(uParam0, uParam1, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(uParam0, fParam4);
}

void func_46(int iParam0, bool bParam1) // Position - 0x513D
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_39(iParam0, &iVar1);

	if (!MISC::ARE_STRINGS_EQUAL("NONE" /* GXT: None */, sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
				return;
		
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_49(iParam0, true);
				return;
			}
		
			iVar2 = INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
		
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_49(iParam0, true);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
				return;
		
			if (func_47(iParam0))
				func_49(iParam0, false);
		}
	
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
	
		if (bParam1)
		{
		}
	}
}

bool func_47(int iParam0) // Position - 0x51E9
{
	int iVar0;

	iVar0 = { func_48(iParam0) };

	if (iVar0.f_1 != -1 && IS_BIT_SET(Global_40235[iVar0.f_1], iVar0))
		return true;

	return false;
}

struct<2> func_48(int iParam0) // Position - 0x521A
{
	int iVar0;

	iVar0 = iParam0 % 32;
	iVar0.f_1 = iParam0 / 32;

	if (iVar0.f_1 >= 8)
	{
		iVar0 = -1;
		iVar0.f_1 = -1;
	}

	return iVar0;
}

void func_49(int iParam0, bool bParam1) // Position - 0x5247
{
	var uVar0;

	uVar0 = { func_48(iParam0) };

	if (uVar0.f_1 == -1)
		return;

	if (bParam1)
		MISC::SET_BIT(&Global_40235[uVar0.f_1], uVar0);
	else
		MISC::CLEAR_BIT(&Global_40235[uVar0.f_1], uVar0);
}

void func_50() // Position - 0x528A
{
	var uVar0;
	var uVar3;
	float fVar6;

	uVar0 = { -1007.013f, -478.36624f, 49.028175f };
	uVar3 = { -1007.85004f, -476.95728f, 51.028072f };
	fVar6 = 1.75f;

	switch (Static_71)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uVar0, uVar3, fVar6, 0, 1, 0) && !func_5(0))
			{
				func_54(Static_88);
				Static_71 = Static_71 + 1;
			}
			break;
	
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uVar0, uVar3, fVar6, 0, 1, 0) && !func_5(0))
			{
				if (!func_53(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_COORD")))
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1007.9945f, -476.8016f, 49.9117f, -1, 0, 2);
			
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					func_52(false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1007.3514f, -477.5197f, 49.0282f, 1f, -1, 0.5f, 0, 30.4025f);
					func_54(Static_89);
					HUD::DISPLAY_RADAR(0);
					CAM::SET_CAM_ACTIVE(Static_72, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					Static_71 = Static_71 + 1;
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				Static_71 = Static_71 - 1;
			}
			break;
	
		case 2:
			func_55(0);
			func_52(false);
			HUD::DISPLAY_RADAR(0);
		
			if (!func_51(Static_89))
				func_54(Static_89);
		
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					Static_84 = MISC::GET_GAME_TIMER() + 300;
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0);
				}
				else
				{
					Static_84 = 0;
				}
			
				Static_71 = Static_71 + 1;
			}
			break;
	
		case 3:
			func_55(0);
		
			if (Static_84 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				HUD::DISPLAY_RADAR(1);
				func_52(true);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE(Static_72, 0);
				Static_71 = Static_71 + 1;
			}
			break;
	
		case 4:
			Static_71 = 0;
			break;
	}
}

bool func_51(char* sParam0) // Position - 0x5487
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_52(bool bParam0) // Position - 0x549A
{
	func_33(6, !bParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0);
}

bool func_53(var uParam0, int iParam1) // Position - 0x54B5
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	return iVar0 == 1 || iVar0 == 0;
}

void func_54(char* sParam0) // Position - 0x54D5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_55(int iParam0) // Position - 0x54EB
{
	if (func_60())
		return;

	if (!(Global_21627.f_1 == 1))
	{
		if (func_5(0))
			func_56(iParam0);
	
		MISC::SET_BIT(&Global_9464, 2);
	}
}

void func_56(int iParam0) // Position - 0x551E
{
	if (func_60())
		return;

	if (Global_21859)
		if (func_59())
			func_58(true, true);
		else
			func_58(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_57())
		Global_21627.f_1 = 3;
}

bool func_57() // Position - 0x55A8
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_58(bool bParam0, bool bParam1) // Position - 0x55CF
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

bool func_59() // Position - 0x5643
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_60() // Position - 0x5651
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_61() // Position - 0x5660
{
	Global_24407.f_6 = 1;
}

void func_62(bool bParam0, int iParam1) // Position - 0x566E
{
	func_33(4, !bParam0);

	if (bParam0)
		CAM::DO_SCREEN_FADE_IN(iParam1);
	else
		CAM::DO_SCREEN_FADE_OUT(iParam1);
}

bool func_63() // Position - 0x5692
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();

	if (iVar0 >= 21 || iVar0 < 6)
		return true;

	func_2("MM_SOLBUSY" /* GXT: Solomon's office is busy. Come back later. */, 5000);
	return false;
}

bool func_64() // Position - 0x56C5
{
	if (Static_70 == 1)
		return true;

	if (!func_72())
		return false;

	if (!func_67(61))
		return false;

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && Static_70 == 0)
		return false;

	if (func_71(false))
		return false;

	if (func_66())
		return false;

	if (func_17(func_15()))
		if (func_65(func_15()) == 4 || func_65(func_15()) == 5)
			return false;

	if (MISC::GET_RANDOM_EVENT_FLAG())
		return false;

	if (Global_33939)
		return false;

	return true;
}

int func_65(int iParam0) // Position - 0x5764
{
	if (!func_17(iParam0))
		return 7;

	return Global_114931.f_7695.f_919[iParam0];
}

bool func_66() // Position - 0x5788
{
	var uVar0;

	if (Global_33944)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0)))
					return true;
		}
	}

	return false;
}

bool func_67(int iParam0) // Position - 0x57CC
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

bool func_68(var uParam0) // Position - 0x57F8
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

void func_69(int iParam0, bool bParam1, bool bParam2) // Position - 0x5819
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_114931.f_10056.f_133), iParam0);
	
		if (!bParam2)
			AUDIO::PLAY_SOUND_FRONTEND(Static_79, Static_77, Static_78, 0);
	
		func_70();
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114931.f_10056.f_133), iParam0);
	}
}

int func_70() // Position - 0x585D
{
	if (func_71(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_71(bool bParam0) // Position - 0x58A8
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

bool func_72() // Position - 0x58D0
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("PLAYER_ZERO");
}

bool func_73() // Position - 0x58E6
{
	if (func_68(PLAYER::PLAYER_PED_ID()))
		return PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);

	return false;
}

bool func_74() // Position - 0x5906
{
	return BUILTIN::VDIST2(func_76(Static_83), Static_80) < func_75(Static_83);
}

float func_75(int iParam0) // Position - 0x5923
{
	switch (iParam0)
	{
		case 0:
			return Static_46;
	
		case 1:
			return Static_46;
	
		case 2:
			return Static_46;
	
		case 3:
			return Static_46;
	
		case 4:
			return Static_47;
	
		case 5:
			return Static_48;
	
		case 6:
			return 4f;
	}

	return 0f;
}

Vector3 func_76(int iParam0) // Position - 0x5994
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
	
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
	
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
	
		case 3:
			return -425.1273f, 1064.8011f, 323.8097f;
	
		case 4:
			return -3160.9604f, 3005.6284f, -39.9701f;
	
		case 5:
			return -1008.1416f, -476.2818f, 49.9633f;
	
		case 6:
			return -544.11f, 1986.58f, 127.03f;
	}

	return 0f, 0f, 0f;
}

bool func_77(int iParam0) // Position - 0x5A63
{
	return IS_BIT_SET(Global_114931.f_10056.f_133, iParam0);
}

bool func_78() // Position - 0x5A77
{
	switch (Static_83)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return !func_77(Static_83) && func_80();
	
		case 4:
			return func_80();
	
		case 5:
			return func_22(Static_83) && func_80() || Static_70 == 1 || Static_70 == 3 || Static_70 == 2;
	
		case 6:
			return func_80() || func_34(2) && func_79(Static_66);
	
		default:
		
	}

	return false;
}

bool func_79(var uParam0, var uParam1, var uParam2) // Position - 0x5B1A
{
	var uVar0;
	var uVar1;

	return GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(uParam0, &uVar0, &uVar1);
}

bool func_80() // Position - 0x5B2E
{
	return BUILTIN::VDIST2(func_82(Static_83), Static_80) < func_81(Static_83);
}

float func_81(int iParam0) // Position - 0x5B4B
{
	switch (iParam0)
	{
		case 0:
			return Static_45;
	
		case 1:
			return Static_45;
	
		case 2:
			return Static_45;
	
		case 3:
			return Static_45;
	
		case 4:
			return Static_45;
	
		case 5:
			return Static_45;
	
		case 6:
			return Static_45;
	}

	return 0f;
}

Vector3 func_82(int iParam0) // Position - 0x5BBD
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
	
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
	
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
	
		case 3:
			return -425.1273f, 1064.8011f, 323.8097f;
	
		case 4:
			return -3174.901f, 3034.061f, -35.645f;
	
		case 5:
			return -1008.69f, -476.4341f, 49.9544f;
	
		case 6:
			return -544.11f, 1986.58f, 127.03f;
	}

	return 0f, 0f, 0f;
}

void func_83() // Position - 0x5C8C
{
	if (func_68(PLAYER::PLAYER_PED_ID()))
		Static_80 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
}

void func_84(var uParam0, var uParam1, var uParam2) // Position - 0x5CAC
{
	int iVar0;
	int iVar1;

	if (!func_90())
		SCRIPT::TERMINATE_THIS_THREAD();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MURDERMYSTERY")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	for (iVar0 = 0; iVar0 < 7 && Static_83 == 7; iVar0 = iVar0 + 1)
	{
		iVar1 = iVar0;
	
		if (func_89(uParam0, func_82(iVar1), 1056964608))
			Static_83 = iVar1;
	}

	func_85();
}

void func_85() // Position - 0x5D0F
{
	switch (Static_83)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_88(&Static_85, func_76(Static_83), 0.2f);
			break;
	
		case 4:
			func_87(joaat("U_F_M_DROWNED_01"));
			func_86(Static_86);
			Static_76 = PED::CREATE_PED(26, joaat("U_F_M_DROWNED_01"), func_76(4), 184.5548f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_F_M_DROWNED_01"));
			TASK::TASK_PLAY_ANIM(Static_76, Static_86, Static_87, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_76, 1);
			PED::SET_PED_KEEP_TASK(Static_76, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Static_76, 1);
			AUDIO::STOP_PED_SPEAKING(Static_76, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Static_76, 1);
			PED::SET_PED_CONFIG_FLAG(Static_76, 118, 0);
			PED::SET_PED_CONFIG_FLAG(Static_76, 208, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Static_76, 1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_76, joaat("PLAYER"));
			break;
	
		case 5:
			Static_73 = 731806707;
			OBJECT::ADD_DOOR_TO_SYSTEM(Static_73, joaat("V_ILEV_SOL_OFF_DOOR01"), -1002.147f, -478.064f, 50.117f, 1, 1, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Static_73, 1, 1, 0);
			Static_72 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1008.056f, -476.7573f, 50.2493f, -89.5003f, 0f, 38.7952f, 50f, 0, 2);
			break;
	
		case 6:
			func_87(joaat("U_M_O_FILMNOIR"));
			Static_74 = PED::CREATE_PED(26, joaat("U_M_O_FILMNOIR"), func_76(6), 22.9631f, 1, 1);
			PED::SET_PED_PROP_INDEX(Static_74, 0, 0, 0, 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_O_FILMNOIR"));
			AUDIO::STOP_PED_SPEAKING(Static_74, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Static_74, 1);
			PED::EXPLODE_PED_HEAD(Static_74, joaat("WEAPON_SNIPERRIFLE"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_74, joaat("PLAYER"));
			Static_75 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("PROP_VINTAGE_FILMCAN"), -543.71f, 1986.2f, 126.05f, 1, 1, 0, 0);
			break;
	}
}

void func_86(char* sParam0) // Position - 0x5ECB
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);

	while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_87(int iParam0) // Position - 0x5EEB
{
	STREAMING::REQUEST_MODEL(iParam0);

	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_88(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x5F0B
{
	*uParam0 = GRAPHICS::CREATE_TRACKED_POINT();

	if (*uParam0 == 0)
	{
	}
	else
	{
		GRAPHICS::SET_TRACKED_POINT_INFO(*uParam0, uParam1, fParam4);
	}
}

bool func_89(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) // Position - 0x5F31
{
	return BUILTIN::VDIST(uParam0, uParam3) <= iParam6;
}

bool func_90() // Position - 0x5F48
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

void func_91() // Position - 0x6000
{
	func_92();
	func_37();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_92() // Position - 0x6014
{
	switch (Static_83)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			GRAPHICS::DESTROY_TRACKED_POINT(Static_85);
			Static_85 = 0;
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Static_76))
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_76);
		
			STREAMING::REMOVE_ANIM_DICT(Static_86);
			break;
	
		case 5:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Static_73))
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(Static_73, 0);
		
			if (CAM::DOES_CAM_EXIST(Static_72))
				CAM::DESTROY_CAM(Static_72, 0);
		
			if (func_34(4))
				CAM::DO_SCREEN_FADE_IN(0);
		
			if (func_34(5))
				CLOCK::PAUSE_CLOCK(0);
		
			if (func_34(6))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		
			if (func_51(Static_88) || func_51(Static_89))
				HUD::CLEAR_HELP(1);
			break;
	
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(Static_74))
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_74);
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_75))
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Static_75);
		
			if (func_34(2))
				ENTITY::REMOVE_MODEL_HIDE(Static_66, 200f, joaat("PROP_MINESHAFT_DOOR"), 0);
			break;
	}
}

