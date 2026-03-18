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
	float Static_19 = 0f;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	float Static_23 = 0f;
	float Static_24 = 0f;
	var Static_25 = 0;
	var Static_26 = 0;
	var Static_27 = 0;
	float Static_28 = 0f;
	float Static_29 = 0f;
	float Static_30 = 0f;
	var Static_31 = 0;
	var Static_32 = 0;
	int Static_33 = 0;
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
	int Static_47 = 0;
	int Static_48 = 0;
	int Static_49 = 0;
	int Static_50 = 0;
	var Static_51 = 20;
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
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 20;
	var Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
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
	bool Static_93 = 0;
	int Static_94 = 0;
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
	Static_16 = "NULL";
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;
	Static_33 = 3;
	Static_38 = 1;
	Static_39 = 65;
	Static_40 = 49;
	Static_41 = 64;
	Static_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	Static_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Static_94 = -15;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_137();

	func_136();
	func_134();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (func_131(4) || Global_99349)
			func_137();
	
		if (func_130())
		{
			Static_93 = false;
			Static_47 = (Static_47 + 1) % 60;
		
			for (iVar0 = 0; iVar0 < 63; iVar0 = iVar0 + 1)
			{
				if (iVar0 % 60 == Static_47 || Global_114018[iVar0 /*10*/].f_2)
					func_83(iVar0);
			}
		
			func_76();
			func_54();
			func_49();
			func_46();
			func_4();
		}
		else if (!Static_93)
		{
			func_1();
		}
	}
}

void func_1() // Position - 0x121
{
	int iVar0;
	int iVar1;
	int iVar2;

	for (iVar1 = 0; iVar1 < 20; iVar1 = iVar1 + 1)
	{
		func_3(Static_72[iVar1], 0, false);
		Static_51[iVar1] = 0;
	}

	for (iVar2 = 0; iVar2 < 63; iVar2 = iVar2 + 1)
	{
		iVar0 = iVar2;
	
		if (Global_114018[iVar0 /*10*/].f_8 != -1)
		{
			func_3(Static_72[Global_114018[iVar0 /*10*/].f_8], false, false);
			func_2(&(Global_114018[iVar0 /*10*/].f_8));
		}
	
		Global_114018[iVar0 /*10*/].f_7 = 0;
	}

	Static_93 = true;
}

void func_2(int iParam0) // Position - 0x1A4
{
	if (*iParam0 > -1 && *iParam0 < 20)
		Static_51[*iParam0] = 0;

	*iParam0 = -1;
}

void func_3(int iParam0, bool bParam1, bool bParam2) // Position - 0x1CB
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

void func_4() // Position - 0x2CB
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar34;

	if (!func_45(58))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_44(17))
			{
				if (!func_43(74))
				{
					if (Static_94 == -15)
					{
						Static_94 = func_42();
						func_34(&Static_94, 0, 5, 0, 0, 0, 0);
					}
					else if (func_23(Static_94))
					{
						bVar0 = false;
					
						for (iVar1 = 243; iVar1 <= 262; iVar1 = iVar1 + 1)
						{
							iVar34 = iVar1;
							func_18(58, &uVar2);
						
							if (func_16(uVar2.f_6, func_17(iVar34, 0), false))
							{
								if (HUD::DOES_BLIP_EXIST(Global_34172[iVar34 /*23*/].f_19))
								{
									HUD::SET_BLIP_FLASHES(Global_34172[iVar34 /*23*/].f_19, 1);
									HUD::SET_BLIP_FLASH_TIMER(Global_34172[iVar34 /*23*/].f_19, 10000);
								
									switch (func_9())
									{
										case 1:
											func_6("AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
									
										case 0:
											func_6("AM_H_RCFS_M" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ Switch to Franklin to play this mission. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
									}
								
									Static_94 = func_42();
									func_34(&Static_94, 0, 0, 8, 0, 0, 0);
									bVar0 = true;
								}
							}
						}
					
						if (!bVar0)
						{
							Static_94 = func_42();
							func_34(&Static_94, 0, 5, 0, 0, 0, 0);
						}
					}
				}
				else
				{
					func_5(58);
				}
			}
		}
	}
}

void func_5(int iParam0) // Position - 0x3FF
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	for (iVar1 = 0; iVar0 > 31; iVar1 = iVar1 + 1)
	{
		iVar0 = iVar0 - 32;
	}

	if (iVar1 < 3)
		MISC::SET_BIT(&Global_114931.f_20417.f_150[iVar1], iVar0);
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x441
{
	func_7(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_7(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x462
{
	int iVar0;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114931.f_20417[iVar0 /*16*/], sParam0))
			return;
	}

	if (Global_114931.f_20417.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_4), sParam1, 16);
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_9 = iParam5;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_11 = iParam6;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_12 = iParam2;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = -1;
	
		Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 + 1;
		func_8();
	}
}

void func_8() // Position - 0x635
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		Global_114931.f_20417.f_146[iVar0] = 0;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 0))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[0])
				Global_114931.f_20417.f_146[0] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 1))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[1])
				Global_114931.f_20417.f_146[1] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 2))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[2])
				Global_114931.f_20417.f_146[2] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	}
}

int func_9() // Position - 0x74C
{
	func_10();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_10() // Position - 0x765
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_14(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_13(PLAYER::PLAYER_PED_ID());
		
			if (func_12(iVar0) && !func_11(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_12(Global_114931.f_2370.f_539.f_4321))
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

bool func_11(int iParam0) // Position - 0x862
{
	return Global_44886 == iParam0;
}

bool func_12(int iParam0) // Position - 0x870
{
	return iParam0 < 3;
}

int func_13(var uParam0) // Position - 0x87C
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_14(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_14(int iParam0) // Position - 0x8B9
{
	if (func_12(iParam0))
		return func_15(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_15(int iParam0) // Position - 0x8DE
{
	return Global_2339[iParam0 /*29*/];
}

bool func_16(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, bool bParam6) // Position - 0x8ED
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

Vector3 func_17(int iParam0, int iParam1) // Position - 0x934
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return 0f, 0f, 0f;

	return Global_34172[iVar0 /*23*/][iParam1 /*3*/];
}

void func_18(int iParam0, var uParam1) // Position - 0x972
{
	switch (iParam0)
	{
		case 0:
			func_19(uParam1, "Abigail1", func_21(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 1:
			func_19(uParam1, "Abigail2", func_21(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 2:
			func_19(uParam1, "Barry1", func_21(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 3:
			func_19(uParam1, "Barry2", func_21(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 4:
			func_19(uParam1, "Barry3", func_21(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 5:
			func_19(uParam1, "Barry3A", func_21(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 6:
			func_19(uParam1, "Barry3C", func_21(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 7:
			func_19(uParam1, "Barry4", func_21(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_20(iParam0), 0, 0);
			break;
	
		case 8:
			func_19(uParam1, "Dreyfuss1", func_21(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 9:
			func_19(uParam1, "Epsilon1", func_21(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 10:
			func_19(uParam1, "Epsilon2", func_21(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 11:
			func_19(uParam1, "Epsilon3", func_21(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 12:
			func_19(uParam1, "Epsilon4", func_21(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 13:
			func_19(uParam1, "Epsilon5", func_21(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 14:
			func_19(uParam1, "Epsilon6", func_21(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 15:
			func_19(uParam1, "Epsilon7", func_21(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 16:
			func_19(uParam1, "Epsilon8", func_21(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 17:
			func_19(uParam1, "Extreme1", func_21(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 18:
			func_19(uParam1, "Extreme2", func_21(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 19:
			func_19(uParam1, "Extreme3", func_21(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 20:
			func_19(uParam1, "Extreme4", func_21(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 21:
			func_19(uParam1, "Fanatic1", func_21(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_20(iParam0), 1, 0);
			break;
	
		case 22:
			func_19(uParam1, "Fanatic2", func_21(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_20(iParam0), 1, 0);
			break;
	
		case 23:
			func_19(uParam1, "Fanatic3", func_21(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_20(iParam0), 0, 1);
			break;
	
		case 24:
			func_19(uParam1, "Hao1", func_21(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_20(iParam0), 0, 1);
			break;
	
		case 25:
			func_19(uParam1, "Hunting1", func_21(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 26:
			func_19(uParam1, "Hunting2", func_21(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 27:
			func_19(uParam1, "Josh1", func_21(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 28:
			func_19(uParam1, "Josh2", func_21(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 29:
			func_19(uParam1, "Josh3", func_21(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 30:
			func_19(uParam1, "Josh4", func_21(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 31:
			func_19(uParam1, "Maude1", func_21(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 32:
			func_19(uParam1, "Minute1", func_21(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 33:
			func_19(uParam1, "Minute2", func_21(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 34:
			func_19(uParam1, "Minute3", func_21(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 35:
			func_19(uParam1, "MrsPhilips1", func_21(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 36:
			func_19(uParam1, "MrsPhilips2", func_21(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 37:
			func_19(uParam1, "Nigel1", func_21(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 38:
			func_19(uParam1, "Nigel1A", func_21(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 39:
			func_19(uParam1, "Nigel1B", func_21(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
	
		case 40:
			func_19(uParam1, "Nigel1C", func_21(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
	
		case 41:
			func_19(uParam1, "Nigel1D", func_21(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_20(iParam0), 1, 1);
			break;
	
		case 42:
			func_19(uParam1, "Nigel2", func_21(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 43:
			func_19(uParam1, "Nigel3", func_21(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 1);
			break;
	
		case 44:
			func_19(uParam1, "Omega1", func_21(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 45:
			func_19(uParam1, "Omega2", func_21(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 46:
			func_19(uParam1, "Paparazzo1", func_21(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 47:
			func_19(uParam1, "Paparazzo2", func_21(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 48:
			func_19(uParam1, "Paparazzo3", func_21(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 49:
			func_19(uParam1, "Paparazzo3A", func_21(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 50:
			func_19(uParam1, "Paparazzo3B", func_21(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 51:
			func_19(uParam1, "Paparazzo4", func_21(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 52:
			func_19(uParam1, "Rampage1", func_21(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 54:
			func_19(uParam1, "Rampage3", func_21(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 55:
			func_19(uParam1, "Rampage4", func_21(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 56:
			func_19(uParam1, "Rampage5", func_21(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_20(iParam0), 0, 0);
			break;
	
		case 53:
			func_19(uParam1, "Rampage2", func_21(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_20(iParam0), 1, 0);
			break;
	
		case 57:
			func_19(uParam1, "TheLastOne", func_21(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 58:
			func_19(uParam1, "Tonya1", func_21(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 59:
			func_19(uParam1, "Tonya2", func_21(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 60:
			func_19(uParam1, "Tonya3", func_21(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 61:
			func_19(uParam1, "Tonya4", func_21(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		case 62:
			func_19(uParam1, "Tonya5", func_21(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_20(iParam0), 0, 1);
			break;
	
		default:
			break;
	}
}

void func_19(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x1B08
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_20(int iParam0) // Position - 0x1B99
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_21(int iParam0) // Position - 0x1EDF
{
	var uVar0;
	var uVar2;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 8);
	uVar2 = { func_22(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar2))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&uVar0, &uVar2, 8);
	}

	return uVar0;
}

struct<2> func_22(int iParam0) // Position - 0x1F16
{
	var uVar0;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON5", 8);
			break;
	
		default:
			break;
	}

	return uVar0;
}

bool func_23(int iParam0) // Position - 0x2362
{
	return func_24(func_42(), iParam0);
}

bool func_24(int iParam0, int iParam1) // Position - 0x2374
{
	int iVar0;
	int iVar1;

	if (!func_32(iParam1) || !func_32(iParam0))
		return 1;

	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);

	if (iVar0 > iVar1)
		return 1;

	return 0;
}

int func_25(int iParam0) // Position - 0x2480
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_26(int iParam0) // Position - 0x2493
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_27(int iParam0) // Position - 0x24A6
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_28(int iParam0) // Position - 0x24B9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_29(int iParam0) // Position - 0x24CB
{
	return iParam0 & 15;
}

int func_30(int iParam0) // Position - 0x24D8
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_31(bool bParam0, var uParam1, var uParam2) // Position - 0x24FA
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

bool func_32(int iParam0) // Position - 0x2511
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
		return false;

	iVar0 = func_25(iParam0);

	if (iVar0 < 0 || iVar0 >= 60)
		return false;

	iVar1 = func_26(iParam0);

	if (iVar1 < 0 || iVar1 >= 60)
		return false;

	iVar2 = func_27(iParam0);

	if (iVar2 < 0 || iVar2 > 23)
		return false;

	iVar3 = func_30(iParam0);

	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979)
		return false;

	iVar4 = func_29(iParam0);

	if (iVar4 < 0 || iVar4 > 11)
		return false;

	iVar5 = func_28(iParam0);

	if (iVar5 < 1 || iVar5 > func_33(iVar4, iVar3))
		return false;

	return true;
}

int func_33(int iParam0, int iParam1) // Position - 0x25ED
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

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x268F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_30(*iParam0);
	iVar1 = func_29(*iParam0);
	iVar2 = func_28(*iParam0);
	iVar3 = func_27(*iParam0);
	iVar4 = func_26(*iParam0);
	iVar5 = func_25(*iParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (iVar5 = iVar5 + iParam1; iVar5 >= 60; iVar5 = iVar5 - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (iVar4 = iVar4 + iParam2; iVar4 >= 60; iVar4 = iVar4 - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (iVar3 = iVar3 + iParam3; iVar3 >= 24; iVar3 = iVar3 - 24)
	{
		iParam4 = iParam4 + 1;
	}

	iVar2 = iVar2 + iParam4;

	for (iVar6 = func_33(iVar1, iVar0); iVar2 > iVar6; iVar6 = func_33(iVar1, iVar0))
	{
		iVar1 = iVar1 + 1;
		iVar2 = iVar2 - iVar6;
	
		if (iVar1 > 11)
		{
			iVar0 = iVar0 + 1;
			iVar1 = iVar1 - 12;
		}
	}

	for (iVar1 = iVar1 + iParam5; iVar1 > 11; iVar1 = iVar1 - 12)
	{
		iParam6 = iParam6 + 1;
	}

	iVar0 = iVar0 + iParam6;
	func_35(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2811
{
	func_41(uParam0, iParam1);
	func_40(uParam0, iParam2);
	func_39(uParam0, iParam3);
	func_38(uParam0, iParam5);
	func_37(uParam0, iParam4);
	func_36(uParam0, iParam6);
}

void func_36(var uParam0, int iParam1) // Position - 0x2849
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

void func_37(var uParam0, int iParam1) // Position - 0x28CF
{
	int iVar0;
	int iVar1;

	iVar0 = func_29(*uParam0);
	iVar1 = func_30(*uParam0);

	if (iParam1 < 1 || iParam1 > func_33(iVar0, iVar1))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
}

void func_38(var uParam0, int iParam1) // Position - 0x2920
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
}

void func_39(var uParam0, int iParam1) // Position - 0x2953
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
}

void func_40(var uParam0, int iParam1) // Position - 0x298D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
}

void func_41(var uParam0, int iParam1) // Position - 0x29C8
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
}

int func_42() // Position - 0x2A04
{
	var uVar0;

	func_41(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_40(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_39(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_37(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_38(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_36(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

bool func_43(int iParam0) // Position - 0x2A4A
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

bool func_44(int iParam0) // Position - 0x2A77
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

bool func_45(int iParam0) // Position - 0x2AA3
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	for (iVar1 = 0; iVar0 > 31; iVar1 = iVar1 + 1)
	{
		iVar0 = iVar0 - 32;
	}

	if (iVar1 < 3)
		return IS_BIT_SET(Global_114931.f_20417.f_150[iVar1], iVar0);

	return false;
}

void func_46() // Position - 0x2AE3
{
	if (!func_45(39))
		if (IS_BIT_SET(Global_114931.f_18581[27 /*6*/], 3))
			if (func_47("FS_HELP1" /* GXT: Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city. */) == 2)
				func_6("FS_HELP1" /* GXT: Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city. */, 1, 0, 2000, 10000, 7, 0, 0, 0);
			else if (func_47("FS_HELP1" /* GXT: Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city. */) == 1)
				func_5(39);
}

int func_47(char* sParam0) // Position - 0x2B3A
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113571))
		return 1;

	if (func_48(sParam0))
		return 0;

	return 2;
}

bool func_48(char* sParam0) // Position - 0x2B61
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114931.f_20417[iVar0 /*16*/]))
			return true;
	}

	return false;
}

void func_49() // Position - 0x2B9C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (!func_45(55))
			if (func_53(5) && func_51(PLAYER::PLAYER_PED_ID(), func_52(5), 1) < func_50(5) || func_53(6) && func_51(PLAYER::PLAYER_PED_ID(), func_52(6), 1) < func_50(6))
				if (func_47("BARSTASH2" /* GXT: Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry. */) == 2)
					func_6("BARSTASH2" /* GXT: Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry. */, 1, 0, 2000, 10000, 2, 0, 0, 0);
				else if (func_47("BARSTASH2" /* GXT: Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry. */) == 1)
					func_5(55);
}

float func_50(int iParam0) // Position - 0x2C33
{
	if (iParam0 == 5 || iParam0 == 6)
		return 250f;
	else if (iParam0 == 38)
		return 35f;
	else if (iParam0 == 39)
		return 37.5f;
	else if (iParam0 == 40)
		return 45f;
	else if (iParam0 == 41)
		return 150f;
	else if (iParam0 == 49 || iParam0 == 50)
		return 90f;

	return 250f;
}

float func_51(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x2CBF
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	else
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uParam1, iParam4);
}

Vector3 func_52(int iParam0) // Position - 0x2CF9
{
	if (iParam0 == 5)
		return 1161.31f, -1326.52f, 34.23f;
	else if (iParam0 == 6)
		return -533.15f, -1691.25f, 18.21f;
	else if (iParam0 == 38)
		return -565.8f, 293.14f, 90.8f;
	else if (iParam0 == 39)
		return -1036.65f, 363.59f, 79.82f;
	else if (iParam0 == 40)
		return -620.37f, -264.39f, 37.81f;
	else if (iParam0 == 41)
		return -1115.96f, 31.42f, 53.8f;
	else if (iParam0 == 49)
		return 305.52f, 157.19f, 102.94f;
	else if (iParam0 == 50)
		return 1040.96f, -534.42f, 60.17f;

	return 0f, 0f, 0f;
}

bool func_53(int iParam0) // Position - 0x2DDF
{
	return Global_114018[iParam0 /*10*/].f_1;
}

void func_54() // Position - 0x2DF1
{
	if (func_75())
	{
		if (!func_43(114))
		{
			if (IS_BIT_SET(Global_114931.f_18581[46 /*6*/], 3))
			{
				func_72(552744224, 6, 2, 50, 60000, 10000, -1, 181, -1, 0, 1);
				func_71(114, 1);
			}
		}
		else if (!func_43(83))
		{
			if (IS_BIT_SET(Global_114931.f_18581[51 /*6*/], 3))
			{
				if (func_70(552744224))
				{
					func_56(552744224);
					func_55(181, 0);
				}
			}
		}
	}
}

void func_55(int iParam0, int iParam1) // Position - 0x2E76
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_114931.f_8620[iParam0] = true;
	Global_114931.f_8620.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
}

int func_56(int iParam0) // Position - 0x2EB3
{
	int iVar0;
	int iVar1;

	iVar1 = 0;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695[iVar0 /*15*/] == iParam0)
		{
			if (Global_45433 != iVar0)
			{
				func_69(iVar0);
				func_61(iParam0);
				iVar1 = 1;
			}
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_198; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar0 /*15*/] == iParam0)
		{
			func_61(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_650; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar0 /*15*/] == iParam0)
		{
			func_60(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_764; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_651[iVar0 /*14*/] == iParam0)
		{
			func_58(iVar0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_866; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_765[iVar0 /*10*/] == iParam0)
		{
			func_57(iVar0);
			iVar1 = 1;
		}
	}

	return iVar1;
}

void func_57(int iParam0) // Position - 0x2FDA
{
	int iVar0;
	var uVar1;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_866)
		return;

	if (Global_114931.f_7695.f_866 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_866 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695.f_765[iVar0 /*10*/] = { Global_114931.f_7695.f_765[iVar0 + 1 /*10*/] };
		}
	}

	if (Global_114931.f_7695.f_866 > 0)
	{
		Global_114931.f_7695.f_765[Global_114931.f_7695.f_866 - 1 /*10*/] = { uVar1 };
		Global_114931.f_7695.f_866 = Global_114931.f_7695.f_866 - 1;
	}
}

void func_58(int iParam0) // Position - 0x3093
{
	int iVar0;
	var uVar1;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_764)
		return;

	if (Global_114931.f_7695.f_764 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_764 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695.f_651[iVar0 /*14*/] = { Global_114931.f_7695.f_651[iVar0 + 1 /*14*/] };
		}
	}

	if (Global_114931.f_7695.f_764 > 0)
	{
		Global_114931.f_7695.f_651[Global_114931.f_7695.f_764 - 1 /*14*/] = { uVar1 };
		Global_114931.f_7695.f_764 = Global_114931.f_7695.f_764 - 1;
	}

	func_59(0);
	func_59(1);
	func_59(2);
}

void func_59(int iParam0) // Position - 0x315B
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;

	if (!func_12(iParam0))
		return;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_7695[iVar0 /*15*/].f_2, iParam0))
			if (Global_114931.f_7695[iVar0 /*15*/].f_3 > iVar1)
				iVar1 = Global_114931.f_7695[iVar0 /*15*/].f_3;
	}

	for (iVar2 = 0; iVar2 < Global_114931.f_7695.f_764; iVar2 = iVar2 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_7695.f_651[iVar2 /*14*/].f_2, iParam0))
			if (Global_114931.f_7695.f_651[iVar2 /*14*/].f_3 == 5)
				iVar1 = 5;
	}

	Global_114931.f_7695.f_919[iParam0] = iVar1;
}

void func_60(int iParam0) // Position - 0x3219
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_650; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar15 /*15*/] == iParam0)
		{
			for (iVar16 = iVar15; iVar16 <= Global_114931.f_7695.f_650 - 2; iVar16 = iVar16 + 1)
			{
				Global_114931.f_7695.f_199[iVar16 /*15*/] = { Global_114931.f_7695.f_199[iVar16 + 1 /*15*/] };
			}
		
			Global_114931.f_7695.f_199[Global_114931.f_7695.f_650 - 1 /*15*/] = { uVar0 };
			Global_114931.f_7695.f_650 = Global_114931.f_7695.f_650 - 1;
			return;
		}
	}
}

void func_61(int iParam0) // Position - 0x32C6
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_198; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar15 /*15*/] == iParam0)
		{
			func_62(Global_114931.f_7695.f_137[iVar15 /*15*/].f_6);
		
			for (iVar16 = iVar15; iVar16 <= Global_114931.f_7695.f_198 - 2; iVar16 = iVar16 + 1)
			{
				Global_114931.f_7695.f_137[iVar16 /*15*/] = { Global_114931.f_7695.f_137[iVar16 + 1 /*15*/] };
			}
		
			Global_114931.f_7695.f_137[Global_114931.f_7695.f_198 - 1 /*15*/] = { uVar0 };
			Global_114931.f_7695.f_198 = Global_114931.f_7695.f_198 - 1;
			return;
		}
	}
}

int func_62(int iParam0) // Position - 0x3382
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (func_68(iParam0, Global_21627) == 1)
		{
			func_67(iParam0, Global_21627, 0);
		
			if (func_66(iParam0, Global_21627) == 0)
			{
				iVar0 = Global_21627;
				func_63(iParam0, iVar0);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_63(int iParam0, int iParam1) // Position - 0x33D8
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_65(iParam0, iVar0, 0);
			func_64(iParam0, iVar0, 0);
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2) // Position - 0x340D
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
}

void func_65(int iParam0, int iParam1, int iParam2) // Position - 0x3452
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
}

int func_66(int iParam0, int iParam1) // Position - 0x3497
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_67(int iParam0, int iParam1, int iParam2) // Position - 0x34C1
{
	Global_2339[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_19[iParam1] = iParam2;
}

int func_68(int iParam0, int iParam1) // Position - 0x34F2
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

void func_69(int iParam0) // Position - 0x351C
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_136)
		return;

	iVar1 = Global_114931.f_7695[iParam0 /*15*/].f_2;

	if (Global_114931.f_7695.f_136 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_136 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695[iVar0 /*15*/] = { Global_114931.f_7695[iVar0 + 1 /*15*/] };
		}
	}

	if (Global_114931.f_7695.f_136 > 0)
	{
		Global_114931.f_7695[Global_114931.f_7695.f_136 - 1 /*15*/] = { uVar2 };
		Global_114931.f_7695.f_136 = Global_114931.f_7695.f_136 - 1;
	}

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(iVar1, iVar0))
			func_59(iVar0);
	}
}

bool func_70(int iParam0) // Position - 0x35F4
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695[iVar0 /*15*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_650; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar0 /*15*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_198; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar0 /*15*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_764; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_651[iVar0 /*14*/] == iParam0)
			return true;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_866; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_765[iVar0 /*10*/] == iParam0)
			return true;
	}

	return false;
}

void func_71(int iParam0, bool bParam1) // Position - 0x36F0
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114931.f_9092.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114931.f_9092.f_99.f_58[iParam0] = bParam1;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x3735
{
	int iVar0;

	if (func_74(false))
		return 0;

	if (iParam4 < 0)
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 == 76)
		return 0;

	if (iParam7 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_114931.f_7695.f_764 < 8)
	{
		iVar0 = iParam0;
		iVar0.f_3 = func_73(iParam1);
		iVar0.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		iVar0.f_5 = iParam5;
		iVar0.f_1 = iParam9;
		iVar0.f_2 = iParam2;
		iVar0.f_6 = iParam3;
		iVar0.f_7 = iParam6;
		iVar0.f_8 = iParam7;
		iVar0.f_9 = iParam8;
		iVar0.f_10 = -1;
		iVar0.f_11 = -1;
		iVar0.f_13 = iParam10;
		MISC::CLEAR_BIT(&(iVar0.f_1), 0);
		Global_114931.f_7695.f_651[Global_114931.f_7695.f_764 /*14*/] = { iVar0 };
		Global_114931.f_7695.f_764 = Global_114931.f_7695.f_764 + 1;
		func_59(0);
		func_59(1);
		func_59(2);
		return 1;
	}

	return 0;
}

int func_73(int iParam0) // Position - 0x384D
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

bool func_74(bool bParam0) // Position - 0x38B7
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

bool func_75() // Position - 0x38DF
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

void func_76() // Position - 0x3997
{
	int iVar0;
	var uVar1;

	Static_48 = Static_48 + 1;
	Static_49 = Static_49 + 1;

	if (Static_48 >= 63)
	{
		Static_48 = 0;
		Static_49 = 0;
		Static_50 = 0;
	}
	else if (Static_49 > 31)
	{
		Static_49 = 0;
		Static_50 = Static_50 + 1;
	}

	iVar0 = Static_48;

	if (!func_82(iVar0) || iVar0 == 52)
	{
		if (!IS_BIT_SET(Global_114931.f_18581.f_390[Static_50], Static_49))
		{
			func_18(iVar0, &uVar1);
		
			if (iVar0 == 58)
				MISC::SET_BIT(&Global_114931.f_18581.f_390[Static_50], Static_49);
			else if (HUD::GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(uVar1.f_6))
				MISC::SET_BIT(&Global_114931.f_18581.f_390[Static_50], Static_49);
			else if (Global_114018[iVar0 /*10*/].f_8 != -1)
				if (Static_51[Global_114018[iVar0 /*10*/].f_8])
					if (IS_BIT_SET(Global_34172[Static_72[Global_114018[iVar0 /*10*/].f_8] /*23*/].f_11, 6))
						func_81(Static_72[Global_114018[iVar0 /*10*/].f_8]);
		}
		else if (Global_114018[iVar0 /*10*/].f_8 != -1)
		{
			if (Static_51[Global_114018[iVar0 /*10*/].f_8])
				if (!IS_BIT_SET(Global_34172[Static_72[Global_114018[iVar0 /*10*/].f_8] /*23*/].f_11, 6))
					func_77(Static_72[Global_114018[iVar0 /*10*/].f_8]);
		}
	}
}

void func_77(var uParam0) // Position - 0x3AE0
{
	func_80(uParam0, true, false);
	func_79(uParam0, true);
	func_78(uParam0, true);
}

void func_78(int iParam0, bool bParam1) // Position - 0x3AFE
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 4))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 4);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 4);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_79(int iParam0, bool bParam1) // Position - 0x3B81
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 5))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 5);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 5);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_80(int iParam0, bool bParam1, bool bParam2) // Position - 0x3C04
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 6))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 6);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 6);

	if (bParam2)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 11);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 11);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_81(int iParam0) // Position - 0x3CAD
{
	func_80(iParam0, false, false);
	func_79(iParam0, true);
	func_78(iParam0, true);
}

bool func_82(int iParam0) // Position - 0x3CCB
{
	if (iParam0 == 52 || iParam0 == 53 || iParam0 == 54 || iParam0 == 55 || iParam0 == 56)
		return true;

	return false;
}

void func_83(int iParam0) // Position - 0x3D0C
{
	var uVar0;
	var uVar32;
	int iVar33;
	bool bVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	var uVar57;
	bool bVar59;
	bool bVar60;
	float fVar61;
	int iVar62;
	int iVar63;
	char* sVar64;

	if (iParam0 == -1)
		return;

	func_18(iParam0, &uVar0);
	Global_114018[iParam0 /*10*/].f_2 = 0;

	if (!IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 1))
		if (!uVar0.f_23)
			MISC::SET_BIT(&Global_114931.f_18581[iParam0 /*6*/], 1);

	if (IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 0) && !IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 3))
	{
		if (!Global_114931.f_18581[iParam0 /*6*/].f_1)
		{
			uVar32 = func_42();
			func_34(&uVar32, 0, 0, uVar0.f_15, 0, 0, 0);
		
			if (iParam0 == 57)
			{
				iVar33 = MISC::GET_RANDOM_INT_IN_RANGE(3, 11);
				iVar33 = iVar33 * 30;
				func_34(&uVar32, 0, 0, iVar33, 0, 0, 0);
			}
		
			Global_114931.f_18581[iParam0 /*6*/].f_2 = uVar32;
			Global_114931.f_18581[iParam0 /*6*/].f_1 = 1;
		}
	
		if (IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 1))
		{
			if (!IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 2))
			{
				bVar34 = true;
			
				if (uVar0.f_14 != -1)
					if (!func_43(uVar0.f_14))
						bVar34 = false;
			
				if (func_128(iParam0))
					bVar34 = false;
			
				if (func_126(iParam0))
					bVar34 = false;
			
				if (func_125(uVar0.f_30))
					bVar34 = false;
			
				if (uVar0.f_15 > 0 && bVar34)
				{
					if (!func_23(Global_114931.f_18581[iParam0 /*6*/].f_2))
					{
						func_122(Global_114931.f_18581[iParam0 /*6*/].f_2, &uVar35, &uVar36, &uVar37, &iVar38, &iVar39, &iVar40);
					
						if (iVar40 > 0 || iVar39 > 0 || iVar38 > 10)
						{
							uVar57 = { func_21(iParam0) };
							Global_114931.f_18581[iParam0 /*6*/].f_2 = func_42();
							func_34(&(Global_114931.f_18581[iParam0 /*6*/].f_2), 0, 0, uVar0.f_15, 0, 0, 0);
						}
					
						bVar34 = false;
					}
				}
			
				if (!func_121(uVar0.f_27, uVar0.f_28))
					bVar34 = false;
			
				if (bVar34)
				{
					MISC::SET_BIT(&Global_114931.f_18581[iParam0 /*6*/], 2);
					Global_114018[iParam0 /*10*/].f_4 = 0;
					Global_114018[iParam0 /*10*/].f_6 = 0;
					Global_114018[iParam0 /*10*/].f_5 = 0;
				
					if (iParam0 == 35)
					{
						Global_114018[iParam0 /*10*/].f_3 = 0;
						BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_MrsPhilips");
					}
					else if (iParam0 == 58)
					{
						Global_114018[iParam0 /*10*/].f_3 = 0;
						BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_Tonya");
					}
					else
					{
						Global_114018[iParam0 /*10*/].f_3 = 1;
					}
				}
			}
		}
	}

	if (IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 2) && !IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 3))
	{
		bVar59 = true;
	
		if (func_128(iParam0))
			bVar59 = false;
	
		if (func_126(iParam0))
			bVar59 = false;
	
		if (func_125(uVar0.f_30))
			bVar59 = false;
	
		if (bVar59)
			if (!func_121(uVar0.f_27, uVar0.f_28))
				bVar59 = false;
	
		if (!bVar59)
			MISC::CLEAR_BIT(&Global_114931.f_18581[iParam0 /*6*/], 2);
	}

	bVar60 = true;

	if (Global_114018[iParam0 /*10*/].f_1)
	{
		Global_114018[iParam0 /*10*/].f_2 = 1;
		Global_114018[iParam0 /*10*/].f_1 = 0;
		Global_114018[iParam0 /*10*/].f_3 = 1;
	}
	else if (Global_114018[iParam0 /*10*/].f_3)
	{
		if (uVar0.f_4 == 0 || uVar0.f_4 == 2 || uVar0.f_4 == 3 || uVar0.f_4 == 11 || uVar0.f_4 == 16 || uVar0.f_4 == 17)
			fVar61 = 100f;
		else
			fVar61 = 209f;
	
		if (!func_120() && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), uVar0.f_6, 0) > fVar61)
		{
			Global_114018[iParam0 /*10*/].f_3 = 0;
		}
		else
		{
			if (iParam0 == 10 && Global_114931.f_7268[109] != 1)
				func_107(109, 1);
		
			bVar60 = false;
		}
	}

	iVar62 = 0;

	if (bVar60 && !IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 3) && IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 0) && IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 1) && IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 2))
	{
		if (iParam0 == 58 && func_106())
		{
		}
		else
		{
			iVar62 = 2;
		}
	}

	if (Global_114018[iParam0 /*10*/].f_7 != iVar62)
	{
		if (func_105(&(Global_114018[iParam0 /*10*/].f_8)))
		{
			if (func_16(uVar0.f_6, 0f, 0f, 0f, false))
			{
			}
			else
			{
				iVar63 = Static_72[Global_114018[iParam0 /*10*/].f_8];
			
				if (iVar62 == 0)
				{
					func_3(iVar63, false, false);
					func_104(iVar63, false);
					func_2(&(Global_114018[iParam0 /*10*/].f_8));
				}
				else if (iVar62 == 2)
				{
					if (func_103(iParam0))
					{
						func_102(iVar63, true);
						func_101(iVar63, func_52(iParam0));
						func_100(iVar63, func_50(iParam0));
					}
					else
					{
						func_102(iVar63, false);
						func_99(iVar63, uVar0.f_9);
						func_101(iVar63, uVar0.f_6);
					}
				
					func_96(iVar63, iParam0);
					func_95(iVar63);
				
					if (func_94(uVar0.f_26, 1))
						func_93(iVar63, true, 1, false);
				
					if (func_94(uVar0.f_26, 0))
						func_93(iVar63, true, 0, false);
				
					if (func_94(uVar0.f_26, 2))
						func_93(iVar63, true, 2, false);
				
					if (func_82(iParam0) && iParam0 != 52)
						func_81(iVar63);
				
					if (func_82(iParam0))
						if (func_91(iParam0))
							func_104(iVar63, true);
				
					if (iParam0 == 58)
						func_90(iVar63, 4);
					else
						func_90(iVar63, 8);
				
					func_3(iVar63, true, false);
				}
			}
		
			Global_114018[iParam0 /*10*/].f_7 = iVar62;
		}
	}

	if (!IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 4))
	{
		if (MISC::GET_HASH_KEY(&(uVar0.f_10)) == MISC::GET_HASH_KEY(""))
		{
			MISC::SET_BIT(&Global_114931.f_18581[iParam0 /*6*/], 4);
		}
		else if (iVar62 == 2)
		{
			if (func_94(uVar0.f_26, func_9()))
			{
				if (!func_89() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (iParam0 == 58)
						{
							if (func_88(243))
							{
								if (func_87(243))
								{
									func_6(&(uVar0.f_10), 1, 0, -1, 10000, uVar0.f_26, 0, 0, 0);
									func_55(63, 1000);
									MISC::SET_BIT(&Global_114931.f_18581[iParam0 /*6*/], 4);
								}
							}
						}
						else if (iParam0 == 5 || iParam0 == 38 || iParam0 == 49)
						{
							func_6(&(uVar0.f_10), 1, 5000, -1, 10000, uVar0.f_26, 0, 0, 0);
							MISC::SET_BIT(&Global_114931.f_18581[iParam0 /*6*/], 4);
						}
						else
						{
							func_6(&(uVar0.f_10), 1, 0, -1, 10000, uVar0.f_26, 0, 0, 0);
							MISC::SET_BIT(&Global_114931.f_18581[iParam0 /*6*/], 4);
						}
					}
				}
			}
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!func_45(35))
		{
			if (IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 2) && !IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 3))
			{
				if (!func_94(uVar0.f_26, func_9()) && !func_103(iParam0) && !func_82(iParam0) && !func_86(iParam0) && !func_85(iParam0) && !Global_114018[iParam0 /*10*/].f_3)
				{
					if (BUILTIN::VDIST2(uVar0.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 81f)
					{
						sVar64 = "";
					
						if (IS_BIT_SET(uVar0.f_26, 1))
							sVar64 = "TRIG_RC_F" /* GXT: Return as Franklin to start this Strangers and Freaks mission. */;
						else if (IS_BIT_SET(uVar0.f_26, 0))
							sVar64 = "TRIG_RC_M" /* GXT: Return as Michael to start this Strangers and Freaks mission. */;
						else
							sVar64 = "TRIG_RC_T" /* GXT: Return as Trevor to start this Strangers and Freaks mission. */;
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar64))
						{
							switch (func_47(sVar64))
							{
								case 2:
									func_6(sVar64, 1, 0, 1000, 10000, func_84(), 0, 0, 0);
									break;
							
								case 1:
									func_5(35);
									TEXT_LABEL_ASSIGN_STRING(&Global_113571, "", 16);
									break;
							}
						}
					}
				}
			}
		}
	}
}

int func_84() // Position - 0x44DA
{
	func_10();

	switch (Global_114931.f_2370.f_539.f_4321)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	}

	return 0;
}

bool func_85(int iParam0) // Position - 0x4520
{
	if (iParam0 == 2)
		if (IS_BIT_SET(Global_114931.f_18581[3 /*6*/], 3) && Global_114018[3 /*10*/].f_3 == true)
			return true;
	else if (iParam0 == 3)
		if (IS_BIT_SET(Global_114931.f_18581[2 /*6*/], 3) && Global_114018[2 /*10*/].f_3 == true)
			return true;

	return false;
}

bool func_86(int iParam0) // Position - 0x457E
{
	if (iParam0 == 2 || iParam0 == 3)
		if (IS_BIT_SET(Global_114931.f_18581[2 /*6*/], 0) && IS_BIT_SET(Global_114931.f_18581[3 /*6*/], 0))
			if (!IS_BIT_SET(Global_114931.f_18581[2 /*6*/], 3) && !IS_BIT_SET(Global_114931.f_18581[3 /*6*/], 3))
				return true;

	return false;
}

bool func_87(int iParam0) // Position - 0x45DE
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_34172[iVar0 /*23*/].f_19);
}

bool func_88(int iParam0) // Position - 0x461A
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return false;

	bVar1 = IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 0);
	bVar2 = IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 15);

	if (bVar1 && bVar2)
		return true;

	return false;
}

bool func_89() // Position - 0x4675
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

void func_90(int iParam0, int iParam1) // Position - 0x468F
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (Global_34172[iVar0 /*23*/].f_16 == iParam1)
		return;

	Global_34172[iVar0 /*23*/].f_16 = iParam1;

	switch (iParam1)
	{
		case 1:
			Global_34172[iVar0 /*23*/].f_12[0] = 40;
			break;
	
		case 3:
			Global_34172[iVar0 /*23*/].f_12[0] = 60;
			break;
	}

	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
}

bool func_91(int iParam0) // Position - 0x472C
{
	int iVar0;
	int iVar1;

	if (!func_82(iParam0))
		return false;

	iVar0 = 194;
	iVar1 = iParam0 - 52;

	if (func_43(108) == true)
		return true;

	if (Global_114931.f_2359[iVar1 /*2*/] >= 1)
		return true;

	if (IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 3))
		return true;

	return func_92(iVar0 + iVar1, 0);
}

bool func_92(int iParam0, int iParam1) // Position - 0x478C
{
	if (Global_114931.f_10201[iParam0 /*12*/].f_5 == true)
	{
		iParam1 == 1;
		return 1;
	}

	return 0;
}

void func_93(int iParam0, bool bParam1, int iParam2, bool bParam3) // Position - 0x47B3
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1)
	{
		if (!bParam3)
		{
			Global_34172[iVar0 /*23*/].f_17 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 8))
				MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
		
			MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 8);
		}
		else
		{
			Global_34172[iVar0 /*23*/].f_18 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 10))
				MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
		
			MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 10);
		}
	
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
	}
	else
	{
		func_95(iParam0);
	}
}

bool func_94(int iParam0, int iParam1) // Position - 0x487B
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return IS_BIT_SET(iParam0, iParam1);
	
		default:
		
	}

	return false;
}

void func_95(int iParam0) // Position - 0x48A5
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 8) || IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 10))
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);

	MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 8);
	MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 10);
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_96(int iParam0, int iParam1) // Position - 0x4930
{
	func_98(iParam0, 0);

	if (iParam1 == 1)
	{
		func_97(iParam0, "B_ABI" /* GXT: Abigail */);
	}
	else if (iParam1 == 2 || iParam1 == 3 || iParam1 == 4 || iParam1 == 7)
	{
		if (IS_BIT_SET(Global_114931.f_18581[2 /*6*/], 3) || IS_BIT_SET(Global_114931.f_18581[3 /*6*/], 3) || IS_BIT_SET(Global_114931.f_18581[4 /*6*/], 3))
		{
			func_97(iParam0, "B_BAR" /* GXT: Barry */);
		}
		else
		{
			func_97(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
			func_99(iParam0, 66);
		}
	}
	else if (iParam1 == 5 || iParam1 == 6)
	{
		func_97(iParam0, "B_STA" /* GXT: Weed Stash */);
	}
	else if (iParam1 == 8)
	{
		func_97(iParam0, "B_DRE" /* GXT: Killer */);
	}
	else if (iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || iParam1 == 15 || iParam1 == 16)
	{
		func_97(iParam0, "B_EPS" /* GXT: Epsilon */);
	}
	else if (iParam1 == 18 || iParam1 == 19 || iParam1 == 20)
	{
		func_97(iParam0, "B_EXT" /* GXT: Dom */);
	}
	else if (iParam1 == 21 || iParam1 == 22 || iParam1 == 23)
	{
		if (IS_BIT_SET(Global_114931.f_18581[21 /*6*/], 3) || IS_BIT_SET(Global_114931.f_18581[22 /*6*/], 3) || IS_BIT_SET(Global_114931.f_18581[23 /*6*/], 3))
		{
			func_97(iParam0, "B_FAN" /* GXT: Mary-Ann */);
		}
		else
		{
			func_97(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
			func_99(iParam0, 66);
		}
	}
	else if (iParam1 == 26)
	{
		func_97(iParam0, "B_HUN" /* GXT: Cletus */);
	}
	else if (iParam1 == 28 || iParam1 == 29 || iParam1 == 30)
	{
		func_97(iParam0, "B_JOS" /* GXT: Josh */);
	}
	else if (iParam1 == 33 || iParam1 == 34)
	{
		func_97(iParam0, "B_MIN" /* GXT: Minute Men */);
	}
	else if (iParam1 == 38 || iParam1 == 39 || iParam1 == 40 || iParam1 == 41)
	{
		func_97(iParam0, "B_CEL" /* GXT: Celebrity Item */);
	}
	else if (iParam1 == 42 || iParam1 == 43)
	{
		func_97(iParam0, "B_NIG" /* GXT: Nigel */);
	}
	else if (iParam1 == 45)
	{
		func_97(iParam0, "B_OME" /* GXT: Omega */);
	}
	else if (iParam1 == 47 || iParam1 == 48 || iParam1 == 51)
	{
		func_97(iParam0, "B_PAP" /* GXT: Beverly */);
	}
	else if (iParam1 == 49 || iParam1 == 50)
	{
		func_97(iParam0, "B_PHO" /* GXT: Photo Opportunity */);
	}
	else if (iParam1 == 52)
	{
		func_97(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
	}
	else if (iParam1 == 53 || iParam1 == 54 || iParam1 == 55 || iParam1 == 56)
	{
		func_97(iParam0, "BLIP_84" /* GXT: Rampage */);
	}
	else if (iParam1 == 59 || iParam1 == 60 || iParam1 == 61 || iParam1 == 62)
	{
		func_97(iParam0, "B_TON" /* GXT: Tonya */);
	}
	else
	{
		func_97(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
	}
}

void func_97(int iParam0, char* sParam1) // Position - 0x4C94
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_34172[iVar0 /*23*/].f_20), sParam1, 8);

	if (HUD::DOES_BLIP_EXIST(Global_34172[iVar0 /*23*/].f_19))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_34172[iVar0 /*23*/].f_19, sParam1);
}

void func_98(int iParam0, int iParam1) // Position - 0x4CEE
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	MISC::SET_BITS_IN_RANGE(&(Global_34172[iVar0 /*23*/].f_11), 21, 26, iParam1);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_99(int iParam0, int iParam1) // Position - 0x4D4C
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (Global_34172[iVar0 /*23*/].f_12[0] == iParam1)
		return;

	Global_34172[iVar0 /*23*/].f_12[0] = iParam1;

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_100(int iParam0, float fParam1) // Position - 0x4DBA
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	Global_34169 = true;
	Global_34172[iVar0 /*23*/].f_10 = fParam1;
	Global_40222 = 1;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_101(int iParam0, float fParam1, var uParam2, var uParam3) // Position - 0x4E0A
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (fParam1 == Global_34172[iVar0 /*23*/][0 /*3*/] && fParam1.f_1 == Global_34172[iVar0 /*23*/][0 /*3*/].f_1 && fParam1.f_2 == Global_34172[iVar0 /*23*/][0 /*3*/].f_2)
		return;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
	Global_34172[iVar0 /*23*/][0 /*3*/] = { fParam1 };
	Global_40222 = 1;
}

void func_102(int iParam0, bool bParam1) // Position - 0x4E9E
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 28);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 28);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

bool func_103(int iParam0) // Position - 0x4F10
{
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 38 || iParam0 == 39 || iParam0 == 40 || iParam0 == 41 || iParam0 == 49 || iParam0 == 50)
		return true;

	return false;
}

void func_104(int iParam0, bool bParam1) // Position - 0x4F70
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 20))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 20);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 20);

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 20);
}

bool func_105(int iParam0) // Position - 0x4FF6
{
	int iVar0;

	if (*iParam0 != -1)
		return true;

	for (iVar0 = 0; iVar0 < 20; iVar0 = iVar0 + 1)
	{
		if (!Static_51[iVar0])
		{
			*iParam0 = iVar0;
			Static_51[iVar0] = 1;
			return true;
		}
	}

	return false;
}

bool func_106() // Position - 0x5037
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

void func_107(int iParam0, int iParam1) // Position - 0x5061
{
	int iVar0;

	if (iParam0 != 226)
	{
		if (Global_80305)
			iVar0 = Global_44420[iParam0];
		else
			iVar0 = Global_114931.f_7268[iParam0];
	
		if (iVar0 != iParam1 || IS_BIT_SET(Global_40246[iParam0 / 32], iParam0 % 32))
		{
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2)
			{
				MISC::SET_BIT(&Global_40255[iParam0 / 32], iParam0 % 32);
				Global_40718[iParam0] = iParam1;
			}
			else if (Global_80305)
			{
				Global_44420[iParam0] = iParam1;
			}
			else
			{
				Global_114931.f_7268[iParam0] = iParam1;
			}
		
			MISC::SET_BIT(&Global_40246[iParam0 / 32], iParam0 % 32);
			func_109(iParam0);
		
			if (IS_BIT_SET(Global_40246[iParam0 / 32], iParam0 % 32))
				func_108(iParam0);
		}
	}
}

void func_108(int iParam0) // Position - 0x514E
{
	if (!IS_BIT_SET(Global_41189.f_228[iParam0 / 32], iParam0 % 23))
	{
		MISC::SET_BIT(&Global_41189.f_228[iParam0 / 32], iParam0 % 23);
		Global_41189[Global_41189.f_227] = iParam0;
		Global_41189.f_227 = Global_41189.f_227 + 1;
	}
}

void func_109(int iParam0) // Position - 0x5199
{
	var uVar0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_117())
		return;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	uVar0 = { func_116(iParam0) };

	if (IS_BIT_SET(uVar0.f_4, 2))
		func_114(iParam0, &uVar0);

	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar0.f_5))
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
			return;

	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);

	if (IS_BIT_SET(Global_40255[iParam0 / 32], iParam0 % 32) && Global_40718[iParam0] == 2 && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&Global_40255[iParam0 / 32], iParam0 % 32);
		Global_40264[iParam0] = 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("STARTUP_POSITIONING")) == 0)
	{
		if (IS_BIT_SET(Global_40491[iParam0 / 32], iParam0 % 32))
		{
			if (fVar10 < 25f)
			{
				if (Global_102506.f_415 == 0)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						Global_102506.f_415 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			
				iVar11 = Global_102506.f_415;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(uVar0);
			
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&Global_40255[iParam0 / 32], iParam0 % 32);
					Global_40718[iParam0] = 3;
					MISC::SET_BIT(&Global_40246[iParam0 / 32], iParam0 % 32);
				}
			}
		
			MISC::CLEAR_BIT(&Global_40491[iParam0 / 32], iParam0 % 32);
		}
	}

	if (IS_BIT_SET(Global_40255[iParam0 / 32], iParam0 % 32))
	{
		iVar9 = Global_40718[iParam0];
	}
	else if (IS_BIT_SET(uVar0.f_4, 0))
	{
		if (Global_114931.f_9092)
			iVar9 = func_111(iParam0);
		else
			iVar9 = 0;
	
		if (func_11(14))
			iVar9 = 0;
	}
	else if (IS_BIT_SET(uVar0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("AMBIENT_SOLOMON")) == 0)
	{
		if (func_110())
			iVar9 = 0;
		else
			iVar9 = 1;
	}
	else
	{
		iVar9 = Global_114931.f_7268[iParam0];
	}

	if (Global_40945[iParam0] != iVar9)
		bVar7 = true;

	if (IS_BIT_SET(Global_40246[iParam0 / 32], iParam0 % 32))
		if (!IS_BIT_SET(Global_40255[iParam0 / 32], iParam0 % 32) || Global_40264[iParam0] == 0 && Global_40718[iParam0] != 2)
			bVar7 = true;

	if (bVar7)
	{
		if (!Global_40245)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar0.f_5))
				OBJECT::ADD_DOOR_TO_SYSTEM(uVar0.f_5, uVar0.f_3, uVar0, 0, 0, 0, 0);
		
			switch (iVar9)
			{
				case 1:
					if (IS_BIT_SET(uVar0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(uVar0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(uVar0);
					
						if (iVar14 != iVar15 || iVar14 == 0)
							bVar13 = true;
					}
				
					if (bVar13)
					{
						if (uVar0.f_6 != 0f)
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 0);
					
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
			
				case 4:
					if (uVar0.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 0);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
			
				case 2:
					if (uVar0.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 0);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
			
				case 0:
					if (uVar0.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 1);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
			
				case 3:
					if (uVar0.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 0);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
			
				case 5:
					if (uVar0.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 0);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
			
				case 6:
					if (uVar0.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 0);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
			
				default:
					if (uVar0.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(uVar0.f_5, uVar0.f_6, 0, 0);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
			}
		}
	
		if (bVar8)
		{
			MISC::CLEAR_BIT(&Global_40246[iParam0 / 32], iParam0 % 32);
			Global_40945[iParam0] = iVar9;
		}
	}

	if (IS_BIT_SET(Global_40255[iParam0 / 32], iParam0 % 32) && Global_40718[iParam0] != 2)
	{
		MISC::SET_BIT(&Global_40246[iParam0 / 32], iParam0 % 32);
		func_108(iParam0);
	
		if (Global_40264[iParam0] < 2)
			Global_40264[iParam0] = Global_40264[iParam0] + 1;
	}
}

bool func_110() // Position - 0x565F
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return false;

	switch (func_9())
	{
		case 0:
			if (Global_114931.f_9092.f_99.f_58[65])
				return true;
			break;
	
		case 1:
			if (Global_114931.f_9092.f_99.f_58[66])
				return true;
			break;
	
		case 2:
			if (Global_114931.f_9092.f_99.f_58[65])
				return true;
			break;
	}

	return false;
}

int func_111(int iParam0) // Position - 0x56DE
{
	int iVar0;

	iVar0 = func_9();

	if (func_112(iParam0))
		return 1;

	if (iParam0 == 49)
	{
		if (iVar0 == 1)
			if (IS_BIT_SET(Global_114931.f_7236[5], 0) || IS_BIT_SET(Global_114931.f_7236[6], 0))
				return 0;
	
		if (func_12(iVar0))
			if (IS_BIT_SET(Global_97456[5], iVar0))
				return 0;
	}

	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
				if (IS_BIT_SET(Global_114931.f_7236[0], 0))
					return 0;
		
			if (func_12(iVar0))
				if (IS_BIT_SET(Global_97456[0], iVar0))
					if (iParam0 != 40)
						return 0;
					else
						return 1;
			break;
	
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
				if (IS_BIT_SET(Global_114931.f_7236[5], 0))
					return 0;
		
			if (func_12(iVar0))
				if (IS_BIT_SET(Global_97456[5], iVar0))
					return 0;
			break;
	
		case 50:
			if (iVar0 == 1)
				if (IS_BIT_SET(Global_114931.f_7236[6], 0))
					return 0;
		
			if (func_12(iVar0))
				if (IS_BIT_SET(Global_97456[6], iVar0))
					return 0;
			break;
	
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (IS_BIT_SET(Global_114931.f_7236[2], 0))
					return 0;
			
				if (func_12(iVar0))
					if (IS_BIT_SET(Global_97456[2], iVar0))
						return 0;
			}
			else if (iVar0 == 0)
			{
				if (IS_BIT_SET(Global_114931.f_7236[1], 0))
					return 0;
			
				if (func_12(iVar0))
					if (IS_BIT_SET(Global_97456[1], iVar0))
						return 0;
			}
			break;
	
		case 53:
			if (iVar0 == 2)
				if (IS_BIT_SET(Global_114931.f_7236[3], 0))
					return 0;
		
			if (func_12(iVar0))
				if (IS_BIT_SET(Global_97456[3], iVar0))
					return 0;
			break;
	
		default:
			return 0;
	}

	return 1;
}

bool func_112(int iParam0) // Position - 0x5906
{
	int iVar0;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_113(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
			
				switch (iVar0)
				{
					case joaat("UTILLITRUCK"):
					case joaat("MONSTER"):
						return true;
				}
			}
		}
	}

	return false;
}

var func_113(var uParam0) // Position - 0x5972
{
	return uParam0;
}

void func_114(int iParam0, var uParam1) // Position - 0x597C
{
	int iVar0;
	int iVar1;

	if (!IS_BIT_SET(uParam1->f_4, 2))
		return;

	iVar0 = func_42();
	iVar1 = func_27(iVar0);

	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_115(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_114931.f_7268[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_115(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_114931.f_7268[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 141:
		case 142:
			if (func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("JEWELRY_HEIST")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("JEWELRY_SETUP1")) == 0 && !Global_114931.f_9092.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_114931.f_7268[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_114931.f_9092.f_99.f_58[4])
				{
					Global_114931.f_7268[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else if (Global_114931.f_9092.f_99.f_58[4])
			{
				Global_114931.f_7268[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("JEWELRY_HEIST")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("JEWELRY_SETUP1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_114931.f_7268[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_114931.f_7268[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
					}
				}
			}
			break;
	
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_115(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_114931.f_7268[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 147:
		case 148:
			if (!func_115(iParam0))
			{
				Global_114931.f_7268[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			break;
	
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ASSASSIN_VALET")) == 0)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ASSASSIN_VALET")) > 0)
			{
				Global_114931.f_7268[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			break;
	
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[70 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("OMEGA2")) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 70:
		case 71:
		case 72:
			if (!func_115(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[26 /*34*/].f_6) == 0)
			{
				Global_114931.f_7268[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
	
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[43 /*34*/].f_6) == 0)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 190:
		case 191:
			if (!func_115(iParam0))
			{
				Global_114931.f_7268[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			break;
	
		case 193:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[93 /*34*/].f_6) > 0)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 198:
			if (!func_115(iParam0))
			{
				Global_114931.f_7268[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			break;
	
		case 80:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[10 /*34*/].f_6) == 0)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 205:
		case 206:
			if (!func_115(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[47 /*34*/].f_6) == 0)
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[70 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[48 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_93217[39 /*34*/].f_6) == 0)
			{
				if (!func_115(iParam0))
				{
					Global_114931.f_7268[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
				}
			}
			break;
	
		case 216:
			if (!func_115(iParam0))
			{
				Global_114931.f_7268[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			break;
	
		case 217:
		case 218:
			if (!func_115(iParam0))
			{
				Global_114931.f_7268[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			break;
	
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_115(iParam0))
			{
				Global_114931.f_7268[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114931.f_7268[iParam0], 1, 1);
			}
			break;
	}
}

bool func_115(int iParam0) // Position - 0x6314
{
	var uVar0;
	int iVar7;

	uVar0 = { func_116(iParam0) };
	iVar7 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar0.f_5);
	return iVar7 == 1 || iVar7 == 4 || iVar7 == 2;
}

struct<7> func_116(int iParam0) // Position - 0x6348
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			uVar0.f_3 = joaat("V_ILEV_BS_DOOR");
			uVar0 = { 133f, -1711f, 29f };
			uVar0.f_5 = 1804701345;
			break;
	
		case 1:
			uVar0.f_3 = joaat("V_ILEV_BS_DOOR");
			uVar0 = { -1287.8568f, -1115.7416f, 7.1401f };
			uVar0.f_5 = 1403601067;
			break;
	
		case 2:
			uVar0.f_3 = joaat("V_ILEV_BS_DOOR");
			uVar0 = { 1932.9518f, 3725.1536f, 32.9944f };
			uVar0.f_5 = -2031139496;
			break;
	
		case 3:
			uVar0.f_3 = joaat("V_ILEV_BS_DOOR");
			uVar0 = { 1207.8732f, -470.063f, 66.358f };
			uVar0.f_5 = 1796834809;
			break;
	
		case 4:
			uVar0.f_3 = joaat("V_ILEV_BS_DOOR");
			uVar0 = { -29.8692f, -148.1571f, 57.2265f };
			uVar0.f_5 = 96153298;
			break;
	
		case 5:
			uVar0.f_3 = joaat("V_ILEV_BS_DOOR");
			uVar0 = { -280.7851f, 6232.7817f, 31.8455f };
			uVar0.f_5 = -281080954;
			break;
	
		case 6:
			uVar0.f_3 = joaat("V_ILEV_HD_DOOR_L");
			uVar0 = { -824f, -187f, 38f };
			uVar0 = { -823.2001f, -187.0831f, 37.819f };
			uVar0.f_5 = 183249434;
			break;
	
		case 7:
			uVar0.f_3 = joaat("V_ILEV_HD_DOOR_R");
			uVar0 = { -823f, -188f, 38f };
			uVar0 = { -822.4442f, -188.3924f, 37.819f };
			uVar0.f_5 = 758345384;
			break;
	
		case 8:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01");
			uVar0 = { 82.3186f, -1392.7518f, 29.5261f };
			uVar0.f_5 = -1069262641;
			break;
	
		case 9:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			uVar0 = { 82.3186f, -1390.4758f, 29.5261f };
			uVar0.f_5 = 1968521986;
			break;
	
		case 10:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01");
			uVar0 = { 1686.9832f, 4821.7407f, 42.2131f };
			uVar0.f_5 = -2143706301;
			break;
	
		case 11:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			uVar0 = { 1687.2817f, 4819.4844f, 42.2131f };
			uVar0.f_5 = -1403421822;
			break;
	
		case 12:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01");
			uVar0 = { 418.637f, -806.457f, 29.6396f };
			uVar0.f_5 = -1950137670;
			break;
	
		case 13:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			uVar0 = { 418.637f, -808.733f, 29.6396f };
			uVar0.f_5 = 1226259807;
			break;
	
		case 14:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01");
			uVar0 = { -1096.6613f, 2705.4458f, 19.2578f };
			uVar0.f_5 = 1090833557;
			break;
	
		case 15:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			uVar0 = { -1094.9652f, 2706.9636f, 19.2578f };
			uVar0.f_5 = 897332612;
			break;
	
		case 16:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01");
			uVar0 = { 1196.825f, 2703.221f, 38.3726f };
			uVar0.f_5 = 1095946640;
			break;
	
		case 17:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			uVar0 = { 1199.101f, 2703.221f, 38.3726f };
			uVar0.f_5 = 801975945;
			break;
	
		case 18:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01");
			uVar0 = { -818.7642f, -1079.5444f, 11.4781f };
			uVar0.f_5 = -167996547;
			break;
	
		case 19:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			uVar0 = { -816.7932f, -1078.4065f, 11.4781f };
			uVar0.f_5 = -1935818563;
			break;
	
		case 20:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01");
			uVar0 = { -0.0564f, 6517.461f, 32.0278f };
			uVar0.f_5 = 1891185217;
			break;
	
		case 21:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR01_R");
			uVar0 = { -1.7253f, 6515.9136f, 32.0278f };
			uVar0.f_5 = 1236591681;
			break;
	
		case 22:
			uVar0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			uVar0 = { -1201.4349f, -776.8566f, 17.9918f };
			uVar0.f_5 = 1980808685;
			break;
	
		case 23:
			uVar0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			uVar0 = { 617.2458f, 2751.0222f, 42.7578f };
			uVar0.f_5 = 1352749757;
			break;
	
		case 24:
			uVar0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			uVar0 = { 127.8201f, -211.8274f, 55.2275f };
			uVar0.f_5 = -566554453;
			break;
	
		case 25:
			uVar0.f_3 = joaat("V_ILEV_CLOTHMIDDOOR");
			uVar0 = { -3167.75f, 1055.5358f, 21.5329f };
			uVar0.f_5 = 1284749450;
			break;
	
		case 26:
			uVar0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			uVar0 = { -716.6754f, -155.42f, 37.6749f };
			uVar0.f_5 = 261851994;
			break;
	
		case 27:
			uVar0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			uVar0 = { -715.6154f, -157.2561f, 37.6749f };
			uVar0.f_5 = 217646625;
			break;
	
		case 28:
			uVar0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			uVar0 = { -157.0924f, -306.4413f, 39.994f };
			uVar0.f_5 = 1801139578;
			break;
	
		case 29:
			uVar0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			uVar0 = { -156.4022f, -304.4366f, 39.994f };
			uVar0.f_5 = -2123275866;
			break;
	
		case 30:
			uVar0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			uVar0 = { -1454.7819f, -231.7927f, 50.0565f };
			uVar0.f_5 = 1312689981;
			break;
	
		case 31:
			uVar0.f_3 = joaat("V_ILEV_CH_GLASSDOOR");
			uVar0 = { -1456.2007f, -233.3682f, 50.0565f };
			uVar0.f_5 = -595055661;
			break;
	
		case 32:
			uVar0.f_3 = joaat("V_ILEV_TA_DOOR");
			uVar0 = { 321.81f, 178.36f, 103.68f };
			uVar0.f_5 = -265260897;
			break;
	
		case 33:
			uVar0.f_3 = joaat("V_ILEV_ML_DOOR1");
			uVar0 = { 1859.89f, 3749.79f, 33.18f };
			uVar0.f_5 = -1284867488;
			break;
	
		case 34:
			uVar0.f_3 = joaat("V_ILEV_ML_DOOR1");
			uVar0 = { -289.1752f, 6199.1123f, 31.637f };
			uVar0.f_5 = 302307081;
			break;
	
		case 35:
			uVar0.f_3 = joaat("V_ILEV_TA_DOOR");
			uVar0 = { -1155.4541f, -1424.0079f, 5.0461f };
			uVar0.f_5 = -681886015;
			break;
	
		case 36:
			uVar0.f_3 = joaat("V_ILEV_TA_DOOR");
			uVar0 = { 1321.2856f, -1650.5967f, 52.3663f };
			uVar0.f_5 = -2086556500;
			break;
	
		case 37:
			uVar0.f_3 = joaat("V_ILEV_TA_DOOR");
			uVar0 = { -3167.7888f, 1074.7668f, 20.9209f };
			uVar0.f_5 = -1496386696;
			break;
	
		case 38:
			uVar0.f_3 = joaat("V_ILEV_MM_DOORM_L");
			uVar0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -2097039789;
			break;
	
		case 39:
			uVar0.f_3 = joaat("V_ILEV_MM_DOORM_R");
			uVar0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -2127416656;
			break;
	
		case 40:
			uVar0.f_3 = joaat("PROP_LD_GARAGED_01");
			uVar0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -1986583853;
			uVar0.f_6 = 6.5f;
			break;
	
		case 41:
			uVar0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			uVar0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = 776026812;
			break;
	
		case 42:
			uVar0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			uVar0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = 698422331;
			break;
	
		case 43:
			uVar0.f_3 = joaat("PROP_BH1_48_BACKDOOR_L");
			uVar0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = 535076355;
			break;
	
		case 44:
			uVar0.f_3 = joaat("PROP_BH1_48_BACKDOOR_R");
			uVar0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = 474675599;
			break;
	
		case 45:
			uVar0.f_3 = joaat("PROP_BH1_48_GATE_1");
			uVar0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -1978427516;
			break;
	
		case 46:
			uVar0.f_3 = joaat("V_ILEV_MM_WINDOWWC");
			uVar0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -1700375831;
			break;
	
		case 47:
			uVar0.f_3 = joaat("V_ILEV_FA_FRONTDOOR");
			uVar0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = 613961892;
			break;
	
		case 48:
			uVar0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			uVar0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -272570634;
			break;
	
		case 49:
			uVar0.f_3 = joaat("PROP_SC1_21_G_DOOR_01");
			uVar0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -1040675994;
			break;
	
		case 50:
			uVar0.f_3 = joaat("V_ILEV_FH_FRONTDOOR");
			uVar0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = 1201219326;
			break;
	
		case 51:
			uVar0.f_3 = joaat("V_ILEV_TREVTRAILDR");
			uVar0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = joaat("DOORHASH_T_TRAILER_CS");
			break;
	
		case 52:
			uVar0.f_3 = joaat("PROP_CS4_10_TR_GD_01");
			uVar0 = { 1972.7874f, 3824.5537f, 32.5831f };
			uVar0.f_5 = 1113956670;
			uVar0.f_6 = 12f;
			break;
	
		case 53:
			uVar0.f_3 = joaat("V_ILEV_TREV_DOORFRONT");
			uVar0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(uVar0.f_4), 0);
			uVar0.f_5 = -1361617046;
			break;
	}

	switch (iParam0)
	{
		case 54:
			uVar0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			uVar0 = { -1145.9f, -1991.14f, 14.18f };
			uVar0.f_5 = -1871080926;
			uVar0.f_6 = 25f;
			break;
	
		case 55:
			uVar0.f_3 = joaat("PROP_ID2_11_GDOOR");
			uVar0 = { 723.12f, -1088.83f, 23.28f };
			uVar0.f_5 = 1168079979;
			uVar0.f_6 = 25f;
			break;
	
		case 56:
			uVar0.f_3 = joaat("PROP_COM_LS_DOOR_01");
			uVar0 = { -356.09f, -134.77f, 40.01f };
			uVar0.f_5 = 1206354175;
			uVar0.f_6 = 25f;
			break;
	
		case 57:
			uVar0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			uVar0 = { 108.8502f, 6617.8765f, 32.673f };
			uVar0.f_5 = -1038180727;
			uVar0.f_6 = 25f;
			break;
	
		case 58:
			uVar0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			uVar0 = { 114.3206f, 6623.226f, 32.7161f };
			uVar0.f_5 = 1200466273;
			uVar0.f_6 = 25f;
			break;
	
		case 59:
			uVar0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			uVar0 = { 1182.3054f, 2645.2422f, 38.807f };
			uVar0.f_5 = 1391004277;
			uVar0.f_6 = 25f;
			break;
	
		case 60:
			uVar0.f_3 = joaat("V_ILEV_CARMOD3DOOR");
			uVar0 = { 1174.6542f, 2645.2422f, 38.6826f };
			uVar0.f_5 = -459199009;
			uVar0.f_6 = 25f;
			break;
	
		case 225:
			uVar0.f_3 = joaat("LR_PROP_SUPERMOD_DOOR_01");
			uVar0 = { -205.7007f, -1310.6917f, 30.2957f };
			uVar0.f_5 = -288764223;
			uVar0.f_6 = 25f;
			break;
	
		case 61:
			uVar0.f_3 = joaat("V_ILEV_JANITOR_FRONTDOOR");
			uVar0 = { -107.5401f, -9.0258f, 70.6696f };
			uVar0.f_5 = -252283844;
			break;
	
		case 62:
			uVar0.f_3 = joaat("V_ILEV_SS_DOOR8");
			uVar0 = { 717f, -975f, 25f };
			uVar0.f_5 = -826072862;
			break;
	
		case 63:
			uVar0.f_3 = joaat("V_ILEV_SS_DOOR7");
			uVar0 = { 719f, -975f, 25f };
			uVar0.f_5 = 763780711;
			break;
	
		case 64:
			uVar0.f_3 = joaat("V_ILEV_SS_DOOR02");
			uVar0 = { 709.9813f, -963.5311f, 30.5453f };
			uVar0.f_5 = -874851305;
			break;
	
		case 65:
			uVar0.f_3 = joaat("V_ILEV_SS_DOOR03");
			uVar0 = { 709.9894f, -960.6675f, 30.5453f };
			uVar0.f_5 = -1480820165;
			break;
	
		case 66:
			uVar0.f_3 = joaat("V_ILEV_STORE_DOOR");
			uVar0 = { 707.8046f, -962.4564f, 30.5453f };
			uVar0.f_5 = 949391213;
			break;
	
		case 67:
			uVar0.f_3 = joaat("V_ILEV_ML_DOOR1");
			uVar0 = { 1393f, 3599f, 35f };
			uVar0.f_5 = 212192855;
			break;
	
		case 68:
			uVar0.f_3 = joaat("V_ILEV_ML_DOOR1");
			uVar0 = { 1395f, 3600f, 35f };
			uVar0.f_5 = -126474752;
			break;
	
		case 69:
			uVar0.f_3 = joaat("V_ILEV_SS_DOOR04");
			uVar0 = { 1387f, 3614f, 39f };
			uVar0.f_5 = 1765671336;
			break;
	
		case 70:
			uVar0.f_3 = joaat("PROP_RON_DOOR_01");
			uVar0 = { 1083.5471f, -1975.4354f, 31.6222f };
			uVar0.f_5 = 792295685;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 71:
			uVar0.f_3 = joaat("PROP_RON_DOOR_01");
			uVar0 = { 1065.237f, -2006.0791f, 32.2329f };
			uVar0.f_5 = 563273144;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 72:
			uVar0.f_3 = joaat("PROP_RON_DOOR_01");
			uVar0 = { 1085.3069f, -2018.5613f, 41.6289f };
			uVar0.f_5 = -726993043;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 73:
			uVar0.f_3 = joaat("V_ILEV_BANK4DOOR02");
			uVar0 = { -111f, 6464f, 32f };
			uVar0.f_5 = 178228075;
			break;
	
		case 74:
			uVar0.f_3 = joaat("V_ILEV_BANK4DOOR01");
			uVar0 = { -110f, 6462f, 32f };
			uVar0.f_5 = 1852297978;
			break;
	
		case 75:
			uVar0.f_3 = joaat("V_ILEV_LESTER_DOORFRONT");
			uVar0 = { 1274f, -1721f, 55f };
			uVar0.f_5 = -565026078;
			break;
	
		case 76:
			uVar0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			uVar0 = { 1271.89f, -1707.57f, 53.79f };
			uVar0.f_5 = 1646172266;
			break;
	
		case 77:
			uVar0.f_3 = joaat("V_ILEV_LESTER_DOORVERANDA");
			uVar0 = { 1270.77f, -1708.1f, 53.75f };
			uVar0.f_5 = 204467342;
			break;
	
		case 78:
			uVar0.f_3 = joaat("V_ILEV_DEVIANTFRONTDOOR");
			uVar0 = { -127.5f, -1456.18f, 37.94f };
			uVar0.f_5 = 2047070410;
			break;
	
		case 79:
			uVar0.f_3 = joaat("PROP_COM_GAR_DOOR_01");
			uVar0 = { 483.56f, -1316.08f, 32.18f };
			uVar0.f_5 = 1417775309;
			break;
	
		case 80:
			uVar0.f_3 = joaat("V_ILEV_CS_DOOR");
			uVar0 = { 483f, -1312f, 29f };
			uVar0.f_5 = -106474626;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 81:
			uVar0.f_3 = joaat("PROP_STRIP_DOOR_01");
			uVar0 = { 128f, -1299f, 29f };
			uVar0.f_5 = 1840510598;
			break;
	
		case 82:
			uVar0.f_3 = joaat("PROP_MAGENTA_DOOR");
			uVar0 = { 96f, -1285f, 29f };
			uVar0.f_5 = 1382825971;
			break;
	
		case 83:
			uVar0.f_3 = joaat("PROP_MOTEL_DOOR_09");
			uVar0 = { 549f, -1773f, 34f };
			uVar0.f_5 = 232536303;
			break;
	
		case 84:
			uVar0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			uVar0 = { 974f, -1839f, 36f };
			uVar0.f_5 = 1267246609;
			MISC::SET_BIT(&(uVar0.f_4), 3);
			break;
	
		case 85:
			uVar0.f_3 = joaat("V_ILEV_GANGSAFEDOOR");
			uVar0 = { 977f, -105f, 75f };
			uVar0.f_5 = -1900237971;
			MISC::SET_BIT(&(uVar0.f_4), 3);
			break;
	
		case 86:
			uVar0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			uVar0 = { 1391f, 1163f, 114f };
			uVar0.f_5 = 2077901353;
			break;
	
		case 87:
			uVar0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			uVar0 = { 1391f, 1161f, 114f };
			uVar0.f_5 = -2102079126;
			break;
	
		case 88:
			uVar0.f_3 = joaat("PROP_CS6_03_DOOR_L");
			uVar0 = { 1396f, 1143f, 115f };
			uVar0.f_5 = -1905793212;
			break;
	
		case 89:
			uVar0.f_3 = joaat("PROP_CS6_03_DOOR_R");
			uVar0 = { 1396f, 1141f, 115f };
			uVar0.f_5 = -1797032505;
			break;
	
		case 90:
			uVar0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			uVar0 = { 1409f, 1146f, 114f };
			uVar0.f_5 = -62235167;
			break;
	
		case 91:
			uVar0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			uVar0 = { 1409f, 1148f, 114f };
			uVar0.f_5 = -1727188163;
			break;
	
		case 92:
			uVar0.f_3 = joaat("V_ILEV_RA_DOOR1_L");
			uVar0 = { 1408f, 1159f, 114f };
			uVar0.f_5 = -562748873;
			break;
	
		case 93:
			uVar0.f_3 = joaat("V_ILEV_RA_DOOR1_R");
			uVar0 = { 1408f, 1161f, 114f };
			uVar0.f_5 = 1976429759;
			break;
	
		case 94:
			uVar0.f_3 = joaat("PROP_GAR_DOOR_01");
			uVar0 = { -1067f, -1666f, 5f };
			uVar0.f_5 = 1341041543;
			break;
	
		case 95:
			uVar0.f_3 = joaat("PROP_GAR_DOOR_02");
			uVar0 = { -1065f, -1669f, 5f };
			uVar0.f_5 = -1631467220;
			break;
	
		case 96:
			uVar0.f_3 = joaat("PROP_MAP_DOOR_01");
			uVar0 = { -1104.66f, -1638.48f, 4.68f };
			uVar0.f_5 = -1788473129;
			break;
	
		case 97:
			uVar0.f_3 = joaat("V_ILEV_FIB_DOOR1");
			uVar0 = { -31.72f, -1101.85f, 26.57f };
			uVar0.f_5 = -1831288286;
			break;
	
		case 98:
			uVar0.f_3 = joaat("V_ILEV_TORT_DOOR");
			uVar0 = { 134.4f, -2204.1f, 7.52f };
			uVar0.f_5 = 963876966;
			break;
	
		case 99:
			uVar0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			uVar0 = { 3628f, 3747f, 28f };
			uVar0.f_5 = 1773088812;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 100:
			uVar0.f_3 = joaat("V_ILEV_BL_SHUTTER2");
			uVar0 = { 3621f, 3752f, 28f };
			uVar0.f_5 = -1332101528;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 101:
			uVar0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			uVar0 = { -608.73f, -1610.32f, 27.16f };
			uVar0.f_5 = -1811763714;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 102:
			uVar0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			uVar0 = { -611.32f, -1610.09f, 27.16f };
			uVar0.f_5 = 1608500665;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 103:
			uVar0.f_3 = joaat("V_ILEV_RC_DOOR3_L");
			uVar0 = { -592.94f, -1631.58f, 27.16f };
			uVar0.f_5 = -1456048340;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 104:
			uVar0.f_3 = joaat("V_ILEV_RC_DOOR3_R");
			uVar0 = { -592.71f, -1628.99f, 27.16f };
			uVar0.f_5 = 943854909;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 105:
			uVar0.f_3 = joaat("V_ILEV_SS_DOOR04");
			uVar0 = { 1991f, 3053f, 47f };
			uVar0.f_5 = -89065356;
			break;
	
		case 106:
			uVar0.f_3 = joaat("V_ILEV_FH_DOOR4");
			uVar0 = { 1988.3529f, 3054.411f, 47.3204f };
			uVar0.f_5 = -925491840;
			break;
	
		case 107:
			uVar0.f_3 = joaat("PROP_EPSILON_DOOR_L");
			uVar0 = { -700.17f, 47.31f, 44.3f };
			uVar0.f_5 = 1999872275;
			break;
	
		case 108:
			uVar0.f_3 = joaat("PROP_EPSILON_DOOR_R");
			uVar0 = { -697.94f, 48.35f, 44.3f };
			uVar0.f_5 = 1999872275;
			break;
	
		case 109:
			uVar0.f_3 = joaat("V_ILEV_EPSSTOREDOOR");
			uVar0 = { 241.3574f, 361.0488f, 105.8963f };
			uVar0.f_5 = 1538555582;
			break;
	
		case 110:
			uVar0.f_3 = joaat("PROP_CH2_09C_GARAGE_DOOR");
			uVar0 = { -689.11f, 506.97f, 110.64f };
			uVar0.f_5 = -961994186;
			break;
	
		case 111:
			uVar0.f_3 = joaat("V_ILEV_DOOR_ORANGESOLID");
			uVar0 = { -1055.96f, -236.43f, 44.17f };
			uVar0.f_5 = -1772472848;
			break;
	
		case 112:
			uVar0.f_3 = joaat("PROP_MAGENTA_DOOR");
			uVar0 = { 29f, 3661f, 41f };
			uVar0.f_5 = -46374650;
			break;
	
		case 113:
			uVar0.f_3 = joaat("PROP_CS4_05_TDOOR");
			uVar0 = { 32f, 3667f, 41f };
			uVar0.f_5 = -358302761;
			break;
	
		case 114:
			uVar0.f_3 = joaat("V_ILEV_HOUSEDOOR1");
			uVar0 = { 87f, -1959f, 21f };
			uVar0.f_5 = -1237936041;
			break;
	
		case 115:
			uVar0.f_3 = joaat("V_ILEV_FH_FRNTDOOR");
			uVar0 = { 0f, -1823f, 30f };
			uVar0.f_5 = 1487374207;
			break;
	
		case 116:
			uVar0.f_3 = joaat("P_CUT_DOOR_03");
			uVar0 = { 23.34f, -1897.6f, 23.05f };
			uVar0.f_5 = -199126299;
			break;
	
		case 117:
			uVar0.f_3 = joaat("P_CUT_DOOR_02");
			uVar0 = { 524.2f, 3081.14f, 41.16f };
			uVar0.f_5 = -897071863;
			break;
	
		case 118:
			uVar0.f_3 = joaat("V_ILEV_PO_DOOR");
			uVar0 = { -1910.58f, -576.01f, 19.25f };
			uVar0.f_5 = -864465775;
			break;
	
		case 119:
			uVar0.f_3 = joaat("PROP_SS1_10_DOOR_L");
			uVar0 = { -720.39f, 256.86f, 80.29f };
			uVar0.f_5 = -208439480;
			break;
	
		case 120:
			uVar0.f_3 = joaat("PROP_SS1_10_DOOR_R");
			uVar0 = { -718.42f, 257.79f, 80.29f };
			uVar0.f_5 = -1001088805;
			break;
	
		case 121:
			uVar0.f_3 = joaat("V_ILEV_FIBL_DOOR02");
			uVar0 = { 106.38f, -742.7f, 46.18f };
			uVar0.f_5 = 756894459;
			break;
	
		case 122:
			uVar0.f_3 = joaat("V_ILEV_FIBL_DOOR01");
			uVar0 = { 105.76f, -746.65f, 46.18f };
			uVar0.f_5 = 476981677;
			break;
	
		case 123:
			uVar0.f_3 = joaat("V_ILEV_CT_DOOR01");
			uVar0 = { -2343.53f, 3265.37f, 32.96f };
			uVar0.f_5 = 2081647379;
			break;
	
		case 124:
			uVar0.f_3 = joaat("V_ILEV_CT_DOOR01");
			uVar0 = { -2342.23f, 3267.62f, 32.96f };
			uVar0.f_5 = 2081647379;
			break;
	
		case 125:
			uVar0.f_3 = joaat("AP1_02_DOOR_L");
			uVar0 = { -1041.9326f, -2748.1675f, 22.0308f };
			uVar0.f_5 = 169965357;
			break;
	
		case 126:
			uVar0.f_3 = joaat("AP1_02_DOOR_R");
			uVar0 = { -1044.8408f, -2746.4888f, 22.0308f };
			uVar0.f_5 = 311232516;
			break;
	
		case 128:
			uVar0.f_3 = joaat("V_ILEV_FB_DOORSHORTL");
			uVar0 = { -1045.1199f, -232.004f, 39.4379f };
			uVar0.f_5 = -1563127729;
			break;
	
		case 129:
			uVar0.f_3 = joaat("V_ILEV_FB_DOORSHORTR");
			uVar0 = { -1046.5161f, -229.3581f, 39.4379f };
			uVar0.f_5 = 759145763;
			break;
	
		case 130:
			uVar0.f_3 = joaat("V_ILEV_FB_DOOR01");
			uVar0 = { -1083.6201f, -260.4167f, 38.1867f };
			uVar0.f_5 = -84399179;
			break;
	
		case 131:
			uVar0.f_3 = joaat("V_ILEV_FB_DOOR02");
			uVar0 = { -1080.9744f, -259.0204f, 38.1867f };
			uVar0.f_5 = -461898059;
			break;
	
		case 127:
			uVar0.f_3 = joaat("V_ILEV_GTDOOR");
			uVar0 = { -1042.57f, -240.6f, 38.11f };
			uVar0.f_5 = 1259065971;
			break;
	
		case 132:
			uVar0.f_3 = joaat("PROP_DAMDOOR_01");
			uVar0 = { 1385.2578f, -2079.9495f, 52.7638f };
			uVar0.f_5 = -884051216;
			break;
	
		case 133:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			uVar0 = { 1656.57f, 4849.66f, 42.35f };
			uVar0.f_5 = 243782214;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 134:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			uVar0 = { 1656.25f, 4852.24f, 42.35f };
			uVar0.f_5 = 714115627;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 135:
			uVar0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			uVar0 = { -1051.4019f, -474.6847f, 36.6199f };
			uVar0.f_5 = 1668106976;
			MISC::SET_BIT(&(uVar0.f_4), 1);
			break;
	
		case 136:
			uVar0.f_3 = joaat("PROP_SEC_BARRIER_LD_01A");
			uVar0 = { -1049.2853f, -476.6376f, 36.7584f };
			uVar0.f_5 = 1382347031;
			MISC::SET_BIT(&(uVar0.f_4), 1);
			break;
	
		case 137:
			uVar0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			uVar0 = { -1210.9567f, -580.8765f, 27.2373f };
			uVar0.f_5 = -966790948;
			MISC::SET_BIT(&(uVar0.f_4), 1);
			break;
	
		case 138:
			uVar0.f_3 = joaat("PROP_SEC_BARRIER_LD_02A");
			uVar0 = { -1212.4453f, -578.4401f, 27.2373f };
			uVar0.f_5 = -2068750132;
			MISC::SET_BIT(&(uVar0.f_4), 1);
			break;
	
		case 139:
			uVar0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			uVar0 = { -565.1712f, 276.6259f, 83.2863f };
			uVar0.f_5 = -1716533184;
			break;
	
		case 140:
			uVar0.f_3 = joaat("V_ILEV_ROC_DOOR4");
			uVar0 = { -561.2863f, 293.5043f, 87.7771f };
			uVar0.f_5 = 2146505927;
			break;
	
		case 141:
			uVar0.f_3 = joaat("P_JEWEL_DOOR_L");
			uVar0 = { -631.96f, -236.33f, 38.21f };
			uVar0.f_5 = 1874948872;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 142:
			uVar0.f_3 = joaat("P_JEWEL_DOOR_R1");
			uVar0 = { -630.43f, -238.44f, 38.21f };
			uVar0.f_5 = -1965020851;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 145:
			uVar0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			uVar0 = { 231.62f, 216.23f, 106.4f };
			uVar0.f_5 = 1951546856;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 146:
			uVar0.f_3 = joaat("PROP_LD_BANKDOORS_01");
			uVar0 = { 232.72f, 213.88f, 106.4f };
			uVar0.f_5 = -431382051;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 143:
			uVar0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			uVar0 = { 258.32f, 203.84f, 106.43f };
			uVar0.f_5 = -293975210;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 144:
			uVar0.f_3 = joaat("HEI_PROP_HEI_BANKDOOR_NEW");
			uVar0 = { 260.76f, 202.95f, 106.43f };
			uVar0.f_5 = -785215289;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 148:
			uVar0.f_3 = joaat("HEI_V_ILEV_BK_GATE_PRIS");
			uVar0 = { 256.31f, 220.66f, 106.43f };
			uVar0.f_5 = -366143778;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 147:
			uVar0.f_3 = joaat("V_ILEV_BK_DOOR");
			uVar0 = { 266.36f, 217.57f, 110.43f };
			uVar0.f_5 = 440819155;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 149:
			uVar0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			uVar0 = { -442.66f, 6015.2217f, 31.8663f };
			uVar0.f_5 = -588495243;
			break;
	
		case 150:
			uVar0.f_3 = joaat("V_ILEV_SHRF2DOOR");
			uVar0 = { -444.4985f, 6017.06f, 31.8663f };
			uVar0.f_5 = 1815504139;
			break;
	
		case 151:
			uVar0.f_3 = joaat("V_ILEV_SHRFDOOR");
			uVar0 = { 1855.6848f, 3683.9302f, 34.5928f };
			uVar0.f_5 = 1344911780;
			break;
	
		case 152:
			uVar0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			uVar0 = { -1223.35f, -172.41f, 39.98f };
			uVar0.f_5 = -320891223;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 153:
			uVar0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			uVar0 = { -1220.93f, -173.68f, 39.98f };
			uVar0.f_5 = 1511747875;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 154:
			uVar0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			uVar0 = { -1211.99f, -190.57f, 39.98f };
			uVar0.f_5 = -1517722103;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 155:
			uVar0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			uVar0 = { -1213.26f, -192.98f, 39.98f };
			uVar0.f_5 = -1093199712;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 156:
			uVar0.f_3 = joaat("PROP_BHHOTEL_DOOR_L");
			uVar0 = { -1217.77f, -201.54f, 39.98f };
			uVar0.f_5 = 1902048492;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 157:
			uVar0.f_3 = joaat("PROP_BHHOTEL_DOOR_R");
			uVar0 = { -1219.04f, -203.95f, 39.98f };
			uVar0.f_5 = -444768985;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 158:
			uVar0.f_3 = joaat("PROP_CH3_04_DOOR_01L");
			uVar0 = { 2514.32f, -317.34f, 93.32f };
			uVar0.f_5 = 404057594;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 159:
			uVar0.f_3 = joaat("PROP_CH3_04_DOOR_01R");
			uVar0 = { 2512.42f, -319.26f, 93.32f };
			uVar0.f_5 = -1417472813;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 160:
			uVar0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_L");
			uVar0 = { 2333.23f, 2574.97f, 47.03f };
			uVar0.f_5 = -1376084479;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 161:
			uVar0.f_3 = joaat("PROP_CH3_01_TRLRDOOR_R");
			uVar0 = { 2329.65f, 2576.64f, 47.03f };
			uVar0.f_5 = 457472151;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 162:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { 16.1279f, -1114.6055f, 29.9469f };
			uVar0.f_5 = 1071759151;
			break;
	
		case 163:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { 18.572f, -1115.4951f, 29.9469f };
			uVar0.f_5 = -2119023917;
			break;
	
		case 165:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { 1698.1763f, 3751.5056f, 34.8553f };
			uVar0.f_5 = -1488490473;
			break;
	
		case 166:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { 1699.9371f, 3753.4202f, 34.8553f };
			uVar0.f_5 = -511187813;
			break;
	
		case 167:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { 244.7274f, -44.0791f, 70.91f };
			uVar0.f_5 = -248569395;
			break;
	
		case 168:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { 243.8379f, -46.5232f, 70.91f };
			uVar0.f_5 = 989443413;
			break;
	
		case 169:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { 845.3624f, -1024.5391f, 28.3448f };
			uVar0.f_5 = 2022251829;
			break;
	
		case 170:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { 842.7684f, -1024.5391f, 23.3448f };
			uVar0.f_5 = 649820567;
			break;
	
		case 171:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { -326.1122f, 6075.2695f, 31.6047f };
			uVar0.f_5 = 537455378;
			break;
	
		case 172:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { -324.273f, 6077.109f, 31.6047f };
			uVar0.f_5 = 1121431731;
			break;
	
		case 173:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { -665.2424f, -944.3256f, 21.9792f };
			uVar0.f_5 = -1437380438;
			break;
	
		case 174:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { -662.6414f, -944.3256f, 21.9792f };
			uVar0.f_5 = -946336965;
			break;
	
		case 175:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { -1313.8259f, -389.1259f, 36.8457f };
			uVar0.f_5 = 1893144650;
			break;
	
		case 176:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { -1314.465f, -391.6472f, 36.8457f };
			uVar0.f_5 = 435841678;
			break;
	
		case 177:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { -1114.0089f, 2689.77f, 18.7041f };
			uVar0.f_5 = 948508314;
			break;
	
		case 178:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { -1112.0708f, 2691.5046f, 18.7041f };
			uVar0.f_5 = -1796714665;
			break;
	
		case 179:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { -3164.8452f, 1081.3917f, 20.9887f };
			uVar0.f_5 = -1155247245;
			break;
	
		case 180:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { -3163.8115f, 1083.7784f, 20.9887f };
			uVar0.f_5 = 782482084;
			break;
	
		case 181:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { 2570.9045f, 303.3556f, 108.8848f };
			uVar0.f_5 = -1194470801;
			break;
	
		case 182:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { 2568.3037f, 303.3556f, 108.8848f };
			uVar0.f_5 = -2129698061;
			break;
	
		case 183:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR04");
			uVar0 = { 813.1779f, -2148.2695f, 29.7689f };
			uVar0.f_5 = 1071759151;
			break;
	
		case 184:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR03");
			uVar0 = { 810.5769f, -2148.2695f, 29.7689f };
			uVar0.f_5 = -2119023917;
			break;
	
		case 164:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR01");
			uVar0 = { 6.8179f, -1098.2095f, 29.9469f };
			uVar0.f_5 = 1487704245;
			MISC::SET_BIT(&(uVar0.f_4), 3);
			break;
	
		case 185:
			uVar0.f_3 = joaat("V_ILEV_GC_DOOR01");
			uVar0 = { 827.5342f, -2160.4927f, 29.7688f };
			uVar0.f_5 = 1529812051;
			MISC::SET_BIT(&(uVar0.f_4), 3);
			break;
	
		case 186:
			uVar0.f_3 = joaat("PROP_LRGGATE_01C_L");
			uVar0 = { -1107.01f, 289.38f, 64.76f };
			uVar0.f_5 = 904342475;
			break;
	
		case 187:
			uVar0.f_3 = joaat("PROP_LRGGATE_01C_R");
			uVar0 = { -1101.62f, 290.36f, 64.76f };
			uVar0.f_5 = -795418380;
			break;
	
		case 188:
			uVar0.f_3 = joaat("PROP_LRGGATE_01C_L");
			uVar0 = { -1138.64f, 300.82f, 67.18f };
			uVar0.f_5 = -1502457334;
			break;
	
		case 189:
			uVar0.f_3 = joaat("PROP_LRGGATE_01C_R");
			uVar0 = { -1137.05f, 295.59f, 67.18f };
			uVar0.f_5 = -1994188940;
			break;
	
		case 190:
			uVar0.f_3 = joaat("V_ILEV_BL_DOOREL_L");
			uVar0 = { -2053.16f, 3239.49f, 30.5f };
			uVar0.f_5 = -621770121;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 191:
			uVar0.f_3 = joaat("V_ILEV_BL_DOOREL_R");
			uVar0 = { -2054.39f, 3237.23f, 30.5f };
			uVar0.f_5 = 1018580481;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 192:
			uVar0.f_3 = joaat("V_ILEV_CBANKCOUNTDOOR01");
			uVar0 = { -108.91f, 6469.11f, 31.91f };
			uVar0.f_5 = 421926217;
			break;
	
		case 193:
			uVar0.f_3 = joaat("PROP_FNCLINK_03GATE5");
			uVar0 = { -182.91f, 6168.37f, 32.14f };
			uVar0.f_5 = -1331552374;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	}

	switch (iParam0)
	{
		case 196:
			uVar0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			uVar0 = { -59.89f, -1092.95f, 26.88f };
			uVar0.f_5 = -293141277;
			break;
	
		case 197:
			uVar0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			uVar0 = { -60.55f, -1094.75f, 26.89f };
			uVar0.f_5 = 506750037;
			break;
	
		case 194:
			uVar0.f_3 = joaat("V_ILEV_CSR_DOOR_L");
			uVar0 = { -39.13f, -1108.22f, 26.72f };
			uVar0.f_5 = 1496005418;
			break;
	
		case 195:
			uVar0.f_3 = joaat("V_ILEV_CSR_DOOR_R");
			uVar0 = { -37.33f, -1108.87f, 26.72f };
			uVar0.f_5 = -1863079210;
			break;
	
		case 198:
			uVar0.f_3 = joaat("PROP_RON_DOOR_01");
			uVar0 = { 1943.73f, 3803.63f, 32.31f };
			uVar0.f_5 = -2018911784;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 199:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			uVar0 = { 316.39f, -276.49f, 54.52f };
			uVar0.f_5 = -93934272;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 200:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			uVar0 = { 313.96f, -275.6f, 54.52f };
			uVar0.f_5 = 667682830;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 201:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			uVar0 = { -2965.71f, 484.22f, 16.05f };
			uVar0.f_5 = 1876735830;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 202:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			uVar0 = { -2965.82f, 481.63f, 16.05f };
			uVar0.f_5 = -2112857171;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 205:
			uVar0.f_3 = joaat("V_ILEV_ABBMAINDOOR");
			uVar0 = { 962.1f, -2183.83f, 31.06f };
			uVar0.f_5 = 2046930518;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 206:
			uVar0.f_3 = joaat("V_ILEV_ABBMAINDOOR2");
			uVar0 = { 961.79f, -2187.08f, 31.06f };
			uVar0.f_5 = 1208502884;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 207:
			uVar0.f_3 = joaat("PROP_CH3_04_DOOR_02");
			uVar0 = { 2508.43f, -336.63f, 115.76f };
			uVar0.f_5 = 1986432421;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 208:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			uVar0 = { -2255.19f, 322.26f, 184.93f };
			uVar0.f_5 = -722798986;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 209:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			uVar0 = { -2254.06f, 319.7f, 184.93f };
			uVar0.f_5 = 204301578;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 210:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			uVar0 = { -2301.13f, 336.91f, 184.93f };
			uVar0.f_5 = -320140460;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 211:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			uVar0 = { -2298.57f, 338.05f, 184.93f };
			uVar0.f_5 = 65222916;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 212:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			uVar0 = { -2222.32f, 305.86f, 184.93f };
			uVar0.f_5 = -920027322;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 213:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			uVar0 = { -2221.19f, 303.3f, 184.93f };
			uVar0.f_5 = -58432001;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 214:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01L");
			uVar0 = { -2280.6f, 265.43f, 184.93f };
			uVar0.f_5 = -2007378629;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 215:
			uVar0.f_3 = joaat("PROP_CH1_07_DOOR_01R");
			uVar0 = { -2278.04f, 266.57f, 184.93f };
			uVar0.f_5 = 418772613;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 216:
			uVar0.f_3 = joaat("PROP_GAR_DOOR_04");
			uVar0 = { 778.31f, -1867.49f, 30.66f };
			uVar0.f_5 = 1679064921;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 217:
			uVar0.f_3 = joaat("PROP_GATE_TEP_01_L");
			uVar0 = { -721.35f, 91.01f, 56.68f };
			uVar0.f_5 = 412198396;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 218:
			uVar0.f_3 = joaat("PROP_GATE_TEP_01_R");
			uVar0 = { -728.84f, 88.64f, 56.68f };
			uVar0.f_5 = -1053755588;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 219:
			uVar0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			uVar0 = { -2287.62f, 363.9f, 174.93f };
			uVar0.f_5 = -53446139;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 220:
			uVar0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			uVar0 = { -2289.78f, 362.91f, 174.93f };
			uVar0.f_5 = 1333960556;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 221:
			uVar0.f_3 = joaat("PROP_ARTGALLERY_02_DR");
			uVar0 = { -2289.86f, 362.88f, 174.93f };
			uVar0.f_5 = -41786493;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 222:
			uVar0.f_3 = joaat("PROP_ARTGALLERY_02_DL");
			uVar0 = { -2292.01f, 361.89f, 174.93f };
			uVar0.f_5 = 1750120734;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 223:
			uVar0.f_3 = joaat("PROP_FNCLINK_07GATE1");
			uVar0 = { 1803.94f, 3929.01f, 33.72f };
			uVar0.f_5 = 1661506222;
			break;
	
		case 203:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR2");
			uVar0 = { -348.81f, -47.26f, 49.39f };
			uVar0.f_5 = -2116116146;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 204:
			uVar0.f_3 = joaat("V_ILEV_GENBANKDOOR1");
			uVar0 = { -351.26f, -46.41f, 49.39f };
			uVar0.f_5 = -74083138;
			MISC::SET_BIT(&(uVar0.f_4), 2);
			break;
	
		case 224:
			uVar0.f_3 = joaat("PROP_ABAT_SLIDE");
			uVar0 = { 962.9084f, -2105.8137f, 34.6432f };
			uVar0.f_5 = -1670085357;
			break;
	}

	return uVar0;
}

bool func_117() // Position - 0x8F54
{
	if (func_119() == -1 || func_119() == 999 && !(func_118() == 0))
		return true;

	return false;
}

int func_118() // Position - 0x8F84
{
	return Global_33793;
}

int func_119() // Position - 0x8F8F
{
	return Global_33792;
}

bool func_120() // Position - 0x8F9A
{
	if (Global_102454 == 13 || Global_102454 == 10 || Global_102454 == 11 || Global_102454 == 12)
		return false;

	return true;
}

bool func_121(int iParam0, int iParam1) // Position - 0x8FD8
{
	int iVar0;

	iVar0 = (func_27(func_42()) * 100) + func_26(func_42());

	if (iParam1 > iParam0)
		if (iVar0 < iParam0 || iVar0 > iParam1)
			return false;
	else if (iVar0 < iParam0 && iVar0 > iParam1)
		return false;

	return true;
}

void func_122(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x902D
{
	func_123(func_42(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_123(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x904B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_24(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_30(iParam0);
		iVar2 = func_30(iParam0) - func_30(iParam1);
		iVar3 = func_29(iParam0) - func_29(iParam1);
		iVar4 = func_28(iParam0) - func_28(iParam1);
		iVar5 = func_27(iParam0) - func_27(iParam1);
		iVar6 = func_26(iParam0) - func_26(iParam1);
		iVar7 = func_25(iParam0) - func_25(iParam1);
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_30(iParam1);
		iVar2 = func_30(iParam1) - func_30(iParam0);
		iVar3 = func_29(iParam1) - func_29(iParam0);
		iVar4 = func_28(iParam1) - func_28(iParam0);
		iVar5 = func_27(iParam1) - func_27(iParam0);
		iVar6 = func_26(iParam1) - func_26(iParam0);
		iVar7 = func_25(iParam1) - func_25(iParam0);
	}

	while (iVar7 < 0)
	{
		iVar7 = iVar7 + 60;
		iVar6 = iVar6 - 1;
	}

	while (iVar7 > 59)
	{
		iVar7 = iVar7 - 60;
		iVar6 = iVar6 + 1;
	}

	while (iVar6 < 0)
	{
		iVar6 = iVar6 + 60;
		iVar5 = iVar5 - 1;
	}

	while (iVar6 > 59)
	{
		iVar6 = iVar6 - 60;
		iVar5 = iVar5 + 1;
	}

	while (iVar5 < 0)
	{
		iVar5 = iVar5 + 24;
		iVar4 = iVar4 - 1;
	}

	while (iVar5 > 23)
	{
		iVar5 = iVar5 - 24;
		iVar4 = iVar4 + 1;
	}

	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 = iVar3 + 12;
			iVar2 = iVar2 - 1;
		}
	
		iVar4 = iVar4 + func_33(iVar0, iVar1);
		iVar3 = iVar3 - 1;
		iVar0 = BUILTIN::ROUND(func_124(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}

	while (iVar3 < 0)
	{
		iVar3 = iVar3 + 12;
		iVar2 = iVar2 - 1;
	}

	while (iVar3 > 12)
	{
		iVar3 = iVar3 - 12;
		iVar2 = iVar2 + 1;
	}

	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_124(float fParam0, float fParam1, float fParam2) // Position - 0x924C
{
	float fVar0;

	if (fParam1 == fParam2)
		return fParam1;

	fVar0 = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / fVar0) * fVar0);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + fVar0;

	return fParam0;
}

bool func_125(bool bParam0) // Position - 0x928E
{
	if (bParam0)
		if (func_43(130) && !func_43(131))
			return true;

	return false;
}

bool func_126(int iParam0) // Position - 0x92B5
{
	if (func_127(iParam0))
		return false;
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			return true;

	return false;
}

bool func_127(int iParam0) // Position - 0x92EA
{
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 41 || iParam0 == 60 || iParam0 == 61)
		return true;

	return false;
}

bool func_128(int iParam0) // Position - 0x9329
{
	if (iParam0 == 58 || iParam0 == 59 || iParam0 == 62)
		if (func_129(40) || func_129(41) || func_129(43) || func_129(47))
			return true;

	if (iParam0 == 24)
		if (func_129(41))
			return true;

	return false;
}

bool func_129(int iParam0) // Position - 0x9395
{
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_96414[iParam0 /*2*/])
		return true;

	for (iVar0 = 0; iVar0 < Global_93181; iVar0 = iVar0 + 1)
	{
		if (Global_93181[iVar0 /*5*/] != -1)
			if (Global_80576.f_109[Global_93181[iVar0 /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

bool func_130() // Position - 0x93FD
{
	return true;
}

bool func_131(int iParam0) // Position - 0x9406
{
	if (Global_44886 == 15)
		return false;

	if (func_132(iParam0))
		return false;

	return true;
}

bool func_132(int iParam0) // Position - 0x9428
{
	return func_133(iParam0, Global_44886);
}

bool func_133(int iParam0, int iParam1) // Position - 0x9439
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

void func_134() // Position - 0x961A
{
	int iVar0;

	Static_72[0] = 243;
	Static_72[1] = 244;
	Static_72[2] = 245;
	Static_72[3] = 246;
	Static_72[4] = 247;
	Static_72[5] = 248;
	Static_72[6] = 249;
	Static_72[7] = 250;
	Static_72[8] = 251;
	Static_72[9] = 252;
	Static_72[10] = 253;
	Static_72[11] = 254;
	Static_72[12] = 255;
	Static_72[13] = 256;
	Static_72[14] = 257;
	Static_72[15] = 258;
	Static_72[16] = 259;
	Static_72[17] = 260;
	Static_72[18] = 261;
	Static_72[19] = 262;

	for (iVar0 = 0; iVar0 < 20; iVar0 = iVar0 + 1)
	{
		Static_51[iVar0] = 0;
		func_3(Static_72[iVar0], false, false);
		func_135(Static_72[iVar0], 4);
		func_90(Static_72[iVar0], 8);
		func_77(Static_72[iVar0]);
		func_98(Static_72[iVar0], 0);
		func_99(Static_72[iVar0], 66);
		func_95(Static_72[iVar0]);
	}
}

void func_135(int iParam0, int iParam1) // Position - 0x9724
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 16);
	Global_34172[iVar0 /*23*/].f_22 = iParam1;

	if (Global_34169 == true)
		Global_34170 = true;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_136() // Position - 0x978A
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 63; iVar0 = iVar0 + 1)
	{
		Global_114018[iVar0 /*10*/].f_5 = 0;
		Global_114018[iVar0 /*10*/].f_6 = 0;
		Global_114018[iVar0 /*10*/].f_4 = 0;
		Global_114018[iVar0 /*10*/].f_7 = 0;
		Global_114018[iVar0 /*10*/].f_8 = -1;
		Global_114018[iVar0 /*10*/].f_9 = -1;
	}
}

void func_137() // Position - 0x97E7
{
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

