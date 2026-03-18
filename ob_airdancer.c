#region Static Var
	var Static_0 = 0;
	var Static_1 = 0;
	int Static_2 = 0;
	var ScriptArg_0 = 0;
#endregion

void main() // Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_1();

	if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
		ENTITY::FREEZE_ENTITY_POSITION(ScriptArg_0, 1);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(ScriptArg_0))
			{
				switch (Static_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(ScriptArg_0))
						{
							STREAMING::REQUEST_ANIM_DICT("map_objects");
						
							if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
							{
								ENTITY::PLAY_ENTITY_ANIM(ScriptArg_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
								Static_2 = 1;
							}
						}
						break;
				
					case 1:
						break;
				
					case 2:
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

void func_1() // Position - 0x9F
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(char* sParam0) // Position - 0xB2
{
	func_3(sParam0);
}

void func_3(char* sParam0) // Position - 0xC0
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
}

