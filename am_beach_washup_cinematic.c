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
	var Static_38 = 0;
	var Static_39 = 0;
	var Static_40 = 0;
	var Static_41 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 0;
	var ScriptArg_2 = 0;
	var ScriptArg_3 = 1176255488;
	var ScriptArg_4 = 1;
	var ScriptArg_5 = -1;
	var ScriptArg_6 = -1;
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
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;
	Static_33 = 3;
	func_44(&ScriptArg_0);

	while (true)
	{
		func_43();
	
		if (func_34())
			break;
	
		func_15();
	}

	func_1();
}

void func_1() // Position - 0x85
{
	func_3(&Static_35);
	func_2();
}

void func_2() // Position - 0x97
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0) // Position - 0xA3
{
	var uVar0;

	func_4(false, true, true, 0, false, false, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_6))
		CAM::DESTROY_CAM(uParam0->f_6, 0);

	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	*uParam0 = { uVar0 };
}

void func_4(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6) // Position - 0xDA
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_14(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21627.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		
			if (!func_13())
				Global_21627.f_1 = 3;
		
			Global_23000 = 5;
		}
	
		func_12(1, iParam3, bParam2, 0);
		Global_65033 = 1;
		Global_77362 = 1;
		Global_80303 = 1;
	}
	else
	{
		func_14(0);
		HUD::THEFEED_RESUME();
		Global_65033 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_12(0, iParam3, bParam2, 0);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID()) && !func_6(PLAYER::PLAYER_ID(), 0) && !func_5() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
	
		Global_80303 = 0;
	}
}

bool func_5() // Position - 0x229
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_6(int iParam0, int iParam1) // Position - 0x243
{
	bool bVar0;

	if (!func_9(iParam0))
		return false;

	if (iParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_7(-1, false) == 8;
	else
		bVar0 = Global_1845299[iParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;

	return bVar0;
}

int func_7(int iParam0, bool bParam1) // Position - 0x29C
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;

	if (iVar1 == -1)
		iVar1 = func_8();

	if (Global_1575072[iVar1] == 1)
	{
		bParam1;
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574921[iVar1];
		bParam1;
	}

	return iVar0;
}

int func_8() // Position - 0x2DD
{
	return Global_1574927;
}

bool func_9(int iParam0) // Position - 0x2E9
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_10(int iParam0) // Position - 0x30B
{
	if (func_6(iParam0, 0))
		return true;

	if (func_11())
		if (iParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

bool func_11() // Position - 0x34A
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_12(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x358
{
	int iVar0;

	iVar0 = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != iParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}

	return iVar0;
}

bool func_13() // Position - 0x38B
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_14(int iParam0) // Position - 0x3B2
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 13);
	else
		MISC::CLEAR_BIT(&Global_9463, 13);
}

void func_15() // Position - 0x3D5
{
	if (func_16(&Static_35))
		func_1();
}

bool func_16(var uParam0) // Position - 0x3EA
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	func_31(true);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	func_25(0);

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		HUD::SET_PAUSE_MENU_ACTIVE(0);

	switch (func_24(uParam0))
	{
		case 0:
			func_19(uParam0);
			break;
	
		case 1:
			func_17(uParam0);
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17(var uParam0) // Position - 0x448
{
	var uVar0;

	uVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_5);

	if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar0) >= 0.9f)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
		CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0, 0);
		func_18(uParam0, 2);
	}
}

void func_18(var uParam0, int iParam1) // Position - 0x494
{
	*uParam0 = iParam1;
}

void func_19(var uParam0) // Position - 0x4A1
{
	char* sVar0;

	sVar0 = func_21();
	STREAMING::REQUEST_ANIM_DICT(sVar0);

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		return;

	CAM::DO_SCREEN_FADE_IN(800);
	func_18(uParam0, 1);
	func_20(uParam0);
}

void func_20(var uParam0) // Position - 0x4D6
{
	char* sVar0;

	sVar0 = func_21();
	uParam0->f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_5, sVar0, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_5);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "HS4F_IG25_BEACH", 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	uParam0->f_6 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), 1);
	CAM::PLAY_CAM_ANIM(uParam0->f_6, "action_camera", sVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	STREAMING::REMOVE_ANIM_DICT(sVar0);
}

char* func_21() // Position - 0x582
{
	if (func_22())
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";

	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

bool func_22() // Position - 0x59A
{
	return func_23(PLAYER::PLAYER_ID());
}

bool func_23(var uParam0) // Position - 0x5AA
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("MP_F_FREEMODE_01"))
		return 1;

	return 0;
}

int func_24(var uParam0) // Position - 0x5C9
{
	return *uParam0;
}

void func_25(int iParam0) // Position - 0x5D4
{
	if (func_30())
		return;

	if (!(Global_21627.f_1 == 1))
	{
		if (func_29(0))
			func_26(iParam0);
	
		MISC::SET_BIT(&Global_9464, 2);
	}
}

void func_26(int iParam0) // Position - 0x607
{
	if (func_30())
		return;

	if (Global_21859)
		if (func_28())
			func_27(true, true);
		else
			func_27(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_13())
		Global_21627.f_1 = 3;
}

void func_27(bool bParam0, bool bParam1) // Position - 0x691
{
	if (bParam0)
	{
		if (func_29(0))
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

bool func_28() // Position - 0x705
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_29(int iParam0) // Position - 0x713
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

bool func_30() // Position - 0x76A
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_31(bool bParam0) // Position - 0x779
{
	if (bParam0)
		func_33();

	func_32(4, -1);
	func_32(6, -1);
	func_32(7, -1);
	func_32(3, -1);
	func_32(1, -1);
	func_32(2, -1);
	func_32(11, -1);
	func_32(13, -1);
	func_32(14, -1);
	func_32(16, -1);
}

void func_32(int iParam0, int iParam1) // Position - 0x7CA
{
	MISC::SET_BIT(&(Global_1677594.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1677594.f_170[iParam1] = 1;
			break;
	}
}

void func_33() // Position - 0x800
{
	Global_2733138.f_3726 = 0;
}

bool func_34() // Position - 0x810
{
	if (func_35())
		return true;

	return false;
}

bool func_35() // Position - 0x824
{
	if (Global_1575064 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_42())
		return true;

	if (Global_2699585)
		return true;

	if (func_41())
		return true;

	if (func_40(159))
		if (!func_39())
			return true;

	if (func_40(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (func_36() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_36()) == 0)
			return true;

	return false;
}

int func_36() // Position - 0x8A8
{
	switch (func_38())
	{
		case 0:
			return func_37();
	
		case 2:
			return joaat("CREATOR");
	}

	return 0;
}

int func_37() // Position - 0x8DB
{
	switch (Global_2699694)
	{
		case 0:
			return joaat("FREEMODE");
	
		default:
		
	}

	return joaat("FREEMODE");
}

int func_38() // Position - 0x8FF
{
	return Global_33792;
}

bool func_39() // Position - 0x90A
{
	return Global_2685153.f_700;
}

bool func_40(int iParam0) // Position - 0x919
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
		return true;

	return false;
}

bool func_41() // Position - 0x930
{
	return Global_2696981;
}

bool func_42() // Position - 0x93C
{
	return Global_2685153.f_695;
}

void func_43() // Position - 0x94B
{
	BUILTIN::WAIT(0);
}

void func_44(var uParam0) // Position - 0x958
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_45(&Static_35, *uParam0, uParam0->f_3);
}

void func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x976
{
	func_47(uParam0, uParam1);
	func_46(uParam0, uParam4);
	func_4(true, true, true, 0, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1, 1, 0, 0, 1);

	if (CAM::IS_SCREEN_FADED_OUT())
		STREAMING::LOAD_ALL_OBJECTS_NOW();
}

void func_46(var uParam0, var uParam1) // Position - 0x9B6
{
	uParam0->f_4 = uParam1;
}

void func_47(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x9C4
{
	uParam0->f_1 = { uParam1 };
}

