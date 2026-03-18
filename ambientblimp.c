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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_33();

	if (func_32())
		Static_26 = 1;

	while (true)
	{
		switch (Static_26)
		{
			case 0:
				if (func_10())
					Static_26 = 1;
				break;
		
			case 1:
				if (func_1())
					func_33();
				break;
		}
	
		BUILTIN::WAIT(1000);
	}
}

bool func_1() // Position - 0x9D
{
	switch (func_8("BLIMP_UNLOCK" /* GXT: The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location. */))
	{
		case 2:
			func_5("BLIMP_UNLOCK" /* GXT: The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location. */, 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
	
		case 1:
			func_4(57);
			func_2();
			return true;
	
		case 0:
			break;
	}

	return false;
}

int func_2() // Position - 0xED
{
	if (func_3(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_3(bool bParam0) // Position - 0x138
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

void func_4(int iParam0) // Position - 0x160
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

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1A2
{
	func_6(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_6(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1C3
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
		func_7();
	}
}

void func_7() // Position - 0x396
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

int func_8(char* sParam0) // Position - 0x4AD
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113571))
		return 1;

	if (func_9(sParam0))
		return 0;

	return 2;
}

bool func_9(char* sParam0) // Position - 0x4D4
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114931.f_20417[iVar0 /*16*/]))
			return true;
	}

	return false;
}

bool func_10() // Position - 0x50F
{
	if (func_31() || func_30() || func_29() || func_28() || func_27())
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (func_26(0))
			{
				func_11(48, 4, false);
				func_2();
				return true;
			}
		}
	}

	return false;
}

void func_11(int iParam0, int iParam1, bool bParam2) // Position - 0x582
{
	int iVar0;

	Global_10183 = iParam0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		func_18();
	
		if (iParam1 == 4)
		{
			func_17(iParam0, 0, 1);
			func_17(iParam0, 1, 1);
			func_17(iParam0, 2, 1);
			func_16(iParam0, 0, 1);
			func_16(iParam0, 1, 1);
			func_16(iParam0, 2, 1);
		}
		else
		{
			if (func_15(iParam0, iParam1) == 1 && func_14(iParam0, iParam1) == 1)
				bParam2 = false;
		
			iVar0 = iParam1;
			func_17(iParam0, iVar0, 1);
			func_16(iParam0, iVar0, 1);
		
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
						Global_10156[iParam1 /*4*/] = { func_13(iParam0) };
						Global_10173[iParam1] = 1;
						Global_10178[iParam1] = iParam0;
					}
					else if (iParam0 == Global_21627)
					{
					}
					else
					{
						Global_10107[1 /*6*/] = { func_13(iParam0) };
						Global_10107[1 /*6*/].f_5 = iParam1;
						func_12();
					}
				}
				else
				{
					Global_10107[1 /*6*/] = { func_13(iParam0) };
					Global_10107[1 /*6*/].f_5 = iParam1;
					func_12();
				}
			}
			else
			{
				Global_10107[1 /*6*/] = { func_13(iParam0) };
				Global_10107[1 /*6*/].f_5 = iParam1;
				func_12();
			}
		}
	}
}

void func_12() // Position - 0x700
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

struct<4> func_13(int iParam0) // Position - 0x779
{
	return Global_2339[iParam0 /*29*/].f_3;
}

int func_14(int iParam0, int iParam1) // Position - 0x78C
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

int func_15(int iParam0, int iParam1) // Position - 0x7B6
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_12[iParam1];
}

void func_16(int iParam0, int iParam1, int iParam2) // Position - 0x7E0
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
}

void func_17(int iParam0, int iParam1, int iParam2) // Position - 0x825
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
}

void func_18() // Position - 0x86A
{
	if (func_25(14))
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
		Global_21627 = func_19();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

int func_19() // Position - 0x90C
{
	func_20();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_20() // Position - 0x925
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
		
			if (func_21(iVar0) && !func_25(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_21(Global_114931.f_2370.f_539.f_4321))
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

bool func_21(int iParam0) // Position - 0xA22
{
	return iParam0 < 3;
}

int func_22(var uParam0) // Position - 0xA2E
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_23(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_23(int iParam0) // Position - 0xA6B
{
	if (func_21(iParam0))
		return func_24(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_24(int iParam0) // Position - 0xA90
{
	return Global_2339[iParam0 /*29*/];
}

bool func_25(int iParam0) // Position - 0xA9F
{
	return Global_44886 == iParam0;
}

bool func_26(int iParam0) // Position - 0xAAD
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

bool func_27() // Position - 0xAD9
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

bool func_28() // Position - 0xB91
{
	return false;
}

bool func_29() // Position - 0xB9A
{
	return true;
}

int func_30() // Position - 0xBA3
{
	return 1;
}

int func_31() // Position - 0xBAC
{
	if (DLC::IS_DLC_PRESENT(joaat("DLC_ATOMICBLIMP")))
		return 1;

	return 0;
}

bool func_32() // Position - 0xBC5
{
	if (func_15(48, 0) == 1 && func_15(48, 1) == 1 && func_15(48, 2) == 1)
		if (func_31() || func_30() || func_29() || func_28() || func_27())
			return true;

	return false;
}

void func_33() // Position - 0xC29
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

