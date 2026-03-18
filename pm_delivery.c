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
	int Static_18 = 0;
	char* Static_19 = 0;
	float Static_20 = 0f;
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	float Static_24 = 0f;
	float Static_25 = 0f;
	var Static_26 = 0;
	var Static_27 = 0;
	float Static_28 = 0f;
	float Static_29 = 0f;
	float Static_30 = 0f;
	var Static_31 = 0;
	var Static_32 = 0;
	var Static_33 = 0;
	int Static_34 = 0;
	int Static_35 = 0;
	int Static_36 = 0;
	var Static_37 = 0;
	var Static_38 = 3;
	var Static_39 = 0;
	var Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 1092616192;
	var Static_45 = 1101004800;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 3;
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
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	float Static_71 = 0f;
	float Static_72 = 0f;
	bool Static_73 = 0;
	bool Static_74 = 0;
	bool Static_75 = 0;
	bool Static_76 = 0;
	bool Static_77 = 0;
	int Static_78 = 0;
	int Static_79 = 0;
	int Static_80 = 0;
	int Static_81 = 0;
	int Static_82 = 0;
	int Static_83 = 0;
	int Static_84 = 0;
	int Static_85 = 0;
	int Static_86 = 0;
	int Static_87 = 0;
	int Static_88 = 2;
	var Static_89 = 0;
	var Static_90 = 0;
	int Static_91 = 2;
	var Static_92 = 0;
	var Static_93 = 0;
	int Static_94 = 0;
	var Static_95 = 0;
	int Static_96 = 0;
	var Static_97 = 2;
	var Static_98 = 0;
	var Static_99 = 0;
	int Static_100 = 0;
	char* Static_101 = 0;
	char* Static_102 = 0;
	char* Static_103 = 0;
	var Static_104 = 0;
	var Static_105 = 0;
	var Static_106 = -1;
	var Static_107 = 0;
	var Static_108 = 0;
	var Static_109 = 0;
	var Static_110 = 0;
	var Static_111 = 0;
	var Static_112 = 0;
	var Static_113 = 1000;
	var Static_114 = 1000;
	var Static_115 = 0;
	var Static_116 = 0;
	var Static_117 = 0;
	var Static_118 = 0;
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
	Static_18 = 3;
	Static_19 = "NULL";
	Static_20 = 0f;
	Static_24 = -0.0375f;
	Static_25 = 0.17f;
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;
	Static_83 = -1;
	Static_101 = "PMDL_OBJ" /* GXT: ~s~Pick up the ~b~van. */;
	Static_102 = "PMDL_LOC" /* GXT: ~s~Drive the van to the ~y~shop.~s~ */;
	Static_103 = "PMDL_BCK" /* GXT: ~s~Get back in the ~b~van. */;
	MISC::SET_MISSION_FLAG(1);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_143(2);
		func_115();
	}

	Static_34 = func_113();

	while (true)
	{
		switch (Static_35)
		{
			case 0:
				if (!Static_74)
					func_108();
				else
					func_107();
			
				if (Static_73)
				{
					Static_75 = true;
					Static_35 = 1;
				}
				break;
		
			case 1:
				if (!func_106())
				{
					switch (Static_36)
					{
						case 0:
							func_103();
							break;
					
						case 1:
							if (Static_34 == 5 || Static_34 == 6)
								func_67();
							else
								func_66();
							break;
					
						case 2:
							func_9();
						
							if (Static_34 < 3)
							{
								func_7();
							}
							else if (Static_34 > 6)
							{
								func_7();
								func_2();
							}
							break;
					
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x153
{
	func_143(2);
	func_115();
}

void func_2() // Position - 0x164
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Static_94))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Static_94, 0))
		{
			iVar0 = 200;
			iVar1 = ENTITY::GET_ENTITY_HEALTH(Static_94) - 800;
		
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(Static_94))
				ENTITY::SET_ENTITY_HEALTH(Static_94, ENTITY::GET_ENTITY_HEALTH(Static_94) - 5, 0, 0);
		
			if (iVar1 <= 0)
				Static_36 = 4;
			else if (iVar1 < 75)
				func_3(iVar1, iVar0, "PMDL_DMG" /* GXT: ~s~DAMAGED GOODS~s~ */, 6, 0, 1, 2);
			else
				func_3(iVar1, iVar0, "PMDL_DMG" /* GXT: ~s~DAMAGED GOODS~s~ */, 1, 0, 1, 2);
		}
		else
		{
			Static_36 = 4;
		}
	}
	else
	{
		Static_36 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E8
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
}

void func_4(bool bParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39) // Position - 0x230
{
	int iVar0;
	int iVar1;

	iVar0 = -1;

	for (iVar1 = 0; iVar1 <= 9; iVar1 = iVar1 + 1)
	{
		if (iVar0 == -1)
			if (func_6(0, iVar1) == false)
				iVar0 = iVar1;
	}

	if (iVar0 > -1)
	{
		Global_1679155.f_1 = 1;
		func_5(0, iVar0);
		Global_1679155.f_1177[iVar0] = bParam0;
		Global_1679155.f_1177.f_11[iVar0] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_1177.f_22[iVar0 /*16*/], sParam2, 64);
		Global_1679155.f_1177.f_194[iVar0] = bParam3;
		Global_1679155.f_1177.f_183[iVar0] = bParam4;
		Global_1679155.f_1177.f_227[iVar0] = iParam5;
		Global_1679155.f_1177.f_238[iVar0 /*3*/] = fParam6;
		Global_1679155.f_1177.f_238[iVar0 /*3*/].f_1 = fParam7;
		Global_1679155.f_1177.f_269[iVar0] = iParam8;
		Global_1679155.f_1177.f_280[iVar0] = iParam9;
		Global_1679155.f_1177.f_323[iVar0] = iParam10;
		Global_1679155.f_1177.f_334[iVar0] = iParam11;
		Global_1679155.f_1177.f_345[iVar0] = iParam12;
		Global_1679155.f_1177.f_356[iVar0] = iParam13;
		Global_1679155.f_1172 = 1;
		Global_1679155.f_1177.f_367[iVar0] = iParam14;
		Global_1679155.f_1177.f_378[iVar0] = iParam15;
		Global_1679155.f_1177.f_389[iVar0] = iParam16;
		Global_1679155.f_1177.f_400[iVar0] = iParam17;
		Global_1679155.f_1177.f_411[iVar0] = iParam18;
		Global_1679155.f_1177.f_422[iVar0] = iParam19;
		Global_1679155.f_1177.f_433[iVar0] = iParam20;
		Global_1679155.f_1177.f_444[iVar0] = iParam21;
		Global_1679155.f_1177.f_455[iVar0] = iParam22;
		Global_1679155.f_1177.f_466[iVar0] = iParam23;
		Global_1679155.f_1177.f_477[iVar0] = iParam24;
		Global_1679155.f_1177.f_205[iVar0] = iParam25;
		Global_1679155.f_1177.f_216[iVar0] = iParam39;
		Global_1679155.f_1177.f_488[iVar0] = iParam26;
		Global_1679155.f_1177.f_499[iVar0] = iParam27;
		Global_1679155.f_1177.f_510[iVar0] = iParam28;
		Global_1679155.f_1177.f_521[iVar0] = iParam29;
		Global_1679155.f_1177.f_532[iVar0] = iParam30;
		Global_1679155.f_1177.f_543[iVar0] = iParam31;
		Global_1679155.f_1177.f_554[iVar0] = iParam32;
		Global_1679155.f_1177.f_565[iVar0] = iParam33;
		Global_1679155.f_1177.f_576[iVar0] = iParam34;
		Global_1679155.f_1177.f_587[iVar0] = iParam35;
		Global_1679155.f_1177.f_598[iVar0] = iParam36;
		Global_1679155.f_1177.f_609[iVar0] = iParam37;
		Global_1679155.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_5(int iParam0, int iParam1) // Position - 0x4F7
{
	MISC::SET_BIT(&Global_1679155.f_7064[iParam0], iParam1);
}

bool func_6(int iParam0, int iParam1) // Position - 0x510
{
	return IS_BIT_SET(Global_1679155.f_7064[iParam0], iParam1);
}

void func_7() // Position - 0x526
{
	bool bVar0;

	bVar0 = Static_78 - MISC::GET_GAME_TIMER();

	if (bVar0 < false)
		bVar0 = false;

	if (MISC::GET_GAME_TIMER() >= Static_82)
		func_8(bVar0, "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	else
		func_8(bVar0, "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	switch (Static_79)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 10000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 9000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 2:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 8000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 7000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 4:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 6000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 5:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 5000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 6:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 4500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 7:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 4000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 8:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 9:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 3000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 10:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 2500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 11:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 2000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 12:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 13:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 1000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 14:
			if (MISC::GET_GAME_TIMER() >= Static_78 - 500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 15:
			if (MISC::GET_GAME_TIMER() >= Static_78)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				Static_79 = Static_79 + 1;
			}
			break;
	
		case 16:
			break;
	}

	if (MISC::GET_GAME_TIMER() >= Static_78)
		Static_36 = 3;
}

void func_8(bool bParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x816
{
	int iVar0;
	int iVar1;

	iVar0 = -1;

	for (iVar1 = 0; iVar1 <= 9; iVar1 = iVar1 + 1)
	{
		if (iVar0 == -1)
			if (func_6(7, iVar1) == false)
				iVar0 = iVar1;
	}

	if (iVar0 > -1)
	{
		Global_1679155.f_1 = 1;
		func_5(7, iVar0);
		Global_1679155.f_4714[iVar0] = bParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_4714.f_11[iVar0 /*16*/], sParam1, 64);
		Global_1679155.f_4714.f_172[iVar0] = iParam2;
		Global_1679155.f_4714.f_216[iVar0] = iParam3;
		Global_1679155.f_4714.f_183[iVar0] = bParam4;
		Global_1679155.f_4714.f_194[iVar0] = iParam5;
		Global_1679155.f_4714.f_249[iVar0] = iParam6;
		Global_1679155.f_4714.f_260[iVar0] = iParam7;
		Global_1679155.f_4714.f_205[iVar0] = iParam8;
		Global_1679155.f_4714.f_314[iVar0] = iParam9;
		Global_1679155.f_4714.f_325[iVar0] = iParam10;
		Global_1679155.f_4714.f_357[iVar0] = iParam11;
		Global_1679155.f_4714.f_238[iVar0] = iParam12;
		Global_1679155.f_4714.f_271[iVar0] = iParam13;
		Global_1679155.f_4714.f_368[iVar0] = iParam14;
		Global_1679155.f_4714.f_379[iVar0] = iParam15;
		Global_1679155.f_4714.f_390[iVar0] = iParam16;
		Global_1679155.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_9() // Position - 0x973
{
	int iVar0;
	int iVar1;

	if (Static_34 >= 3 && Static_34 <= 4)
	{
		for (iVar0 = 0; iVar0 < Static_91; iVar0 = iVar0 + 1)
		{
			if (!Static_76)
			{
				if (!PED::IS_PED_INJURED(Static_91[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_62, 50f, 50f, 50f, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
						Static_76 = true;
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(Static_91[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(Static_91[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(Static_91[iVar0], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_91[iVar0]);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(Static_95))
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Static_95);
			}
		}
	}

	if (func_22(&Static_37, Static_65, Global_23, 1, Static_94, Static_102, "", Static_103, true, 0, true, -1))
	{
		func_19(Static_94, 10.5f, 2, 1056964608, 0, true, false);
		TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 2000, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Static_94, 0);
		func_14(&Static_37, true, false);
		func_13();
	}

	for (iVar1 = 0; iVar1 < Static_88; iVar1 = iVar1 + 1)
	{
		if (!PED::IS_PED_INJURED(Static_88[iVar1]))
		{
			if (!HUD::DOES_BLIP_EXIST(Static_97[iVar1]))
			{
				Static_97[iVar1] = func_10(Static_88[iVar1], true, 145);
				TASK::OPEN_SEQUENCE_TASK(&Static_118);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(Static_118);
				TASK::TASK_PERFORM_SEQUENCE(Static_88[iVar1], Static_118);
				TASK::CLEAR_SEQUENCE_TASK(&Static_118);
				PED::SET_PED_KEEP_TASK(Static_88[iVar1], 1);
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(Static_88[iVar1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(Static_97[iVar1]))
					HUD::REMOVE_BLIP(&Static_97[iVar1]);
			
				TASK::TASK_SMART_FLEE_PED(Static_88[iVar1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(Static_88[iVar1], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Static_88[iVar1]);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Static_97[iVar1]))
		{
			HUD::REMOVE_BLIP(&Static_97[iVar1]);
		}
	}
}

int func_10(int iParam0, bool bParam1, int iParam2) // Position - 0xB9D
{
	int iVar0;

	iVar0 = func_11(iParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2339[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2339[iParam2 /*29*/].f_3));

	return iVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2) // Position - 0xBE7
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return 0;

	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		else
			HUD::SET_BLIP_COLOUR(iVar0, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return iVar0;
}

var func_12(bool bParam0, var uParam1, var uParam2) // Position - 0xC8B
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_13() // Position - 0xCA2
{
	func_143(1);
	func_115();
}

void func_14(var uParam0, bool bParam1, bool bParam2) // Position - 0xCB3
{
	int iVar0;

	if (IS_BIT_SET(uParam0->f_13, 30))
		bParam1 = true;

	func_18(uParam0);

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			HUD::REMOVE_BLIP(&uParam0->f_1[iVar0]);
	
		func_17(iVar0, uParam0);
		func_16(iVar0, uParam0);
	}

	for (iVar0 = 0; iVar0 < 31; iVar0 = iVar0 + 1)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_14), iVar0);
		}
	}

	if (HUD::DOES_BLIP_EXIST(*uParam0))
		HUD::REMOVE_BLIP(uParam0);

	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 1);
		
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 0);
			}
		
			PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 0);
		
			if (bParam1)
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
		
			if (!IS_BIT_SET(uParam0->f_13, 29))
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
		
			uParam0->f_17[iVar0] = 0;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);

	uParam0->f_21 = 0;
}

var func_15() // Position - 0xE5E
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_16(int iParam0, var uParam1) // Position - 0xE6E
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 17);
			break;
	
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 18);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1) // Position - 0xEB6
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 14);
			break;
	
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 15);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0) // Position - 0xEFE
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		HUD::REMOVE_BLIP(&(uParam0->f_5));
}

int func_19(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) // Position - 0xF19
{
	func_21(bParam5, bParam6);
	func_20(iParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= iParam3)
			return 1;

	return 0;
}

void func_20(int iParam0) // Position - 0xF70
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}

void func_21(bool bParam0, bool bParam1) // Position - 0xF9C
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

bool func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15) // Position - 0x10ED
{
	return func_23(uParam0, uParam1, uParam4, func_65(), func_65(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_64(), func_64(), func_64(), func_64(), sParam10, false, bParam12, sParam11, false, iParam13, bParam14, iParam15, 0, 0, 0, true, 1065353216);
}

bool func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36) // Position - 0x113C
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	uVar3 = { uParam1 + { 1f, 0f, 0f } };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_63(uParam0);
	func_62(uParam0);
	func_61();

	if (func_45(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, false, false, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_44(sParam20);
		func_44(sParam21);
		func_44(sParam22);
		func_44(sParam23);
	
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
				
					if (!IS_BIT_SET(uParam0->f_13, 9))
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
				
					if (IS_BIT_SET(uParam0->f_13, 23))
						MISC::CLEAR_BIT(&(uParam0->f_13), 23);
				
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_42(uParam0, iParam29))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
				
					if (!IS_BIT_SET(uParam0->f_13, 9))
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
				
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
		
			if (bVar1)
			{
				func_44(sParam24);
				func_44(sParam27);
				func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
			
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						func_44(sParam19);
					}
				
					if (HUD::DOES_BLIP_EXIST(*uParam0))
						HUD::REMOVE_BLIP(uParam0);
				
					if (!func_38(uParam0, 1) && !func_37(uParam0) && !IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_35(uParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, false);
						
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(uParam0->f_13, 0))
					{
						func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!func_38(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
				
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
							HUD::REMOVE_BLIP(uParam0);
					
						uParam0->f_5 = func_32(uVar3, 0);
					
						if (!(iParam31 == -1))
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
					
						if (bParam35)
							func_31(uParam0->f_5, uParam0);
					}
					else if (!func_30(uVar3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f, false))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, uVar3);
					
						if (bParam35)
							func_31(uParam0->f_5, uParam0);
					}
				
					if (!func_38(uParam0, 2))
					{
						if (!IS_BIT_SET(uParam0->f_13, 2))
						{
							func_35(uParam0, sParam19, false);
							MISC::SET_BIT(&(uParam0->f_13), 2);
						}
					}
				
					if (iParam14 == 4 || iParam14 == 5)
						if (IS_BIT_SET(uParam0->f_13, 13))
							iParam13 = 0;
				
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
				
					if (iParam14 == 1 || iParam14 == 3 || iParam14 == 5)
						iVar6 = 1;
				
					if (iParam14 == 2 || iParam14 == 3)
						iVar7 = 1;
					else if (iParam14 == 4 || iParam14 == 5)
						iVar7 = 2;
				
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam1, uParam4, iParam13, iVar6, iVar7);
					
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam7, uParam10, iParam36, 0, iVar6, iVar7))
							bVar1 = true;
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam1, uParam4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
				
					if (bVar1)
					{
						bVar1 = true;
					
						for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], uVar0, 0))
										bVar1 = false;
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0))
										bVar1 = false;
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], func_15()) || !func_28(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
						}
					
						if (bVar1)
						{
							if (func_25(uParam0))
							{
								func_44(sParam19);
								func_44(sParam24);
								func_44(sParam20);
								func_44(sParam21);
								func_44(sParam22);
								func_44(sParam23);
								func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
								func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
								func_44(sParam27);
								func_14(uParam0, true, false);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !IS_BIT_SET(uParam0->f_13, 9) && !IS_BIT_SET(uParam0->f_13, 22))
				{
					func_44(sParam24);
					func_44(sParam27);
				
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						func_44(sParam19);
					}
				
					if (!func_38(uParam0, 1) && !func_37(uParam0) && !IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_35(uParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, false);
						
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(uParam0->f_13, 0))
					{
						func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!func_38(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								func_44(sParam19);
							}
						
							*uParam0 = func_24(iParam18, false, false);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
						
							if (!IS_BIT_SET(uParam0->f_13, 4))
								func_31(*uParam0, uParam0);
						}
					
						if (!func_38(uParam0, 2))
						{
							if (!IS_BIT_SET(uParam0->f_13, 3))
							{
								func_35(uParam0, sParam24, false);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!IS_BIT_SET(uParam0->f_13, 4))
									{
										func_35(uParam0, sParam27, false);
										MISC::SET_BIT(&(uParam0->f_13), 4);
									}
								}
								else if (!IS_BIT_SET(uParam0->f_13, 4))
								{
									func_35(uParam0, sParam24, false);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							
								if (!IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
										func_33(uParam0->f_17[0], "GET_IN_CAR", 3);
								
									MISC::SET_BIT(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					func_44(sParam19);
				}
			
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_38(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!IS_BIT_SET(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
								
									for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
											iVar8 = iVar8 + 1;
									}
								
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
								
									if (!PED::IS_PED_INJURED(uParam0->f_17[iVar9]))
										func_33(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
								
									func_35(uParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, false);
									MISC::SET_BIT(&(uParam0->f_13), 13);
								}
							}
							else if (!IS_BIT_SET(uParam0->f_13, 3))
							{
								func_35(uParam0, sParam24, false);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (!IS_BIT_SET(uParam0->f_13, 4))
							{
								if (IS_BIT_SET(uParam0->f_13, 9))
								{
									func_35(uParam0, sParam27, false);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_38(uParam0, 2))
					{
						if (!IS_BIT_SET(uParam0->f_13, 3))
						{
							func_35(uParam0, sParam24, false);
							MISC::SET_BIT(&(uParam0->f_13), 3);
							MISC::CLEAR_BIT(&(uParam0->f_13), 4);
						}
						else if (IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!IS_BIT_SET(uParam0->f_13, 4))
								{
									func_35(uParam0, sParam27, false);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
							else if (!IS_BIT_SET(uParam0->f_13, 4))
							{
								func_35(uParam0, sParam24, false);
								MISC::SET_BIT(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (IS_BIT_SET(uParam0->f_13, 0))
			MISC::CLEAR_BIT(&(uParam0->f_13), 0);
	
		func_44(sParam19);
		func_44(sParam24);
		func_44(sParam27);
		func_44(sParam24);
		func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
	
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
			HUD::REMOVE_BLIP(&(uParam0->f_5));
	
		if (HUD::DOES_BLIP_EXIST(*uParam0))
			HUD::REMOVE_BLIP(uParam0);
	}

	MISC::CLEAR_BIT(&(uParam0->f_13), 11);
	MISC::CLEAR_BIT(&(uParam0->f_13), 12);
	return 0;
}

int func_24(int iParam0, bool bParam1, bool bParam2) // Position - 0x1A41
{
	return func_11(iParam0, !bParam1, bParam2);
}

bool func_25(var uParam0) // Position - 0x1A54
{
	if (IS_BIT_SET(uParam0->f_13, 12))
		if (func_27(PLAYER::PLAYER_PED_ID()))
			if (func_26(true, false, true) || IS_BIT_SET(uParam0->f_13, 7))
				return true;
	else if (func_26(true, false, true) || IS_BIT_SET(uParam0->f_13, 7))
		return true;

	return false;
}

bool func_26(bool bParam0, bool bParam1, bool bParam2) // Position - 0x1AA9
{
	int iVar0;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			return false;

	iVar0 = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

bool func_27(var uParam0) // Position - 0x1B8E
{
	float fVar0;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(uParam0);
	
		if (fVar0 > -0.5f && fVar0 < 0.5f)
			return true;
	}

	return false;
}

bool func_28(var uParam0, int iParam1) // Position - 0x1BC5
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_29(PLAYER::PLAYER_PED_ID(), uParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
				return true;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(uParam0, func_15()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

bool func_29(var uParam0, var uParam1) // Position - 0x1C30
{
	var uVar0;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0, 0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				if (!PED::IS_PED_INJURED(uParam1))
					if (PED::IS_PED_SITTING_IN_VEHICLE(uParam1, uVar0))
						return true;
		}
	}

	return false;
}

bool func_30(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7) // Position - 0x1C78
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

void func_31(var uParam0, var uParam1) // Position - 0x1CF3
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (HUD::DOES_BLIP_EXIST(uParam1->f_6))
			HUD::SET_BLIP_ROUTE(uParam1->f_6, 0);
	
		HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		uParam1->f_6 = uParam0;
		HUD::SET_BLIP_ROUTE(uParam0, 1);
	}
}

var func_32(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1D2E
{
	var uVar0;

	uVar0 = HUD::ADD_BLIP_FOR_COORD(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

void func_33(var uParam0, char* sParam1, int iParam2) // Position - 0x1D5A
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_34(iParam2), 1);
}

char* func_34(int iParam0) // Position - 0x1D71
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	sVar0 = 0;
	return sVar0;
}

void func_35(var uParam0, char* sParam1, bool bParam2) // Position - 0x1F63
{
	if (!bParam2)
		if (!MISC::IS_STRING_NULL(sParam1))
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
				func_36(sParam1, 7500, 1);

	uParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_36(char* sParam0, int iParam1, int iParam2) // Position - 0x1F9A
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_37(var uParam0) // Position - 0x1FB3
{
	if (!PED::IS_PED_INJURED(uParam0->f_16))
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_16))
			return true;

	return false;
}

bool func_38(var uParam0, int iParam1) // Position - 0x1FD7
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			return true;
	
		if (func_41(uParam0))
			return true;
	}

	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		if (func_40() && !func_39())
			return true;

	return false;
}

bool func_39() // Position - 0x202F
{
	if (Global_24011 == 1)
		return true;

	return false;
}

bool func_40() // Position - 0x2046
{
	if (Global_23000 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

bool func_41(var uParam0) // Position - 0x2068
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = iVar1 - uParam0->f_10;

	if (iVar0 < 35)
		return true;

	return false;
}

bool func_42(var uParam0, int iParam1) // Position - 0x208B
{
	var uVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	
		if (func_43(uVar0, uParam0, iParam1))
			return true;
	}

	return false;
}

bool func_43(var uParam0, var uParam1, int iParam2) // Position - 0x20BC
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		iVar0 = 0;
	
		for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2]))
				iVar0 = iVar0 + 1;
		}
	
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uParam0);
	
		if (iParam2 > 0)
			if (iVar1 >= iParam2)
				if (iParam2 > 1)
					if (!VEHICLE::IS_SEAT_WARP_ONLY(uParam0, 1))
						return true;
				else
					return true;
		else if (iVar1 >= iVar0)
			if (iVar0 > 1)
				if (!VEHICLE::IS_SEAT_WARP_ONLY(uParam0, 1))
					return true;
			else
				return true;
	}

	return false;
}

void func_44(char* sParam0) // Position - 0x2150
{
	if (!MISC::IS_STRING_NULL(sParam0))
		HUD::CLEAR_THIS_PRINT(sParam0);
}

bool func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, int iParam16, bool bParam17) // Position - 0x2168
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	var uVar7;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar19;
	bool bVar23;
	var uVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	var uVar28;
	int iVar31;
	var uVar32;

	iVar4 = 0;
	uVar7 = 3;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15 = 3;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19 = 3;
	uVar19[0] = iParam13;
	uVar19[1] = iParam14;
	uVar19[2] = iParam15;
	bVar6 = true;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	uVar7[0] = 0;
	uVar7[1] = 0;
	uVar7[2] = 0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			iVar3 = iVar3 + 1;
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!IS_BIT_SET(uParam0->f_13, 29) && !IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
			
				if (iVar0 == 2)
					MISC::SET_BIT(&(uParam0->f_13), 28);
			}
		}
		else if (!IS_BIT_SET(uParam0->f_13, 29) && IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
		
			if (iVar0 == 2)
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
		}
	}

	if (iVar3 == 0)
		return true;

	if (IS_BIT_SET(uParam0->f_13, 26))
	{
		bVar23 = false;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 = iVar25 | 65536;
			iVar25 = iVar25 | 2048;
			iVar25 = iVar25 | 1;
			iVar25 = iVar25 | 2;
			iVar25 = iVar25 | 4;
			iVar25 = iVar25 | 32;
			iVar25 = iVar25 | 16;
			iVar25 = iVar25 | 8;
			uVar24 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar25);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar24, 0))
				uParam0->f_21 = uVar24;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0))
		{
			if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_43(uParam0->f_21, uParam0, iVar3))
						{
							for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
								
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7 && !func_60(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
							}
						
							return true;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
	
		if (bVar23)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
		
			for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
				
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
						if (func_58(uParam0, uParam0->f_17[iVar0], uParam8, true))
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
				}
			}
		}
	}

	if (!IS_BIT_SET(uParam0->f_13, 26))
	{
		if (!func_57(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
			{
				if (!IS_BIT_SET(uParam0->f_13, 13))
				{
					iParam16 == 4 || iParam16 == 5;
				
					if (!func_38(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
					
						for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								iVar26 = iVar26 + 1;
						}
					
						iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
					
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar27]))
							func_33(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
					
						func_35(uParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, false);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
			
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1]) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!IS_BIT_SET(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_38(uParam0, 2))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					
						if (func_56(iVar13, uParam0))
						{
							func_35(uParam0, "CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */, false);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					func_44("CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */);
				}
			}
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
					MISC::SET_BIT(&(uParam0->f_13), 21);
			else if (IS_BIT_SET(uParam0->f_13, 21))
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
	
		for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
					else
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
				
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
								if (!func_57(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									if (!func_55(uParam0->f_17[iVar0]))
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
					
						if (iVar13 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13))
								{
									uVar28 = { ENTITY::GET_ENTITY_COORDS(iVar13, 1) };
								
									if (uVar28.f_2 < -1f)
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
								}
							}
						}
					}
				
					bVar11 = true;
				
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
						
							if (!ENTITY::IS_ENTITY_DEAD(iVar13, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											else
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
										
											bVar11 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
										iVar31 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											else
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
										
											bVar11 = false;
										}
									}
								}
							}
						}
					}
				
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
					{
						uVar32 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					
						if (ENTITY::DOES_ENTITY_EXIST(uVar32))
						{
							if (func_43(uVar32, uParam0, 0))
							{
								if (func_54(iVar0, uParam0) || !IS_BIT_SET(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4 = iVar4 + 1;
								
									if (iVar4 >= iVar3)
										MISC::SET_BIT(&(uParam0->f_13), 27);
								}
							}
							else if (!func_54(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(uVar32) == joaat("SENTINEL2"))
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								else
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
							
								func_53(iVar0, uParam0);
							}
						}
					}
				
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && !func_52(uParam0->f_17[iVar0], iParam10) && !func_51(uParam0->f_17[iVar0], iParam10))
					{
						if (func_58(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
							{
								if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
								
									if (iVar14 == 7)
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
								
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
					
						if (bVar11)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_24(uParam0->f_17[iVar0], false, false);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
							
								if (bParam9)
									func_31(uParam0->f_1[iVar0], uParam0);
							}
						}
					
						bVar6 = false;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (func_28(uParam0->f_17[iVar0], 1) || func_52(uParam0->f_17[iVar0], iParam10) || bParam12 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&uParam0->f_1[iVar0]);
								func_44(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
								func_31(uParam0->f_1[iVar0], uParam0);
						
							bVar6 = false;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !IS_BIT_SET(uParam0->f_13, 11) && !(bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_28(uParam0->f_17[iVar0], 1))
										{
											if (func_27(uParam0->f_17[iVar0]))
											{
												iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
											
												if (iVar14 == 7)
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
										if (!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
								
									if (iVar14 == 7 && !func_60(uParam0->f_17[iVar0], iParam10))
									{
										if (!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_50(uParam0->f_17[iVar0], 2f) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
										
											if (IS_BIT_SET(uParam0->f_13, 10))
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
										
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 1073741824, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_24(uParam0->f_17[iVar0], false, false);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										bVar6 = false;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
							{
								if (func_58(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									
										if (iVar14 == 7)
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
							{
								if (!IS_BIT_SET(uParam0->f_13, 21))
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
							}
							else if (IS_BIT_SET(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&uParam0->f_1[iVar0]);
					func_44(uVar15[iVar0]);
				}
			}
		}
	
		for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				uVar7[iVar0] = 1;
				iVar1 = iVar1 + 1;
			}
		}
	
		if (!func_38(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
				{
					if (uVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (func_55(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = iVar1 - 1;
								uVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8 * 0.85f, uParam0->f_8 * 0.85f, uParam0->f_8, 0, 1, 0) && !func_55(uParam0->f_17[iVar0]);
					}
				}
			}
		
			iVar5 = MISC::GET_GAME_TIMER();
		
			if (iVar5 - uParam0->f_11 > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if (iVar1 == iVar3 || iVar2 + iVar1 == iVar3 && iVar3 > 1)
						{
							if (!IS_BIT_SET(uParam0->f_13, 5))
							{
								func_35(uParam0, sParam7, false);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
							{
								if (uVar7[iVar0])
								{
									if (!func_49(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar19[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], ""))
											{
												func_47(uParam0, uVar15[iVar0], uVar19[iVar0], false);
												func_46(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
									
										if (!func_49(iVar0, uParam0))
										{
											func_35(uParam0, uVar15[iVar0], false);
											func_46(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
	
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
	
		if (bVar6 && !bVar12)
		{
			for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&uParam0->f_1[iVar0]);
					func_44(uVar15[iVar0]);
				}
			}
		
			func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
			return true;
		}
	}

	return false;
}

void func_46(int iParam0, var uParam1) // Position - 0x31AB
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 14);
			break;
	
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 15);
			break;
	
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_47(var uParam0, var uParam1, var uParam2, bool bParam3) // Position - 0x31F3
{
	if (!bParam3)
		if (!MISC::IS_STRING_NULL(uParam1))
			if (!MISC::ARE_STRINGS_EQUAL(uParam1, ""))
				func_48(uParam1, uParam2, 7500, 1);

	uParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_48(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x322C
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(uParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

bool func_49(int iParam0, var uParam1) // Position - 0x324B
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 14);
	
		case 1:
			return IS_BIT_SET(uParam1->f_13, 15);
	
		case 2:
			return IS_BIT_SET(uParam1->f_13, 16);
	
		default:
		
	}

	return false;
}

bool func_50(var uParam0, float fParam1) // Position - 0x328B
{
	var uVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0, 0);
	
		if (!ENTITY::IS_ENTITY_DEAD(uVar0, 0))
			if (ENTITY::GET_ENTITY_SPEED(uVar0) > fParam1)
				return true;
	}

	return false;
}

bool func_51(var uParam0, int iParam1) // Position - 0x32C2
{
	int iVar0;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(uParam0, func_15()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(uParam0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0))
					if (iVar0 == iParam1)
						return true;
		}
	}

	return false;
}

bool func_52(var uParam0, int iParam1) // Position - 0x3329
{
	if (!PED::IS_PED_INJURED(uParam0))
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0, iParam1))
					return true;

	return false;
}

void func_53(int iParam0, var uParam1) // Position - 0x335E
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 17);
			break;
	
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 18);
			break;
	
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 19);
			break;
	}
}

bool func_54(int iParam0, var uParam1) // Position - 0x33A6
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 17);
	
		case 1:
			return IS_BIT_SET(uParam1->f_13, 18);
	
		case 2:
			return IS_BIT_SET(uParam1->f_13, 19);
	
		default:
		
	}

	return false;
}

bool func_55(var uParam0) // Position - 0x33E6
{
	var uVar0;
	var uVar1;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(uParam0))
			{
				uVar1 = PED::GET_VEHICLE_PED_IS_USING(uParam0);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1, 0))
					if (uVar0 == uVar1)
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(uParam0, uVar1, 20f, 20f, 20f, 0, 1, 0))
							return true;
			}
		}
	}

	return false;
}

bool func_56(int iParam0, var uParam1) // Position - 0x3473
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("COACH"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
		
			for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_17[iVar2]))
					iVar0 = iVar0 + 1;
			}
		
			uVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
		
			if (!PED::IS_PED_INJURED(uVar3))
				if (uVar3 == uParam1->f_17[0] || uVar3 == uParam1->f_17[1] || uVar3 == uParam1->f_17[2])
					iVar1 = iVar1 + 1;
			else
				iVar1 = iVar1 + 1;
		
			uVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
		
			if (!PED::IS_PED_INJURED(uVar4))
				if (uVar4 == uParam1->f_17[0] || uVar4 == uParam1->f_17[1] || uVar4 == uParam1->f_17[2])
					iVar1 = iVar1 + 1;
			else
				iVar1 = iVar1 + 1;
		
			uVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
		
			if (!PED::IS_PED_INJURED(uVar5))
				if (uVar5 == uParam1->f_17[0] || uVar5 == uParam1->f_17[1] || uVar5 == uParam1->f_17[2])
					iVar1 = iVar1 + 1;
			else
				iVar1 = iVar1 + 1;
		
			if (iVar1 < iVar0)
				return true;
		}
	}

	return false;
}

bool func_57(var uParam0) // Position - 0x35D3
{
	var uVar0;

	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	
		if (func_43(uVar0, uParam0, 0))
			return true;
	}

	return false;
}

bool func_58(var uParam0, var uParam1, var uParam2, bool bParam3) // Position - 0x3602
{
	var uVar0;

	if (!PED::IS_PED_INJURED(uParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam1, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(uVar0, 0))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar0))
						if (func_57(uParam0))
							return true;
					else if (bParam3)
						return true;
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam1, uParam2, uParam2, 3f, 0, 1, 0))
					return true;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam1, uParam2, uParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (ENTITY::DOES_ENTITY_EXIST(uVar0))
					if (func_43(uVar0, uParam0, 0))
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
							if (func_59(uVar0))
								return true;
				else
					return true;
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

bool func_59(var uParam0) // Position - 0x36E0
{
	float fVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(uParam0);
	
		if (fVar0 > -0.5f && fVar0 < 0.5f)
			return true;
	}

	return false;
}

bool func_60(var uParam0, int iParam1) // Position - 0x3718
{
	var uVar0;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_USING(uParam0);
		
			if (uVar0 == iParam1)
				return true;
		}
	}

	return false;
}

void func_61() // Position - 0x3748
{
	var uVar0;
	var uVar1;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0);
		
			if (!PED::IS_PED_INJURED(uVar1))
				if (uVar1 != PLAYER::PLAYER_PED_ID())
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar1))
						if (!PED::IS_PED_HEADTRACKING_ENTITY(uVar1, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_LOOK_AT_ENTITY(uVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
		}
	}
}

void func_62(var uParam0) // Position - 0x37B5
{
	int iVar0;

	if (!IS_BIT_SET(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	
		for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 1);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 1);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
				}
			}
		}
	
		MISC::SET_BIT(&(uParam0->f_13), 25);
	}
}

void func_63(var uParam0) // Position - 0x3855
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 0);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 0);
				}
			}
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}

char* func_64() // Position - 0x38EB
{
	char* sVar0;

	return sVar0;
}

Vector3 func_65() // Position - 0x38F5
{
	var uVar0;

	return uVar0;
}

void func_66() // Position - 0x3901
{
	int iVar0;

	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Static_94, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Static_100))
			HUD::REMOVE_BLIP(&Static_100);
	
		if (Static_34 <= 2)
		{
			Static_78 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * Static_80) + Static_81);
			Static_78 = Static_78 + MISC::GET_GAME_TIMER();
			Static_82 = Static_78 - (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (Static_34 > 6)
		{
			Static_78 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * Static_80) + Static_81);
			Static_78 = Static_78 + MISC::GET_GAME_TIMER();
			Static_82 = Static_78 - (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (Static_34 >= 3 && Static_34 <= 4)
		{
			Static_95 = VEHICLE::CREATE_VEHICLE(Static_87, Static_68, Static_72, 1, 1, 0);
			Static_91[0] = PED::CREATE_PED_INSIDE_VEHICLE(Static_95, 6, Static_85, -1, 1, 1);
			Static_91[1] = PED::CREATE_PED_INSIDE_VEHICLE(Static_95, 6, Static_85, 0, 1, 1);
			PED::ADD_RELATIONSHIP_GROUP("rghCop", &Static_116);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, Static_116, joaat("PLAYER"));
			PED::SET_PED_COMBAT_ATTRIBUTES(Static_91[0], 39, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Static_91[1], 39, 1);
		
			for (iVar0 = 0; iVar0 < Static_91; iVar0 = iVar0 + 1)
			{
				WEAPON::GIVE_WEAPON_TO_PED(Static_91[iVar0], joaat("WEAPON_PISTOL"), -1, 0, 1);
				PED::SET_PED_SEEING_RANGE(Static_91[iVar0], 100f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_91[iVar0], Static_116);
			}
		}
	
		Static_36 = 2;
	}
}

void func_67() // Position - 0x3A33
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Static_94, 0))
	{
		if (func_102() || PED::IS_PED_INJURED(Static_88[0]))
		{
			for (iVar0 = 0; iVar0 < Static_88; iVar0 = iVar0 + 1)
			{
				if (!PED::IS_PED_INJURED(Static_88[iVar0]))
				{
					if (!HUD::DOES_BLIP_EXIST(Static_97[iVar0]))
					{
						Static_97[iVar0] = func_10(Static_88[iVar0], true, 145);
						PED::SET_PED_COMBAT_ATTRIBUTES(Static_88[iVar0], 1, 0);
						TASK::OPEN_SEQUENCE_TASK(&Static_118);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(Static_118);
						TASK::TASK_PERFORM_SEQUENCE(Static_88[iVar0], Static_118);
						TASK::CLEAR_SEQUENCE_TASK(&Static_118);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Static_97[iVar0]))
				{
					HUD::REMOVE_BLIP(&Static_97[iVar0]);
				}
			}
		}
		else if (!Static_77)
		{
			if (!PED::IS_PED_INJURED(Static_88[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Static_88[0], 50f, 50f, 50f, 0, 1, 0))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(Static_88[0], Static_94, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, 1);
					Static_77 = true;
				}
			}
		}
	
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Static_94, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Static_100))
				HUD::REMOVE_BLIP(&Static_100);
		
			func_101(&Static_104, 0, 0, false);
			Static_36 = 2;
		}
		else if (VEHICLE::IS_VEHICLE_SEAT_FREE(Static_94, -1, 0) || PED::IS_PED_INJURED(Static_88[0]))
		{
			func_101(&Static_104, 0, 0, false);
		}
		else
		{
			func_68();
		}
	}
}

void func_68() // Position - 0x3BA3
{
	if (!PED::IS_PED_INJURED(Static_88[0]) && !ENTITY::IS_ENTITY_DEAD(Static_94, 0))
		if (PED::IS_PED_IN_VEHICLE(Static_88[0], Static_94, 0))
			func_69(&Static_104, Static_94, 0, 0, true, true, true);
}

void func_69(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6) // Position - 0x3BE1
{
	func_70(uParam0, iParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
}

void func_70(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9) // Position - 0x3BFE
{
	func_71(uParam0, iParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
}

void func_71(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9) // Position - 0x3C1C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		func_101(uParam0, 0, 0, false);

	uParam0->f_6 = 2;
	func_72(uParam0, iParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
}

void func_72(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9) // Position - 0x3C55
{
	char* sVar0;
	bool bVar1;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	sVar0 = sParam5;

	if (MISC::IS_STRING_NULL(sVar0))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		else
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;

	if (func_100(sVar0))
		func_99();

	if (func_98(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		bVar1 = false;
	
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				bVar1 = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
				bVar1 = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
				bVar1 = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_93(uParam0, bParam7, bParam9, false))
				func_89(uParam0, iParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_77(sVar0))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(sVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (bVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!func_100(sVar0))
							{
								func_76(sVar0, -1);
								uParam0->f_3 = sVar0;
							
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, sVar0))
									func_75(true);
							}
						}
					}
				}
			}
			else if (func_77(sVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(sVar0))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && bVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!func_100(sVar0))
						{
							func_76(sVar0, -1);
							uParam0->f_3 = sVar0;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, sVar0))
								func_75(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				if (func_100(sParam5))
					HUD::CLEAR_HELP(1);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
						func_101(uParam0, sVar0, 1, false);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
						func_101(uParam0, sVar0, 1, false);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
						func_101(uParam0, sVar0, 1, false);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
						func_101(uParam0, sVar0, 1, false);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
						func_101(uParam0, sVar0, 1, false);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
					func_101(uParam0, sVar0, 1, false);
		
			if (!func_93(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_74(uParam0))
					func_73(uParam0);
		}
	}
	else
	{
		func_101(uParam0, sVar0, 0, false);
	}
}

void func_73(var uParam0) // Position - 0x3FC9
{
	if (func_98(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
}

bool func_74(var uParam0) // Position - 0x4034
{
	int iVar0;

	if (uParam0->f_2 > 0)
	{
		iVar0 = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + iVar0 > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_75(bool bParam0) // Position - 0x405F
{
	switch (Global_44886)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_114931.f_10056.f_100 = Global_114931.f_10056.f_100 + 1;
		
			return Global_114931.f_10056.f_100;
	
		case 4:
			if (bParam0)
				Global_114931.f_10056.f_101 = Global_114931.f_10056.f_101 + 1;
		
			return Global_114931.f_10056.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_114931.f_10056.f_102 = Global_114931.f_10056.f_102 + 1;
		
			return Global_114931.f_10056.f_102;
	
		default:
			break;
	}

	return 3;
}

void func_76(char* sParam0, int iParam1) // Position - 0x4109
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_77(char* sParam0) // Position - 0x4120
{
	if (!func_78(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_100(sParam0) || func_100("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
			HUD::CLEAR_HELP(1);
	
		return false;
	}

	switch (Global_44886)
	{
		case 0:
		case 3:
			if (func_75(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_75(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_75(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

bool func_78(bool bParam0, bool bParam1, bool bParam2) // Position - 0x41B9
{
	var uVar0;
	int iVar1;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_88(0))
		return false;

	if (func_87())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_77359)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPINTERNET")) > 0)
		return false;

	if (Global_62208)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_86() || func_85(*Global_4718592.f_199277) || func_84())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_83(PLAYER::PLAYER_PED_ID(), 0);
		
			if (VEHICLE::IS_TURRET_SEAT(uVar0, iVar1) || ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("APC") && iVar1 != -1 || ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("AKULA") && iVar1 != -1 || ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("RIOT2") && iVar1 == 0 && func_82(uVar0, 10) && VEHICLE::GET_VEHICLE_MOD(uVar0, 10) != -1)
				return false;
		}
	}

	if (Global_1963734)
		return false;

	if (func_79(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

bool func_79(bool bParam0) // Position - 0x4412
{
	if (bParam0 != func_81())
		if (func_80(bParam0, true, true))
			return Global_2658294[bParam0 /*468*/].f_325.f_8 != -1;
		else if (Global_1575092 && bParam0 == PLAYER::PLAYER_ID() && func_80(bParam0, true, false))
			return Global_2658294[bParam0 /*468*/].f_325.f_8 != -1;

	return false;
}

bool func_80(bool bParam0, bool bParam1, bool bParam2) // Position - 0x4478
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

bool func_81() // Position - 0x44D8
{
	return -1;
}

bool func_82(var uParam0, int iParam1) // Position - 0x44E1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int func_83(var uParam0, int iParam1) // Position - 0x4543
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

bool func_84() // Position - 0x45C8
{
	return Global_2685153.f_19;
}

bool func_85(int iParam0) // Position - 0x45D6
{
	return iParam0 == 51;
}

bool func_86() // Position - 0x45E3
{
	return Global_2685153.f_18;
}

bool func_87() // Position - 0x45F1
{
	return MISC::GET_GAME_TIMER() <= Global_24546.f_6481 + 100;
}

bool func_88(int iParam0) // Position - 0x4606
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

void func_89(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x465D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1579267 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		func_101(uParam0, 0, 0, false);

	if (func_92(uParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(uVar0, 0))
				if (PED::IS_PED_A_PLAYER(uVar0))
					if (!func_90())
						uParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(uVar0))
					uParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
			iVar1 = 1500;
	
		if (iVar2 < 1500)
			iVar2 = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, uParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_90() // Position - 0x476E
{
	return func_91(PLAYER::PLAYER_ID());
}

bool func_91(var uParam0) // Position - 0x477E
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("MP_F_FREEMODE_01"))
		return 1;

	return 0;
}

bool func_92(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, bool bParam6) // Position - 0x479D
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

bool func_93(var uParam0, bool bParam1, bool bParam2, bool bParam3) // Position - 0x47E4
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_74(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_97(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					if (!func_97(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_96(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_96(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_97(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						if (func_95(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_94(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_94(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_95(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_74(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_78(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_99();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

bool func_94(bool bParam0, bool bParam1, bool bParam2) // Position - 0x4B50
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
				return true;
		}
	}

	return false;
}

bool func_95(bool bParam0, bool bParam1, bool bParam2) // Position - 0x4BA2
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return true;
			}
		}
	}

	return false;
}

bool func_96(bool bParam0, bool bParam1, bool bParam2) // Position - 0x4BEB
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_117)
				return true;
		}
	}

	return false;
}

bool func_97(bool bParam0, bool bParam1, bool bParam2) // Position - 0x4C4A
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return true;
			}
		}
	}

	return false;
}

bool func_98(int iParam0) // Position - 0x4CA0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
			return true;

	return false;
}

void func_99() // Position - 0x4CFB
{
	MISC::SET_BIT(&Global_9464, 4);
}

bool func_100(char* sParam0) // Position - 0x4D0B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_101(var uParam0, char* sParam1, int iParam2, bool bParam3) // Position - 0x4D1E
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2733138.f_3789, 26))
			return;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}

	if (!bParam3)
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);

	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = sParam1;

	if (MISC::IS_STRING_NULL(sVar0))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		else
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (func_100(uParam0->f_3))
			HUD::CLEAR_HELP(1);

	if (!MISC::IS_STRING_NULL(sVar0))
		if (func_100(sVar0))
			HUD::CLEAR_HELP(1);
}

int func_102() // Position - 0x4DFE
{
	if (ENTITY::DOES_ENTITY_EXIST(Static_94))
		if (!ENTITY::IS_ENTITY_DEAD(Static_94, 0))
			if (ENTITY::GET_ENTITY_HEALTH(Static_94) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Static_94) < 200f || FIRE::IS_ENTITY_ON_FIRE(Static_94) || VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 1, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 5, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 4, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 1, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(Static_94, 5, 0))
				return 1;

	return 0;
}

void func_103() // Position - 0x4EB6
{
	int iVar0;
	int iVar1;

	Static_94 = func_105(0);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Static_94, 0))
	{
		Static_94 = VEHICLE::CREATE_VEHICLE(Static_86, Static_62, Static_71, 1, 1, 0);
	
		for (iVar0 = 1; iVar0 <= 8; iVar0 = iVar0 + 1)
		{
			VEHICLE::SET_VEHICLE_EXTRA(Static_94, iVar0, 1);
		}
	
		if (Static_83 != -1)
			VEHICLE::SET_VEHICLE_EXTRA(Static_94, Static_83, 0);
	}

	VEHICLE::SET_VEHICLE_IS_WANTED(Static_94, 1);
	Static_100 = func_104(Static_94, false, false);

	if (Static_34 != 5 && Static_34 != 6)
	{
		if (Static_34 > 6)
		{
			ENTITY::SET_ENTITY_PROOFS(Static_94, 0, 0, 0, 0, 1, 0, 0, 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", Static_94, 0, 0, 0);
		}
	
		func_36(Static_101, 7500, 1);
	}
	else
	{
		Static_88[0] = PED::CREATE_PED_INSIDE_VEHICLE(Static_94, 26, Static_84, -1, 1, 1);
		Static_88[1] = PED::CREATE_PED_INSIDE_VEHICLE(Static_94, 26, Static_84, 0, 1, 1);
		PED::ADD_RELATIONSHIP_GROUP("rghCriminal", &Static_117);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Static_117, joaat("PLAYER"));
	
		for (iVar1 = 0; iVar1 < Static_88; iVar1 = iVar1 + 1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_88[iVar1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(Static_88[iVar1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, 0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_88[iVar1], Static_117);
		}
	
		TASK::TASK_VEHICLE_DRIVE_WANDER(Static_88[0], Static_94, 25f, 786599);
		func_36("PMDL_REC" /* GXT: ~s~Recover the ~b~van. */, 7500, 1);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		Static_96 = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	Static_36 = 1;
}

int func_104(int iParam0, bool bParam1, bool bParam2) // Position - 0x5009
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_105(int iParam0) // Position - 0x501C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113638.f_222[iParam0], 0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113638.f_222[iParam0], 1, 1);
		return Global_113638.f_222[iParam0];
	}

	return 0;
}

bool func_106() // Position - 0x5054
{
	if (ENTITY::DOES_ENTITY_EXIST(Static_94))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Static_94, 0))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(Static_94, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, 0, 1, 0))
				return true;
		else
			return true;

	if (PED::IS_PED_INJURED(Static_88[0]))
		if (HUD::DOES_BLIP_EXIST(Static_97[0]))
			HUD::REMOVE_BLIP(&Static_97[0]);

	return false;
}

void func_107() // Position - 0x50BC
{
	STREAMING::REQUEST_MODEL(Static_86);
	HUD::REQUEST_ADDITIONAL_TEXT("PMDL", 0);

	if (Static_34 >= 3 && Static_34 <= 4)
	{
		STREAMING::REQUEST_MODEL(Static_85);
		STREAMING::REQUEST_MODEL(Static_87);
	}
	else if (Static_34 == 5 || Static_34 == 6)
	{
		STREAMING::REQUEST_MODEL(Static_84);
	}

	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("BENSON"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PONY2"), 1);

	if (STREAMING::HAS_MODEL_LOADED(Static_86) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		if (Static_34 >= 3 && Static_34 <= 4)
			if (STREAMING::HAS_MODEL_LOADED(Static_85) && STREAMING::HAS_MODEL_LOADED(Static_87))
				Static_73 = true;
		else if (Static_34 == 5 || Static_34 == 6)
			if (STREAMING::HAS_MODEL_LOADED(Static_84))
				Static_73 = true;
		else if (Static_34 > 6)
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Deliveries", 0, -1))
				Static_73 = true;
		else
			Static_73 = true;
}

void func_108() // Position - 0x5196
{
	float fVar0;

	Static_62 = { func_110(func_112(), Static_34) };
	Static_71 = func_109(func_112(), Static_34);

	if (Static_34 > 6)
	{
		Static_101 = "PMDL_TRUCK" /* GXT: ~s~Get in the ~b~truck. */;
		Static_102 = "PMDL_BTIM" /* GXT: ~s~Deliver the booze to the ~y~bar~s~ before the time runs out. */;
		Static_103 = "PMDL_BCKT" /* GXT: ~s~Get back in the ~b~truck. */;
		Static_86 = joaat("BENSON");
		Static_83 = 2;
	}

	if (func_112() == 10)
	{
		Static_65 = { -1161.2133f, -1567.0677f, 3.4234f };
		Static_86 = joaat("PONY2");
	
		if (Static_34 == 0)
		{
			Static_80 = 2;
			Static_81 = 15;
			Static_102 = "PMDL_TIM" /* GXT: ~s~Drive the van to the ~y~shop~s~ before the time runs out. */;
		}
		else if (Static_34 == 1)
		{
			Static_80 = 1;
			Static_81 = 30;
			Static_102 = "PMDL_TIM" /* GXT: ~s~Drive the van to the ~y~shop~s~ before the time runs out. */;
		}
		else if (Static_34 == 2)
		{
			Static_80 = 1;
			Static_81 = 30;
			Static_102 = "PMDL_TIM" /* GXT: ~s~Drive the van to the ~y~shop~s~ before the time runs out. */;
		}
		else if (Static_34 == 3)
		{
			Static_68 = { -3121.2615f, 1152.92f, 19.4047f };
			Static_72 = 176.4887f;
			Static_87 = joaat("POLICE4");
			Static_85 = joaat("S_M_Y_COP_01");
		}
		else if (Static_34 == 4)
		{
			Static_68 = { 1543.1453f, 2184.3706f, 77.8114f };
			Static_72 = 45.3499f;
			Static_87 = joaat("POLICE4");
			Static_85 = joaat("S_M_Y_COP_01");
		}
		else if (Static_34 >= 5)
		{
			Static_84 = joaat("G_M_Y_SALVAGOON_02");
		}
	}
	else if (func_112() == 14)
	{
		Static_65 = { -2169.8284f, 4277.365f, 47.9568f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Static_62, Static_65, 1);
		Static_81 = BUILTIN::ROUND(((fVar0 / 16.5f) + 40f) / 2f);
	}
	else if (func_112() == 13)
	{
		Static_65 = { -323.356f, 6264.4307f, 30.4463f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Static_62, Static_65, 1);
		Static_81 = BUILTIN::ROUND(((fVar0 / 16.5f) + 40f) / 2f);
	}
	else if (func_112() == 12)
	{
		Static_65 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Static_62, Static_65, 1);
		Static_81 = BUILTIN::ROUND(((fVar0 / 16.5f) + 15f) / 2f);
	}
	else if (func_112() == 11)
	{
		Static_65 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Static_62, Static_65, 1);
		Static_81 = BUILTIN::ROUND(((fVar0 / 16.5f) + 15f) / 2f);
	}

	Static_79 = 0;
	Static_74 = true;
}

float func_109(int iParam0, int iParam1) // Position - 0x53C4
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
			
				case 1:
					return 177.9306f;
			
				case 2:
					return 49.6978f;
			
				case 3:
					return 336.9449f;
			
				case 4:
					return 80.1639f;
			
				case 5:
					return 287.983f;
			
				case 6:
					return 46.7895f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
			
				case 8:
					return 256.7899f;
			
				case 9:
					return 180.9647f;
			
				case 10:
					return 126.4385f;
			
				case 11:
					return 123.4767f;
			
				case 12:
					return 226.219f;
			
				case 13:
					return 82.6097f;
			}
			break;
	}

	return 0f;
}

Vector3 func_110(int iParam0, int iParam1) // Position - 0x54F4
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.18756f, 1934.4951f, 194.90749f;
			
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
			
				case 2:
					return 1390.0889f, -605.923f, 73.3378f;
			
				case 3:
					return -3170.0483f, 1098.809f, 19.7817f;
			
				case 4:
					return 1581.2198f, 2194.629f, 78.1062f;
			
				case 5:
					return 1475.8333f, -113.5801f, 141.794f;
			
				case 6:
					return 1603.0708f, -1793.9147f, 89.0179f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
			
				case 8:
					return -1916.1224f, 2060.3132f, 139.7363f;
			
				case 9:
					return 824.8992f, -1064.1921f, 26.9851f;
			
				case 10:
					return -669.6013f, -1198.6638f, 9.6125f;
			
				case 11:
					return -1465.5795f, -390.7494f, 37.5168f;
			
				case 12:
					return 797.7521f, -1793.0078f, 28.3164f;
			
				case 13:
					return 806.319f, -2017.4514f, 28.2215f;
			}
			break;
	}

	return func_111(iParam0);
}

Vector3 func_111(int iParam0) // Position - 0x56B5
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
	
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
	
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
	
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
	
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
	
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
	
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
	
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
	
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
	
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
	
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
	
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
	
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
	
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
	
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
	}

	return 10f, 10f, 10f;
}

int func_112() // Position - 0x5868
{
	return Global_113638.f_20;
}

int func_113() // Position - 0x5876
{
	return func_114(Global_113638.f_20, Global_113638.f_29);
}

int func_114(int iParam0, int iParam1) // Position - 0x588E
{
	switch (iParam0)
	{
		case 10:
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
					return 5;
			
				case 6:
					return 6;
			}
			break;
	
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
			
				case 1:
					return 10;
			
				case 2:
					return 11;
			
				case 3:
					return 12;
			
				case 4:
					return 13;
			}
			break;
	
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 7;
			}
			break;
	}

	return 0;
}

void func_115() // Position - 0x5996
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("BENSON"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PONY2"), 0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();

	if (Static_75)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Static_96, 0))
			func_116(Static_96, 0, 145);
	
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		func_101(&Static_104, 0, 0, false);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_116(int iParam0, int iParam1, int iParam2) // Position - 0x59E5
{
	var uVar0;
	var uVar1;

	if (iParam1 == 0)
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
			if (MISC::GET_HASH_KEY(uVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
				return 0;
	}

	func_117(iParam0, iParam2);
	return 1;
}

void func_117(int iParam0, int iParam1) // Position - 0x5A25
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_123(iParam0))
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
	func_118(iParam0, &(Global_114931.f_32757.f_5510));
}

void func_118(int iParam0, var uParam1) // Position - 0x5C27
{
	int iVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_122(uParam1);
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
	
		if (uParam1->f_65 == -1 && !func_121(uParam1->f_66))
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
	
		func_120(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (iVar0 = 0; iVar0 <= 11; iVar0 = iVar0 + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_119(iVar0 + 1));
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

int func_119(int iParam0) // Position - 0x5ED2
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

int func_120(var uParam0, var uParam1, var uParam2) // Position - 0x5F82
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

bool func_121(int iParam0) // Position - 0x6175
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

void func_122(var uParam0) // Position - 0x6195
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

bool func_123(int iParam0) // Position - 0x6245
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) || func_141(iParam0, 0, false) || func_141(iParam0, 1, false) || func_141(iParam0, 2, false) || func_140(iParam0) != 145 || func_139(iParam0) || func_138(iParam0) || func_137(iParam0) || func_136(iParam0) || !func_124(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		func_138(iParam0);
		func_138(iParam0);
		func_141(iParam0, 0, false);
		func_141(iParam0, 1, false);
		func_141(iParam0, 2, false);
		func_140(iParam0) != 145;
		return false;
	}

	return true;
}

bool func_124(int iParam0) // Position - 0x6322
{
	if (iParam0 == 0)
		return false;

	if (!func_125(iParam0, false, -1))
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

bool func_125(int iParam0, bool bParam1, int iParam2) // Position - 0x64E0
{
	int iVar0;
	var uVar1;

	if (iParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
		return false;

	if (iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0 == joaat("BLIMP2") || iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_135())
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
		if (!func_134() && !func_133() && !func_132() && !func_131() && !func_135())
			return false;

	if (iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS") || iParam0 == joaat("KHAMELION"))
	{
		if (func_130() || MISC::IS_PC_VERSION() || func_129())
		{
		}
		else if (!func_132())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_128(iParam0, iParam2))
			return false;

	if (!func_126(iParam0))
		return false;

	return true;
}

bool func_126(int iParam0) // Position - 0x6665
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_127())
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

bool func_127() // Position - 0x6731
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

bool func_128(bool bParam0, int iParam1) // Position - 0x6748
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

bool func_129() // Position - 0x6930
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

bool func_130() // Position - 0x6946
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

bool func_131() // Position - 0x695C
{
	return false;
}

bool func_132() // Position - 0x6965
{
	return true;
}

bool func_133() // Position - 0x696E
{
	return true;
}

bool func_134() // Position - 0x6977
{
	if (DLC::IS_DLC_PRESENT(joaat("DLC_ATOMICBLIMP")))
		return true;

	return false;
}

bool func_135() // Position - 0x6990
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

bool func_136(int iParam0) // Position - 0x6A48
{
	int iVar0;
	var uVar1;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);

	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
		return true;

	if (!func_125(iVar0, false, -1))
		return true;

	return false;
}

bool func_137(int iParam0) // Position - 0x6A8F
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

bool func_138(int iParam0) // Position - 0x6ACA
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

bool func_139(int iParam0) // Position - 0x6B46
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

int func_140(int iParam0) // Position - 0x6C2E
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

bool func_141(int iParam0, int iParam1, bool bParam2) // Position - 0x6C91
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		return false;

	for (iVar0 = 0; func_142(iParam1, iVar0, &uVar1, &iVar9); iVar0 = iVar0 + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114931.f_7236[iVar9], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&uVar1, iParam0))
				return true;
	}

	return false;
}

bool func_142(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x6CFF
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

void func_143(int iParam0) // Position - 0x6DD7
{
	Global_113638.f_22 = iParam0;
}

