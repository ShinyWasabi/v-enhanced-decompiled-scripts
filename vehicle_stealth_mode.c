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
	int Static_26 = 0;
	float Static_27 = 0f;
	var Static_28 = 0;
	var Static_29 = 0;
	var Static_30 = 0;
	float Static_31 = 0f;
	float Static_32 = 0f;
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
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
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
	Static_26 = 3;
	Static_27 = 0f;
	Static_31 = -0.0375f;
	Static_32 = 0.17f;
	Static_37 = 1;
	Static_38 = 65;
	Static_39 = 49;
	Static_40 = 64;

	if (func_92(&Static_44))
	{
		while (!func_83())
		{
			func_71(&Static_44);
		
			if (func_61(&Static_44))
				break;
		
			func_17(&Static_44);
			BUILTIN::WAIT(0);
		}
	}

	func_1(&Static_44);
}

void func_1(var uParam0) // Position - 0xA8
{
	func_16();

	if (func_10(uParam0))
		HUD::CLEAR_HELP(1);

	if (func_8(&Static_44))
		func_4(&Static_44);

	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
	func_2();
}

void func_2() // Position - 0xE7
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3() // Position - 0xF3
{
	MISC::CLEAR_BIT(&(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868), 3);
}

void func_4(var uParam0) // Position - 0x10E
{
	func_7(false, true);
	func_6(false, -1, true);
	func_5(&(uParam0->f_6), 5);
}

void func_5(var uParam0, int iParam1) // Position - 0x12C
{
	MISC::CLEAR_BIT(uParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2) // Position - 0x13C
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2647285.f_1582) || Global_2647285.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam2)
	{
		if (bParam0)
		{
			Global_2647285.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2647285.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2647285.f_1582 = -1;
		}
	
		Global_2647285.f_1585 = iParam1;
		Global_2647285.f_1587 = bParam0;
	}
	else
	{
		!bParam2;
	}
}

void func_7(bool bParam0, bool bParam1) // Position - 0x1AE
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2647285.f_1598) || Global_2647285.f_1598 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam1)
	{
		if (bParam0)
		{
			Global_2647285.f_1598 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_76.f_2), 23);
		}
		else
		{
			Global_2647285.f_1598 = -1;
			MISC::CLEAR_BIT(&(Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_76.f_2), 23);
		}
	}
	else
	{
		!bParam1;
	}
}

bool func_8(var uParam0) // Position - 0x22D
{
	return func_9(&(uParam0->f_6), 5);
}

bool func_9(var uParam0, int iParam1) // Position - 0x23E
{
	return IS_BIT_SET(*uParam0, iParam1);
}

bool func_10(var uParam0) // Position - 0x24C
{
	if (uParam0->f_2 != 0)
		if (func_14("STEALTH_OFF" /* GXT: Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */, func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P" /* GXT: The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps. */, func_15(uParam0->f_2)))
			return true;

	return func_12("STEALTH_ON" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */) || func_12(func_11()) || func_12("STEALTH_OFF_P" /* GXT: The Pilot has disabled Stealth Mode. */);
}

char* func_11() // Position - 0x2B0
{
	return "STEALTH_WARN" /* GXT: All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode. */;
}

bool func_12(char* sParam0) // Position - 0x2BB
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_13(char* sParam0, char* sParam1) // Position - 0x2CE
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_14(char* sParam0, char* sParam1, char* sParam2) // Position - 0x2E7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_15(int iParam0) // Position - 0x306
{
	if (iParam0 == joaat("ANNIHILATOR2"))
		return "ANNIH_2_STEALTH" /* GXT: Stealth Annihilator */;

	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
}

void func_16() // Position - 0x324
{
	MISC::CLEAR_BIT(&(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868), 1);
}

void func_17(var uParam0) // Position - 0x33F
{
	func_58(uParam0);
	func_57(uParam0);

	if (func_56(uParam0))
	{
		if (func_55(uParam0) && !func_54(uParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1) && !func_53())
		{
			func_51(uParam0, true);
			func_50(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_54(uParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1) && !func_53())
			{
				func_51(uParam0, false);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}

	if (func_49(uParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 1);
		func_48();
		func_47(uParam0);
	
		if (func_46())
			func_45(true);
	}
	else if (func_44(uParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
		func_16();
		func_47(uParam0);
		func_43(uParam0, 5);
	
		if (func_46())
			func_45(false);
	}

	if (func_54(uParam0) && !func_55(uParam0))
	{
		func_41(uParam0);
		func_40();
		func_43(uParam0, 2);
	
		if (func_37(uParam0))
			func_35(uParam0);
	}
	else
	{
		func_18(uParam0);
	}

	func_3();
	MISC::CLEAR_BIT(&(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868), 4);
}

void func_18(var uParam0) // Position - 0x48C
{
	int iVar0;

	if (!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_34(uParam0) && !func_33(0) && !func_32() && func_30() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0)))
	{
		func_26(uParam0, 1);
		func_25(&(uParam0->f_6), 3);
		iVar0 = uParam0->f_6.f_2 ? 3333 : 10000;
		uParam0->f_6.f_2 = 0;
	
		if (func_56(uParam0))
			func_21(func_22(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), iVar0);
		else
			func_20(func_22(uParam0), func_15(uParam0->f_2), iVar0);
	
		func_19(uParam0);
		func_25(&(uParam0->f_6), 0);
	}
}

void func_19(var uParam0) // Position - 0x56A
{
	func_25(&(uParam0->f_6), 2);
}

void func_20(char* sParam0, char* sParam1, int iParam2) // Position - 0x57B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x598
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam3);
}

char* func_22(var uParam0) // Position - 0x5BB
{
	if (func_56(uParam0))
		if (func_23(uParam0->f_2))
			return "STEALTH_OFF_S" /* GXT: Press ~INPUT_VEH_ROOF~ to enable Stealth Mode. All weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */;
		else
			return "STEALTH_OFF" /* GXT: Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */;

	return "STEALTH_OFF_P" /* GXT: The Pilot has disabled Stealth Mode. */;
}

bool func_23(int iParam0) // Position - 0x5EB
{
	switch (iParam0)
	{
		case joaat("RAIJU"):
			return true;
	}

	return false;
}

var func_24(bool bParam0, var uParam1, var uParam2) // Position - 0x608
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_25(var uParam0, int iParam1) // Position - 0x61F
{
	MISC::SET_BIT(uParam0, iParam1);
}

void func_26(var uParam0, int iParam1) // Position - 0x62F
{
	int iVar0;
	int iVar1;

	if (func_56(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("AKULA"):
				iVar1 = 19004;
				break;
		
			case joaat("ANNIHILATOR2"):
				iVar1 = 36624;
				break;
		
			case joaat("RAIJU"):
				iVar1 = 36625;
				break;
		
			case joaat("TERBYTE"):
				return;
		}
	
		iVar0 = func_29(iVar1, -1) + iParam1;
	
		if (iVar0 >= 0)
			func_27(iVar1, iVar0, -1);
	}
}

void func_27(int iParam0, int iParam1, bool bParam2) // Position - 0x69C
{
	if (bParam2 == -1)
		bParam2 = func_28();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, bParam2);
}

bool func_28() // Position - 0x6C4
{
	return Global_1574927;
}

int func_29(int iParam0, bool bParam1) // Position - 0x6D0
{
	if (bParam1 == -1)
		bParam1 = func_28();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, bParam1);
}

bool func_30() // Position - 0x6EC
{
	return !IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868, 4) && !func_31(true);
}

bool func_31(bool bParam0) // Position - 0x710
{
	if (*Global_4718592.f_128128 == 6 || *Global_4718592.f_128128 == 7)
	{
		if (Global_4718592.f_2 == 20)
			return true;
	
		if (bParam0 && Global_4718592.f_2 == 25)
			return true;
	}

	return false;
}

bool func_32() // Position - 0x760
{
	return Global_77359;
}

bool func_33(int iParam0) // Position - 0x76C
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

bool func_34(var uParam0) // Position - 0x7C3
{
	if (func_56(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("AKULA"):
				return func_29(19004, -1) < 3;
		
			case joaat("ANNIHILATOR2"):
				return func_29(36624, -1) < 3;
		
			case joaat("RAIJU"):
				return func_29(36625, -1) < 3;
		
			case joaat("TERBYTE"):
				return false;
		
			default:
			
		}
	}

	return true;
}

void func_35(var uParam0) // Position - 0x823
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		if (func_23(uParam0->f_2))
			func_36("STEALTH_WARN_S" /* GXT: All weapons are unavailable while the vehicle is in Stealth Mode. */, 3000);
		else
			func_36("STEALTH_WARN" /* GXT: All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode. */, 3000);
}

void func_36(char* sParam0, int iParam1) // Position - 0x855
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_37(var uParam0) // Position - 0x86C
{
	int iVar0;

	if (func_33(0) || func_32())
		return false;

	iVar0 = func_38(uParam0);

	switch (iVar0)
	{
		case 1:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 114) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 99) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 100))
				return true;
			break;
	
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 114))
				return true;
			break;
	
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 92))
				return true;
			break;
	
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 68))
				return true;
			break;
	}

	return false;
}

int func_38(var uParam0) // Position - 0x910
{
	if (!func_39(uParam0))
		return 4;

	switch (uParam0->f_2)
	{
		case joaat("AKULA"):
		case joaat("ANNIHILATOR2"):
		case joaat("RAIJU"):
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
			
				case 0:
					return 2;
			
				default:
				
			}
		
			return 4;
	}

	return 4;
}

bool func_39(var uParam0) // Position - 0x966
{
	return ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0);
}

void func_40() // Position - 0x985
{
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 66, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 67, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}

void func_41(var uParam0) // Position - 0x9ED
{
	int iVar0;

	if (!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9(&(uParam0->f_6), 3) && !func_33(0) && !func_32() && func_30() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0)))
	{
		iVar0 = uParam0->f_6.f_2 ? 3333 : 10000;
		uParam0->f_6.f_2 = 0;
	
		if (func_56(uParam0))
			func_36(func_42(uParam0), iVar0);
		else
			func_21(func_42(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), iVar0);
	
		func_50(uParam0);
		func_25(&(uParam0->f_6), 0);
	}
}

char* func_42(var uParam0) // Position - 0xAB6
{
	if (func_56(uParam0))
		if (func_23(uParam0->f_2))
			return "STEALTH_ON_S" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */;
		else
			return "STEALTH_ON" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */;

	return "STEALTH_ON_P" /* GXT: The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps. */;
}

void func_43(var uParam0, int iParam1) // Position - 0xAE7
{
	if (func_55(uParam0))
		return;

	if (PLAYER::GET_MAX_WANTED_LEVEL() != iParam1)
		PLAYER::SET_MAX_WANTED_LEVEL(iParam1);

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iParam1)
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam1, 0);
}

bool func_44(var uParam0) // Position - 0xB22
{
	return !func_9(uParam0, 0) && func_9(uParam0, 1);
}

void func_45(bool bParam0) // Position - 0xB3E
{
	if (bParam0)
		MISC::SET_BIT(&(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868), 6);
	else
		MISC::CLEAR_BIT(&(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868), 6);
}

bool func_46() // Position - 0xB74
{
	if (Global_1845153)
		return false;

	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868, 5);
}

void func_47(var uParam0) // Position - 0xB97
{
	func_5(&(uParam0->f_6), 0);

	if (func_10(uParam0))
		HUD::CLEAR_HELP(1);

	if (!func_56(uParam0))
		if (func_54(uParam0))
			func_5(&(uParam0->f_6), 1);
		else
			func_5(&(uParam0->f_6), 2);
}

void func_48() // Position - 0xBDE
{
	MISC::SET_BIT(&(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868), 1);
}

bool func_49(var uParam0) // Position - 0xBF9
{
	return func_9(uParam0, 0) && !func_9(uParam0, 1);
}

void func_50(var uParam0) // Position - 0xC15
{
	func_25(&(uParam0->f_6), 1);
}

void func_51(var uParam0, bool bParam1) // Position - 0xC26
{
	func_52(uParam0->f_1, bParam1);
}

void func_52(var uParam0, bool bParam1) // Position - 0xC38
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(uParam0))
		{
			case joaat("AKULA"):
			case joaat("ANNIHILATOR2"):
				VEHICLE::SET_DEPLOY_FOLDING_WINGS(uParam0, !bParam1, 0);
				break;
		
			case joaat("RAIJU"):
				VEHICLE::_SET_DEPLOY_MISSILE_BAYS(uParam0, !bParam1);
				break;
		}
	}
}

bool func_53() // Position - 0xC8B
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868, 3);
}

bool func_54(var uParam0) // Position - 0xCA3
{
	return func_9(uParam0, 0);
}

bool func_55(var uParam0) // Position - 0xCB2
{
	return func_9(uParam0, 2);
}

bool func_56(var uParam0) // Position - 0xCC1
{
	return func_39(uParam0) && uParam0->f_3 == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0) == PLAYER::PLAYER_PED_ID();
}

void func_57(var uParam0) // Position - 0xCF2
{
	if (func_10(uParam0) && func_33(0) || func_32())
	{
		uParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(1);
		func_5(&(uParam0->f_6), 0);
	
		if (func_54(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		
			if (func_56(uParam0))
				func_26(uParam0, -1);
		}
	}
}

void func_58(var uParam0) // Position - 0xD5A
{
	if (func_54(uParam0))
		if (func_8(uParam0))
			if (func_60())
				func_4(uParam0);
		else if (!func_60())
			func_59(uParam0);
	else if (func_8(uParam0))
		func_4(uParam0);

	MISC::CLEAR_BIT(&(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868), 2);
}

void func_59(var uParam0) // Position - 0xDB7
{
	func_7(true, true);
	func_6(true, -1, true);
	func_25(&(uParam0->f_6), 5);
}

bool func_60() // Position - 0xDD5
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868, 2);
}

bool func_61(var uParam0) // Position - 0xDED
{
	if (!func_39(uParam0))
		return true;

	if (!func_70(uParam0))
		return true;

	if (!func_69(uParam0->f_2))
		return true;

	if (func_68(PLAYER::PLAYER_ID(), true, true))
		return true;

	if (func_67(PLAYER::PLAYER_ID()))
		return true;

	if (func_64(PLAYER::PLAYER_ID()))
		return true;

	if (func_62(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

bool func_62(int iParam0) // Position - 0xE60
{
	if (iParam0 > -1)
	{
		if (Global_2658294[iParam0 /*468*/].f_250 > -1)
			if (func_63(Global_2658294[iParam0 /*468*/].f_250) == 4)
				return true;
	
		if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 4))
			return true;
	}

	return false;
}

int func_63(int iParam0) // Position - 0xEA9
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 0;
	
		case 63:
			return 2;
	
		case 64:
			return 3;
	}

	return 6;
}

bool func_64(int iParam0) // Position - 0x1213
{
	if (iParam0 != func_66() && func_65(iParam0, true, true))
		return IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_325, 3);

	return false;
}

bool func_65(bool bParam0, bool bParam1, bool bParam2) // Position - 0x1244
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

int func_66() // Position - 0x12A4
{
	return -1;
}

bool func_67(int iParam0) // Position - 0x12AD
{
	if (IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_260.f_37, 14))
		return true;

	if (IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_260.f_37, 11))
		return true;

	return false;
}

bool func_68(int iParam0, bool bParam1, bool bParam2) // Position - 0x12E6
{
	if (iParam0 == func_66())
		return false;

	if (IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_260.f_37, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_260.f_37, 1))
			return true;

	if (bParam2)
		if (Global_2658294[iParam0 /*468*/].f_325.f_8 != -1)
			return true;

	return false;
}

bool func_69(int iParam0) // Position - 0x134A
{
	switch (iParam0)
	{
		case joaat("AKULA"):
		case joaat("ANNIHILATOR2"):
		case joaat("RAIJU"):
		case joaat("TERBYTE"):
			return true;
	
		default:
		
	}

	return false;
}

bool func_70(var uParam0) // Position - 0x1376
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0);
}

void func_71(var uParam0) // Position - 0x1394
{
	bool bVar0;
	bool bVar1;
	var uVar2;

	bVar0 = func_9(uParam0, 4);
	bVar1 = func_9(uParam0, 0);
	func_82(uParam0);

	if (bVar0)
		func_25(uParam0, 3);
	else
		func_5(uParam0, 3);

	if (bVar1)
		func_25(uParam0, 1);
	else
		func_5(uParam0, 1);

	if (func_39(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (func_70(uParam0))
			{
				uParam0->f_2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
			
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					func_25(uParam0, 2);
			}
		}
	}

	if (func_70(uParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_1, -1, 0))
		{
			uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(uVar2) && !ENTITY::IS_ENTITY_DEAD(uVar2, 0) && PED::IS_PED_A_PLAYER(uVar2))
			{
				uParam0->f_3 = uVar2;
			
				if (uVar2 == PLAYER::PLAYER_PED_ID())
				{
					func_25(uParam0, 4);
				
					if (!func_9(uParam0, 3))
						func_25(&(uParam0->f_6), 6);
				}
			}
		}
	
		if (func_39(uParam0))
			uParam0->f_4 = func_81(PLAYER::PLAYER_PED_ID(), 0);
	
		if (func_56(uParam0))
			if (func_80() && func_74(uParam0))
				func_25(uParam0, 0);
		else
			func_72(uParam0);
	}

	if (func_49(uParam0))
		uParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();
}

void func_72(var uParam0) // Position - 0x14EB
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) && func_73(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam0->f_3)))
		func_25(uParam0, 0);
	else
		func_5(uParam0, 0);
}

bool func_73(int iParam0) // Position - 0x1520
{
	return iParam0 != -1 && IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_868, 1);
}

bool func_74(var uParam0) // Position - 0x153F
{
	bool bVar0;

	bVar0 = func_79();

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1))
	{
		func_78(uParam0);
	
		switch (uParam0->f_2)
		{
			case joaat("AKULA"):
			case joaat("ANNIHILATOR2"):
				bVar0 = !VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(uParam0->f_1);
				break;
		
			case joaat("RAIJU"):
				bVar0 = !VEHICLE::_ARE_MISSILE_BAYS_DEPLOYED(uParam0->f_1);
				break;
		
			case joaat("TERBYTE"):
				bVar0 = ENTITY::GET_ENTITY_SPEED(uParam0->f_1) == 0f;
				break;
		}
	}
	else if (func_77(uParam0))
	{
		if (func_76(uParam0))
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_1);
	}
	else
	{
		func_75(uParam0);
	}

	return bVar0;
}

void func_75(var uParam0) // Position - 0x15D3
{
	func_25(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
}

bool func_76(var uParam0) // Position - 0x15EE
{
	return MISC::GET_GAME_TIMER() - uParam0->f_6.f_1 >= 200;
}

bool func_77(var uParam0) // Position - 0x1604
{
	return func_9(&(uParam0->f_6), 4);
}

void func_78(var uParam0) // Position - 0x1615
{
	func_5(&(uParam0->f_6), 4);
}

bool func_79() // Position - 0x1626
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868, 1);
}

bool func_80() // Position - 0x163E
{
	return !func_31(true);
}

int func_81(var uParam0, int iParam1) // Position - 0x164C
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0, iParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
			
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
			
				for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1)
				{
					iVar3 = iVar2 - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == uParam0)
							return iVar3;
				}
			}
		}
	}

	return iVar3;
}

void func_82(var uParam0) // Position - 0x16D1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

bool func_83() // Position - 0x16F1
{
	if (func_84())
		return true;

	return false;
}

bool func_84() // Position - 0x1705
{
	if (Global_1575064 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_91())
		return true;

	if (Global_2699585)
		return true;

	if (func_90())
		return true;

	if (func_89(159))
		if (!func_88())
			return true;

	if (func_89(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (func_85() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_85()) == 0)
			return true;

	return false;
}

int func_85() // Position - 0x1789
{
	switch (func_87())
	{
		case 0:
			return func_86();
	
		case 2:
			return joaat("CREATOR");
	}

	return 0;
}

int func_86() // Position - 0x17BC
{
	switch (Global_2699694)
	{
		case 0:
			return joaat("FREEMODE");
	
		default:
		
	}

	return joaat("FREEMODE");
}

int func_87() // Position - 0x17E0
{
	return Global_33792;
}

bool func_88() // Position - 0x17EB
{
	return Global_2685153.f_700;
}

bool func_89(int iParam0) // Position - 0x17FA
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
		return true;

	return false;
}

bool func_90() // Position - 0x1811
{
	return Global_2696981;
}

bool func_91() // Position - 0x181D
{
	return Global_2685153.f_695;
}

bool func_92(var uParam0) // Position - 0x182C
{
	bool bVar0;

	func_71(uParam0);

	if (func_70(uParam0))
	{
		if (func_56(uParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_1))
			{
				bVar0 = true;
			
				if (func_53())
				{
					bVar0 = false;
				}
				else if (func_93())
				{
					func_48();
					func_5(&(uParam0->f_6), 6);
					bVar0 = false;
				}
			
				if (bVar0)
					func_51(uParam0, false);
				else
					func_25(&(uParam0->f_6), 3);
			}
		}
		else
		{
			func_25(&(uParam0->f_6), 3);
		}
	}

	return true;
}

bool func_93() // Position - 0x18A6
{
	if (func_46() && func_94())
		return true;

	return false;
}

bool func_94() // Position - 0x18C3
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_868, 6);
}

