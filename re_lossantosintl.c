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
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 4;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 4;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 4;
	var Static_60 = 0;
	var Static_61 = 0;
	var Static_62 = 0;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 0;
	var Static_73 = 0;
	var Static_74 = 0;
	bool Static_75 = 0;
	bool Static_76 = 0;
	bool Static_77 = 0;
	bool Static_78 = 0;
	bool Static_79 = 0;
	bool Static_80 = 0;
	int Static_81 = 0;
	int Static_82 = 0;
	float Static_83 = 0f;
	float Static_84 = 0f;
	int Static_85 = 0;
	int Static_86 = 0;
	var Static_87 = 0;
	var Static_88 = 0;
	var Static_89 = 0;
	var Static_90 = 0;
	var Static_91 = 0;
	var Static_92 = 0;
	bool Static_93 = 0;
	var Static_94 = 0;
	var Static_95 = 0;
	int Static_96 = 0;
	int Static_97 = 0;
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
	Static_76 = true;
	Static_82 = joaat("S_M_M_PILOT_01");
	Static_97 = 500;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_12();

	Static_95 = PLAYER::PLAYER_PED_ID();

	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(Static_95, 0))
			Static_96 = 5;
	
		switch (Static_96)
		{
			case 0:
				Static_96 = 1;
				break;
		
			case 1:
				func_11();
				Static_96 = 2;
				break;
		
			case 2:
				if (func_10())
					Static_96 = 3;
				break;
		
			case 3:
				func_9();
				Static_96 = 4;
				break;
		
			case 4:
				if (Global_99357)
					Static_96 = 5;
			
				func_4();
				break;
		
			case 5:
				func_1();
				func_12();
				break;
		}
	
		BUILTIN::WAIT(Static_97);
	}
}

void func_1() // Position - 0x11A
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 4; iVar0 = iVar0 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Static_47[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(Static_47[iVar0]) || !ENTITY::IS_ENTITY_DEAD(Static_47[iVar0], 0) && !ENTITY::IS_ENTITY_VISIBLE(Static_47[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&Static_47[iVar0]);
				PED::DELETE_PED(&Static_53[iVar0]);
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
					func_3(true);
			
				func_2(&Static_47[iVar0], &Static_53[iVar0]);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Static_47[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_53[iVar0]);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Static_52))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(Static_52))
		{
			VEHICLE::DELETE_VEHICLE(&Static_52);
			PED::DELETE_PED(&Static_58);
		}
		else
		{
			func_2(&Static_52, &Static_58);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Static_52);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_58);
		}
	}

	if (Static_80)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1) // Position - 0x233
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
		if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
}

void func_3(bool bParam0) // Position - 0x2B4
{
	if (Static_76)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Static_47[0]) && !ENTITY::IS_ENTITY_DEAD(Static_47[0], 0))
			if (ENTITY::IS_ENTITY_IN_AIR(Static_47[0]))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[0]))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Static_53[0], 0) && !ENTITY::IS_ENTITY_DEAD(Static_47[0], 0))
						TASK::TASK_PLANE_MISSION(Static_53[0], Static_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
				else if (bParam0)
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Static_53[0], 0) && !ENTITY::IS_ENTITY_DEAD(Static_47[0], 0))
						TASK::TASK_PLANE_MISSION(Static_53[0], Static_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_47[2]) && !ENTITY::IS_ENTITY_DEAD(Static_47[2], 0))
			if (ENTITY::IS_ENTITY_IN_AIR(Static_47[2]))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[2]))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Static_53[2], 0) && !ENTITY::IS_ENTITY_DEAD(Static_47[2], 0))
						TASK::TASK_PLANE_MISSION(Static_53[2], Static_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
				else if (bParam0)
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Static_53[2], 0) && !ENTITY::IS_ENTITY_DEAD(Static_47[2], 0))
						TASK::TASK_PLANE_MISSION(Static_53[2], Static_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
	}
}

void func_4() // Position - 0x493
{
	int iVar0;

	switch (Static_86)
	{
		case 0:
			Static_59[0 /*3*/] = { -1542.1127f, -3023.8025f, 23.2538f };
			Static_59[1 /*3*/] = { -3089.888f, -1960.0751f, 313.559f };
			Static_59[2 /*3*/] = { -1037.6381f, -3316.1196f, 23.2475f };
			Static_59[3 /*3*/] = { 451.174f, -4009.4602f, 135.1171f };
			Static_72 = { -1612.1736f, -2688.442f, 12.9444f };
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					Static_76 = false;
				else
					Static_76 = true;
		
			Static_86 = 1;
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(joaat("JET"));
			STREAMING::REQUEST_MODEL(Static_82);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			Static_86 = 2;
			break;
	
		case 2:
			if (!Static_80)
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("JET")) && STREAMING::HAS_MODEL_LOADED(Static_82) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					Static_80 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("JET"));
					STREAMING::REQUEST_MODEL(Static_82);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
		
			if (Static_80)
			{
				if (!CAM::IS_SPHERE_VISIBLE(Static_59[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(Static_72, 50f))
				{
					Static_86 = 3;
				}
				else
				{
					CAM::IS_SPHERE_VISIBLE(Static_59[0 /*3*/], 50f);
					CAM::IS_SPHERE_VISIBLE(Static_72, 50f);
				}
			}
			break;
	
		case 3:
			Static_47[0] = VEHICLE::CREATE_VEHICLE(joaat("JET"), Static_59[0 /*3*/], 0, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Static_47[0], 240.3179f);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Static_47[0], 0);
			Static_47[1] = VEHICLE::CREATE_VEHICLE(joaat("JET"), Static_59[1 /*3*/], 0, 1, 1, 0);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Static_47[1], 0);
			Static_47[2] = VEHICLE::CREATE_VEHICLE(joaat("JET"), Static_59[2 /*3*/], 0, 1, 1, 0);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Static_47[2], 0);
			Static_47[3] = VEHICLE::CREATE_VEHICLE(joaat("JET"), Static_59[3 /*3*/], 0, 1, 1, 0);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Static_47[3], 0);
		
			for (iVar0 = 0; iVar0 < 4; iVar0 = iVar0 + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Static_47[iVar0]))
				{
					Static_53[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(Static_47[iVar0], 4, Static_82, -1, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(Static_47[iVar0], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Static_47[iVar0], 1, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_53[iVar0], 1);
				}
			}
		
			func_8(&Static_47[1], &Static_53[1]);
			func_8(&Static_47[2], &Static_53[2]);
			func_8(&Static_47[3], &Static_53[3]);
		
			if (Static_76)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Static_47[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Static_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						Static_75 = true;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
		
			Static_86 = 4;
			break;
	
		case 4:
			if (Static_79)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Static_47[3]) && !ENTITY::IS_ENTITY_DEAD(Static_47[3], 0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Static_47[3]))
					{
						if (!Static_77)
						{
							func_8(&Static_47[3], &Static_53[3]);
							Static_77 = true;
						}
					}
				}
			}
		
			func_3(false);
			func_7();
		
			switch (Static_85)
			{
				case 0:
					if (!Static_75)
					{
						if (Static_76)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Static_47[0]) && !ENTITY::IS_ENTITY_DEAD(Static_47[0], 0))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(Static_47[0]) && !CAM::IS_SPHERE_VISIBLE(Static_59[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Static_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										Static_75 = true;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
				
					if (Static_75)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Static_47[0]) && !ENTITY::IS_ENTITY_DEAD(Static_47[0], 0))
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[0]))
								Static_83 = VEHICLE::GET_POSITION_IN_RECORDING(Static_47[0]);
					
						if (Static_83 > 1100f)
							Static_85 = 1;
					}
					break;
			
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(Static_47[1]) && !ENTITY::IS_ENTITY_DEAD(Static_47[1], 0))
					{
						if (Static_76)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(Static_47[1]))
							{
								if (Static_79)
								{
									if (Static_77)
									{
										func_6(&Static_47[1], &Static_53[1]);
									
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Static_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											Static_78 = false;
											Static_85 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&Static_47[1], &Static_53[1]);
								
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Static_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										Static_78 = false;
										Static_85 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
			
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(Static_47[1]) && !ENTITY::IS_ENTITY_DEAD(Static_47[1], 0))
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[1]))
							Static_85 = 3;
					break;
			
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(Static_47[2]) && !ENTITY::IS_ENTITY_DEAD(Static_47[2], 0))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Static_59[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[2]))
								{
									func_6(&Static_47[2], &Static_53[2]);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Static_47[2], 101, "AirportNew", 1);
									Static_85 = 4;
								}
							}
						}
					}
					break;
			
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(Static_47[2]) && !ENTITY::IS_ENTITY_DEAD(Static_47[2], 0))
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[2]))
							Static_84 = VEHICLE::GET_POSITION_IN_RECORDING(Static_47[2]);
				
					if (ENTITY::DOES_ENTITY_EXIST(Static_47[1]) && !ENTITY::IS_ENTITY_DEAD(Static_47[1], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(Static_47[1]))
							{
								func_8(&Static_47[1], &Static_53[1]);
								Static_78 = true;
							}
						}
					}
				
					if (Static_84 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Static_47[3]) && !ENTITY::IS_ENTITY_DEAD(Static_47[3], 0))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Static_59[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[3]) && Static_78)
									{
										func_6(&Static_47[3], &Static_53[3]);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Static_47[3], 104, "AirplaneLandingRedux", 1);
										Static_85 = 5;
									}
								}
							}
						}
					}
					break;
			
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(Static_47[3]) && !ENTITY::IS_ENTITY_DEAD(Static_47[3], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_47[3]))
						{
							func_5();
							Static_85 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5() // Position - 0xBB3
{
	Static_83 = 0f;
	Static_75 = false;
	Static_79 = true;
	Static_77 = false;
}

void func_6(var uParam0, var uParam1) // Position - 0xBC7
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 1, 0);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
}

void func_7() // Position - 0xBF2
{
	var uVar0;

	switch (Static_81)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Static_52))
			{
				Static_52 = VEHICLE::CREATE_VEHICLE(joaat("JET"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
				ENTITY::SET_ENTITY_LOD_DIST(Static_52, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Static_52, 1, 1, 0);
				VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Static_52, 0);
				Static_58 = PED::CREATE_PED_INSIDE_VEHICLE(Static_52, 4, Static_82, -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_58, 1);
				Static_81 = 1;
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Static_52) && !ENTITY::IS_ENTITY_DEAD(Static_52, 0))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_52))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Static_52, 101, "EastWestFlight", 2, 5, 786603);
						Static_81 = 2;
					}
				}
			}
			break;
	
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				uVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_52) && !ENTITY::IS_ENTITY_DEAD(Static_52, 0))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Static_52))
					if (ENTITY::IS_ENTITY_OCCLUDED(Static_52) && !CAM::IS_SPHERE_VISIBLE(-1602.0862f, -2674.0386f, 12.9444f, 50f) && BUILTIN::VDIST2(uVar0, ENTITY::GET_ENTITY_COORDS(Static_52, 1)) > 62500f)
						Static_81 = 1;
			break;
	}
}

void func_8(var uParam0, var uParam1) // Position - 0xD31
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0, 0);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 0, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
}

void func_9() // Position - 0xD5C
{
}

bool func_10() // Position - 0xD64
{
	return true;
}

void func_11() // Position - 0xD6D
{
}

void func_12() // Position - 0xD75
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_13() // Position - 0xD89
{
	var uVar0;
	var uVar3;
	var uVar6;
	var uVar9;

	if (ENTITY::DOES_ENTITY_EXIST(Static_87))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(Static_87))
		{
			VEHICLE::DELETE_VEHICLE(&Static_87);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Static_87, 0) && !PED::IS_PED_INJURED(Static_88))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Static_87);
			PED::SET_PED_KEEP_TASK(Static_88, 1);
			uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_87, 1) };
			uVar9 = ENTITY::GET_ENTITY_HEADING(Static_87);
			uVar3 = { 0f, 500f, 50f };
			uVar6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uVar0, uVar9, uVar3) };
			TASK::TASK_HELI_MISSION(Static_88, Static_87, 0, 0, uVar6, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}

	if (Static_93)
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
}

