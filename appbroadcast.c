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
	var Static_19 = 0;
	var Static_20 = 0;
	float Static_21 = 0f;
	float Static_22 = 0f;
	float Static_23 = 0f;
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
	var Static_35 = 0;
	var Static_36 = 0;
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
	Static_21 = 80f;
	Static_22 = 140f;
	Static_23 = 180f;
	TEXT_LABEL_ASSIGN_STRING(&Static_28, "CELL_212" /* GXT: YES */, 16);
	TEXT_LABEL_ASSIGN_STRING(&Static_32, "CELL_213" /* GXT: NO */, 16);
	TEXT_LABEL_ASSIGN_STRING(&Static_36, "CELL_39" /* GXT: Broadcast */, 16);
	TEXT_LABEL_ASSIGN_STRING(&Static_40, "CELL_MP_300" /* GXT: Activate? */, 16);
	TEXT_LABEL_ASSIGN_STRING(&Static_44, "CELL_MP_301" /* GXT: Deactivate? */, 16);
	TEXT_LABEL_ASSIGN_STRING(&Static_48, "CELL_MP_302" /* GXT: Unavailable */, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_55(&Static_26);
	func_46();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_44(true);
			func_43();
		}
	
		if (!(Global_21627.f_1 == 9) && Global_21627.f_1 > 3)
		{
			func_3();
		
			if (Global_21627.f_1 != 8)
				if (func_2())
					func_43();
		}
	
		if (func_1())
			func_43();
	}
}

bool func_1() // Position - 0xDE
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 3 || Global_21627.f_1 == 0 || Global_21571 == 1)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

bool func_2() // Position - 0x121
{
	if (Global_10103 == 1 || Global_21627.f_1 < 7)
	{
		Global_21614 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x14A
{
	if (func_39(&Static_26))
	{
		if (func_17())
		{
			if (Global_2696920)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(0);
				func_10(1080503477, func_11(true, true));
				Global_2696920 = false;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(1);
				func_10(1793940769, func_11(true, true));
				Global_2696920 = true;
			}
		
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0) // Position - 0x1A6
{
	if (func_9())
		return;

	if (Global_21859)
		if (func_8())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_5())
		Global_21627.f_1 = 3;
}

bool func_5() // Position - 0x230
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_6(bool bParam0, bool bParam1) // Position - 0x257
{
	if (bParam0)
	{
		if (func_7(0))
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

bool func_7(int iParam0) // Position - 0x2CB
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

bool func_8() // Position - 0x322
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_9() // Position - 0x330
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_10(int iParam0, int iParam1) // Position - 0x33F
{
	int iVar0;

	iVar0 = 800157557;
	iVar0.f_1 = PLAYER::PLAYER_ID();
	iVar0.f_3 = iParam0;
	iVar0.f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);

	if (!(iParam1 == 0))
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &iVar0, 5, iParam1, iVar0);
}

int func_11(bool bParam0, bool bParam1) // Position - 0x386
{
	int iVar0;
	int iVar1;
	bool bVar2;

	for (iVar1 = 0; iVar1 < 32; iVar1 = iVar1 + 1)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
	
		if (func_16(bVar2, false, false))
			if (bVar2 != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&iVar0, iVar1);
				else if (!func_12(bVar2, 0))
					MISC::SET_BIT(&iVar0, iVar1);
	}

	return iVar0;
}

bool func_12(bool bParam0, int iParam1) // Position - 0x3EB
{
	bool bVar0;

	if (!func_15(bParam0))
		return false;

	if (bParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_13(-1, false) == 8;
	else
		bVar0 = Global_1845299[bParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;

	return bVar0;
}

int func_13(int iParam0, bool bParam1) // Position - 0x444
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;

	if (iVar1 == -1)
		iVar1 = func_14();

	if (Global_1575072[iVar1] == 1)
	{
		bParam1;
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574921[iVar1];
		bParam1;
	}

	return iVar0;
}

int func_14() // Position - 0x485
{
	return Global_1574927;
}

bool func_15(bool bParam0) // Position - 0x491
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 < false)
		return false;

	if (bVar0 >= 32)
		return false;

	return true;
}

bool func_16(bool bParam0, bool bParam1, bool bParam2) // Position - 0x4B3
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

bool func_17() // Position - 0x513
{
	if (!func_33(PLAYER::PLAYER_ID(), true) && func_18())
		return true;

	return false;
}

bool func_18() // Position - 0x536
{
	if (!func_30())
		return false;

	if (func_19(false))
		return false;

	return true;
}

bool func_19(bool bParam0) // Position - 0x557
{
	if (bParam0)
		return func_22();

	return func_20(func_21());
}

bool func_20(int iParam0) // Position - 0x573
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_21() // Position - 0x588
{
	return Global_1912540[PLAYER::PLAYER_ID() /*319*/].f_279;
}

bool func_22() // Position - 0x59E
{
	return func_28(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_27() != 0 && !func_23(0);
}

bool func_23(int iParam0) // Position - 0x5CE
{
	int iVar0;

	iVar0 = func_24(16738, -1);
	return IS_BIT_SET(iVar0, iParam0);
}

int func_24(int iParam0, int iParam1) // Position - 0x5E5
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_25(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

var func_25(int iParam0, int iParam1) // Position - 0x614
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_26(iParam1));
}

int func_26(int iParam0) // Position - 0x629
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_14();
	
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

int func_27() // Position - 0x65D
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

bool func_28(int iParam0, int iParam1) // Position - 0x669
{
	var uVar0;
	int iVar1;

	uVar0 = func_29(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(uVar0, &iVar1, -1))
		return iVar1;

	return 0;
}

var func_29(int iParam0, int iParam1) // Position - 0x68D
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_26(iParam1));
}

bool func_30() // Position - 0x6A2
{
	if (Global_1574612)
		return true;

	if (func_32())
		return true;

	if (func_31())
		return true;

	return func_28(120, -1);
}

bool func_31() // Position - 0x6D2
{
	return Global_1575080;
}

bool func_32() // Position - 0x6DE
{
	return Global_1575082;
}

bool func_33(int iParam0, bool bParam1) // Position - 0x6EA
{
	if (func_38() != 0)
		return func_37(iParam0) != 0;

	return func_34(iParam0, bParam1, false);
}

bool func_34(int iParam0, bool bParam1, bool bParam2) // Position - 0x711
{
	if (bParam1)
		if (func_35(iParam0))
			return 1;

	!bParam2;

	if (Global_1845299[iParam0 /*883*/] == -1)
		return 0;

	return 1;
}

bool func_35(int iParam0) // Position - 0x743
{
	return func_36(iParam0);
}

bool func_36(int iParam0) // Position - 0x751
{
	return IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_11.f_1, 0);
}

int func_37(int iParam0) // Position - 0x768
{
	if (func_16(iParam0, false, true))
		return Global_2658294[iParam0 /*468*/].f_1;

	return 0;
}

int func_38() // Position - 0x78A
{
	return Global_33792;
}

bool func_39(var uParam0) // Position - 0x795
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_21605)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_21596))
		return false;

	func_40();
	Global_21605 = true;
	return true;
}

void func_40() // Position - 0x7D9
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21616, 1);
		func_41();
	}
}

void func_41() // Position - 0x7FE
{
	if (func_42())
		MOBILE::CELL_SET_INPUT(5);
}

bool func_42() // Position - 0x812
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (Global_80305)
		return false;

	iVar2 = 0;
	uVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);

	if (iVar1 == 4)
		iVar2 = 1;

	if (Global_4525122 || iVar2)
		return true;

	return true;
}

void func_43() // Position - 0x859
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_44(bool bParam0) // Position - 0x865
{
	if (bParam0)
	{
		func_45();
	
		if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
			MISC::SET_BIT(&Global_9464, 16);
	
		Global_21627.f_1 = 1;
	
		if (func_7(0))
			func_4(0);
	}
	else if (Global_21627.f_1 == 1)
	{
		if (!(Global_21627.f_1 == 0))
			Global_21627.f_1 = 3;
	}
}

void func_45() // Position - 0x8C8
{
	if (Global_21627.f_1 == 9 || Global_21627.f_1 == 10)
	{
		Global_23053 = 0;
		Global_23049 = 1;
	}
}

void func_46() // Position - 0x8F1
{
	if (!(Global_21627.f_1 == 7))
		Global_21627.f_1 = 7;

	func_54(Global_21608, "SET_DATA_SLOT_EMPTY", BUILTIN::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);

	if (func_17())
		if (Global_2696920)
			func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &Static_44, 0, 0, 0, 0);
		else
			func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &Static_40, 0, 0, 0, 0);
	else
		func_53(Global_21608, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &Static_48, 0, 0, 0, 0);

	func_54(Global_21608, "DISPLAY_VIEW", BUILTIN::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_50(&Static_36);

	if (func_17())
		func_47(13, &Static_28, 1, "", 4, &Static_32, &Static_26);
	else
		func_47(1, "", 1, "", 4, &Static_32, &Static_26);
}

void func_47(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6) // Position - 0xA01
{
	func_48(2, iParam0, sParam1, 0, uParam6, -1);
	func_48(1, iParam2, sParam3, 1, uParam6, 17);
	func_48(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_48(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5) // Position - 0xA31
{
	if (iParam1 == 1)
	{
		func_53(Global_21608, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 0f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(uParam4, iParam3);
		func_49(iParam5, false);
		return;
	}

	if (Global_21615)
	{
		func_53(Global_21608, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(uParam4, iParam3);
		func_49(iParam5, true);
		return;
	}

	func_53(Global_21608, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(uParam4, iParam3);
	func_49(iParam5, true);
}

void func_49(int iParam0, bool bParam1) // Position - 0xAD3
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		MISC::SET_BIT(&Global_9463, iParam0);
		return;
	}

	MISC::CLEAR_BIT(&Global_9463, iParam0);
}

void func_50(int iParam0) // Position - 0xAFE
{
	func_51(Global_21608, "SET_HEADER", iParam0, 0, 0, 0, 0);
}

void func_51(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB16
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_52(iParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
		func_52(iParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
		func_52(iParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
		func_52(iParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
		func_52(iParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_52(int iParam0) // Position - 0xB71
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(iParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_53(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xB83
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(uParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
		func_52(iParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
		func_52(iParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
		func_52(iParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
		func_52(iParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
		func_52(iParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_54(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xC36
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(uParam2));

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

void func_55(var uParam0) // Position - 0xC99
{
	*uParam0 = 0;
}

