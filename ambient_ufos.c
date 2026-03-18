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
	var Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	int Static_41 = 0;
	int Static_42 = 0;
	int Static_43 = 0;
	int Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
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
	float Static_66 = 0f;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 0;
	int Static_73 = 0;
	int Static_74 = 0;
	int Static_75 = 0;
	int Static_76 = 0;
	int Static_77 = 2;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	var Static_83 = 0;
	bool Static_84 = 0;
	float Static_85 = 0f;
	float Static_86 = 0f;
	float Static_87 = 0f;
	float Static_88 = 0f;
	float Static_89 = 0f;
	int Static_90 = 0;
	int Static_91 = 0;
	int Static_92 = 0;
	int Static_93 = 0;
	int Static_94 = 0;
	int Static_95 = 0;
	int Static_96 = 0;
	int Static_97 = 0;
	int Static_98 = 0;
	int Static_99 = 0;
	int Static_100 = 0;
	int Static_101 = 0;
	bool Static_102 = 0;
	bool Static_103 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;

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
	Static_41 = 1;
	Static_42 = 65;
	Static_43 = 49;
	Static_44 = 64;
	Static_63 = { -1124.3922f, -514.70013f, 33.21493f };
	Static_66 = 200f;
	Static_67 = { 2490f, 3777f, 2402.879f };
	Static_70 = { -2052f, 3237f, 1450.078f };
	Static_73 = -1;
	Static_75 = -1;
	Static_84 = true;
	Static_85 = 10f;
	Static_86 = 90f;
	Static_87 = 35f;
	Static_88 = 60f;
	Static_89 = 275f;
	Static_90 = 1500;
	Static_91 = -1;
	Static_93 = 3000;
	Static_94 = 708;
	Static_95 = 377;
	Static_96 = 1000;
	Static_97 = 2093;
	Static_100 = -1;
	Static_101 = -1;
	Static_102 = true;
	Static_103 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_12();

	while (CAM::IS_SCREEN_FADED_OUT())
	{
		BUILTIN::WAIT(0);
	}

	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
		STREAMING::REQUEST_IPL("ufo");

	Static_77[0 /*3*/] = { Static_67 };
	Static_77[1 /*3*/] = { Static_70 };

	while (true)
	{
		func_11(PLAYER::PLAYER_PED_ID());
	
		if (Global_33797 == 1)
			func_12();
	
		if (Static_84)
		{
			if (!func_10(PLAYER::PLAYER_PED_ID(), Static_77[0 /*3*/], 290f + 50f, 1))
				if (!func_10(PLAYER::PLAYER_PED_ID(), Static_77[1 /*3*/], 290f + 50f, 1))
					func_12();
		
			if (Static_76 != 0)
			{
				if (!func_10(PLAYER::PLAYER_PED_ID(), Static_77[0 /*3*/], Static_89 + 50f, 1))
				{
					if (!func_10(PLAYER::PLAYER_PED_ID(), Static_77[1 /*3*/], Static_89 + 50f, 1))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
						Static_76 = 0;
						Static_75 = -1;
					}
				}
			}
		}
	
		func_8();
	
		switch (Static_76)
		{
			case 0:
				iVar0 = 0;
			
				for (iVar0 = 0; iVar0 < Static_77; iVar0 = iVar0 + 1)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Static_77[iVar0 /*3*/], Static_89, 1))
					{
						Static_75 = iVar0;
						Static_76 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 1, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 1, 1);
					}
				}
				break;
		
			case 1:
				iVar0 = 0;
			
				for (iVar0 = 0; iVar0 < Static_77; iVar0 = iVar0 + 1)
				{
					if (func_10(PLAYER::PLAYER_PED_ID(), Static_77[iVar0 /*3*/], Static_86, 1))
					{
						Static_75 = iVar0;
						Static_76 = 2;
					}
				}
				break;
		
			case 2:
				if (Static_75 == -1)
				{
					Static_76 = 1;
				}
				else
				{
					Static_73 = MISC::GET_GAME_TIMER();
					Static_74 = 0;
					Static_76 = 3;
				}
				break;
		
			case 3:
				if (func_10(PLAYER::PLAYER_PED_ID(), Static_77[Static_75 /*3*/], Static_86, 1))
				{
					Static_74 = MISC::GET_GAME_TIMER() - Static_73;
				
					if (Static_74 >= Static_90)
					{
						Static_76 = 4;
						Static_91 = AUDIO::GET_SOUND_ID();
						Static_92 = MISC::GET_GAME_TIMER();
					
						if (Static_75 == 0)
							AUDIO::PLAY_SOUND_FROM_COORD(Static_91, "SPECIAL_EVIL_UFO_DEATH_RAY", Static_77[Static_75 /*3*/], 0, 0, 0, 0);
						else
							AUDIO::PLAY_SOUND_FROM_COORD(Static_91, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Static_77[Static_75 /*3*/], 0, 0, 0, 0);
					
						func_7();
						func_6();
					}
				}
				else
				{
					Static_76 = 1;
				}
				break;
		
			case 4:
				func_5();
				func_7();
				func_6();
			
				if (MISC::GET_GAME_TIMER() > Static_92 + Static_93)
					func_4(&Static_91);
			
				if (!func_10(PLAYER::PLAYER_PED_ID(), Static_77[Static_75 /*3*/], Static_89, 1))
				{
					func_1();
					Static_75 = -1;
					Static_76 = 0;
					func_4(&Static_101);
					func_4(&Static_100);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x3A3
{
	var uVar0;

	if (func_11(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		
			if (func_2(uVar0))
				VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 1, 0, 0);
		}
	}
}

bool func_2(var uParam0) // Position - 0x3DF
{
	if (func_3(uParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
				return true;

	return false;
}

bool func_3(var uParam0) // Position - 0x409
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x42A
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_5() // Position - 0x44B
{
	var uVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	
		if (func_2(uVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 0, 0, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(uVar0, 2, 0f, 0f, -Static_85, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6() // Position - 0x491
{
	if (Static_103)
	{
		if (MISC::GET_GAME_TIMER() > Static_98)
		{
			if (Static_100 != -1)
			{
				func_4(&Static_100);
				Static_98 = MISC::GET_GAME_TIMER() + Static_97;
			}
			else
			{
				Static_100 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(Static_100, "ent_amb_elec_crackle", 0, 0, 0, 1);
				Static_98 = MISC::GET_GAME_TIMER() + Static_95;
			}
		}
	}
}

void func_7() // Position - 0x4DB
{
	if (Static_102)
	{
		if (MISC::GET_GAME_TIMER() > Static_99)
		{
			if (Static_101 != -1)
			{
				func_4(&Static_101);
				Static_99 = MISC::GET_GAME_TIMER() + Static_96;
			}
			else
			{
				Static_101 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(Static_101, "spl_stun_npc_master", 0, 0, 0, 1);
				Static_99 = MISC::GET_GAME_TIMER() + Static_94;
			}
		}
	}
}

void func_8() // Position - 0x525
{
	var uVar0;

	if (Static_75 == -1)
		return;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		return;

	if (!func_10(PLAYER::PLAYER_PED_ID(), Static_77[Static_75 /*3*/], Static_87, 1))
		return;

	uVar0 = { func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Static_77[Static_75 /*3*/]) * { Static_88, Static_88, Static_88 } };
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, uVar0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(float fParam0, var uParam1, var uParam2) // Position - 0x593
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

bool func_10(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0x5D2
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, iParam5), uParam1) <= fParam4 * fParam4;
}

bool func_11(var uParam0) // Position - 0x5F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

void func_12() // Position - 0x60E
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
		STREAMING::REMOVE_IPL("ufo");

	func_4(&Static_101);
	func_4(&Static_100);
	func_4(&Static_91);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

