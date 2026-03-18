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
	int Static_38 = 2;
	var Static_39 = 0;
	var Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 5;
	var Static_49 = 1076887552;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 1135869952;
	var Static_55 = 2;
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
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 5;
	var Static_73 = 1076887552;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 1135869952;
	var Static_79 = 2;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	var Static_83 = 0;
	var Static_84 = 0;
	var Static_85 = 0;
	var Static_86 = 0;
	var Static_87 = 0;
	var Static_88 = 0;
	var Static_89 = 0;
	var Static_90 = 0;
	var Static_91 = 0;
	var Static_92 = 0;
	var Static_93 = 0;
	var Static_94 = 0;
	var Static_95 = 0;
	var Static_96 = 0;
	var Static_97 = 0;
	var Static_98 = 0;
	var Static_99 = -1;
	var Static_100 = 0;
	var Static_101 = 0;
	var Static_102 = 0;
	var Static_103 = 0;
	bool Static_104 = 0;
	var Static_105 = 2;
	var Static_106 = 0;
	var Static_107 = 0;
	var Static_108 = 0;
	var Static_109 = 0;
	var Static_110 = 0;
	var Static_111 = 0;
	var Static_112 = 2;
	var Static_113 = 0;
	var Static_114 = 0;
	var Static_115 = 2;
	var Static_116 = 0;
	var Static_117 = 0;
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
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar5;

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
	uVar2 = { ScriptArg_0.f_1[0 /*3*/] };

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("LAUNCHER_CARWASH")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_80();
	}

	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-949873222) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
		
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				BUILTIN::WAIT(0);
			}
		
			BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptArg_0, 23, 1424);
		}
	
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_79(PLAYER::PLAYER_PED_ID());
	func_71();

	while (true)
	{
		func_79(PLAYER::PLAYER_PED_ID());
	
		if (func_70(PLAYER::PLAYER_PED_ID(), uVar2, 0) > 100f + 20f)
			func_80();
	
		bVar0 = false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			bVar0 = func_66(uVar1) || func_65(uVar1);
			Static_104 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(uVar1);
			func_64(Static_104);
		}
	
		for (iVar5 = 0; iVar5 < Static_38; iVar5 = iVar5 + 1)
		{
			func_63(iVar5);
		}
	
		if (func_1(&Static_38, &Static_87, bVar0, false, true, 1424))
			func_80();
	
		BUILTIN::WAIT(0);
	}
}

bool func_1(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) // Position - 0x196
{
	int iVar0;

	if (uParam1->f_10)
	{
		iVar0 = 0;
	
		for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
		{
			func_58(&uParam0->[iVar0 /*24*/]);
		}
	}

	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
		
			if (func_50(uParam1->f_16))
			{
				for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
				{
					if (func_47(&uParam0->[iVar0 /*24*/]) && uParam0->[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
					
						if (uParam0->[iVar0 /*24*/].f_7 || MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0)
							func_46(uParam1, 6);
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							func_46(uParam1, 8);
						else if (bParam2)
							func_46(uParam1, 3);
						else if (uParam0->[iVar0 /*24*/].f_8)
							func_46(uParam1, 2);
						else if (func_34() < uParam0->[uParam1->f_12 /*24*/].f_9)
							func_46(uParam1, 1);
						else if (func_29())
							func_46(uParam1, 7);
						else
							func_46(uParam1, 4);
					}
				}
			}
			else
			{
				func_28(uParam1);
			}
			break;
	
		case 2:
			if (!uParam1->f_9)
				func_26(uParam1, uParam1->f_6);
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || uParam0->[iVar0 /*24*/].f_8 == 0)
			{
				func_46(uParam1, 0);
				return false;
			}
			break;
	
		case 1:
			if (!uParam1->f_9)
				func_17(uParam1, uParam1->f_2, uParam0->[uParam1->f_12 /*24*/].f_9);
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || func_34() >= uParam0->[uParam1->f_12 /*24*/].f_9)
			{
				func_46(uParam1, 0);
				return false;
			}
			break;
	
		case 6:
			if (!uParam1->f_9)
				func_26(uParam1, uParam1->f_1);
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
				return false;
			}
			break;
	
		case 3:
			if (!uParam1->f_9)
				func_26(uParam1, uParam1->f_3);
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || bParam2 == false || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
				return false;
			}
			break;
	
		case 7:
			if (!uParam1->f_9)
				func_26(uParam1, uParam1->f_5);
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
				return false;
			}
			break;
	
		case 8:
			if (!uParam1->f_9)
				func_26(uParam1, uParam1->f_4);
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				func_46(uParam1, 0);
				return false;
			}
			break;
	
		case 9:
			if (!uParam1->f_9)
				if (func_16())
					func_26(uParam1, uParam1->f_7);
				else
					func_26(uParam1, uParam1->f_8);
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || func_13(&uParam0->[uParam1->f_12 /*24*/]))
			{
				func_46(uParam1, 0);
				return false;
			}
			break;
	
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
			func_12();
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_46(uParam1, 8);
				return false;
			}
		
			if (uParam0->[uParam1->f_12 /*24*/].f_8)
			{
				func_46(uParam1, 2);
				return false;
			}
		
			if (func_22(&uParam0->[uParam1->f_12 /*24*/]) || !func_50(uParam1->f_16))
			{
				func_46(uParam1, 0);
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
					func_46(uParam1, 0);
					return false;
				}
			}
		
			if (uParam0->[uParam1->f_12 /*24*/].f_7 || MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0)
			{
				func_46(uParam1, 6);
				return false;
			}
		
			if (func_29())
			{
				func_46(uParam1, 7);
				return false;
			}
		
			if (func_34() < uParam0->[uParam1->f_12 /*24*/].f_9)
			{
				func_46(uParam1, 1);
				return false;
			}
		
			if (!uParam1->f_9)
				if (MISC::GET_HASH_KEY(uParam0->[uParam1->f_12 /*24*/].f_5) == MISC::GET_HASH_KEY("Carwash1") && func_5(PLAYER::PLAYER_ID()))
					func_26(uParam1, "CWASH_RIDEHLP2" /* GXT: Press ~INPUT_CONTEXT~ to use your Car Wash for free. */);
				else
					func_17(uParam1, *uParam1, uParam0->[uParam1->f_12 /*24*/].f_9);
		
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
				if (!func_13(&uParam0->[uParam1->f_12 /*24*/]))
					func_46(uParam1, 9);
				else
					func_46(uParam1, 5);
			break;
	
		case 5:
			func_28(uParam1);
			uParam0->[uParam1->f_12 /*24*/].f_8 = 0;
		
			if (!bParam4)
			{
				func_46(uParam1, 0);
				return true;
			}
		
			HUD::CLEAR_HELP(1);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->[uParam1->f_12 /*24*/].f_5))
			{
				SCRIPT::REQUEST_SCRIPT(uParam0->[uParam1->f_12 /*24*/].f_5);
			
				while (!SCRIPT::HAS_SCRIPT_LOADED(uParam0->[uParam1->f_12 /*24*/].f_5))
				{
					func_12();
				
					if (func_79(PLAYER::PLAYER_PED_ID()))
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
							if (func_79(PLAYER::PLAYER_PED_ID()))
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
							func_12();
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

int func_2(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) // Position - 0x90A
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

void func_3(var uParam0) // Position - 0x961
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(uParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(uParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(uParam0, 0);
}

void func_4(bool bParam0, bool bParam1) // Position - 0x98D
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

bool func_5(int iParam0) // Position - 0xADE
{
	return func_6(iParam0, 1);
}

bool func_6(int iParam0, int iParam1) // Position - 0xAED
{
	if (iParam1 != 0)
		if (iParam0 != func_7())
			return IS_BIT_SET(Global_1882717[iParam0 /*315*/].f_158.f_27, iParam1);

	return false;
}

int func_7() // Position - 0xB18
{
	return -1;
}

int func_8(var uParam0, int iParam1) // Position - 0xB21
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

bool func_9(bool bParam0) // Position - 0xBA6
{
	if (bParam0)
		if (func_11())
			return true;

	if (func_10(14))
		return true;

	return false;
}

bool func_10(int iParam0) // Position - 0xBCC
{
	return Global_44886 == iParam0;
}

bool func_11() // Position - 0xBDA
{
	if (Global_113873)
		return true;

	if (!func_10(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DIRECTOR_MODE")) > 0)
		return true;

	return false;
}

void func_12() // Position - 0xC0C
{
	Global_24407.f_6 = 1;
}

bool func_13(var uParam0) // Position - 0xC1A
{
	var uVar0;
	var uVar3;
	var uVar4;

	uVar4 = PLAYER::PLAYER_PED_ID();

	if (uParam0->f_15 == 360f)
		return 1;

	if (func_15(uParam0->f_12))
		return 1;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	
		if (func_79(uVar3))
		{
			uVar0 = { ENTITY::GET_ENTITY_ROTATION(uVar3, 2) };
		
			if (uVar0.f_1 > 45f || uVar0.f_1 < -45f)
				return 0;
		
			uVar4 = uVar3;
		}
	}

	uVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar4) };

	if (func_14(uParam0->f_12, uVar0) > BUILTIN::COS(uParam0->f_15))
		return 1;

	return 0;
}

float func_14(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xCC3
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1);
}

bool func_15(float fParam0, var uParam1, var uParam2) // Position - 0xCDA
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

bool func_16() // Position - 0xD04
{
	var uVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		return ENTITY::IS_ENTITY_UPRIGHT(uVar0, 1119092736);
	}

	return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 1119092736);
}

int func_17(var uParam0, var uParam1, var uParam2) // Position - 0xD3E
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
		return 0;

	if (func_19(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		func_18(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}

	return 0;
}

void func_18(var uParam0, var uParam1) // Position - 0xD8A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_19(var uParam0) // Position - 0xDA6
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
		return false;

	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		return false;

	if (MISC::ARE_STRINGS_EQUAL(*uParam0, uParam0->f_14) || MISC::ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_14))
		return func_21(uParam0->f_14, uParam0->f_15);

	return func_20(uParam0->f_14);
}

bool func_20(var uParam0) // Position - 0xE00
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_21(var uParam0, var uParam1) // Position - 0xE13
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_22(var uParam0) // Position - 0xE2C
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
		return !func_25(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10 + 2f, 1);

	uVar0 = { func_23(uParam0->f_16, 2f) };
	return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uVar0[0 /*3*/], uVar0[1 /*3*/], uVar0.f_7, 0, 1, 0);
}

struct<8> func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, float fParam8) // Position - 0xED0
{
	var uVar0;
	var uVar8;

	uVar0 = 2;
	uVar8 = { func_24(uParam0[1 /*3*/] - uParam0[0 /*3*/]) * { fParam8, fParam8, fParam8 } };
	uVar0[0 /*3*/] = { uParam0[0 /*3*/] - uVar8 };
	uVar0[1 /*3*/] = { uParam0[1 /*3*/] + uVar8 };
	uVar0.f_7 = uParam0.f_7 + (fParam8 * 2f);
	return uVar0;
}

Vector3 func_24(float fParam0, var uParam1, var uParam2) // Position - 0xF32
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

bool func_25(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xF71
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, iParam5), uParam1) <= fParam4 * fParam4;
}

int func_26(var uParam0, char* sParam1) // Position - 0xF8F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return 0;

	if (func_19(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		func_27(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}

	return 0;
}

void func_27(var uParam0) // Position - 0xFD8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_28(var uParam0) // Position - 0xFEE
{
	if (func_19(uParam0))
		HUD::CLEAR_HELP(1);

	uParam0->f_14 = 0;
	uParam0->f_15 = 0;

	if (uParam0->f_9 == 1)
		uParam0->f_9 = 0;
}

bool func_29() // Position - 0x101B
{
	var uVar0;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		return false;

	uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);

	if (FIRE::IS_ENTITY_ON_FIRE(uVar0))
		return true;

	if (func_33(uVar0))
		return true;

	if (func_30(uVar0, 3))
		return true;

	return !VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0);
}

bool func_30(var uParam0, int iParam1) // Position - 0x106F
{
	int iVar0;

	if (func_31(uParam0))
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

bool func_31(var uParam0) // Position - 0x110B
{
	if (func_32(uParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
				return true;

	return false;
}

bool func_32(var uParam0) // Position - 0x1135
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

bool func_33(var uParam0) // Position - 0x1156
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

int func_34() // Position - 0x1199
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return func_42(PLAYER::PLAYER_ID());

	switch (func_36())
	{
		case 2:
			return func_35(2);
	
		case 0:
			return func_35(0);
	
		case 1:
			return func_35(1);
	
		default:
		
	}

	return 0;
}

int func_35(int iParam0) // Position - 0x11E7
{
	return Global_62201[iParam0];
}

int func_36() // Position - 0x11F6
{
	func_37();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_37() // Position - 0x120F
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
		
			if (func_38(iVar0) && !func_10(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_38(Global_114931.f_2370.f_539.f_4321))
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

bool func_38(int iParam0) // Position - 0x130C
{
	return iParam0 < 3;
}

int func_39(var uParam0) // Position - 0x1318
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_40(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_40(int iParam0) // Position - 0x1355
{
	if (func_38(iParam0))
		return func_41(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_41(int iParam0) // Position - 0x137A
{
	return Global_2339[iParam0 /*29*/];
}

int func_42(int iParam0) // Position - 0x1389
{
	int iVar0;

	iVar0 = func_43(iParam0);
	return iVar0;
}

int func_43(int iParam0) // Position - 0x139B
{
	if (iParam0 > -1)
		if (iParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_44(iParam0))
			return Global_1845299[iParam0 /*883*/].f_198.f_3;
		else
			return 0;

	return 0;
}

bool func_44(int iParam0) // Position - 0x13DE
{
	if (!func_45(iParam0))
		return false;

	return IS_BIT_SET(Global_2673274.f_1, iParam0);
}

bool func_45(int iParam0) // Position - 0x13FD
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

void func_46(var uParam0, int iParam1) // Position - 0x141F
{
	uParam0->f_13 = iParam1;
	func_28(uParam0);
}

bool func_47(var uParam0) // Position - 0x1433
{
	func_79(PLAYER::PLAYER_PED_ID());

	if (*uParam0 == 0)
		return false;

	if (func_49(false))
		return false;

	if (func_48())
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

	return func_25(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_48() // Position - 0x14EC
{
	return MISC::GET_GAME_TIMER() <= Global_24546.f_6481 + 100;
}

bool func_49(bool bParam0) // Position - 0x1501
{
	if (bParam0)
		return Global_24407.f_4 && Global_24407.f_104 == 4;

	return Global_24407.f_4;
}

bool func_50(int iParam0) // Position - 0x152A
{
	if (iParam0 == 0)
		if (func_57())
			return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || func_48() || Global_65021 || func_49(false) || func_56(0) || func_55() || func_51(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

bool func_51(var uParam0) // Position - 0x159A
{
	if (func_54(uParam0))
		return true;

	if (func_52(uParam0))
		return true;

	return false;
}

bool func_52(int iParam0) // Position - 0x15BD
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 != -1)
		return func_53(iParam0, 9);

	return false;
}

bool func_53(int iParam0, int iParam1) // Position - 0x15DB
{
	return IS_BIT_SET(Global_1892798[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_54(int iParam0) // Position - 0x15F3
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 != -1)
		return IS_BIT_SET(Global_1892798[iVar0 /*615*/].f_1, 0);

	return false;
}

bool func_55() // Position - 0x1616
{
	if (IS_BIT_SET(Global_1674270, 0) || IS_BIT_SET(Global_1674270, 1))
		return true;

	return false;
}

bool func_56(int iParam0) // Position - 0x1638
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

bool func_57() // Position - 0x168F
{
	if (Global_44886 == 15)
		return false;

	return true;
}

void func_58(var uParam0) // Position - 0x16A4
{
	if (uParam0->f_11 == 1)
		func_60(&(uParam0->f_16), 255, 100, 0, 100);
	else
		func_59(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
}

void func_59(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x16D9
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

void func_60(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x178E
{
	func_61(uParam0->[0 /*3*/], uParam0->[1 /*3*/], uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_61(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x17B4
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

	uVar0 = { func_24(uParam3 - uParam0) };
	uVar3 = { func_62(uVar0, 0f, 0f, 1f) };
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

Vector3 func_62(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x19C4
{
	return (fParam0.f_1 * fParam3.f_2) - (fParam0.f_2 * fParam3.f_1), (fParam0.f_2 * fParam3) - (fParam0 * fParam3.f_2), (fParam0 * fParam3.f_1) - (fParam0.f_1 * fParam3);
}

void func_63(int iParam0) // Position - 0x19FD
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;

	if (!func_47(&Static_38[iParam0 /*24*/]))
	{
		Static_38[iParam0 /*24*/].f_8 = 0;
		Static_115[iParam0] = 0;
		return;
	}

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Static_38[iParam0 /*24*/].f_8 = 0;
		Static_115[iParam0] = 0;
		return;
	}

	if (Static_115[iParam0] == 0)
	{
		if (MISC::GET_GAME_TIMER() > Static_112[iParam0])
			Static_115[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Static_105[iParam0 /*3*/], Static_105[iParam0 /*3*/] + { 1f, 0f, 0f }, 2f, 2, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4);
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(Static_115[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
	
		if (iVar0 == 2)
		{
			Static_38[iParam0 /*24*/].f_8 = 0;
		
			if (iVar8 > 0)
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
					if (ENTITY::IS_ENTITY_A_VEHICLE(uVar1))
						Static_38[iParam0 /*24*/].f_8 = 1;
		
			Static_115[iParam0] = 0;
		}
	
		if (iVar0 == 0)
			Static_115[iParam0] = 0;
	
		Static_112[iParam0] = MISC::GET_GAME_TIMER() + 250;
	}
}

void func_64(bool bParam0) // Position - 0x1AEE
{
	bParam0;
}

int func_65(var uParam0) // Position - 0x1AFB
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)))
		return 1;

	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(uParam0, 0))
		return 1;

	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(uParam0, 1))
		return 1;

	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(uParam0, 2))
		return 1;

	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(uParam0, 3))
		return 1;

	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(uParam0, 1))
		if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(uParam0) == 6)
			return 1;

	return 0;
}

int func_66(var uParam0) // Position - 0x1B66
{
	var uVar0;
	float fVar3;

	if (!func_32(uParam0))
		return 0;

	if (!VEHICLE::DOES_VEHICLE_HAVE_ROOF(uParam0))
		return 1;

	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(uParam0))
		return 1;

	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)))
		return 1;

	if (FIRE::IS_ENTITY_ON_FIRE(uParam0))
		return 1;

	if (func_69(uParam0, true))
		return 1;

	if (func_67(uParam0))
		return 1;

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0), &uVar0, &fVar3);

	if (ENTITY::GET_ENTITY_MODEL(uParam0) != joaat("ZENO"))
		if (MISC::ABSF(fVar3 - uVar0) > 3.4f)
			return 1;

	if (MISC::ABSF(fVar3.f_2 - uVar0.f_2) > 2.9f)
		return 1;

	if (Global_80305)
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			return 0;

	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(uParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(uParam0))
		return 1;

	if (!VEHICLE::IS_VEHICLE_A_CONVERTIBLE(uParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(uParam0))
		return 1;

	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("BTYPE") || ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("BTYPE3"))
		if (func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, 3, 0)) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, 4, 0)) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, 5, 0)) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, 6, 0)) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, 7, 0)) || func_32(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, 8, 0)))
			return 1;

	return 0;
}

bool func_67(var uParam0) // Position - 0x1CF7
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);

	if (func_68(iVar0))
		return true;

	if (iVar0 == joaat("REGINA"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 2))
			return true;
	
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 3) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 4))
			return true;
	}

	if (iVar0 == joaat("BANSHEE") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	if (iVar0 == joaat("PEYOTE") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	if (iVar0 == joaat("COQUETTE") && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(uParam0))
		return true;

	if (iVar0 == joaat("MANANA") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	if (iVar0 == joaat("MESA") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	if (iVar0 == joaat("VOLTIC") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	if (iVar0 == joaat("BOBCATXL") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	if (iVar0 == joaat("RUINER"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 7))
			return false;
	
		return true;
	}

	if (iVar0 == joaat("YOSEMITE3"))
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 5) == 4)
			return true;

	if (iVar0 == joaat("RT3000") || iVar0 == joaat("DRIFTRT3000") && VEHICLE::GET_VEHICLE_MOD(uParam0, 10) == 3)
		return true;

	if (iVar0 == joaat("BRIOSO3"))
	{
		switch (VEHICLE::GET_VEHICLE_MOD(uParam0, 10))
		{
			case 1:
			case 4:
			case 7:
			case 10:
				return true;
		
			default:
			
		}
	}

	if (iVar0 == joaat("ZR350") || iVar0 == joaat("DRIFTZR350") && VEHICLE::GET_VEHICLE_MOD(uParam0, 0) > 10)
		return true;

	if (iVar0 == joaat("KRIEGER") && VEHICLE::GET_VEHICLE_MOD(uParam0, 0) > 0)
		return true;

	if (iVar0 == joaat("ENTITY3") && VEHICLE::GET_VEHICLE_MOD(uParam0, 10) >= 0 && VEHICLE::GET_VEHICLE_MOD(uParam0, 10) <= 4)
		return true;

	if (iVar0 == joaat("ITALI2") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	if (iVar0 == joaat("BOOR") && VEHICLE::GET_VEHICLE_MOD(uParam0, 10) == 0)
		return true;

	if (iVar0 == joaat("POLICET3"))
		return true;

	if (iVar0 == joaat("COQUETTE5") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 1))
		return true;

	return false;
}

bool func_68(int iParam0) // Position - 0x1F80
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0))
		return true;

	switch (iParam0)
	{
		case joaat("AMBULANCE"):
		case joaat("ARMYTRAILER"):
		case joaat("AIRTUG"):
		case joaat("BIFTA"):
		case joaat("BISON2"):
		case joaat("BISON3"):
		case joaat("BODHI2"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("BULLDOZER"):
		case joaat("CADDY"):
		case joaat("CADDY2"):
		case joaat("CADDY3"):
		case joaat("CUTTER"):
		case joaat("DILETTANTE2"):
		case joaat("DUBSTA3"):
		case joaat("DUMP"):
		case joaat("DUNE"):
		case joaat("DLOADER"):
		case joaat("FORKLIFT"):
		case joaat("GUARDIAN"):
		case joaat("GRAINTRAILER"):
		case joaat("HANDLER"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("KALAHARI"):
		case joaat("MESA3"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("MOWER"):
		case joaat("PACKER"):
		case joaat("PBUS"):
		case joaat("RATLOADER"):
		case joaat("RENTALBUS"):
		case joaat("RHINO"):
		case joaat("RIPLEY"):
		case joaat("RIOT"):
		case joaat("SADLER"):
		case joaat("SADLER2"):
		case joaat("SANDKING"):
		case joaat("SANDKING2"):
		case joaat("SCRAP"):
		case joaat("STOCKADE"):
		case joaat("STOCKADE3"):
		case joaat("TECHNICAL"):
		case joaat("TRACTOR"):
		case joaat("TRACTOR2"):
		case joaat("TORNADO4"):
		case joaat("TOURBUS"):
		case joaat("LIMO2"):
		case joaat("RAPTOR"):
		case joaat("RATLOADER2"):
		case joaat("DUNE3"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("VIGILANTE"):
		case joaat("DELUXO"):
		case joaat("CARACARA"):
		case joaat("SCRAMJET"):
		case joaat("MENACER"):
		case joaat("CARACARA2"):
		case joaat("LOCUST"):
		case joaat("JUGULAR"):
		case joaat("ZORRUSSO"):
		case joaat("FORMULA"):
		case joaat("EVERON"):
		case joaat("ZHABA"):
		case joaat("OUTLAW"):
		case joaat("VAGRANT"):
		case joaat("FORMULA2"):
		case joaat("MINITANK"):
		case joaat("PEYOTE3"):
		case joaat("YOUGA3"):
		case joaat("OPENWHEEL1"):
		case joaat("OPENWHEEL2"):
		case joaat("WINKY"):
		case joaat("SLAMTRUCK"):
		case joaat("VETO"):
		case joaat("VETO2"):
		case joaat("SQUADDIE"):
		case joaat("COMET7"):
		case joaat("SM722"):
		case joaat("DRAUGUR"):
		case joaat("RATEL"):
		case joaat("L35"):
		case joaat("VIGERO3"):
		case joaat("TERMINUS"):
		case joaat("POLTERMINUS"):
		case joaat("POLCARACARA"):
		case joaat("LUIVA"):
			return true;
	}

	return false;
}

bool func_69(var uParam0, bool bParam1) // Position - 0x21C7
{
	if (Global_80305)
		if (ENTITY::DOES_ENTITY_EXIST(uParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
				if (DECORATOR::DECOR_EXIST_ON(uParam0, "TestDrive"))
					return DECORATOR::DECOR_GET_BOOL(uParam0, "TestDrive");

	return false;
}

float func_70(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x2218
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	else
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uParam1, iParam4);
}

void func_71() // Position - 0x2252
{
	func_77(&Static_38[0 /*24*/], 1, "Carwash1", func_78(156), 15, "", 0, 4f);
	func_77(&Static_38[1 /*24*/], 1, "Carwash2", func_78(157), 15, "", 0, 4f);
	func_75(&Static_38[0 /*24*/], -1f, 0f, 0f, 360f);
	func_75(&Static_38[1 /*24*/], 0f, -1f, 0f, 360f);
	func_72(&Static_87, 0);
	Static_105[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Static_105[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_72(var uParam0, int iParam1) // Position - 0x22E0
{
	*uParam0 = "CWASH_RIDEHLP" /* GXT: Press ~INPUT_CONTEXT~ to use the Car Wash. The cost is $~1~. */;
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY" /* GXT: This vehicle cannot be used with the Car Wash. */;
	uParam0->f_4 = "CWASH_WANTED" /* GXT: You can't use the Car Wash while Wanted. */;
	uParam0->f_5 = "CWASH_CARBROKE" /* GXT: This vehicle is too damaged to be used with the Car Wash. */;
	uParam0->f_6 = "CWASH_BLOCKED" /* GXT: The Car Wash is blocked. Please come back later. */;
	uParam0->f_7 = "CWASH_WRONGWAY" /* GXT: Your vehicle needs to be pointing towards the Car Wash. */;
	uParam0->f_8 = "CWASH_UPSIDEDO" /* GXT: Your vehicle needs to be upright to use the Car Wash. */;
	uParam0->f_16 = iParam1;

	if (!Global_80305)
	{
		uParam0->f_2 = "CWASH_NOMONEY" /* GXT: You do not have enough money. It costs $~1~ to use the Car Wash. */;
		return;
	}

	if (MISC::IS_PS3_VERSION() || func_74())
		uParam0->f_2 = "CWASH_POOR_PSN" /* GXT: It costs $~1~ to use the Car Wash.~n~You can buy additional GTA dollars from PlayStation®Store in the Pause Menu. */;
	else if (MISC::IS_XBOX360_VERSION() || func_73())
		uParam0->f_2 = "CWASH_POOR_XBX" /* GXT: It costs $~1~ to use the Car Wash.~n~You can buy additional GTA dollars from the Xbox Store in the Pause Menu. */;
	else
		uParam0->f_2 = "CWASH_POOR_STD" /* GXT: It costs $~1~ to use the Car Wash.~n~You can buy additional GTA dollars from the Store in the Pause Menu. */;
}

bool func_73() // Position - 0x2374
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

bool func_74() // Position - 0x238A
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_75(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x23A0
{
	uParam0->f_12 = { func_24(fParam1 * { 5f, 5f, 5f }) };
	uParam0->f_15 = func_76(fParam4, 0f, 360f);
}

float func_76(float fParam0, float fParam1, float fParam2) // Position - 0x23C9
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_77(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6, char* sParam7, int iParam8, float fParam9) // Position - 0x23F0
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

Vector3 func_78(int iParam0) // Position - 0x2465
{
	int iVar0;

	iVar0 = iParam0;
	return Global_34172[iVar0 /*23*/][0 /*3*/];
}

bool func_79(var uParam0) // Position - 0x247D
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

void func_80() // Position - 0x249B
{
	func_81(&Static_38);
	func_28(&Static_87);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_81(var uParam0) // Position - 0x24B3
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		func_82(&uParam0->[iVar0 /*24*/]);
	}
}

void func_82(var uParam0) // Position - 0x24DC
{
	*uParam0 = 0;
}

