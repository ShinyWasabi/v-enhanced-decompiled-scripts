#region Static Var
	var Static_0 = 0;
	var Static_1 = 0;
	var Static_2 = 0;
	var Static_3 = 0;
	var Static_4 = 0;
	float Static_5 = 0f;
	int Static_6 = 0;
	bool Static_7 = 0;
	bool Static_8 = 0;
	bool Static_9 = 0;
#endregion

void main() // Position - 0x0
{
	Static_1 = { 613f, 6438f, 31f };
	Static_5 = 5f;
	Static_6 = 1;
	MISC::SET_MISSION_FLAG(1);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_1();

	VEHICLE::SET_RANDOM_TRAINS(0);
	VEHICLE::DELETE_ALL_TRAINS();

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -177f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	}

	STREAMING::REQUEST_MODEL(joaat("FREIGHT"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCAR"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTGRAIN"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCONT1"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCONT2"));
	STREAMING::REQUEST_MODEL(joaat("TANKERCAR"));
	STREAMING::REQUEST_MODEL(joaat("METROTRAIN"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("FREIGHT")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCAR")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTGRAIN")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCONT1")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCONT2")) || !STREAMING::HAS_MODEL_LOADED(joaat("TANKERCAR")) || !STREAMING::HAS_MODEL_LOADED(joaat("METROTRAIN")))
	{
		BUILTIN::WAIT(0);
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Static_7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Static_0))
					VEHICLE::DELETE_MISSION_TRAIN(&Static_0);
			
				Static_0 = VEHICLE::CREATE_MISSION_TRAIN(Static_4, Static_1, Static_6, 0, 0);
				Static_7 = false;
			}
		
			if (Static_9)
			{
				Static_1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Static_9 = false;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Static_0, 0) && !ENTITY::IS_ENTITY_DEAD(Static_0, 0))
			{
				VEHICLE::SET_TRAIN_SPEED(Static_0, Static_5);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(Static_0, Static_5);
			}
		
			if (Static_8)
				func_1();
		}
	}
}

void func_1() // Position - 0x1A7
{
	VEHICLE::SET_RANDOM_TRAINS(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

