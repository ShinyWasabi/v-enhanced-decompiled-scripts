#region Static Var
	int Static_0 = 0;
	var Static_1 = 0;
	var Static_2 = 0;
	var Static_3 = 0;
	var Static_4 = 0;
	var Static_5 = 0;
	char* Static_6 = 0;
	int Static_7 = 0;
	char* Static_8 = 0;
	bool Static_9 = 0;
	var ScriptArg_0 = 0;
#endregion

void main() // Position - 0x0
{
	Static_6 = "Poledance_01";
	Static_7 = joaat("A_F_Y_BEACH_01");
	Static_8 = "MISSSTRIP_CLUB";

	if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(ScriptArg_0, 1);
		Static_2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptArg_0, 0f, 0f, 0f) };
		Static_5 = ENTITY::GET_ENTITY_HEADING(ScriptArg_0);
		ENTITY::SET_ENTITY_COLLISION(ScriptArg_0, 0, 0);
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(ScriptArg_0))
			{
				switch (Static_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							Static_0 = 2;
						}
						break;
				
					case 2:
						func_3();
					
						if (func_2())
						{
							ENTITY::SET_ENTITY_COLLISION(ScriptArg_0, 1, 0);
							Static_0 = 3;
						}
						break;
				
					case 3:
						if (!PED::IS_PED_INJURED(Static_1))
						{
							TASK::TASK_COWER(Static_1, -1);
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
							PED::SET_PED_KEEP_TASK(Static_1, 1);
							SCRIPT::TERMINATE_THIS_THREAD();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1() // Position - 0xDC
{
	if (!ENTITY::IS_ENTITY_DEAD(Static_1, 0))
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Static_1))
			PED::DELETE_PED(&Static_1);
		else
			PED::SET_PED_KEEP_TASK(Static_1, 1);

	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_2() // Position - 0x10D
{
	var uVar0;

	uVar0 = { 2f, 2f, 0.5f };

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(Static_1))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Static_1, uVar0, 0, 1, 0))
				return true;
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Static_1, PLAYER::PLAYER_PED_ID(), 1))
				return true;
		
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Static_1))
				return true;
		}
	
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			return true;
	}

	return false;
}

void func_3() // Position - 0x181
{
	if (!PED::IS_PED_INJURED(Static_1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Static_1, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
		{
			TASK::TASK_PLAY_ANIM(Static_1, Static_8, Static_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Static_1, Static_8, Static_6, 3))
		{
			TASK::TASK_PLAY_ANIM(Static_1, Static_8, Static_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!Static_9)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_1, Static_8, Static_6, 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(Static_1, Static_8, Static_6, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216));
				Static_9 = true;
			}
		}
	}
}

void func_4() // Position - 0x215
{
	if (ENTITY::IS_ENTITY_DEAD(Static_1, 0))
	{
		Static_1 = PED::CREATE_PED(5, Static_7, Static_2, Static_2.f_1, Static_2.f_2, Static_5, 1, 1);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(Static_1, 0);
		PED::SET_PED_CAN_BE_TARGETTED(Static_1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_1, 1);
	}
}

bool func_5() // Position - 0x253
{
	STREAMING::REQUEST_MODEL(Static_7);
	STREAMING::REQUEST_ANIM_DICT(Static_8);

	if (STREAMING::HAS_MODEL_LOADED(Static_7) && STREAMING::HAS_ANIM_DICT_LOADED(Static_8))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(Static_7);
		STREAMING::REQUEST_ANIM_DICT(Static_8);
	}

	return false;
}

