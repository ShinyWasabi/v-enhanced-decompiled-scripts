#region Static Var
	var Static_0 = 0;
	var Static_1 = 0;
	int Static_2 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 0;
#endregion

void main() // Position - 0x0
{
	float fVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
		func_1();

	Static_0 = ScriptArg_0;
	Static_1 = ScriptArg_0.f_1;

	while (!IS_BIT_SET(Static_2, 1))
	{
		if (!IS_BIT_SET(Static_2, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Static_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Static_0, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Static_0, 1);
					ENTITY::SET_ENTITY_PROOFS(Static_0, 1, 1, 1, 1, 1, 0, 0, 0);
				
					if (ENTITY::DOES_ENTITY_EXIST(Static_1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_1, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Static_1, 1);
						ENTITY::SET_ENTITY_PROOFS(Static_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
				
					MISC::SET_BIT(&Static_2, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Static_0, 0))
			{
				fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Static_0, 1));
			
				if (fVar0 > 90000f)
					MISC::SET_BIT(&Static_2, 1);
				else if (fVar0 > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(Static_0))
					MISC::SET_BIT(&Static_2, 1);
			}
			else
			{
				MISC::SET_BIT(&Static_2, 1);
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
}

void func_1() // Position - 0x105
{
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Static_0);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&Static_1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

