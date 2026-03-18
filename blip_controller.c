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
	char* Static_19 = 0;
	char* Static_20 = 0;
	char* Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	var Static_24 = 0;
	var Static_25 = 0;
	var Static_26 = 0;
	var Static_27 = 0;
	int Static_28 = 0;
	float Static_29 = 0f;
	var Static_30 = 0;
	var Static_31 = 0;
	var Static_32 = 0;
	float Static_33 = 0f;
	float Static_34 = 0f;
	var Static_35 = 0;
	var Static_36 = 0;
	float Static_37 = 0f;
	float Static_38 = 0f;
	float Static_39 = 0f;
	var Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	bool Static_43 = 0;
	bool Static_44 = 0;
	bool Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	bool Static_48 = 0;
	int Static_49 = 0;
	bool Static_50 = 0;
	int Static_51 = 0;
	int Static_52 = 0;
	var Static_53 = 7;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	int Static_61 = 0;
	int Static_62 = 0;
	bool Static_63 = 0;
	bool Static_64 = 0;
	bool Static_65 = 0;
	bool Static_66 = 0;
	bool Static_67 = 0;
	bool Static_68 = 0;
	bool Static_69 = 0;
	bool Static_70 = 0;
	bool Static_71 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;

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
	Static_19 = "CHECKPOINT_NORMAL";
	Static_20 = "CHECKPOINT_MISSED";
	Static_21 = "CHECKPOINT_PERFECT";
	Static_22 = { 1694.7395f, 3276.5024f, 41.2796f };
	Static_25 = { 8.79494f, 0.59893f, 154.8464f };
	Static_28 = 3;
	Static_29 = 0f;
	Static_33 = -0.0375f;
	Static_34 = 0.17f;
	Static_37 = 80f;
	Static_38 = 140f;
	Static_39 = 180f;
	Static_48 = true;
	Static_51 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_52();

	for (iVar0 = 0; iVar0 <= 64; iVar0 = iVar0 + 1)
	{
		if (func_51(iVar0))
		{
			iVar1 = func_50(iVar0);
			func_47(iVar1, func_48(iVar0));
		}
	}

	func_46(91, true);
	func_46(92, true);
	Global_34169 = true;

	while (Global_34171)
	{
		MISC::GET_GAME_TIMER() % 250 == 0;
		BUILTIN::WAIT(0);
	}

	iVar2 = 0;

	for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1)
	{
		Static_53[iVar2] = -1;
	}

	MISC::SET_BIT(&(Global_34172[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;

	for (iVar2 = 0; iVar2 < 263; iVar2 = iVar2 + 1)
	{
		MISC::SET_BIT(&(Global_34172[iVar2 /*23*/].f_11), 18);
	}

	Static_69 = Global_40223;
	bVar3 = false;
	func_45();
	func_43();

	while (true)
	{
		if (!bVar3)
			func_42();
	
		bVar3 = func_35();
	
		if (bVar3)
			Global_34169 = true;
	
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
	
		if (Global_34169)
		{
			func_45();
			func_43();
			iVar6 = 0;
		
			for (iVar2 = 0; iVar2 < 263; iVar2 = iVar2 + 1)
			{
				bVar7 = IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 18);
			
				if (!bVar7)
				{
					if (func_34(iVar2))
					{
						iVar5 = iVar5 + 1;
						bVar7 = true;
					}
				}
			
				iVar4 = iVar4 + 1;
			
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
				
					if (Global_40223)
					{
						iVar8 = iVar8 + 1;
						iVar9 = iVar9 + 1;
					}
					else
					{
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 13))
						{
							if (func_33())
								iVar8 = iVar8 + 1;
						
							iVar9 = iVar9 + 1;
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 1))
						{
							if (!Static_48)
								iVar8 = iVar8 + 1;
						
							iVar9 = iVar9 + 1;
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 2))
						{
							if (Static_48)
								iVar8 = iVar8 + 1;
						
							iVar9 = iVar9 + 1;
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 7))
						{
							if (!func_32(15))
								iVar8 = iVar8 + 1;
						
							iVar9 = iVar9 + 1;
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 16))
						{
							if (!func_30(Global_34172[iVar2 /*23*/].f_22))
								iVar8 = iVar8 + 1;
						
							iVar9 = iVar9 + 1;
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 14))
						{
							if (func_32(5))
								iVar8 = iVar8 + 1;
						
							iVar9 = iVar9 + 1;
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 8))
						{
							if (Global_34172[iVar2 /*23*/].f_16 != 4 && Global_34172[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_29(iVar2))
									iVar8 = iVar8 + 1;
							
								iVar9 = iVar9 + 1;
							}
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 19))
						{
							switch (Static_62)
							{
								case 1:
								case 0:
								case 2:
									break;
							
								default:
									iVar8 = iVar8 + 1;
									break;
							}
						
							iVar9 = iVar9 + 1;
						}
					
						if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 27))
						{
							if (Static_43)
								iVar8 = iVar8 + 1;
						
							iVar9 = iVar9 + 1;
						}
					
						if (Global_34172[iVar2 /*23*/].f_16 == 1)
							func_23();
					}
				
					if (iVar9 > 0)
						if (iVar8 > 0)
							MISC::CLEAR_BIT(&(Global_34172[iVar2 /*23*/].f_11), 0);
						else if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 15))
							MISC::SET_BIT(&(Global_34172[iVar2 /*23*/].f_11), 0);
					else if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 15))
						MISC::SET_BIT(&(Global_34172[iVar2 /*23*/].f_11), 0);
				
					if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 0) && IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
					
						if (!HUD::DOES_BLIP_EXIST(Global_34172[iVar2 /*23*/].f_19))
						{
							while (!(HUD::GET_NUMBER_OF_ACTIVE_BLIPS() < 150))
							{
								BUILTIN::WAIT(2000);
							}
						
							if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 19))
							{
								switch (Static_62)
								{
									case 1:
									case 0:
									case 2:
										if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 28))
										{
											Global_34172[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_34172[iVar2 /*23*/][0 /*3*/], Global_34172[iVar2 /*23*/].f_10);
											HUD::SET_BLIP_ALPHA(Global_34172[iVar2 /*23*/].f_19, 128);
											HUD::SHOW_HEIGHT_ON_BLIP(Global_34172[iVar2 /*23*/].f_19, 0);
										}
										else
										{
											Global_34172[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_34172[iVar2 /*23*/][Static_62 /*3*/]);
											HUD::SET_BLIP_SPRITE(Global_34172[iVar2 /*23*/].f_19, Global_34172[iVar2 /*23*/].f_12[Static_62]);
										}
										break;
								
									default:
										Global_34172[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 28))
							{
								Global_34172[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_34172[iVar2 /*23*/][0 /*3*/], Global_34172[iVar2 /*23*/].f_10);
								HUD::SET_BLIP_ALPHA(Global_34172[iVar2 /*23*/].f_19, 128);
								HUD::SHOW_HEIGHT_ON_BLIP(Global_34172[iVar2 /*23*/].f_19, 0);
							}
							else
							{
								Global_34172[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_34172[iVar2 /*23*/][0 /*3*/]);
								HUD::SET_BLIP_SPRITE(Global_34172[iVar2 /*23*/].f_19, Global_34172[iVar2 /*23*/].f_12[0]);
							}
						
							if (Global_34172[iVar2 /*23*/].f_16 == 1)
								bVar10 = true;
						}
						else
						{
							if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 19))
							{
								switch (Static_62)
								{
									case 1:
									case 0:
									case 2:
										HUD::SET_BLIP_COORDS(Global_34172[iVar2 /*23*/].f_19, Global_34172[iVar2 /*23*/][Static_62 /*3*/]);
										break;
								
									default:
										break;
								}
							}
							else
							{
								HUD::SET_BLIP_COORDS(Global_34172[iVar2 /*23*/].f_19, Global_34172[iVar2 /*23*/][0 /*3*/]);
							}
						
							if (IS_BIT_SET(Global_34172[iVar2 /*23*/].f_11, 9))
							{
								if (Static_45)
								{
									HUD::SET_BLIP_FLASHES(Global_34172[iVar2 /*23*/].f_19, 1);
									Static_45 = false;
								}
								else
								{
									HUD::SET_BLIP_FLASHES_ALTERNATE(Global_34172[iVar2 /*23*/].f_19, 1);
									Static_45 = true;
								}
							
								HUD::SET_BLIP_FLASH_TIMER(Global_34172[iVar2 /*23*/].f_19, 10000);
								MISC::CLEAR_BIT(&(Global_34172[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								HUD::SET_BLIP_FLASHES(Global_34172[iVar2 /*23*/].f_19, 0);
							}
						}
					
						func_20(Global_34172[iVar2 /*23*/].f_19, iVar2);
					
						if (bVar10)
							func_19(iVar2);
					
						iVar5 = iVar5 + 1;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_34172[iVar2 /*23*/].f_19))
						{
							HUD::REMOVE_BLIP(&(Global_34172[iVar2 /*23*/].f_19));
							iVar5 = iVar5 + 1;
						
							if (Global_34172[iVar2 /*23*/].f_16 == 1)
								func_18(iVar2);
						}
					
						Global_34172[iVar2 /*23*/].f_19 = 0;
					}
				}
			
				MISC::CLEAR_BIT(&(Global_34172[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
			
				if (CAM::IS_SCREEN_FADED_OUT())
					iVar11 = 250;
			
				if (iVar5 > iVar11)
				{
					BUILTIN::WAIT(0);
					iVar5 = 0;
				}
			
				if (iVar4 / 20 > iVar6)
				{
					iVar6 = iVar4 / 20;
					BUILTIN::WAIT(0);
				}
			}
		}
	
		Global_34169 = Global_34170;
		Global_34170 = false;
	
		if (iVar4 == 0)
		{
			func_11();
			func_7();
			BUILTIN::WAIT(500);
			Static_62 = func_1();
		}
	}
}

int func_1() // Position - 0x716
{
	func_2();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_2() // Position - 0x72F
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_5(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_4(PLAYER::PLAYER_PED_ID());
		
			if (func_3(iVar0) && !func_32(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_3(Global_114931.f_2370.f_539.f_4321))
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

bool func_3(int iParam0) // Position - 0x82C
{
	return iParam0 < 3;
}

int func_4(var uParam0) // Position - 0x838
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_5(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_5(int iParam0) // Position - 0x875
{
	if (func_3(iParam0))
		return func_6(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_6(int iParam0) // Position - 0x89A
{
	return Global_2339[iParam0 /*29*/];
}

void func_7() // Position - 0x8A9
{
	if (func_1() == 1)
	{
		if (func_10(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_10(126))
				{
					if (func_9(138))
						func_8(138, false, false);
				
					if (!func_9(139))
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CHOP")) == 0)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
								func_8(139, true, false);
				}
				else
				{
					if (func_9(139))
						func_8(139, false, false);
				
					if (!func_9(138))
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CHOP")) == 0)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
								func_8(138, true, false);
				}
			}
		}
	}
}

void func_8(int iParam0, bool bParam1, bool bParam2) // Position - 0x985
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
			Global_34170 = 1;
	
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

bool func_9(int iParam0) // Position - 0xA85
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_34172[iVar0 /*23*/].f_19);
}

bool func_10(int iParam0) // Position - 0xAC1
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

void func_11() // Position - 0xAEE
{
	var uVar0;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		return;

	uVar0 = { func_17(PLAYER::GET_PLAYER_INDEX()) };
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;

	for (iVar5 = 0; iVar5 < 7; iVar5 = iVar5 + 1)
	{
		if (Static_53[iVar5] != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Global_34172[Static_53[iVar5] /*23*/].f_19))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, HUD::GET_BLIP_COORDS(Global_34172[Static_53[iVar5] /*23*/].f_19), 1);
			
				if (fVar6 < fVar4)
				{
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
	}

	if (Static_51 == iVar3)
		return;

	Static_51 = iVar3;

	if (iVar3 == -1)
		return;

	for (iVar5 = 0; iVar5 < 7; iVar5 = iVar5 + 1)
	{
		if (Static_53[iVar5] != -1)
			if (iVar5 == iVar3)
				if (HUD::DOES_BLIP_EXIST(Global_34172[Static_53[iVar5] /*23*/].f_19))
					func_16(Static_53[iVar5]);
			else if (HUD::DOES_BLIP_EXIST(Global_34172[Static_53[iVar5] /*23*/].f_19))
				func_12(Static_53[iVar5]);
	}
}

void func_12(int iParam0) // Position - 0xBF2
{
	func_15(iParam0, false, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
}

void func_13(int iParam0, bool bParam1) // Position - 0xC10
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
		Global_34170 = 1;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_14(int iParam0, bool bParam1) // Position - 0xC93
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
		Global_34170 = 1;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_15(int iParam0, bool bParam1, bool bParam2) // Position - 0xD16
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
		Global_34170 = 1;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_16(int iParam0) // Position - 0xDBF
{
	func_15(iParam0, true, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
}

Vector3 func_17(var uParam0) // Position - 0xDDD
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_18(int iParam0) // Position - 0xDF0
{
	int iVar0;

	if (Static_52 < 1)
		return;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 7; iVar0 = iVar0 + 1)
	{
		if (Static_53[iVar0] == iParam0)
		{
			Static_52 = Static_52 - 1;
			Static_53[iVar0] = -1;
		
			if (iParam0 == Static_51)
				Static_51 = -1;
		
			return;
		}
	}
}

void func_19(int iParam0) // Position - 0xE3B
{
	int iVar0;
	int iVar1;

	if (Static_52 == 7)
		return;

	iVar0 = 0;
	iVar1 = -1;

	for (iVar0 = 0; iVar0 < Static_52; iVar0 = iVar0 + 1)
	{
		if (Static_53[iVar0] == iParam0)
			return;
	}

	for (iVar0 = 0; iVar0 < 7; iVar0 = iVar0 + 1)
	{
		if (Static_53[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
	}

	Static_53[iVar1] = iParam0;
	Static_52 = Static_52 + 1;
}

void func_20(var uParam0, int iParam1) // Position - 0xEA4
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = func_1();
	HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(uParam0, 1);
	HUD::SET_BLIP_PRIORITY(uParam0, 2);
	HUD::SET_BLIP_COLOUR(uParam0, func_22(iParam1));

	if (Global_34172[iParam1 /*23*/].f_16 == 4 || Global_34172[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				HUD::SET_BLIP_COLOUR(uParam0, 42);
				break;
		
			case 1:
				HUD::SET_BLIP_COLOUR(uParam0, 43);
				break;
		
			case 2:
				HUD::SET_BLIP_COLOUR(uParam0, 44);
				break;
		}
	}

	if (!IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 28))
		HUD::SET_BLIP_SCALE(uParam0, 1f);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_34172[iParam1 /*23*/].f_20)))
		if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_34172[iParam1 /*23*/].f_20)))
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0, &(Global_34172[iParam1 /*23*/].f_20));

	bVar1 = IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 4);
	bVar2 = IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 5);
	bVar3 = IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 6);
	bVar4 = false;

	if (func_21(0))
		bVar4 = IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 11);

	if (bVar3 && !bVar4)
		HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, 0);
	else
		HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, 1);

	if (bVar2 && bVar1)
	{
		HUD::SET_BLIP_DISPLAY(uParam0, 4);
	}
	else
	{
		if (bVar2)
			HUD::SET_BLIP_DISPLAY(uParam0, 5);
	
		if (bVar1)
			HUD::SET_BLIP_DISPLAY(uParam0, 3);
	}

	switch (Global_34172[iParam1 /*23*/].f_16)
	{
		case 7:
			HUD::SET_BLIP_PRIORITY(uParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
	
		case 6:
		case 5:
			HUD::SET_BLIP_PRIORITY(uParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
	
		case 1:
			HUD::SET_BLIP_PRIORITY(uParam0, 3);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
	
		case 9:
			HUD::SET_BLIP_PRIORITY(uParam0, 1);
			HUD::SET_BLIP_CATEGORY(uParam0, 10);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
	
		case 4:
		case 8:
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
		
			if (Global_34172[iParam1 /*23*/].f_16 == 4)
				HUD::SET_BLIP_PRIORITY(uParam0, 7);
			else
				HUD::SET_BLIP_PRIORITY(uParam0, 5);
		
			if (IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(uParam0, 0);
					}
					else
					{
						if (Global_34172[iParam1 /*23*/].f_17 == 0)
							HUD::SET_BLIP_COLOUR(uParam0, 42);
					
						if (Global_34172[iParam1 /*23*/].f_17 == 1)
							HUD::SET_BLIP_COLOUR(uParam0, 43);
					
						if (Global_34172[iParam1 /*23*/].f_17 == 2)
							HUD::SET_BLIP_COLOUR(uParam0, 44);
					
						if (Global_34172[iParam1 /*23*/].f_16 == 8)
						{
							HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 5));
							HUD::SET_BLIP_PRIORITY(uParam0, 3);
							HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, 1);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(uParam0, 1);
							HUD::SET_BLIP_SCALE(uParam0, 0.77f);
						}
						else
						{
							HUD::SET_BLIP_SCALE(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 28))
						HUD::SET_BLIP_ALPHA(uParam0, 128);
				
					if (Global_34172[iParam1 /*23*/].f_16 == 8)
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(uParam0, 0);
				}
			}
			break;
	
		default:
			HUD::SET_BLIP_PRIORITY(uParam0, 5);
			break;
	}

	switch (iParam1)
	{
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
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
	}

	if (IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				HUD::SET_BLIP_COORDS(Global_34172[iParam1 /*23*/].f_19, Global_34172[iParam1 /*23*/][iVar0 /*3*/]);
				break;
		}
	}

	if (IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 17))
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 1);
	else
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 0);

	if (IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 20))
		HUD::SHOW_TICK_ON_BLIP(uParam0, 1);
	else
		HUD::SHOW_TICK_ON_BLIP(uParam0, 0);

	if (IS_BIT_SET(Global_34172[iParam1 /*23*/].f_11, 29))
		HUD::SET_BLIP_COLOUR(uParam0, 39);
}

bool func_21(int iParam0) // Position - 0x128B
{
	if (Global_44886 == 15)
		return 0;

	if (func_30(iParam0))
		return 0;

	return 1;
}

int func_22(int iParam0) // Position - 0x12AD
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return 0;

	iVar1 = MISC::GET_BITS_IN_RANGE(Global_34172[iVar0 /*23*/].f_11, 21, 26);
	return iVar1;
}

void func_23() // Position - 0x12F0
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 7; iVar0 = iVar0 + 1)
	{
		func_24(iVar0);
	}
}

void func_24(int iParam0) // Position - 0x1310
{
	bool bVar0;

	if (iParam0 == 10)
		return;

	if (Global_97467[iParam0 /*10*/].f_7 == 263)
		return;

	bVar0 = false;

	if (IS_BIT_SET(Global_114931.f_7236[iParam0], 0))
		if (Global_97467[iParam0 /*10*/].f_9 != func_28())
			bVar0 = true;
		else if (!func_26(iParam0))
			bVar0 = true;

	if (iParam0 == 5)
		if (func_25(6))
			bVar0 = false;

	if (func_21(14))
		bVar0 = false;

	func_8(Global_97467[iParam0 /*10*/].f_7, bVar0, false);
}

bool func_25(int iParam0) // Position - 0x139A
{
	return IS_BIT_SET(Global_114931.f_7236[iParam0], 0);
}

bool func_26(int iParam0) // Position - 0x13AF
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (Global_102506.f_415 == 0)
		return false;

	if (iParam0 == 10)
	{
		for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
		{
			if (func_26(iVar0))
				return true;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_27(iParam0, &uVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_97467[iParam0 /*10*/].f_3, &uVar1);
	
		if (iVar9 != 0 && Global_102506.f_415 == iVar9)
			return true;
	}

	return false;
}

bool func_27(int iParam0, char* sParam1) // Position - 0x1434
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

int func_28() // Position - 0x1508
{
	func_2();
	return Global_114931.f_2370.f_539.f_4321;
}

bool func_29(int iParam0) // Position - 0x1521
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return false;

	if (!IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 8))
		return false;

	if (Global_34172[iVar0 /*23*/].f_17 == func_1())
		return true;

	if (!IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 10))
		return false;

	if (Global_34172[iVar0 /*23*/].f_18 == func_1())
		return true;

	return false;
}

bool func_30(int iParam0) // Position - 0x15A1
{
	return func_31(iParam0, Global_44886);
}

bool func_31(int iParam0, int iParam1) // Position - 0x15B2
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

bool func_32(int iParam0) // Position - 0x1793
{
	return Global_44886 == iParam0;
}

bool func_33() // Position - 0x17A1
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
		return true;

	return false;
}

bool func_34(int iParam0) // Position - 0x17BA
{
	if (Static_66 && IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 13))
	{
		MISC::SET_BIT(&(Global_34172[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (Static_67 && IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 7) || IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 11) || IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 16))
	{
		MISC::SET_BIT(&(Global_34172[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (Static_68 && IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 14))
	{
		MISC::SET_BIT(&(Global_34172[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (Static_63 && IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 10) || IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 8) || IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 19))
	{
		MISC::SET_BIT(&(Global_34172[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (Static_64)
	{
		MISC::SET_BIT(&(Global_34172[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (Static_70 && IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 27))
	{
		MISC::SET_BIT(&(Global_34172[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (Static_71 && IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 1) || IS_BIT_SET(Global_34172[iParam0 /*23*/].f_11, 2) || Global_34172[iParam0 /*23*/].f_16 == 1)
	{
		MISC::SET_BIT(&(Global_34172[iParam0 /*23*/].f_11), 18);
		return true;
	}

	return false;
}

bool func_35() // Position - 0x1939
{
	int iVar0;

	iVar0 = 0;

	if (func_41())
	{
		if (!Static_65)
		{
			Static_65 = true;
			iVar0 = 1;
		}
	}

	if (func_40())
	{
		if (!Static_66)
		{
			Static_66 = true;
			iVar0 = 1;
		}
	}

	if (func_39())
	{
		if (!Static_67)
		{
			Static_67 = true;
			iVar0 = 1;
		}
	}

	if (func_38())
	{
		if (!Static_68)
		{
			Static_68 = true;
			iVar0 = 1;
		}
	}

	Static_64 = false;

	if (Global_40223 != Static_69)
	{
		Static_69 = Global_40223;
	
		if (!Static_64)
		{
			Static_64 = true;
			iVar0 = 1;
		}
	}

	if (func_36())
	{
		if (!Static_71)
		{
			Static_71 = true;
			iVar0 = 1;
		}
	}

	Static_62 = func_1();

	if (Static_62 != Static_61)
	{
		Static_61 = Static_62;
		Static_63 = true;
		iVar0 = 1;
	}

	Static_44 = Static_43;

	if (func_10(130))
		Static_43 = true;

	if (func_10(131))
		Static_43 = false;

	if (Static_43 != Static_44)
	{
		if (!Static_70)
			iVar0 = 1;
	
		Static_70 = true;
	}

	return iVar0;
}

bool func_36() // Position - 0x1A07
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
		return false;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));

	if (Static_49 != iVar0)
	{
		Static_49 = iVar0;
	
		if (iVar0 == 0 || func_37(iVar0, false))
			Static_48 = true;
		else
			Static_48 = false;
	
		return true;
	}

	return false;
}

bool func_37(int iParam0, bool bParam1) // Position - 0x1A5E
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 <= 60; iVar0 = iVar0 + 1)
	{
		if (bParam1 && Global_31[iVar0] == 0)
		{
		}
		else if (Global_31[iVar0] == iParam0)
		{
			return true;
		}
	}

	return false;
}

bool func_38() // Position - 0x1AA3
{
	if (Static_50 != func_21(0))
	{
		Static_50 = func_21(0);
		return true;
	}

	return false;
}

bool func_39() // Position - 0x1AC1
{
	bool bVar0;

	bVar0 = Global_40224;
	Global_40224 = false;
	bVar0;
	return bVar0;
}

bool func_40() // Position - 0x1AD9
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != Static_47)
	{
		Static_47 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return true;
	}

	return false;
}

bool func_41() // Position - 0x1AFD
{
	if (Global_44886 != 15)
		return false;

	if (CLOCK::GET_CLOCK_HOURS() != Static_46)
	{
		Static_46 = CLOCK::GET_CLOCK_HOURS();
		return true;
	}

	return false;
}

void func_42() // Position - 0x1B25
{
	Static_63 = false;
	Static_64 = false;
	Static_65 = false;
	Static_66 = false;
	Static_67 = false;
	Static_68 = false;
	Static_69 = false;
	Static_70 = false;
	Static_71 = false;
}

void func_43() // Position - 0x1B48
{
	if (func_44(0) == true && !func_32(6))
	{
		func_8(112, true, false);
		func_8(113, true, false);
		func_8(114, true, false);
	}
}

bool func_44(int iParam0) // Position - 0x1B7D
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

void func_45() // Position - 0x1BA9
{
	if (func_44(0) == true && !func_32(6))
	{
		func_8(156, 1, false);
		func_8(157, true, false);
		func_8(161, true, false);
		func_8(160, true, false);
		func_8(158, true, false);
		func_12(158);
		func_8(159, true, false);
		func_12(159);
	}
}

void func_46(int iParam0, bool bParam1) // Position - 0x1C02
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_34172[iVar0 /*23*/].f_11, 2))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 2);
	else
		MISC::CLEAR_BIT(&(Global_34172[iVar0 /*23*/].f_11), 2);

	if (Global_34169 == true)
		Global_34170 = 1;

	Global_34169 = true;
	MISC::SET_BIT(&(Global_34172[iVar0 /*23*/].f_11), 18);
}

void func_47(int iParam0, char* sParam1) // Position - 0x1C85
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263)
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_34172[iVar0 /*23*/].f_20), sParam1, 8);

	if (HUD::DOES_BLIP_EXIST(Global_34172[iVar0 /*23*/].f_19))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_34172[iVar0 /*23*/].f_19, sParam1);
}

char* func_48(int iParam0) // Position - 0x1CDF
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL" /* GXT: Barber Shop */;
	
		case 1:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 2:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 3:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 4:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 5:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 6:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 7:
			return func_49(iParam0, 0, false);
	
		case 8:
			return func_49(iParam0, 0, false);
	
		case 9:
			return func_49(iParam0, 0, false);
	
		case 10:
			return func_49(iParam0, 0, false);
	
		case 11:
			return func_49(iParam0, 0, false);
	
		case 12:
			return func_49(iParam0, 0, false);
	
		case 13:
			return func_49(iParam0, 0, false);
	
		case 14:
			return func_49(iParam0, 0, false);
	
		case 15:
			return func_49(iParam0, 0, false);
	
		case 16:
			return func_49(iParam0, 0, false);
	
		case 17:
			return func_49(iParam0, 0, false);
	
		case 18:
			return func_49(iParam0, 0, false);
	
		case 19:
			return func_49(iParam0, 0, false);
	
		case 20:
			return func_49(iParam0, 0, false);
	
		case 21:
			return func_49(iParam0, 0, false);
	
		case 22:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 23:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 24:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 25:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 26:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 27:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 28:
			return "SB_AMU2" /* GXT: Ammu-Nation with Range */;
	
		case 29:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 30:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 31:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 32:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 33:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 34:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 35:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 36:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 37:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 38:
			return "SB_AMU2" /* GXT: Ammu-Nation with Range */;
	
		case 39:
			return func_49(iParam0, 0, false);
	
		case 40:
			return func_49(iParam0, 0, false);
	
		case 41:
			return func_49(iParam0, 0, false);
	
		case 42:
			return func_49(iParam0, 0, false);
	
		case 43:
			return func_49(iParam0, 0, false);
	
		case 44:
			return func_49(iParam0, 0, false);
	
		case 45:
			return func_49(iParam0, 0, false);
	
		case 46:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 47:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 48:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 49:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 52:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 50:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 51:
			return "S_CL_BL" /* GXT: Casino Store */;
	
		case 53:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 54:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 55:
			return func_49(iParam0, 0, false);
	
		case 56:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 57:
			return func_49(iParam0, 0, false);
	
		case 58:
			return func_49(iParam0, 0, false);
	
		case 59:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 60:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 61:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	
		case 62:
			return "SB_BAR" /* GXT: Barber Shop */;
	
		case 63:
			return "SB_TAT" /* GXT: Tattoo Parlor */;
	
		case 64:
			return "SB_AMU" /* GXT: Ammu-Nation */;
	}

	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1, bool bParam2) // Position - 0x2153
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /* GXT: Empty Shop */;
	
		case 0:
			return "S_H_01" /* GXT: Bob Mulét Hair & Beauty */;
	
		case 1:
			return "S_H_02" /* GXT: Herr Kutz Barber */;
	
		case 2:
			return "S_H_03" /* GXT: Beachcombover Barbers */;
	
		case 3:
			return "S_H_04" /* GXT: O'Sheas Barbers */;
	
		case 4:
			return "S_H_05" /* GXT: Herr Kutz Barber */;
	
		case 5:
			return "S_H_06" /* GXT: Hair On Hawick Barbers */;
	
		case 6:
			return "S_H_07" /* GXT: Herr Kutz Barber */;
	
		case 7:
			return "S_CL_01" /* GXT: Discount Store */;
	
		case 8:
			return "S_CL_02" /* GXT: Discount Store */;
	
		case 9:
			return "S_CL_03" /* GXT: Binco Clothing */;
	
		case 10:
			return "S_CL_04" /* GXT: Discount Store */;
	
		case 11:
			return "S_CL_05" /* GXT: Discount Store */;
	
		case 12:
			return "S_CL_06" /* GXT: Binco Clothing */;
	
		case 13:
			return "S_CL_07" /* GXT: Discount Store */;
	
		case 14:
			return "S_CM_01" /* GXT: Suburban */;
	
		case 15:
			return "S_CM_03" /* GXT: Suburban */;
	
		case 16:
			return "S_CM_04" /* GXT: Suburban */;
	
		case 17:
			return "S_CM_05" /* GXT: Suburban */;
	
		case 18:
			return "S_CH_01" /* GXT: Ponsonbys */;
	
		case 19:
			return "S_CH_02" /* GXT: Ponsonbys */;
	
		case 20:
			return "S_CH_03" /* GXT: Ponsonbys */;
	
		case 21:
			return "S_CA_01" /* GXT: Vespucci Movie Masks */;
	
		case 22:
			return "S_T_01" /* GXT: Blazing Tattoo */;
	
		case 23:
			return "S_T_02" /* GXT: Alamo Tattoo Studio */;
	
		case 24:
			return "S_T_03" /* GXT: Paleto Tattoo Studio */;
	
		case 25:
			return "S_T_04" /* GXT: The Pit */;
	
		case 26:
			return "S_T_05" /* GXT: Los Santos Tattoos */;
	
		case 27:
			return "S_T_06" /* GXT: Ink Inc Tattoos */;
	
		case 28:
			return "S_G_01" /* GXT: Ammu-Nation */;
	
		case 29:
			return "S_G_02" /* GXT: Ammu-Nation */;
	
		case 30:
			return "S_G_03" /* GXT: Ammu-Nation */;
	
		case 31:
			return "S_G_04" /* GXT: Ammu-Nation */;
	
		case 32:
			return "S_G_05" /* GXT: Ammu-Nation */;
	
		case 33:
			return "S_G_06" /* GXT: Ammu-Nation */;
	
		case 34:
			return "S_G_07" /* GXT: Ammu-Nation */;
	
		case 35:
			return "S_G_08" /* GXT: Ammu-Nation */;
	
		case 36:
			return "S_G_09" /* GXT: Ammu-Nation */;
	
		case 37:
			return "S_G_10" /* GXT: Ammu-Nation */;
	
		case 38:
			return "S_G_11" /* GXT: Ammu-Nation */;
	
		case 39:
			return "S_MO_01" /* GXT: Los Santos Customs */;
	
		case 40:
			return "S_MO_05" /* GXT: Los Santos Customs */;
	
		case 41:
			return "S_MO_06" /* GXT: Los Santos Customs */;
	
		case 42:
			return "S_MO_07" /* GXT: Beeker's Garage */;
	
		case 43:
			return "S_MO_08" /* GXT: Los Santos Customs */;
	
		case 44:
			return "S_MO_09" /* GXT: Benny's Original Motor Works */;
	
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					else
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					break;
			
				case 5:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					else
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					break;
			
				case 11:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					else
						return "S_MO_B" /* GXT: Bunker Vehicle Workshop */;
					break;
			
				case 10:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					else
						return "S_MO_T" /* GXT: Weapon & Vehicle Workshop */;
					break;
			
				case 12:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					else
						return "S_MO_HA" /* GXT: Hangar Aircraft Workshop */;
					break;
			
				case 13:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 14:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 15:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 23:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_DEN";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 16:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 17:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 18:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET_HSW";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 19:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 20:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 24:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_MANSION";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 21:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			
				case 22:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_VINEWOOD_PREMIUM_GARAGE";
					else
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					break;
			}
		
			return "S_MO_11" /* GXT: Custom Auto Shop */;
	
		case 46:
			return "S_G_12" /* GXT: MOC Armory */;
	
		case 47:
			return "S_G_13" /* GXT: Avenger Armory */;
	
		case 48:
			return "S_G_14" /* GXT: Terrorbyte Armory */;
	
		case 49:
			return "S_G_15" /* GXT: Arena Armory */;
	
		case 52:
			return "S_G_16" /* GXT: Arcade Armory */;
	
		case 53:
			return "S_G_17" /* GXT: Kosatka Armory */;
	
		case 50:
			return "S_H_08" /* GXT: Penthouse Barber */;
	
		case 51:
			return "S_CL_09" /* GXT: Casino Store */;
	
		case 54:
			return "S_T_07" /* GXT: LS Car Meet Tattoos */;
	
		case 55:
			return "S_CL_10" /* GXT: Merch Shop */;
	
		case 56:
			return "S_G_18" /* GXT: Fixer Armory */;
	
		case 57:
			return "S_CL_11" /* GXT: Record A Studios */;
	
		case 58:
			return "S_G_19" /* GXT: Gun Van */;
	
		case 59:
			return "S_G_20";
	
		case 60:
			return "S_G_21";
	
		case 61:
			return "S_G_22";
	
		case 62:
			return "S_H_09" /* GXT: Mansion Barber */;
	
		case 63:
			return "S_T_08" /* GXT: Mansion Tattoo Parlor */;
	
		case 64:
			return "S_G_23";
	}

	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0) // Position - 0x279C
{
	switch (iParam0)
	{
		case -1:
			return 263;
	
		case 0:
			return 19;
	
		case 1:
			return 20;
	
		case 2:
			return 21;
	
		case 3:
			return 22;
	
		case 4:
			return 23;
	
		case 5:
			return 24;
	
		case 6:
			return 25;
	
		case 7:
			return 26;
	
		case 8:
			return 27;
	
		case 9:
			return 28;
	
		case 10:
			return 29;
	
		case 11:
			return 30;
	
		case 12:
			return 31;
	
		case 13:
			return 32;
	
		case 14:
			return 33;
	
		case 15:
			return 35;
	
		case 16:
			return 36;
	
		case 17:
			return 37;
	
		case 18:
			return 38;
	
		case 19:
			return 39;
	
		case 20:
			return 40;
	
		case 21:
			return 41;
	
		case 22:
			return 42;
	
		case 23:
			return 43;
	
		case 24:
			return 44;
	
		case 25:
			return 45;
	
		case 26:
			return 46;
	
		case 27:
			return 47;
	
		case 28:
			return 48;
	
		case 29:
			return 49;
	
		case 30:
			return 50;
	
		case 31:
			return 51;
	
		case 32:
			return 52;
	
		case 33:
			return 53;
	
		case 34:
			return 54;
	
		case 35:
			return 55;
	
		case 36:
			return 56;
	
		case 37:
			return 57;
	
		case 38:
			return 58;
	
		case 39:
			return 59;
	
		case 40:
			return 60;
	
		case 41:
			return 61;
	
		case 42:
			return 62;
	
		case 43:
			return 63;
	
		case 44:
			return 64;
	
		case 45:
			return 64;
	
		case 46:
			return 48;
	
		case 47:
			return 48;
	
		case 48:
			return 48;
	
		case 49:
			return 48;
	
		case 52:
			return 48;
	
		case 50:
			return 25;
	
		case 51:
			return 40;
	
		case 53:
			return 48;
	
		case 54:
			return 42;
	
		case 55:
			return 40;
	
		case 56:
			return 48;
	
		case 57:
			return 40;
	
		case 58:
			return 48;
	
		case 59:
			return 48;
	
		case 60:
			return 48;
	
		case 61:
			return 48;
	
		case 62:
			return 25;
	
		case 63:
			return 42;
	
		case 64:
			return 48;
	
		default:
			break;
	}

	return 263;
}

bool func_51(int iParam0) // Position - 0x2B4E
{
	switch (iParam0)
	{
		case 0:
		case 1:
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
		case 42:
		case 43:
			return true;
	
		case 44:
			break;
	}

	return false;
}

void func_52() // Position - 0x2C76
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

