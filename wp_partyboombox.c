#region Static Var
	int Static_0 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 5;
	var ScriptArg_2 = 0;
	var ScriptArg_3 = 0;
	var ScriptArg_4 = 0;
	var ScriptArg_5 = 0;
	var ScriptArg_6 = 0;
	var ScriptArg_7 = 0;
	var ScriptArg_8 = 0;
	var ScriptArg_9 = 0;
	var ScriptArg_10 = 0;
	var ScriptArg_11 = 0;
	var ScriptArg_12 = 0;
	var ScriptArg_13 = 0;
	var ScriptArg_14 = 0;
	var ScriptArg_15 = 0;
	var ScriptArg_16 = 0;
	var ScriptArg_17 = 5;
	var ScriptArg_18 = 0;
	var ScriptArg_19 = 0;
	var ScriptArg_20 = 0;
	var ScriptArg_21 = 0;
	var ScriptArg_22 = 0;
#endregion

void main() // Position - 0x0
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("WP_PARTYBOOMBOX")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			Static_0 = 3;
	
		switch (Static_0)
		{
			case 0:
				if (CLOCK::GET_CLOCK_HOURS() >= 22 || CLOCK::GET_CLOCK_HOURS() <= 4)
					Static_0 = 1;
				else
					func_1();
				break;
		
			case 1:
				if (!STREAMING::IS_IPL_ACTIVE("ID2_21_G_Night"))
				{
					STREAMING::REQUEST_IPL("ID2_21_G_Night");
					Static_0 = 2;
				}
				break;
		
			case 2:
				break;
		
			case 3:
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					func_1();
				break;
		}
	}
}

void func_1() // Position - 0xB1
{
	if (STREAMING::IS_IPL_ACTIVE("ID2_21_G_Night"))
		STREAMING::REMOVE_IPL("ID2_21_G_Night");

	SCRIPT::TERMINATE_THIS_THREAD();
}

