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
	int Static_18 = 0;
	int Static_19 = 0;
	bool Static_20 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_6();

	if (!Global_1 && !MISC::IS_PC_VERSION() && MISC::HAS_GAME_INSTALLED_THIS_SESSION())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(1);
	
		if (!CAM::IS_SCREEN_FADED_OUT())
			if (!CAM::IS_SCREEN_FADING_OUT())
				CAM::DO_SCREEN_FADE_OUT(800);
	
		Static_18 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
		Static_19 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("INSTRUCTIONAL_BUTTONS");
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Static_18) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Static_19))
		{
			BUILTIN::WAIT(0);
		}
	
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_18, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP" /* GXT: Install Complete */);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_19, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_19, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_4(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 201, 1));
		func_5("HUD_CONTINUE" /* GXT: Continue */);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_19, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			BUILTIN::WAIT(0);
		}
	
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
	
		while (!Static_20)
		{
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Static_18, 255, 255, 255, 0, 0);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Static_19, 255, 255, 255, 0, 0);
		
			if (PAD::IS_CONTROL_PRESSED(2, 201))
				Static_20 = true;
		
			BUILTIN::WAIT(0);
		}
	
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		func_3(1, 1);
		func_1();
	}

	Global_80576.f_1 = 0;
	MISC::SET_BIT(&(Global_114931.f_10023.f_25), 0);
	func_6();
}

int func_1() // Position - 0x17D
{
	if (func_2(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_2(bool bParam0) // Position - 0x1C8
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

void func_3(int iParam0, int iParam1) // Position - 0x1F0
{
	Global_102493.f_7 = iParam0;
	Global_102493.f_8 = iParam1;
}

void func_4(var uParam0) // Position - 0x208
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

void func_5(char* sParam0) // Position - 0x216
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_6() // Position - 0x228
{
	if (Static_18 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Static_18);

	if (Static_19 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Static_19);

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

