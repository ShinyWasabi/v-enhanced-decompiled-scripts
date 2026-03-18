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
	var Static_41 = 0;
	var Static_42 = 0;
	int Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 0;
	var ScriptArg_2 = 1132396544;
	var ScriptArg_3 = 1132396544;
	var ScriptArg_4 = 1132396544;
	var ScriptArg_5 = 0;
	var ScriptArg_6 = -1082130432;
	var ScriptArg_7 = 0;
	var ScriptArg_8 = 0;
	var ScriptArg_9 = 8;
	var ScriptArg_10 = 0;
	var ScriptArg_11 = 0;
	var ScriptArg_12 = 0;
	var ScriptArg_13 = 0;
	var ScriptArg_14 = 0;
	var ScriptArg_15 = 0;
	var ScriptArg_16 = 0;
	var ScriptArg_17 = 0;
	var ScriptArg_18 = 0;
	var ScriptArg_19 = 0;
	var ScriptArg_20 = 0;
	var ScriptArg_21 = 0;
	var ScriptArg_22 = 0;
	var ScriptArg_23 = 0;
	var ScriptArg_24 = 0;
	var ScriptArg_25 = 0;
	var ScriptArg_26 = 0;
	var ScriptArg_27 = 0;
	var ScriptArg_28 = 0;
	var ScriptArg_29 = 0;
	var ScriptArg_30 = 0;
	var ScriptArg_31 = 0;
	var ScriptArg_32 = 0;
	var ScriptArg_33 = 0;
	var ScriptArg_34 = 0;
	var ScriptArg_35 = 0;
	var ScriptArg_36 = 0;
	var ScriptArg_37 = 0;
	var ScriptArg_38 = 0;
	var ScriptArg_39 = 0;
	var ScriptArg_40 = 0;
	var ScriptArg_41 = 0;
	var ScriptArg_42 = 0;
	var ScriptArg_43 = 0;
	var ScriptArg_44 = 0;
	var ScriptArg_45 = 0;
	var ScriptArg_46 = 0;
	var ScriptArg_47 = 0;
	var ScriptArg_48 = 0;
	var ScriptArg_49 = 0;
	var ScriptArg_50 = 0;
	var ScriptArg_51 = 0;
	var ScriptArg_52 = 0;
	var ScriptArg_53 = 0;
	var ScriptArg_54 = 0;
	var ScriptArg_55 = 0;
	var ScriptArg_56 = 0;
	var ScriptArg_57 = 0;
	var ScriptArg_58 = 0;
	var ScriptArg_59 = 0;
	var ScriptArg_60 = 0;
	var ScriptArg_61 = 0;
	var ScriptArg_62 = 0;
	var ScriptArg_63 = 0;
	var ScriptArg_64 = 0;
	var ScriptArg_65 = 0;
	var ScriptArg_66 = -1;
	var ScriptArg_67 = 1092616192;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_19();

	while (true)
	{
		switch (Static_43)
		{
			case 0:
				Static_44 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mission_complete");
				Static_43 = 1;
				break;
		
			case 1:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Static_44))
					Static_43 = 2;
				break;
		
			case 2:
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(Static_44, "SET_MISSION_TITLE", ScriptArg_0, ScriptArg_0.f_1, 0, 0, 0);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(Static_44, "SET_MISSION_TITLE_COLOUR", ScriptArg_0.f_2, ScriptArg_0.f_2, ScriptArg_0.f_2, -1082130432, -1082130432);
			
				if (ScriptArg_0.f_5.f_1 != -1f && !MISC::IS_STRING_NULL(ScriptArg_0.f_5.f_2))
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(Static_44, "SET_TOTAL", BUILTIN::TO_FLOAT(ScriptArg_0.f_5), ScriptArg_0.f_5.f_1, -1f, -1f, -1f, ScriptArg_0.f_5.f_2, 0, 0, 0, 0);
			
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(Static_44, "SET_MEDAL", BUILTIN::TO_FLOAT(ScriptArg_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(Static_44, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			
				for (iVar0 = 0; iVar0 < ScriptArg_0.f_66 + 1; iVar0 = iVar0 + 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_44, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptArg_0.f_9[iVar0 /*7*/]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptArg_0.f_9[iVar0 /*7*/].f_1);
				
					if (ScriptArg_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(BUILTIN::FLOOR(ScriptArg_0.f_9[iVar0 /*7*/].f_3 * 1000f), 6);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					
						if (!MISC::IS_STRING_NULL(ScriptArg_0.f_9[iVar0 /*7*/].f_5))
							func_18(ScriptArg_0.f_9[iVar0 /*7*/].f_5);
					}
					else if (ScriptArg_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!MISC::IS_STRING_NULL(ScriptArg_0.f_9[iVar0 /*7*/].f_5) && !MISC::IS_STRING_NULL(ScriptArg_0.f_9[iVar0 /*7*/].f_6))
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(ScriptArg_0.f_9[iVar0 /*7*/].f_6);
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(ScriptArg_0.f_9[iVar0 /*7*/].f_5);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptArg_0.f_9[iVar0 /*7*/].f_2);
					
						if (ScriptArg_0.f_9[iVar0 /*7*/].f_3 % 1f == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptArg_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /* GXT: ~1~ */);
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptArg_0.f_9[iVar0 /*7*/].f_3, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					
						if (ScriptArg_0.f_9[iVar0 /*7*/].f_4 % 1f == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptArg_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /* GXT: ~1~ */);
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptArg_0.f_9[iVar0 /*7*/].f_4, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					
						if (!MISC::IS_STRING_NULL(ScriptArg_0.f_9[iVar0 /*7*/].f_5))
							func_18(ScriptArg_0.f_9[iVar0 /*7*/].f_5);
					
						if (!MISC::IS_STRING_NULL(ScriptArg_0.f_9[iVar0 /*7*/].f_6))
							func_18(ScriptArg_0.f_9[iVar0 /*7*/].f_6);
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				if (ScriptArg_0.f_5 != 0 && !MISC::IS_STRING_NULL(ScriptArg_0.f_5.f_2))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_44, "SET_TOTAL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptArg_0.f_5);
				
					if (!MISC::IS_STRING_NULL(ScriptArg_0.f_5.f_3))
						func_18(ScriptArg_0.f_5.f_3);
					else
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptArg_0.f_5.f_1);
				
					func_18(ScriptArg_0.f_5.f_2);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_44, "DRAW_MENU_LIST");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_12(1);
				func_9(&Static_45);
			
				if (!func_8(Global_114931.f_19104, 4096))
					func_6(&(Global_114931.f_19104), 4096);
			
				Static_43 = 3;
				break;
		
			case 3:
				if (func_2(&Static_45) > ScriptArg_0.f_67 && ScriptArg_0.f_67 != -1f || CAM::IS_SCREEN_FADED_OUT() || Global_33937)
				{
					func_19();
				}
				else
				{
					func_1(true);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Static_44, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
				
					if (HUD::IS_HUD_COMPONENT_ACTIVE(10))
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_19();
}

void func_1(bool bParam0) // Position - 0x447
{
	Global_80566 = bParam0;
	Global_80567 = bParam0;
}

float func_2(var uParam0) // Position - 0x45B
{
	if (func_5(uParam0))
		if (func_4(uParam0))
			return uParam0->f_2;
		else
			return func_3(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_3(bool bParam0) // Position - 0x497
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = BUILTIN::TO_FLOAT(uVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

bool func_4(var uParam0) // Position - 0x4EF
{
	return IS_BIT_SET(*uParam0, 2);
}

bool func_5(var uParam0) // Position - 0x4FC
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_6(int iParam0, int iParam1) // Position - 0x509
{
	func_7(iParam0, iParam1);
}

void func_7(int iParam0, int iParam1) // Position - 0x519
{
	*iParam0 = *iParam0 || iParam1;
}

bool func_8(int iParam0, int iParam1) // Position - 0x52A
{
	return iParam0 && iParam1 != false;
}

void func_9(var uParam0) // Position - 0x539
{
	if (!func_5(uParam0))
		func_10(uParam0);
}

void func_10(var uParam0) // Position - 0x551
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1) // Position - 0x560
{
	uParam0->f_1 = func_3(IS_BIT_SET(*uParam0, 4)) - fParam1;
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0) // Position - 0x58B
{
	if (func_17())
		return;

	if (Global_21859)
		if (func_16())
			func_14(true, true);
		else
			func_14(false, false);

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

bool func_13() // Position - 0x615
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_14(bool bParam0, bool bParam1) // Position - 0x63C
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_15(int iParam0) // Position - 0x6B0
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

bool func_16() // Position - 0x707
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_17() // Position - 0x715
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_18(var uParam0) // Position - 0x724
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_19() // Position - 0x736
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Static_44);
	Global_33937 = false;
	func_1(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

