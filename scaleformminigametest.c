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
	int Static_19 = 0;
	int Static_20 = 0;
	bool Static_21 = 0;
	bool Static_22 = 0;
	float Static_23 = 0f;
	bool Static_24 = 0;
	bool Static_25 = 0;
	float Static_26 = 0f;
	bool Static_27 = 0;
	bool Static_28 = 0;
	float Static_29 = 0f;
	bool Static_30 = 0;
	bool Static_31 = 0;
	float Static_32 = 0f;
	bool Static_33 = 0;
	bool Static_34 = 0;
	float Static_35 = 0f;
	bool Static_36 = 0;
	bool Static_37 = 0;
	float Static_38 = 0f;
	bool Static_39 = 0;
	bool Static_40 = 0;
	float Static_41 = 0f;
	bool Static_42 = 0;
	bool Static_43 = 0;
	float Static_44 = 0f;
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
	Static_18 = HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
	Static_20 = 1;
	Static_23 = 0f;
	Static_26 = 0f;
	Static_29 = 0f;
	Static_32 = 0f;
	Static_35 = 0f;
	Static_38 = 0f;
	Static_41 = 0f;
	Static_44 = 0f;

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_2();

	Static_16 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("p_bubblegum");

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Static_16))
	{
		BUILTIN::WAIT(0);
	}

	while (true)
	{
		Static_19 == 1;
	
		if (Static_20 == 1)
		{
			Static_20 = 0;
			Static_17 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		
			if (CAM::DOES_CAM_EXIST(Static_17))
			{
				CAM::SET_CAM_PARAMS(Static_17, -160.6632f, -1072.1438f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(Static_17, 0.01f);
				CAM::SET_CAM_FAR_CLIP(Static_17, 0.02f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
		
			HUD::SET_BLIP_SPRITE(Static_18, 66);
		}
	
		Static_19 = 1;
		GRAPHICS::DRAW_SCALEFORM_MOVIE(Static_16, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(Static_16);
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0) // Position - 0x13F
{
	if (Global_21606 == false)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190))
		{
			Global_21606 = true;
			BUILTIN::SETTIMERA(0);
		}
	}
	else if (BUILTIN::TIMERA() > 50)
	{
		Global_21606 = false;
	}

	if (Global_21606 == false)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
		{
			Static_21 = true;
			Static_23 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 189))
		{
			Static_21 = true;
			Static_23 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 189))
		{
			Static_21 = false;
			Static_23 = 0f;
		}
	
		if (!Static_21 == Static_22)
		{
			Static_22 = Static_21;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_23);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
		{
			Static_24 = true;
			Static_26 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 190))
		{
			Static_24 = true;
			Static_26 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 190))
		{
			Static_24 = false;
			Static_26 = 0f;
		}
	
		if (!Static_24 == Static_25)
		{
			Static_25 = Static_24;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_26);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			Static_27 = true;
			Static_29 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 188))
		{
			Static_27 = true;
			Static_29 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 188))
		{
			Static_27 = false;
			Static_29 = 0f;
		}
	
		if (!Static_27 == Static_28)
		{
			Static_28 = Static_27;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_29);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			Static_30 = true;
			Static_32 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 187))
		{
			Static_30 = true;
			Static_32 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 187))
		{
			Static_30 = false;
			Static_32 = 0f;
		}
	
		if (!Static_30 == Static_31)
		{
			Static_31 = Static_30;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_32);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
		{
			Static_33 = true;
			Static_35 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 202))
		{
			Static_33 = true;
			Static_35 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 202))
		{
			Static_33 = false;
			Static_35 = 0f;
		}
	
		if (!Static_33 == Static_34)
		{
			Static_34 = Static_33;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_35);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
		{
			Static_36 = true;
			Static_38 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 204))
		{
			Static_36 = true;
			Static_38 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 204))
		{
			Static_36 = false;
			Static_38 = 0f;
		}
	
		if (!Static_36 == Static_37)
		{
			Static_37 = Static_36;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_38);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			Static_39 = true;
			Static_41 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			Static_39 = true;
			Static_41 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 201))
		{
			Static_39 = false;
			Static_41 = 0f;
		}
	
		if (!Static_39 == Static_40)
		{
			Static_40 = Static_39;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_41);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
		{
			Static_42 = true;
			Static_44 = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 203))
		{
			Static_42 = true;
			Static_44 = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(2, 203))
		{
			Static_42 = false;
			Static_44 = 0f;
		}
	
		if (!Static_42 == Static_43)
		{
			Static_43 = Static_42;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Static_44);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2() // Position - 0x43D
{
	if (CAM::DOES_CAM_EXIST(Static_17))
		CAM::DESTROY_CAM(Static_17, 0);

	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	func_3(false);
	MISC::SET_GAME_PAUSED(0);
	HUD::CLEAR_HELP(1);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Static_16);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0) // Position - 0x47A
{
	if (bParam0)
	{
		func_10();
	
		if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
			MISC::SET_BIT(&Global_9464, 16);
	
		Global_21627.f_1 = 1;
	
		if (func_9(0))
			func_4(0);
	}
	else if (Global_21627.f_1 == 1)
	{
		if (!(Global_21627.f_1 == 0))
			Global_21627.f_1 = 3;
	}
}

void func_4(int iParam0) // Position - 0x4DD
{
	if (func_8())
		return;

	if (Global_21859)
		if (func_7())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_5())
		Global_21627.f_1 = 3;
}

bool func_5() // Position - 0x567
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_6(bool bParam0, bool bParam1) // Position - 0x58E
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7() // Position - 0x602
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_8() // Position - 0x610
{
	return IS_BIT_SET(Global_1964705, 19);
}

bool func_9(int iParam0) // Position - 0x61F
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

void func_10() // Position - 0x676
{
	if (Global_21627.f_1 == 9 || Global_21627.f_1 == 10)
	{
		Global_23053 = false;
		Global_23049 = 1;
	}
}

