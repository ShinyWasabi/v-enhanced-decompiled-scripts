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
	int Static_29 = 0;
	int Static_30 = 0;
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
	func_4(21);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 16)
			func_3(21);
	
		func_2();
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DOCKS_SETUP")) == 0)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					Static_26 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				else
					Static_26 = 0;
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_26))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Static_26, 0))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(Static_26, joaat("HANDLER")))
					{
						PAD::SET_INPUT_EXCLUSIVE(0, 51);
					
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(Static_26))
						{
							if (Static_30 == 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Static_27) || ENTITY::DOES_ENTITY_EXIST(Static_27) && OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(Static_26, 1), 15f, joaat("PROP_CONTR_03B_LD"), 1, 0, 1) != Static_27)
									Static_27 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(Static_26, 1), 15f, joaat("PROP_CONTR_03B_LD"), 1, 0, 1);
							
								if (ENTITY::DOES_ENTITY_EXIST(Static_27))
								{
									if (func_1(&Static_28, 1000))
									{
										if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(Static_26, Static_27))
										{
											if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
											{
												VEHICLE::ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(Static_26, Static_27);
												Static_29 = 1;
												Static_30 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (Static_29 == 1)
							{
								Static_28 = MISC::GET_GAME_TIMER();
								Static_29 = 0;
								Static_30 = 0;
							}
						
							PAD::IS_CONTROL_JUST_PRESSED(0, 51);
						}
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, int iParam1) // Position - 0x18E
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();

	if (iVar0 - *uParam0 > iParam1)
		return true;

	return false;
}

void func_2() // Position - 0x1AC
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3(int iParam0) // Position - 0x1B8
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114931.f_9092.f_99.f_219[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&Global_114931.f_9092.f_99.f_219[iVar0], iVar1);
		return 1;
	}

	return 0;
}

int func_4(int iParam0) // Position - 0x20F
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114931.f_9092.f_99.f_219[iVar0], iVar1))
		return 0;

	MISC::SET_BIT(&Global_114931.f_9092.f_99.f_219[iVar0], iVar1);
	return 1;
}

