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
	var Static_41 = 0;
	char* Static_42 = 0;
	char* Static_43 = 0;
	int Static_44 = 0;
	int Static_45 = 0;
	int Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
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
	Static_19 = "NULL";
	Static_22 = 0f;
	Static_26 = -0.0375f;
	Static_27 = 0.17f;
	Static_31 = 80f;
	Static_32 = 140f;
	Static_33 = 180f;
	Static_36 = 3;
	Static_42 = "RCMBarryLeadInOut";
	Static_43 = "idle";
	Static_47 = { 189.5964f, -956.0344f, 29.5771f };
	Static_50 = { 190.2424f, -956.379f, 28.63f };
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);

	if (func_25(PLAYER::PLAYER_PED_ID()))
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_22(false);

	STREAMING::REQUEST_ANIM_DICT(Static_42);
	HUD::REQUEST_ADDITIONAL_TEXT("BARY1", 7);

	while (!STREAMING::HAS_ANIM_DICT_LOADED(Static_42) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		BUILTIN::WAIT(0);
	}

	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	func_25(PLAYER::PLAYER_PED_ID());
	Static_44 = MISC::GET_GAME_TIMER() + 13000;
	Static_45 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	func_19();

	while (!func_13(&Static_41, 49, Static_50, func_18(1.12f), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		BUILTIN::WAIT(0);
	}

	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	func_12();
	Static_46 = MISC::GET_GAME_TIMER() + 1000;
	PAD::DISABLE_CONTROL_ACTION(0, 26, 1);

	while (true)
	{
		func_25(PLAYER::PLAYER_PED_ID());
	
		if (MISC::GET_GAME_TIMER() < Static_46)
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	
		func_11();
	
		if (!func_25(Static_41))
			func_22(false);
	
		func_3();
	
		if (func_2(PLAYER::PLAYER_PED_ID(), Static_50, 1) > 70f)
		{
			func_1(&Static_38, false);
			func_1(&Static_39, false);
			func_1(&Static_40, false);
			func_22(false);
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, bool bParam1) // Position - 0x1D9
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
	
		if (!bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		else
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*uParam0);
	}
}

float func_2(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x214
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	else
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uParam1, iParam4);
}

bool func_3() // Position - 0x24E
{
	var uVar0;

	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(Static_41) && !func_9() && MISC::GET_GAME_TIMER() > Static_44 && func_8(PLAYER::PLAYER_PED_ID(), Static_41, 1) < 20f && !MISC::GET_MISSION_FLAG())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, Static_41, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		Static_44 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 18000);
		return true;
	}

	return false;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2DE
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_21866, 0);
	Global_23003 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_22990, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x319
{
	Global_22454 = { *uParam0 };
	Global_8779 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23070, sParam2, 24);
	Global_23989 = iParam5;

	if (iParam3 == 0)
	{
		Global_23987 = 1;
		Global_23985 = 0;
	}
	else
	{
		Global_23987 = 0;
		Global_23985 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23988 = 1;
		Global_23986 = 0;
	}
	else
	{
		Global_23988 = 0;
		Global_23986 = 1;
	}
}

char* func_6() // Position - 0x36F
{
	char* sVar0;

	switch (Static_45)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
	
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
	
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
	
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
	
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}

	Static_45 = Static_45 + 1;

	if (Static_45 > 4)
		Static_45 = 0;

	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x3D5
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80305)
	{
		if (!PED::IS_PED_INJURED(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
	
		if (!PED::IS_PED_INJURED(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
	}
}

float func_8(var uParam0, var uParam1, int iParam2) // Position - 0x470
{
	var uVar0;
	var uVar3;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	else
		uVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };

	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
		uVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	else
		uVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uVar3, iParam2);
}

bool func_9() // Position - 0x4CE
{
	if (Global_23000 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

bool func_10(var uParam0) // Position - 0x4F0
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

void func_11() // Position - 0x511
{
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Static_50, 5f))
	{
		if (func_10(Static_41))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Static_41, 0);
			PED::APPLY_DAMAGE_TO_PED(Static_41, 1000, 1, 0, 0);
		}
	
		if (func_10(Static_39))
			ENTITY::FREEZE_ENTITY_POSITION(Static_39, 0);
	
		if (func_10(Static_38))
			ENTITY::FREEZE_ENTITY_POSITION(Static_38, 0);
	}
}

void func_12() // Position - 0x562
{
	if (func_10(Static_41))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Static_41))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_41, 1, 0);
	
		PED::SET_PED_PROP_INDEX(Static_41, 1, 0, 0, 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_41, 1);
		PED::SET_PED_MONEY(Static_41, 0);
		PED::SET_PED_CAN_BE_TARGETTED(Static_41, 0);
		PED::SET_PED_NAME_DEBUG(Static_41, "POSTBARRY");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_41, joaat("PLAYER"));
		ENTITY::SET_ENTITY_COLLISION(Static_41, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Static_41, 1);
		ENTITY::SET_ENTITY_COORDS(Static_41, Static_50, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Static_41, func_18(1.12f));
		ENTITY::FREEZE_ENTITY_POSITION(Static_41, 1);
		TASK::TASK_PLAY_ANIM(Static_41, Static_42, Static_43, 8f, -8f, -1, 9, 0, 0, 0, 0);
		TASK::TASK_LOOK_AT_ENTITY(Static_41, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

bool func_13(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, bool bParam6) // Position - 0x614
{
	int iVar0;

	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
	
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
				PED::DELETE_PED(uParam0);
		
			*uParam0 = PED::CREATE_PED(26, iVar0, uParam2, fParam5, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
		
			if (iVar0 == joaat("IG_LAMARDAVIS"))
				if (PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 3) == 0)
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 2, 0, 0);
		
			func_14(*uParam0, iParam1);
		
			if (bParam6)
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		
			return true;
		}
	}

	return false;
}

int func_14(int iParam0, int iParam1) // Position - 0x6A2
{
	int iVar0;

	iVar0 = 7;

	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}

	Global_98263[iVar0 - 3] = iParam0;
	return 1;
}

int func_15(int iParam0) // Position - 0x6E8
{
	if (!func_17(iParam0))
		return func_16(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_16(int iParam0) // Position - 0x70E
{
	return Global_2339[iParam0 /*29*/];
}

bool func_17(int iParam0) // Position - 0x71D
{
	return iParam0 < 3;
}

float func_18(float fParam0) // Position - 0x729
{
	return fParam0 * 57.29578f;
}

void func_19() // Position - 0x739
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("PROP_PROTEST_TABLE_01"), 0))
	{
		Static_39 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("PROP_PROTEST_TABLE_01"), 0, 0, 1);
	
		if (func_25(Static_39))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Static_39))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_39, 1, 0);
		
			Static_47 = { 189.5964f, -956.0344f, 29.54f };
			ENTITY::SET_ENTITY_COORDS(Static_39, Static_47, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Static_39, func_18(-2.01f));
			ENTITY::FREEZE_ENTITY_POSITION(Static_39, 1);
		}
	}

	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("PROP_CHAIR_08"), 0))
	{
		Static_38 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("PROP_CHAIR_08"), 0, 0, 1);
	
		if (func_25(Static_38))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Static_38))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_38, 1, 0);
		
			Static_47 = { 190.2574f, -956.3513f, 29.621f };
			ENTITY::SET_ENTITY_COORDS(Static_38, Static_47, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Static_38, func_18(-1.68f));
			ENTITY::FREEZE_ENTITY_POSITION(Static_38, 1);
		}
	}
	else
	{
		Static_47 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&Static_38, joaat("PROP_CHAIR_08"), Static_47, func_18(-1.68f));
		ENTITY::SET_ENTITY_COORDS(Static_38, Static_47, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Static_38, func_18(-1.68f));
		ENTITY::FREEZE_ENTITY_POSITION(Static_38, 1);
	}

	Static_47 = { 192.4462f, -953.5946f, 29.0919f };

	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Static_47, 25f, joaat("PROP_PROTEST_SIGN_01"), 0))
	{
		Static_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Static_47, 25f, joaat("PROP_PROTEST_SIGN_01"), 0, 0, 1);
	
		if (func_25(Static_40))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Static_40))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Static_40, 1, 0);
		
			Static_47.f_2 = 29.603f;
			ENTITY::SET_ENTITY_COORDS(Static_40, Static_47, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Static_40, 23.45f);
		}
	}
	else
	{
		func_20(&Static_40, joaat("PROP_PROTEST_SIGN_01"), Static_47, 23.45f);
		ENTITY::SET_ENTITY_COORDS(Static_40, Static_47, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Static_40, 23.45f);
	}
}

void func_20(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x96A
{
	func_21(uParam0);
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, uParam2, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
}

void func_21(var uParam0) // Position - 0x991
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
	
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_22(bool bParam0) // Position - 0x9BC
{
	if (bParam0)
		func_24(&Static_41);
	else
		func_23(&Static_41, 1, 0, 1);

	if (func_10(Static_39))
		ENTITY::FREEZE_ENTITY_POSITION(Static_39, 0);

	if (func_10(Static_38))
		ENTITY::FREEZE_ENTITY_POSITION(Static_38, 0);

	if (bParam0)
	{
		func_21(&Static_38);
		func_21(&Static_39);
		func_21(&Static_40);
	}
	else
	{
		func_1(&Static_38, false);
		func_1(&Static_39, false);
		func_1(&Static_40, false);
	}

	STREAMING::REMOVE_ANIM_DICT(Static_42);
	HUD::CLEAR_ADDITIONAL_TEXT(7, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA3A
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
		
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_24(var uParam0) // Position - 0xA8A
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
	
		PED::DELETE_PED(uParam0);
	}
}

bool func_25(var uParam0) // Position - 0xACB
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

