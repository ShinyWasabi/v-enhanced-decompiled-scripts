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
	var Static_17 = 2;
	var Static_18 = 0;
	var Static_19 = 0;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	var Static_24 = 2;
	var Static_25 = 0;
	var Static_26 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_1();

	MISC::SET_MISSION_FLAG(1);
	STREAMING::REQUEST_MODEL(joaat("CUBAN800"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("CUBAN800")))
	{
		BUILTIN::WAIT(0);
	}

	Static_17[0 /*3*/] = { 1169.9758f, 3592.5715f, 32.6481f };
	Static_17[1 /*3*/] = { 1215.738f, 3586.6077f, 33.5131f };
	Static_24[0] = 277.7043f;
	Static_24[1] = 77.1113f;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1220.2024f, 3596.2805f, 33.259f, 1, 0, 0, 1);

	STREAMING::LOAD_SCENE(1220.2024f, 3596.2805f, 33.259f);
	Static_16 = VEHICLE::CREATE_VEHICLE(joaat("CUBAN800"), Static_17[0 /*3*/], Static_24[0], 1, 1, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Static_16, 1084227584);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CUBAN800"));

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Static_16, -1);

	while (true)
	{
		func_1();
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x136
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());

	if (ENTITY::DOES_ENTITY_EXIST(Static_16))
		VEHICLE::DELETE_VEHICLE(&Static_16);

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CUBAN800"));
	SCRIPT::TERMINATE_THIS_THREAD();
}

