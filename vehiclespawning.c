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
	var Static_33 = 20;
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
	var Static_52 = 0;
	var Static_53 = 0;
	int Static_54 = 0;
	bool Static_55 = 0;
	bool Static_56 = 0;
	bool Static_57 = 0;
	bool Static_58 = 0;
	bool Static_59 = 0;
	int Static_60 = 0;
	float Static_61 = 0f;
	var Static_62 = 0;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
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
	Static_61 = 277.7314f;
	Static_63 = { -196.045f, -580.13f, 135.0004f };
	CAM::DO_SCREEN_FADE_OUT(&func_13);
	func_16();

	while (true)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
		func_15();
	
		if (func_7() || Static_60)
			func_3();
	
		if (!Static_56)
		{
			if (!Static_55 && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Static_63, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Static_61);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Static_63, 2500f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				Static_55 = true;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!Static_59)
				{
					Static_59 = func_2();
				}
				else if (!Static_57)
				{
					Static_57 = func_1();
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(&func_13);
					Static_56 = true;
				}
			}
		}
	}
}

bool func_1() // Position - 0x121
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(Static_62, "garage_decor_01"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(Static_62, "garage_decor_01");
	}
	else
	{
		INTERIOR::REFRESH_INTERIOR(Static_62);
		return 1;
	}

	return 0;
}

bool func_2() // Position - 0x14B
{
	Static_62 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());

	if (INTERIOR::IS_VALID_INTERIOR(Static_62))
	{
		if (!Static_58)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(Static_62);
			Static_58 = true;
		}
		else if (INTERIOR::IS_INTERIOR_READY(Static_62))
		{
			INTERIOR::UNPIN_INTERIOR(Static_62);
			return 1;
		}
	}

	return 0;
}

void func_3() // Position - 0x18C
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Static_54; iVar0 = iVar0 + 1)
	{
		func_5(iVar0);
	}

	func_4();
}

void func_4() // Position - 0x1B1
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0) // Position - 0x1BD
{
	func_6(&Static_33[iParam0]);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0, 0) - 1);
}

void func_6(var uParam0) // Position - 0x1DB
{
	var uVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0);

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

int func_7() // Position - 0x214
{
	if (Global_1575064 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return 1;

	if (func_14())
		return 1;

	if (Global_2699585)
		return 1;

	if (func_13())
		return 1;

	if (func_12(159))
		if (!func_11())
			return 1;

	if (func_12(157))
		return 1;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return 1;

	if (func_8() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_8()) == 0)
			return 1;

	return 0;
}

int func_8() // Position - 0x298
{
	switch (func_10())
	{
		case 0:
			return func_9();
	
		case 2:
			return joaat("CREATOR");
	}

	return 0;
}

int func_9() // Position - 0x2CB
{
	switch (Global_2699694)
	{
		case 0:
			return joaat("FREEMODE");
	
		default:
		
	}

	return joaat("FREEMODE");
}

int func_10() // Position - 0x2EF
{
	return Global_33792;
}

bool func_11() // Position - 0x2FA
{
	return Global_2685153.f_700;
}

bool func_12(int iParam0) // Position - 0x309
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
		return true;

	return false;
}

bool func_13() // Position - 0x320
{
	return Global_2696981;
}

bool func_14() // Position - 0x32C
{
	return Global_2685153.f_695;
}

void func_15() // Position - 0x33B
{
	BUILTIN::WAIT(0);
}

void func_16() // Position - 0x348
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_20(0, -1, false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Static_33, 21, 0);

	if (!func_17())
		func_3();

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);

	if (!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a"))
		STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");
}

bool func_17() // Position - 0x38C
{
	var uVar0;

	func_19(&uVar0, true, false);

	while (true)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return false;
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return true;
	
		if (func_14())
			return false;
	
		if (func_12(157))
			return false;
	
		if (func_18(&uVar0, 120000, true))
			return false;
	
		BUILTIN::WAIT(0);
	}

	return false;
}

bool func_18(var uParam0, int iParam1, bool bParam2) // Position - 0x3EA
{
	if (iParam1 == -1)
		return true;

	func_19(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_19(var uParam0, bool bParam1, bool bParam2) // Position - 0x448
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}
}

int func_20(int iParam0, int iParam1, bool bParam2) // Position - 0x48D
{
	int iVar0;

	for (iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS(); iVar0 != 2; iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (iVar0 == 3 || iVar0 == 4 || iVar0 == 5 || iVar0 == 6)
			if (!bParam2)
				func_4();
			else
				return 0;
	
		if (!func_21(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_4();
					else
						return 0;
			
				if (func_14())
					if (!bParam2)
						func_4();
					else
						return 0;
			
				if (func_12(157))
					if (!bParam2)
						func_4();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_4();
				else
					return 0;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574668 = iVar0;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_4();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_4();
		else
			return 0;

	return 1;
}

bool func_21(bool bParam0) // Position - 0x5A3
{
	if (bParam0 && Global_1575064)
		if (func_22())
			return false;
		else
			return true;

	return Global_1575064;
}

bool func_22() // Position - 0x5CF
{
	if (func_23())
		return true;

	return Global_1575067;
}

bool func_23() // Position - 0x5EA
{
	if (Global_1575064 || Global_1575070)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_DEATHMATCH_CONTROLER")) != 0)
			return true;

	return false;
}

