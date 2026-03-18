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
	char* Static_16 = 0;
	var Static_17 = 0;
	var Static_18 = 0;
	int Static_19 = 0;
	float Static_20 = 0f;
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	float Static_24 = 0f;
	float Static_25 = 0f;
	var Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	float Static_29 = 0f;
	float Static_30 = 0f;
	float Static_31 = 0f;
	var Static_32 = 0;
	var Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	var Static_37 = 0;
	int Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	int Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	int Static_52 = 0;
	int Static_53 = 0;
	int Static_54 = 0;
	int Static_55 = 0;
	var Static_56 = 0;
	int Static_57 = 0;
	bool Static_58 = 0;
	bool Static_59 = 0;
	bool Static_60 = 0;
	int Static_61 = 0;
	int Static_62 = 0;
	int Static_63 = 0;
	bool Static_64 = 0;
	bool Static_65 = 0;
	bool Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 0;
	bool Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	int Static_76 = 0;
	int Static_77 = 0;
	int Static_78 = 0;
	bool Static_79 = 0;
	bool Static_80 = 0;
	bool Static_81 = 0;
	int Static_82 = 0;
	var Static_83 = 0;
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
	Static_16 = "NULL";
	Static_19 = 3;
	Static_20 = 0f;
	Static_24 = -0.0375f;
	Static_25 = 0.17f;
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_38 = 1;
	Static_39 = 65;
	Static_40 = 49;
	Static_41 = 64;
	Static_52 = 2;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		func_107();
	
		switch (Static_53)
		{
			case 0:
				func_102();
				break;
		
			case 1:
				func_93();
				func_2();
				Global_99713 = false;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0xCC
{
	Static_53 = 0;
}

void func_2() // Position - 0xD7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;

	if (Static_59)
		Static_59 = false;
	else
		Static_54 = Static_54 + 1;

	Static_58 = false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iVar0 = 3;
	else
		iVar0 = func_88();

	if (iVar0 != Static_57)
	{
		Static_57 = iVar0;
		Static_58 = true;
		Static_65 = false;
		Static_66 = false;
		Static_73 = false;
		Static_79 = false;
	}

	if (Static_57 == 145)
		return;

	bVar1 = false;

	if (Static_54 == 6 && func_87(64) || Static_54 == 5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PILOT_SCHOOL")) > 0)
	{
		bVar1 = true;
		Static_59 = true;
	}

	func_81();

	if (Global_99711 || Global_99712 && !func_78(0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1)
			{
				func_77(Static_57, iVar2);
			}
		
			Global_99711 = false;
		}
	}

	if (!bVar1)
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_76(Static_57) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_75() || CUTSCENE::IS_CUTSCENE_PLAYING() || CAM::IS_SCREEN_FADED_OUT() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || Global_80303 || Global_99713 || Static_60)
		{
			Static_81 = true;
			Static_82 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Static_83 = NETWORK::GET_NETWORK_TIME();
		
			return;
		}
	
		if (Static_81)
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - Static_82 > 3000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Static_83, 3000)))
				Static_81 = false;
			else
				return;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - Static_55 > 2000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Static_56, 2000)) || Static_58)
	{
		if (Static_54 >= 8)
		{
			Static_54 = 0;
			Static_55 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Static_56 = NETWORK::GET_NETWORK_TIME();
		}
	
		iVar11 = 1;
	
		if (Static_58)
			iVar11 = 8;
	
		for (iVar12 = 0; iVar12 < iVar11; iVar12 = iVar12 + 1)
		{
			bVar13 = true;
		
			if (Static_58)
				iVar8 = iVar12;
			else
				iVar8 = Static_54;
		
			func_74(Static_57, iVar8, &uVar6, &iVar7);
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				bVar3 = func_73(iVar7, -1);
			else if (iVar8 == 0)
				bVar3 = Global_114931.f_2370.f_539.f_2387[Static_57];
			else
				STATS::STAT_GET_INT(uVar6, &bVar3, -1);
		
			bVar5 = bVar3;
			bVar3 = func_72(bVar3, 0, 100);
		
			if (func_59(Static_57, iVar8, bVar3, &bVar4))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_57(iVar7, bVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					if (Global_114931.f_2370.f_539.f_2387[Static_57] == false)
						bVar13 = false;
				
					Global_114931.f_2370.f_539.f_2387[Static_57] = bVar4;
				}
				else
				{
					STATS::STAT_SET_INT(uVar6, bVar4, 1);
				}
			
				if (bVar4 > func_55(Static_57, iVar8, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_40, 19))
							bVar13 = false;
					else if (!Global_114931.f_9092 && !func_54(false) || !IS_BIT_SET(Global_114931.f_9092.f_2[27 /*3*/], 2))
						bVar13 = false;
				
					bVar14 = bVar4;
					bVar15 = bVar14 - (bVar14 % func_53(Static_57, iVar8));
				
					if (bVar14 % func_53(Static_57, iVar8) >= 0)
						bVar15 = bVar15 + func_53(Static_57, iVar8);
				
					if (bVar14 >= bVar15)
						bVar14 = bVar15;
					else
						bVar14 = bVar15 - func_53(Static_57, iVar8);
				
					if (bVar4 > bVar14)
						bVar13 = false;
				
					if (func_47())
						bVar13 = false;
				
					if (bVar13)
					{
						if (!Static_58)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (func_46(117, -1) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										func_8("STAT_HELP2" /* GXT: ~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game. */, -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
						
							Static_60 = true;
							Static_63 = bVar4 - bVar3;
							Static_63 = Static_63 + (bVar3 % func_53(Static_57, iVar8));
							Static_64 = bVar4;
							Static_61 = Static_57;
							Static_62 = iVar8;
						}
					}
				
					if (bVar4 >= 100)
					{
						if (func_3(Static_57, iVar8, &uVar9))
						{
							if (Static_57 == 0)
							{
								STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &uVar10, -1);
								STATS::STAT_SET_INT(uVar9, uVar10, 1);
							}
							else if (Static_57 == 1)
							{
								STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &uVar10, -1);
								STATS::STAT_SET_INT(uVar9, uVar10, 1);
							}
							else if (Static_57 == 2)
							{
								STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &uVar10, -1);
								STATS::STAT_SET_INT(uVar9, uVar10, 1);
							}
							else
							{
								Static_57 == 3;
							}
						}
					}
				}
			
				func_77(Static_57, iVar8);
			}
			else if (bVar4 < bVar5)
			{
				bVar16 = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_57(iVar7, bVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					Global_114931.f_2370.f_539.f_2387[Static_57] = bVar4;
					bVar16 = false;
				}
				else
				{
					STATS::STAT_SET_INT(uVar6, bVar4, 1);
				}
			
				if (bVar16)
					func_77(Static_57, iVar8);
			}
		}
	}
	else
	{
		Static_59 = true;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2) // Position - 0x5CA
{
	*uParam2 = joaat("LAST_PLAYING_TIME");

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}

	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x7B2
{
	int iVar0;

	iVar0 = func_5(iParam0, bParam2);

	if (iVar0 != 0)
		STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}

int func_5(int iParam0, bool bParam1) // Position - 0x7D5
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_6(bParam1));
}

bool func_6(bool bParam0) // Position - 0x7EA
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam0;

	if (bVar0 == -1)
	{
		bVar1 = func_7();
	
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

bool func_7() // Position - 0x81E
{
	return Global_1574927;
}

void func_8(char* sParam0, int iParam1) // Position - 0x82A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_9() // Position - 0x841
{
	var uVar0;

	uVar0 = MISC::GET_FRAME_COUNT();

	if (Global_1935675 == uVar0)
	{
		return Global_1935676;
	}
	else
	{
		Global_1935675 = uVar0;
		Global_1935676 = false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_40, 19) || func_45(*Global_4718592.f_199277, true))
			return false;

	if (HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN() && !func_44(PLAYER::PLAYER_ID()))
		return false;

	if (Global_1935677 == 1)
		return false;

	if (Global_1935486 == true)
		return false;

	if (func_43())
		return false;

	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
		return false;

	if (Global_1836742 == true)
		return false;

	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
		return false;

	if (Global_1057442)
		return false;

	if (IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_882, 16))
		return false;

	if (func_42())
		return false;

	if (func_41())
		return false;

	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2699667, 300000, false) == 1)
				{
					func_36(&Global_2699665);
					func_34(3, -1);
				}
				else if (func_37(&Global_2699665, 7000, false) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (func_33())
		return false;

	if (func_32())
		return false;

	if (func_30())
		return false;

	if (func_29())
		return false;

	if (func_28())
		return false;

	if (func_27())
		return false;

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		if (func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_SNIPERRIFLE") || func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_HEAVYSNIPER"))
			return false;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (func_25(8, -1))
		return false;

	if (func_24(12, -1))
		return false;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
		return false;

	if (func_23())
		return false;

	if (func_22())
		return false;

	if (IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_882, 2))
		return false;

	if (Global_1836519)
		return false;

	if (Global_1836523)
		return false;

	if (Global_1836525)
		return false;

	if (Global_2673274.f_3776.f_39)
		return false;

	if (func_21(0))
		return false;

	if (func_20())
		return false;

	if (Global_2733138.f_3157)
		return false;

	if (Global_2673274.f_3638)
		return false;

	if (!func_19(PLAYER::PLAYER_ID(), true, false))
		return false;

	if (func_18(PLAYER::PLAYER_ID()))
		return false;

	if (Global_2673274.f_3776.f_39 == true)
		return false;

	if (Global_2686095.f_2847.f_26 == true)
		return false;

	if (func_17(true))
		return false;

	if (func_15())
		return false;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
		return false;

	if (func_14())
		return false;

	if (func_13())
		return false;

	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
		if (func_12("FHU_HELP3" /* GXT: Shout through your headset to make the store clerk fill the bag with cash faster. */))
			return false;

	if (IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_882, 6))
		return false;

	if (func_10(PLAYER::PLAYER_ID()))
		return false;

	Global_1935676 = true;
	return true;
}

bool func_10(int iParam0) // Position - 0xBA6
{
	if (iParam0 != func_11())
		return IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_260.f_376, 26);

	return false;
}

int func_11() // Position - 0xBCD
{
	return -1;
}

bool func_12(char* sParam0) // Position - 0xBD6
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_13() // Position - 0xBE9
{
	return Global_2673274.f_1762.f_701 != 0;
}

bool func_14() // Position - 0xBFD
{
	return Global_2673274.f_2915.f_583;
}

bool func_15() // Position - 0xC0F
{
	return func_16();
}

bool func_16() // Position - 0xC1B
{
	return Global_1674300.f_40 == 3;
}

bool func_17(bool bParam0) // Position - 0xC2B
{
	if (bParam0)
		return Global_24407.f_4 && Global_24407.f_104 == 4;

	return Global_24407.f_4;
}

bool func_18(int iParam0) // Position - 0xC54
{
	return IS_BIT_SET(Global_1882717[iParam0 /*315*/].f_17, 0);
}

bool func_19(bool bParam0, bool bParam1, bool bParam2) // Position - 0xC69
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

bool func_20() // Position - 0xCC9
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPCAMERA")) > 0)
		return true;

	return false;
}

bool func_21(int iParam0) // Position - 0xCE6
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

bool func_22() // Position - 0xD3D
{
	return Global_1677594.f_112;
}

bool func_23() // Position - 0xD4B
{
	return Global_2673274.f_2591[0 /*80*/].f_1 != 0;
}

bool func_24(int iParam0, int iParam1) // Position - 0xD61
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1677594.f_137[iParam1])
					return true;
			
				if (Global_1677594.f_170[iParam1])
					return true;
			}
			break;
	
		default:
			if (IS_BIT_SET(Global_1677594.f_1046, iParam0))
				return true;
		
			if (IS_BIT_SET(Global_1677594.f_1047, iParam0))
				return true;
			break;
	}

	return false;
}

bool func_25(int iParam0, int iParam1) // Position - 0xDC7
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677594.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677594.f_1048, iParam0);
}

int func_26(var uParam0) // Position - 0xDFF
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
	return iVar0;
}

bool func_27() // Position - 0xE13
{
	return Global_2685153.f_694;
}

bool func_28() // Position - 0xE22
{
	return IS_BIT_SET(Global_1048576.f_10, 13);
}

bool func_29() // Position - 0xE33
{
	return Global_2685153.f_693;
}

bool func_30() // Position - 0xE42
{
	if (func_31() == 1 || func_31() == 4)
		return true;

	return false;
}

int func_31() // Position - 0xE64
{
	return Global_1574634.f_18;
}

bool func_32() // Position - 0xE72
{
	if (func_31() == 3 || func_31() == 2)
		return true;

	return false;
}

bool func_33() // Position - 0xE94
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MAINTRANSITION")) > 0)
		return true;

	return false;
}

void func_34(int iParam0, bool bParam1) // Position - 0xEAE
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
		bParam1 = func_7();

	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
		return;

	switch (iParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, bParam1);
			iVar1 = func_35(bParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
	
		default:
			iVar1 = func_35(bParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
		
			if (!IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, bParam1);
			}
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_4(120, 0, bParam1, 1);
			func_4(124, 0, bParam1, 1);
			func_4(115, 0, bParam1, 1);
			func_4(119, 0, bParam1, 1);
			func_4(121, 0, bParam1, 1);
			func_4(122, 0, bParam1, 1);
			func_4(125, 0, bParam1, 1);
			func_57(1304, 0, bParam1, 1);
			func_57(7236, 0, bParam1, 1);
			break;
	}
}

int func_35(bool bParam0) // Position - 0xF8F
{
	int iVar0;

	if (bParam0 == -1)
		bParam0 = func_7();

	switch (bParam0)
	{
		case false:
			iVar0 = 914;
			break;
	
		case true:
			iVar0 = 915;
			break;
	
		case 2:
			iVar0 = 916;
			break;
	
		case 3:
			iVar0 = 917;
			break;
	
		case 4:
			iVar0 = 918;
			break;
	}

	return iVar0;
}

void func_36(int iParam0) // Position - 0xFF2
{
	iParam0->f_1 = 0;
}

int func_37(int iParam0, int iParam1, bool bParam2) // Position - 0xFFF
{
	if (iParam1 == -1)
		return 1;

	func_38(iParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *iParam0)) >= iParam1)
		{
			func_36(iParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *iParam0)) >= iParam1)
	{
		func_36(iParam0);
		return 1;
	}

	return 0;
}

void func_38(int iParam0, bool bParam1, bool bParam2) // Position - 0x1069
{
	if (iParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*iParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*iParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*iParam0 = MISC::GET_GAME_TIMER();
	
		iParam0->f_1 = 1;
	}
}

bool func_39(int iParam0, bool bParam1) // Position - 0x10AE
{
	int iVar0;
	int iVar1;

	if (bParam1 == -1)
		bParam1 = func_7();

	iVar0 = func_35(bParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return IS_BIT_SET(iVar1, iParam0);
}

bool func_40() // Position - 0x10D7
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

bool func_41() // Position - 0x118F
{
	return Global_1575092;
}

bool func_42() // Position - 0x119B
{
	return Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_185 != 0;
}

bool func_43() // Position - 0x11B2
{
	return Global_2709408;
}

bool func_44(int iParam0) // Position - 0x11BE
{
	return IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_325.f_3, 13);
}

bool func_45(int iParam0, bool bParam1) // Position - 0x11D7
{
	if (iParam0 == 93)
		if (bParam1)
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
				return true;
		else
			return true;

	return false;
}

int func_46(int iParam0, bool bParam1) // Position - 0x1203
{
	int iVar0;
	int iVar1;

	iVar0 = func_5(iParam0, bParam1);

	if (STATS::STAT_GET_BOOL(iVar0, &iVar1, -1))
		return iVar1;

	return 0;
}

bool func_47() // Position - 0x1227
{
	if (!func_51(true))
		return false;

	if (func_48())
		return false;

	return Global_1948250;
}

bool func_48() // Position - 0x124B
{
	return func_49(PLAYER::PLAYER_ID());
}

bool func_49(bool bParam0) // Position - 0x125B
{
	if (func_50(bParam0))
		if (func_50(Global_1892798[bParam0 /*615*/].f_10))
			return Global_1892798[bParam0 /*615*/].f_10 == bParam0;

	return false;
}

bool func_50(bool bParam0) // Position - 0x1290
{
	int iVar0;

	iVar0 = bParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_51(bool bParam0) // Position - 0x12B2
{
	return func_52(PLAYER::PLAYER_ID(), bParam0);
}

bool func_52(int iParam0, bool bParam1) // Position - 0x12C4
{
	if (!func_50(iParam0))
		return false;

	if (!bParam1)
		if (func_49(iParam0))
			return false;

	return func_50(Global_1892798[iParam0 /*615*/].f_10);
}

int func_53(int iParam0, int iParam1) // Position - 0x12FC
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	}

	return 1;
}

bool func_54(bool bParam0) // Position - 0x150C
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

bool func_55(int iParam0, int iParam1, bool bParam2) // Position - 0x1534
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_56(14))
			return 100;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 47;
			
				case 3:
					return 22;
			
				case 2:
					return 21;
			
				case 4:
					return 54;
			
				case 5:
					return 31;
			
				case 6:
					return 79;
			
				case 7:
					return 81;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 51;
			
				case 3:
					return 46;
			
				case 2:
					return 49;
			
				case 4:
					return 71;
			
				case 5:
					return 19;
			
				case 6:
					return 24;
			
				case 7:
					return 21;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 23;
			
				case 3:
					return 28;
			
				case 2:
					return 79;
			
				case 4:
					return 31;
			
				case 5:
					return 82;
			
				case 6:
					return 69;
			
				case 7:
					return 49;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_73(1225, bParam2);
			
				case 3:
					return func_73(1231, bParam2);
			
				case 2:
					return func_73(1227, bParam2);
			
				case 4:
					return func_73(1230, bParam2);
			
				case 5:
					return func_73(1229, bParam2);
			
				case 6:
					return func_73(1226, bParam2);
			
				case 7:
					return func_73(1228, bParam2);
			}
			break;
	}

	return 0;
}

bool func_56(int iParam0) // Position - 0x177A
{
	return Global_44886 == iParam0;
}

void func_57(int iParam0, bool bParam1, bool bParam2, int iParam3) // Position - 0x1788
{
	int iVar0;

	if (iParam0 != 18486)
	{
		iVar0 = func_58(iParam0, bParam2);
	
		if (iVar0 != 0)
			STATS::STAT_SET_INT(iVar0, bParam1, iParam3);
	}
}

int func_58(int iParam0, bool bParam1) // Position - 0x17B6
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(bParam1));
}

bool func_59(int iParam0, int iParam1, bool bParam2, var uParam3) // Position - 0x17CB
{
	*uParam3 = func_60(iParam0, iParam1, false, -1);

	if (*uParam3 > bParam2)
		return true;

	return false;
}

bool func_60(int iParam0, int iParam1, bool bParam2, bool bParam3) // Position - 0x17ED
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	float fVar12;

	bVar2 = false;

	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &bVar3, -1);
				fVar0 = BUILTIN::TO_FLOAT(bVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &bVar3, -1);
				fVar0 = BUILTIN::TO_FLOAT(bVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &bVar3, -1);
				fVar0 = BUILTIN::TO_FLOAT(bVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = BUILTIN::TO_FLOAT(func_73(64, bParam3));
			}
			break;
	
		case 1:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &fVar1, -1);
				fVar0 = (fVar1 - Global_114931.f_2370.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &fVar1, -1);
				fVar0 = (fVar1 - Global_114931.f_2370.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &fVar1, -1);
				fVar0 = (fVar1 - Global_114931.f_2370.f_539.f_2355[iParam0]) / 175f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = func_70(20, bParam3) / 175f;
				func_67(&fVar0);
			}
		
			if (iParam0 == 0)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(joaat("SP0_TIME_SWIMMING")));
			}
			else if (iParam0 == 1)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(joaat("SP1_TIME_SWIMMING")));
			}
			else if (iParam0 == 2)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(joaat("SP2_TIME_SWIMMING")));
			}
			else if (iParam0 == 3)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(func_58(50, bParam3)));
				func_67(&fVar0);
			}
		
			if (iParam0 == 0)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 1)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 2)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_BICYCLE")));
			}
			else if (iParam0 == 3)
			{
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(func_66(func_58(47, bParam3)));
				func_67(&fVar0);
			}
		
			if (iParam0 == 3)
			{
				fVar0 = fVar0 + (4f * Global_262145.f_24010 /* Tunable: BB_NIGHTCLUB_BEAT_MATCHING_STAMINA_INCREASE_PER_MINUTE */ * (float)func_73(7237, -1));
				fVar0 = fVar0 + (float)4 * (func_73(14260, -1) / 3);
			}
		
			if (iParam0 == 3)
				fVar0 = fVar0 * 0.25f;
			break;
	
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = BUILTIN::TO_FLOAT(func_65(joaat("SP0_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 1)
			{
				fVar0 = BUILTIN::TO_FLOAT(func_65(joaat("SP1_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 2)
			{
				fVar0 = BUILTIN::TO_FLOAT(func_65(joaat("SP2_TIME_UNDERWATER"))) / 30f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = BUILTIN::TO_FLOAT(func_65(func_58(52, bParam3))) / 30f;
				func_67(&fVar0);
			}
			break;
	
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &bVar3, -1);
				fVar0 = BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &bVar3, -1);
				fVar0 = BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &bVar3, -1);
				fVar0 = BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2359[iParam0]) / 20f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = BUILTIN::TO_FLOAT(func_73(1500, bParam3)) / 20f;
				func_67(&fVar0);
			}
			break;
	
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &bVar3, -1);
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &bVar3, -1);
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &bVar3, -1);
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2363[iParam0]) / 50f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = fVar0 + (float)func_73(113, bParam3) / 50;
				func_67(&fVar0);
			}
			break;
	
		case 5:
			if (iParam0 == 0)
				fVar0 = BUILTIN::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 1)
				fVar0 = BUILTIN::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 2)
				fVar0 = BUILTIN::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
			else if (iParam0 == 3)
				fVar0 = BUILTIN::TO_FLOAT(func_66(func_58(43, bParam3))) / 10f;
		
			if (iParam0 == 0)
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 1)
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 2)
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
			else if (iParam0 == 3)
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(func_66(func_58(45, bParam3))) / 10f);
		
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_PLANE_LANDINGS"), &bVar3, -1);
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(bVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_PLANE_LANDINGS"), &bVar3, -1);
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(bVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_PLANE_LANDINGS"), &bVar3, -1);
				fVar0 = fVar0 + BUILTIN::TO_FLOAT(bVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = fVar0 + (float)func_73(61, bParam3);
				func_67(&fVar0);
			}
		
			if (iParam0 == 3)
				if (IS_BIT_SET(Global_1575014, 15))
					fVar0 = 100f;
		
			if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2)
			{
				iVar4 = func_64(iParam0, 0);
			
				if (iParam0 == 2)
					if (iVar4 == 3)
						fVar0 = fVar0 + 10f;
					else if (iVar4 == 2)
						fVar0 = fVar0 + 7f;
					else if (iVar4 == 1)
						fVar0 = fVar0 + 5f;
				else if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 1);
			
				if (iParam0 == 2)
					if (iVar4 == 3)
						fVar0 = fVar0 + 10f;
					else if (iVar4 == 2)
						fVar0 = fVar0 + 7f;
					else if (iVar4 == 1)
						fVar0 = fVar0 + 5f;
				else if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 2);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 3);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 6);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 4);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 5f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 3f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 2f;
			
				iVar4 = func_64(iParam0, 5);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 7);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 8);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			
				iVar4 = func_64(iParam0, 11);
			
				if (iVar4 == 3)
					fVar0 = fVar0 + 12f;
				else if (iVar4 == 2)
					fVar0 = fVar0 + 9f;
				else if (iVar4 == 1)
					fVar0 = fVar0 + 7f;
			}
			break;
	
		case 7:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = (fVar1 - Global_114931.f_2370.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = (fVar1 - Global_114931.f_2370.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = (fVar1 - Global_114931.f_2370.f_539.f_2367[iParam0]) / 45f;
			}
			else if (iParam0 == 3)
			{
				fVar0 = func_70(19, bParam3) / 45f;
			}
		
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &bVar3, -1);
				fVar0 = fVar0 + ((BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &bVar3, -1);
				fVar0 = fVar0 + ((BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &bVar3, -1);
				fVar0 = fVar0 + ((BUILTIN::TO_FLOAT(bVar3 - Global_114931.f_2370.f_539.f_2371[iParam0]) / 2f) * 1.5f);
			}
			else if (iParam0 == 3)
			{
				bVar3 = func_73(34, bParam3);
				fVar0 = fVar0 + ((BUILTIN::TO_FLOAT(bVar3) / 2f) * 1.5f);
				func_67(&fVar0);
			}
			break;
	
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &bVar6, -1);
				bVar6 = bVar6 - iVar5;
				fVar0 = BUILTIN::TO_FLOAT(iVar5 - Global_114931.f_2370.f_539.f_2375[iParam0]) / 40f;
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(bVar6 - Global_114931.f_2370.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP1_HITS_PEDS_VEHICLES"), &bVar6, -1);
				bVar6 = bVar6 - iVar5;
				fVar0 = BUILTIN::TO_FLOAT(iVar5 - Global_114931.f_2370.f_539.f_2375[iParam0]) / 40f;
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(bVar6 - Global_114931.f_2370.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &bVar6, -1);
				bVar6 = bVar6 - iVar5;
				fVar0 = BUILTIN::TO_FLOAT(iVar5 - Global_114931.f_2370.f_539.f_2375[iParam0]) / 40f;
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(bVar6 - Global_114931.f_2370.f_539.f_2379[iParam0]) / 80f);
			}
			else if (iParam0 == 3)
			{
				bVar6 = func_73(172, bParam3);
				fVar0 = fVar0 + (BUILTIN::TO_FLOAT(bVar6) / 80f);
			}
		
			if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2)
			{
				for (iVar7 = 0; iVar7 < 22; iVar7 = iVar7 + 1)
				{
					switch (func_63(iVar7, iParam0))
					{
						case 3:
							iVar8 = iVar8 + 1;
							break;
					
						case 2:
							iVar9 = iVar9 + 1;
							break;
					
						case 1:
							iVar10 = iVar10 + 1;
							break;
					}
				}
			
				fVar0 = fVar0 + (float)iVar8 * 3;
				fVar0 = fVar0 + (float)iVar9 * 2;
				fVar0 = fVar0 + (float)iVar10 * 1;
			}
			else if (iParam0 == 3)
			{
				fVar0 = fVar0 + (float)func_62(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
				func_67(&fVar0);
			}
			break;
	}

	if (iParam1 != 0)
	{
		bVar11 = func_55(iParam0, iParam1, bParam3);
		fVar0 = fVar0 + (float)bVar11;
		fVar0 = fVar0 + (float)func_61(iParam0, iParam1, bParam3);
	}

	if (bParam2)
	{
		fVar12 = fVar0 - (fVar0 % (float)func_53(iParam0, iParam1));
	
		if (fVar0 % (float)func_53(iParam0, iParam1) >= 0f)
			fVar12 = fVar12 + (float)func_53(iParam0, iParam1);
	
		if (fVar0 >= fVar12)
			fVar0 = fVar12;
		else
			fVar0 = fVar12 - (float)func_53(iParam0, iParam1);
	}

	bVar2 = BUILTIN::FLOOR(fVar0);
	bVar2 = func_72(bVar2, 0, 100);
	return bVar2;
}

bool func_61(int iParam0, int iParam1, bool bParam2) // Position - 0x2522
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_114931.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0];
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_73(72, bParam2);
			
				case 3:
					return func_73(74, bParam2);
			
				case 2:
					return func_73(73, bParam2);
			
				case 4:
					return func_73(75, bParam2);
			
				case 5:
					return func_73(76, bParam2);
			
				case 6:
					return func_73(77, bParam2);
			
				case 7:
					return func_73(78, bParam2);
			}
			break;
	}

	return false;
}

int func_62(int iParam0) // Position - 0x262F
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (STATS::STAT_GET_INT(iVar0, &iVar1, -1))
		return iVar1;

	return 0;
}

int func_63(int iParam0, int iParam1) // Position - 0x264D
{
	return Global_114931.f_19154[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_64(int iParam0, int iParam1) // Position - 0x2669
{
	if (iParam0 < 0 || iParam0 > 2)
		return 0;

	return Global_114931.f_1995[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_65(int iParam0) // Position - 0x2697
{
	int iVar0;

	iVar0 = 0;
	iVar0 = iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 86400);
	iVar0 = iVar0 + (STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 3600);
	iVar0 = iVar0 + (STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0) * 60);
	iVar0 = iVar0 + STATS::STAT_GET_NUMBER_OF_SECONDS(iParam0);
	return iVar0;
}

int func_66(int iParam0) // Position - 0x26DA
{
	int iVar0;

	iVar0 = 0;
	iVar0 = iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 1440);
	iVar0 = iVar0 + (STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 60);
	iVar0 = iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0);
	return iVar0;
}

var func_67(var uParam0) // Position - 0x270D
{
	if (func_47())
	{
		if (func_68() < Global_262145.f_13231 /* Tunable: GB_BOSS_STAT_BOOST_MAX_RANK */)
			if (*uParam0 + ((float)func_68() * Global_262145.f_13230 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */) <= (float)Global_262145.f_13240 /* Tunable: GB_BOSS_BOOST_MAX_FINAL_STAT */)
				*uParam0 = *uParam0 + ((float)func_68() * Global_262145.f_13230 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */);
	
		return *uParam0;
	}

	return *uParam0;
}

bool func_68() // Position - 0x2767
{
	if (func_51(true))
		return Global_1845299[func_69() /*883*/].f_198.f_6;

	return false;
}

bool func_69() // Position - 0x278D
{
	return Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_10;
}

float func_70(int iParam0, bool bParam1) // Position - 0x27A2
{
	var uVar0;
	float fVar1;

	uVar0 = func_71(iParam0, bParam1);

	if (STATS::STAT_GET_FLOAT(uVar0, &fVar1, -1))
		return fVar1;

	return 0f;
}

var func_71(int iParam0, bool bParam1) // Position - 0x27C6
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(1, iParam0, func_6(bParam1));
}

bool func_72(bool bParam0, int iParam1, int iParam2) // Position - 0x27DB
{
	if (bParam0 > iParam2)
		return iParam2;
	else if (bParam0 < iParam1)
		return iParam1;

	return bParam0;
}

bool func_73(int iParam0, bool bParam1) // Position - 0x2800
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_58(iParam0, bParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

void func_74(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x282F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

bool func_75() // Position - 0x2A86
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

bool func_76(int iParam0) // Position - 0x2AA2
{
	return iParam0 < 3;
}

void func_77(int iParam0, int iParam1) // Position - 0x2AAE
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;

	if (iParam0 != 0 || iParam0 != 1 || iParam0 != 2 || iParam0 != 3)
		return;

	func_74(iParam0, iParam1, &uVar2, &iVar3);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		iVar0 = func_73(iVar3, -1);
	else
		STATS::STAT_GET_INT(uVar2, &iVar0, -1);

	switch (iParam1)
	{
		case 2:
			fVar1 = 0.8f + (0.4f * (BUILTIN::TO_FLOAT(iVar0) / 100f));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1, 1);
			break;
	
		case 7:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ARMENIAN3")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("TREVOR3")) != 0)
			{
				Global_99712 = true;
			}
			else
			{
				fVar1 = 1f - (BUILTIN::TO_FLOAT(iVar0) / 100f);
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			}
			break;
	}
}

bool func_78(int iParam0) // Position - 0x2B9A
{
	if (Global_44886 == 15)
		return false;

	if (func_79(iParam0))
		return false;

	return true;
}

bool func_79(int iParam0) // Position - 0x2BBC
{
	return func_80(iParam0, Global_44886);
}

bool func_80(int iParam0, int iParam1) // Position - 0x2BCD
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void func_81() // Position - 0x2DAE
{
	var uVar0;
	int iVar1;

	iVar1 = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(uVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) == PLAYER::PLAYER_PED_ID() && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar0)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar0)))
			iVar1 = 1;
	}

	func_86(&uVar0, &iVar1);
	func_85(&uVar0, &iVar1);
	func_82();
}

void func_82() // Position - 0x2E4D
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Static_79)
	{
		if (Static_57 == 3)
		{
			if (Global_2359296[func_84() /*5574*/].f_681.f_7)
			{
				Static_76 = func_65(func_58(148, -1));
				Global_2359296[func_84() /*5574*/].f_681.f_7 = 0;
			}
			else
			{
				Static_76 = Global_2359296[func_84() /*5574*/].f_681.f_6;
			}
		
			if (Global_2359296[func_84() /*5574*/].f_681.f_4 == 0)
				Global_2359296[func_84() /*5574*/].f_681.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		
			Static_78 = Global_2359296[func_84() /*5574*/].f_681.f_4;
			Static_77 = Global_2359296[func_84() /*5574*/].f_681.f_5;
		}
		else
		{
			if (Global_114931.f_2370.f_539.f_2292[Static_57])
			{
				switch (Static_57)
				{
					case 0:
						Static_76 = func_65(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
				
					case 1:
						Static_76 = func_65(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
				
					case 2:
						Static_76 = func_65(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
			
				Global_114931.f_2370.f_539.f_2292[Static_57] = false;
			}
			else
			{
				Static_76 = Global_114931.f_2370.f_539.f_2288[Static_57];
			}
		
			if (Global_114931.f_2370.f_539.f_2280[Static_57] == 0)
				Global_114931.f_2370.f_539.f_2280[Static_57] = NETWORK::GET_CLOUD_TIME_AS_INT();
		
			Static_78 = Global_114931.f_2370.f_539.f_2280[Static_57];
			Static_77 = Global_114931.f_2370.f_539.f_2284[Static_57];
		}
	
		Static_79 = true;
		Static_80 = true;
	}
	else if (NETWORK::GET_CLOUD_TIME_AS_INT() - Static_78 > 86400)
	{
		Static_79 = false;
		Static_80 = false;
		Static_78 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Static_77 = 0;
	
		if (Static_57 == 3)
			Global_2359296[func_84() /*5574*/].f_681.f_7 = 1;
		else
			Global_114931.f_2370.f_539.f_2292[Static_57] = true;
	}

	if (Static_80)
	{
		switch (Static_57)
		{
			case 0:
				iVar0 = func_65(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
		
			case 1:
				iVar0 = func_65(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
		
			case 2:
				iVar0 = func_65(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
		
			case 3:
				iVar0 = func_65(func_58(148, -1));
				break;
		}
	
		iVar1 = iVar0 - Static_76;
		iVar2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar1) / 15f) - Static_77;
	
		if (iVar2 > 0)
		{
			func_83(Static_57, 4, iVar2);
			Static_77 = Static_77 + iVar2;
		}
	
		if (iVar0 > Static_76 + ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
			Static_80 = false;
	}

	if (Static_57 == 3)
	{
		Global_2359296[func_84() /*5574*/].f_681.f_4 = Static_78;
		Global_2359296[func_84() /*5574*/].f_681.f_5 = Static_77;
	}
	else
	{
		Global_114931.f_2370.f_539.f_2280[Static_57] = Static_78;
		Global_114931.f_2370.f_539.f_2284[Static_57] = Static_77;
	}
}

void func_83(int iParam0, int iParam1, int iParam2) // Position - 0x310F
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114931.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] = Global_114931.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2;
			break;
	
		case 3:
			iVar1 = 18486;
		
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
			
				case 3:
					iVar1 = 74;
					break;
			
				case 2:
					iVar1 = 73;
					break;
			
				case 4:
					iVar1 = 75;
					break;
			
				case 5:
					iVar1 = 76;
					break;
			
				case 6:
					iVar1 = 77;
					break;
			
				case 7:
					iVar1 = 78;
					break;
			}
		
			if (iVar1 != 18486)
			{
				iVar0 = func_73(iVar1, -1);
				iVar0 = iVar0 + iParam2;
			
				if (iVar0 > 100)
					iVar0 = 100;
			
				func_57(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

int func_84() // Position - 0x31FD
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_85(var uParam0, var uParam1) // Position - 0x320A
{
	bool bVar0;

	if (Static_73)
	{
		bVar0 = true;
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && !ENTITY::IS_ENTITY_IN_AIR(*uParam0))
		{
			bVar0 = false;
		
			if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 53f)
			{
				func_83(Static_57, 4, 2);
				bVar0 = true;
			}
		}
	
		if (bVar0)
		{
			Static_73 = false;
			Static_74 = MISC::GET_GAME_TIMER();
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Static_75 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *uParam1 && ENTITY::GET_ENTITY_SPEED(*uParam0) < 20f && !ENTITY::IS_ENTITY_IN_AIR(*uParam0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - Static_74 > 10000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Static_75, 10000)))
			Static_73 = true;
	}
}

void func_86(var uParam0, var uParam1) // Position - 0x32E5
{
	bool bVar0;
	var uVar1;

	bVar0 = false;

	if (*uParam1)
	{
		if (Static_65)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - Static_67 > 1500 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Static_68, 1500)))
				{
					Static_69 = MISC::GET_GAME_TIMER();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						Static_70 = NETWORK::GET_NETWORK_TIME();
				
					Static_66 = true;
				}
			
				Static_65 = false;
			}
		}
	
		if (Static_66)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*uParam0))
				{
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - Static_69 > 20 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - Static_69 == 0 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Static_70, 20)) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), Static_70))
					{
					}
					else
					{
						func_83(Static_57, 4, 1);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&uVar1, "Player landed on all wheels in ", 64);
					TEXT_LABEL_APPEND_INT(&uVar1, MISC::GET_GAME_TIMER() - Static_69, 64);
					TEXT_LABEL_APPEND_STRING(&uVar1, "ms", 64);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	
		if (!Static_65 && !Static_66)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::GET_GAME_TIMER() - Static_71 > 1000 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(Static_72, 1000)))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
				{
					if (!Static_65)
					{
						Static_67 = MISC::GET_GAME_TIMER();
					
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							Static_68 = NETWORK::GET_NETWORK_TIME();
					
						Static_65 = true;
					}
				}
			}
		}
	}
	else if (Static_65 || Static_66)
	{
		bVar0 = true;
	}

	if (bVar0)
	{
		Static_71 = MISC::GET_GAME_TIMER();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			Static_72 = NETWORK::GET_NETWORK_TIME();
	
		Static_65 = false;
		Static_66 = false;
	}
}

bool func_87(bool bParam0) // Position - 0x34A3
{
	return Global_114016 && bParam0 != false;
}

int func_88() // Position - 0x34B4
{
	func_89();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_89() // Position - 0x34CD
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_91(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_90(PLAYER::PLAYER_PED_ID());
		
			if (func_76(iVar0) && !func_56(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_76(Global_114931.f_2370.f_539.f_4321))
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

int func_90(var uParam0) // Position - 0x35CA
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_91(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_91(int iParam0) // Position - 0x3607
{
	if (func_76(iParam0))
		return func_92(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_92(int iParam0) // Position - 0x362C
{
	return Global_2339[iParam0 /*29*/];
}

void func_93() // Position - 0x363B
{
	char* sVar0;
	int iVar1;

	if (Static_60)
	{
		if (Static_61 != Static_57)
		{
			Static_60 = false;
			return;
		}
	
		sVar0 = "CHAR_DEFAULT";
	
		switch (Static_61)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
		
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
		
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
		
			case 3:
				iVar1 = func_96(PLAYER::PLAYER_ID());
			
				if (iVar1 == 0)
					return;
				else
					sVar0 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
				break;
		}
	
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE" /* GXT: ~1~/100 */);
		HUD::ADD_TEXT_COMPONENT_INTEGER(Static_64);
		HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_95(Static_62), func_94(Static_62), Static_63, Static_64 - Static_63, 0, sVar0, sVar0);
		Static_81 = true;
		Static_82 = MISC::GET_GAME_TIMER() + 5000;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			Static_83 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
	
		Static_60 = false;
	}
}

int func_94(int iParam0) // Position - 0x36FF
{
	switch (iParam0)
	{
		case 0:
			return 23;
	
		case 1:
			return 2;
	
		case 3:
			return 24;
	
		case 2:
			return 25;
	
		case 4:
			return 14;
	
		case 5:
			return 27;
	
		case 6:
			return 17;
	
		case 7:
			return 28;
	}

	return -1;
}

char* func_95(int iParam0) // Position - 0x377E
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /* GXT: Special capacity + */;
	
		case 1:
			return "PSF_STAMINA" /* GXT: Stamina + */;
	
		case 3:
			return "PSF_LUNG" /* GXT: Lung Capacity + */;
	
		case 2:
			return "PSF_STRENGTH" /* GXT: Strength + */;
	
		case 4:
			return "PSF_DRIVING" /* GXT: Driving + */;
	
		case 5:
			return "PSF_FLYING" /* GXT: Flying + */;
	
		case 6:
			return "PSF_SHOOTING" /* GXT: Shooting + */;
	
		case 7:
			return "PSF_STEALTH" /* GXT: Stealth + */;
	}

	return "ERROR";
}

int func_96(bool bParam0) // Position - 0x3808
{
	int iVar0;

	iVar0 = func_99(bParam0);

	if (iVar0 == -1)
	{
		func_97(bParam0, true);
		return 0;
	}

	Global_1690223[iVar0 /*5*/].f_4 = 1;
	return Global_1690223[iVar0 /*5*/].f_2;
}

void func_97(bool bParam0, bool bParam1) // Position - 0x383E
{
	if (!func_19(bParam0, false, true))
		return;

	if (func_99(bParam0) != -1)
		return;

	if (Global_1690386)
		if (bParam0 == Global_1690386.f_1)
			return;

	if (func_98(bParam0))
		return;

	if (Global_1690424 >= 32)
		return;

	Global_1690391[Global_1690424] = bParam0;
	Global_1690424 = Global_1690424 + 1;
	bParam1;
}

bool func_98(bool bParam0) // Position - 0x38AA
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < Global_1690424; iVar0 = iVar0 + 1)
	{
		if (Global_1690391[iVar0] == bParam0)
			return true;
	}

	return false;
}

int func_99(bool bParam0) // Position - 0x38DC
{
	int iVar0;

	if (!func_19(bParam0, false, true))
		return -1;

	if (Global_1690384 == 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < Global_1690384; iVar0 = iVar0 + 1)
	{
		if (Global_1690223[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1690223[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1690223[iVar0 /*5*/].f_2))
				return iVar0;
		
			func_100(iVar0);
			return -1;
		}
	}

	return -1;
}

void func_100(int iParam0) // Position - 0x395B
{
	var uVar0;
	var uVar16;
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1690384)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1690223[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
	
		if (Global_1690223[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1690223[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&uVar16, &uVar16, &uVar0, &uVar0);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1690223[iParam0 /*5*/].f_2);
	}

	iVar32 = iParam0;

	for (iVar33 = iVar32 + 1; iVar33 < Global_1690384; iVar33 = iVar33 + 1)
	{
		Global_1690223[iVar32 /*5*/] = { Global_1690223[iVar33 /*5*/] };
		iVar32 = iVar32 + 1;
	}

	func_101(&Global_1690223[iVar32 /*5*/]);
	Global_1690384 = Global_1690384 - 1;
}

void func_101(bool bParam0) // Position - 0x3A10
{
	*bParam0 = 0;
	bParam0->f_1 = func_11();
	bParam0->f_2 = 0;
	bParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		bParam0->f_3 = NETWORK::GET_NETWORK_TIME();
}

void func_102() // Position - 0x3A3D
{
	float fVar0;
	int iVar1;

	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 1)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_106(PLAYER::PLAYER_ID()))
			return;
	
		if (func_105() != 0)
			return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_105() == 0)
			Static_52 = 1;
	else
		Static_52 = 0;

	if (!func_104())
		func_103();

	Static_54 = 0;
	Static_55 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		Static_56 = NETWORK::GET_NETWORK_TIME();

	Static_71 = MISC::GET_GAME_TIMER();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		Static_72 = NETWORK::GET_NETWORK_TIME();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!IS_BIT_SET(Global_2359296[func_84() /*5574*/].f_681.f_1274, 2))
		{
			fVar0 = BUILTIN::TO_FLOAT(func_73(193, -1)) / 20f;
			iVar1 = BUILTIN::FLOOR(fVar0);
			iVar1 = func_72(iVar1, 0, 100);
			func_83(3, 2, iVar1);
			MISC::SET_BIT(&(Global_2359296[func_84() /*5574*/].f_681.f_1274), 2);
		}
	}

	Static_58 = true;
	Static_53 = 1;
}

void func_103() // Position - 0x3B23
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		for (iVar0 = 0; iVar0 < 8; iVar0 = iVar0 + 1)
		{
			if (iVar0 != 0)
			{
				func_74(3, iVar0, &uVar1, &iVar2);
				func_57(iVar2, func_55(3, iVar0, -1), -1, 1);
			}
		}
	
		func_4(0, 1, -1, 1);
		Global_99711 = true;
	}
	else
	{
		for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1)
		{
			for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1)
			{
				if (iVar4 != 0)
				{
					func_74(iVar3, iVar4, &uVar5, &uVar6);
					STATS::STAT_SET_INT(uVar5, func_55(iVar3, iVar4, -1), 1);
				}
			}
		}
	
		Global_114931.f_2370.f_539.f_2387[0] = func_55(0, 0, -1);
		Global_114931.f_2370.f_539.f_2387[1] = func_55(1, 0, -1);
		Global_114931.f_2370.f_539.f_2387[2] = func_55(2, 0, -1);
		Global_114931.f_2370.f_539.f_2354 = 1;
		Global_99711 = true;
	}
}

bool func_104() // Position - 0x3C16
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	return Global_114931.f_2370.f_539.f_2354;
}

int func_105() // Position - 0x3C39
{
	return Global_33792;
}

bool func_106(int iParam0) // Position - 0x3C44
{
	if (!func_50(iParam0))
		return false;

	return IS_BIT_SET(Global_2673274.f_1, iParam0);
}

void func_107() // Position - 0x3C63
{
	if (Static_53 != 0 && Static_52 != 2)
	{
		if (Static_52 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Static_52 = 2;
		
			if (!func_104())
				Static_52 = 2;
		}
		else if (Static_52 == 1)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_106(PLAYER::PLAYER_ID()) || func_105() != 0)
				Static_52 = 2;
		}
	
		if (Static_52 == 2)
			Static_53 = 2;
	}
}

