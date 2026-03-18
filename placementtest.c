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
#endregion

void main() // Position - 0x0
{
	var uVar0;

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
	uVar0 = func_13();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uVar0))
		{
			switch (Static_43)
			{
				case 0:
					func_11(&uVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, false);
					func_10(&uVar0);
					Static_44 = MISC::GET_GAME_TIMER();
					Static_43 = 1;
					break;
			
				case 1:
					if (MISC::GET_GAME_TIMER() - Static_44 > 3000)
					{
						func_9(&uVar0);
						Static_43 = 2;
					}
					break;
			}
		
			func_1(&uVar0, false);
		}
	
		BUILTIN::WAIT(0);
	}
}

bool func_1(var uParam0, bool bParam1) // Position - 0xEF
{
	if (!func_8(&(uParam0->f_2)))
		func_6(&(uParam0->f_2));

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);

	if (bParam1)
		if (PAD::IS_CONTROL_PRESSED(2, 201))
			return false;

	if (uParam0->f_1 == -1)
		return true;

	if (func_3(&(uParam0->f_2)) * 1000f > BUILTIN::TO_FLOAT(uParam0->f_1))
	{
		func_2(&(uParam0->f_2));
		return false;
	}

	return true;
}

void func_2(var uParam0) // Position - 0x175
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0) // Position - 0x18B
{
	if (func_8(uParam0))
		if (func_5(uParam0))
			return uParam0->f_2;
		else
			return func_4(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_4(bool bParam0) // Position - 0x1C7
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

bool func_5(var uParam0) // Position - 0x21F
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_6(var uParam0) // Position - 0x22C
{
	func_7(uParam0, 0f);
}

void func_7(var uParam0, float fParam1) // Position - 0x23B
{
	uParam0->f_1 = func_4(IS_BIT_SET(*uParam0, 4)) - fParam1;
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0) // Position - 0x266
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_9(var uParam0) // Position - 0x273
{
	uParam0->f_1 = 300;
	func_6(&(uParam0->f_2));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10(var uParam0) // Position - 0x2A0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6) // Position - 0x2B7
{
	uParam0->f_1 = -1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_12(char* sParam0) // Position - 0x305
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

var func_13() // Position - 0x317
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SPLASH_TEXT");
}

