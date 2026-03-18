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
	int Static_16 = 0;
	var Static_17 = 2;
	var Static_18 = 0;
	var Static_19 = 0;
	bool Static_20 = 0;
	int Static_21 = 0;
	var Static_22 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_58();

	while (true)
	{
		BUILTIN::WAIT(250);
	
		switch (Static_16)
		{
			case 0:
				if (Static_17[0])
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_24120[3 /*42*/].f_27[0] = func_57(2);
						func_56(2, 32, Global_24120[3 /*42*/].f_27[0]);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&Global_24120[3 /*42*/], "PA_TREV1" /* GXT: Earn one million dollars. */, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_24120[3 /*42*/].f_4), "PA_TREV1" /* GXT: Earn one million dollars. */, 16);
					Global_24120[3 /*42*/].f_8 = 0;
					Global_24120[3 /*42*/].f_9 = 1;
					TEXT_LABEL_ASSIGN_STRING(&Global_24120[3 /*42*/].f_10[1 /*4*/], "PA_TREV1A" /* GXT: Current wealth $~1~. */, 16);
					Global_24120[3 /*42*/].f_37[1] = 0;
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						Global_24120[3 /*42*/].f_27[1] = func_57(2);
				
					func_49(2, 3, true, 1);
					func_46("PA_TREV1A" /* GXT: Current wealth $~1~. */, Global_24120[3 /*42*/].f_27[1]);
					Static_16 = 1;
				}
				break;
		
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					Global_24120[3 /*42*/].f_27[1] = func_57(2);
				
					if (func_45(2, 999999))
					{
						func_44("PA_COMPLETE" /* GXT: Goal achieved ~a~ */, "PA_TREV1" /* GXT: Earn one million dollars. */, 2000, 1);
						Global_24120[3 /*42*/].f_37[1] = 1;
						Global_24120[3 /*42*/].f_8 = 1;
						Static_22 = MISC::GET_GAME_TIMER();
						Static_16 = 2;
					}
					else if (func_45(2, 499999))
					{
						if (!Static_20)
						{
							func_43("PA_TREV1" /* GXT: Earn one million dollars. */, 2000, 1);
							Static_20 = true;
						}
					}
				
					if (Static_17[1])
					{
						func_1(2, 32, 500000, false, false);
						Static_17[1] = 0;
					}
				}
				break;
		
			case 2:
				Static_21 = MISC::GET_GAME_TIMER();
			
				if (Static_21 - Static_22 < 5000)
					func_46("PA_TREV1A" /* GXT: Current wealth $~1~. */, Global_24120[3 /*42*/].f_27[1]);
				break;
		}
	}
}

void func_1(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4) // Position - 0x1D5
{
	int iVar0;
	int iVar1;

	if (func_42(iParam0) == 3)
		return;

	if (func_42(iParam0) == 4)
		return;

	func_2(func_42(iParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		iVar0 = 0;
	
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = iVar0 + iParam2;
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) // Position - 0x2A7
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_41();

	if (iParam3 < 1)
		return 0;

	fVar0 = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_40(99, 1);
					func_39(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_39(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_39(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_23(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_20(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_20(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_39(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_39(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_39(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_20(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
					
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_39(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_39(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_39(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_19(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_40(95, iParam3);
					break;
			
				case 1:
					func_40(97, iParam3);
					break;
			
				case 2:
					func_40(96, iParam3);
					break;
			}
		
			func_40(98, iParam3);
			break;
	}

	iVar2 = iParam0;
	iParam3 = BUILTIN::FLOOR(fVar0 * BUILTIN::TO_FLOAT(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;

	if (fVar0 == 0f)
	{
		func_5(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_5(iVar1);
	}

	iVar5 = Global_62201[iVar2] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_62201[iVar2] >= 0 && iParam3 > 0)
				if (iVar5 <= 0)
					Global_62201[iVar2] = 2147483647;
				else
					Global_62201[iVar2] = Global_62201[iVar2] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_39(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_39(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_39(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_62201[iVar2] - iParam3 < 0)
					return 0;
		
			iVar3 = Global_62201[iVar2];
			Global_62201[iVar2] = Global_62201[iVar2] - iParam3;
		
			if (bParam4)
				iVar4 = iVar3;
			break;
	}

	if (iParam2 == 1)
	{
		iVar4 > 20;
	}
	else
	{
		Global_114931.f_20571.f_233[iVar2 /*69*/].f_2[Global_114931.f_20571.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114931.f_20571.f_233[iVar2 /*69*/].f_2[Global_114931.f_20571.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114931.f_20571.f_233[iVar2 /*69*/].f_2[Global_114931.f_20571.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114931.f_20571.f_233[iVar2 /*69*/] = Global_114931.f_20571.f_233[iVar2 /*69*/] + 1;
		Global_114931.f_20571.f_233[iVar2 /*69*/].f_1 = Global_114931.f_20571.f_233[iVar2 /*69*/].f_1 + 1;
	
		if (Global_114931.f_20571.f_233[iVar2 /*69*/].f_1 > 10)
			Global_114931.f_20571.f_233[iVar2 /*69*/].f_1 = 0;
	}

	func_4(iParam0);

	if (Global_44886 == 15)
		func_3(false);

	return 1;
}

void func_3(bool bParam0) // Position - 0x8A6
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		for (iVar1 = 0; iVar1 < 11; iVar1 = iVar1 + 1)
		{
			Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114931.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
		}
	}

	for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
	{
		Global_62209[iVar0 /*3*/][0] = Global_114931.f_20571[iVar0];
		Global_62209.f_31[iVar0 /*3*/][0] = Global_114931.f_20571.f_11[iVar0];
		Global_62209.f_62[iVar0 /*3*/][0] = Global_114931.f_20571.f_22[iVar0];
		Global_62209.f_93[iVar0 /*3*/][0] = Global_114931.f_20571.f_33[iVar0];
		Global_62209.f_124[iVar0 /*3*/][0] = Global_114931.f_20571.f_44[iVar0];
		Global_62209.f_155[iVar0 /*3*/][0] = Global_114931.f_20571.f_55[iVar0];
		Global_62209.f_186[iVar0 /*3*/][0] = Global_114931.f_20571.f_66[iVar0];
		Global_62209.f_217[iVar0 /*3*/][0] = Global_114931.f_20571.f_77[iVar0];
		Global_62209.f_248[iVar0 /*3*/][0] = Global_114931.f_20571.f_88[iVar0];
	
		if (!bParam0)
		{
			Global_62209[iVar0 /*3*/][1] = Global_114931.f_20571[iVar0];
			Global_62209.f_31[iVar0 /*3*/][1] = Global_114931.f_20571.f_11[iVar0];
			Global_62209.f_62[iVar0 /*3*/][1] = Global_114931.f_20571.f_22[iVar0];
			Global_62209.f_93[iVar0 /*3*/][1] = Global_114931.f_20571.f_33[iVar0];
			Global_62209.f_124[iVar0 /*3*/][1] = Global_114931.f_20571.f_44[iVar0];
			Global_62209.f_155[iVar0 /*3*/][1] = Global_114931.f_20571.f_55[iVar0];
			Global_62209.f_186[iVar0 /*3*/][1] = Global_114931.f_20571.f_66[iVar0];
			Global_62209.f_217[iVar0 /*3*/][1] = Global_114931.f_20571.f_77[iVar0];
			Global_62209.f_248[iVar0 /*3*/][1] = Global_114931.f_20571.f_88[iVar0];
		}
	}
}

void func_4(int iParam0) // Position - 0xB28
{
	int iVar0;

	iVar0 = Global_62201[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_5(int iParam0) // Position - 0xB82
{
	int iVar0;
	bool bVar1;
	var uVar2;

	if (iParam0 == 8)
	{
		func_18(129, 0, -1);
		return;
	}

	if (iParam0 == 9)
	{
		func_18(135, 0, -1);
		return;
	}

	if (iParam0 == 10)
	{
		func_18(136, 0, -1);
		return;
	}

	if (iParam0 == 11)
	{
		func_18(137, 0, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_14(8272, 0, -1, 1);
		return;
	}

	if (iParam0 == 13)
	{
		func_14(8273, 0, -1, 1);
		return;
	}

	if (iParam0 == 14)
	{
		func_14(8274, 0, -1, 1);
		return;
	}

	if (iParam0 == 15)
	{
		func_14(8275, 0, -1, 1);
		return;
	}

	if (iParam0 == 16)
	{
		func_14(8276, 0, -1, 1);
		return;
	}

	if (iParam0 == 17)
	{
		func_14(8277, 0, -1, 1);
		return;
	}

	if (func_13(iParam0))
	{
		func_14(func_12(iParam0), 0, -1, 1);
		return;
	}

	if (func_11(iParam0))
	{
		iVar0 = func_9(func_10(iParam0));
		func_8(func_10(iParam0), iVar0 - 1);
		return;
	}

	if (iParam0 == 39)
	{
		func_18(7332, 0, -1);
		return;
	}

	bVar1 = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114931.f_20571.f_471, iParam0))
		{
			bVar1 = true;
			MISC::CLEAR_BIT(&(Global_114931.f_20571.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114931.f_20571.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_7() /*5574*/].f_681.f_10, iParam0))
	{
		bVar1 = true;
		MISC::CLEAR_BIT(&(Global_114931.f_20571.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_7() /*5574*/].f_681.f_10), iParam0);
	}

	if (bVar1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar2, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_6(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&uVar2, &uVar2, 1, 0, "", 0);
	}
}

char* func_6(int iParam0) // Position - 0xD4B
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
	
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
	
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
	
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
	
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
	
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
	
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
	
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
	
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
	
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
	
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
	
		case 39:
			return "COUPON_CAR_GEN9_MIGRATION";
	
		default:
			if (func_13(iParam0))
				return "HSW_COUP" /* GXT: One free respray, livery or spoiler. */;
		
			if (func_11(iParam0))
				return "HSWU_COUP" /* GXT: One free Hao's Special Works upgrade. */;
			break;
	}

	return "";
}

int func_7() // Position - 0xE6F
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_8(int iParam0, int iParam1) // Position - 0xE7C
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 != 0)
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_9(int iParam0) // Position - 0xE98
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (STATS::STAT_GET_INT(iVar0, &iVar1, -1))
		return iVar1;

	return 0;
}

int func_10(int iParam0) // Position - 0xEB6
{
	switch (iParam0)
	{
		case 38:
			return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
	
		default:
		
	}

	return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
}

bool func_11(int iParam0) // Position - 0xED8
{
	switch (iParam0)
	{
		case 38:
			return true;
	}

	return false;
}

int func_12(int iParam0) // Position - 0xEF5
{
	switch (iParam0)
	{
		case 18:
			return 16718;
	
		case 19:
			return 16719;
	
		case 20:
			return 16720;
	
		case 21:
			return 16721;
	
		case 22:
			return 16722;
	
		case 23:
			return 16723;
	
		case 24:
			return 16724;
	
		case 25:
			return 16725;
	
		case 26:
			return 16726;
	
		case 27:
			return 16727;
	
		case 28:
			return 16728;
	
		case 29:
			return 16729;
	
		case 30:
			return 16730;
	
		case 31:
			return 16731;
	
		case 32:
			return 16732;
	
		case 33:
			return 16733;
	
		case 34:
			return 16734;
	
		case 35:
			return 16735;
	
		case 36:
			return 16736;
	
		case 37:
			return 16737;
	}

	return 16718;
}

bool func_13(int iParam0) // Position - 0xFFA
{
	switch (iParam0)
	{
		case 18:
		case 19:
		case 20:
		case 21:
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
			return true;
	}

	return false;
}

void func_14(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1089
{
	int iVar0;

	if (iParam0 != 18486)
	{
		iVar0 = func_15(iParam0, iParam2);
	
		if (iVar0 != 0)
			STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_15(int iParam0, int iParam1) // Position - 0x10B7
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_16(iParam1));
}

int func_16(int iParam0) // Position - 0x10CC
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_17();
	
		if (iVar1 > -1)
		{
			Global_2741524 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741524 = 1;
		}
	}

	return iVar0;
}

int func_17() // Position - 0x1100
{
	return Global_1574927;
}

void func_18(int iParam0, int iParam1, int iParam2) // Position - 0x110C
{
	if (iParam2 == -1)
		iParam2 = func_17();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

void func_19(int iParam0) // Position - 0x112A
{
	func_40(93, iParam0);
	func_40(29, iParam0);
	func_40(30, iParam0);
}

bool func_20(int iParam0) // Position - 0x114A
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	if (iParam0 == 8)
		return func_22(129, -1);

	if (iParam0 == 9)
		return func_22(135, -1);

	if (iParam0 == 10)
		return func_22(136, -1);

	if (iParam0 == 11)
		return func_22(137, -1);

	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_21(8272, -1);
	
		if (iVar1 == 0 || iVar0 >= iVar1)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_21(8273, -1);
	
		if (iVar3 == 0 || iVar2 >= iVar3)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_21(8274, -1);
	
		if (iVar5 == 0 || iVar4 >= iVar5)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_21(8275, -1);
	
		if (iVar7 == 0 || iVar6 >= iVar7)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_21(8276, -1);
	
		if (iVar9 == 0 || iVar8 >= iVar9)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_21(8277, -1);
	
		if (iVar11 == 0 || iVar10 >= iVar11)
			return false;
	
		return true;
	}

	if (func_13(iParam0))
	{
		iVar12 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar13 = func_21(func_12(iParam0), -1);
	
		if (iVar13 == 0 || iVar12 >= iVar13)
			return false;
	
		return true;
	}

	if (func_11(iParam0))
	{
		iVar14 = func_9(func_10(iParam0));
	
		if (iVar14 <= 0)
			return false;
	
		return true;
	}

	if (iParam0 == 39)
		return func_22(7332, -1);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114931.f_20571.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_7() /*5574*/].f_681.f_10, iParam0);
}

int func_21(int iParam0, int iParam1) // Position - 0x1355
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_15(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

bool func_22(int iParam0, int iParam1) // Position - 0x1384
{
	if (iParam1 == -1)
		iParam1 = func_17();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_23(bool bParam0) // Position - 0x13A0
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &uVar0, -1))
		iVar1 = iVar1 + uVar0;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &uVar0, -1))
		iVar1 = iVar1 + uVar0;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &uVar0, -1))
		iVar1 = iVar1 + uVar0;

	bParam0;
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);

	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_38(27, iVar1);
	}

	if (iVar1 < 200000000)
		return 0;

	func_24(27, 1);
	return 1;
}

int func_24(int iParam0, int iParam1) // Position - 0x1457
{
	if (iParam0 >= 78)
		return 0;

	return func_25(iParam0, iParam1);
}

int func_25(int iParam0, int iParam1) // Position - 0x1472
{
	if (func_37(14) && !func_36(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_34043 != 0 && !Global_80305)
		return 0;

	if (func_35(&Global_4525144))
	{
		if (func_33(&Global_4525144, iParam0))
			return 0;
	
		if (func_26(&Global_4525144, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

bool func_26(var uParam0, int iParam1) // Position - 0x150F
{
	int iVar0;
	var uVar1;

	uVar1 = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_37(14) && !func_36(iParam1))
		return false;

	if (func_33(uParam0, iParam1))
		return false;

	if (func_32(uParam0) < 0f)
		func_31(uParam0, 0);

	func_29(&uVar1);
	iVar0 = 0;

	for (iVar0 = 0; iVar0 < *uParam0 - 1; iVar0 = iVar0 + 1)
	{
		uVar1[iVar0 + 1] = uParam0->[iVar0];
	}

	func_27(&uVar1, iParam1);
	iVar0 = 0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		uParam0->[iVar0] = uVar1[iVar0];
	}

	return true;
}

int func_27(var uParam0, int iParam1) // Position - 0x15C0
{
	int iVar0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_37(14) && !func_36(iParam1))
		return 0;

	if (func_33(uParam0, iParam1))
		return 0;

	if (func_32(uParam0) < 0f)
		func_31(uParam0, 0);

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		if (func_28(uParam0, iVar0))
		{
			uParam0->[iVar0] = iParam1;
			return 1;
		}
	}

	return 0;
}

bool func_28(var uParam0, int iParam1) // Position - 0x163B
{
	return uParam0->[iParam1] == 78;
}

void func_29(var uParam0) // Position - 0x164C
{
	int iVar0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		func_30(uParam0, iVar0);
	}

	func_31(uParam0, Global_4525143 - 0.5f);
}

void func_30(var uParam0, int iParam1) // Position - 0x1680
{
	uParam0->[iParam1] = 78;
}

void func_31(var uParam0, int iParam1) // Position - 0x1690
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;
}

float func_32(var uParam0) // Position - 0x16AD
{
	return uParam0->f_80;
}

bool func_33(var uParam0, int iParam1) // Position - 0x16B9
{
	return func_34(uParam0, iParam1) != -1;
}

int func_34(var uParam0, int iParam1) // Position - 0x16CB
{
	int iVar0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		if (uParam0->[iVar0] == iParam1)
			return iVar0;
	}

	return -1;
}

bool func_35(var uParam0) // Position - 0x16F8
{
	return uParam0->f_79 == 1;
}

bool func_36(int iParam0) // Position - 0x1706
{
	switch (iParam0)
	{
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
			return true;
	
		default:
		
	}

	return false;
}

bool func_37(int iParam0) // Position - 0x1756
{
	return Global_44886 == iParam0;
}

int func_38(int iParam0, int iParam1) // Position - 0x1764
{
	int iVar0;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > iVar0)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return 0;
}

void func_39(int iParam0, int iParam1) // Position - 0x17B5
{
	int iVar0;

	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = iVar0 + iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_40(int iParam0, int iParam1) // Position - 0x17D8
{
	int iVar0;

	if (iParam1 < 1)
		return;

	if (Global_60769[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60769[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60769[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = iVar0 + iParam1;
		STATS::STAT_SET_INT(Global_60769[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_41() // Position - 0x1835
{
	int iVar0;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
	
		if (!(Global_62201[0] == iVar0))
			Global_62201[0] = iVar0;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
	
		if (!(Global_62201[1] == iVar0))
			Global_62201[1] = iVar0;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
	
		if (!(Global_62201[2] == iVar0))
			Global_62201[2] = iVar0;
	}
}

int func_42(int iParam0) // Position - 0x18AA
{
	return Global_2339[iParam0 /*29*/].f_17;
}

void func_43(char* sParam0, int iParam1, int iParam2) // Position - 0x18BB
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

void func_44(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x18D4
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 0);
}

bool func_45(int iParam0, int iParam1) // Position - 0x18F3
{
	if (func_57(iParam0) > iParam1)
		return true;

	return false;
}

void func_46(char* sParam0, int iParam1) // Position - 0x190E
{
	GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, 0);
	func_48(255, 255, 255, 255);
	func_47(0.81f, 0.8f, sParam0, iParam1, 0);
}

void func_47(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1951
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x196F
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(1);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

int func_49(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x19AE
{
	if (func_55())
		return 0;

	if (func_50(iParam0, iParam1, bParam2, iParam3) == 1)
		return 1;

	return 0;
}

int func_50(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x19D9
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPSIDETASK")) > 0)
		return 0;

	if (func_53() == 0)
	{
		func_52();
		return 0;
	}

	func_51(Global_24119);
	Global_24289[Global_24119 /*9*/].f_1 = iParam1;
	Global_24289[Global_24119 /*9*/] = iParam0;

	if (iParam3 == 0)
	{
	}
	else
	{
		Global_24289[Global_24119 /*9*/].f_8 = iParam3;
	}

	bParam2;
	return 1;
}

void func_51(int iParam0) // Position - 0x1A3D
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	iVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_24289[iParam0 /*9*/].f_2 = uVar0;
	Global_24289[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_24289[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_24289[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_24289[iParam0 /*9*/].f_2.f_4 = iVar4;
	Global_24289[iParam0 /*9*/].f_2.f_5 = uVar5;
}

void func_52() // Position - 0x1AB7
{
}

int func_53() // Position - 0x1ABF
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 2; iVar0 = iVar0 + 1)
	{
		if (Global_24289[iVar0 /*9*/].f_8 == 0)
		{
			Global_24119 = iVar0;
			return 1;
		}
	}

	iVar0 = 0;
	Global_24119 = 3;
	Global_24289[Global_24119 /*9*/].f_2 = -1;
	Global_24289[Global_24119 /*9*/].f_2.f_1 = 0;
	Global_24289[Global_24119 /*9*/].f_2.f_2 = 0;
	Global_24289[Global_24119 /*9*/].f_2.f_3 = 0;
	Global_24289[Global_24119 /*9*/].f_2.f_5 = 99999;

	while (iVar0 < 2)
	{
		if (Global_24289[iVar0 /*9*/].f_8 == 0 || Global_24289[iVar0 /*9*/].f_8 == 1)
			if (!func_54(Global_24289[iVar0 /*9*/].f_2, Global_24289[Global_24119 /*9*/].f_2))
				Global_24119 = iVar0;
	
		iVar0 = iVar0 + 1;
	}

	if (Global_24119 == 3)
		return 0;

	return 1;
}

bool func_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x1B99
{
	int iVar0;
	int iVar6;
	int iVar12;
	int iVar13;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			iVar0 = iParam0;
			iVar0.f_1 = iParam0.f_1 * 60;
			iVar0.f_2 = iParam0.f_2 * 3600;
			iVar0.f_3 = iParam0.f_3 * 86400;
			iVar12 = iVar0 + iVar0.f_1 + iVar0.f_2 + iVar0.f_3;
			iVar6 = iParam6;
			iVar6.f_1 = iParam6.f_1 * 60;
			iVar6.f_2 = iParam6.f_2 * 3600;
			iVar6.f_3 = iParam6.f_3 * 86400;
			iVar13 = iVar6 + iVar6.f_1 + iVar6.f_2 + iVar6.f_3;
		
			if (iVar12 > iVar13 || iVar12 == iVar13)
				return true;
			else
				return false;
		}
	}

	return false;
}

bool func_55() // Position - 0x1C84
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

int func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1CAB
{
	if (func_42(iParam0) == 3)
		return 0;

	if (func_42(iParam0) == 4)
		return 0;

	return func_2(func_42(iParam0), 0, iParam1, iParam2, false);
}

int func_57(int iParam0) // Position - 0x1CDF
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
			return iVar0;
	
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
			return iVar0;
	
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
			return iVar0;
	
		default:
		
	}

	return 0;
}

void func_58() // Position - 0x1D37
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

