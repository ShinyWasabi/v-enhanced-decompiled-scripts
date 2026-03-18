#region Static Var
	var Static_0 = 0;
	var Static_1 = 0;
	int Static_2 = 0;
	var Static_3 = 0;
	var Static_4 = 0;
	var ScriptArg_0 = 0;
#endregion

void main() // Position - 0x0
{
	var uVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(ScriptArg_0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FINALEC1")) == 0)
			{
				switch (Static_2)
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							uVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						
							if (INTERIOR::IS_VALID_INTERIOR(uVar0))
							{
								if (INTERIOR::IS_INTERIOR_READY(uVar0))
								{
									if (INTERIOR::IS_INTERIOR_SCENE())
									{
										STREAMING::REQUEST_PTFX_ASSET();
										Static_2 = 1;
									}
								}
							}
						}
						break;
				
					case 1:
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Static_4))
									Static_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1090f, -1996f, 39f, 100f, joaat("V_ILEV_FOUND_CRANEBUCKET"), 1, 0, 1);
							
								if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Static_3))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Static_4))
									{
										uVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
									
										if (INTERIOR::IS_VALID_INTERIOR(uVar0))
											if (INTERIOR::IS_INTERIOR_READY(uVar0))
												if (INTERIOR::IS_INTERIOR_SCENE())
													Static_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_obfoundry_cauldron_steam", Static_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									}
								}
							}
						}
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

void func_1() // Position - 0x135
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Static_3))
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Static_3, 0);

	if (ENTITY::DOES_ENTITY_EXIST(Static_4))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Static_4);

	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(char* sParam0) // Position - 0x167
{
	func_3(sParam0);
}

void func_3(char* sParam0) // Position - 0x175
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
}

