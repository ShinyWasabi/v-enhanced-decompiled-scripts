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
	char* Static_18 = 0;
	float Static_19 = 0f;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	float Static_23 = 0f;
	float Static_24 = 0f;
	var Static_25 = 0;
	int Static_26 = 0;
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
	int Static_37 = 0;
	int Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	int Static_41 = 0;
	int Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	int Static_46 = 0;
	var Static_47 = 0;
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
	Static_18 = "NULL";
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;
	Static_26 = 3;
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_37 = 1;
	Static_38 = 65;
	Static_39 = 49;
	Static_40 = 64;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		Static_41 = 5;

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (Static_41)
			{
				case 0:
					func_10();
					break;
			
				case 1:
					break;
			
				case 2:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &Static_47, 0, 0))
						{
							Static_46 = MISC::GET_GAME_TIMER();
							Static_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(7, Static_43, 2, 3f, &Static_47, 0, 0))
					{
						Static_46 = MISC::GET_GAME_TIMER();
						Static_41 = 5;
					}
					break;
			
				case 3:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (func_8(PLAYER::PLAYER_ID(), false) && func_4(PLAYER::PLAYER_ID()) == 5 && Global_1969989)
						{
							if (Global_1969990 == 0)
								Global_1969990 = 1;
						
							Static_41 = 5;
						}
						else if (MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &Static_47, 0, 0))
						{
							Static_46 = MISC::GET_GAME_TIMER();
							Static_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(5, Static_43, 2, 3f, &Static_47, 0, 0))
					{
						Static_46 = MISC::GET_GAME_TIMER();
						Static_41 = 5;
					}
					break;
			
				case 4:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &Static_47, 0, 0))
						{
							Static_46 = MISC::GET_GAME_TIMER();
							Static_41 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(3, Static_43, 4, 3f, &Static_47, 0, 0))
					{
						if (Global_98926.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(false))
							Global_98926.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						else if (func_2(67) && !func_2(68))
							Global_98856 = true;
					
						Static_46 = MISC::GET_GAME_TIMER();
						Static_41 = 5;
					}
					break;
			
				case 5:
					if (MISC::GET_GAME_TIMER() > Static_46 + 60000 || !MISC::IS_INCIDENT_VALID(Static_47))
						func_1();
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							if (MISC::IS_INCIDENT_VALID(Static_47))
								MISC::DELETE_INCIDENT(Static_47);
					break;
			}
		}
	}
}

void func_1() // Position - 0x27A
{
	Static_41 = 0;
	Static_42 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0) // Position - 0x28C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0) // Position - 0x2B8
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

int func_4(int iParam0) // Position - 0x2E0
{
	if (func_6(iParam0) == 233)
		return func_5(iParam0);

	return -1;
}

int func_5(int iParam0) // Position - 0x2FD
{
	if (func_8(iParam0, false))
		return Global_1892798[iParam0 /*615*/].f_10.f_183;

	return -1;
}

int func_6(int iParam0) // Position - 0x320
{
	if (func_7(iParam0))
		if (func_8(iParam0, false))
			return Global_1892798[iParam0 /*615*/].f_10.f_34;

	return -1;
}

bool func_7(int iParam0) // Position - 0x34C
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_8(int iParam0, bool bParam1) // Position - 0x36E
{
	if (func_7(iParam0))
		if (Global_1892798[iParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892798[iParam0 /*615*/].f_10.f_33 != -1)
			return true;

	return false;
}

void func_9() // Position - 0x3B2
{
	if (MISC::GET_GAME_TIMER() > Static_46 + 30000)
		Static_41 = 5;
}

void func_10() // Position - 0x3C9
{
	var uVar0;

	switch (Static_42)
	{
		case 0:
			Static_42 = 1;
			Static_46 = MISC::GET_GAME_TIMER();
			break;
	
		case 1:
			while (!func_20())
			{
				BUILTIN::WAIT(0);
			
				if (func_19() == 3)
					Static_41 = 3;
			
				if (func_19() == 4)
					Static_41 = 4;
			
				if (func_19() == 5)
					Static_41 = 2;
			
				if (MISC::GET_GAME_TIMER() > Static_46 + 30000)
				{
					Static_46 = MISC::GET_GAME_TIMER();
					func_13(0);
				}
			}
		
			if (Static_41 == 0)
				Static_41 = 5;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				func_11(PLAYER::PLAYER_PED_ID(), &Static_43, &uVar0);
		
			Static_46 = MISC::GET_GAME_TIMER();
			break;
	}
}

void func_11(var uParam0, var uParam1, var uParam2) // Position - 0x462
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	var uVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	var uVar25;
	var uVar28;

	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;

	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
			
				uVar10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
				fVar14 = MISC::GET_HEADING_FROM_VECTOR_2D(uVar10, uVar10.f_1);
				fVar15 = fVar16 + 180f;
			
				if (fVar15 > 360f)
					fVar15 = fVar15 - 360f;
			
				if (func_12(fVar14, fVar16, 90f))
					*uParam2 = fVar16;
				else
					*uParam2 = fVar15;
			
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = fVar18 * BUILTIN::TO_FLOAT(iVar1 / 2);
				
					if (fVar17 == 0f)
						fVar17 = fVar17 + fVar18;
				
					if (iVar1 == 5)
						fVar17 = fVar17 + fVar18;
				
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 294f, -895f, 28f, 1) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
						fVar17 = fVar17 + 5f;
					else
						fVar17 = fVar17 + 3.75f;
				
					fVar17 = fVar17 + (fVar13 / 2f);
				}
			
				if (BUILTIN::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > BUILTIN::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, -fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
					fVar17 = -fVar17;
			
				*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + { uParam1->f_2 + 4.5f, uParam1->f_2 + 4.5f, uParam1->f_2 + 4.5f }, *uParam1 + { 4.5f, 0.5f, 0.5f }, 2.5f, 1, 0, 4);
				iVar19 = iVar19 + 1;
				break;
		
			case 1:
				if (iVar0 <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar20, &iVar21, &uVar25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (uVar25.f_2 > uParam1->f_2 + 8.5f)
							{
								iVar19 = iVar19 + 1;
							}
							else
							{
								iVar0 = iVar0 + 1;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19 = iVar19 + 1;
						}
					}
				}
				else
				{
					iVar19 = iVar19 + 1;
				}
				break;
		
			case 2:
				break;
		}
	}
}

bool func_12(float fParam0, float fParam1, float fParam2) // Position - 0x708
{
	float fVar0;
	float fVar1;

	fVar1 = fParam1 - fParam2;

	if (fVar1 < 0f)
		fVar1 = fVar1 + 360f;

	fVar0 = fParam1 + fParam2;

	if (fVar0 >= 360f)
		fVar0 = fVar0 - 360f;

	if (fVar0 > fVar1)
		if (fParam0 < fVar0 && fParam0 > fVar1)
			return true;
	else if (fParam0 < fVar0 || fParam0 > fVar1)
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x77D
{
	if (func_18())
		return;

	if (Global_21859)
		if (func_17())
			func_15(true, true);
		else
			func_15(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_14())
		Global_21627.f_1 = 3;
}

bool func_14() // Position - 0x807
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_15(bool bParam0, bool bParam1) // Position - 0x82E
{
	if (bParam0)
	{
		if (func_16(0))
		{
			Global_21859 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21564);
		
			Global_21555 = { Global_21573[Global_21572 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
		}
	}
	else if (Global_21859 == true)
	{
		Global_21859 = false;
		Global_21555 = { Global_21580[Global_21572 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21564);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
	}
}

bool func_16(int iParam0) // Position - 0x8A2
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

bool func_17() // Position - 0x8F9
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_18() // Position - 0x907
{
	return IS_BIT_SET(Global_1964705, 19);
}

int func_19() // Position - 0x916
{
	return Global_24017;
}

bool func_20() // Position - 0x921
{
	if (Global_23000 == 0)
		return true;

	return false;
}

