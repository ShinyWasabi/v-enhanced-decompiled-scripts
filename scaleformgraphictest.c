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

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_2();

	Static_16 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("graphic_design");

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Static_16))
	{
		BUILTIN::WAIT(0);
	}

	while (true)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(Static_16, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(Static_16);
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0) // Position - 0x93
{
	if (Global_21606 == false)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_CONTROL_PRESSED(2, 205) || PAD::IS_CONTROL_PRESSED(2, 206) || PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_CONTROL_PRESSED(2, 202))
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
		if (PAD::IS_CONTROL_PRESSED(2, 189))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 190))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 205))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 206))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 188))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 187))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(2, 202))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2() // Position - 0x215
{
	func_3(false);
	MISC::SET_GAME_PAUSED(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Static_16);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0) // Position - 0x231
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

void func_4(int iParam0) // Position - 0x294
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

bool func_5() // Position - 0x31E
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_6(bool bParam0, bool bParam1) // Position - 0x345
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

bool func_7() // Position - 0x3B9
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_8() // Position - 0x3C7
{
	return IS_BIT_SET(Global_1964705, 19);
}

bool func_9(int iParam0) // Position - 0x3D6
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

void func_10() // Position - 0x42D
{
	if (Global_21627.f_1 == 9 || Global_21627.f_1 == 10)
	{
		Global_23053 = false;
		Global_23049 = 1;
	}
}

