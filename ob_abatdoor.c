#region Static Var
	var Static_0 = 0;
	var Static_1 = 0;
	int Static_2 = 0;
	var Static_3 = 0;
	var Static_4 = 0;
	var Static_5 = 0;
	var Static_6 = 0;
	var Static_7 = 0;
	var Static_8 = 0;
	var Static_9 = 0;
	var ScriptArg_0 = 0;
#endregion

void main() // Position - 0x0
{
	var uVar0;
	var uVar3;
	var uVar6;
	float fVar9;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_4();

	if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(ScriptArg_0, 1);
		Static_4 = { ENTITY::GET_ENTITY_COORDS(ScriptArg_0, 1) };
		Static_7 = { ENTITY::GET_ENTITY_ROTATION(ScriptArg_0, 2) };
	}

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
							STREAMING::REQUEST_MODEL(joaat("P_ABAT_ROLLER_1_COL"));
						
							if (STREAMING::HAS_MODEL_LOADED(joaat("P_ABAT_ROLLER_1_COL")))
							{
								if (!func_3(Static_4, 0f, 0f, 0f, false))
								{
									Static_3 = OBJECT::CREATE_OBJECT(joaat("P_ABAT_ROLLER_1_COL"), Static_4, 1, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(Static_3, Static_7, 2, 1);
									Static_2 = 1;
								}
							}
						}
						break;
				
					case 1:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(ScriptArg_0))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MICHAEL2")) > 0)
							{
								STREAMING::REQUEST_ANIM_DICT("map_objects");
							
								if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									Static_2 = 2;
							}
						}
						break;
				
					case 2:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(ScriptArg_0))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MICHAEL2")) > 0)
							{
								if (Global_98860)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									{
										ENTITY::PLAY_ENTITY_ANIM(ScriptArg_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										Static_2 = 3;
									}
								}
							}
						}
						break;
				
					case 3:
						fVar9 = 0.35f;
						uVar0 = { Static_4 + { 3.45f, 0f, 0f } };
					
						if (ENTITY::DOES_ENTITY_EXIST(Static_3))
						{
							uVar3 = { ENTITY::GET_ENTITY_COORDS(Static_3, 1) };
						
							if (!func_2(uVar3, uVar0, 0.1f, false))
							{
								uVar6 = { uVar0 - uVar3 };
								ENTITY::SET_ENTITY_COORDS(Static_3, uVar3 + (func_1(uVar6) * F2V(MISC::GET_FRAME_TIME()) * { fVar9, fVar9, fVar9 }), 1, 0, 0, 1);
							}
							else
							{
								Global_98861 = 1;
								Static_2 = 4;
							}
						}
						break;
				
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(float fParam0, var uParam1, var uParam2) // Position - 0x1C6
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(fParam0);

	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		fParam0 = { fParam0 * { fVar1, fVar1, fVar1 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

bool func_2(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7) // Position - 0x205
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

bool func_3(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, bool bParam6) // Position - 0x280
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_4() // Position - 0x2C7
{
	if (ENTITY::DOES_ENTITY_EXIST(Static_3))
		OBJECT::DELETE_OBJECT(&Static_3);

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_ABAT_ROLLER_1_COL"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5(char* sParam0) // Position - 0x2F2
{
	func_6(sParam0);
}

void func_6(char* sParam0) // Position - 0x300
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
}

