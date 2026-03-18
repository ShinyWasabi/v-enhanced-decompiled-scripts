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
	var Static_18 = 0;
	char* Static_19 = 0;
	var Static_20 = 0;
	var Static_21 = 0;
	float Static_22 = 0f;
	var Static_23 = 0;
	var Static_24 = 0;
	var Static_25 = 0;
	float Static_26 = 0f;
	float Static_27 = 0f;
	var Static_28 = 0;
	var Static_29 = 0;
	var Static_30 = 0;
	float Static_31 = 0f;
	float Static_32 = 0f;
	float Static_33 = 0f;
	var Static_34 = 0;
	var Static_35 = 0;
	int Static_36 = 0;
	var Static_37 = 0;
	char* Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = -1;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	char* Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	var Static_61 = 0;
	var Static_62 = 0;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = -1;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 1;
	var Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 5;
	var Static_83 = 1076887552;
	var Static_84 = 0;
	var Static_85 = 0;
	var Static_86 = 0;
	var Static_87 = 0;
	var Static_88 = 1135869952;
	var Static_89 = 2;
	var Static_90 = 0;
	var Static_91 = 0;
	var Static_92 = 0;
	var Static_93 = 0;
	var Static_94 = 0;
	var Static_95 = 0;
	var Static_96 = 0;
	var Static_97 = 1;
	var Static_98 = 0;
	var Static_99 = 0;
	var Static_100 = 0;
	var Static_101 = 0;
	var Static_102 = 0;
	var Static_103 = 0;
	var Static_104 = 0;
	var Static_105 = 0;
	var Static_106 = 0;
	var Static_107 = 5;
	var Static_108 = 1076887552;
	var Static_109 = 0;
	var Static_110 = 0;
	var Static_111 = 0;
	var Static_112 = 0;
	var Static_113 = 1135869952;
	var Static_114 = 2;
	var Static_115 = 0;
	var Static_116 = 0;
	var Static_117 = 0;
	var Static_118 = 0;
	var Static_119 = 0;
	var Static_120 = 0;
	var Static_121 = 0;
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
	int iVar0;
	var uVar1;
	int iVar4;

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
	Static_19 = "NULL";
	Static_22 = 0f;
	Static_26 = -0.0375f;
	Static_27 = 0.17f;
	Static_31 = 80f;
	Static_32 = 140f;
	Static_33 = 180f;
	Static_36 = 3;
	uVar1 = { ScriptArg_0.f_1[0 /*3*/] };
	iVar4 = 4;
	func_83(uVar1);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(195))
		func_81();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FAIRGROUNDHUB")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-847690929) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-847690929);
		
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-847690929))
			{
				BUILTIN::WAIT(0);
			}
		
			BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-847690929, &ScriptArg_0, 23, 1424);
		}
	
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_73();
	BUILTIN::WAIT(3000);

	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[0]))
		iVar4[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1643.5242f, -1124.6805f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_01"), 1, 0, 1);

	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[1]))
		iVar4[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1645.1455f, -1126.6127f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_02"), 1, 0, 1);

	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[2]))
		iVar4[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1646.7676f, -1128.5453f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_02"), 1, 0, 1);

	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[3]))
		iVar4[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1648.3896f, -1130.4784f, 17.4326f, 0.3f, joaat("PROP_ROLLER_CAR_02"), 1, 0, 1);

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < iVar4; iVar0 = iVar0 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar4[iVar0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar4[iVar0], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(iVar4[iVar0], 1, 0);
		}
	}

	while (true)
	{
		func_72(PLAYER::PLAYER_PED_ID());
	
		if (func_71(PLAYER::PLAYER_PED_ID(), uVar1, 0) > 100f + 20f)
			func_81();
	
		if (!func_70(14))
		{
			if (func_69())
			{
				func_81();
			}
			else if (Static_72[0 /*24*/].f_9 == 0)
			{
				Static_72[0 /*24*/].f_9 = 15;
				Static_97[0 /*24*/].f_9 = 8;
				Static_38.f_9 = 0;
				Static_55.f_9 = 0;
			}
		}
	
		if (func_68(64) != 0)
			func_60(64, 0, 0, true, 0);
	
		if (func_1(&Static_72, &Static_38, false, false, true, 2050))
			func_81();
	
		if (func_1(&Static_97, &Static_55, false, false, true, 2050))
			func_81();
	
		BUILTIN::WAIT(0);
	}
}

bool func_1(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) // Position - 0x2A1
{
	int iVar0;

	if (uParam1->f_10)
	{
		iVar0 = 0;
	
		for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
		{
			func_55(&uParam0->[iVar0 /*24*/]);
		}
	}

	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
		
			if (func_48(uParam1->f_16))
			{
				for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
				{
					if (func_45(&uParam0->[iVar0 /*24*/]) && uParam0->[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
					
						if (uParam0->[iVar0 /*24*/].f_7 || MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0)
							func_44(uParam1, 6);
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							func_44(uParam1, 8);
						else if (bParam2)
							func_44(uParam1, 3);
						else if (uParam0->[iVar0 /*24*/].f_8)
							func_44(uParam1, 2);
						else if (func_32() < uParam0->[uParam1->f_12 /*24*/].f_9)
							func_44(uParam1, 1);
						else if (func_27())
							func_44(uParam1, 7);
						else
							func_44(uParam1, 4);
					}
				}
			}
			else
			{
				func_26(uParam1);
			}
			break;
	
		case 2:
			if (!uParam1->f_9)
				func_24(uParam1, uParam1->f_6);
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || uParam0->[iVar0 /*24*/].f_8 == 0)
			{
				func_44(uParam1, 0);
				return false;
			}
			break;
	
		case 1:
			if (!uParam1->f_9)
				func_15(uParam1, uParam1->f_2, uParam0->[uParam1->f_12 /*24*/].f_9);
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || func_32() >= uParam0->[uParam1->f_12 /*24*/].f_9)
			{
				func_44(uParam1, 0);
				return false;
			}
			break;
	
		case 6:
			if (!uParam1->f_9)
				func_24(uParam1, uParam1->f_1);
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || !func_48(uParam1->f_16))
			{
				func_44(uParam1, 0);
				return false;
			}
			break;
	
		case 3:
			if (!uParam1->f_9)
				func_24(uParam1, uParam1->f_3);
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || bParam2 == false || !func_48(uParam1->f_16))
			{
				func_44(uParam1, 0);
				return false;
			}
			break;
	
		case 7:
			if (!uParam1->f_9)
				func_24(uParam1, uParam1->f_5);
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || !func_48(uParam1->f_16))
			{
				func_44(uParam1, 0);
				return false;
			}
			break;
	
		case 8:
			if (!uParam1->f_9)
				func_24(uParam1, uParam1->f_4);
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				func_44(uParam1, 0);
				return false;
			}
			break;
	
		case 9:
			if (!uParam1->f_9)
				if (func_14())
					func_24(uParam1, uParam1->f_7);
				else
					func_24(uParam1, uParam1->f_8);
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || func_12(&uParam0->[uParam1->f_12 /*24*/]))
			{
				func_44(uParam1, 0);
				return false;
			}
			break;
	
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
			func_11();
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_44(uParam1, 8);
				return false;
			}
		
			if (uParam0->[uParam1->f_12 /*24*/].f_8)
			{
				func_44(uParam1, 2);
				return false;
			}
		
			if (func_20(&uParam0->[uParam1->f_12 /*24*/]) || !func_48(uParam1->f_16))
			{
				func_44(uParam1, 0);
				return false;
			}
		
			if (Global_77359)
				return false;
		
			if (func_9(true))
				return false;
		
			if (uParam0->[uParam1->f_12 /*24*/].f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_8(PLAYER::PLAYER_PED_ID(), 0) != -1)
				{
					func_44(uParam1, 0);
					return false;
				}
			}
		
			if (uParam0->[uParam1->f_12 /*24*/].f_7 || MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0)
			{
				func_44(uParam1, 6);
				return false;
			}
		
			if (func_27())
			{
				func_44(uParam1, 7);
				return false;
			}
		
			if (func_32() < uParam0->[uParam1->f_12 /*24*/].f_9)
			{
				func_44(uParam1, 1);
				return false;
			}
		
			if (!uParam1->f_9)
				if (MISC::GET_HASH_KEY(uParam0->[uParam1->f_12 /*24*/].f_5) == MISC::GET_HASH_KEY("Carwash1") && func_5(PLAYER::PLAYER_ID()))
					func_24(uParam1, "CWASH_RIDEHLP2" /* GXT: Press ~INPUT_CONTEXT~ to use your Car Wash for free. */);
				else
					func_15(uParam1, *uParam1, uParam0->[uParam1->f_12 /*24*/].f_9);
		
			if (uParam0->[uParam1->f_12 /*24*/].f_6 == 1)
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					return false;
		
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				return false;
		
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
					return false;
			
				if (PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
					return false;
			
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					return false;
			
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
					return false;
			
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
					return false;
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
				if (!func_12(&uParam0->[uParam1->f_12 /*24*/]))
					func_44(uParam1, 9);
				else
					func_44(uParam1, 5);
			break;
	
		case 5:
			func_26(uParam1);
			uParam0->[uParam1->f_12 /*24*/].f_8 = 0;
		
			if (!bParam4)
			{
				func_44(uParam1, 0);
				return true;
			}
		
			HUD::CLEAR_HELP(1);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->[uParam1->f_12 /*24*/].f_5))
			{
				SCRIPT::REQUEST_SCRIPT(uParam0->[uParam1->f_12 /*24*/].f_5);
			
				while (!SCRIPT::HAS_SCRIPT_LOADED(uParam0->[uParam1->f_12 /*24*/].f_5))
				{
					func_11();
				
					if (func_72(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_80305)
						{
							func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, true, false);
							VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						}
					}
				
					PAD::SET_INPUT_EXCLUSIVE(2, 51);
					SCRIPT::REQUEST_SCRIPT(uParam0->[uParam1->f_12 /*24*/].f_5);
					PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					BUILTIN::WAIT(0);
				}
			
				if (bParam3)
					CAM::DO_SCREEN_FADE_OUT(250);
			
				if (SCRIPT::HAS_SCRIPT_LOADED(uParam0->[uParam1->f_12 /*24*/].f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (func_72(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_80305)
								{
									func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, true, false);
									VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
								}
							}
						
							PAD::SET_INPUT_EXCLUSIVE(2, 51);
							PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
							func_11();
							BUILTIN::WAIT(0);
						}
					}
				
					BUILTIN::START_NEW_SCRIPT(uParam0->[uParam1->f_12 /*24*/].f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(uParam0->[uParam1->f_12 /*24*/].f_5);
					return true;
				}
			}
			break;
	}

	return false;
}

int func_2(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) // Position - 0xA15
{
	func_4(bParam5, bParam6);
	func_3(uParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(uParam0, fParam1, iParam2, iParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(uParam0)) <= iParam3)
			return 1;

	return 0;
}

void func_3(var uParam0) // Position - 0xA6C
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(uParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(uParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(uParam0, 0);
}

void func_4(bool bParam0, bool bParam1) // Position - 0xA98
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);

	if (bParam0)
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);

	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);

	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}

	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 389, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
}

bool func_5(int iParam0) // Position - 0xBE9
{
	return func_6(iParam0, 1);
}

bool func_6(int iParam0, int iParam1) // Position - 0xBF8
{
	if (iParam1 != 0)
		if (iParam0 != func_7())
			return IS_BIT_SET(Global_1882717[iParam0 /*315*/].f_158.f_27, iParam1);

	return false;
}

int func_7() // Position - 0xC23
{
	return -1;
}

int func_8(var uParam0, int iParam1) // Position - 0xC2C
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0, iParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
			
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
			
				for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1)
				{
					iVar3 = iVar2 - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == uParam0)
							return iVar3;
				}
			}
		}
	}

	return iVar3;
}

bool func_9(bool bParam0) // Position - 0xCB1
{
	if (bParam0)
		if (func_10())
			return true;

	if (func_70(14))
		return true;

	return false;
}

bool func_10() // Position - 0xCD7
{
	if (Global_113873)
		return true;

	if (!func_70(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DIRECTOR_MODE")) > 0)
		return true;

	return false;
}

void func_11() // Position - 0xD09
{
	Global_24407.f_6 = 1;
}

bool func_12(var uParam0) // Position - 0xD17
{
	var uVar0;
	var uVar3;
	var uVar4;

	uVar4 = PLAYER::PLAYER_PED_ID();

	if (uParam0->f_15 == 360f)
		return 1;

	if (func_83(uParam0->f_12))
		return 1;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	
		if (func_72(uVar3))
		{
			uVar0 = { ENTITY::GET_ENTITY_ROTATION(uVar3, 2) };
		
			if (uVar0.f_1 > 45f || uVar0.f_1 < -45f)
				return 0;
		
			uVar4 = uVar3;
		}
	}

	uVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar4) };

	if (func_13(uParam0->f_12, uVar0) > BUILTIN::COS(uParam0->f_15))
		return 1;

	return 0;
}

float func_13(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xDC0
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1);
}

bool func_14() // Position - 0xDD7
{
	var uVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		return ENTITY::IS_ENTITY_UPRIGHT(uVar0, 1119092736);
	}

	return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 1119092736);
}

int func_15(var uParam0, var uParam1, var uParam2) // Position - 0xE11
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
		return 0;

	if (func_17(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		func_16(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}

	return 0;
}

void func_16(var uParam0, var uParam1) // Position - 0xE5D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_17(var uParam0) // Position - 0xE79
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
		return false;

	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		return false;

	if (MISC::ARE_STRINGS_EQUAL(*uParam0, uParam0->f_14) || MISC::ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_14))
		return func_19(uParam0->f_14, uParam0->f_15);

	return func_18(uParam0->f_14);
}

bool func_18(var uParam0) // Position - 0xED3
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_19(var uParam0, var uParam1) // Position - 0xEE6
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_20(var uParam0) // Position - 0xEFF
{
	var uVar0;

	uVar0 = 2;

	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			return true;
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			return true;
	
		if (func_8(PLAYER::PLAYER_PED_ID(), 0) != -1)
			return true;
	}

	if (uParam0->f_11 == 0)
		return !func_23(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10 + 2f, 1);

	uVar0 = { func_21(uParam0->f_16, 2f) };
	return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uVar0[0 /*3*/], uVar0[1 /*3*/], uVar0.f_7, 0, 1, 0);
}

struct<8> func_21(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, float fParam8) // Position - 0xFA3
{
	var uVar0;
	var uVar8;

	uVar0 = 2;
	uVar8 = { func_22(uParam0[1 /*3*/] - uParam0[0 /*3*/]) * { fParam8, fParam8, fParam8 } };
	uVar0[0 /*3*/] = { uParam0[0 /*3*/] - uVar8 };
	uVar0[1 /*3*/] = { uParam0[1 /*3*/] + uVar8 };
	uVar0.f_7 = uParam0.f_7 + (fParam8 * 2f);
	return uVar0;
}

Vector3 func_22(float fParam0, var uParam1, var uParam2) // Position - 0x1005
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

bool func_23(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0x1044
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, iParam5), uParam1) <= fParam4 * fParam4;
}

int func_24(var uParam0, char* sParam1) // Position - 0x1062
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return 0;

	if (func_17(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		func_25(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}

	return 0;
}

void func_25(var uParam0) // Position - 0x10AB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_26(var uParam0) // Position - 0x10C1
{
	if (func_17(uParam0))
		HUD::CLEAR_HELP(1);

	uParam0->f_14 = 0;
	uParam0->f_15 = 0;

	if (uParam0->f_9 == 1)
		uParam0->f_9 = 0;
}

bool func_27() // Position - 0x10EE
{
	var uVar0;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		return false;

	uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);

	if (FIRE::IS_ENTITY_ON_FIRE(uVar0))
		return true;

	if (func_31(uVar0))
		return true;

	if (func_28(uVar0, 3))
		return true;

	return !VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0);
}

bool func_28(var uParam0, int iParam1) // Position - 0x1142
{
	int iVar0;

	if (func_29(uParam0))
	{
		iVar0 = 0;
	
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 1, 0))
			return true;
	
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 5, 0))
			return true;
	
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 0, 0))
			iVar0 = iVar0 + 1;
	
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 1, 0))
			iVar0 = iVar0 + 1;
	
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 4, 0))
			iVar0 = iVar0 + 1;
	
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(uParam0, 5, 0))
			iVar0 = iVar0 + 1;
	
		if (iVar0 >= iParam1)
			return true;
	}

	return false;
}

bool func_29(var uParam0) // Position - 0x11DE
{
	if (func_30(uParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
				return true;

	return false;
}

bool func_30(var uParam0) // Position - 0x1208
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

bool func_31(var uParam0) // Position - 0x1229
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
				return true;
	else
		return true;

	return false;
}

int func_32() // Position - 0x126C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return func_40(PLAYER::PLAYER_ID());

	switch (func_34())
	{
		case 2:
			return func_33(2);
	
		case 0:
			return func_33(0);
	
		case 1:
			return func_33(1);
	
		default:
		
	}

	return 0;
}

int func_33(int iParam0) // Position - 0x12BA
{
	return Global_62201[iParam0];
}

int func_34() // Position - 0x12C9
{
	func_35();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_35() // Position - 0x12E2
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_38(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_37(PLAYER::PLAYER_PED_ID());
		
			if (func_36(iVar0) && !func_70(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_36(Global_114931.f_2370.f_539.f_4321))
					Global_114931.f_2370.f_539.f_4322 = Global_114931.f_2370.f_539.f_4321;
			
				Global_114931.f_2370.f_539.f_4323 = iVar0;
				Global_114931.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114931.f_2370.f_539.f_4321 != 145)
				Global_114931.f_2370.f_539.f_4323 = Global_114931.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114931.f_2370.f_539.f_4321 = 145;
}

bool func_36(int iParam0) // Position - 0x13DF
{
	return iParam0 < 3;
}

int func_37(var uParam0) // Position - 0x13EB
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_38(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_38(int iParam0) // Position - 0x1428
{
	if (func_36(iParam0))
		return func_39(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_39(int iParam0) // Position - 0x144D
{
	return Global_2339[iParam0 /*29*/];
}

int func_40(int iParam0) // Position - 0x145C
{
	int iVar0;

	iVar0 = func_41(iParam0);
	return iVar0;
}

int func_41(int iParam0) // Position - 0x146E
{
	if (iParam0 > -1)
		if (iParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_42(iParam0))
			return Global_1845299[iParam0 /*883*/].f_198.f_3;
		else
			return 0;

	return 0;
}

bool func_42(int iParam0) // Position - 0x14B1
{
	if (!func_43(iParam0))
		return false;

	return IS_BIT_SET(Global_2673274.f_1, iParam0);
}

bool func_43(int iParam0) // Position - 0x14D0
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

void func_44(var uParam0, int iParam1) // Position - 0x14F2
{
	uParam0->f_13 = iParam1;
	func_26(uParam0);
}

bool func_45(var uParam0) // Position - 0x1506
{
	func_72(PLAYER::PLAYER_PED_ID());

	if (*uParam0 == 0)
		return false;

	if (func_47(false))
		return false;

	if (func_46())
		return false;

	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			return false;
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			return false;
	
		if (func_8(PLAYER::PLAYER_PED_ID(), 0) != -1)
			return false;
	}

	if (uParam0->f_11 == 1)
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);

	return func_23(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_46() // Position - 0x15BF
{
	return MISC::GET_GAME_TIMER() <= Global_24546.f_6481 + 100;
}

bool func_47(bool bParam0) // Position - 0x15D4
{
	if (bParam0)
		return Global_24407.f_4 && Global_24407.f_104 == 4;

	return Global_24407.f_4;
}

bool func_48(int iParam0) // Position - 0x15FD
{
	if (iParam0 == 0)
		if (func_69())
			return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || func_46() || Global_65021 || func_47(false) || func_54(0) || func_53() || func_49(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

bool func_49(var uParam0) // Position - 0x166D
{
	if (func_52(uParam0))
		return true;

	if (func_50(uParam0))
		return true;

	return false;
}

bool func_50(int iParam0) // Position - 0x1690
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 != -1)
		return func_51(iParam0, 9);

	return false;
}

bool func_51(int iParam0, int iParam1) // Position - 0x16AE
{
	return IS_BIT_SET(Global_1892798[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_52(int iParam0) // Position - 0x16C6
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 != -1)
		return IS_BIT_SET(Global_1892798[iVar0 /*615*/].f_1, 0);

	return false;
}

bool func_53() // Position - 0x16E9
{
	if (IS_BIT_SET(Global_1674270, 0) || IS_BIT_SET(Global_1674270, 1))
		return true;

	return false;
}

bool func_54(int iParam0) // Position - 0x170B
{
	if (iParam0 == 1)
		if (Global_21627.f_1 > 3)
			if (IS_BIT_SET(Global_9463, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_21627.f_1 > 3)
		return true;

	return false;
}

void func_55(var uParam0) // Position - 0x1762
{
	if (uParam0->f_11 == 1)
		func_57(&(uParam0->f_16), 255, 100, 0, 100);
	else
		func_56(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
}

void func_56(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1797
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar5;
	float fVar8;

	fVar1 = 360f / BUILTIN::TO_FLOAT(iParam8);
	fVar2 = { uParam0 };
	fVar5 = { uParam0 };
	fVar8 = 0f;
	fVar2 = { uParam0 };
	fVar2 = fVar2 + (BUILTIN::SIN(fVar8 - fVar1) * uParam3);
	fVar2.f_1 = fVar2.f_1 + (BUILTIN::COS(fVar8 - fVar1) * uParam3);

	for (iVar0 = 0; iVar0 <= iParam8; iVar0 = iVar0 + 1)
	{
		fVar5 = { uParam0 };
		fVar5 = fVar5 + (BUILTIN::SIN(fVar8) * uParam3);
		fVar5.f_1 = fVar5.f_1 + (BUILTIN::COS(fVar8) * uParam3);
		GRAPHICS::DRAW_DEBUG_LINE(fVar2, fVar5, iParam4, iParam5, iParam6, iParam7);
		fVar2 = { fVar5 };
		fVar8 = fVar8 + fVar1;
	}
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x184C
{
	func_58(uParam0->[0 /*3*/], uParam0->[1 /*3*/], uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x1872
{
	var uVar0;
	var uVar3;
	float fVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	int iVar38;

	if (fParam6 == 0f)
		return;

	uVar0 = { func_22(uParam3 - uParam0) };
	uVar3 = { func_59(uVar0, 0f, 0f, 1f) };
	fVar6 = fParam6 / 2f;
	uVar13 = 8;
	uVar7 = { uParam0 };
	uVar10 = { uParam3 };
	uVar10.f_2 = uParam0.f_2;
	uVar13[0 /*3*/] = { uVar7 - (uVar3 * { fVar6, fVar6, fVar6 }) };
	uVar13[1 /*3*/] = { uVar7 + (uVar3 * { fVar6, fVar6, fVar6 }) };
	uVar13[2 /*3*/] = { uVar10 + (uVar3 * { fVar6, fVar6, fVar6 }) };
	uVar13[3 /*3*/] = { uVar10 - (uVar3 * { fVar6, fVar6, fVar6 }) };
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[0 /*3*/], uVar13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[1 /*3*/], uVar13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[2 /*3*/], uVar13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[3 /*3*/], uVar13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);

	for (iVar38 = 0; iVar38 <= 3; iVar38 = iVar38 + 1)
	{
		uVar13[4 + iVar38 /*3*/] = { uVar13[iVar38 /*3*/] };
		uVar13[4 + iVar38 /*3*/].f_2 = uParam3.f_2;
	}

	GRAPHICS::DRAW_DEBUG_LINE(uVar13[4 /*3*/], uVar13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[5 /*3*/], uVar13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[6 /*3*/], uVar13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[7 /*3*/], uVar13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[0 /*3*/], uVar13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[1 /*3*/], uVar13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[2 /*3*/], uVar13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	GRAPHICS::DRAW_DEBUG_LINE(uVar13[3 /*3*/], uVar13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_59(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x1A82
{
	return (fParam0.f_1 * fParam3.f_2) - (fParam0.f_2 * fParam3.f_1), (fParam0.f_2 * fParam3) - (fParam0 * fParam3.f_2), (fParam0 * fParam3.f_1) - (fParam0.f_1 * fParam3);
}

void func_60(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) // Position - 0x1ABB
{
	if (iParam0 != 198)
	{
		if (Global_80305)
			Global_44420.f_227[iParam0] = iParam1;
		else
			Global_114931.f_7268.f_227[iParam0] = iParam1;
	
		Global_41426[iParam0] = bParam2;
		Global_41625[iParam0] = true;
		func_63(iParam0, bParam3, iParam4, false);
		func_61(iParam0, iParam1);
	}
}

void func_61(int iParam0, int iParam1) // Position - 0x1B13
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			else
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			break;
	
		case 71:
			if (iParam1 != 1)
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
			else
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
			break;
	
		case 65:
			if (iParam1 == 1)
				func_62(0, false);
			else
				func_62(0, true);
			break;
	
		case 6:
			if (iParam1 == 1)
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			else
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			break;
	
		case 174:
			if (iParam1 == 2)
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			break;
	
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_62(int iParam0, bool bParam1) // Position - 0x1BF2
{
	if (bParam1)
		MISC::SET_BIT(&Global_113566, iParam0);
	else
		MISC::CLEAR_BIT(&Global_113566, iParam0);

	Global_113565 = 1;
}

bool func_63(int iParam0, bool bParam1, int iParam2, bool bParam3) // Position - 0x1C1B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar98;
	bool bVar99;
	int iVar100;

	Global_1926077 = 1;
	bVar0 = false;
	uVar3.f_4 = 3;
	uVar3.f_8 = 3;
	uVar3.f_64 = 3;
	uVar3.f_75 = 3;
	uVar3.f_91 = 3;
	func_67(&uVar3, iParam0);

	if (func_64())
		iVar1 = Global_114931.f_7268.f_227[iParam0];
	else
		iVar1 = Global_44420.f_227[iParam0];

	iVar2 = Global_41824[iParam0];

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1926077 = 1;
	}
	else
	{
		bVar99 = true;
	
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_41426[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), uVar3, 1) < 200f)
				{
					bVar99 = false;
					Global_1926077 = 1;
				}
			
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar99 = false;
						Global_1926077 = 1;
					}
				}
			}
		}
	
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5)
		{
			bVar99 = false;
			Global_1926077 = 1;
		}
	
		if (bVar99)
		{
			switch (uVar3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (uVar3.f_4[iVar1] != 0)
							ENTITY::REMOVE_MODEL_HIDE(uVar3, 10f, uVar3.f_4[iVar1], 0);
					
						if (uVar3.f_4[iVar2] != 0)
							ENTITY::CREATE_MODEL_HIDE(uVar3, 10f, uVar3.f_4[iVar2], 1);
					
						Global_43020[iParam0] = true;
					}
				
					bVar0 = true;
					break;
			
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
						{
							if (STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[1 /*8*/]))
							{
								STREAMING::REMOVE_IPL(&uVar3.f_8[1 /*8*/]);
								Global_1926077 = 1;
							}
						}
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
						{
							if (STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[2 /*8*/]))
							{
								STREAMING::REMOVE_IPL(&uVar3.f_8[2 /*8*/]);
								Global_1926077 = 1;
							}
						}
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[0 /*8*/]))
							{
								STREAMING::REQUEST_IPL(&uVar3.f_8[0 /*8*/]);
								Global_1926077 = 1;
							}
						}
					
						if (MISC::GET_HASH_KEY(&(uVar3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(uVar3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(uVar3.f_34));
								Global_1926077 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(uVar3.f_34)) != MISC::GET_HASH_KEY(""))
							if (STREAMING::IS_IPL_ACTIVE(&(uVar3.f_34)))
								STREAMING::REMOVE_IPL(&(uVar3.f_34));
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[0 /*8*/]))
								STREAMING::REMOVE_IPL(&uVar3.f_8[0 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[2 /*8*/]))
								STREAMING::REMOVE_IPL(&uVar3.f_8[2 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
							if (!STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[1 /*8*/]))
								STREAMING::REQUEST_IPL(&uVar3.f_8[1 /*8*/]);
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(uVar3.f_34)) != MISC::GET_HASH_KEY(""))
							if (STREAMING::IS_IPL_ACTIVE(&(uVar3.f_34)))
								STREAMING::REMOVE_IPL(&(uVar3.f_34));
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[0 /*8*/]))
								STREAMING::REMOVE_IPL(&uVar3.f_8[0 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[1 /*8*/]))
								STREAMING::REMOVE_IPL(&uVar3.f_8[1 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							if (!STREAMING::IS_IPL_ACTIVE(&uVar3.f_8[2 /*8*/]))
								STREAMING::REQUEST_IPL(&uVar3.f_8[2 /*8*/]);
					}
				
					Global_42821[iParam0] = true;
					Global_43020[iParam0] = true;
					bVar0 = true;
					break;
			
				case 2:
					iVar100 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uVar3, &(uVar3.f_42));
				
					if (iVar100 != 0)
					{
						if (MISC::GET_HASH_KEY(&(uVar3.f_50)) != MISC::GET_HASH_KEY(""))
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(uVar3.f_50)))
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(uVar3.f_50));
					
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[1 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[1 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[2 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[2 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[0 /*8*/]))
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[0 /*8*/]);
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[0 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[0 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&uVar3.f_8[iVar1 /*8*/]))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[2 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[2 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[1 /*8*/]))
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[1 /*8*/]);
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&uVar3.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[0 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[0 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&uVar3.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[1 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[1 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&uVar3.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &uVar3.f_8[2 /*8*/]))
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &uVar3.f_8[2 /*8*/]);
						}
					
						if (bParam1)
							INTERIOR::REFRESH_INTERIOR(iVar100);
					}
				
					Global_43020[iParam0] = true;
					Global_42821[iParam0] = true;
					bVar0 = true;
					break;
			
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(uVar3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f)
					{
						uVar98 = OBJECT::GET_RAYFIRE_MAP_OBJECT(uVar3, 25f, &uVar3.f_8[0 /*8*/]);
					
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar98))
						{
							if (iVar1 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98, 3);
								Global_43020[iParam0] = true;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98) != 7 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98, 10);
									Global_43020[iParam0] = true;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
			
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(uVar3, 50f, uVar3.f_4[1], uVar3.f_4[0], 0);
						MISC::CLEAR_BIT(&Global_41172[iParam0 / 32], iParam0 % 32);
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(uVar3, 50f, uVar3.f_4[0], uVar3.f_4[1], 1);
						MISC::SET_BIT(&Global_41172[iParam0 / 32], iParam0 % 32);
					}
				
					bVar0 = true;
					break;
			}
		
			if (bVar0)
			{
				Global_41625[iParam0] = false;
				Global_41824[iParam0] = iVar1;
			
				if (!func_64())
				{
					if (!Global_42421[iParam0])
					{
						Global_42421[iParam0] = true;
						Global_42620 = Global_42620 + 1;
					}
				}
			}
		}
	}

	return bVar0;
}

bool func_64() // Position - 0x2580
{
	if (func_66() == -1 || func_66() == 999 && !(func_65() == 0))
		return true;

	return false;
}

int func_65() // Position - 0x25B0
{
	return Global_33793;
}

int func_66() // Position - 0x25BB
{
	return Global_33792;
}

int func_67(var uParam0, int iParam1) // Position - 0x25C6
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		uParam0->f_4[iVar0] = 0;
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[iVar0 /*8*/], "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
	}

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
	
		case 4:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
	
		case 0:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
	
		case 1:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
	
		case 2:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.91345f, 603.2904f, 105.66109f };
			uParam0->f_61 = { -1038.9135f, 639.2904f, 135.66109f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
	
		case 5:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
			break;
	
		case 196:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
	
		case 6:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
			break;
	
		case 7:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 8:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 9:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 10:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 11:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
			break;
	
		case 12:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cargoship", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
			uParam0->f_68 = { -162.89182f, -2365.7693f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
	
		case 13:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
			break;
	
		case 14:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "smboat", 32);
			break;
	
		case 15:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
	
		case 16:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 17:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 18:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 19:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 20:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
	
		case 21:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.8584f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
	
		case 22:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
			break;
	
		case 23:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
			break;
	
		case 24:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
			break;
	
		case 25:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
			break;
	
		case 26:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
	
		case 27:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
	
		case 28:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
	
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("DT1_05_BUILD1_H");
			uParam0->f_4[1] = joaat("DT1_05_BUILD1_DAMAGE");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("DT1_05_BUILD1_LOD");
			uParam0->f_4[1] = joaat("DT1_05_BUILD1_DAMAGE_LOD");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("DT1_05_SLOD");
			uParam0->f_4[1] = joaat("DT1_05_DAMAGE_SLOD");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
	
		case 32:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 33:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 34:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
	
		case 35:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
	
		case 36:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
	
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
	
		case 38:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
	
		case 39:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
	
		case 40:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
	
		case 41:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
	
		case 42:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
	
		case 43:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
	
		case 44:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
	
		case 45:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
	
		case 46:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
	
		case 47:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
	
		case 48:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "des_methtrailer", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
	
		case 49:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
	
		case 50:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.7556f, 4929.9883f, 39.52461f };
			uParam0->f_82 = { 2505.7556f, 5023.9883f, 67.52461f };
			break;
	
		case 55:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			break;
	
		case 51:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farm", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
	
		case 52:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm_props", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
	
		case 53:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
	
		case 54:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farmint", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
	
		case 56:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 57:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 58:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 59:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 60:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
	
		case 61:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
			*uParam0 = { -1600.6194f, 4443.4565f, 0.725f };
			break;
	
		case 62:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
	
		case 63:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
			*uParam0 = { -3086.4285f, 339.2523f, 6.3717f };
			break;
	
		case 64:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -1675.1783f, -1143.6046f, 12.0175f };
			break;
	
		case 65:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "railing_start", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
	
		case 66:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
	
		case 67:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
	
		case 68:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
	
		case 69:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
	
		case 70:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 71:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 72:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 73:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 74:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 75:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
	
		case 76:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
	
		case 105:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
	
		case 106:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
	
		case 107:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
	
		case 108:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
	
		case 109:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
	
		case 110:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
	
		case 111:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
	
		case 112:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
	
		case 77:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.2096f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
	
		case 78:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
	
		case 79:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
	
		case 80:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
	
		case 113:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.6292f, -2030.913f, 1.2823f };
			break;
	
		case 114:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.9692f, 4277.5825f, 30.379f };
			break;
	
		case 115:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.8813f, 3836.1074f, 30.7717f };
			break;
	
		case 87:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -180.5771f, -1016.9276f, 28.2893f };
			break;
	
		case 88:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { -623.6868f - 11f, -231.93504f - 11f, 40.307034f - 3.25f };
			uParam0->f_82 = { -623.6868f + 11f, -231.93504f + 11f, 40.307034f + 3.25f };
			break;
	
		case 89:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
	
		case 90:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
	
		case 91:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 2773.6099f, 2835.3274f, 35.1903f };
			break;
	
		case 94:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "airfield", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 1743.6821f, 3286.2512f, 40.0875f };
			break;
	
		case 95:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
	
		case 104:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
	
		case 103:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
	
		case 102:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
	
		case 92:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
	
		case 93:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
	
		case 118:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
	
		case 116:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
	
		case 117:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
	
		case 119:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
	
		case 120:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
	
		case 122:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
	
		case 121:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 123:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 124:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 170:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 171:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
	
		case 125:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
	
		case 164:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 165:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 166:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 167:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 168:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 169:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 126:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 127:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 128:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 129:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 130:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 131:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 132:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 133:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 134:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 179:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.3356f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
	
		case 174:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
	
		case 175:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
	
		case 176:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
	
		case 177:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
	
		case 178:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
	
		case 173:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shr_int", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
	
		case 180:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
	
		case 181:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
	
		case 135:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 136:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 137:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 138:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 139:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 140:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 141:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 142:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 143:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 144:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 145:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 146:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 147:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
	
		case 148:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
	
		case 149:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.0288f, 3682.9983f, 33.2675f };
			break;
	
		case 150:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
	
		case 151:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
	
		case 152:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
	
		case 153:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
	
		case 154:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
	
		case 155:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
	
		case 172:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.2944f, 28.2688f };
			break;
	
		case 182:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.57953f, -3092.9624f, 8.64631f };
			uParam0->f_79 = { { 8.64631f, -3092.9624f, 139.57953f } - { 4.1875f, 24f, 33.3125f } };
			uParam0->f_82 = { { 8.64631f, -3092.9624f, 139.57953f } + { 4.1875f, 24f, 33.3125f } };
			uParam0->f_85 = { { 8.64631f, -3092.9624f, 139.57953f } - { 4.1875f, 24f, 33.3125f } };
			uParam0->f_88 = { { 8.64631f, -3092.9624f, 139.57953f } + { 4.1875f, 24f, 33.3125f } };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
	
		case 183:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.77838f, -3131.767f, 7.041344f };
			uParam0->f_79 = { { 7.041344f, -3131.767f, 203.77838f } - { 2.5625f, 2.75f, 4.875f } };
			uParam0->f_82 = { { 7.041344f, -3131.767f, 203.77838f } + { 2.5625f, 2.75f, 4.875f } };
			break;
	
		case 184:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.77055f, -2982.6594f, 7.952507f };
			uParam0->f_79 = { { 7.952507f, -2982.6594f, 144.77055f } - { 3.125f, 3.4375f, 5.3125f } };
			uParam0->f_82 = { { 7.952507f, -2982.6594f, 144.77055f } + { 3.125f, 3.4375f, 5.3125f } };
			break;
	
		case 185:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_79 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_82 = { -1158.9647f, -1524.9827f, 11.632731f };
			break;
	
		case 187:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.0645f, 368.0221f, 70.9128f };
			break;
	
		case 186:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
	
		case 188:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.2333f, 92.1041f, 60.0617f };
			break;
	
		case 81:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.1377f, 223.4648f, 181.1118f };
			break;
	
		case 82:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.7847f, 263.4779f, 173.6154f };
			break;
	
		case 83:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
	
		case 84:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
	
		case 85:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "golfflags", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -1096.5055f, 4.5754f, 49.8103f };
			break;
	
		case 86:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "yogagame", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
	
		case 189:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
	
		case 190:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
	
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.3812f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - { 25f, 25f, 15f } };
			uParam0->f_88 = { *uParam0 + { 25f, 25f, 15f } };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
	
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - { 25f, 25f, 15f } };
			uParam0->f_88 = { *uParam0 + { 25f, 25f, 15f } };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
	
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.0793f, 35.9502f };
			uParam0->f_85 = { *uParam0 - { 25f, 25f, 15f } };
			uParam0->f_88 = { *uParam0 + { 25f, 25f, 15f } };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
	
		case 194:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			*uParam0 = { -1601.4241f, 2808.2126f, 16.2598f };
			break;
	
		case 97:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
	
		case 98:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
	
		case 99:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
			*uParam0 = { -1459.1273f, 486.1281f, 115.2016f };
			break;
	
		case 100:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
	
		case 101:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "facelobby", 32);
			*uParam0 = { -1081.3467f, -263.1502f, 38.7152f };
			break;
	
		case 195:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
	
		case 197:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}

	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 157:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 158:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 163:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 159:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 161:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 162:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 160:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "locked", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "unlocked" /* GXT: UNLOCKED */, 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 96:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}

	return 1;
}

int func_68(int iParam0) // Position - 0x5E06
{
	if (iParam0 != 198)
		if (Global_80305)
			return Global_44420.f_227[iParam0];
		else
			return Global_114931.f_7268.f_227[iParam0];

	return 0;
}

bool func_69() // Position - 0x5E3C
{
	if (Global_44886 == 15)
		return false;

	return true;
}

bool func_70(int iParam0) // Position - 0x5E51
{
	return Global_44886 == iParam0;
}

float func_71(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x5E5F
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	else
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uParam1, iParam4);
}

bool func_72(var uParam0) // Position - 0x5E99
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

void func_73() // Position - 0x5EB7
{
	if (func_70(14))
	{
		func_79(&Static_97[0 /*24*/], 0, "Bigwheel", func_80(158), 0, "", 0, 6.2f);
		func_74(&Static_72[0 /*24*/], 0, "Rollercoaster", -1651.6411f, -1134.325f, 21.903982f, -1640.9845f, -1121.5903f, 16.503132f, 6.75f, 0, "", 0);
	}
	else
	{
		func_79(&Static_97[0 /*24*/], 0, "Bigwheel", func_80(158), 8, "", 0, 6.2f);
		func_74(&Static_72[0 /*24*/], 0, "Rollercoaster", -1651.6411f, -1134.325f, 21.903982f, -1640.9845f, -1121.5903f, 16.503132f, 6.75f, 15, "", 0);
	}

	Static_38 = "LEV_RIDEHLP" /* GXT: Press ~INPUT_CONTEXT~ to ride the Leviathan. The cost is $~1~. */;
	Static_38.f_1 = "LEV_BROKEN" /* GXT: The Leviathan is closed. Come back later. */;
	Static_38.f_2 = "LEV_NOMONEY" /* GXT: You do not have enough money. It costs $~1~ to ride the Leviathan. */;
	Static_38.f_4 = "LEV_WANTED" /* GXT: You can't ride the Leviathan while Wanted. */;
	Static_38.f_3 = 0;
	Static_38.f_16 = 1;
	Static_55 = "BIGW_RIDEHLP" /* GXT: Press ~INPUT_CONTEXT~ to ride the Ferris Whale. The cost is $~1~. */;
	Static_55.f_1 = "BIGW_BROKEN" /* GXT: The Ferris Whale is closed. Come back later. */;
	Static_55.f_2 = "BIGW_NOMONEY" /* GXT: You do not have enough money. It costs $~1~ to ride the Ferris Whale. */;
	Static_55.f_4 = "BIGW_WANTED" /* GXT: You can't ride the Ferris Whale while Wanted. */;
	Static_55.f_3 = 0;
	Static_38.f_16 = 1;
}

void func_74(var uParam0, int iParam1, char* sParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12) // Position - 0x5FC9
{
	uParam0->f_5 = sParam2;
	uParam0->f_4 = sParam11;
	uParam0->f_9 = iParam10;
	uParam0->f_7 = iParam12;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 1;
	uParam0->f_10 = 0f;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	func_78(&(uParam0->f_16), fParam3, fParam6, fParam9);
	uParam0->f_1 = { func_75(uParam0->f_16) };
}

Vector3 func_75(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6032
{
	return func_76(uParam0[0 /*3*/], uParam0[1 /*3*/], 0.5f, true);
}

Vector3 func_76(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7) // Position - 0x6052
{
	if (bParam7)
		fParam6 = func_77(fParam6, 0f, 1f);

	return uParam0 + ({ fParam6, fParam6, fParam6 } * (uParam3 - uParam0));
}

float func_77(float fParam0, float fParam1, float fParam2) // Position - 0x607B
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x60A2
{
	uParam0->[0 /*3*/] = { uParam1 };
	uParam0->[1 /*3*/] = { uParam4 };
	uParam0->f_7 = fParam7;
}

void func_79(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6, char* sParam7, int iParam8, float fParam9) // Position - 0x60C6
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { uParam3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;

	if (iParam1 == 0)
		uParam0->f_10 = 2.75f;
	else
		uParam0->f_10 = 2.75f * 2f;

	if (fParam9 > 0f)
		uParam0->f_10 = fParam9;
}

Vector3 func_80(int iParam0) // Position - 0x613B
{
	int iVar0;

	iVar0 = iParam0;
	return Global_34172[iVar0 /*23*/][0 /*3*/];
}

void func_81() // Position - 0x6153
{
	func_82(&Static_97[0 /*24*/]);
	func_82(&Static_72[0 /*24*/]);
	func_26(&Static_38);
	func_26(&Static_55);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_82(var uParam0) // Position - 0x617D
{
	*uParam0 = 0;
}

bool func_83(float fParam0, var uParam1, var uParam2) // Position - 0x6189
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

