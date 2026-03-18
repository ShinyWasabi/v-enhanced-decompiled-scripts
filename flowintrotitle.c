#region Static Var
	int Static_0 = 0;
	int Static_1 = 0;
	bool Static_2 = 0;
#endregion

void main() // Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		func_9();

	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
	MISC::CLEAR_BIT(&(Global_114931.f_10023.f_25), 1);
	func_6();
	SCRIPT::SET_NO_LOADING_SCREEN(1);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	Static_0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Static_0))
	{
		func_6();
		BUILTIN::WAIT(0);
	}

	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		func_6();
		BUILTIN::WAIT(0);
	}

	func_5("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	Static_1 = MISC::GET_GAME_TIMER() + 8000 + BUILTIN::ROUND(2f * 1000f);

	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_6();
	
		if (!IS_BIT_SET(Global_114931.f_10023.f_25, 1))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Static_0, 255, 255, 255, 255, 0);
		
			if (!Static_2)
			{
				if (MISC::GET_GAME_TIMER() > Static_1)
				{
					func_4("TITLE");
					Static_2 = true;
					Static_1 = MISC::GET_GAME_TIMER() + BUILTIN::ROUND(2f * 1000f);
				}
			}
			else if (MISC::GET_GAME_TIMER() > Static_1)
			{
				MISC::SET_BIT(&(Global_114931.f_10023.f_25), 1);
				func_3(1, 1);
				func_1();
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_9();
}

int func_1() // Position - 0x123
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

bool func_2(bool bParam0) // Position - 0x16E
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

void func_3(int iParam0, int iParam1) // Position - 0x196
{
	Global_102493.f_7 = iParam0;
	Global_102493.f_8 = iParam1;
}

void func_4(char* sParam0) // Position - 0x1AE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_0, "HIDE_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_5(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x1D5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Static_0, "SHOW_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_6() // Position - 0x226
{
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	func_7();
}

void func_7() // Position - 0x243
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_8();
}

void func_8() // Position - 0x253
{
	Global_24407.f_134 = 1;
}

void func_9() // Position - 0x261
{
	MISC::SET_BIT(&(Global_114931.f_10023.f_25), 1);

	if (Static_0 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Static_0);

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(0);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

