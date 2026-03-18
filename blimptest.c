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
	var Static_26 = 0;
	var Static_27 = 0;
	float Static_28 = 0f;
	float Static_29 = 0f;
	float Static_30 = 0f;
	var Static_31 = 0;
	var Static_32 = 0;
	int Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	var Static_37 = 0;
	var Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	var Static_41 = 0;
	int Static_42 = 0;
	var Static_43 = 0;
	int Static_44 = 0;
	int Static_45 = 0;
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
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;
	Static_33 = 3;
	Static_39 = joaat("BLIMP");
	Static_42 = joaat("S_M_M_PILOT_02");
	Static_44 = joaat("BUZZARD");

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_18();

	PLAYER::SET_MAX_WANTED_LEVEL(0);
	func_17();
	func_16();
	func_14();
	func_11();

	while (true)
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.75f, 0.9f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.4f, 0.45f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x116
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Static_38))
	{
		if (ENTITY::IS_ENTITY_DEAD(Static_38, 0) || ENTITY::GET_ENTITY_HEALTH(Static_38) <= 0 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Static_38) <= 0f)
		{
			func_9(&Static_40);
		
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_38))
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Static_38);
		
			if (Static_45 == 1)
			{
				uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_38, 0) };
				func_8(uVar0);
			}
		
			if (Static_45 == 1)
			{
				func_7(&Static_41);
				func_4(&Static_38);
			}
			else
			{
				func_3(&Static_41, 1, 0, 1);
				func_2(&Static_38);
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_38))
		{
			VEHICLE::SET_PLAYBACK_SPEED(Static_38, 0.25f);
		}
	}
}

void func_2(var uParam0) // Position - 0x1B6
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1EE
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
		
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_4(var uParam0) // Position - 0x23E
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
	
		if (func_6(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_5(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_5(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
		
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}

bool func_5(var uParam0) // Position - 0x2DA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

bool func_6(var uParam0) // Position - 0x2FB
{
	if (func_5(uParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
				return true;

	return false;
}

void func_7(var uParam0) // Position - 0x325
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
	
		PED::DELETE_PED(uParam0);
	}
}

void func_8(var uParam0, var uParam1, var uParam2) // Position - 0x366
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar1 = 12;
	uVar2 = 12;
	uVar2[0 /*3*/] = { 5f, 0f, 0f };
	uVar2[1 /*3*/] = { 0f, 5f, 0f };
	uVar2[2 /*3*/] = { 0f, 0f, 5f };
	uVar2[3 /*3*/] = { 5f, 5f, 0f };
	uVar2[4 /*3*/] = { 5f, 0f, 5f };
	uVar2[5 /*3*/] = { 0f, 5f, 5f };
	uVar2[6 /*3*/] = { 20f, 0f, 0f };
	uVar2[7 /*3*/] = { 0f, 20f, 0f };
	uVar2[8 /*3*/] = { 0f, 0f, 20f };
	uVar2[9 /*3*/] = { 20f, 20f, 0f };
	uVar2[10 /*3*/] = { 20f, 0f, 20f };
	uVar2[11 /*3*/] = { 0f, 20f, 20f };
	FIRE::ADD_EXPLOSION(uParam0, 8, 1f, 1, 0, 1065353216, 0);

	for (iVar0 = 0; iVar0 <= iVar1 - 1; iVar0 = iVar0 + 1)
	{
		FIRE::ADD_EXPLOSION(uParam0 + uVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
	}
}

void func_9(var uParam0) // Position - 0x45C
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_ROUTE(*uParam0, 0);
		HUD::REMOVE_BLIP(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0x47C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_11() // Position - 0x494
{
	func_2(&Static_43);
	STREAMING::REQUEST_MODEL(Static_44);

	while (!STREAMING::HAS_MODEL_LOADED(Static_44))
	{
		BUILTIN::WAIT(0);
	}

	if (func_6(Static_38))
	{
		Static_43 = VEHICLE::CREATE_VEHICLE(Static_44, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Static_38, 50f, 0f, 15f), 0f, 1, 1, 0);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(Static_43);
		func_12(Static_43, Static_38);
	
		if (func_5(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Static_43, -1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 1, 0, 0, 0);
		}
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Static_44);
}

void func_12(var uParam0, var uParam1) // Position - 0x52F
{
	float fVar0;

	fVar0 = func_13(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_COORDS(uParam1, 1), 1);
	ENTITY::SET_ENTITY_HEADING(uParam0, fVar0);
}

float func_13(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x554
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = fParam3 - uParam0;
	fVar2 = fParam3.f_1 - uParam0.f_1;

	if (fVar2 != 0f)
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	else if (fVar1 < 0f)
		fVar0 = -90f;
	else
		fVar0 = 90f;

	if (iParam6 == 1)
	{
		fVar0 = fVar0 * -1f;
	
		if (fVar0 < 0f)
			fVar0 = fVar0 + 360f;
	}

	return fVar0;
}

void func_14() // Position - 0x5B9
{
	func_9(&Static_40);

	if (func_6(Static_38))
		Static_40 = func_15(Static_38, 1, 5);
}

int func_15(var uParam0, int iParam1, int iParam2) // Position - 0x5DA
{
	int iVar0;

	iVar0 = 0;

	if (func_5(uParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}

	return iVar0;
}

void func_16() // Position - 0x60F
{
	STREAMING::REQUEST_MODEL(Static_42);

	while (!STREAMING::HAS_MODEL_LOADED(Static_42))
	{
		BUILTIN::WAIT(0);
	}

	if (func_6(Static_38))
	{
		Static_41 = PED::CREATE_PED_INSIDE_VEHICLE(Static_38, 26, Static_42, -1, 1, 1);
	
		if (func_5(Static_41))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_41, 1);
			PED::SET_PED_CONFIG_FLAG(Static_41, 118, 0);
			PED::SET_PED_CONFIG_FLAG(Static_41, 29, 0);
			PED::SET_PED_CONFIG_FLAG(Static_41, 116, 0);
		}
	}

	if (func_6(Static_38))
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Static_38, 1, "Blimp_City", 1);

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Static_42);
}

void func_17() // Position - 0x68C
{
	var uVar0;

	if (func_6(Static_38) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_38))
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Static_38);

	func_9(&Static_40);
	func_7(&Static_41);
	func_4(&Static_38);
	STREAMING::REQUEST_MODEL(Static_39);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Blimp_City");

	while (!STREAMING::HAS_MODEL_LOADED(Static_39) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City"))
	{
		BUILTIN::WAIT(0);
	}

	uVar0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) };
	Static_38 = VEHICLE::CREATE_VEHICLE(Static_39, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), uVar0.f_2, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Static_39);
}

void func_18() // Position - 0x722
{
	if (func_6(Static_38) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_38))
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Static_38);

	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
	func_9(&Static_40);
	func_3(&Static_41, 1, 0, 1);
	func_2(&Static_38);
	func_2(&Static_43);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Static_42);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Static_39);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Static_44);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	SCRIPT::TERMINATE_THIS_THREAD();
}

