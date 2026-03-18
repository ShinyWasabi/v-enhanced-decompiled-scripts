#region Static Var
	bool Static_0 = 0;
	bool Static_1 = 0;
	float Static_2 = 0f;
	float Static_3 = 0f;
	float Static_4 = 0f;
	float Static_5 = 0f;
	float Static_6 = 0f;
	float Static_7 = 0f;
	float Static_8 = 0f;
#endregion

void main() // Position - 0x0
{
	Static_0 = true;
	Static_1 = true;
	Static_2 = 1f;
	Static_3 = 1f;
	Static_4 = 1f;
	Static_5 = 1f;
	Static_6 = 1f;
	Static_7 = 1f;
	Static_8 = 1f;
	MISC::SET_MISSION_FLAG(1);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Static_0)
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Static_2);
		
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Static_3);
			VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Static_4);
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(Static_5);
		
			if (Static_1)
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(Static_6);
		
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(Static_7, Static_8);
		}
	}
}

void func_1() // Position - 0x7C
{
	VEHICLE::SET_RANDOM_TRAINS(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

