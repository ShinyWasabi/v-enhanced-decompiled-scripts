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
	bool Static_18 = 0;
	int Static_19 = 0;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	var Static_24 = 0;
	var Static_25 = 0;
	var Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	var Static_29 = 0;
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
	func_247();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_246();

	while (Static_19 != 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			switch (Static_19)
			{
				case 0:
					if (func_245())
					{
						Global_80574 = true;
						Static_19 = 1;
					}
				
					func_247();
					break;
			
				case 1:
					if (!func_245())
					{
						Global_45435 = 1;
						func_244(-1613.869f, -1054.958f, 12.0722f, -1082130432, 350, 1114636288, false);
						CUTSCENE::REQUEST_CUTSCENE("SOL_5_MCS_2_P5", 8);
						func_243(0, 1);
						func_124(PLAYER::PLAYER_PED_ID(), 12, 35, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						BUILTIN::WAIT(500);
						Static_19 = 2;
					}
				
					func_247();
					break;
			
				case 2:
					if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("SOL_5_MCS_2_P5") && func_123(0, 1) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						CLOCK::SET_CLOCK_TIME(7, 5, 30);
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
						MISC::CLEAR_WEATHER_TYPE_PERSIST();
						MISC::CLEAR_AREA(-1590.055f, -1037.0665f, 12.0186f, 4f, 1, 0, 0, 0);
						func_59(&Static_20, 0, -1590.055f, -1037.0665f, 12.0186f, 24.5062f, true, 1);
						func_8(Static_20, -1590.055f, -1037.0665f, 12.0186f, 24.5062f, 24, false);
						PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
						PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
						CUTSCENE::START_CUTSCENE(0);
						Static_19 = 3;
					}
					break;
			
				case 3:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!Static_18)
						{
							Static_21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Michael" /* GXT: Michael */, joaat("PLAYER_ZERO")));
						
							if (ENTITY::DOES_ENTITY_EXIST(Static_21))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Static_21, 0))
								{
									PED::CLEAR_PED_BLOOD_DAMAGE(Static_21);
									PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Static_21, 0, "ALL");
									PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Static_21, 1, "ALL");
									PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Static_21, 4, "ALL");
									PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Static_21, 5, "ALL");
									PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Static_21, 2, "ALL");
									PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Static_21, 3, "ALL");
									Static_18 = true;
								}
							}
						}
					
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
								Global_80574 = false;
							}
						}
						else
						{
							Static_19 = 4;
						}
					}
					break;
			
				case 4:
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_7(Global_97467[0 /*10*/].f_7, 1, false);
						func_6(0, &Static_22);
						Static_30 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_97467[0 /*10*/].f_3, &Static_22);
					
						if (Global_102506.f_415 == Static_30)
							Global_102506.f_415 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					
						if (Static_30 != 0)
							INTERIOR::UNPIN_INTERIOR(Static_30);
					
						Global_102493 = false;
						func_4();
						Global_45435 = 0;
						func_3(30000);
						func_1(0, 0);
						Static_19 = 5;
					}
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_246();
}

void func_1(int iParam0, bool bParam1) // Position - 0x2BC
{
	if (!func_2(iParam0))
		return;

	Global_114931.f_2370.f_539.f_2332[iParam0] = bParam1;
}

bool func_2(int iParam0) // Position - 0x2E4
{
	return iParam0 < 3;
}

void func_3(int iParam0) // Position - 0x2F0
{
	Global_45437 = MISC::GET_GAME_TIMER() + iParam0;
}

int func_4() // Position - 0x302
{
	if (func_5(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_5(bool bParam0) // Position - 0x34D
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

bool func_6(int iParam0, char* sParam1) // Position - 0x375
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
			break;
	
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
			break;
	
		case 8:
		case 7:
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
			break;
	}

	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

void func_7(int iParam0, bool bParam1, bool bParam2) // Position - 0x449
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		bVar1 = IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 15);
	
		if (bVar1 == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
	
		if (Global_34169 == true)
			Global_34170 = true;
	
		Global_34169 = true;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_34172[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_34172[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

void func_8(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6) // Position - 0x549
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
			return;
	
		if (iParam5 == 24)
			if (ENTITY::DOES_ENTITY_EXIST(Global_79095.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_79095.f_484[25], 0))
				if (Global_79095.f_484[25] == iParam0)
					return;
	
		if (!bParam6)
			if (VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TOURBUS"))
				return;
	
		func_58(iParam5);
		uVar0.f_9 = 49;
		uVar0.f_59 = 2;
		func_53(iParam0, &uVar0);
	
		if (func_52(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("VEHICLE_GEN_CONTROLLER"))
				Global_80083 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_45(iParam5, &uVar0, fParam1, fParam4, func_51(iParam0));
		func_9(iParam5, iParam0, 0);
	}
}

void func_9(int iParam0, int iParam1, int iParam2) // Position - 0x672
{
	int iVar0;

	if (iParam0 == -1)
		return;

	if (!func_42(&Global_79095.f_555[0 /*21*/], iParam0))
		return;

	if (!IS_BIT_SET(Global_79095.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_79095.f_555[0 /*21*/].f_9, 10))
		if (Global_79095.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
			return;

	if (Global_80002 != -1 && Global_80002 != iParam0)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
		
			if (iParam0 == 24)
				Global_114931.f_32757.f_4801 = func_31();
		
			if (iParam1 != Global_79095.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_30(iParam0);
				
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && iParam1 != iVar0)
						func_10(iVar0, 145);
				}
			
				Global_80001 = iParam1;
				Global_80002 = iParam0;
				Global_80003 = iParam2;
			}
		}
	}
}

void func_10(int iParam0, int iParam1) // Position - 0x789
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_11(iParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		uVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(uVar0))
			uVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(uVar0) && !PED::IS_PED_INJURED(uVar0))
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("PLAYER_ZERO"))
				iParam1 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("PLAYER_ONE"))
				iParam1 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("PLAYER_TWO"))
				iParam1 = 2;
	
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
			iParam1 = Global_114931.f_2370.f_539.f_4321;
	}

	for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1)
	{
		for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114931.f_32757.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114931.f_32757.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114931.f_32757.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_114931.f_32757.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_114931.f_32757.f_5592[iVar1] = iVar2;
					}
				}
			}
		}
	}

	for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114931.f_32757.f_5600[iVar1 /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114931.f_32757.f_5600[iVar1 /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114931.f_32757.f_5600[iVar1 /*78*/].f_1)))
					Global_114931.f_32757.f_5600[iVar1 /*78*/].f_66 = 0;
	}

	Global_114931.f_32757.f_5590 = iParam1;
	Global_80000 = iParam0;
	Global_114931.f_32757.f_5588 = 1;
	func_53(iParam0, &(Global_114931.f_32757.f_5510));
}

bool func_11(int iParam0) // Position - 0x98B
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) || func_28(iParam0, 0, false) || func_28(iParam0, 1, false) || func_28(iParam0, 2, false) || func_51(iParam0) != 145 || func_27(iParam0) || func_26(iParam0) || func_25(iParam0) || func_24(iParam0) || !func_12(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		func_26(iParam0);
		func_26(iParam0);
		func_28(iParam0, 0, false);
		func_28(iParam0, 1, false);
		func_28(iParam0, 2, false);
		func_51(iParam0) != 145;
		return false;
	}

	return true;
}

bool func_12(int iParam0) // Position - 0xA68
{
	if (iParam0 == 0)
		return false;

	if (!func_13(iParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
		return false;

	switch (iParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("TOWTRUCK3"):
		case joaat("TOWTRUCK4"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}

	return true;
}

bool func_13(int iParam0, bool bParam1, int iParam2) // Position - 0xC26
{
	int iVar0;
	var uVar1;

	if (iParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
		return false;

	if (iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == joaat("BLIMP2") || iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_23())
			return false;
	}
	else
	{
		for (iVar0 = 0; iVar0 < EXTRAMETADATA::GET_NUM_DLC_VEHICLES(); iVar0 = iVar0 + 1)
		{
			if (EXTRAMETADATA::GET_DLC_VEHICLE_DATA(iVar0, &uVar1))
			{
				if (iParam0 == uVar1.f_1)
				{
					if (EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(uVar1))
						return false;
				
					break;
				}
			}
		}
	}

	if (iParam0 == joaat("BLIMP"))
		if (!func_22() && !func_21() && !func_20() && !func_19() && !func_23())
			return false;

	if (iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS") || iParam0 == joaat("KHAMELION"))
	{
		if (func_18() || MISC::IS_PC_VERSION() || func_17())
		{
		}
		else if (!func_20())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_16(iParam0, iParam2))
			return false;

	if (!func_14(iParam0))
		return false;

	return true;
}

bool func_14(int iParam0) // Position - 0xDAB
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_15())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);

	if (iVar0 == 4)
		return true;

	switch (iParam0)
	{
		case joaat("DUNE4"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("VOLTIC2"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("RUINER2"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("PHANTOM2"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("TECHNICAL2"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("BOXVILLE5"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("WASTELANDER"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("BLAZER5"):
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&uVar2))
		return false;

	return true;
}

bool func_15() // Position - 0xE73
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

bool func_16(bool bParam0, int iParam1) // Position - 0xE8A
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_2708658)
		return true;

	if (!Global_2708659 && iParam1 >= 0 && iParam1 <= 607)
		if (IS_BIT_SET(Global_1583772[iParam1 /*143*/].f_104, 2))
			return true;

	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = 0;

	switch (bParam0)
	{
		case joaat("DRIFTRT3000"):
			iVar1 = Global_262145.f_36257[0];
			break;
	
		case joaat("KEITORA"):
			iVar1 = Global_262145.f_36257[1];
			break;
	
		case joaat("DRIFTKEITORA"):
			iVar1 = Global_262145.f_36257[2];
			break;
	
		case joaat("ITALI2"):
			iVar1 = Global_262145.f_36257[3];
			break;
	
		case joaat("ASTRALE"):
			iVar1 = Global_262145.f_36257[4];
			break;
	
		case joaat("GT750"):
			iVar1 = Global_262145.f_36257[5];
			break;
	
		case joaat("FMJ2"):
			iVar1 = Global_262145.f_36257[6];
			break;
	
		case joaat("LUIVA"):
			iVar1 = Global_262145.f_36257[7];
			break;
	
		case joaat("XTREME"):
			iVar1 = Global_262145.f_36257[8];
			break;
	
		case joaat("SENTINEL6"):
			iVar1 = Global_262145.f_36257[9];
			break;
	
		case joaat("POLBUFFALO6"):
			iVar1 = Global_262145.f_36257[10];
			break;
	
		case joaat("POLBUFFALO"):
			iVar1 = Global_262145.f_36257[11];
			break;
	
		case joaat("DRIFTSENTINEL2"):
			iVar1 = Global_262145.f_36257[12];
			break;
	
		case joaat("DRIFTDOMINATOR9"):
			iVar1 = Global_262145.f_36257[13];
			break;
	
		case joaat("VIVANITE2"):
			iVar1 = Global_262145.f_36257[14];
			break;
	}

	if (iVar0 > iVar1)
		return true;

	for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1)
	{
		if (bParam0 == Global_1835471[iVar2])
			return true;
	}

	return false;
}

bool func_17() // Position - 0x1072
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

bool func_18() // Position - 0x1088
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

bool func_19() // Position - 0x109E
{
	return false;
}

bool func_20() // Position - 0x10A7
{
	return true;
}

bool func_21() // Position - 0x10B0
{
	return true;
}

bool func_22() // Position - 0x10B9
{
	if (DLC::IS_DLC_PRESENT(joaat("DLC_ATOMICBLIMP")))
		return true;

	return false;
}

bool func_23() // Position - 0x10D2
{
	var uVar0;

	if (Global_153815 == 2)
		return true;
	else if (Global_153815 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				MISC::SET_BIT(&uVar0, 2);
				MISC::SET_BIT(&uVar0, 4);
				MISC::SET_BIT(&uVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

bool func_24(int iParam0) // Position - 0x118A
{
	int iVar0;
	var uVar1;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);

	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
		return true;

	if (!func_13(iVar0, false, -1))
		return true;

	return false;
}

bool func_25(int iParam0) // Position - 0x11D1
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99790[iVar0]))
			if (Global_99790[iVar0] == iParam0)
				return true;
	}

	return false;
}

bool func_26(int iParam0) // Position - 0x120C
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_99760[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_99760[iVar0], 0))
				if (Global_99760[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_99760[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
					return true;
		}
	}

	return false;
}

bool func_27(int iParam0) // Position - 0x1288
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_79095.f_484[24]))
		if (iParam0 == Global_79095.f_484[24])
			return false;

	for (iVar0 = 0; iVar0 < 68; iVar0 = iVar0 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79095.f_484[iVar0]))
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 && iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32)
				if (iParam0 == Global_79095.f_484[iVar0])
					return true;
	}

	return false;
}

bool func_28(int iParam0, int iParam1, bool bParam2) // Position - 0x1370
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		return false;

	for (iVar0 = 0; func_29(iParam1, iVar0, &uVar1, &iVar9); iVar0 = iVar0 + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114931.f_7236[iVar9], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&uVar1, iParam0))
				return true;
	}

	return false;
}

bool func_29(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x13DE
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

int func_30(int iParam0) // Position - 0x14B6
{
	if (iParam0 == -1)
		return 0;

	return Global_79095.f_139[iParam0];
}

var func_31() // Position - 0x14D2
{
	var uVar0;

	func_41(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_40(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_39(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_34(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_33(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_32(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_32(var uParam0, int iParam1) // Position - 0x1518
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}
}

void func_33(var uParam0, int iParam1) // Position - 0x159E
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
}

void func_34(var uParam0, int iParam1) // Position - 0x15D1
{
	int iVar0;
	int iVar1;

	iVar0 = func_38(*uParam0);
	iVar1 = func_36(*uParam0);

	if (iParam1 < 1 || iParam1 > func_35(iVar0, iVar1))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
}

int func_35(int iParam0, int iParam1) // Position - 0x1622
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_36(int iParam0) // Position - 0x16C4
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_37(bool bParam0, var uParam1, var uParam2) // Position - 0x16E6
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_38(int iParam0) // Position - 0x16FD
{
	return iParam0 & 15;
}

void func_39(var uParam0, int iParam1) // Position - 0x170A
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
}

void func_40(var uParam0, int iParam1) // Position - 0x1744
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
}

void func_41(var uParam0, int iParam1) // Position - 0x177F
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
}

bool func_42(var uParam0, int iParam1) // Position - 0x17BB
{
	bool bVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_43(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_43(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_43(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_43(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_43(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_43(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_43(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_43(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_43(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			bVar0 = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			bVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			bVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			bVar0 = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			bVar0 = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			bVar0 = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			bVar0 = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			iVar1 = iParam1 - 26;
			uParam0->f_14 = 12 + iVar1;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + iVar1;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			bVar0 = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			iVar1 = iParam1 - 29;
			uParam0->f_14 = 15 + iVar1;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + iVar1;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			bVar0 = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			iVar1 = iParam1 - 32;
			uParam0->f_14 = 18 + iVar1;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + iVar1;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			bVar0 = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			bVar0 = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			bVar0 = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			bVar0 = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			bVar0 = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			bVar0 = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			bVar0 = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			bVar0 = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			bVar0 = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			bVar0 = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			bVar0 = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			bVar0 = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			bVar0 = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			bVar0 = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			bVar0 = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			bVar0 = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			bVar0 = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			bVar0 = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			bVar0 = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			bVar0 = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			bVar0 = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			bVar0 = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			bVar0 = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			bVar0 = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			bVar0 = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			bVar0 = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (func_23())
				uParam0->f_4 = joaat("BLIMP2");
			else
				uParam0->f_4 = joaat("BLIMP");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			bVar0 = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (func_23())
				uParam0->f_4 = joaat("BLIMP2");
			else
				uParam0->f_4 = joaat("BLIMP");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			bVar0 = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			bVar0 = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			bVar0 = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_114931.f_32757.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA") || uParam0->f_4 == joaat("LUXOR") || uParam0->f_4 == joaat("SHAMAL") || uParam0->f_4 == joaat("TITAN") || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_52(Global_114931.f_32757.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_114931.f_32757.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_114931.f_32757.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_114931.f_32757.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_52(Global_114931.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114931.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114931.f_2370.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_52(Global_114931.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114931.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114931.f_2370.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return bVar0;
}

int func_43(int iParam0, int iParam1) // Position - 0x2EA9
{
	int iVar0;

	if (func_2(iParam0))
	{
		iVar0.f_11 = 12;
		iVar0.f_31 = 49;
		iVar0.f_81 = 2;
		func_44(iParam0, &iVar0, iParam1);
		return iVar0;
	}
	else
	{
		iParam0 != 145;
	}

	return 0;
}

void func_44(int iParam0, var uParam1, int iParam2) // Position - 0x2EEB
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
		
			if (Global_114931.f_9092.f_99.f_58[128] && !Global_114931.f_9092.f_99.f_58[131])
				iVar0 = joaat("PREMIER");
		
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case 2:
			iVar0 = joaat("BODHI2");
		
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114931.f_9092.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case 1:
			if (iParam2 == 1)
				iVar0 = joaat("BUFFALO2");
			else if (iParam2 == 2)
				iVar0 = joaat("BAGGER");
			else if (Global_114931.f_9092.f_99.f_58[118])
				iVar0 = joaat("BAGGER");
			else
				iVar0 = joaat("BUFFALO2");
		
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}
}

void func_45(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Position - 0x3147
{
	if (func_42(&Global_79095.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_79095.f_555[0 /*21*/].f_9, 10))
		{
			func_50(iParam0);
			func_49(uParam1, &Global_114931.f_32757.f_69[Global_79095.f_555[0 /*21*/].f_14 /*78*/]);
		
			if (IS_BIT_SET(Global_79095.f_555[0 /*21*/].f_9, 11))
			{
				Global_114931.f_32757.f_1864[Global_79095.f_555[0 /*21*/].f_14 /*3*/] = { uParam2 };
				Global_114931.f_32757.f_1934[Global_79095.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_114931.f_32757.f_1864[Global_79095.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_114931.f_32757.f_1934[Global_79095.f_555[0 /*21*/].f_14] = -1f;
			}
		
			Global_114931.f_32757.f_1958[Global_79095.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_46(iParam0, true);
		}
	}
}

void func_46(int iParam0, bool bParam1) // Position - 0x3240
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_48(iParam0, 0))
		{
			func_47(iParam0, 1, false);
			func_47(iParam0, 2, false);
			func_47(iParam0, 3, false);
			func_47(iParam0, 4, false);
			func_47(iParam0, 0, true);
			Global_79095[iParam0] = 1;
		}
	}
	else
	{
		func_47(iParam0, 0, false);
	}
}

void func_47(int iParam0, int iParam1, bool bParam2) // Position - 0x329D
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_114931.f_32757[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_114931.f_32757[iParam0], iParam1);
}

bool func_48(int iParam0, int iParam1) // Position - 0x32D8
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114931.f_32757[iParam0], iParam1);
}

void func_49(var uParam0, var uParam1) // Position - 0x32F8
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_50(int iParam0) // Position - 0x33C4
{
	if (iParam0 == -1)
		return;

	if (func_42(&Global_79095.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79095.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_79095.f_139[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_79095.f_139[iParam0]);
			Global_79095.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_79095.f_555[0 /*21*/].f_9, 13))
			func_46(iParam0, false);
	}
}

int func_51(int iParam0) // Position - 0x343B
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return 145;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		return 145;

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99760[iVar0]))
			if (Global_99760[iVar0] == iParam0)
				return Global_99770[iVar0];
	}

	return 145;
}

bool func_52(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, bool bParam6) // Position - 0x349E
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_53(int iParam0, var uParam1) // Position - 0x34E5
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_57(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_56(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_55(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (iVar0 = 0; iVar0 <= 11; iVar0 = iVar0 + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_54(iVar0 + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}
}

int func_54(int iParam0) // Position - 0x3790
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_55(var uParam0, var uParam1, var uParam2) // Position - 0x3840
{
	int iVar0;
	int iVar1;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (iVar0 = 0; iVar0 < *uParam1; iVar0 = iVar0 + 1)
	{
		iVar1 = iVar0;
	
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21)
		{
			uParam1->[iVar0] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, iVar1))
				uParam1->[iVar0] = 1;
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[iVar0] = 1;
						break;
				
					case 0:
						uParam1->[iVar0] = 2;
						break;
				
					case 1:
						uParam1->[iVar0] = 3;
						break;
				
					case 2:
						uParam1->[iVar0] = 4;
						break;
				
					case 3:
						uParam1->[iVar0] = 5;
						break;
				
					case 4:
						uParam1->[iVar0] = 6;
						break;
				
					case 5:
						uParam1->[iVar0] = 7;
						break;
				
					case 6:
						uParam1->[iVar0] = 8;
						break;
				
					case 7:
						uParam1->[iVar0] = 9;
						break;
				
					case 8:
						uParam1->[iVar0] = 10;
						break;
				
					case 9:
						uParam1->[iVar0] = 11;
						break;
				
					case 10:
						uParam1->[iVar0] = 12;
						break;
				
					case 11:
						uParam1->[iVar0] = 13;
						break;
				
					case 12:
						uParam1->[iVar0] = 14;
						break;
				
					case 13:
						uParam1->[iVar0] = 15;
						break;
				}
			}
			else
			{
				uParam1->[iVar0] = 0;
			}
		}
		else
		{
			uParam1->[iVar0] = VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar0) + 1;
		
			if (iVar0 == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			else if (iVar0 == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
		}
	}

	return 1;
}

bool func_56(int iParam0) // Position - 0x3A33
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
	
		default:
		
	}

	return false;
}

void func_57(var uParam0) // Position - 0x3A53
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (iVar0 = 0; iVar0 < 49; iVar0 = iVar0 + 1)
	{
		uParam0->f_9[iVar0] = 0;
	}

	for (iVar0 = 0; iVar0 < 2; iVar0 = iVar0 + 1)
	{
		uParam0->f_59[iVar0] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_58(int iParam0) // Position - 0x3B03
{
	iParam0 != 24 && iParam0 != 25;
	func_50(iParam0);
	func_46(iParam0, false);
}

int func_59(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7) // Position - 0x3B2A
{
	var uVar0;
	var uVar1;
	int iVar5;
	int iVar103;
	int iVar104;
	bool bVar105;
	var uVar106;
	int iVar110;

	if (func_2(iParam1))
	{
		iVar5.f_11 = 12;
		iVar5.f_31 = 49;
		iVar5.f_81 = 2;
		func_44(iParam1, &iVar5, iParam7);
	
		if (iVar5 == 0)
			return 1;
	
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::GET_ENTITY_MODEL(*uParam0) != iVar5;
			return 1;
		}
	
		if (iParam1 == 0 && !Global_114931.f_2370.f_539.f_4316 && Global_114931.f_9092.f_99.f_58[131])
			Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
	
		if (Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == iVar5)
		{
			STREAMING::REQUEST_MODEL(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
		
			if (STREAMING::HAS_MODEL_LOADED(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/], fParam2, fParam5, 0, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				iVar5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, iVar5.f_2);
			
				for (iVar103 = 0; iVar103 < 12; iVar103 = iVar103 + 1)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar103 + 1, !Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
				}
			
				if (Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
					VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
			
				if (func_122(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
				
					if (Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
				}
			
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
			
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
			
				if (Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
							if (Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						else
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
			
				func_112(uParam0, &(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, iVar5.f_96);
			
				if (iParam1 == 2)
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("BODHI2"))
						func_110(uParam0);
			
				if (bParam6)
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_114931.f_2370.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			
				func_109(*uParam0, iParam1);
				return 1;
			}
		}
		else if (Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == iVar5)
		{
			STREAMING::REQUEST_MODEL(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
		
			if (STREAMING::HAS_MODEL_LOADED(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/], fParam2, fParam5, 0, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				iVar5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, iVar5.f_2);
			
				for (iVar104 = 0; iVar104 < 12; iVar104 = iVar104 + 1)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar104 + 1, !Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
				}
			
				if (Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
					VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
			
				if (func_122(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
				
					if (Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
				}
			
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
			
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
			
				if (Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
							if (Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						else
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
			
				func_112(uParam0, &(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, iVar5.f_96);
			
				if (iParam1 == 2)
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("BODHI2"))
						func_110(uParam0);
			
				if (bParam6)
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_114931.f_2370.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			
				func_109(*uParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar5);
		
			if (STREAMING::HAS_MODEL_LOADED(iVar5))
			{
				bVar105 = true;
				*uParam0 = VEHICLE::CREATE_VEHICLE(iVar5, fParam2, fParam5, 1, 1, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				TEXT_LABEL_ASSIGN_STRING(&uVar106, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				iVar5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, iVar5.f_5, iVar5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, iVar5.f_7, iVar5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, iVar5.f_2);
			
				for (iVar110 = 0; iVar110 < 12; iVar110 = iVar110 + 1)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar110 + 1, !iVar5.f_11[iVar110]);
				}
			
				if (iVar5.f_24)
					VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, iVar5.f_24);
			
				if (func_122(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(iVar5.f_27));
				
					if (iVar5.f_26 >= 0 && iVar5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, iVar5.f_26);
				}
			
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, iVar5.f_84, iVar5.f_85, iVar5.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, iVar5.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, iVar5.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, iVar5.f_93, iVar5.f_94, iVar5.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(iVar5.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(iVar5.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(iVar5.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(iVar5.f_92, 31));
			
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && iVar5.f_89 >= 0)
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, iVar5.f_89);
			
				if (iVar5.f_90 > -1)
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
							if (iVar5.f_90 == 6)
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, iVar5.f_90);
						else
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, iVar5.f_90);
			
				func_112(uParam0, &(iVar5.f_31), &(iVar5.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, iVar5.f_96);
			
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("BAGGER") && !Global_114931.f_9092.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &uVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("BODHI2"))
						func_110(uParam0);
				}
				else if (iParam1 == 0 && !Global_114931.f_2370.f_539.f_4316 && Global_114931.f_9092.f_99.f_58[131] && ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("TAILGATER"))
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 6, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 14, 7, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 11, 2, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 2, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 7, 5, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 3, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 1, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 4, 3, 0);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 12, 2, 0);
					VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, 22, 1);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 23, 11, 0);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, 2);
					Global_114931.f_2370.f_539.f_4316 = 1;
					func_60(iParam1, uParam0, 0, true);
				}
			
				if (bParam6)
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			
				if (bVar105)
					func_109(*uParam0, iParam1);
			
				return 1;
			}
		}
	}

	return 0;
}

void func_60(int iParam0, var uParam1, int iParam2, bool bParam3) // Position - 0x494E
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	if (func_2(iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
	{
		if (iParam2 > Global_114931.f_2370.f_539.f_2407)
			return;
	
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_10(*uParam1, iParam0);
		}
	
		if (VEHICLE::GET_NUM_MOD_KITS(*uParam1) != 0)
			VEHICLE::SET_VEHICLE_MOD_KIT(*uParam1, 0);
	
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*uParam1);
	
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam1, &uVar1))
			Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(uVar1);
	
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*uParam1);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*uParam1);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 1);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 2);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 3);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 4);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 5);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 6);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 7);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 8);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 9);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 10);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 11);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 12);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*uParam1);
		
			if (iVar2 == 0 || iVar2 == 5)
				Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			else
				Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		else
		{
			Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
	
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*uParam1), 16);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*uParam1, &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*uParam1, &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*uParam1, &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*uParam1);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*uParam1);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*uParam1);
		Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*uParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*uParam1, &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 2))
			MISC::SET_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		else
			MISC::CLEAR_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 3))
			MISC::SET_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		else
			MISC::CLEAR_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 0))
			MISC::SET_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		else
			MISC::CLEAR_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 1))
			MISC::SET_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		else
			MISC::CLEAR_BIT(&(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
	
		Global_114931.f_2370.f_539.f_4317[iParam0] = 10;
	
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*uParam1) >= 0 && func_64(*uParam1, false, &uVar0))
		{
			func_55(uParam1, &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
		
			if (bParam3)
			{
				Global_114931.f_20125[iParam0 /*43*/].f_40 = 1;
				Global_114931.f_20125[iParam0 /*43*/] = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_114931.f_20125[iParam0 /*43*/].f_3 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_114931.f_20125[iParam0 /*43*/].f_4 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_114931.f_20125[iParam0 /*43*/].f_5 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_114931.f_20125[iParam0 /*43*/].f_6 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_114931.f_20125[iParam0 /*43*/].f_10 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_114931.f_20125[iParam0 /*43*/].f_16 = !Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_114931.f_20125[iParam0 /*43*/].f_19 = { Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_114931.f_20125[iParam0 /*43*/].f_23 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_114931.f_20125[iParam0 /*43*/].f_7 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_114931.f_20125[iParam0 /*43*/].f_8 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_114931.f_20125[iParam0 /*43*/].f_9 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_114931.f_20125[iParam0 /*43*/].f_11 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_114931.f_20125[iParam0 /*43*/].f_12 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_114931.f_20125[iParam0 /*43*/].f_13 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_114931.f_20125[iParam0 /*43*/].f_14 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_114931.f_20125[iParam0 /*43*/].f_15 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_114931.f_20125[iParam0 /*43*/].f_18 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_114931.f_20125[iParam0 /*43*/].f_17 = Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_114931.f_20125[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 11) + 1;
				Global_114931.f_20125[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 12) + 1;
				Global_114931.f_20125[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 4) + 1;
				Global_114931.f_20125[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 23) + 1;
				Global_114931.f_20125[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 14) + 1;
				Global_114931.f_20125[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 16) + 1;
				Global_114931.f_20125[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 15) + 1;
				Global_114931.f_20125[iParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*uParam1);
				Global_114931.f_20125[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*uParam1);
				Global_114931.f_20125[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 0);
				Global_114931.f_20125[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 1);
				Global_114931.f_20125[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 2);
				Global_114931.f_20125[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 3);
				Global_114931.f_20125[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*uParam1);
				Global_114931.f_20125[iParam0 /*43*/].f_31 = func_63(*uParam1);
				Global_114931.f_20125[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*uParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*uParam1, &iVar4, &uVar5, &uVar6);
			
				if (iVar4 == 0)
					iVar3 = 0;
				else if (iVar4 == 1)
					iVar3 = 1;
				else if (iVar4 == 3)
					iVar3 = 2;
				else if (iVar4 == 4)
					iVar3 = 3;
				else if (iVar4 == 5)
					iVar3 = 4;
				else
					iVar3 = -1;
			
				func_61(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, true, &(Global_114931.f_20125[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*uParam1, &iVar4, &uVar5);
			
				if (iVar4 == 0)
					iVar3 = 0;
				else if (iVar4 == 1)
					iVar3 = 1;
				else if (iVar4 == 3)
					iVar3 = 2;
				else if (iVar4 == 4)
					iVar3 = 3;
				else if (iVar4 == 5)
					iVar3 = 4;
				else
					iVar3 = -1;
			
				func_61(Global_114931.f_2370.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, false, &(Global_114931.f_20125[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_61(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4) // Position - 0x5562
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;

	for (iVar0 = 0; func_62(iVar0, &uVar2, &iVar1, &iVar6, &iVar7); iVar0 = iVar0 + 1)
	{
		if (iParam0 == iVar6 && !bParam3 || iParam1 == iVar7 && iParam2 == iVar1 || iParam2 == -1 || iParam2 == 255)
		{
			*uParam4 = iVar0;
			return 1;
		}
	}

	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_62(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4) // Position - 0x55D5
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR BLACK_STEEL" /* GXT: Brushed Black Steel */, 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /* GXT: Gold */, 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /* GXT: Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHROME" /* GXT: Chrome */, 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /* GXT: Cream */, 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /* GXT: Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /* GXT: Gold */, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /* GXT: Cream */, 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /* GXT: Black */, 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GREY" /* GXT: Gray */, 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_GREY" /* GXT: Light Gray */, 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /* GXT: Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "Purple" /* GXT: Schafter Purple */, 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /* GXT: Red */, 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_RED" /* GXT: Dark Red */, 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GREEN" /* GXT: Green */, 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOR" /* GXT: Forest Green */, 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOIL" /* GXT: Foliage Green */, 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_OD" /* GXT: Olive Drab */, 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DIRT" /* GXT: Dark Earth */, 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DESERT" /* GXT: Desert Tan */, 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_STEEL" /* GXT: Brushed Steel */, 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_ALUMINIUM" /* GXT: Brushed Aluminum */, 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_P" /* GXT: Pure Gold */, 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_S" /* GXT: Brushed Gold */, 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}

	return *uParam2 != -1;
}

float func_63(var uParam0) // Position - 0x6AC7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0) && VEHICLE::GET_VEHICLE_MOD_KIT(uParam0) >= 0)
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(uParam0) == 3)
			iVar5 = iVar0;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(uParam0) == 1)
			iVar5 = iVar1;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(uParam0) == 2)
			iVar5 = iVar2;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(uParam0) == 0)
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uParam0)))
				iVar5 = iVar3;
			else
				iVar5 = iVar4;

	fVar6 = BUILTIN::TO_FLOAT(iVar5) / BUILTIN::TO_FLOAT(iVar4);
	return fVar6;
}

bool func_64(int iParam0, bool bParam1, var uParam2) // Position - 0x6B77
{
	int iVar0;
	bool bVar1;

	*uParam2 = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
		return false;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);

	if (!func_107(iVar0, bParam1, uParam2) && !func_106(PLAYER::PLAYER_ID()) && !func_79(iParam0))
		return false;

	if (func_106(PLAYER::PLAYER_ID()))
		if (func_76(iVar0))
			return true;
		else
			return false;

	bVar1 = false;

	if (func_75(PLAYER::PLAYER_ID()) && VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		bVar1 = true;

	if (VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_72(iParam0) && !bVar1 && !(func_71(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_70(PLAYER::PLAYER_ID())) && !(func_69(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_65(PLAYER::PLAYER_ID())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("CERBERUS"):
			case joaat("CERBERUS2"):
			case joaat("CERBERUS3"):
			case joaat("MONSTER3"):
			case joaat("MONSTER4"):
			case joaat("MONSTER5"):
				*uParam2 = 16;
				break;
		
			default:
				*uParam2 = 2;
				break;
		}
	
		return false;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_25(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("SENTINEL2") && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return false;
		}
	}

	return true;
}

bool func_65(bool bParam0) // Position - 0x6D02
{
	if (bParam0 != func_68())
		if (func_67(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_66(Global_2658294[bParam0 /*468*/].f_325.f_8) == 32;

	return false;
}

int func_66(bool bParam0) // Position - 0x6D49
{
	switch (bParam0)
	{
		case false:
		case true:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 180:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 181:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	
		case 174:
		case 175:
		case 176:
			return 34;
	
		case 177:
		case 178:
		case 179:
			return 35;
	}

	return -1;
}

bool func_67(bool bParam0, bool bParam1, bool bParam2) // Position - 0x72B2
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
					return false;
		
			if (bParam2)
				if (bVar0 == Global_2673274.f_3)
					return Global_2673274.f_2;
				else if (Global_2658294[bVar0 /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

bool func_68() // Position - 0x7312
{
	return -1;
}

bool func_69(int iParam0) // Position - 0x731B
{
	if (iParam0 == joaat("TERBYTE"))
		return true;

	return false;
}

bool func_70(bool bParam0) // Position - 0x7332
{
	if (bParam0 != func_68())
		if (func_67(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_66(Global_2658294[bParam0 /*468*/].f_325.f_8) == 11;

	return false;
}

bool func_71(int iParam0) // Position - 0x7379
{
	if (iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2") || iParam0 == joaat("SPEEDO4") || iParam0 == joaat("TERBYTE"))
		return true;

	return false;
}

bool func_72(int iParam0) // Position - 0x73BB
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HALFTRACK"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("BRUISER"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			return true;
	
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (func_74(PLAYER::PLAYER_ID()))
				return true;
			break;
	
		case joaat("MINITANK"):
		case joaat("BURRITO2"):
			return true;
	
		case joaat("BRICKADE2"):
			if (func_73(PLAYER::PLAYER_ID()))
				return true;
			break;
	
		case joaat("JOURNEY2"):
			return true;
	}

	return false;
}

bool func_73(bool bParam0) // Position - 0x7483
{
	if (bParam0 != func_68())
		if (func_67(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_66(Global_2658294[bParam0 /*468*/].f_325.f_8) == 26;

	return false;
}

bool func_74(bool bParam0) // Position - 0x74CA
{
	if (bParam0 != func_68())
		if (func_67(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_66(Global_2658294[bParam0 /*468*/].f_325.f_8) == 13;

	return false;
}

bool func_75(int iParam0) // Position - 0x7511
{
	if (iParam0 != func_68())
		if (func_67(iParam0, true, true))
			if (Global_2658294[iParam0 /*468*/].f_325.f_8 != -1)
				return func_66(Global_2658294[iParam0 /*468*/].f_325.f_8) == 7;

	return false;
}

bool func_76(int iParam0) // Position - 0x7557
{
	bool bVar0;

	if (iParam0 == joaat("OPPRESSOR2"))
		return false;

	bVar0 = false;

	if (iParam0 == joaat("RIOT2") || iParam0 == joaat("CHERNOBOG") || iParam0 == joaat("KHANJALI"))
		if (!*Global_262145.f_33921 /* Tunable: -1259888294 */)
			bVar0 = true;

	if (!func_78(PLAYER::PLAYER_ID()) && iParam0 != joaat("THRUSTER") && iParam0 != joaat("AVENGER") && iParam0 != func_77(true) && !bVar0)
		return false;

	return true;
}

int func_77(bool bParam0) // Position - 0x75E8
{
	if (bParam0)
		return joaat("AVENGER3");

	return joaat("AVENGER");
}

bool func_78(bool bParam0) // Position - 0x7602
{
	if (bParam0 != func_68())
		return IS_BIT_SET(Global_1845299[bParam0 /*883*/].f_260.f_318, 2);

	return false;
}

bool func_79(int iParam0) // Position - 0x7628
{
	if (func_105(PLAYER::PLAYER_ID()) || func_104(PLAYER::PLAYER_ID()))
		if (func_80(iParam0))
			return true;

	return false;
}

bool func_80(int iParam0) // Position - 0x7657
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		return false;

	if (func_96(iParam0))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
		return false;

	if (func_84(iParam0, false))
		return true;

	if (func_83(PLAYER::PLAYER_ID()) && !func_76(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("OPENWHEEL1")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("OPENWHEEL2")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FORMULA")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FORMULA2")))
		return false;

	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("OPPRESSOR2")))
		return false;

	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("THRUSTER")))
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Thruster", 3))
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Thruster") && !Global_2697509)
				return false;

	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			if (!func_81(iParam0))
				return true;

	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Thruster"))
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Thruster") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			if (!func_81(iParam0))
				return true;

	return false;
}

bool func_81(int iParam0) // Position - 0x77BF
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	
		if (VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_72(iParam0) || func_82(iVar0))
			return true;
	
		switch (iVar0)
		{
			case joaat("SLAMTRUCK"):
			case joaat("PATRIOT2"):
			case joaat("MULE4"):
			case joaat("POUNDER2"):
			case joaat("SPEEDO4"):
			case joaat("SPEEDO5"):
				return true;
		}
	}

	return false;
}

bool func_82(int iParam0) // Position - 0x783C
{
	switch (iParam0)
	{
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("MULE3"):
		case joaat("BRICKADE"):
		case joaat("DUNE"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("BOXVILLE4"):
		case joaat("BOXVILLE5"):
		case joaat("BOXVILLE6"):
		case joaat("BENSON2"):
			return true;
	
		default:
		
	}

	return false;
}

bool func_83(bool bParam0) // Position - 0x7898
{
	if (bParam0 == func_68())
		return false;

	if (func_106(bParam0) && Global_2658294[bParam0 /*468*/].f_325.f_11 == bParam0)
		return true;

	return false;
}

bool func_84(int iParam0, bool bParam1) // Position - 0x78D1
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_86(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
				if (Global_2733138.f_307 == iParam0)
					return true;
				else if (func_85(iParam0) != -1 && !bParam1)
					return true;
			break;
	}

	return false;
}

int func_85(int iParam0) // Position - 0x792C
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		for (iVar0 = 0; iVar0 < 32; iVar0 = iVar0 + 1)
		{
			if (Global_2673274.f_231[iVar0] == iParam0)
				return iVar0;
		}
	}

	return -1;
}

bool func_86(int iParam0, int iParam1) // Position - 0x7965
{
	if (iParam1 == 0)
		if (func_95(iParam0, 0))
			return true;

	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_94();
	
		case joaat("SABREGT"):
			if (Global_262145.f_14794 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
				return func_93();
			break;
	
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_262145.f_14795 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
				return func_93();
			break;
	
		case joaat("VIRGO3"):
			if (Global_262145.f_14793 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
				return func_93();
			break;
	
		case joaat("MINIVAN"):
			if (Global_262145.f_14796 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
				return func_93();
			break;
	
		case joaat("SLAMVAN"):
			if (Global_262145.f_14798 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
				return func_93();
			break;
	
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_92();
	
		case joaat("COMET2"):
			if (Global_262145.f_19041 /* Tunable: ENABLE_IE_COMET3 */)
				return func_91();
			break;
	
		case joaat("DIABLOUS"):
			if (Global_262145.f_19043 /* Tunable: ENABLE_IE_DIABLOUS2 */)
				return func_91();
			break;
	
		case joaat("FCR"):
			if (Global_262145.f_19047 /* Tunable: ENABLE_IE_FCR2 */)
				return func_91();
			break;
	
		case joaat("ELEGY2"):
			if (Global_262145.f_19044 /* Tunable: ENABLE_IE_ELEGY */)
				return func_91();
			break;
	
		case joaat("NERO"):
			if (Global_262145.f_19051 /* Tunable: ENABLE_IE_NERO2 */)
				return func_91();
			break;
	
		case joaat("ITALIGTB"):
			if (Global_262145.f_19049 /* Tunable: ENABLE_IE_ITALIGTB2 */)
				return func_91();
			break;
	
		case joaat("SPECTER"):
			if (Global_262145.f_19054 /* Tunable: ENABLE_IE_SPECTER2 */)
				return func_91();
			break;
	
		case joaat("TECHNICAL"):
			if (Global_262145.f_20927 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
				return func_90();
			break;
	
		case joaat("INSURGENT"):
			if (Global_262145.f_20928 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
				return func_90();
			break;
	
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_89();
	
		case joaat("GLENDALE"):
			if (func_89() || func_88())
				return true;
			break;
	
		case joaat("IMPALER"):
			return func_89();
	
		case joaat("ISSI3"):
			return func_89();
	
		case joaat("GARGOYLE"):
			return func_89();
	
		case joaat("DOMINATOR"):
			return func_89();
	
		case joaat("DOMINATOR2"):
			return func_89();
	
		case joaat("IMPERATOR"):
			return func_89();
	
		case joaat("IMPERATOR2"):
			return func_89();
	
		case joaat("IMPERATOR3"):
			return func_89();
	
		case joaat("DEATHBIKE"):
			return func_89();
	
		case joaat("DEATHBIKE2"):
			return func_89();
	
		case joaat("DEATHBIKE3"):
			return func_89();
	
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_89();
	
		case joaat("YOUGA2"):
			if (Global_262145.f_28959 /* Tunable: ENABLE_VEH_YOUGA3 */)
				return func_88();
			break;
	
		case joaat("GAUNTLET3"):
			if (Global_262145.f_29288 /* Tunable: ENABLE_VEH_GAUNTLET5 */)
				return func_88();
			break;
	
		case joaat("MANANA"):
			if (Global_262145.f_28958 /* Tunable: ENABLE_VEH_MANANA2 */)
				return func_88();
			break;
	
		case joaat("PEYOTE"):
			if (Global_262145.f_29287 /* Tunable: ENABLE_VEH_PEYOTE3 */)
				return func_88();
			break;
	
		case joaat("YOSEMITE"):
			if (Global_262145.f_29286 /* Tunable: ENABLE_VEH_YOSEMITE3 */)
				return func_88();
			break;
	}

	switch (iParam0)
	{
		case joaat("TENF"):
			if (*Global_262145.f_33019 /* Tunable: ENABLE_VEHICLE_TENF2 */)
				return func_87();
			break;
	
		case joaat("WEEVIL"):
			if (*Global_262145.f_33018 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */)
				return func_87();
			break;
	
		case joaat("BRIOSO2"):
			if (*Global_262145.f_33011 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */)
				return func_87();
			break;
	
		case joaat("SENTINEL3"):
			if (*Global_262145.f_33020 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */)
				return func_87();
			break;
	}

	return false;
}

bool func_87() // Position - 0x7DE4
{
	return DLC::IS_DLC_PRESENT(joaat("MPSUM2"));
}

bool func_88() // Position - 0x7DF5
{
	return DLC::IS_DLC_PRESENT(joaat("MPSUM"));
}

bool func_89() // Position - 0x7E06
{
	return DLC::IS_DLC_PRESENT(joaat("MPCHRISTMAS2018"));
}

bool func_90() // Position - 0x7E17
{
	return DLC::IS_DLC_PRESENT(joaat("MPGUNRUNNING"));
}

bool func_91() // Position - 0x7E28
{
	return DLC::IS_DLC_PRESENT(joaat("MPIMPORTEXPORT"));
}

bool func_92() // Position - 0x7E39
{
	return DLC::IS_DLC_PRESENT(joaat("MPJANUARY2016"));
}

bool func_93() // Position - 0x7E4A
{
	return DLC::IS_DLC_PRESENT(joaat("MPLOWRIDER2"));
}

bool func_94() // Position - 0x7E5B
{
	return DLC::IS_DLC_PRESENT(joaat("MPLOWRIDER"));
}

bool func_95(int iParam0, int iParam1) // Position - 0x7E6C
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
	
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("SABREGT2"):
			if (!Global_262145.f_14794 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
				return false;
			else
				return true;
			break;
	
		case joaat("TORNADO5"):
			if (!Global_262145.f_14795 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
				return false;
			else
				return true;
			break;
	
		case joaat("VIRGO2"):
			if (!Global_262145.f_14793 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
				return false;
			else
				return true;
			break;
	
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14796 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
				return false;
			else
				return true;
			break;
	
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14798 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
				return false;
			else
				return true;
			break;
	
		case joaat("FACTION3"):
			if (!Global_262145.f_14797 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
				return false;
			else
				return true;
			break;
	
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("COMET3"):
			if (Global_262145.f_19041 /* Tunable: ENABLE_IE_COMET3 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("DIABLOUS2"):
			if (Global_262145.f_19043 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("FCR2"):
			if (Global_262145.f_19047 /* Tunable: ENABLE_IE_FCR2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("ELEGY"):
			if (Global_262145.f_19044 /* Tunable: ENABLE_IE_ELEGY */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("NERO2"):
			if (Global_262145.f_19051 /* Tunable: ENABLE_IE_NERO2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("ITALIGTB2"):
			if (Global_262145.f_19049 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("SPECTER2"):
			if (Global_262145.f_19054 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20927 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("INSURGENT3"):
			if (Global_262145.f_20928 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("YOUGA3"):
		case joaat("GAUNTLET5"):
		case joaat("YOSEMITE3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("MANANA2"):
		case joaat("PEYOTE3"):
		case joaat("GLENDALE2"):
			return true;
	}

	return false;
}

bool func_96(int iParam0) // Position - 0x8254
{
	if (PLAYER::PLAYER_ID() != func_68())
	{
		if (func_102() || func_101(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_100(PLAYER::PLAYER_ID(), true, false) && Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_260.f_39 > false || IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_260.f_37, 14) || IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_260.f_37, 11))
			return false;
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
					if (func_98() != -1 && func_98() < 607)
						if (!func_97(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) != Global_1583772[func_98() /*143*/].f_66)
							return true;
						else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("CADDY3"))
							return true;
					else
						return true;
	}

	return false;
}

bool func_97(int iParam0) // Position - 0x8362
{
	if (Global_2733138.f_301 == iParam0)
		return true;

	return false;
}

bool func_98() // Position - 0x837B
{
	return Global_2359296[func_99() /*5574*/].f_681.f_2;
}

int func_99() // Position - 0x8393
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

bool func_100(bool bParam0, bool bParam1, bool bParam2) // Position - 0x83A0
{
	if (bParam0 == func_68())
		return false;

	if (IS_BIT_SET(Global_1845299[bParam0 /*883*/].f_260.f_37, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845299[bParam0 /*883*/].f_260.f_37, 1))
			return true;

	if (bParam2)
		if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
			return true;

	return false;
}

bool func_101(bool bParam0) // Position - 0x8404
{
	if (bParam0 != func_68() && func_67(bParam0, true, true))
		return IS_BIT_SET(Global_2658294[bParam0 /*468*/].f_325, 3);

	return false;
}

bool func_102() // Position - 0x8435
{
	return func_103() != -1;
}

bool func_103() // Position - 0x8443
{
	return Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_325.f_8;
}

bool func_104(bool bParam0) // Position - 0x845B
{
	if (bParam0 != func_68())
		if (func_67(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1 && Global_2658294[bParam0 /*468*/].f_325.f_11 != func_68())
				return func_66(Global_2658294[bParam0 /*468*/].f_325.f_8) == 5;

	return false;
}

bool func_105(bool bParam0) // Position - 0x84BA
{
	if (bParam0 != func_68())
		if (func_67(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1 && Global_2658294[bParam0 /*468*/].f_325.f_11 != func_68())
				return func_66(Global_2658294[bParam0 /*468*/].f_325.f_8) == 8;

	return false;
}

bool func_106(bool bParam0) // Position - 0x851A
{
	if (bParam0 != func_68())
		if (func_67(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_66(Global_2658294[bParam0 /*468*/].f_325.f_8) == 9;

	return false;
}

bool func_107(int iParam0, bool bParam1, var uParam2) // Position - 0x8561
{
	bool bVar0;

	if (!bParam1)
	{
		switch (iParam0)
		{
			case joaat("POLICE"):
			case joaat("POLICEOLD1"):
			case joaat("POLICEOLD2"):
			case joaat("POLICE2"):
			case joaat("POLICE3"):
			case joaat("FBI"):
			case joaat("FBI2"):
			case joaat("POLMAV"):
			case joaat("POLICEB"):
			case joaat("POLICET"):
			case joaat("RIOT"):
			case joaat("SHERIFF"):
			case joaat("SHERIFF2"):
				*uParam2 = 1;
				return false;
		}
	}

	if (iParam0 == joaat("AMBULANCE") || iParam0 == joaat("FIRETRUK") || iParam0 == joaat("TAXI") || iParam0 == joaat("LGUARD") || iParam0 == joaat("RIPLEY") || iParam0 == joaat("DILETTANTE2") || iParam0 == joaat("AIRBUS") || iParam0 == joaat("AIRTUG"))
	{
		*uParam2 = 2;
		return false;
	}

	if (iParam0 == joaat("BURRITO") || iParam0 == joaat("RUMPO2") || iParam0 == joaat("SPEEDO") || iParam0 == joaat("SPEEDO2"))
	{
		*uParam2 = 2;
		return false;
	}

	if (iParam0 == joaat("SCORCHER") || iParam0 == joaat("BMX") || iParam0 == joaat("CRUISER") || iParam0 == joaat("FIXTER"))
	{
		*uParam2 = 2;
		return false;
	}

	if (iParam0 == joaat("CADDY") || iParam0 == joaat("FORKLIFT") || iParam0 == joaat("CADDY2") || iParam0 == joaat("CRUSADER") || iParam0 == joaat("TRIBIKE") || iParam0 == joaat("TRIBIKE2") || iParam0 == joaat("TRIBIKE3") || iParam0 == joaat("TRACTOR") || iParam0 == joaat("TRACTOR2") || iParam0 == joaat("MOWER") || iParam0 == joaat("TORNADO4") || iParam0 == joaat("DOCKTUG") || iParam0 == joaat("STRETCH") || iParam0 == joaat("BISON2") || iParam0 == joaat("BENSON") || iParam0 == joaat("POUNDER") || iParam0 == joaat("SUBMERSIBLE") || iParam0 == joaat("EMPEROR3") || iParam0 == joaat("DUNE2") || iParam0 == joaat("INDUCTOR") || iParam0 == joaat("INDUCTOR2"))
	{
		*uParam2 = 2;
		return false;
	}

	bVar0 = false;

	if (func_75(PLAYER::PLAYER_ID()) && VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
		bVar0 = true;

	if (!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) && iParam0 != joaat("BLAZER") && iParam0 != joaat("BLAZER2") && iParam0 != joaat("BLAZER3") && iParam0 != joaat("BLAZER4") && iParam0 != joaat("BLAZER5") && iParam0 != joaat("CHIMERA") && iParam0 != joaat("TRAILERLARGE") && iParam0 != joaat("TRAILERSMALL2") && iParam0 != joaat("RROCKET") && iParam0 != joaat("STRYDER") && iParam0 != joaat("VERUS") && !bVar0)
	{
		*uParam2 = 2;
		return false;
	}

	if (iParam0 == joaat("MONSTER"))
	{
		*uParam2 = 2;
		return false;
	}

	if (iParam0 == joaat("INSURGENT") || iParam0 == joaat("TECHNICAL") || iParam0 == joaat("LIMO2"))
	{
		*uParam2 = 2;
		return false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_108(iParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (iParam0 == joaat("INSURGENT") || iParam0 == joaat("INSURGENT2"))
			*uParam2 = 2;

	return true;
}

bool func_108(int iParam0) // Position - 0x8944
{
	switch (iParam0)
	{
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("FORKLIFT"):
		case joaat("TOWTRUCK3"):
		case joaat("TOWTRUCK4"):
			return true;
	}

	return false;
}

void func_109(int iParam0, int iParam1) // Position - 0x8979
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_99760[iVar0]))
		{
			Global_99760[iVar0] = iParam0;
			Global_99770[iVar0] = iParam1;
			Global_99780[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
		
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_99780[iVar0]))
				Global_99808[iParam1 /*3*/][0] = -1;
			else
				Global_99808[iParam1 /*3*/][1] = -1;
		
			iVar0 = 9;
		}
	
		iVar0 == 8;
	}
}

void func_110(var uParam0) // Position - 0x89FB
{
	if (!func_111(*uParam0))
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_114931.f_9092.f_99.f_58[119]);
}

bool func_111(var uParam0) // Position - 0x8A26
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0, 5);
}

int func_112(var uParam0, var uParam1, var uParam2) // Position - 0x8A35
{
	int iVar0;
	int iVar1;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (iVar0 = 0; iVar0 < *uParam1; iVar0 = iVar0 + 1)
	{
		iVar1 = iVar0;
	
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if (uParam1->[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, 1);
			
				if (uParam1->[iVar0] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[iVar0] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, 0);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) != uParam1->[iVar0] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
		
			if (uParam1->[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] - 1, uParam2->[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] - 1, uParam2->[1] > 0);
				}
				else if (func_120(*uParam0, iVar1, uParam1->[iVar0] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, uParam1->[iVar0] - 1, 0);
				}
			}
		}
	}

	if (func_118(*uParam0))
		if (uParam1->[11] > 0)
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 11, uParam1->[11] - 1, 0);

	if (func_117(ENTITY::GET_ENTITY_MODEL(*uParam0)) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_115(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_115(*uParam0, uParam1->[38] - 1), 0);

	func_114(uParam0);

	if (func_113(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
	}

	return 1;
}

bool func_113(var uParam0) // Position - 0x8C33
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0) && VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(uParam0, 0);
	
		for (iVar0 = 0; iVar0 < 49; iVar0 = iVar0 + 1)
		{
			iVar1 = iVar0;
		
			if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(uParam0, iVar1) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&uVar3, VEHICLE::GET_MOD_TEXT_LABEL(uParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(uParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&uVar3);
			
				if (iVar2 != 0)
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */) || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
						return true;
			}
		}
	}

	return false;
}

void func_114(var uParam0) // Position - 0x8D0F
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("STARLING"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, 0);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case joaat("SLAMTRUCK"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, 0);
			break;
	
		default:
			if (func_118(*uParam0))
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, 18, 1);
			break;
	}
}

int func_115(var uParam0, int iParam1) // Position - 0x8D7A
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(uParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case joaat("FACTION3"):
				return 3;
		}
	
		iVar0 = func_116(uParam0, 38) + 1;
		iVar1 = func_116(uParam0, 24) + 1;
		fVar2 = BUILTIN::TO_FLOAT(iParam1 + 1) / BUILTIN::TO_FLOAT(iVar0);
		iVar3 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar1) * fVar2) - 1;
	
		if (iVar3 < 0)
			iVar3 = 0;
	
		if (iVar3 >= iVar0)
			iVar3 = iVar0 - 1;
	
		return iVar3;
	}

	return 0;
}

bool func_116(var uParam0, int iParam1) // Position - 0x8E63
{
	bool bVar0;

	if (STREAMING::IS_MODEL_VALID(Global_153827) && VEHICLE::IS_VEHICLE_MODEL(uParam0, Global_153827) && Global_153828 == iParam1)
		return Global_153829;

	for (bVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(uParam0, iParam1) - 1; bVar0 >= 0 && func_120(uParam0, iParam1, bVar0); bVar0 = bVar0 - 1)
	{
	}

	return bVar0;
}

bool func_117(int iParam0) // Position - 0x8EC5
{
	if (func_95(iParam0, 1))
		return true;

	switch (iParam0)
	{
		case joaat("POLFACTION2"):
			return true;
	}

	return false;
}

bool func_118(var uParam0) // Position - 0x8EF0
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		return false;

	uVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);

	if (func_119(uVar0))
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 36) != -1)
			return true;

	return false;
}

bool func_119(int iParam0) // Position - 0x8F36
{
	switch (iParam0)
	{
		case joaat("BRIOSO"):
		case joaat("SENTINEL"):
		case joaat("HAKUCHOU2"):
		case joaat("TURISMO2"):
		case joaat("DEVESTE"):
		case joaat("BANSHEE"):
		case joaat("ARBITERGT"):
		case joaat("ASTRON2"):
		case joaat("CYCLONE2"):
		case joaat("IGNUS2"):
		case joaat("S95"):
		case joaat("VIGERO2"):
		case joaat("FELTZER3"):
		case joaat("ENTITY3"):
		case joaat("ISSI8"):
		case joaat("BUFFALO5"):
		case joaat("MONSTROCITI"):
		case joaat("STINGERTT"):
		case joaat("COUREUR"):
		case joaat("VIGERO3"):
		case joaat("VIVANITE"):
		case joaat("EUROSX32"):
		case joaat("NIOBE"):
		case joaat("BANSHEE3"):
		case joaat("FIREBOLT"):
		case joaat("TAMPA4"):
		case joaat("WOODLANDER"):
		case joaat("FMJ2"):
		case joaat("ASTRALE"):
			return true;
	
		default:
		
	}

	return false;
}

bool func_120(var uParam0, int iParam1, int iParam2) // Position - 0x8FF8
{
	if (!func_121() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2))
		return true;

	return false;
}

bool func_121() // Position - 0x901C
{
	return true;
}

bool func_122(var uParam0, var uParam1) // Position - 0x9029
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_114931.f_20125.f_261)
	{
		*uParam0 = { Global_114931.f_20125.f_267 };
		*uParam1 = Global_114931.f_20125.f_271;
		return true;
	}

	return false;
}

int func_123(int iParam0, int iParam1) // Position - 0x906A
{
	if (func_2(iParam0))
		return STREAMING::HAS_MODEL_LOADED(func_43(iParam0, iParam1));
	else
		iParam0 != 145;

	return 0;
}

int func_124(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x9095
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	var uVar28;
	var uVar38;
	var uVar55;
	var uVar69;

	if (PED::IS_PED_INJURED(uParam0) || bParam2 == -99)
		return 0;

	Global_80086 = Global_80086 + 1;
	bVar5 = -99;
	bVar6 = -99;
	bVar7 = -99;
	bVar8 = -99;
	bVar9 = -99;
	bVar10 = ENTITY::GET_ENTITY_MODEL(uParam0);

	if (iParam5 == 0)
	{
		Global_80088[1 /*14*/] = { func_178(bVar10, iParam1, bParam2, -1) };
	
		if (!func_177(iParam3))
		{
			Global_80086 = Global_80086 - 1;
			return 0;
		}
	
		func_168(iParam1);
	}

	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (bVar10 == joaat("PLAYER_ONE"))
			{
				bVar5 = func_166(uParam0, 8);
			
				if (bVar5 != 9)
					bVar5 = -99;
			}
		
			bVar6 = func_166(uParam0, 9);
		
			if (bVar10 == joaat("PLAYER_ZERO"))
			{
				if (bVar6 >= 9 && bVar6 <= 14)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (bVar10 == joaat("PLAYER_ONE"))
			{
				if (bVar6 >= 5 && bVar6 <= 10)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
			else if (bVar10 == joaat("PLAYER_TWO"))
			{
				if (bVar6 >= 9 && bVar6 <= 14 || bVar6 >= 15 && bVar6 <= 16)
				{
				}
				else
				{
					bVar6 = -99;
				}
			}
		
			bVar7 = func_165(uParam0, 1);
		
			if (!func_164(bVar10, 14, bVar7, -1))
				bVar7 = -99;
		
			bVar8 = func_165(uParam0, 0);
		
			if (!func_163(bVar10, 14, bVar8, -1) && !func_162(bVar10, 14, bVar8, -1))
				bVar8 = -99;
		
			if (bVar10 == joaat("PLAYER_ONE"))
				bVar9 = func_165(uParam0, 2);
		}
	
		PED::CLEAR_ALL_PED_PROPS(uParam0, 1);
		uVar11 = 15;
	
		if (iParam5 == 1)
			uVar11 = { Global_80131 };
		else
			uVar11 = { func_158(bVar10, bParam2) };
	
		for (iVar0 = 0; iVar0 <= 14; iVar0 = iVar0 + 1)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_80088[1 /*14*/] = { func_178(bVar10, iVar0, uVar11[iVar0], -1) };
			
				if (IS_BIT_SET(Global_80088[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
					
						if (iParam5 == 1)
							uVar28 = { Global_80148 };
						else
							uVar28 = { func_155(bVar10, uVar11[iVar0]) };
					
						for (iVar1 = 0; iVar1 <= 8; iVar1 = iVar1 + 1)
						{
							Global_80088[1 /*14*/] = { func_178(bVar10, 14, uVar28[iVar1], -1) };
							func_145(uParam0, Global_80088[1 /*14*/].f_12, Global_80088[1 /*14*/].f_3, Global_80088[1 /*14*/].f_4);
							func_168(14);
						
							if (Global_80086 == 1)
							{
								for (iVar2 = 0; iVar2 < 15; iVar2 = iVar2 + 1)
								{
									bVar3 = func_137(uParam0, bVar10, 14, uVar28[iVar1], iVar2, 0);
								
									if (bVar3 != -99)
										func_124(uParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
							}
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if (bVar10 == joaat("PLAYER_ONE") && iVar0 == 2 && uVar11[iVar0] == 20)
							func_136(bVar10, 2, 20, &bVar4);
					
						if (iParam4 == -1)
							PED::SET_PED_COMPONENT_VARIATION(uParam0, func_135(iVar0), Global_80088[1 /*14*/].f_3, Global_80088[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(uParam0, func_135(iVar0)));
						else
							PED::SET_PED_COMPONENT_VARIATION(uParam0, func_135(iVar0), Global_80088[1 /*14*/].f_3, Global_80088[1 /*14*/].f_4, iParam4);
					
						func_168(iVar0);
					
						if (Global_80086 == 1)
						{
							for (iVar2 = 0; iVar2 < 15; iVar2 = iVar2 + 1)
							{
								bVar3 = func_137(uParam0, bVar10, iVar0, uVar11[iVar0], iVar2, 0);
							
								if (bVar3 != -99)
									func_124(uParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_80088[1 /*14*/] = { func_178(bVar10, iVar0, func_134(uParam0, iVar0, -1), -1) };
			
				if (IS_BIT_SET(Global_80088[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (bVar10 == joaat("PLAYER_ONE"))
							if (func_133(uParam0, bVar10, &bVar4, 1))
								func_124(uParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					else
					{
						uVar38 = { func_158(bVar10, 0) };
						func_124(uParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	
		if (iParam7 == 1)
		{
			uVar55 = { func_178(bVar10, 8, bVar5, -1) };
		
			if (bVar5 != -99)
				if (func_131(bVar10, bParam2, 8, bVar5, &uVar11, &uVar55))
					func_124(uParam0, 8, bVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			uVar55 = { func_178(bVar10, 9, bVar6, -1) };
		
			if (bVar6 != -99)
				if (func_131(bVar10, bParam2, 9, bVar6, &uVar11, &uVar55))
					func_124(uParam0, 9, bVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			uVar55 = { func_178(bVar10, 14, bVar7, -1) };
		
			if (bVar7 != -99)
				if (func_131(bVar10, bParam2, 14, bVar7, &uVar11, &uVar55))
					func_124(uParam0, 14, bVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			uVar55 = { func_178(bVar10, 14, bVar8, -1) };
		
			if (bVar8 != -99)
				if (func_131(bVar10, bParam2, 14, bVar8, &uVar11, &uVar55))
					func_124(uParam0, 14, bVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			uVar55 = { func_178(bVar10, 14, bVar9, -1) };
		
			if (bVar9 != -99)
				if (func_131(bVar10, bParam2, 14, bVar9, &uVar11, &uVar55))
					func_124(uParam0, 14, bVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_155(bVar10, bParam2) };
	
		for (iVar1 = 0; iVar1 <= 8; iVar1 = iVar1 + 1)
		{
			Global_80088[1 /*14*/] = { func_178(bVar10, 14, uVar69[iVar1], -1) };
			func_145(uParam0, Global_80088[1 /*14*/].f_12, Global_80088[1 /*14*/].f_3, Global_80088[1 /*14*/].f_4);
			func_168(14);
		
			if (Global_80086 == 1)
			{
				for (iVar2 = 0; iVar2 < 15; iVar2 = iVar2 + 1)
				{
					bVar3 = func_137(uParam0, bVar10, 14, uVar69[iVar1], iVar2, 0);
				
					if (bVar3 != -99)
						func_124(uParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 14)
	{
		func_145(uParam0, Global_80088[1 /*14*/].f_12, Global_80088[1 /*14*/].f_3, Global_80088[1 /*14*/].f_4);
		func_168(iParam1);
	
		if (Global_80086 == 1)
		{
			for (iVar2 = 0; iVar2 < 15; iVar2 = iVar2 + 1)
			{
				bVar3 = func_137(uParam0, bVar10, iParam1, bParam2, iVar2, 0);
			
				if (bVar3 != -99)
					func_124(uParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	else
	{
		if (iParam4 == -1)
			PED::SET_PED_COMPONENT_VARIATION(uParam0, func_135(iParam1), Global_80088[1 /*14*/].f_3, Global_80088[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(uParam0, func_135(iParam1)));
		else
			PED::SET_PED_COMPONENT_VARIATION(uParam0, func_135(iParam1), Global_80088[1 /*14*/].f_3, Global_80088[1 /*14*/].f_4, iParam4);
	
		if (Global_80086 == 1)
		{
			for (iVar2 = 0; iVar2 < 15; iVar2 = iVar2 + 1)
			{
				bVar3 = func_137(uParam0, bVar10, iParam1, bParam2, iVar2, 0);
			
				if (bVar3 != -99)
					func_124(uParam0, iVar2, bVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	
		if (iParam6 == 0)
			func_128(bVar10, iParam1, bParam2);
	}

	if (Global_80086 == 1)
	{
		if (func_133(uParam0, bVar10, &bVar4, 0))
			func_124(uParam0, 2, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	
		if (func_125(uParam0, bVar10, &bVar4))
			func_124(uParam0, 1, bVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}

	Global_80086 = Global_80086 - 1;
	return 1;
}

bool func_125(var uParam0, bool bParam1, var uParam2) // Position - 0x98A6
{
	int iVar0;

	iVar0 = func_127(bParam1);

	if (iVar0 >= 3 || iVar0 < 0)
		return false;

	if (Global_114931.f_2370.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_126(uParam0, Global_114931.f_2370.f_539[iVar0 /*65*/].f_64, Global_114931.f_2370.f_539[iVar0 /*65*/].f_63))
		{
			*uParam2 = Global_114931.f_2370.f_539[iVar0 /*65*/].f_62;
			Global_114931.f_2370.f_539[iVar0 /*65*/].f_63 = -99;
			Global_114931.f_2370.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}

	return false;
}

bool func_126(var uParam0, int iParam1, bool bParam2) // Position - 0x9947
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (PED::IS_PED_INJURED(uParam0))
		return false;

	bVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	Global_80088[1 /*14*/] = { func_178(bVar0, iParam1, bParam2, -1) };

	if (!IS_BIT_SET(Global_80088[1 /*14*/].f_6, 0))
		return false;

	if (iParam1 == 12)
	{
		uVar5 = { func_158(bVar0, bParam2) };
	
		for (iVar2 = 0; iVar2 <= 14; iVar2 = iVar2 + 1)
		{
			if (uVar5[iVar2] != -99 && iVar2 != 12 && iVar2 != 14)
			{
				if (!func_126(uParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_155(bVar0, uVar5[iVar2]) };
					
						for (iVar3 = 0; iVar3 <= 8; iVar3 = iVar3 + 1)
						{
							if (!func_126(uParam0, 14, uVar22[iVar3]))
							{
								for (iVar4 = 0; iVar4 <= 19; iVar4 = iVar4 + 1)
								{
									Global_80088[2 /*14*/] = { func_178(bVar0, 14, iVar4, -1) };
								
									if (Global_80088[2 /*14*/].f_12 == iVar3)
										if (func_126(uParam0, 14, iVar4))
											if (!func_131(bVar0, bParam2, 14, iVar4, &uVar5, &Global_80088[2 /*14*/]))
												return false;
								}
							}
						}
					}
					else
					{
						bVar1 = func_166(uParam0, iVar2);
						Global_80088[2 /*14*/] = { func_178(bVar0, iVar2, bVar1, -1) };
					
						if (!func_131(bVar0, bParam2, iVar2, bVar1, &uVar5, &Global_80088[2 /*14*/]))
							return false;
					}
				}
			}
		}
	
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_155(bVar0, bParam2) };
	
		for (iVar32 = 0; iVar32 <= 8; iVar32 = iVar32 + 1)
		{
			if (!func_126(uParam0, 14, uVar33[iVar32]))
				return false;
		}
	
		return true;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(uParam0, Global_80088[1 /*14*/].f_12, 1) == Global_80088[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(uParam0, Global_80088[1 /*14*/].f_12) == Global_80088[1 /*14*/].f_4 || Global_80088[1 /*14*/].f_3 == -1)
			return true;
	}
	else if (Global_80088[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(uParam0, func_135(iParam1)) && Global_80088[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(uParam0, func_135(iParam1)))
	{
		return true;
	}

	return false;
}

int func_127(bool bParam0) // Position - 0x9BA0
{
	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 0;
	
		case joaat("PLAYER_ONE"):
			return 1;
	
		case joaat("PLAYER_TWO"):
			return 2;
	
		default:
			break;
	}

	return 145;
}

void func_128(bool bParam0, int iParam1, bool bParam2) // Position - 0x9BDB
{
	int iVar0;
	int iVar1;

	if (bParam0 == joaat("PLAYER_ZERO"))
		iVar0 = 5;
	else if (bParam0 == joaat("PLAYER_ONE"))
		iVar0 = 2;
	else if (bParam0 == joaat("PLAYER_TWO"))
		iVar0 = 4;

	if (func_130(bParam0, 12, iVar0))
	{
		if (func_129(bParam0, iParam1, bParam2))
		{
			iVar1 = func_127(bParam0);
		
			if (iParam1 == 3)
				Global_114931.f_2370.f_539.f_196[iVar1] = bParam2;
			else if (iParam1 == 4)
				Global_114931.f_2370.f_539.f_200[iVar1] = bParam2;
		}
	}
}

bool func_129(bool bParam0, int iParam1, bool bParam2) // Position - 0x9C65
{
	if (bParam0 == joaat("PLAYER_ZERO"))
		if (iParam1 == 4)
			if (bParam2 >= 47 && bParam2 <= 54)
				return true;
		else if (iParam1 == 3)
			if (bParam2 >= 77 && bParam2 <= 84)
				return true;
	else if (bParam0 == joaat("PLAYER_ONE"))
		if (iParam1 == 4)
			if (bParam2 >= 14 && bParam2 <= 21)
				return true;
		else if (iParam1 == 3)
			if (bParam2 >= 41 && bParam2 <= 56)
				return true;
	else if (bParam0 == joaat("PLAYER_TWO"))
		if (iParam1 == 4)
			if (bParam2 >= 18 && bParam2 <= 29)
				return true;
		else if (iParam1 == 3)
			if (bParam2 >= 54 && bParam2 <= 69)
				return true;

	return false;
}

bool func_130(bool bParam0, int iParam1, int iParam2) // Position - 0x9D43
{
	Global_80088[1 /*14*/] = { func_178(bParam0, iParam1, iParam2, -1) };
	return IS_BIT_SET(Global_80088[1 /*14*/].f_6, 2);
}

bool func_131(bool bParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, int iParam5) // Position - 0x9D6B
{
	var uVar0;
	int iVar10;

	if (uParam4->[iParam2] == bParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (bParam3 == 0 || bParam3 == 1 || bParam3 == 2 || bParam3 == 3 || bParam3 == 4 || bParam3 == 5 || bParam3 == 6 || bParam3 == 7 || bParam3 == 8)
			return true;

	if (bParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		uVar0 = { func_155(bParam0, uParam4->[13]) };
	
		for (iVar10 = 0; iVar10 <= 8; iVar10 = iVar10 + 1)
		{
			if (uVar0[iVar10] == bParam3)
				return true;
		}
	}

	if (func_132(bParam0, iParam2, bParam3))
		return true;

	if (bParam0 == joaat("PLAYER_ZERO"))
	{
		if (func_164(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 1 || bParam1 == 2 || bParam1 == 10 || bParam1 == 11 || bParam1 == 12 || bParam1 == 18 || bParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_163(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 1 || bParam1 == 2 || bParam1 == 4 || bParam1 == 5 || bParam1 == 10 || bParam1 == 11 || bParam1 == 12 || bParam1 == 14 || bParam1 == 18 || bParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_162(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 1 || bParam1 == 2 || bParam1 == 4 || bParam1 == 5 || bParam1 == 10 || bParam1 == 11 || bParam1 == 12 || bParam1 == 14 || bParam1 == 18 || bParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (bParam0 == joaat("PLAYER_ONE"))
	{
		if (func_164(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 3 || bParam1 == 5 || bParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_163(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 3 || bParam1 == 5 || bParam1 == 7 || bParam1 == 8 || bParam1 == 21)
				if (iParam2 == 8)
					if (bParam3 == 9)
						if (bParam1 == 8 || bParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (bParam1 == 43 || bParam1 == 44 || bParam1 == 45 || bParam1 == 46)
					if (bParam3 >= 5 && bParam3 <= 10)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (bParam1 == 43 || bParam1 == 44 || bParam1 == 45 || bParam1 == 46)
					if (bParam3 >= 26 && bParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_162(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 3 || bParam1 == 3 || bParam1 == 5 || bParam1 == 7 || bParam1 == 8 || bParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (bParam3 >= 159 && bParam3 <= 174)
				return true;
		}
	}
	else if (bParam0 == joaat("PLAYER_TWO"))
	{
		if (bParam1 == 2)
			if (iParam2 == 14 && bParam3 == false)
				return true;
	
		if (func_164(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 1 || bParam1 == 2 || bParam1 == 6 || bParam1 == 8 || bParam1 == 45 || bParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_163(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 1 || bParam1 == 2 || bParam1 == 3 || bParam1 == 6 || bParam1 == 8 || bParam1 == 11 || bParam1 == 45 || bParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_162(bParam0, iParam2, bParam3, -1))
		{
			if (bParam1 == 1 || bParam1 == 2 || bParam1 == 3 || bParam1 == 6 || bParam1 == 8 || bParam1 == 11 || bParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

bool func_132(bool bParam0, int iParam1, bool bParam2) // Position - 0xA36F
{
	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 15)
						return true;
					break;
			
				case 9:
					if (bParam2 == 6)
						return true;
					break;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == true || bParam2 == 10)
						return true;
					break;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 4)
						return true;
					break;
			}
			break;
	}

	return false;
}

bool func_133(var uParam0, bool bParam1, var uParam2, int iParam3) // Position - 0xA408
{
	int iVar0;

	iVar0 = func_127(bParam1);

	if (iVar0 >= 3 || iVar0 < 0)
		return false;

	if (Global_114931.f_2370.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_126(uParam0, Global_114931.f_2370.f_539[iVar0 /*65*/].f_61, Global_114931.f_2370.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*uParam2 = Global_114931.f_2370.f_539[iVar0 /*65*/].f_59;
			Global_114931.f_2370.f_539[iVar0 /*65*/].f_60 = -99;
			Global_114931.f_2370.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}

	return false;
}

bool func_134(var uParam0, int iParam1, int iParam2) // Position - 0xA4B3
{
	bool bVar0;
	bool bVar1;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (iParam1 == 12)
		{
			for (bVar0 = 0; bVar0 <= 53; bVar0 = bVar0 + 1)
			{
				if (func_126(uParam0, iParam1, bVar0))
					return bVar0;
			}
		}
		else if (iParam1 == 13)
		{
			for (bVar1 = 0; bVar1 <= 19; bVar1 = bVar1 + 1)
			{
				if (func_126(uParam0, iParam1, bVar1))
					return bVar1;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_165(uParam0, iParam2);
			}
		}
		else
		{
			return func_166(uParam0, iParam1);
		}
	}

	return -99;
}

int func_135(int iParam0) // Position - 0xA554
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

int func_136(bool bParam0, int iParam1, int iParam2, var uParam3) // Position - 0xA604
{
	int iVar0;

	*uParam3 = -99;

	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
						*uParam3 = 1;
					break;
			
				case 9:
					if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14)
						*uParam3 = 1;
					break;
			
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
						*uParam3 = 1;
					break;
			
				case 14:
					if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 || iParam2 == 37 || iParam2 >= 40 && iParam2 <= 41 || iParam2 == 46)
						*uParam3 = 1;
					break;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
						*uParam3 = 20;
					break;
			
				case 8:
					if (iParam2 == 4)
						*uParam3 = 19;
					break;
			
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
						*uParam3 = 19;
					break;
			
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
						*uParam3 = 19;
					break;
			
				case 14:
					if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 || iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36)
						*uParam3 = 19;
					break;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
						*uParam3 = 2;
					break;
			
				case 9:
					if (iParam2 >= 9 && iParam2 <= 14 || iParam2 >= 15 && iParam2 <= 16)
						*uParam3 = 2;
					break;
			
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
						*uParam3 = 2;
					break;
			
				case 14:
					if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 || iParam2 == 53 || iParam2 >= 56 && iParam2 <= 57 || iParam2 == 62)
						*uParam3 = 2;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		iVar0 = func_127(bParam0);
		Global_114931.f_2370.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_114931.f_2370.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}

	return 0;
}

bool func_137(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5) // Position - 0xA90B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = -99;

	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_166(uParam0, 1);
				iVar0 = func_144(bParam1, bParam3, iVar1);
				break;
		
			case 1:
				iVar2 = func_166(uParam0, 2);
				iVar0 = func_144(bParam1, iVar2, bParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_136(bParam1, iParam2, bParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_143(bParam1, iParam2, bParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
			func_142(bParam1, bParam3, &iVar0);
	}
	else
	{
		switch (bParam1)
		{
			case joaat("PLAYER_ZERO"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (bParam3)
								{
									case 36:
										iVar0 = 17;
										break;
								
									case 37:
										iVar0 = 17;
										break;
								
									case 38:
										iVar0 = 18;
										break;
								
									case 39:
										iVar0 = 18;
										break;
								
									case 40:
										iVar0 = 19;
										break;
								
									case 41:
										iVar0 = 19;
										break;
								
									case 42:
										iVar0 = 20;
										break;
								
									case 43:
										iVar0 = 20;
										break;
								}
								break;
						
							case 11:
								if (bParam3 >= 2 && bParam3 <= 7)
									if (!func_141(uParam0, 3, 44, 59))
										iVar0 = 44;
								else if (bParam3 >= 8 && bParam3 <= 17 || bParam3 >= 18 && bParam3 <= 27 || bParam3 >= 28 && bParam3 <= 43)
									if (!func_141(uParam0, 3, 135, 150))
										iVar0 = func_140(bParam1, 3, 135, 150);
								break;
						}
						break;
				
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 63:
										iVar0 = 4;
										break;
								
									case 61:
										iVar0 = 3;
										break;
								
									case 16:
										iVar0 = 1;
										break;
								
									case 114:
										iVar0 = 15;
										break;
								
									case 115:
										iVar0 = 17;
										break;
								
									case 116:
										iVar0 = 16;
										break;
								
									case 117:
										iVar0 = 18;
										break;
								
									case 118:
										iVar0 = 20;
										break;
								
									case 119:
										iVar0 = 19;
										break;
								
									case 125:
										iVar0 = 21;
										break;
								
									case 120:
										iVar0 = 22;
										break;
								
									case 124:
										iVar0 = 23;
										break;
								
									case 126:
										iVar0 = 24;
										break;
								
									case 121:
										iVar0 = 25;
										break;
								
									case 127:
										iVar0 = 26;
										break;
								
									case 128:
										iVar0 = 27;
										break;
								
									case 85:
										iVar0 = 6;
										break;
								
									case 77:
										iVar0 = 7;
										break;
								
									case 78:
										iVar0 = 8;
										break;
								
									case 79:
										iVar0 = 9;
										break;
								
									case 80:
										iVar0 = 10;
										break;
								
									case 81:
										iVar0 = 11;
										break;
								
									case 82:
										iVar0 = 12;
										break;
								
									case 83:
										iVar0 = 13;
										break;
								
									case 84:
										iVar0 = 14;
										break;
								
									case 21:
										iVar0 = 31;
										break;
								
									case 22:
										iVar0 = 30;
										break;
								
									case 23:
										iVar0 = 29;
										break;
								
									case 24:
										iVar0 = 28;
										break;
								
									case 25:
										iVar0 = 33;
										break;
								
									case 26:
										iVar0 = 35;
										break;
								
									case 27:
										iVar0 = 34;
										break;
								
									case 28:
										iVar0 = 32;
										break;
								
									default:
										if (bParam3 >= 17 && bParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
						
							case 11:
								if (bParam3 != 0)
									iVar0 = 0;
								break;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (bParam3 >= 44 && bParam3 <= 59 || bParam3 >= 135 && bParam3 <= 150)
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (bParam3 >= 36 && bParam3 <= 43)
								iVar0 = 0;
						}
						break;
				}
				break;
		
			case joaat("PLAYER_ONE"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 17:
										iVar0 = 2;
										break;
								
									case 90:
										iVar0 = 1;
										break;
								
									case 268:
										iVar0 = 3;
										break;
								
									case 269:
										iVar0 = 5;
										break;
								
									case 270:
										iVar0 = 4;
										break;
								
									case 271:
										iVar0 = 6;
										break;
								
									case 272:
										iVar0 = 8;
										break;
								
									case 273:
										iVar0 = 7;
										break;
								
									case 279:
										iVar0 = 9;
										break;
								
									case 274:
										iVar0 = 10;
										break;
								
									case 278:
										iVar0 = 11;
										break;
								
									case 280:
										iVar0 = 12;
										break;
								
									case 275:
										iVar0 = 13;
										break;
								
									case 281:
										iVar0 = 14;
										break;
								
									case 282:
										iVar0 = 15;
										break;
								
									case 107:
										iVar0 = 16;
										break;
								
									case 108:
										iVar0 = 17;
										break;
								
									case 109:
										iVar0 = 18;
										break;
								
									case 110:
										iVar0 = 19;
										break;
								
									case 111:
										iVar0 = 20;
										break;
								
									case 112:
										iVar0 = 21;
										break;
								
									case 113:
										iVar0 = 22;
										break;
								
									case 114:
										iVar0 = 23;
										break;
								
									case 115:
										iVar0 = 24;
										break;
								
									case 116:
										iVar0 = 25;
										break;
								
									case 117:
										iVar0 = 52;
										break;
								
									case 118:
										iVar0 = 27;
										break;
								
									case 119:
										iVar0 = 28;
										break;
								
									case 120:
										iVar0 = 29;
										break;
								
									case 121:
										iVar0 = 30;
										break;
								
									case 122:
										iVar0 = 31;
										break;
								
									case 296:
										iVar0 = 32;
										break;
								
									case 297:
										iVar0 = 33;
										break;
								
									case 298:
										iVar0 = 34;
										break;
								
									case 299:
										iVar0 = 35;
										break;
								
									case 300:
										iVar0 = 36;
										break;
								
									case 301:
										iVar0 = 37;
										break;
								
									case 302:
										iVar0 = 38;
										break;
								
									case 309:
										iVar0 = 39;
										break;
								
									case 310:
										iVar0 = 40;
										break;
								
									case 311:
										iVar0 = 41;
										break;
								
									case 312:
										iVar0 = 42;
										break;
								
									case 313:
										iVar0 = 43;
										break;
								
									case 314:
										iVar0 = 44;
										break;
								
									case 315:
										iVar0 = 45;
										break;
								
									case 316:
										iVar0 = 46;
										break;
								
									case 317:
										iVar0 = 51;
										break;
								
									default:
										iVar0 = 0;
										break;
								}
								break;
						
							case 11:
								if (bParam3 != 0)
									iVar0 = 0;
								break;
						}
						break;
				
					case 3:
						switch (iParam2)
						{
							case 11:
								if (bParam3 >= 47 && bParam3 <= 62)
									if (!func_141(uParam0, 3, 209, 222))
										iVar0 = func_140(bParam1, 3, 209, 222);
								else if (bParam3 >= 1 && bParam3 <= 4 || bParam3 >= 5 && bParam3 <= 8)
									if (!func_141(uParam0, 3, 243, 258))
										if (bParam3 == 1 || bParam3 == 5)
											iVar0 = func_140(bParam1, 3, 243, 246);
										else if (bParam3 == 2 || bParam3 == 6)
											iVar0 = func_140(bParam1, 3, 247, 250);
										else if (bParam3 == 3 || bParam3 == 7)
											iVar0 = func_140(bParam1, 3, 251, 254);
										else if (bParam3 == 4 || bParam3 == 8)
											iVar0 = func_140(bParam1, 3, 255, 258);
								else if (bParam3 == 41 || bParam3 == 42)
									if (!func_141(uParam0, 3, 176, 191) && !func_141(uParam0, 3, 227, 242))
										iVar0 = func_140(bParam1, 3, 176, 191);
								break;
						}
						break;
				
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = bParam3;
								iVar4 = func_166(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = bParam3;
								iVar5 = func_166(uParam0, 11);
								iVar5 = func_139(bParam1, iVar4, iVar5, 0);
							}
						
							iVar3 = func_166(uParam0, 8);
						
							if (iVar5 >= 5 && iVar5 <= 8 || iVar5 >= 25 && iVar5 <= 40 || iVar5 >= 42 && iVar5 <= 43)
								if (!func_138(joaat("PLAYER_ONE"), iVar3, iVar5, iVar4, &iVar6))
									if (iVar6 != -99)
										iVar0 = iVar6;
							else if (iVar3 >= 27 && iVar3 <= 42 || iVar3 >= 43 && iVar3 <= 58 || iVar3 >= 59 && iVar3 <= 74)
								iVar0 = 26;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (bParam3 >= 209 && bParam3 <= 222)
							{
							}
							else if (bParam3 >= 176 && bParam3 <= 191 || bParam3 >= 227 && bParam3 <= 242 || bParam3 >= 243 && bParam3 <= 258)
							{
								iVar7 = func_166(uParam0, 8);
								iVar8 = func_166(uParam0, 11);
							
								if (iVar7 >= 27 && iVar7 <= 42 || iVar7 >= 43 && iVar7 <= 58 || iVar7 >= 59 && iVar7 <= 74)
									iVar0 = func_139(bParam1, bParam3, iVar8, 0);
								else
									iVar0 = func_139(bParam1, bParam3, iVar8, 1);
							}
							else if (bParam3 >= 41 && bParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (bParam3 >= 223 && bParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (bParam3 >= 27 && bParam3 <= 42 || bParam3 >= 43 && bParam3 <= 58 || bParam3 >= 59 && bParam3 <= 74)
							{
								iVar9 = func_166(uParam0, 11);
								iVar0 = func_139(bParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
		
			case joaat("PLAYER_TWO"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (bParam3)
								{
									case 50:
										iVar0 = 3;
										break;
								
									case 81:
										iVar0 = 5;
										break;
								
									case 82:
										iVar0 = 6;
										break;
								
									case 83:
										iVar0 = 7;
										break;
								
									case 84:
										iVar0 = 10;
										break;
								
									case 85:
										iVar0 = 9;
										break;
								
									case 86:
										iVar0 = 8;
										break;
								
									case 92:
										iVar0 = 22;
										break;
								
									case 87:
										iVar0 = 23;
										break;
								
									case 91:
										iVar0 = 24;
										break;
								
									case 93:
										iVar0 = 25;
										break;
								
									case 88:
										iVar0 = 26;
										break;
								
									case 94:
										iVar0 = 27;
										break;
								
									case 120:
										iVar0 = 11;
										break;
								
									case 121:
										iVar0 = 13;
										break;
								
									case 122:
										iVar0 = 14;
										break;
								
									case 124:
										iVar0 = 12;
										break;
								
									case 126:
										iVar0 = 18;
										break;
								
									case 128:
										iVar0 = 17;
										break;
								
									case 130:
										iVar0 = 19;
										break;
								
									case 131:
										iVar0 = 16;
										break;
								
									case 134:
										iVar0 = 15;
										break;
								
									case 135:
										iVar0 = 20;
										break;
								
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}

	return iVar0;
}

bool func_138(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4) // Position - 0xB4BE
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			break;
	
		case joaat("PLAYER_ONE"):
			*uParam4 = 0;
		
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40)
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 59 + iVar0;
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 43 + iVar0;
							}
						}
					
						return false;
					}
				}
			
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242 || iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 243 && iParam3 <= 258)
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40)
						{
							iVar0 = iParam1 - 43;
							*uParam4 = 27 + iVar0;
						}
					
						return false;
					}
				}
			
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 43;
								*uParam4 = 59 + iVar0;
							}
						}
					
						return false;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40)
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
					
						return false;
					}
				}
			
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 59;
								*uParam4 = 43 + iVar0;
							}
						}
						else if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40)
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
					
						return false;
					}
				}
			}
			break;
	
		case joaat("PLAYER_TWO"):
			if (iParam1 == 12)
				if (iParam3 != 241)
					return false;
			break;
	}

	return true;
}

int func_139(bool bParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB7A2
{
	int iVar0;

	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
			return 1;
		else
			return 5;
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
			return 2;
		else
			return 6;
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
			return 3;
		else
			return 7;
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
			return 4;
		else
			return 8;
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
			return 4;
		else
			return 8;
	}
	else if (iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 227 && iParam1 <= 242)
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
				return 41;
			else
				return 42;
		}
		else
		{
			if (iParam3 == 1)
				iParam2 = func_140(bParam0, 11, 9, 24);
			else
				iParam2 = func_140(bParam0, 11, 25, 40);
		
			if (iParam2 == -99)
				if (iParam3 == 1)
					return 41;
				else
					return 42;
			else
				return iParam2;
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
			return 41;
		else
			return 42;
	}

	return -99;
}

int func_140(bool bParam0, int iParam1, int iParam2, int iParam3) // Position - 0xBA69
{
	int iVar0;
	int iVar1;

	for (iVar0 = iParam2; iVar0 <= iParam3 - 1; iVar0 = iVar0 + 1)
	{
		iVar1 = iVar0;
	
		if (func_130(bParam0, iParam1, iVar1))
			return iVar1;
	}

	return -99;
}

bool func_141(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0xBAA0
{
	int iVar0;

	iVar0 = func_166(uParam0, iParam1);

	if (iVar0 >= iParam2 && iVar0 <= iParam3)
		return true;

	return false;
}

bool func_142(bool bParam0, int iParam1, var uParam2) // Position - 0xBAC9
{
	*uParam2 = -99;

	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (iParam1 == 16 || iParam1 == 17 || iParam1 == 21 || iParam1 == 22 || iParam1 == 32 || iParam1 >= 34 && iParam1 <= 39 || iParam1 >= 41 && iParam1 <= 45 || iParam1 == 46 || iParam1 >= 47 && iParam1 <= 54 || iParam1 >= 55 && iParam1 <= 70 || iParam1 >= 72 && iParam1 <= 79 || iParam1 == 80 || iParam1 >= 81 && iParam1 <= 83 || iParam1 >= 84 && iParam1 <= 87 || iParam1 == 88 || iParam1 >= 89 && iParam1 <= 91 || iParam1 == 95 || iParam1 >= 96 && iParam1 <= 111 || iParam1 == 112)
			{
				*uParam2 = 6;
				return true;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			if (iParam1 == 12 || iParam1 >= 14 && iParam1 <= 21 || iParam1 == 32 || iParam1 == 52 || iParam1 >= 69 && iParam1 <= 70 || iParam1 == 71 || iParam1 >= 72 && iParam1 <= 77)
			{
				*uParam2 = 17;
				return true;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			if (iParam1 == 4 || iParam1 == 5 || iParam1 == 6 || iParam1 == 7 || iParam1 == 14 || iParam1 >= 18 && iParam1 <= 29 || iParam1 == 31 || iParam1 == 32 || iParam1 == 33 || iParam1 == 34 || iParam1 >= 35 && iParam1 <= 42 || iParam1 >= 43 && iParam1 <= 53 || iParam1 >= 54 && iParam1 <= 61 || iParam1 >= 71 && iParam1 <= 80 || iParam1 >= 81 && iParam1 <= 90 || iParam1 >= 94 && iParam1 <= 103)
			{
				*uParam2 = 8;
				return true;
			}
			break;
	}

	return false;
}

int func_143(bool bParam0, int iParam1, int iParam2, var uParam3) // Position - 0xBD93
{
	int iVar0;

	*uParam3 = -99;

	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
						*uParam3 = 0;
					break;
			
				case 14:
					if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 || iParam2 == 37 || iParam2 >= 38 && iParam2 <= 39 || iParam2 >= 40 && iParam2 <= 41 || iParam2 >= 42 && iParam2 <= 44)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
						*uParam3 = 0;
					break;
			
				case 14:
					if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 || iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
						*uParam3 = 0;
					break;
			
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
						*uParam3 = 0;
					break;
			
				case 14:
					if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 || iParam2 == 53 || iParam2 >= 54 && iParam2 <= 55 || iParam2 >= 56 && iParam2 <= 57 || iParam2 >= 58 && iParam2 <= 60)
						*uParam3 = 0;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		iVar0 = func_127(bParam0);
		Global_114931.f_2370.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_114931.f_2370.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}

	return 0;
}

int func_144(bool bParam0, int iParam1, int iParam2) // Position - 0xC01E
{
	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (iParam1 == 1)
				if (iParam2 == 0)
					return 1;
				else if (iParam2 == 4)
					return 5;
				else
					return 3;
			else if (iParam2 == 0)
				return 0;
			else if (iParam2 == 4)
				return 4;
			else
				return 2;
			break;
	
		case joaat("PLAYER_ONE"):
			if (iParam1 >= 0 && iParam1 <= 15)
				if (iParam2 == 0)
					return 0;
				else
					return 3;
			else if (iParam1 >= 16 && iParam1 <= 17)
				if (iParam2 == 0)
					return 2;
				else
					return 5;
			else if (iParam1 == 18)
				if (iParam2 == 0)
					return 6;
				else
					return 7;
			else if (iParam1 == 19)
				if (iParam2 == 0)
					return 1;
				else
					return 4;
			else if (iParam2 == 0)
				return 1;
			else
				return 4;
			break;
	
		case joaat("PLAYER_TWO"):
			if (iParam1 == 2)
				if (iParam2 == 0)
					return 2;
				else
					return 3;
			else if (iParam1 == 3)
				if (iParam2 == 0)
					return 4;
				else
					return 6;
			else if (iParam1 == 8)
				return 5;
			else if (iParam2 == 0)
				return 0;
			else
				return 1;
			break;
	}

	return -99;
}

void func_145(var uParam0, int iParam1, bool bParam2, bool bParam3) // Position - 0xC175
{
	bool bVar0;

	if (bParam2 == -1)
	{
		PED::CLEAR_PED_PROP(uParam0, iParam1, 1);
	
		if (iParam1 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(uParam0, 34, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0, 36, 0);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(uParam0, iParam1, bParam2, bParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
	
		if (iParam1 == 0)
		{
			bVar0 = func_150(uParam0, bParam2, bParam3, iParam1);
		
			if (func_146(ENTITY::GET_ENTITY_MODEL(uParam0), 14, bVar0, EXTRAMETADATA::GET_HASH_NAME_FOR_PROP(uParam0, 0, bParam2, bParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0, 34, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0, 36, 1);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(uParam0, 34, 0);
				PED::SET_PED_CONFIG_FLAG(uParam0, 36, 0);
			}
		}
	}
}

bool func_146(bool bParam0, int iParam1, bool bParam2, int iParam3) // Position - 0xC20F
{
	switch (bParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
						iParam3 = func_147(bParam0, bParam2, 14, 3);
				
					if (bParam2 >= 131 && bParam2 <= 154 || bParam2 >= 327 && EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
						iParam3 = func_147(bParam0, bParam2, 14, 4);
				
					if (bParam2 >= 131 && bParam2 <= 154 || bParam2 >= 327 && EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	}

	return false;
}

int func_147(bool bParam0, bool bParam1, int iParam2, int iParam3) // Position - 0xC2DD
{
	var uVar0;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar36;
	int iVar37;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		EXTRAMETADATA::INIT_SHOP_PED_PROP(&uVar0);
		iVar17 = bParam1 - func_149(bParam0);
	
		if (iVar17 < 0)
			return -1;
	
		iVar18 = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, 1, -1, -1);
	
		if (iVar18 <= iVar17)
			return -1;
	
		EXTRAMETADATA::GET_SHOP_PED_QUERY_PROP(iVar17, &uVar0);
		return uVar0.f_1;
	}
	else
	{
		EXTRAMETADATA::INIT_SHOP_PED_COMPONENT(&uVar19);
		iVar36 = bParam1 - func_148(bParam0, func_135(iParam2));
	
		if (iVar36 < 0)
			return -1;
	
		if (bParam0 == Global_80238.f_26[iParam2] && bParam1 == Global_80238[iParam2] && Global_80238.f_13[iParam2] != 0)
			return Global_80238.f_13[iParam2];
	
		iVar37 = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, 0, -1, func_135(iParam2));
	
		if (iVar37 <= iVar36)
			return -1;
	
		EXTRAMETADATA::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &uVar19);
		Global_80238.f_13[iParam2] = uVar19.f_1;
		Global_80238[iParam2] = bParam1;
		Global_80238.f_26[iParam2] = bParam0;
		return uVar19.f_1;
	}

	return -1;
}

int func_148(bool bParam0, int iParam1) // Position - 0xC3F7
{
	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (bParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

int func_149(bool bParam0) // Position - 0xC79E
{
	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 113;
	
		case joaat("PLAYER_ONE"):
			return 175;
	
		case joaat("PLAYER_TWO"):
			return 155;
	}

	switch (bParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			return 327;
	
		case joaat("MP_F_FREEMODE_01"):
			return 327;
	}

	return -99;
}

bool func_150(var uParam0, bool bParam1, bool bParam2, int iParam3) // Position - 0xC7FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam1 == -1)
		return func_154(iParam3);

	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	iVar1 = EXTRAMETADATA::GET_HASH_NAME_FOR_PROP(uParam0, iParam3, bParam1, bParam2);

	if (iVar1 != -1 && iVar1 != 0)
		if (iVar0 == joaat("MP_M_FREEMODE_01"))
			return func_152(ENTITY::GET_ENTITY_MODEL(uParam0), iVar1, 14, 3);
		else if (iVar0 == joaat("MP_F_FREEMODE_01"))
			return func_152(ENTITY::GET_ENTITY_MODEL(uParam0), iVar1, 14, 4);

	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(uParam0, iParam3);

	for (iVar4 = 0; iVar4 <= iVar2 - 1; iVar4 = iVar4 + 1)
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(uParam0, iParam3, iVar4);
	
		if (iVar4 != bParam1)
		{
			iVar3 = iVar3 + iVar6;
		}
		else
		{
			for (iVar5 = 0; iVar5 <= iVar6 - 1; iVar5 = iVar5 + 1)
			{
				if (iVar4 == bParam1 && iVar5 == bParam2)
				{
					iVar3 = iVar3 + func_151(uParam0, iParam3);
					return iVar3;
				}
				else
				{
					iVar3 = iVar3 + 1;
				}
			}
		}
	}

	return func_154(iParam3);
}

int func_151(var uParam0, int iParam1) // Position - 0xC8FB
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);

	switch (iVar0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 58;
			
				case 2:
					return 112;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 82;
			
				case 2:
					return 158;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 88;
			
				case 2:
					return 154;
			}
			break;
	
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 155;
			
				case 6:
					return 319;
			}
			break;
	
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 155;
			
				case 6:
					return 319;
			}
			break;
	}

	return -99;
}

int func_152(bool bParam0, int iParam1, int iParam2, int iParam3) // Position - 0xCA39
{
	var uVar0;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == 12)
	{
		iVar16 = EXTRAMETADATA::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, 0);
	
		for (iVar15 = 0; iVar15 < iVar16; iVar15 = iVar15 + 1)
		{
			EXTRAMETADATA::GET_SHOP_PED_QUERY_OUTFIT(iVar15, &uVar0);
		
			if (uVar0.f_1 == iParam1)
				return func_153(bParam0) + iVar15;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, 1, -1, -1);
		iVar17 = EXTRAMETADATA::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
	
		if (iVar17 != -1)
			return func_149(bParam0) + iVar17;
	}
	else
	{
		EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, 0, -1, func_135(iParam2));
		iVar18 = EXTRAMETADATA::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
	
		if (iVar18 != -1)
			return func_148(bParam0, func_135(iParam2)) + iVar18;
	}

	return -99;
}

int func_153(int iParam0) // Position - 0xCAF4
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 53;
	
		case joaat("PLAYER_ONE"):
			return 47;
	
		case joaat("PLAYER_TWO"):
			return 48;
	}

	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			return 26;
	
		case joaat("MP_F_FREEMODE_01"):
			return 28;
	}

	return -99;
}

int func_154(int iParam0) // Position - 0xCB53
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	}

	return 0;
}

struct<10> func_155(bool bParam0, bool bParam1) // Position - 0xCBD9
{
	int iVar0;
	var uVar1;

	uVar1 = 9;

	for (iVar0 = 0; iVar0 <= 8; iVar0 = iVar0 + 1)
	{
		uVar1[iVar0] = -99;
	}

	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 31:
					func_157(&uVar1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_157(&uVar1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_157(&uVar1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_157(&uVar1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_157(&uVar1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_157(&uVar1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_157(&uVar1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_157(&uVar1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_157(&uVar1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_157(&uVar1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_157(&uVar1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_156(&uVar1, bParam0, bParam1, 10);
					break;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 31:
					func_157(&uVar1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_157(&uVar1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_157(&uVar1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_157(&uVar1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_157(&uVar1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_157(&uVar1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_157(&uVar1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_157(&uVar1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_157(&uVar1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_157(&uVar1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_156(&uVar1, bParam0, bParam1, 9);
					break;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 31:
					func_157(&uVar1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_157(&uVar1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_157(&uVar1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_157(&uVar1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_157(&uVar1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_157(&uVar1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_157(&uVar1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_157(&uVar1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_157(&uVar1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_157(&uVar1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_156(&uVar1, bParam0, bParam1, 9);
					break;
			}
			break;
	
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_157(&uVar1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_157(&uVar1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_157(&uVar1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_157(&uVar1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_157(&uVar1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_157(&uVar1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_157(&uVar1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_157(&uVar1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_157(&uVar1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_157(&uVar1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_157(&uVar1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_157(&uVar1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_157(&uVar1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_157(&uVar1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_157(&uVar1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_157(&uVar1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_157(&uVar1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_157(&uVar1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_157(&uVar1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_157(&uVar1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_157(&uVar1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_157(&uVar1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_157(&uVar1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_157(&uVar1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_157(&uVar1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_157(&uVar1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_156(&uVar1, bParam0, bParam1, 25);
					break;
			}
			break;
	
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_157(&uVar1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_157(&uVar1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_157(&uVar1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_157(&uVar1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_157(&uVar1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_157(&uVar1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_157(&uVar1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_157(&uVar1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_157(&uVar1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_157(&uVar1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_157(&uVar1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_157(&uVar1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_157(&uVar1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_157(&uVar1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_157(&uVar1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_157(&uVar1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_157(&uVar1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_157(&uVar1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_157(&uVar1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_157(&uVar1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_157(&uVar1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_157(&uVar1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_157(&uVar1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_157(&uVar1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_157(&uVar1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_156(&uVar1, bParam0, bParam1, 25);
					break;
			}
			break;
	}

	return uVar1;
}

void func_156(var uParam0, bool bParam1, int iParam2, int iParam3) // Position - 0xD508
{
	int iVar0;
	var uVar1;
	int iVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		iVar0 = 0;
	
		if (bParam1 == joaat("PLAYER_ZERO"))
			iVar0 = 0;
		else if (bParam1 == joaat("PLAYER_ONE"))
			iVar0 = 1;
		else if (bParam1 == joaat("PLAYER_TWO"))
			iVar0 = 2;
		else if (bParam1 == joaat("MP_M_FREEMODE_01"))
			iVar0 = 3;
		else if (bParam1 == joaat("MP_F_FREEMODE_01"))
			iVar0 = 4;
	
		EXTRAMETADATA::GET_SHOP_PED_OUTFIT(iParam2, &uVar1);
	
		if (!EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(uVar1))
		{
			for (iVar19 = 0; iVar19 < uVar1.f_3; iVar19 = iVar19 + 1)
			{
				if (EXTRAMETADATA::GET_SHOP_PED_OUTFIT_PROP_VARIANT(uVar1.f_1, iVar19, &iVar16) && iVar16.f_2 != -1)
					if (iVar16 != 0 && iVar16 != -1 && iVar16 != joaat("0"))
						uParam0->[iVar16.f_2] = func_152(bParam1, iVar16, 14, iVar0);
					else if (iVar16.f_1 != -1)
						uParam0->[iVar16.f_2] = iVar16.f_1;
			}
		}
	}
}

void func_157(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xD632
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
}

struct<17> func_158(bool bParam0, int iParam1) // Position - 0xD67A
{
	int iVar0;
	var uVar1;

	uVar1 = 15;

	for (iVar0 = 0; iVar0 <= 14; iVar0 = iVar0 + 1)
	{
		uVar1[iVar0] = -99;
	}

	uVar1.f_16 = 0;

	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 0:
					if (Global_114931.f_9092.f_99.f_58[120])
						func_161(&uVar1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_161(&uVar1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_161(&uVar1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_161(&uVar1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_161(&uVar1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_161(&uVar1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_161(&uVar1, -99, -99, Global_114931.f_2370.f_539.f_196[0], Global_114931.f_2370.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_161(&uVar1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_161(&uVar1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_161(&uVar1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_161(&uVar1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_161(&uVar1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_161(&uVar1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_161(&uVar1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_161(&uVar1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_161(&uVar1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_161(&uVar1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_161(&uVar1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_161(&uVar1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_161(&uVar1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_161(&uVar1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_161(&uVar1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_161(&uVar1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_161(&uVar1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_161(&uVar1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_161(&uVar1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_161(&uVar1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_161(&uVar1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_161(&uVar1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_161(&uVar1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_161(&uVar1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_161(&uVar1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_161(&uVar1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_161(&uVar1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_161(&uVar1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_161(&uVar1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_161(&uVar1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_161(&uVar1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_161(&uVar1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_161(&uVar1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_161(&uVar1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_161(&uVar1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_161(&uVar1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_161(&uVar1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_161(&uVar1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_161(&uVar1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_161(&uVar1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_161(&uVar1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_161(&uVar1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_161(&uVar1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_161(&uVar1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_161(&uVar1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_161(&uVar1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_161(&uVar1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_159(&uVar1, bParam0, iParam1, 53);
					break;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 0:
					func_161(&uVar1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_161(&uVar1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_161(&uVar1, -99, -99, Global_114931.f_2370.f_539.f_196[1], Global_114931.f_2370.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_161(&uVar1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_161(&uVar1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_161(&uVar1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_161(&uVar1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_161(&uVar1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_161(&uVar1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_161(&uVar1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_161(&uVar1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_161(&uVar1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_161(&uVar1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_161(&uVar1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_161(&uVar1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_161(&uVar1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_161(&uVar1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_161(&uVar1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_161(&uVar1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_161(&uVar1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_161(&uVar1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_161(&uVar1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_161(&uVar1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_161(&uVar1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_161(&uVar1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_161(&uVar1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_161(&uVar1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_161(&uVar1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_161(&uVar1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_161(&uVar1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_161(&uVar1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_161(&uVar1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_161(&uVar1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_161(&uVar1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_161(&uVar1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_161(&uVar1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_161(&uVar1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_161(&uVar1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_161(&uVar1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_161(&uVar1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_161(&uVar1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_161(&uVar1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_161(&uVar1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_161(&uVar1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_161(&uVar1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_161(&uVar1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_161(&uVar1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_159(&uVar1, bParam0, iParam1, 47);
					break;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 0:
					func_161(&uVar1, -99, -99, false, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_161(&uVar1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_161(&uVar1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_161(&uVar1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_161(&uVar1, -99, -99, Global_114931.f_2370.f_539.f_196[2], Global_114931.f_2370.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_161(&uVar1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_161(&uVar1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_161(&uVar1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_161(&uVar1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_161(&uVar1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_161(&uVar1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_161(&uVar1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_161(&uVar1, -99, -99, false, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_161(&uVar1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_161(&uVar1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_161(&uVar1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_161(&uVar1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_161(&uVar1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_161(&uVar1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_161(&uVar1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_161(&uVar1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_161(&uVar1, -99, -99, false, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_161(&uVar1, -99, -99, 98, false, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_161(&uVar1, -99, -99, 27, false, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_161(&uVar1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_161(&uVar1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_161(&uVar1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_161(&uVar1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_161(&uVar1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_161(&uVar1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_161(&uVar1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_161(&uVar1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_161(&uVar1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_161(&uVar1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_161(&uVar1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_161(&uVar1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_161(&uVar1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_161(&uVar1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_161(&uVar1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_161(&uVar1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_161(&uVar1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_161(&uVar1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_161(&uVar1, -99, -99, 55, false, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_161(&uVar1, -99, -99, false, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_161(&uVar1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_161(&uVar1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_161(&uVar1, -99, -99, false, false, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_161(&uVar1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_159(&uVar1, bParam0, iParam1, 48);
					break;
			}
			break;
	
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					func_161(&uVar1, -99, -99, false, false, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_161(&uVar1, -99, -99, true, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_161(&uVar1, -99, -99, false, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_161(&uVar1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_161(&uVar1, -99, -99, true, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_161(&uVar1, -99, -99, true, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_161(&uVar1, -99, -99, true, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_161(&uVar1, -99, -99, true, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_161(&uVar1, -99, -99, false, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_161(&uVar1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_161(&uVar1, -99, -99, true, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_161(&uVar1, -99, -99, true, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_161(&uVar1, -99, -99, true, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_161(&uVar1, -99, -99, true, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_161(&uVar1, -99, -99, true, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_161(&uVar1, -99, -99, true, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_161(&uVar1, -99, -99, true, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_161(&uVar1, -99, -99, true, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_161(&uVar1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_161(&uVar1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_161(&uVar1, -99, -99, true, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_161(&uVar1, -99, -99, false, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_161(&uVar1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_161(&uVar1, -99, -99, true, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_161(&uVar1, -99, -99, true, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_161(&uVar1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_159(&uVar1, bParam0, iParam1, 26);
					break;
			}
			break;
	
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					func_161(&uVar1, -99, -99, false, false, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_161(&uVar1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_161(&uVar1, -99, -99, 4, true, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_161(&uVar1, -99, -99, true, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_161(&uVar1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_161(&uVar1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_161(&uVar1, -99, -99, true, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_161(&uVar1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_161(&uVar1, -99, -99, true, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_161(&uVar1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_161(&uVar1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_161(&uVar1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_161(&uVar1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_161(&uVar1, -99, -99, 5, false, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_161(&uVar1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_161(&uVar1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_161(&uVar1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_161(&uVar1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_161(&uVar1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_161(&uVar1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_161(&uVar1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_161(&uVar1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_161(&uVar1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_161(&uVar1, -99, -99, false, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_161(&uVar1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_161(&uVar1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_161(&uVar1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_161(&uVar1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_159(&uVar1, bParam0, iParam1, 28);
					break;
			}
			break;
	}

	return uVar1;
}

void func_159(var uParam0, bool bParam1, int iParam2, int iParam3) // Position - 0xF4C2
{
	int iVar0;
	var uVar1;
	int iVar16;
	var uVar19;
	int iVar36;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;

	if (bParam1 == joaat("PLAYER_ZERO"))
	{
		iVar0 = 0;
		uParam0->[13] = 10 + (iParam2 - iParam3);
	}
	else if (bParam1 == joaat("PLAYER_ONE"))
	{
		iVar0 = 1;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (bParam1 == joaat("PLAYER_TWO"))
	{
		iVar0 = 2;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (bParam1 == joaat("MP_M_FREEMODE_01"))
	{
		iVar0 = 3;
	}
	else if (bParam1 == joaat("MP_F_FREEMODE_01"))
	{
		iVar0 = 4;
	}

	EXTRAMETADATA::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, 0);
	EXTRAMETADATA::GET_SHOP_PED_QUERY_OUTFIT(iParam2 - iParam3, &uVar1);

	if (!EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(uVar1))
	{
		for (iVar36 = 0; iVar36 < uVar1.f_4; iVar36 = iVar36 + 1)
		{
			if (EXTRAMETADATA::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(uVar1.f_1, iVar36, &iVar16))
			{
				if (iVar16 != 0 && iVar16 != -1 && iVar16 != joaat("0"))
				{
					if (iVar16.f_2 == 10)
					{
						EXTRAMETADATA::INIT_SHOP_PED_COMPONENT(&uVar19);
						EXTRAMETADATA::GET_SHOP_PED_COMPONENT(iVar16, &uVar19);
					
						if (iVar16 != uVar19.f_1)
							uParam0->f_16 = 1;
					}
				
					if (iVar16.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_160(iVar16.f_2)] = iVar16;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_160(iVar16.f_2)] = func_152(bParam1, iVar16, func_160(iVar16.f_2), iVar0);
					}
				}
				else if (iVar16.f_1 != -1)
				{
					uParam0->[func_160(iVar16.f_2)] = iVar16.f_1;
				}
			}
		}
	
		if (uVar1.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = uVar1.f_1;
	}
}

int func_160(int iParam0) // Position - 0xF6AC
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_161(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0xF75C
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = bParam3;
	uParam0->[4] = bParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
}

bool func_162(bool bParam0, int iParam1, bool bParam2, int iParam3) // Position - 0xF7CD
{
	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 == 16)
						return true;
					break;
			}
			break;
	
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 == 40 || bParam2 >= 41 && bParam2 <= 56 || bParam2 >= 64 && bParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 17 && bParam2 <= 18 || bParam2 >= 71 && bParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (iParam3 == -1)
							iParam3 = func_147(bParam0, bParam2, 14, 3);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_147(bParam0, bParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (bParam2 >= 26)
					{
						if (iParam3 == -1)
							iParam3 = func_147(bParam0, bParam2, 1, 3);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_147(bParam0, bParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (iParam3 == -1)
							iParam3 = func_147(bParam0, bParam2, 14, 4);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_147(bParam0, bParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (bParam2 >= 26)
					{
						if (iParam3 == -1)
							iParam3 = func_147(bParam0, bParam2, 1, 4);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_147(bParam0, bParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

bool func_163(bool bParam0, int iParam1, bool bParam2, int iParam3) // Position - 0xFA4A
{
	if (bParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 6)
			if (bParam2 == 10)
				return true;
		else if (iParam1 == 8)
			if (bParam2 == 9 || bParam2 == 7 || bParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (bParam2 >= 9 && bParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (bParam2 == 12 || bParam2 == 59 || bParam2 == 60 || bParam2 == 31 || bParam2 == 32 || bParam2 == 33 || bParam2 == 34 || bParam2 == 35 || bParam2 == 36 || bParam2 == 37 || bParam2 == 38 || bParam2 == 39 || bParam2 == 40 || bParam2 == 41 || bParam2 >= 42 && bParam2 <= 44 || bParam2 == 54 || bParam2 == 55)
				return true;
	}
	else if (bParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 2)
			if (bParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (bParam2 == 3 || bParam2 == 5 || bParam2 == 9)
				return true;
		else if (iParam1 == 9)
			if (bParam2 >= 5 && bParam2 <= 10)
				return true;
		else if (iParam1 == 14)
			if (bParam2 == 82 || bParam2 == 10 || bParam2 == 26 || bParam2 == 27 || bParam2 == 28 || bParam2 == 29 || bParam2 == 30 || bParam2 == 31 || bParam2 == 32 || bParam2 == 33 || bParam2 == 34 || bParam2 == 35 || bParam2 == 36 || bParam2 >= 37 && bParam2 <= 39)
				return true;
	}
	else if (bParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 8)
			if (bParam2 == 14 || bParam2 == 7)
				return true;
		else if (iParam1 == 9)
			if (bParam2 == 8 || bParam2 >= 9 && bParam2 <= 14 || bParam2 == 15 || bParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (bParam2 == 88 || bParam2 == 12 || bParam2 == 47 || bParam2 == 48 || bParam2 == 49 || bParam2 == 50 || bParam2 == 51 || bParam2 == 52 || bParam2 == 53 || bParam2 == 54 || bParam2 == 55 || bParam2 == 56 || bParam2 == 57 || bParam2 >= 58 && bParam2 <= 60)
				return true;
	}
	else if (bParam0 == joaat("MP_M_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > false)
			{
				if (bParam2 >= 26)
				{
					if (iParam3 == -1)
						iParam3 = func_147(bParam0, bParam2, 1, 3);
				
					if (EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (bParam0 == joaat("MP_F_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > false)
			{
				if (bParam2 >= 26)
				{
					if (iParam3 == -1)
						iParam3 = func_147(bParam0, bParam2, 1, 4);
				
					if (EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

bool func_164(bool bParam0, int iParam1, bool bParam2, int iParam3) // Position - 0xFE6F
{
	switch (bParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (iParam1 == 14)
				if (bParam2 == 58 || bParam2 == 61 || bParam2 >= 62 && bParam2 <= 69 || bParam2 >= 70 && bParam2 <= 79 || bParam2 >= 80 && bParam2 <= 89 || bParam2 == 90 || bParam2 >= 91 && bParam2 <= 102 || bParam2 >= 103 && bParam2 <= 110 || bParam2 == 111)
					return true;
			break;
	
		case joaat("PLAYER_ONE"):
			if (iParam1 == 14)
				if (bParam2 >= 83 && bParam2 <= 92 || bParam2 == 93 || bParam2 == 94 || bParam2 >= 95 && bParam2 <= 101 || bParam2 >= 102 && bParam2 <= 111 || bParam2 >= 112 && bParam2 <= 121 || bParam2 >= 122 && bParam2 <= 131 || bParam2 >= 132 && bParam2 <= 139 || bParam2 >= 140 && bParam2 <= 149 || bParam2 >= 150 && bParam2 <= 156 || bParam2 == 157)
					return true;
			break;
	
		case joaat("PLAYER_TWO"):
			if (iParam1 == 14)
				if (bParam2 == 89 || bParam2 >= 90 && bParam2 <= 99 || bParam2 >= 100 && bParam2 <= 109 || bParam2 == 111 || bParam2 == 112 || bParam2 >= 113 && bParam2 <= 122 || bParam2 >= 123 && bParam2 <= 132 || bParam2 >= 133 && bParam2 <= 142 || bParam2 >= 143 && bParam2 <= 152 || bParam2 == 153)
					return true;
			break;
	
		case joaat("MP_M_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (iParam3 == -1)
						iParam3 = func_147(bParam0, bParam2, 14, 3);
				
					return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	
		case joaat("MP_F_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (iParam3 == -1)
						iParam3 = func_147(bParam0, bParam2, 14, 4);
				
					return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}

	return false;
}

bool func_165(var uParam0, int iParam1) // Position - 0x10163
{
	int iVar0;
	var uVar1;

	if (PED::IS_PED_INJURED(uParam0))
		return -99;

	iVar0 = PED::GET_PED_PROP_INDEX(uParam0, iParam1, 1);

	if (iVar0 == -1)
		return func_154(iParam1);

	uVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(uParam0, iParam1);
	return func_150(uParam0, iVar0, uVar1, iParam1);
}

bool func_166(var uParam0, int iParam1) // Position - 0x101AA
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || PED::IS_PED_INJURED(uParam0))
		return -99;

	iVar0 = func_135(iParam1);
	uVar1 = PED::GET_PED_DRAWABLE_VARIATION(uParam0, iVar0);
	uVar2 = PED::GET_PED_TEXTURE_VARIATION(uParam0, iVar0);
	return func_167(uParam0, uVar1, uVar2, iParam1);
}

int func_167(var uParam0, int iParam1, var uParam2, int iParam3) // Position - 0x1020A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_135(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(uParam0, iVar0);

	for (iVar3 = 0; iVar3 <= iVar1 - 1; iVar3 = iVar3 + 1)
	{
		if (iVar3 != iParam1)
		{
			iVar2 = iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(uParam0, iVar0, iVar3);
		}
		else
		{
			iVar2 = iVar2 + uParam2;
			return iVar2;
		}
	}

	return -99;
}

void func_168(int iParam0) // Position - 0x10261
{
	if (IS_BIT_SET(Global_80088[1 /*14*/].f_6, 1) && !IS_BIT_SET(Global_80088[1 /*14*/].f_6, 6))
		func_176(iParam0, Global_80088[1 /*14*/].f_5, Global_80088[1 /*14*/].f_2, 2, Global_80088[1 /*14*/].f_1, 1, 0);

	if (IS_BIT_SET(Global_80088[1 /*14*/].f_6, 1) && IS_BIT_SET(Global_80088[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_169(Global_2883588, 2, true, true, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_169(Global_2883588, 2, true, true, -1);
		}
		else
		{
			func_169(Global_2883588, 2, true, true, -1);
		}
	}
}

void func_169(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) // Position - 0x1030D
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	bVar0 = Global_80085;

	if (bParam4 != -1)
		bVar0 = bParam4;

	if (func_175(bParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		iVar3 = func_174(iVar2, bVar0);
		MISC::SET_BIT(&iVar3, uVar1);
		func_170(iVar2, iVar3, bVar0, 1);
	}
}

void func_170(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x10355
{
	int iVar0;

	if (iParam0 != 18486)
	{
		iVar0 = func_171(iParam0, bParam2);
	
		if (iVar0 != 0)
			STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_171(int iParam0, bool bParam1) // Position - 0x10383
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_172(bParam1));
}

bool func_172(bool bParam0) // Position - 0x10398
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam0;

	if (bVar0 == -1)
	{
		bVar1 = func_173();
	
		if (bVar1 > -1)
		{
			Global_2741524 = 0;
			bVar0 = bVar1;
		}
		else
		{
			bVar0 = false;
			Global_2741524 = 1;
		}
	}

	return bVar0;
}

bool func_173() // Position - 0x103CC
{
	return Global_1574927;
}

int func_174(int iParam0, bool bParam1) // Position - 0x103D8
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_171(iParam0, bParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

bool func_175(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) // Position - 0x10407
{
	int iVar0;

	*uParam2 = 18486;

	if (bParam4 && Global_4519719 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	iVar0 = -1;

	if (bParam4)
		if (Global_4519719)
			iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(bParam0);
		else
			iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(bParam0);
	else if (bParam5)
		iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(bParam0);
	else
		iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(bParam0);

	if (iVar0 == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = 3673;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = 3797;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = &func_32;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = 6128;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = 6452;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = 8311;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = 8943;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 231:
					*uParam2 = 10304;
					break;
			
				case 232:
					*uParam2 = 10305;
					break;
			
				case 233:
					*uParam2 = 10306;
					break;
			
				case 234:
					*uParam2 = 10307;
					break;
			
				case 235:
					*uParam2 = 10308;
					break;
			
				case 236:
					*uParam2 = 10309;
					break;
			
				case 237:
					*uParam2 = 10310;
					break;
			
				case 238:
					*uParam2 = 10311;
					break;
			
				case 239:
					*uParam2 = 10312;
					break;
			
				case 240:
					*uParam2 = 10313;
					break;
			
				case 241:
					*uParam2 = 10314;
					break;
			
				case 242:
					*uParam2 = 10315;
					break;
			
				case 243:
					*uParam2 = 10316;
					break;
			
				case 244:
					*uParam2 = 10317;
					break;
			
				case 245:
					*uParam2 = 10318;
					break;
			
				case 246:
					*uParam2 = 10319;
					break;
			
				case 247:
					*uParam2 = 10320;
					break;
			
				case 248:
					*uParam2 = 10321;
					break;
			
				case 249:
					*uParam2 = 10322;
					break;
			
				case 250:
					*uParam2 = 10323;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 251:
					*uParam2 = 10420;
					break;
			
				case 252:
					*uParam2 = 10421;
					break;
			
				case 253:
					*uParam2 = 10422;
					break;
			
				case 254:
					*uParam2 = 10423;
					break;
			
				case 255:
					*uParam2 = 10424;
					break;
			
				case 256:
					*uParam2 = 10425;
					break;
			
				case 257:
					*uParam2 = 10426;
					break;
			
				case 258:
					*uParam2 = 10427;
					break;
			
				case 259:
					*uParam2 = 10428;
					break;
			
				case 260:
					*uParam2 = 10429;
					break;
			
				case 261:
					*uParam2 = 11847;
					break;
			
				case 262:
					*uParam2 = 11848;
					break;
			
				case 263:
					*uParam2 = 11849;
					break;
			
				case 264:
					*uParam2 = 11850;
					break;
			
				case 265:
					*uParam2 = 11851;
					break;
			
				case 266:
					*uParam2 = 11852;
					break;
			
				case 267:
					*uParam2 = 11853;
					break;
			
				case 268:
					*uParam2 = 11854;
					break;
			
				case 269:
					*uParam2 = 11855;
					break;
			
				case 270:
					*uParam2 = 11856;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 271:
					*uParam2 = 11878;
					break;
			
				case 272:
					*uParam2 = 11879;
					break;
			
				case 273:
					*uParam2 = 11880;
					break;
			
				case 274:
					*uParam2 = 11881;
					break;
			
				case 275:
					*uParam2 = 11882;
					break;
			
				case 276:
					*uParam2 = 11883;
					break;
			
				case 277:
					*uParam2 = 11884;
					break;
			
				case 278:
					*uParam2 = 11885;
					break;
			
				case 279:
					*uParam2 = 11886;
					break;
			
				case 280:
					*uParam2 = 11887;
					break;
			
				case 281:
					*uParam2 = 11888;
					break;
			
				case 282:
					*uParam2 = 11889;
					break;
			
				case 283:
					*uParam2 = 11976;
					break;
			
				case 284:
					*uParam2 = 11977;
					break;
			
				case 285:
					*uParam2 = 11978;
					break;
			
				case 286:
					*uParam2 = 11979;
					break;
			
				case 287:
					*uParam2 = 11980;
					break;
			
				case 288:
					*uParam2 = 11981;
					break;
			
				case 289:
					*uParam2 = 11982;
					break;
			
				case 290:
					*uParam2 = 11983;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 291:
					*uParam2 = 11984;
					break;
			
				case 292:
					*uParam2 = 11985;
					break;
			
				case 293:
					*uParam2 = 11986;
					break;
			
				case 294:
					*uParam2 = 11987;
					break;
			
				case 295:
					*uParam2 = 11988;
					break;
			
				case 296:
					*uParam2 = 11989;
					break;
			
				case 297:
					*uParam2 = 11990;
					break;
			
				case 298:
					*uParam2 = 12190;
					break;
			
				case 299:
					*uParam2 = 12191;
					break;
			
				case 300:
					*uParam2 = 12192;
					break;
			
				case 301:
					*uParam2 = 12193;
					break;
			
				case 302:
					*uParam2 = 12194;
					break;
			
				case 303:
					*uParam2 = 12195;
					break;
			
				case 304:
					*uParam2 = 12196;
					break;
			
				case 305:
					*uParam2 = 12197;
					break;
			
				case 306:
					*uParam2 = 12332;
					break;
			
				case 307:
					*uParam2 = 12333;
					break;
			
				case 308:
					*uParam2 = 12334;
					break;
			
				case 309:
					*uParam2 = 12335;
					break;
			
				case 310:
					*uParam2 = 12336;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 311:
					*uParam2 = 13017;
					break;
			
				case 312:
					*uParam2 = 13018;
					break;
			
				case 313:
					*uParam2 = 13019;
					break;
			
				case 314:
					*uParam2 = 13020;
					break;
			
				case 315:
					*uParam2 = 13082;
					break;
			
				case 316:
					*uParam2 = 13083;
					break;
			
				case 317:
					*uParam2 = 14274;
					break;
			
				case 318:
					*uParam2 = 14275;
					break;
			}
			break;
	
		case 2:
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = 2084;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = 5441;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = 6466;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 231:
					*uParam2 = 10324;
					break;
			
				case 232:
					*uParam2 = 10325;
					break;
			
				case 233:
					*uParam2 = 10326;
					break;
			
				case 234:
					*uParam2 = 10327;
					break;
			
				case 235:
					*uParam2 = 10328;
					break;
			
				case 236:
					*uParam2 = 10329;
					break;
			
				case 237:
					*uParam2 = 10330;
					break;
			
				case 238:
					*uParam2 = 10331;
					break;
			
				case 239:
					*uParam2 = 10332;
					break;
			
				case 240:
					*uParam2 = 10333;
					break;
			
				case 241:
					*uParam2 = 10334;
					break;
			
				case 242:
					*uParam2 = 10335;
					break;
			
				case 243:
					*uParam2 = 10336;
					break;
			
				case 244:
					*uParam2 = 10337;
					break;
			
				case 245:
					*uParam2 = 10338;
					break;
			
				case 246:
					*uParam2 = 10339;
					break;
			
				case 247:
					*uParam2 = 10340;
					break;
			
				case 248:
					*uParam2 = 10341;
					break;
			
				case 249:
					*uParam2 = 10342;
					break;
			
				case 250:
					*uParam2 = 10343;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 251:
					*uParam2 = 10430;
					break;
			
				case 252:
					*uParam2 = 10431;
					break;
			
				case 253:
					*uParam2 = 10432;
					break;
			
				case 254:
					*uParam2 = 10433;
					break;
			
				case 255:
					*uParam2 = 10434;
					break;
			
				case 256:
					*uParam2 = 10435;
					break;
			
				case 257:
					*uParam2 = 10436;
					break;
			
				case 258:
					*uParam2 = 10437;
					break;
			
				case 259:
					*uParam2 = 10438;
					break;
			
				case 260:
					*uParam2 = 10439;
					break;
			
				case 261:
					*uParam2 = 11857;
					break;
			
				case 262:
					*uParam2 = 11858;
					break;
			
				case 263:
					*uParam2 = 11859;
					break;
			
				case 264:
					*uParam2 = 11860;
					break;
			
				case 265:
					*uParam2 = 11861;
					break;
			
				case 266:
					*uParam2 = 11862;
					break;
			
				case 267:
					*uParam2 = 11863;
					break;
			
				case 268:
					*uParam2 = 11864;
					break;
			
				case 269:
					*uParam2 = 11865;
					break;
			
				case 270:
					*uParam2 = 11866;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 271:
					*uParam2 = 11890;
					break;
			
				case 272:
					*uParam2 = 11891;
					break;
			
				case 273:
					*uParam2 = 11892;
					break;
			
				case 274:
					*uParam2 = 11893;
					break;
			
				case 275:
					*uParam2 = 11894;
					break;
			
				case 276:
					*uParam2 = 11895;
					break;
			
				case 277:
					*uParam2 = 11896;
					break;
			
				case 278:
					*uParam2 = 11897;
					break;
			
				case 279:
					*uParam2 = 11898;
					break;
			
				case 280:
					*uParam2 = 11899;
					break;
			
				case 281:
					*uParam2 = 11900;
					break;
			
				case 282:
					*uParam2 = 11901;
					break;
			
				case 283:
					*uParam2 = 11991;
					break;
			
				case 284:
					*uParam2 = 11992;
					break;
			
				case 285:
					*uParam2 = 11993;
					break;
			
				case 286:
					*uParam2 = 11994;
					break;
			
				case 287:
					*uParam2 = 11995;
					break;
			
				case 288:
					*uParam2 = 11996;
					break;
			
				case 289:
					*uParam2 = 11997;
					break;
			
				case 290:
					*uParam2 = 11998;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 291:
					*uParam2 = 11999;
					break;
			
				case 292:
					*uParam2 = 12000;
					break;
			
				case 293:
					*uParam2 = 12001;
					break;
			
				case 294:
					*uParam2 = 12002;
					break;
			
				case 295:
					*uParam2 = 12003;
					break;
			
				case 296:
					*uParam2 = 12004;
					break;
			
				case 297:
					*uParam2 = 12005;
					break;
			
				case 298:
					*uParam2 = 12198;
					break;
			
				case 299:
					*uParam2 = 12199;
					break;
			
				case 300:
					*uParam2 = 12200;
					break;
			
				case 301:
					*uParam2 = 12201;
					break;
			
				case 302:
					*uParam2 = 12202;
					break;
			
				case 303:
					*uParam2 = 12203;
					break;
			
				case 304:
					*uParam2 = 12204;
					break;
			
				case 305:
					*uParam2 = 12205;
					break;
			
				case 306:
					*uParam2 = 12337;
					break;
			
				case 307:
					*uParam2 = 12338;
					break;
			
				case 308:
					*uParam2 = 12339;
					break;
			
				case 309:
					*uParam2 = 12340;
					break;
			
				case 310:
					*uParam2 = 12341;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) / 32f))
			{
				case 311:
					*uParam2 = 13021;
					break;
			
				case 312:
					*uParam2 = 13022;
					break;
			
				case 313:
					*uParam2 = 13023;
					break;
			
				case 314:
					*uParam2 = 13024;
					break;
			
				case 315:
					*uParam2 = 13084;
					break;
			
				case 316:
					*uParam2 = 13085;
					break;
			
				case 317:
					*uParam2 = 14276;
					break;
			
				case 318:
					*uParam2 = 14277;
					break;
			}
			break;
	}

	*uParam3 = iVar0 % 32;
	return *uParam2 != 18486;
}

bool func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x130A2
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/][iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/][iParam3], iParam4);
	
		return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114931.f_2370[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114931.f_2370[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}

	return false;
}

bool func_177(int iParam0) // Position - 0x13F45
{
	if (!IS_BIT_SET(Global_80088[1 /*14*/].f_6, 0))
		return false;

	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_80088[1 /*14*/].f_6, 1))
			return false;
	
		if (!IS_BIT_SET(Global_80088[1 /*14*/].f_6, 2))
			return false;
	}

	return true;
}

struct<14> func_178(bool bParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x13F8D
{
	func_242();

	if (bParam0 == joaat("PLAYER_ZERO"))
		func_224(iParam1, bParam2);
	else if (bParam0 == joaat("PLAYER_ONE"))
		func_205(iParam1, bParam2);
	else if (bParam0 == joaat("PLAYER_TWO"))
		func_179(iParam1, bParam2);

	return Global_80088[0 /*14*/];
}

void func_179(int iParam0, int iParam1) // Position - 0x13FDF
{
	switch (iParam0)
	{
		case 0:
			func_204(iParam1);
			break;
	
		case 2:
			func_203(iParam1);
			break;
	
		case 3:
			func_200(iParam1);
			break;
	
		case 4:
			func_199(iParam1);
			break;
	
		case 6:
			func_198(iParam1);
			break;
	
		case 5:
			func_197(iParam1);
			break;
	
		case 8:
			func_196(iParam1);
			break;
	
		case 9:
			func_195(iParam1);
			break;
	
		case 10:
			func_194(iParam1);
			break;
	
		case 1:
			func_193(iParam1);
			break;
	
		case 7:
			func_192(iParam1);
			break;
	
		case 11:
			func_191(iParam1);
			break;
	
		case 12:
			func_190(iParam1);
			break;
	
		case 13:
			func_189(iParam1);
			break;
	
		case 14:
			func_180(iParam1);
			break;
	}
}

void func_180(int iParam0) // Position - 0x140E9
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E1" /* GXT: Specs Pest Shades */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2" /* GXT: Dix Charcoal Glasses */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_1" /* GXT: Dix Brown Glasses */, 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_2" /* GXT: Dix Black Glasses */, 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_3" /* GXT: Dix Checked Glasses */, 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_4" /* GXT: Dix White Glasses */, 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_5" /* GXT: Dix Red Glasses */, 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_6" /* GXT: Dix Maroon Glasses */, 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_7" /* GXT: Dix Yellow Glasses */, 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_8" /* GXT: Dix Spring Glasses */, 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E2_9" /* GXT: Dix Fall Glasses */, 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3" /* GXT: Tung Charcoal Shades */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_1" /* GXT: Tung White Shades */, 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_2" /* GXT: Tung Ash Shades */, 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_3" /* GXT: Tung Red Shades */, 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_4" /* GXT: Tung Blue Shades */, 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_5" /* GXT: Tung Black Shades */, 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_6" /* GXT: Tung Orange Tint Shades */, 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_7" /* GXT: Tung Purple Tint Shades */, 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_8" /* GXT: Tung Hornet Shades */, 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E3_9" /* GXT: Tung Two-Tone Shades */, 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_0" /* GXT: OG Black Shades */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_1" /* GXT: OG Ash Shades */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_2" /* GXT: OG Red Shades */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_3" /* GXT: OG Yellow Shades */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_4" /* GXT: OG Brown Shades */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_5" /* GXT: OG Gray Shades */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_6" /* GXT: OG Blue Shades */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_7" /* GXT: OG Smoke Shades */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_8" /* GXT: OG Orange Shades */, 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E7_9" /* GXT: OG Slate Shades */, 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_0" /* GXT: Steel Aviators */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_1" /* GXT: Slate Aviators */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_2" /* GXT: Gold Aviators */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_3" /* GXT: Silver Two-Tone Aviators */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_4" /* GXT: Aluminum Aviators */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_5" /* GXT: Bronze Two-Tone Aviators */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_6" /* GXT: Brown Two-Tone Aviators */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_7" /* GXT: Black Aviators */, 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_8" /* GXT: Silver Aviators */, 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E8_9" /* GXT: Smoke Aviators */, 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_0" /* GXT: Krepp Gold Shades */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_1" /* GXT: Krepp Gray Shades */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_2" /* GXT: Krepp Slate Shades */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_3" /* GXT: Krepp Black Shades */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_4" /* GXT: Krepp White Shades */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_5" /* GXT: Krepp Silver Shades */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_6" /* GXT: Krepp Ash Shades */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_7" /* GXT: Krepp Brown Shades */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_8" /* GXT: Krepp Beige Shades */, 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E9_9" /* GXT: Krepp Coffee Shades */, 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_0" /* GXT: Broker Black Shades */, 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_1" /* GXT: Broker Purple Shades */, 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_2" /* GXT: Broker Brown Shades */, 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_3" /* GXT: Broker Orange Shades */, 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_4" /* GXT: Broker Gray Shades */, 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_5" /* GXT: Broker Striped Shades */, 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_6" /* GXT: Broker Beige Shades */, 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_7" /* GXT: Broker Ash Shades */, 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_8" /* GXT: Broker Charcoal Shades */, 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_E10_9" /* GXT: Broker Gradient Shades */, 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_H2_0" /* GXT: Hockey Mask */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_H7_0" /* GXT: Black Hat */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_0" /* GXT: Hawk and Little Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_1" /* GXT: Taco Bomb Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_2" /* GXT: Nut House Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_3" /* GXT: Rusty Brown's Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_4" /* GXT: Bishop's Chicken Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_5" /* GXT: 24/7 Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_6" /* GXT: iFruit 80s Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_7" /* GXT: Blarneys Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_8" /* GXT: Pisswasser Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_9" /* GXT: RON Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_10" /* GXT: Logger Light Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_11" /* GXT: Meteorite Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_12" /* GXT: Dusche Gold Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_13" /* GXT: Barracho Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_14" /* GXT: Vespucci Beach Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H26_15" /* GXT: Orang-O-Tang Baseball Cap */, 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 155, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_181(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10) // Position - 0x15360
{
	int iVar0;
	int iVar1;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = iParam2 % 32;
	iParam0->f_2 = iParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_187(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL");

	if (bParam7)
		MISC::SET_BIT(&(iParam0->f_6), 3);

	if (bParam10)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			MISC::SET_BIT(&(iParam0->f_6), 5);
	
		MISC::SET_BIT(&(iParam0->f_6), 1);
		MISC::SET_BIT(&(iParam0->f_6), 2);
		MISC::SET_BIT(&(iParam0->f_6), 6);
	
		if (func_186(14))
			return;
	
		if (iParam1 == 1)
			if (EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
				MISC::SET_BIT(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_185(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_185(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_185(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_185(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_185(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_185(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
	
		if (EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(iParam0->f_6), 1);
			MISC::CLEAR_BIT(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
		MISC::SET_BIT(&(iParam0->f_6), 5);
	
		if (func_176(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 1);
	
		if (func_176(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 2);
	
		if (!func_176(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 4);
	}
	else
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_186(14))
				return;
		
			iVar0 = func_174(func_184(iParam1, iParam0->f_2), Global_80085);
		
			if (IS_BIT_SET(iVar0, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 1);
		
			iVar0 = func_174(func_183(iParam1, iParam0->f_2), Global_80085);
		
			if (IS_BIT_SET(iVar0, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 2);
		
			if (func_182(iParam1, iParam0->f_2, &iVar1))
			{
				iVar0 = func_174(iVar1, Global_80085);
			
				if (!IS_BIT_SET(iVar0, iParam0->f_1))
					MISC::SET_BIT(&(iParam0->f_6), 4);
			}
		}
		else
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}
}

bool func_182(int iParam0, int iParam1, var uParam2) // Position - 0x15702
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

int func_183(int iParam0, int iParam1) // Position - 0x15B07
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
			
				case 3:
					return 1415;
			
				case 4:
					return 944;
			
				case 6:
					return 952;
			
				case 8:
					return 1416;
			
				case 9:
					return 1424;
			
				case 10:
					return 1426;
			
				case 1:
					return 960;
			
				case 7:
					return 1427;
			
				case 11:
					return 936;
			
				case 14:
					return 968;
			
				case 12:
					return 979;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
			
				case 4:
					return 945;
			
				case 6:
					return 953;
			
				case 8:
					return 1417;
			
				case 9:
					return 1425;
			
				case 7:
					return 1428;
			
				case 11:
					return 937;
			
				case 14:
					return 969;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
			
				case 4:
					return 946;
			
				case 6:
					return 954;
			
				case 8:
					return 1418;
			
				case 7:
					return 1429;
			
				case 11:
					return 938;
			
				case 14:
					return 970;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
			
				case 6:
					return 955;
			
				case 8:
					return 1419;
			
				case 11:
					return 939;
			
				case 14:
					return 971;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
			
				case 6:
					return 956;
			
				case 8:
					return 1420;
			
				case 11:
					return 940;
			
				case 14:
					return 972;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
			
				case 6:
					return 957;
			
				case 8:
					return 1421;
			
				case 11:
					return 941;
			
				case 14:
					return 973;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
			
				case 6:
					return 958;
			
				case 8:
					return 1422;
			
				case 11:
					return 942;
			
				case 14:
					return 974;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
			
				case 6:
					return 959;
			
				case 8:
					return 1423;
			
				case 11:
					return 943;
			
				case 14:
					return 975;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
			}
			break;
	}

	return 936;
}

int func_184(int iParam0, int iParam1) // Position - 0x15F02
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
			
				case 3:
					return 1400;
			
				case 4:
					return 892;
			
				case 6:
					return 900;
			
				case 8:
					return 1401;
			
				case 9:
					return 1409;
			
				case 10:
					return 1411;
			
				case 1:
					return 908;
			
				case 7:
					return 1412;
			
				case 11:
					return 884;
			
				case 14:
					return 916;
			
				case 12:
					return 927;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
			
				case 4:
					return 893;
			
				case 6:
					return 901;
			
				case 8:
					return 1402;
			
				case 9:
					return 1410;
			
				case 7:
					return 1413;
			
				case 11:
					return &func_6;
			
				case 14:
					return 917;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
			
				case 4:
					return 894;
			
				case 6:
					return 902;
			
				case 8:
					return 1403;
			
				case 7:
					return 1414;
			
				case 11:
					return 886;
			
				case 14:
					return 918;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
			
				case 6:
					return 903;
			
				case 8:
					return 1404;
			
				case 11:
					return 887;
			
				case 14:
					return 919;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
			
				case 6:
					return 904;
			
				case 8:
					return 1405;
			
				case 11:
					return 888;
			
				case 14:
					return 920;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
			
				case 6:
					return 905;
			
				case 8:
					return 1406;
			
				case 11:
					return 889;
			
				case 14:
					return 921;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
			
				case 6:
					return 906;
			
				case 8:
					return 1407;
			
				case 11:
					return 890;
			
				case 14:
					return 922;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
			
				case 6:
					return 907;
			
				case 8:
					return 1408;
			
				case 11:
					return 891;
			
				case 14:
					return 923;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
			}
			break;
	}

	return 884;
}

bool func_185(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) // Position - 0x162FD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = Global_80085;

	if (bParam4 != -1)
		bVar0 = bParam4;

	if (func_175(bParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_174(iVar2, bVar0);
		return IS_BIT_SET(iVar3, iVar1);
	}

	return false;
}

bool func_186(int iParam0) // Position - 0x1633B
{
	return Global_44886 == iParam0;
}

int func_187(int iParam0) // Position - 0x16349
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1641D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar56;
	int iVar57;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;

	if (iVar0 < 0)
		return;

	iVar1 = Global_80088[0 /*14*/].f_5;

	if (iParam0 == 12)
	{
		iVar17 = iParam1 - iParam2;
	
		if (iVar17 >= 0)
		{
			iVar18 = EXTRAMETADATA::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, 0);
		
			if (iVar18 > iVar17)
			{
				EXTRAMETADATA::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &iVar2);
				Global_2883588 = iVar2.f_1;
				Global_2883589 = iVar2;
				func_181(&Global_80088[0 /*14*/], iParam0, iParam1, &(iVar2.f_7), 0, 0, iVar2.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_181(&Global_80088[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		EXTRAMETADATA::INIT_SHOP_PED_PROP(&iVar19);
		iVar37 = iParam1 - iParam2;
	
		if (iVar37 >= 0)
		{
			iVar38 = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 11, -1, 1, -1, -1);
		
			if (iVar38 > iVar37)
			{
				EXTRAMETADATA::GET_SHOP_PED_QUERY_PROP(iVar37, &iVar19);
			
				if (iVar19.f_6 == 0)
					iVar36 = 9;
				else if (iVar19.f_6 == 1)
					iVar36 = 10;
				else if (iVar19.f_6 == 2)
					iVar36 = 2;
				else if (iVar19.f_6 == 3)
					iVar36 = 3;
				else if (iVar19.f_6 == 4)
					iVar36 = 4;
				else if (iVar19.f_6 == 5)
					iVar36 = 5;
				else if (iVar19.f_6 == 6)
					iVar36 = 6;
				else if (iVar19.f_6 == 7)
					iVar36 = 7;
				else if (iVar19.f_6 == 8)
					iVar36 = 8;
				else
					iVar36 = -1;
			
				Global_2883588 = iVar19.f_1;
				Global_2883589 = iVar19;
				func_181(&Global_80088[0 /*14*/], iParam0, iParam1, &(iVar19.f_9), iVar19.f_3, iVar19.f_4, iVar19.f_5, EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, iVar19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		EXTRAMETADATA::INIT_SHOP_PED_COMPONENT(&iVar39);
	
		if (iParam3 != -1 && Global_80286)
		{
			EXTRAMETADATA::GET_SHOP_PED_COMPONENT(iParam3, &iVar39);
			Global_2883588 = iVar39.f_1;
			Global_2883589 = iVar39;
			func_181(&Global_80088[0 /*14*/], iParam0, iParam1, &(iVar39.f_9), iVar39.f_3, iVar39.f_4, iVar39.f_5, EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, iVar39.f_1 != 0);
			return;
		}
	
		iVar56 = iParam1 - iParam2;
	
		if (iVar56 >= 0)
		{
			iVar57 = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 11, -1, 0, -1, func_135(iParam0));
		
			if (iVar57 > iVar56)
			{
				EXTRAMETADATA::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &iVar39);
				Global_2883588 = iVar39.f_1;
				Global_2883589 = iVar39;
				func_181(&Global_80088[0 /*14*/], iParam0, iParam1, &(iVar39.f_9), iVar39.f_3, iVar39.f_4, iVar39.f_5, EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, iVar39.f_1 != 0);
				return;
			}
		}
	}
}

void func_189(int iParam0) // Position - 0x166A4
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 9, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_190(int iParam0) // Position - 0x167FB
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_0" /* GXT: White T-Shirt, Sweatpants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_5" /* GXT: Dock Worker */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_6" /* GXT: Highway Patrol */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_7" /* GXT: Golf */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_8" /* GXT: Tennis */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_10" /* GXT: Scuba Land */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_12" /* GXT: Stealth */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_13" /* GXT: Triathlon */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_14" /* GXT: Underwear */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_15" /* GXT: Security */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_16" /* GXT: Toilet */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_17" /* GXT: Prologue */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_18" /* GXT: Tuxedo */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_19" /* GXT: Pink Ladies Sweats */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_20" /* GXT: Blue Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_21" /* GXT: Navy Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_22" /* GXT: Gray Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_23" /* GXT: Green Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_24" /* GXT: Hunting */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_25" /* GXT: White T-Shirt, Cargo Pants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_26" /* GXT: Denim Jacket, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_27" /* GXT: Ludendorff */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_28" /* GXT: Beige Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_29" /* GXT: Blue Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_30" /* GXT: Brown Plaid Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_44" /* GXT: Burgundy Cheap Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_45" /* GXT: Murky Plaid Cheap Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_46" /* GXT: Mint Plaid Cheap Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_47" /* GXT: Green Plaid Cheap Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_48" /* GXT: Blue-Gray Cheap Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_49" /* GXT: Caramel Cheap Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_50" /* GXT: Mocha Cheap Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_31" /* GXT: Gray Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_32" /* GXT: Sand Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_33" /* GXT: Charcoal Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_34" /* GXT: Off-White Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_35" /* GXT: Cream Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_36" /* GXT: Black Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_37" /* GXT: Ash Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_38" /* GXT: Red T-Shirt, Cargo Pants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_39" /* GXT: Amethyst Polo Shirt, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_40" /* GXT: White T-Shirt, Camo Pants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_41" /* GXT: Moto-X */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_42" /* GXT: White Tank Top, Sweatpants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_43" /* GXT: White T-Shirt, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P2_12" /* GXT: Stealth */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 48, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_191(int iParam0) // Position - 0x16D09
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 1, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_192(int iParam0) // Position - 0x16D7E
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 1, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_193(int iParam0) // Position - 0x16DF2
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P2_0_0" /* GXT: Clean Shave */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P2_1_0" /* GXT: Beard 1 */, 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P2_2_0" /* GXT: Stubble */, 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P2_3_0" /* GXT: Big Mustache */, 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P2_4_0" /* GXT: Handlebar */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P2_5_0" /* GXT: The Gerry */, 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 6, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_194(int iParam0) // Position - 0x16ED9
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
	
		default:
			func_188(iVar10, iParam0, 33, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_195(int iParam0) // Position - 0x1723C
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
	
		default:
			func_188(iVar10, iParam0, 17, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_196(int iParam0) // Position - 0x1744D
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P2_0_0" /* GXT: Black Digital Watch */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P2_0_1" /* GXT: White Digital Watch */, 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 18, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_197(int iParam0) // Position - 0x1767D
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 7, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_198(int iParam0) // Position - 0x1778D
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_0" /* GXT: Black Chukka Boots */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_1" /* GXT: Snakeskin Chukka Boots */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_2" /* GXT: Gray Chukka Boots */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_3" /* GXT: Brown Chukka Boots */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_4" /* GXT: Crocodile Skin Boots */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_5" /* GXT: Cowboy Boots */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_6" /* GXT: Yellow Reptile Skin Boots */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_0_7" /* GXT: Reptile Skin Boots */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_5_0" /* GXT: Work Boots */, 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_8_0" /* GXT: Dressy Shoes */, 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_0" /* GXT: Black Leather Loafers */, 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_1" /* GXT: Gray Leather Loafers */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_2" /* GXT: Cream Leather Loafers */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_3" /* GXT: Brown Leather Loafers */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_4" /* GXT: White Leather Loafers */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = &func_1;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_5" /* GXT: Russet Leather Loafers */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = &func_2;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_9_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = &func_1;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_10_0" /* GXT: Chestnut Boots */, 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_0" /* GXT: All Black Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_1" /* GXT: Chocolate Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_2" /* GXT: Chestnut Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_3" /* GXT: Tan Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_4" /* GXT: White Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_5" /* GXT: Ash Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_7" /* GXT: Beige Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_8" /* GXT: Topaz Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_9" /* GXT: Black Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_10" /* GXT: Lime Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = &func_2;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_12" /* GXT: Coffee Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_13" /* GXT: Gray Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_14" /* GXT: Cream Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = &func_4;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_18_15" /* GXT: Navy Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_0" /* GXT: Black Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_1" /* GXT: Red Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_2" /* GXT: Brown Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_4" /* GXT: Green Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_5" /* GXT: Copper Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_7" /* GXT: Navy Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_8" /* GXT: Blue Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_9" /* GXT: Beige Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_10" /* GXT: White Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_11" /* GXT: Tan Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_19_15" /* GXT: Gray Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_0" /* GXT: Brown Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_1" /* GXT: Navy Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_2" /* GXT: Coffee Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_3" /* GXT: Burgundy Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_4" /* GXT: Blue Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_6" /* GXT: Black Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_7" /* GXT: Tan Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_8" /* GXT: Purple Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_9" /* GXT: Brown Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_10" /* GXT: Chocolate Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_11" /* GXT: Green Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_12" /* GXT: Ash Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_13" /* GXT: Olive Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P2_20_15" /* GXT: Yellow Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
	
		default:
			func_188(iVar10, iParam0, 84, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_199(int iParam0) // Position - 0x1812C
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_0_0" /* GXT: Blue Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_0_1" /* GXT: Dirty Blue Jeans */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_0_2" /* GXT: Navy Jeans */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_0_3" /* GXT: Faded Jeans */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_0" /* GXT: Black Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_1" /* GXT: Russet Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_2" /* GXT: White Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_3" /* GXT: Maroon Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_4" /* GXT: Lobster Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_5" /* GXT: Stone Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_6" /* GXT: Pink Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_7" /* GXT: Mint Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_8" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_9" /* GXT: Pale Blue Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_10" /* GXT: Beige Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_11_11" /* GXT: Aqua Plaid Golf Pants */, 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_14_0" /* GXT: Black Cargo Pants */, 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_15_0" /* GXT: White Shorts */, 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_16_0" /* GXT: Pink Sweatpants */, 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_0" /* GXT: Brown Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_1" /* GXT: Charcoal Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_2" /* GXT: Gray Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_3" /* GXT: Tan Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_4" /* GXT: Blue Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_5" /* GXT: Ash Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_6" /* GXT: White Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_17_7" /* GXT: Beige Work Pants */, 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_0" /* GXT: Tan Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_1" /* GXT: Cream Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_2" /* GXT: Silver Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_3" /* GXT: Gray Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_4" /* GXT: Charcoal Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_5" /* GXT: Green Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_6" /* GXT: White Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_7" /* GXT: Urban Camo Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_8" /* GXT: Desert Camo Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_9" /* GXT: Field Camo Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_18_10" /* GXT: Forest Camo Cargo Pants */, 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_0" /* GXT: Black Shorts */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_1" /* GXT: Pale Blue Shorts */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_2" /* GXT: Orange Shorts */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_3" /* GXT: Blue Shorts */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_4" /* GXT: Slate Shorts */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_5" /* GXT: Green Shorts */, 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_6" /* GXT: Crimson Shorts */, 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_19_7" /* GXT: Pale Blue Stripe Shorts */, 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_0" /* GXT: Gray Pants */, 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_1" /* GXT: Khaki Pants */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_2" /* GXT: Charcoal Pants */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_3" /* GXT: Cream Pants */, 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_4" /* GXT: Stone Pants */, 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_5" /* GXT: Black Pants */, 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_6" /* GXT: Ash Pants */, 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_7" /* GXT: Beige Pants */, 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_20_8" /* GXT: Brown Pants */, 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_0" /* GXT: Beige Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_1" /* GXT: Blue Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_2" /* GXT: Brown Plaid Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_3" /* GXT: Burgundy Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_4" /* GXT: Murky Plaid Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_5" /* GXT: Mint Plaid Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_6" /* GXT: Green Plaid Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_7" /* GXT: Blue-Gray Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_8" /* GXT: Caramel Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_21_9" /* GXT: Mocha Cheap Pants */, 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_0" /* GXT: White Briefs */, 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_1" /* GXT: Green Briefs */, 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_2" /* GXT: Gray Briefs */, 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_3" /* GXT: Leopardskin Briefs */, 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_4" /* GXT: Impotent Rage Briefs */, 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_5" /* GXT: Pink Leopardskin Briefs */, 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_6" /* GXT: Space Monkey Briefs 1 */, 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_7" /* GXT: Space Monkey Briefs 2 */, 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_8" /* GXT: Space Monkey Briefs 3 */, 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_22_9" /* GXT: Space Monkey Briefs 4 */, 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_23_0" /* GXT: Sweatpants */, 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P2_24_0" /* GXT: Brown Tuxedo Pants */, 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
	
		default:
			func_188(iVar10, iParam0, 104, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_200(int iParam0) // Position - 0x18C9F
{
	if (iParam0 < 136)
		func_202(iParam0);
	else
		func_201(iParam0);

	if (Global_80088[0 /*14*/].f_2 == -1)
		func_188(3, iParam0, 242, -1);
}

void func_201(int iParam0) // Position - 0x18CD4
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_0" /* GXT: Peyton Blue Blouson */, 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_1" /* GXT: Overlooked Red Blouson */, 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_2" /* GXT: Natural Blouson */, 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_3" /* GXT: Sky Blue Blouson */, 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_4" /* GXT: Deep Green Blouson */, 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_5" /* GXT: Champagne Driver Blouson */, 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_6" /* GXT: Snakeskin Blouson */, 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_21_7" /* GXT: Desert Brown Blouson */, 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_0" /* GXT: Black Striped Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_1" /* GXT: Black Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_2" /* GXT: Chestnut Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_3" /* GXT: Red Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_4" /* GXT: White Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_5" /* GXT: Blue Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_6" /* GXT: Lonewolf Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_7" /* GXT: Brown Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_8" /* GXT: Gray Striped Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_9" /* GXT: Gray Banded Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_10" /* GXT: Russet Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_22_11" /* GXT: Brown Suede Jacket */, 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_23_0" /* GXT: Brown Shooting Vest */, 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_23_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_23_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_23_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_23_4" /* GXT: Field Shooting Vest */, 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_23_5" /* GXT: Forest Shooting Vest */, 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_0" /* GXT: Yellow Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_1" /* GXT: Blue Birds Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_2" /* GXT: Orange Pattern Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_3" /* GXT: Blue Stars Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_4" /* GXT: Aqua Pattern Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_5" /* GXT: Degenatron Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_6" /* GXT: Taco Libre Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_7" /* GXT: Pussycat Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_8" /* GXT: Lemon Pattern Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_9" /* GXT: Charcoal Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_10" /* GXT: Off-White Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_11" /* GXT: Banded Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_12" /* GXT: Orange Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_13" /* GXT: Camo Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_14" /* GXT: Indigo Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_24_15" /* GXT: Liberty Cocks Tank Top */, 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_0" /* GXT: Blue Two-Tone Shirt */, 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_1" /* GXT: Circles Shirt */, 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_2" /* GXT: Gray Two-Tone Shirt */, 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_3" /* GXT: Mustard Shirt */, 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_4" /* GXT: Blue Checkered Shirt */, 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_5" /* GXT: Floral Shirt */, 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_6" /* GXT: Beige Shirt */, 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_7" /* GXT: Lavender Shirt */, 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_8" /* GXT: Black Shirt */, 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_9" /* GXT: Monogrammed Shirt */, 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_10" /* GXT: Paisley Shirt */, 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_25_11" /* GXT: Camel Shirt */, 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_0" /* GXT: Beige Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_1" /* GXT: Blue Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_2" /* GXT: Brown Plaid Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_3" /* GXT: Burgundy Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_4" /* GXT: Murky Plaid Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_5" /* GXT: Mint Plaid Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_6" /* GXT: Green Plaid Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_7" /* GXT: Blue-Gray Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_8" /* GXT: Caramel Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_26_9" /* GXT: Mocha Tight Jacket */, 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_27_0" /* GXT: Gray Jacket */, 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_27_1" /* GXT: Oatmeal Jacket */, 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_27_2" /* GXT: Charcoal Jacket */, 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_27_3" /* GXT: Off-White Jacket */, 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_27_4" /* GXT: Cream Jacket */, 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_27_5" /* GXT: Black Jacket */, 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_27_6" /* GXT: Ash Jacket */, 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_0" /* GXT: Dark Gray Sweater */, 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_1" /* GXT: Pale Gray Sweater */, 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_2" /* GXT: Taupe Sweater */, 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_3" /* GXT: Pale Blue Sweater */, 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_4" /* GXT: Tangerine Sweater */, 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_5" /* GXT: Quarry Brown Sweater */, 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_6" /* GXT: Dark Chevrons Sweater */, 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_7" /* GXT: Zingy Chevrons Sweater */, 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_8" /* GXT: Rainbow Field Sweater */, 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_9" /* GXT: Dark Field Sweater */, 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_10" /* GXT: Animal Strip Sweater */, 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_11" /* GXT: Bill Brown Sweater */, 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_12" /* GXT: Mint Argyle Sweater */, 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_13" /* GXT: Gray Argyle Sweater */, 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_14" /* GXT: Grape Eighties Sweater */, 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_28_15" /* GXT: Geometric Eighties Sweater */, 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_0" /* GXT: Black Jacket */, 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_1" /* GXT: All Black Jacket */, 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_2" /* GXT: White Jacket */, 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_3" /* GXT: Cream Jacket */, 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_4" /* GXT: Oatmeal Jacket */, 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_5" /* GXT: Blue-Gray Jacket */, 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_6" /* GXT: Beige Jacket */, 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_7" /* GXT: Off-White Jacket */, 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_8" /* GXT: Gray Suit Jacket */, 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_29_9" /* GXT: Ash Suit Jacket */, 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_0" /* GXT: Gray Blazer */, 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_1" /* GXT: Beige Blazer */, 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_2" /* GXT: Black Blazer */, 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_3" /* GXT: Brown Blazer */, 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_4" /* GXT: Navy Blazer */, 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_5" /* GXT: Navy Pinstripe Blazer */, 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_6" /* GXT: Blue-Gray Pinstripe Blazer */, 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_30_7" /* GXT: Brown Pinstripe Blazer */, 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_31_0" /* GXT: Tuxedo Jacket */, 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
	
		default:
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_202(int iParam0) // Position - 0x198D8
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_0" /* GXT: White T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_1" /* GXT: Yellow T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_2" /* GXT: Dusche Gold T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_3" /* GXT: Charcoal T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_4" /* GXT: Cerveza Barracho T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_5" /* GXT: Liberty City Wrath T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_6" /* GXT: Pump & Run T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_7" /* GXT: Atomic T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_8" /* GXT: LS Nuclear Power T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_9" /* GXT: Zancudo T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_10" /* GXT: West Coast Classics T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_11" /* GXT: BC Talk Radio T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_12" /* GXT: Animal Ark T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_13" /* GXT: Rimmers T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_14" /* GXT: Paperclips T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_0_15" /* GXT: Pop's Pills T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_0" /* GXT: Los Santos Tank Top */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_1" /* GXT: Del Perro Pier Tank Top */, 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_2" /* GXT: San Andreas Tank Top */, 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_3" /* GXT: Love Fist Tank Top */, 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_4" /* GXT: Space Monkey Tank Top 1 */, 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_5" /* GXT: Space Monkey Tank Top 2 */, 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_6" /* GXT: Space Monkey Tank Top 3 */, 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_7" /* GXT: Space Monkey Tank Top 4 */, 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_3_8" /* GXT: Space Monkey Tank Top 5 */, 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_0" /* GXT: Rearwall Black Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_1" /* GXT: Crevis Green Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_2" /* GXT: Rearwall Fluoro Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_3" /* GXT: Rearwall Coffee Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_4tu" /* GXT: Crevis Yellow Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_5tu" /* GXT: Eris Yellow Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_6tu" /* GXT: Crevis Red Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_7" /* GXT: Rearwall Red Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_8" /* GXT: Crevis Blue Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_9" /* GXT: Eris Gray Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_10" /* GXT: Eris Red Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_11" /* GXT: Eris Olive Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_12" /* GXT: Eris Aqua Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_13" /* GXT: Eris Blue Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_14" /* GXT: Crevis Gray Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_4_15" /* GXT: Eris Tan Down Jacket */, 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_0" /* GXT: Red Floral Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_1" /* GXT: Amethyst Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_2" /* GXT: Turquoise Striped Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_3" /* GXT: Pink Striped Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_4" /* GXT: Mustard Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_5" /* GXT: Orange Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_6" /* GXT: Topaz Striped Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_7" /* GXT: Mint Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_8" /* GXT: Navy Striped Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_9" /* GXT: Green Striped Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_10" /* GXT: Turquoise Two-Tone Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_11" /* GXT: Brown Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_12" /* GXT: Pink Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_13" /* GXT: Green Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_14" /* GXT: Aqua Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_11_15" /* GXT: Brown Striped Polo Shirt */, 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_0" /* GXT: Mint Floral Dress */, 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_1" /* GXT: Pink Dress */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_2" /* GXT: White Floral Dress */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_3" /* GXT: Purple Zebra Dress */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_4" /* GXT: Cream Dress */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_5" /* GXT: Space Monkey Dress 1 */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_6" /* GXT: Space Monkey Dress 2 */, 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_13_7" /* GXT: Space Monkey Dress 3 */, 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_0" /* GXT: Black Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_1" /* GXT: Silver Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_2" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_4" /* GXT: LSGC Gray Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_6" /* GXT: Blauser Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_7" /* GXT: LSGC Forest Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_8" /* GXT: Penetrators Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_9" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_10" /* GXT: Blue Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_11" /* GXT: Green Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_12" /* GXT: LS Jardineros Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_13" /* GXT: Ash 18 Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_14" /* GXT: Red Mist XI Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_14_15" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_15_0" /* GXT: Tennis Shirt */, 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_16_0" /* GXT: Bare Chest */, 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_17_0" /* GXT: Pink Jacket */, 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_18_0" /* GXT: Blue Denim Jacket */, 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_18_1" /* GXT: Black Denim Jacket */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_18_2" /* GXT: Gray Denim Jacket */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_18_3" /* GXT: Brown Denim Jacket */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_18_4" /* GXT: Faded Denim Jacket */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_18_5" /* GXT: Ash Denim Jacket */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_0" /* GXT: Denim Shirt */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_1" /* GXT: Faded Denim Shirt */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_2" /* GXT: Black Shirt */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_3" /* GXT: Gray Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_4" /* GXT: Brown Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_5" /* GXT: Red Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_6" /* GXT: Brown Shirt */, 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_7" /* GXT: Khaki Shirt */, 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_8" /* GXT: Red Plaid Shirt */, 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_9" /* GXT: Brown Plaid Shirt */, 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_10" /* GXT: Green Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_11" /* GXT: Maroon Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_12" /* GXT: Gray Shirt */, 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_13" /* GXT: Blue Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_14" /* GXT: Blue Two-Tone Shirt */, 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_19_15" /* GXT: Navy Shirt */, 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_0" /* GXT: Burgundy Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_1" /* GXT: Purple Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_2" /* GXT: Crimson Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_3" /* GXT: Tan Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_4" /* GXT: Flames Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_5" /* GXT: Skull Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_6" /* GXT: Pale Blue Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_7" /* GXT: Scarab Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_8" /* GXT: Cream Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_9" /* GXT: Cube Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_10" /* GXT: Beige Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_11" /* GXT: Blue Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_12" /* GXT: Yellow Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_13" /* GXT: Pink Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_14" /* GXT: White Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P2_20_15" /* GXT: Black Bowling Shirt */, 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
	
		default:
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_203(int iParam0) // Position - 0x1A7E6
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_0_0" /* GXT: Trailer Cut */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_0_1" /* GXT: Frozen */, 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_1_0" /* GXT: Clean Razor */, 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_2_0" /* GXT: Randal */, 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_3_0" /* GXT: Side Shed */, 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_4_0" /* GXT: Grown Out */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_5_0" /* GXT: Mullet */, 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_6_0" /* GXT: Shaved 2 */, 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P2_7_0" /* GXT: Swept Back */, 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 9, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_204(int iParam0) // Position - 0x1A913
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_80088[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
	
		default:
			func_188(iVar10, iParam0, 7, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_205(int iParam0, int iParam1) // Position - 0x1AA11
{
	switch (iParam0)
	{
		case 0:
			func_223(iParam1);
			break;
	
		case 2:
			func_222(iParam1);
			break;
	
		case 3:
			func_218(iParam1);
			break;
	
		case 4:
			func_217(iParam1);
			break;
	
		case 6:
			func_216(iParam1);
			break;
	
		case 5:
			func_215(iParam1);
			break;
	
		case 8:
			func_214(iParam1);
			break;
	
		case 9:
			func_213(iParam1);
			break;
	
		case 10:
			func_212(iParam1);
			break;
	
		case 1:
			func_211(iParam1);
			break;
	
		case 7:
			func_210(iParam1);
			break;
	
		case 11:
			func_209(iParam1);
			break;
	
		case 12:
			func_208(iParam1);
			break;
	
		case 13:
			func_207(iParam1);
			break;
	
		case 14:
			func_206(iParam1);
			break;
	}
}

void func_206(int iParam0) // Position - 0x1AB01
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_0" /* GXT: De Koch Diamond Studs */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_1" /* GXT: De Koch Obsidian Studs */, 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_2" /* GXT: De Koch Sapphire Studs */, 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_3" /* GXT: De Koch Opal Studs */, 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_4" /* GXT: De Koch Platinum Studs */, 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_5" /* GXT: De Koch Garnet Studs */, 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_6" /* GXT: De Koch Jasper Studs */, 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA1_7" /* GXT: De Koch Aquamarine Studs */, 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_0" /* GXT: Vankhov Diamond Studs */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_1" /* GXT: Vankhov Emerald Studs */, 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_2" /* GXT: Vankhov Quartz Studs */, 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_3" /* GXT: Vankhov Obsidian Studs */, 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_4" /* GXT: Vankhov Platinum Studs */, 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_5" /* GXT: Vankhov Agate Studs */, 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_6" /* GXT: Vankhov Jade Studs */, 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_EA2_7" /* GXT: Vankhov Onyx Studs */, 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_0" /* GXT: Orange Tint Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_1" /* GXT: Slate Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_2" /* GXT: Gray Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_3" /* GXT: Brown Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_4" /* GXT: Burgundy Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_5" /* GXT: Chocolate Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_6" /* GXT: Black Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_7" /* GXT: Purple Tint Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_8" /* GXT: Blue-Gray Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E1_9" /* GXT: White Contour Shades */, 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E2" /* GXT: Swimming Goggles */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E3" /* GXT: Racer Shades */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E4_0" /* GXT: Stank Slate Shades */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E4_1" /* GXT: Broker Ash Shades */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E4_2" /* GXT: Broker Chocolate Shades */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E4_3" /* GXT: Stank Black Shades */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E4_4" /* GXT: Broker Black Shades */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E4_5" /* GXT: Stank Green Tint Shades */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E4_6" /* GXT: Stank Blue Tint Shades */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_0" /* GXT: Black Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_1" /* GXT: White Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_2" /* GXT: Brown Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_3" /* GXT: Gray Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_4" /* GXT: Two-Tone Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_5" /* GXT: Bone Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_6" /* GXT: Red Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_7" /* GXT: Silver Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_8" /* GXT: Charcoal Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E5_9" /* GXT: Gold Aviator Shades */, 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_0" /* GXT: Tinted Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_1" /* GXT: Silver Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_2" /* GXT: Sepia Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_3" /* GXT: Blue Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_4" /* GXT: Yellow Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_5" /* GXT: Gray Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_6" /* GXT: Black Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_7" /* GXT: Slate Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_8" /* GXT: Smoke Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E6_9" /* GXT: Gold Aviator Glasses */, 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_0" /* GXT: Suburban Black Shades */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_1" /* GXT: Suburban Teal Shades */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_2" /* GXT: Suburban Tortoiseshell Shades */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_3" /* GXT: Suburban Orange Shades */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_4" /* GXT: Fuque White Shades */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_5" /* GXT: Fuque Camo Shades */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_6" /* GXT: Fuque Yellow Shades */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_7" /* GXT: Fuque Burgundy Shades */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_8" /* GXT: Fuque Funky Shades */, 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E7_9" /* GXT: Fuque Squared Shades */, 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_0" /* GXT: Gold T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_1" /* GXT: Silver T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_2" /* GXT: Two-Tone T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_3" /* GXT: Green T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_4" /* GXT: Brown T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_5" /* GXT: Peach T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_6" /* GXT: Gray T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E8_7" /* GXT: Orange T-Bone Shades */, 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_0" /* GXT: Yellow Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_1" /* GXT: Gray Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_2" /* GXT: Hornet Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_3" /* GXT: Copper Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_4" /* GXT: Blue Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_5" /* GXT: Sepia Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_6" /* GXT: White Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_7" /* GXT: Orange Tint Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_8" /* GXT: Blue Tint Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E9_9" /* GXT: Smoke Mono Shades */, 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E10_0" /* GXT: Gold Triptych Shades */, 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E10_1" /* GXT: Gray Triptych Shades */, 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E10_2" /* GXT: Silver Triptych Shades */, 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E10_3" /* GXT: Two-Tone Triptych Shades */, 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E10_4" /* GXT: Copper Triptych Shades */, 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E10_5" /* GXT: Black Triptych Shades */, 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_E10_6" /* GXT: White Triptych Shades */, 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H0_0" /* GXT: Hockey Mask */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H3_0" /* GXT: Gray Flat Cap */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_0" /* GXT: Toe Shoes Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_1" /* GXT: Yeti Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_2" /* GXT: OG Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_3" /* GXT: Magnetics Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_4" /* GXT: LS Red Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_5" /* GXT: Los Santos Charcoal Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_6" /* GXT: Stank Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_7" /* GXT: Los Santos Gray Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_8" /* GXT: Perseus Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_9" /* GXT: Feud Slate Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_10" /* GXT: Feud Black Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_11" /* GXT: LS Black Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_12" /* GXT: LS Corkers Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_13" /* GXT: LS White Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_14" /* GXT: Feud Green Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_15" /* GXT: LS Olive Fitted Cap */, 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_0" /* GXT: Toe Shoes Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_1" /* GXT: Yeti Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_2" /* GXT: OG Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_3" /* GXT: Magnetics Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_4" /* GXT: LS Red Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_5" /* GXT: Los Santos Charcoal Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_6" /* GXT: Stank Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_7" /* GXT: Los Santos Gray Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_8" /* GXT: Perseus Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_9" /* GXT: Feud Slate Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_10" /* GXT: Feud Black Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_11" /* GXT: LS Black Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_12" /* GXT: LS Corkers Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_13" /* GXT: LS White Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_14" /* GXT: Feud Green Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H19_15" /* GXT: LS Olive Fitted Cap */, 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 175, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_207(int iParam0) // Position - 0x1BFF2
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 9, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_208(int iParam0) // Position - 0x1C144
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_0" /* GXT: Blue Shirt, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_2" /* GXT: White Tuxedo */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_4" /* GXT: Golf */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_7" /* GXT: Scuba Land */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_10" /* GXT: Stealth */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_11" /* GXT: Triathlon */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_12" /* GXT: Fireman */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_13" /* GXT: Exterminator */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_15" /* GXT: Black Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_16" /* GXT: Skydiving */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_17" /* GXT: Tuxedo */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_18" /* GXT: Blue Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_19" /* GXT: Navy Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_20" /* GXT: Gray Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_21" /* GXT: Green Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_22" /* GXT: Ash Hoodie, Sweatpants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_23" /* GXT: Yellow Check Shirt, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_24" /* GXT: Gray Plaid Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_25" /* GXT: Black Hoodie, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_26" /* GXT: Track Jacket, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_27" /* GXT: Off-White Shirt, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_28" /* GXT: Gray Plaid 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_29" /* GXT: Ash Plaid 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_30" /* GXT: Charcoal Plaid 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_31" /* GXT: Tan Plaid 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_32" /* GXT: Slate 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_33" /* GXT: Ash 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_34" /* GXT: Stone 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_35" /* GXT: Oatmeal 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_36" /* GXT: Navy Plaid Piped 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_37" /* GXT: Off-White 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_38" /* GXT: Red Piped 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_39" /* GXT: Gray Piped 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_40" /* GXT: Navy 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_41" /* GXT: Russet Piped 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_42" /* GXT: Green 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_43" /* GXT: Beige 3 Piece Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_47" /* GXT: Underwear */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_48" /* GXT: LS Black Hoodie, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_49" /* GXT: Gray Hoodie, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_10" /* GXT: Stealth */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_50" /* GXT: Moto X */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_51" /* GXT: U.R. Jersey, Fatigues */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_52" /* GXT: U.R. OG Tee, Bike Leathers */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_53" /* GXT: Uptown Riders Longsleeve, Camos */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P1_54" /* GXT: U.R. Jacket, Baggies */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 47, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_209(int iParam0) // Position - 0x1C64F
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_0" /* GXT: Silver Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_1" /* GXT: Ash Vest */, 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_2" /* GXT: Navy Vest */, 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_3" /* GXT: Colorful Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_4" /* GXT: Beige Vest */, 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_5" /* GXT: Black Vest */, 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_6" /* GXT: Gray Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_7" /* GXT: Jade Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_8" /* GXT: Beige Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_9" /* GXT: Brown Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_10" /* GXT: Brown Vest */, 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_11" /* GXT: White Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_12" /* GXT: Pearl Plaid Vest */, 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_13" /* GXT: Warm Gray Vest */, 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_14" /* GXT: Topaz Vest */, 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_15" /* GXT: Plum Vest */, 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_0" /* GXT: Silver Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_1" /* GXT: Ash Vest */, 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_2" /* GXT: Navy Vest */, 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_3" /* GXT: Colorful Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_4" /* GXT: Beige Vest */, 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_5" /* GXT: Black Vest */, 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_6" /* GXT: Gray Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_7" /* GXT: Jade Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_8" /* GXT: Beige Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_9" /* GXT: Brown Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_10" /* GXT: Brown Vest */, 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_11" /* GXT: White Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_12" /* GXT: Pearl Plaid Vest */, 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_13" /* GXT: Warm Gray Vest */, 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_14" /* GXT: Topaz Vest */, 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_3_15" /* GXT: Plum Vest */, 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_5_0" /* GXT: White Shirt */, 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_6_0" /* GXT: White Shirt */, 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_6_1" /* GXT: Two-Tone Shirt */, 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_7_0" /* GXT: Charcoal Hoodie */, 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_8_0" /* GXT: White T-Shirt */, 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_9_0" /* GXT: Blue Shirt */, 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_0" /* GXT: White T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_1" /* GXT: Crevis T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_2" /* GXT: Yeti T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_3" /* GXT: Sweatbox T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_4" /* GXT: Trey Baker T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_5" /* GXT: Black T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_6" /* GXT: Fruntalot T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_7" /* GXT: Kingz of Los Santos T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_8" /* GXT: Ten Off The Chain T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_9" /* GXT: Gray T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_10" /* GXT: Green T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_11" /* GXT: Camo T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_12" /* GXT: Yeti Rainbow T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_13" /* GXT: Feud Banded T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_14" /* GXT: Yogarishima T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P1_10_15" /* GXT: Feud Gray T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
	
		default:
			func_188(iVar10, iParam0, 63, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_210(int iParam0) // Position - 0x1CCBD
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 1, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_211(int iParam0) // Position - 0x1CD31
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P1_0_0" /* GXT: Clean Shave */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P1_1_0" /* GXT: Full Van Dyke */, 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P1_2_0" /* GXT: Methodical */, 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P1_3_0" /* GXT: Full Spartan */, 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P1_4_0" /* GXT: Stubble */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 5, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_212(int iParam0) // Position - 0x1CE01
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 53, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_213(int iParam0) // Position - 0x1D331
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 12, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_214(int iParam0) // Position - 0x1D4C8
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_9_0" /* GXT: Bandana */, 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_0" /* GXT: Silver Tie */, 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_1" /* GXT: Gold Tie */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_2" /* GXT: Cream Tie */, 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_3" /* GXT: Blue Diamond Tie */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_4" /* GXT: Blue Spotted Tie */, 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_5" /* GXT: White Spotted Tie */, 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_6" /* GXT: Dark Gray Tie */, 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_7" /* GXT: Gray Striped Tie */, 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_8" /* GXT: Silver Striped Tie */, 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_9" /* GXT: Red Striped Tie */, 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_10" /* GXT: Bronze Striped Tie */, 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_11" /* GXT: White Diamond Tie */, 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_11_12" /* GXT: Black Diamond Tie */, 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 77, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_215(int iParam0) // Position - 0x1DCC6
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 7, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_216(int iParam0) // Position - 0x1DDD6
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_0" /* GXT: White Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_1" /* GXT: All White Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_2" /* GXT: Charcoal Two-Tone Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_3" /* GXT: Yellow Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_4" /* GXT: Gray Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_5" /* GXT: Black Two-Tone Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_6" /* GXT: Gray Two-Tone Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_7" /* GXT: Lemon Accent Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_8" /* GXT: Two-Tone Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_9" /* GXT: Cyan Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_10" /* GXT: Cyan Accent Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_00_11" /* GXT: Fluorescent Athletic Shoes */, 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_01_0" /* GXT: Work Boots */, 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_06_0" /* GXT: Desert Round-Toe Boots */, 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_06_1" /* GXT: Coffee Round-Toe Boots */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_06_2" /* GXT: Chocolate Round-Toe Boots */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_06_3" /* GXT: Gray Round-Toe Boots */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_06_4" /* GXT: Slate Round-Toe Boots */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_06_5" /* GXT: Copper Round-Toe Boots */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_0" /* GXT: Gray Snake Shoes */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_1" /* GXT: Black Shoes */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_2" /* GXT: White Snake Shoes */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_3" /* GXT: Gray Crocodile Shoes */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_4" /* GXT: Alligator Shoes */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_5" /* GXT: Brown Crocodile Shoes */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_6" /* GXT: Rattlesnake Shoes */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_7" /* GXT: Gray Python Shoes */, 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_08_8" /* GXT: Two-Tone Crocodile Shoes */, 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_10_0" /* GXT: Black Brogues */, 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_0" /* GXT: Two-Tone Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_1" /* GXT: Orange Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_2" /* GXT: Black Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_3" /* GXT: Desert Green Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_4" /* GXT: Mint Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_5" /* GXT: Freeway Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_6" /* GXT: Animal Fashion Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_7" /* GXT: Feud Classic Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_8" /* GXT: Cacao Blend Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_9" /* GXT: Magnetics Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_10" /* GXT: Blue Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_11" /* GXT: White Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_12" /* GXT: Winter Camo Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_13" /* GXT: Forest Camo Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_14" /* GXT: Soft Seas Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_11_15" /* GXT: Latte Sneakers */, 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_0" /* GXT: White Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_1" /* GXT: Green Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_2" /* GXT: Two-Tone Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_3" /* GXT: Black Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_4" /* GXT: Blue Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_5" /* GXT: Orange Accent Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_6" /* GXT: Red Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_7" /* GXT: Orange Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_8" /* GXT: Mocha Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_9" /* GXT: Black Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_10" /* GXT: Fresh Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_12_11" /* GXT: Green Skate Sneakers */, 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_13_0" /* GXT: Black Oxfords */, 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_0" /* GXT: Gray Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_1" /* GXT: White Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_2" /* GXT: Chestnut Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_3" /* GXT: Jade Accent Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_4" /* GXT: Two-Tone Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_5" /* GXT: Red Piped Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_6" /* GXT: Red Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_14_7" /* GXT: Beige Skate Shoes */, 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_0" /* GXT: Black Leather Loafers */, 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_1" /* GXT: Gray Leather Loafers */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_2" /* GXT: Cream Leather Loafers */, 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_3" /* GXT: Brown Leather Loafers */, 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_4" /* GXT: White Leather Loafers */, 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = &func_1;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_5" /* GXT: Russet Leather Loafers */, 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = &func_2;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_16_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = &func_1;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_0" /* GXT: All Black Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_1" /* GXT: Chocolate Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_2" /* GXT: Chestnut Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_3" /* GXT: Tan Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_4" /* GXT: White Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_5" /* GXT: Ash Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_7" /* GXT: Beige Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_8" /* GXT: Topaz Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_9" /* GXT: Black Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_10" /* GXT: Lime Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = &func_2;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_12" /* GXT: Coffee Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_13" /* GXT: Gray Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_14" /* GXT: Cream Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = &func_4;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_17_15" /* GXT: Navy Oxfords */, 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_0" /* GXT: Black Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_1" /* GXT: Red Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_2" /* GXT: Brown Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_4" /* GXT: Green Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_5" /* GXT: Copper Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_7" /* GXT: Navy Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_8" /* GXT: Blue Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_9" /* GXT: Beige Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_10" /* GXT: White Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_11" /* GXT: Tan Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_18_15" /* GXT: Gray Slip-Ons */, 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_0" /* GXT: Brown Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_1" /* GXT: Navy Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_2" /* GXT: Coffee Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_3" /* GXT: Burgundy Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_4" /* GXT: Blue Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_6" /* GXT: Black Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_7" /* GXT: Tan Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_8" /* GXT: Purple Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_9" /* GXT: Brown Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_10" /* GXT: Chocolate Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_11" /* GXT: Green Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_12" /* GXT: Ash Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_13" /* GXT: Olive Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P1_19_15" /* GXT: Yellow Wingtips */, 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
	
		default:
			func_188(iVar10, iParam0, 134, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_217(int iParam0) // Position - 0x1ED01
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_0_0" /* GXT: Cream Cargo Shorts */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_0_1" /* GXT: Sand Cargo Shorts */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_0_2" /* GXT: Navy Cargo Shorts */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_0_3" /* GXT: Olive Cargo Shorts */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_2_0" /* GXT: Black Tuxedo Pants */, 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_0" /* GXT: Gray Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_1" /* GXT: Cream Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_2" /* GXT: Tan Plaid Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_3" /* GXT: Tartan Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_4" /* GXT: Charcoal Plaid Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_5" /* GXT: Dark Plaid Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = &func_2;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_6" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_6_7" /* GXT: Slate Golf Pants */, 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_8_0" /* GXT: Slate Baggy Jeans */, 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_8_1" /* GXT: Blue Baggy Jeans */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_8_2" /* GXT: Gray Baggy Jeans */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_8_3" /* GXT: Pale Blue Baggy Jeans */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_8_4" /* GXT: Black Baggy Jeans */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_8_5" /* GXT: Blue-Green Baggy Jeans */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_8_6" /* GXT: Faded Baggy Jeans */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_11_0" /* GXT: Beige Chinos */, 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_11_1" /* GXT: Olive Chinos */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_11_2" /* GXT: Black Chinos */, 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_11_3" /* GXT: Off-White Chinos */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_11_4" /* GXT: Gray Chinos */, 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_11_5" /* GXT: Navy Chinos */, 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_0" /* GXT: Silver Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_1" /* GXT: Gray Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_2" /* GXT: Topaz Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_3" /* GXT: Ash Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_4" /* GXT: Slate Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_5" /* GXT: Olive Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_6" /* GXT: Jade Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_7" /* GXT: Dark Green Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_8" /* GXT: Teal Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_9" /* GXT: Brown Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_10" /* GXT: Kingz Green Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_13_11" /* GXT: Gray Stripe Sweatpants */, 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_14_0" /* GXT: White Shorts */, 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_0" /* GXT: Gray Plaid Pants */, 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_1" /* GXT: Silver Plaid Pants */, 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_2" /* GXT: Charcoal Plaid Pants */, 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_3" /* GXT: Tan Plaid Pants */, 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_4" /* GXT: Charcoal Pants */, 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_5" /* GXT: Ash Pants */, 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_6" /* GXT: Beige Pants */, 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_7" /* GXT: Cream Pants */, 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_8" /* GXT: Navy Plaid Pants */, 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_9" /* GXT: Off-White Pants */, 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_10" /* GXT: White Pants */, 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_11" /* GXT: Subtle Blue Pants */, 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_12" /* GXT: Navy Pants */, 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_13" /* GXT: Rust Pants */, 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_14" /* GXT: Green Pants */, 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_15_15" /* GXT: Tan Pants */, 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_16_0" /* GXT: Combat Pants */, 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_18_0" /* GXT: White Boxers */, 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_18_1" /* GXT: Gray Boxers */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_18_2" /* GXT: Black Boxers */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_18_3" /* GXT: Kings Ash Boxers */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_18_4" /* GXT: Feud Green Boxers */, 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_18_5" /* GXT: Feud White Boxers */, 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_19_0" /* GXT: Black Tuxedo Pants */, 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_0" /* GXT: Indigo Jeans */, 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_1" /* GXT: Black Jeans */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_2" /* GXT: Gray Faded Jeans */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_3" /* GXT: Navy Jeans */, 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_4" /* GXT: Brown Jeans */, 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_5" /* GXT: Blue Jeans */, 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_6" /* GXT: Olive Jeans */, 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_7" /* GXT: Black Faded Jeans */, 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_20_8" /* GXT: Coffee Jeans */, 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_0" /* GXT: Indigo Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_1" /* GXT: Black Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_2" /* GXT: Aqua Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_3" /* GXT: Brown Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_4" /* GXT: Blue Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_5" /* GXT: Red Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_6" /* GXT: Gray Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_7" /* GXT: Green Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_21_8" /* GXT: Coffee Skinny Jeans */, 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_0" /* GXT: LS Panic Charcoal Shorts */, 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_1" /* GXT: LS Panic Yellow Shorts */, 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_2" /* GXT: Prolaps White Shorts */, 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_3" /* GXT: Prolaps Blue Shorts */, 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_4" /* GXT: LC Salamanders Red Shorts */, 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_5" /* GXT: LC Salamanders Green Shorts */, 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_6" /* GXT: LS Shrimps Gray Shorts */, 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_7" /* GXT: LS Shrimps White Shorts */, 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_8" /* GXT: LOB Gray Shorts */, 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_9" /* GXT: LOB Blue Shorts */, 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_10" /* GXT: LOB Green Shorts */, 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_11" /* GXT: LOB Tan Shorts */, 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_12" /* GXT: LOB Orange Shorts */, 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_22_13" /* GXT: LOB Pale Blue Shorts */, 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_23_0" /* GXT: Broker White Shorts */, 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_23_1" /* GXT: Broker Black Shorts */, 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_23_2" /* GXT: Broker Gray Shorts */, 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_23_3" /* GXT: Broker Navy Shorts */, 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_23_4" /* GXT: Broker Green Shorts */, 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P1_23_5" /* GXT: Broker Brown Shorts */, 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
	
		default:
			func_188(iVar10, iParam0, 117, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_218(int iParam0) // Position - 0x1F9BE
{
	if (iParam0 < 107)
		func_221(iParam0);
	else if (iParam0 < 227)
		func_220(iParam0);
	else
		func_219(iParam0);

	if (Global_80088[0 /*14*/].f_2 == -1)
		func_188(3, iParam0, 318, -1);
}

void func_219(int iParam0) // Position - 0x1FA04
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_0" /* GXT: Gray Plaid Jacket */, 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_1" /* GXT: Ash Plaid Jacket */, 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_2" /* GXT: Charcoal Plaid Jacket */, 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_3" /* GXT: Tan Plaid Jacket */, 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_4" /* GXT: Slate Jacket */, 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_5" /* GXT: Silver Jacket */, 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_6" /* GXT: Stone Jacket */, 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_7" /* GXT: Cream Jacket */, 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_8" /* GXT: Navy Plaid Piped Jacket */, 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_9" /* GXT: Off-White Jacket */, 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_10" /* GXT: Red Piped Jacket */, 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_11" /* GXT: Gray Piped Jacket */, 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_12" /* GXT: Navy Jacket */, 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_13" /* GXT: Russet Piped Jacket */, 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_14" /* GXT: Green Jacket */, 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_15" /* GXT: Beige Jacket */, 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_0" /* GXT: Navy Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_1" /* GXT: Gray Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_2" /* GXT: Silver Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_3" /* GXT: Charcoal Vest */, 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_4" /* GXT: Plum Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_5" /* GXT: All Ash Vest */, 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_6" /* GXT: Silverback Vest */, 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_7" /* GXT: Gray Subtle Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_8" /* GXT: Green Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_9" /* GXT: Ash Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_10" /* GXT: Stone Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_11" /* GXT: Charcoal Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_12" /* GXT: White Vest */, 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_13" /* GXT: Gray Vest */, 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_14" /* GXT: Silver Light Plaid Vest */, 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_24_15" /* GXT: All Silver Vest */, 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_25_0" /* GXT: Gray Tuxedo Jacket */, 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_27_0" /* GXT: Brown Shooting Vest */, 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_27_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_27_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_27_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_27_4" /* GXT: Field Shooting Vest */, 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_27_5" /* GXT: Forest Shooting Vest */, 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_0" /* GXT: Silver Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_1" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_2" /* GXT: LSGC Gray Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_4" /* GXT: LSGC Forest Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_6" /* GXT: Blauser Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_7" /* GXT: Penetrators Orange Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_8" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_9" /* GXT: Blue Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_10" /* GXT: Green Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_11" /* GXT: LS Jardineros Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_12" /* GXT: Ash 18 Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_13" /* GXT: Red Mist XI Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_14" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_28_15" /* GXT: OG Hoodie */, 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_0" /* GXT: White V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_1" /* GXT: Ash V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_2" /* GXT: Black V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_3" /* GXT: Brown V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_4" /* GXT: Olive V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_5" /* GXT: Corkers V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_6" /* GXT: Feud V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_7" /* GXT: Magnetics V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_8" /* GXT: Mint V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_9" /* GXT: Harsh Souls V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_10" /* GXT: Trey Baker V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_11" /* GXT: Fuque V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_29_12" /* GXT: Fellowship V Neck T-Shirt */, 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_0" /* GXT: Green Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_1" /* GXT: Gray Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_2" /* GXT: Slate Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_3" /* GXT: Blue Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_4" /* GXT: Red Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_5" /* GXT: Charcoal Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_6" /* GXT: White Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_7" /* GXT: Silver Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_8" /* GXT: Pale Blue Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_9" /* GXT: Aqua Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_10" /* GXT: Gray Two-Tone Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_11" /* GXT: Pink Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_30_12" /* GXT: Yellow Cardigan */, 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_0" /* GXT: LS Panic Gray Jersey */, 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_1" /* GXT: LS Panic Yellow Jersey */, 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_2" /* GXT: Penetrators White Jersey */, 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_3" /* GXT: Penetrators Blue Jersey */, 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_4" /* GXT: LC Salamanders Red Jersey */, 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_5" /* GXT: LC Salamanders Green Jersey */, 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_6" /* GXT: LS Shrimps Gray Jersey */, 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_7" /* GXT: LS Shrimps White Jersey */, 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_31_8" /* GXT: Uptown Riders Jersey */, 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
	
		default:
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_220(int iParam0) // Position - 0x204AB
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_0" /* GXT: Snake A Jacket */, 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_1" /* GXT: Eagle 69 Jacket */, 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_2" /* GXT: LS Corkers 33 Jacket */, 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_3" /* GXT: LSP 41 Jacket */, 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_4" /* GXT: LS Corkers E Jacket */, 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_5" /* GXT: LS Squeezers Jacket */, 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_6" /* GXT: The Feud 69 Jacket */, 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_7" /* GXT: LS Pounders Jacket */, 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_8" /* GXT: SA Jacket */, 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_9" /* GXT: Redwood A Jacket */, 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_10" /* GXT: Uptown Riders Jacket */, 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_11" /* GXT: The Feud Black Jacket */, 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_12" /* GXT: Yeti Jacket */, 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_13" /* GXT: LSP 71 Jacket */, 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_14" /* GXT: Dust Devils Jacket */, 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_12_15" /* GXT: SA 56 Jacket */, 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_0" /* GXT: Gray Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_1" /* GXT: Kingz of Los Santos Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_2" /* GXT: LS Black Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_3" /* GXT: Dark Blue Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_4" /* GXT: LS Mustard Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_5" /* GXT: Crevis Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_6" /* GXT: Dust Devils Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_7" /* GXT: Feud Olive Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_8" /* GXT: Eris Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_9" /* GXT: Hinterland Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_10" /* GXT: Feud Mint Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_11" /* GXT: Penetrators Gray Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_12" /* GXT: Ash Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_13" /* GXT: Rearwall Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_14" /* GXT: Trey Baker Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_13_15" /* GXT: Feud Camo Hoodie */, 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_0" /* GXT: Gray Jacket */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_1" /* GXT: Charcoal Jacket */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_2" /* GXT: Silver Jacket */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_3" /* GXT: Olive Jacket */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_4" /* GXT: Brown Jacket */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_5" /* GXT: Desert Sand Jacket */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_6" /* GXT: Field Camo Jacket */, 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_14_7" /* GXT: Desert Camo Jacket */, 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_0" /* GXT: White T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_1" /* GXT: Gray T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_2" /* GXT: Slate T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_3" /* GXT: Jade T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_4" /* GXT: 100% T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_5" /* GXT: Navy T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_6" /* GXT: Black T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_7" /* GXT: LC Wrath T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_8" /* GXT: LOB T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_9" /* GXT: UCLS Bookworms T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_10" /* GXT: Los Santos Red T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_15_11" /* GXT: Queensbury Boxing T-Shirt */, 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_16_0" /* GXT: Black Shirt */, 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_0" /* GXT: Blue Jacket */, 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_1" /* GXT: OG Slate Jacket */, 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_2" /* GXT: OG White Jacket */, 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_3" /* GXT: Corkers Green Jacket */, 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_4" /* GXT: Deep Gray Jacket */, 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_5" /* GXT: Kingz Banded Jacket */, 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_6" /* GXT: Stank Forest Camo Jacket */, 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_7" /* GXT: Trey Baker Camo Jacket */, 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_8" /* GXT: Coffee Jacket */, 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_9" /* GXT: Plain Coffee Jacket */, 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_10" /* GXT: Fruntalot Green Jacket */, 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_11" /* GXT: Mocha Jacket */, 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_12" /* GXT: Brown Jacket */, 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_13" /* GXT: LS Snake Weave Jacket */, 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_14" /* GXT: Feud Animal Print Jacket */, 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_17_15" /* GXT: Fruntalot Techno Jacket */, 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_0" /* GXT: Gray Plaid Jacket */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_1" /* GXT: Ash Plaid Jacket */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_2" /* GXT: Charcoal Plaid Jacket */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_3" /* GXT: Tan Plaid Jacket */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_4" /* GXT: Slate Jacket */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_5" /* GXT: Silver Jacket */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_6" /* GXT: Stone Jacket */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_7" /* GXT: Cream Jacket */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_8" /* GXT: Navy Plaid Piped Jacket */, 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_9" /* GXT: Off-White Jacket */, 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_10" /* GXT: Red Piped Jacket */, 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_11" /* GXT: Gray Piped Jacket */, 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_12" /* GXT: Navy Jacket */, 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_13" /* GXT: Russet Piped Jacket */, 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_14" /* GXT: Green Jacket */, 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_18_15" /* GXT: Beige Jacket */, 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_0" /* GXT: Blue Striped Shirt */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_1" /* GXT: Beige Striped Shirt */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_2" /* GXT: Gray Shirt */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_3" /* GXT: Slate Shirt */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_4" /* GXT: Green Shirt */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_5" /* GXT: Picnic Plaid Shirt */, 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_6" /* GXT: White Shirt */, 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_7" /* GXT: Light Green Plaid Shirt */, 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_8" /* GXT: Pink Striped Shirt */, 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_9" /* GXT: Country Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_10" /* GXT: Off-White Striped Shirt */, 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_11" /* GXT: Russet Striped Shirt */, 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_12" /* GXT: Sea Green Plaid Shirt */, 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_13" /* GXT: Navy Shirt */, 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_14" /* GXT: Brown Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_19_15" /* GXT: Sand Check Shirt */, 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_0" /* GXT: Black Jacket */, 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_1" /* GXT: Sand Jacket */, 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_2" /* GXT: Teal Jacket */, 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_3" /* GXT: Gray Jacket */, 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_4" /* GXT: Gray Three-Way Jacket */, 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_5" /* GXT: Red Accent Jacket */, 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_6" /* GXT: Aqua Accent Jacket */, 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_7" /* GXT: Brown Two-Tone Jacket */, 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_8" /* GXT: White Jacket */, 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_9" /* GXT: Tan Two-Tone Jacket */, 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_10" /* GXT: Red Jacket */, 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_11" /* GXT: Olive Two-Tone Jacket */, 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_12" /* GXT: Three-Way Jacket */, 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_21_13" /* GXT: Ash Two-Tone Jacket */, 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_22_0" /* GXT: Navy Peacoat */, 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_22_1" /* GXT: Gray Peacoat */, 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_22_2" /* GXT: Brown Peacoat */, 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_22_3" /* GXT: Black Peacoat */, 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
	
		default:
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_221(int iParam0) // Position - 0x2129A
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_0" /* GXT: White Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_1" /* GXT: Black Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_2" /* GXT: Gray Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_3" /* GXT: Feud Green Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_4" /* GXT: Fruntalot Jade Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_5" /* GXT: Fruntalot Brown Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_6" /* GXT: Broker Blue Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_7" /* GXT: Kingz Green Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_8" /* GXT: Broker Gray Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_9" /* GXT: Harsh Souls Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_10" /* GXT: Sweatbox Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_11" /* GXT: White Ringer Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_12" /* GXT: Rearwall Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_13" /* GXT: Feud 3 Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_14" /* GXT: Kingz Charcoal Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_0_15" /* GXT: Feud White Tank Top */, 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_2_0" /* GXT: White Tuxedo Jacket */, 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_0" /* GXT: White OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_1" /* GXT: Black OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_2" /* GXT: Ash OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_3" /* GXT: LC Swingers OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_4" /* GXT: Corkers Red OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_5" /* GXT: Corkers Green OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_6" /* GXT: Uptown Riders OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_7" /* GXT: Feud White OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_8" /* GXT: Salamanders OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_9" /* GXT: LC Rampage OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_10" /* GXT: Dust Devils OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_11" /* GXT: LS Gray OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_12" /* GXT: Los Santos Black OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_13" /* GXT: Los Santos White OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_14" /* GXT: Pounders OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_4_15" /* GXT: Feud Black OG T-Shirt */, 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_0" /* GXT: Pine Striped Sweater */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_1" /* GXT: Yellow Sweater */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_2" /* GXT: Blue Sweater */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_3" /* GXT: Sand Striped Sweater */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_4" /* GXT: Silver Sweater */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_5" /* GXT: Gray Sweater */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_6" /* GXT: Navy Argyle Sweater */, 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_7" /* GXT: Sand Sweater */, 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_8" /* GXT: Salmon Pink Sweater */, 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_9" /* GXT: Turquoise Sweater */, 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_10" /* GXT: Green Sweater */, 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_11" /* GXT: Amethyst Sweater */, 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_12" /* GXT: Yellow Argyle Sweater */, 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_13" /* GXT: Gray Two-Tone Sweater */, 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_14" /* GXT: Sand Argyle Sweater */, 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_6_15" /* GXT: Charcoal Sweater */, 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_0" /* GXT: Ash Shirt */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_1" /* GXT: Gray Shirt */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_2" /* GXT: Black Shirt */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_3" /* GXT: Silver Shirt */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_4" /* GXT: White Shirt */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_5" /* GXT: Olive Shirt */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_6" /* GXT: Navy Shirt */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_7" /* GXT: Red Shirt */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_8" /* GXT: Tan Check Shirt */, 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_9" /* GXT: Beige Gingham Shirt */, 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_10" /* GXT: Gray Gingham Shirt */, 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_11" /* GXT: Gray Check Shirt */, 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_12" /* GXT: Blue Shirt */, 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_13" /* GXT: Off-White Shirt */, 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_14" /* GXT: Pastel Check Shirt */, 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_7_15" /* GXT: Fruity Check Shirt */, 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_0" /* GXT: Blue Shirt */, 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_1" /* GXT: Yellow Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_2" /* GXT: Off-White Striped Shirt */, 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_3" /* GXT: Off-White Shirt */, 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_4" /* GXT: Red Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_5" /* GXT: Charcoal Shirt */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_6" /* GXT: Blue Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_7" /* GXT: Gingham Shirt */, 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_8" /* GXT: Aqua Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_9" /* GXT: Orange Shirt */, 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_10" /* GXT: Mint Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_11" /* GXT: Dark Gray Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_12" /* GXT: Purple Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_13" /* GXT: Olive Shirt */, 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_14" /* GXT: Cream Shirt */, 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_8_15" /* GXT: Fruity Check Shirt */, 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_0" /* GXT: White Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_1" /* GXT: Gray Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_2" /* GXT: Black Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_3" /* GXT: Ten Off Yellow Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_4" /* GXT: Kingz Of Los Santos Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_5" /* GXT: Yeti Rainbow Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_6" /* GXT: Ten Off Red Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_7" /* GXT: Trey Baker Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_8" /* GXT: Stank Striped Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_9" /* GXT: Feud Olive Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_10" /* GXT: Yeti Gray Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_11" /* GXT: Yogarishima Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_12" /* GXT: Yeti Camo Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_13" /* GXT: Crevis White Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_14" /* GXT: Yeti Blue Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P1_11_15" /* GXT: Uptown Ryders Longsleeve */, 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
	
		default:
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_222(int iParam0) // Position - 0x21EE3
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_0" /* GXT: Fade */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_1" /* GXT: Triple Rails */, 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_2" /* GXT: Side Shaded */, 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_3" /* GXT: Wavy Siderows */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_4" /* GXT: Snakes */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_5" /* GXT: Tramlines */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_6" /* GXT: The King Fresh */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_7" /* GXT: Star Kutz */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_8" /* GXT: Tigerized */, 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_9" /* GXT: Abstraction */, 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_10" /* GXT: Shutters */, 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_11" /* GXT: Berms */, 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_12" /* GXT: Mellowplex */, 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_13" /* GXT: The Feud */, 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_14" /* GXT: Business on Top */, 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_0_15" /* GXT: Wild Palm */, 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_1_0" /* GXT: Lo Fro */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_2_0" /* GXT: Blowout */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_3_0" /* GXT: Cornrows */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P1_4_0" /* GXT: Shape-up */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 21, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_223(int iParam0) // Position - 0x2215C
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_80088[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
	
		default:
			func_188(iVar10, iParam0, 10, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_224(int iParam0, int iParam1) // Position - 0x222A2
{
	switch (iParam0)
	{
		case 0:
			func_241(iParam1);
			break;
	
		case 2:
			func_240(iParam1);
			break;
	
		case 3:
			func_237(iParam1);
			break;
	
		case 4:
			func_236(iParam1);
			break;
	
		case 6:
			func_235(iParam1);
			break;
	
		case 5:
			func_234(iParam1);
			break;
	
		case 8:
			func_233(iParam1);
			break;
	
		case 9:
			func_232(iParam1);
			break;
	
		case 10:
			func_231(iParam1);
			break;
	
		case 1:
			func_230(iParam1);
			break;
	
		case 7:
			func_229(iParam1);
			break;
	
		case 11:
			func_228(iParam1);
			break;
	
		case 12:
			func_227(iParam1);
			break;
	
		case 13:
			func_226(iParam1);
			break;
	
		case 14:
			func_225(iParam1);
			break;
	}
}

void func_225(int iParam0) // Position - 0x22392
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_H1" /* GXT: Blue Baseball Cap */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_H2" /* GXT: White Hockey Mask */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_H12" /* GXT: Black Knitted Hat */, 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E0" /* GXT: Black-Rimmed Glasses */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E3" /* GXT: Copper Sports Shades */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4" /* GXT: Enema Brown Glasses */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4_1" /* GXT: Enema Gray Glasses */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4_2" /* GXT: Enema Black Glasses */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4_3" /* GXT: Enema Tortoiseshell Glasses */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4_4" /* GXT: Enema Coffee Glasses */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4_5" /* GXT: Enema Walnut Glasses */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4_6" /* GXT: Enema Silver Accent Glasses */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E4_7" /* GXT: Enema Smoke Glasses */, 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5" /* GXT: Farshtunken Gold Aviators */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_1" /* GXT: Farshtunken Purple Aviators */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_2" /* GXT: Farshtunken Silver Aviators */, 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_3" /* GXT: Farshtunken Gray Aviators */, 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_4" /* GXT: Farshtunken Blue Aviators */, 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_5" /* GXT: Farshtunken Tinted Aviators */, 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_6" /* GXT: Farshtunken Steel Aviators */, 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_7" /* GXT: Farshtunken Sepia Aviators */, 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_8" /* GXT: Farshtunken Black Aviators */, 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E5_9" /* GXT: Farshtunken Smoke Aviators */, 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6" /* GXT: Tung Charcoal Shades */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_1" /* GXT: Tung Ash Shades */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_2" /* GXT: Tung Gray Shades */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_3" /* GXT: Tung Red Shades */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_4" /* GXT: Tung Blue Shades */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_5" /* GXT: Tung Yellow Shades */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_6" /* GXT: Tung Black Shades */, 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_7" /* GXT: Tung Rosy Shades */, 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_8" /* GXT: Tung Hornet Shades */, 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E6_9" /* GXT: Tung Two-Tone Shades */, 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E7" /* GXT: Swimming Goggles */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8" /* GXT: Rimmers Azure Aviators */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_1" /* GXT: Rimmers Smoke Aviators */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_2" /* GXT: Rimmers Yellow Aviators */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_3" /* GXT: Rimmers Topaz Aviators */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_4" /* GXT: Rimmers Tinted Aviators */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_5" /* GXT: Rimmers Steel Aviators */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_6" /* GXT: Rimmers Indigo Aviators */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_7" /* GXT: Rimmers Chocolate Aviators */, 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_8" /* GXT: Rimmers Sepia Aviators */, 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_9" /* GXT: Rimmers Slate Aviators */, 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_10" /* GXT: Rimmers Gold Aviators */, 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E8_11" /* GXT: Rimmers Blue Aviators */, 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9" /* GXT: Hawaiian Snow Black Shades */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9_1" /* GXT: Hawaiian Snow Charcoal Shades */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9_2" /* GXT: Hawaiian Snow Ash Shades */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9_3" /* GXT: Hawaiian Snow Gray Shades */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9_4" /* GXT: Hawaiian Snow Tan Shades */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9_5" /* GXT: Hawaiian Snow Tortoiseshell Shades */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9_6" /* GXT: Hawaiian Snow Walnut Shades */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "PROPS_P0_E9_7" /* GXT: Hawaiian Snow Marbled Shades */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
	
		default:
			func_188(iVar10, iParam0, 113, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_226(int iParam0) // Position - 0x2311C
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 10, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_227(int iParam0) // Position - 0x23296
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_0" /* GXT: Gray Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_1" /* GXT: Firefighter */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_4" /* GXT: Janitor */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_7" /* GXT: Highway Patrol */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_8" /* GXT: Golf */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_9" /* GXT: Bed */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_11" /* GXT: Epsilon Robes */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_12" /* GXT: Tennis */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_14" /* GXT: Scuba Land */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_17" /* GXT: Stealth */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_18" /* GXT: Triathlon */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_19" /* GXT: Security */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_20" /* GXT: Exterminator */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_22" /* GXT: Tuxedo */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_23" /* GXT: Ludendorff */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_24" /* GXT: Rappel Gear */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_26" /* GXT: Blue Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_28" /* GXT: Navy Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_29" /* GXT: Gray Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_30" /* GXT: Green Boiler Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_31" /* GXT: Prologue */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_32" /* GXT: Spec Ops */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_33" /* GXT: Denim Shirt, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_34" /* GXT: Slate Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_35" /* GXT: Leather Jacket, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_11" /* GXT: Epsilon Robes */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_36" /* GXT: Charcoal Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_37" /* GXT: Pale Blue Shirt, Gray Pants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_38" /* GXT: Jewel Heist Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_39" /* GXT: Polo Shirt, Beach Shorts */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_40" /* GXT: Polo Shirt, Suit Pants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_41" /* GXT: Shirt, Shorts */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_42" /* GXT: Polo Shirt, Jeans */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_43" /* GXT: Topaz Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_44" /* GXT: Pale Blue Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_45" /* GXT: Off-White Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_46" /* GXT: Olive Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_47" /* GXT: Cream Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_48" /* GXT: Navy Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_49" /* GXT: Beige Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_50" /* GXT: Smoke Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_51" /* GXT: Blue-Gray Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_52" /* GXT: Ash Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_53" /* GXT: Sand Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_54" /* GXT: Black Suit */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_55" /* GXT: Moto X */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "OUTFIT_P0_17" /* GXT: Stealth */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 53, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_228(int iParam0) // Position - 0x2380D
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_02_0" /* GXT: Ash T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_02_1" /* GXT: White T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_02_2" /* GXT: Gray T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_02_3" /* GXT: Charcoal T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_02_4" /* GXT: Green T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_02_5" /* GXT: Blue T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_0" /* GXT: Charcoal Henley */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_1" /* GXT: Gray Henley */, 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_2" /* GXT: Black Henley */, 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_3" /* GXT: Beige Henley */, 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_4" /* GXT: Brown Henley */, 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_5" /* GXT: Navy Henley */, 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_6" /* GXT: Navy Striped Henley */, 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_7" /* GXT: Gray Striped Henley */, 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_8" /* GXT: Gray Wool Henley */, 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_03_9" /* GXT: Charcoal Striped Henley */, 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_0" /* GXT: Charcoal V Neck */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_1" /* GXT: Beige V Neck */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_2" /* GXT: Black V Neck */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_3" /* GXT: Olive V Neck */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_4" /* GXT: Gray V Neck */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_5" /* GXT: Brown V Neck */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_6" /* GXT: Black Striped V Neck */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_7" /* GXT: Gray Diamond V Neck */, 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_8" /* GXT: Brown Striped V Neck */, 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_04_9" /* GXT: Silver Diamond V Neck */, 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_0" /* GXT: Black Vest, White Shirt */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_1" /* GXT: Black Vest, Black Shirt */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_2" /* GXT: Black Vest, Gray Shirt */, 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_3" /* GXT: Black Vest, Blue Shirt */, 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_4" /* GXT: Black Vest, Pink Shirt */, 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_5" /* GXT: Ash Vest, White Shirt */, 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_6" /* GXT: Ash Vest, Black Shirt */, 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_7" /* GXT: Ash Vest, Gray Shirt */, 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_8" /* GXT: Ash Vest, Blue Shirt */, 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_9" /* GXT: Ash Vest, Pink Shirt */, 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_10" /* GXT: Blue Vest, White Shirt */, 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_11" /* GXT: Blue Vest, Black Shirt */, 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_12" /* GXT: Blue Vest, Gray Shirt */, 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_13" /* GXT: Blue Vest, Blue Shirt */, 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_14" /* GXT: Blue Vest, Pink Shirt */, 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_05_15" /* GXT: Stone Vest, White Shirt */, 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "JBIB_P0_06_0" /* GXT: Bare Chest */, 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 45, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_229(int iParam0) // Position - 0x23D37
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 1, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_230(int iParam0) // Position - 0x23DAB
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P0_0_0" /* GXT: Clean Shave */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P0_1_0" /* GXT: Stubbled */, 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P0_2_0" /* GXT: Long Stubbled */, 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P0_3_0" /* GXT: Full Goatee */, 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "BERD_P0_4_0" /* GXT: Full Beard */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 5, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_231(int iParam0) // Position - 0x23E7B
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_8" /* GXT: Del Perro Pier T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_9" /* GXT: Los Santos T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_10" /* GXT: Sharkies Bites T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_11" /* GXT: Muscle Peach T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_12" /* GXT: Coral Reefers T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_13" /* GXT: SmokeBomb T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_14" /* GXT: The Big Puffa T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "DECL_P0_10_15" /* GXT: Lob-Star T-Shirt */, 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
	
		default:
			func_188(iVar10, iParam0, 48, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_232(int iParam0) // Position - 0x24354
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 20, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_233(int iParam0) // Position - 0x245BD
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P0_10" /* GXT: Watch and Bracelet */, 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "SPEC_P0_16" /* GXT: Leather Watch */, 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 24, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_234(int iParam0) // Position - 0x24893
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		default:
			func_188(iVar10, iParam0, 14, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_235(int iParam0) // Position - 0x24A5C
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_0_0" /* GXT: Black Leather Shoes */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_0_1" /* GXT: Brown Leather Shoes */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_0_2" /* GXT: Charcoal Leather Shoes */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_0_3" /* GXT: Gray Leather Shoes */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_0_4" /* GXT: Sand Leather Shoes */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_0_5" /* GXT: Blue Suede Shoes */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_13_0" /* GXT: Dress Loafers */, 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_0" /* GXT: Ash Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_1" /* GXT: Black Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_2" /* GXT: White Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_3" /* GXT: Red Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_4" /* GXT: Plaid Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_5" /* GXT: Striped Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_6" /* GXT: Coffee Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_7" /* GXT: Camo Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_8" /* GXT: Tropical Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_15_9" /* GXT: Green Skate Shoes */, 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_0" /* GXT: Chocolate Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_1" /* GXT: Teal Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_2" /* GXT: Black Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_3" /* GXT: Chestnut Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_4" /* GXT: Tan Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_5" /* GXT: Gray Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_6" /* GXT: Red Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_16_7" /* GXT: Slate Boat Shoes */, 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_0" /* GXT: All Black Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_1" /* GXT: Chocolate Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_2" /* GXT: Chestnut Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_3" /* GXT: Tan Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_4" /* GXT: White Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_5" /* GXT: Ash Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_7" /* GXT: Beige Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_8" /* GXT: Topaz Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_9" /* GXT: Black Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_10" /* GXT: Lime Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = &func_2;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_12" /* GXT: Coffee Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_13" /* GXT: Gray Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_14" /* GXT: Cream Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = &func_4;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_18_15" /* GXT: Navy Oxfords */, 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_0" /* GXT: Black Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_1" /* GXT: Red Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_2" /* GXT: Brown Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_4" /* GXT: Green Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_5" /* GXT: Copper Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_7" /* GXT: Navy Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_8" /* GXT: Blue Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_9" /* GXT: Beige Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_10" /* GXT: White Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_11" /* GXT: Tan Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_19_15" /* GXT: Gray Slip-Ons */, 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_0" /* GXT: Brown Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_1" /* GXT: Navy Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_2" /* GXT: Coffee Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_3" /* GXT: Burgundy Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_4" /* GXT: Blue Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_6" /* GXT: Black Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_7" /* GXT: Tan Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_8" /* GXT: Purple Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_9" /* GXT: Brown Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_10" /* GXT: Chocolate Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_11" /* GXT: Green Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_12" /* GXT: Ash Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_13" /* GXT: Olive Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_20_15" /* GXT: Yellow Wingtips */, 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_0" /* GXT: Black Leather Loafers */, 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_1" /* GXT: Gray Leather Loafers */, 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_2" /* GXT: Cream Leather Loafers */, 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_3" /* GXT: Brown Leather Loafers */, 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_4" /* GXT: White Leather Loafers */, 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = &func_1;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_5" /* GXT: Russet Leather Loafers */, 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = &func_2;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "FEET_P0_21_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = &func_1;
			break;
	
		default:
			func_188(iVar10, iParam0, 99, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_236(int iParam0) // Position - 0x255B0
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_0" /* GXT: Gray Pants */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_0" /* GXT: Gray Pants */, 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_2" /* GXT: Charcoal Pants */, 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_3" /* GXT: Slate Pants */, 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_4" /* GXT: Topaz Pants */, 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_5" /* GXT: Pale Blue Pants */, 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_6" /* GXT: Cream Pants */, 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_7" /* GXT: Olive Pants */, 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_8" /* GXT: Off-White Pants */, 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_9" /* GXT: Navy Pants */, 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_10" /* GXT: Beige Pants */, 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_11" /* GXT: Smoke Pants */, 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_12" /* GXT: Blue-Gray Pants */, 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_13" /* GXT: Ash Pants */, 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_14" /* GXT: Sand Pants */, 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_0_15" /* GXT: Black Pants */, 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_0" /* GXT: Off-White Chinos */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_1" /* GXT: Camel Chinos */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_2" /* GXT: Ash Chinos */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_3" /* GXT: Olive Chinos */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_4" /* GXT: Brown Chinos */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_5" /* GXT: Black Chinos */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_6" /* GXT: Charcoal Chinos */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_7_7" /* GXT: White Chinos */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_13_0" /* GXT: Cream Cargo Shorts */, 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_13_1" /* GXT: Khaki Cargo Shorts */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_13_2" /* GXT: Camo Cargo Shorts */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_13_3" /* GXT: Gray Cargo Shorts */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_13_4" /* GXT: White Cargo Shorts */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_0" /* GXT: Gray Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_1" /* GXT: Cream Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_2" /* GXT: Brown Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_3" /* GXT: Tartan Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_4" /* GXT: Charcoal Plaid Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_5" /* GXT: Green Plaid Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_6" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_15_7" /* GXT: Slate Golf Pants */, 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_0" /* GXT: Beige Shorts */, 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_1" /* GXT: Yellow Shorts */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_2" /* GXT: Blue Shorts */, 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_3" /* GXT: Brown Leafy Shorts */, 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_4" /* GXT: Tropical Shorts */, 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_5" /* GXT: Aqua Vintage Shorts */, 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_6" /* GXT: Bright Two-Tone Shorts */, 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_7" /* GXT: Red Floral Shorts */, 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_8" /* GXT: Navy Floral Shorts */, 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_9" /* GXT: Blue Floral Shorts */, 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_10" /* GXT: Orange Shorts */, 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_11" /* GXT: White Striped Shorts */, 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_12" /* GXT: Charcoal Shorts */, 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_13" /* GXT: Gray Shorts */, 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_14" /* GXT: Candy Surf Shorts */, 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_16_15" /* GXT: Undersea Shorts */, 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_0" /* GXT: White Striped Boxers */, 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_1" /* GXT: Blue Boxers */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_2" /* GXT: Ash Boxers */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_3" /* GXT: Blue Striped Boxers */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_4" /* GXT: White Boxers */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_5" /* GXT: Charcoal Boxers */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_6" /* GXT: Red Heart Boxers */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_18_7" /* GXT: Blue Heart Boxers */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_20_0" /* GXT: Blue Casual Jeans */, 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_20_1" /* GXT: Black Casual Jeans */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_20_2" /* GXT: Faded Casual Jeans */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_21_0" /* GXT: Tan Pants */, 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_21_1" /* GXT: Charcoal Pants */, 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_21_2" /* GXT: Brown Pants */, 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_21_3" /* GXT: Ash Pants */, 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_22_0" /* GXT: Smart Jeans */, 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_23_0" /* GXT: White Tennis Shorts */, 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_23_1" /* GXT: Lobon Tennis Shorts */, 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_23_2" /* GXT: Plaid Tennis Shorts */, 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_27_0" /* GXT: Beige Shorts, Bare Feet */, 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_0" /* GXT: Pale Blue Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_1" /* GXT: Beige Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_2" /* GXT: Cream Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_3" /* GXT: Olive Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_4" /* GXT: Blue Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_5" /* GXT: Off-White Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_6" /* GXT: Gray Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_7" /* GXT: Charcoal Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_8" /* GXT: Pink Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_9" /* GXT: Beige Plaid Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_10" /* GXT: Pastel Plaid Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_11" /* GXT: Orange Plaid Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_12" /* GXT: Gray Plaid Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_13" /* GXT: Blue Striped Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_14" /* GXT: Murky Plaid Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "LEGS_P0_28_15" /* GXT: Pastel Check Bermudas */, 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 113, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_237(int iParam0) // Position - 0x261FA
{
	if (iParam0 < 60)
		func_239(iParam0);
	else
		func_238(iParam0);

	if (Global_80088[0 /*14*/].f_2 == -1)
		func_188(3, iParam0, 181, -1);
}

void func_238(int iParam0) // Position - 0x2622F
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_14_0" /* GXT: Rearwall Black Gilet */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_14_1" /* GXT: Fruntalot Red Gilet */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_14_2" /* GXT: Yeti Blue Gilet */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_14_3" /* GXT: Rearwall Brown Gilet */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_14_4" /* GXT: Rearwall Orange Gilet */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_14_5" /* GXT: Rearwall Green Gilet */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_0" /* GXT: Purple Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_1" /* GXT: Orange Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_2" /* GXT: Burgundy Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_3" /* GXT: Yellow Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_4" /* GXT: Blue Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_5" /* GXT: Mint Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_6" /* GXT: Brown Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_16_7" /* GXT: Crimson Golf Shirt */, 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_17_0" /* GXT: Blue-Gray Polo Shirt */, 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_17_1" /* GXT: Olive Polo Shirt */, 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_17_2" /* GXT: Red Polo Shirt */, 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_17_3" /* GXT: Black Polo Shirt */, 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_17_4" /* GXT: White Polo Shirt */, 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_17_5" /* GXT: Blue Polo Shirt */, 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_19_0" /* GXT: Off-White Tank Top */, 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_19_1" /* GXT: White Tank Top */, 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_19_2" /* GXT: Ash Tank Top */, 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_19_3" /* GXT: Gray Tank Top */, 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_19_4" /* GXT: Black Tank Top */, 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_0" /* GXT: Blue Denim Shirt */, 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_1" /* GXT: Deep Black Shirt */, 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_2" /* GXT: Russet Shirt */, 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_3" /* GXT: Green Cord Shirt */, 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_4" /* GXT: Gray Shirt */, 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_5" /* GXT: Fresh Check Shirt */, 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_6" /* GXT: Southern Plaid Shirt */, 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_7" /* GXT: Sunrise Yellow Shirt */, 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_8" /* GXT: White Shirt */, 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_9" /* GXT: Stone Shirt */, 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_10" /* GXT: Earth Plaid Shirt */, 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_11" /* GXT: Green Check Shirt */, 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_12" /* GXT: Country Plaid Shirt */, 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_13" /* GXT: Orange Tight Check Shirt */, 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_14" /* GXT: Bright Blue Plaid Shirt */, 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_20_15" /* GXT: Blue Check Shirt */, 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_0" /* GXT: Gray Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_1" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_2" /* GXT: LSGC Gray Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_4" /* GXT: LSGC Forest Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_6" /* GXT: Blauser Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_7" /* GXT: Penetrators Orange Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_8" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_9" /* GXT: Blue Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_10" /* GXT: Green Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_11" /* GXT: LS Jardineros Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_12" /* GXT: Ash 18 Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_13" /* GXT: Red Mist XI Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_14" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_21_15" /* GXT: OG Hoodie */, 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_22_0" /* GXT: Distressed Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_22_1" /* GXT: Black Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_22_2" /* GXT: Chestnut Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_22_3" /* GXT: Oxblood Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_22_4" /* GXT: Vintage Black Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_22_5" /* GXT: Brown Leather Jacket */, 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_0" /* GXT: Silver Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_1" /* GXT: Gray-Green Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_2" /* GXT: Slate Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_3" /* GXT: Gray Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_4" /* GXT: Blue Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_5" /* GXT: Pale Blue Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_6" /* GXT: White Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_7" /* GXT: Warm Gray Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_8" /* GXT: Cream Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_9" /* GXT: Midnight Blue Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_10" /* GXT: Off-White Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_11" /* GXT: Charcoal Wool Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_12" /* GXT: Charcoal Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_13" /* GXT: Ash Plaid Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_14" /* GXT: Beige Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_23_15" /* GXT: Brown Sports Coat */, 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_0" /* GXT: Charcoal Sweater */, 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_1" /* GXT: Gray Sweater */, 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_2" /* GXT: Beige Sweater */, 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_3" /* GXT: Red Sweater */, 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_4" /* GXT: Pale Blue Sweater */, 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_5" /* GXT: Pale Amethyst Sweater */, 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_6" /* GXT: Blue Sweater */, 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_7" /* GXT: Pale Jade Sweater */, 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_8" /* GXT: Orange Sweater */, 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_24_9" /* GXT: Lemon Sweater */, 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_0" /* GXT: Pale Blue Shirt */, 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_1" /* GXT: Pink Shirt */, 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_2" /* GXT: White Shirt */, 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_3" /* GXT: Gray Shirt */, 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_4" /* GXT: Charcoal Shirt */, 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_5" /* GXT: Blue Shirt */, 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_6" /* GXT: Topaz Shirt */, 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_25_7" /* GXT: Black Shirt */, 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_26_0" /* GXT: Bare Chested */, 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_28_0" /* GXT: Eris White Sweater Vest */, 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_28_1" /* GXT: Lobon Sweater Vest */, 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_28_2" /* GXT: Eris Blue Sweater Vest */, 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_30_0" /* GXT: Gray Jacket */, 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_30_1" /* GXT: Black Jacket */, 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_31_0" /* GXT: Red Check Winter Shirt */, 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_31_1" /* GXT: Blue Check Winter Shirt */, 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_31_2" /* GXT: Black Winter Shirt */, 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_31_3" /* GXT: Brown Check Winter Shirt */, 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
	
		default:
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_239(int iParam0) // Position - 0x26FCF
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_0" /* GXT: Gray Jacket */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_0" /* GXT: Gray Jacket */, 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_2" /* GXT: Charcoal Jacket */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_3" /* GXT: Slate Jacket */, 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_4" /* GXT: Topaz Jacket */, 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_5" /* GXT: Pale Blue Jacket */, 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_6" /* GXT: Cream Jacket */, 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_7" /* GXT: Olive Jacket */, 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_8" /* GXT: Off-White Jacket */, 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_9" /* GXT: Navy Jacket */, 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_10" /* GXT: Beige Jacket */, 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_11" /* GXT: Smoke Jacket */, 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_12" /* GXT: Blue-Gray Jacket */, 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_13" /* GXT: Ash Jacket */, 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_14" /* GXT: Sand Jacket */, 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_0_15" /* GXT: Black Jacket */, 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_4" /* GXT: Suburban Yellow T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_5" /* GXT: Rearwall Slate T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_6" /* GXT: Rearwall Blue T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_7" /* GXT: Rearwall Gray T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_8" /* GXT: Suburban Navy T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_9" /* GXT: Suburban Russet T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_10" /* GXT: Suburban Orange T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_11" /* GXT: Suburban Gray T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_12" /* GXT: White T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_13" /* GXT: Forest Green T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_14" /* GXT: Pale Blue T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_2_15" /* GXT: Ash T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_7_0" /* GXT: Brown Shooting Vest */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_7_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_7_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_7_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_7_4" /* GXT: Field Shooting Vest */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_7_5" /* GXT: Forest Shooting Vest */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_0" /* GXT: Blue-Gray Shirt */, 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_1" /* GXT: White Shirt */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_2" /* GXT: Camel Shirt */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_3" /* GXT: Black Shirt */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_4" /* GXT: Citrus Hawaiian Shirt */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_5" /* GXT: Orange Grove Shirt */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_6" /* GXT: Parrot Print Shirt */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_7" /* GXT: Blue Geometric Shirt */, 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_8" /* GXT: Gray Patterned Shirt */, 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_9" /* GXT: Peach Patterned Shirt */, 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_10" /* GXT: Tropical Shirt */, 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_11" /* GXT: Navy Floral Shirt */, 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_12" /* GXT: Lime Plaid Shirt */, 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_13" /* GXT: Brown Patterned Shirt */, 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_14" /* GXT: Vintage Hawaiian Shirt */, 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "TORSO_P0_8_15" /* GXT: Blue Plaid Shirt */, 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
	
		default:
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_240(int iParam0) // Position - 0x2765B
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P0_0_0" /* GXT: Lexington */, 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P0_1_0" /* GXT: The Wood */, 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P0_2_0" /* GXT: Clippered Cut */, 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P0_3_0" /* GXT: Grown Out */, 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "HAIR_P0_4_0" /* GXT: Slicker */, 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
	
		default:
			func_188(iVar10, iParam0, 6, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_241(int iParam0) // Position - 0x27742
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_80088[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
	
		default:
			func_188(iVar10, iParam0, 7, -1);
			return;
	}

	func_181(&Global_80088[0 /*14*/], iVar10, iParam0, &uVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, false);
}

void func_242() // Position - 0x27840
{
	Global_80088[0 /*14*/].f_1 = -1;
	Global_80088[0 /*14*/].f_2 = -1;
	Global_80088[0 /*14*/].f_5 = -1;
	Global_80088[0 /*14*/].f_3 = -1;
	Global_80088[0 /*14*/].f_4 = -1;
	Global_80088[0 /*14*/].f_7 = 0;
	Global_80088[0 /*14*/].f_6 = 0;
	Global_80088[0 /*14*/].f_13 = -1;
	Global_80088[0 /*14*/].f_12 = 0;
	Global_80088[0 /*14*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_80088[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_243(int iParam0, int iParam1) // Position - 0x278B9
{
	if (func_2(iParam0))
		STREAMING::REQUEST_MODEL(func_43(iParam0, iParam1));
	else
		iParam0 != 145;
}

void func_244(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6) // Position - 0x278E0
{
	int iVar0;

	if (bParam6)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
			if (!CAM::IS_SCREEN_FADING_OUT())
				CAM::DO_SCREEN_FADE_OUT(800);
	
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			BUILTIN::WAIT(0);
		}
	}

	MISC::CLEAR_AREA(fParam0, 5f, 1, 0, 0, 0);

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), fParam0, 1, 0, 0, 1);
		
			if (iParam3 != -1f)
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), iParam3);
		
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			AUDIO::RESET_PED_AUDIO_FLAGS(PLAYER::PLAYER_PED_ID());
		}
	}

	BUILTIN::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(fParam0, iParam5, 0);
	iVar0 = 0;

	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && iVar0 < iParam4)
	{
		iVar0 = iVar0 + 1;
		BUILTIN::WAIT(0);
	}

	STREAMING::NEW_LOAD_SCENE_STOP();
	MISC::CLEAR_AREA(fParam0, 5f, 1, 0, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	MISC::SET_GAME_PAUSED(0);

	if (bParam6)
		CAM::DO_SCREEN_FADE_IN(800);
}

bool func_245() // Position - 0x279DA
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

void func_246() // Position - 0x27A04
{
	CUTSCENE::REMOVE_CUTSCENE();
	Global_45435 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_247() // Position - 0x27A18
{
	Global_102493 = true;
}

