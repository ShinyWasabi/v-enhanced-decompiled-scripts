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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
			func_4(19);
	
		func_3();
	}

	func_2(19);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);

	while (!AUDIO::LOAD_STREAM("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		BUILTIN::WAIT(0);
	}

	AUDIO::PLAY_STREAM_FROM_POSITION(-147f, -1005f, 28f);

	while (func_1(70))
	{
		BUILTIN::WAIT(0);
	}

	func_4(19);
	func_3();
}

bool func_1(int iParam0) // Position - 0xB6
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

int func_2(int iParam0) // Position - 0xE3
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114931.f_9092.f_99.f_219[iVar0], iVar1))
		return 0;

	MISC::SET_BIT(&Global_114931.f_9092.f_99.f_219[iVar0], iVar1);
	return 1;
}

void func_3() // Position - 0x13A
{
	AUDIO::STOP_STREAM();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_4(int iParam0) // Position - 0x14E
{
	int iVar0;
	int iVar1;

	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114931.f_9092.f_99.f_219[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&Global_114931.f_9092.f_99.f_219[iVar0], iVar1);
		return 1;
	}

	return 0;
}

