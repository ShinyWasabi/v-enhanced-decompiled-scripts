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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (STREAMING::IS_GAME_INSTALLED())
	{
		SCRIPT::REQUEST_SCRIPT(func_4());
		func_2(0);
	}

	while (LANDINGPAGE::IS_LANDING_PAGE_ACTIVE())
	{
		BUILTIN::WAIT(0);
	}

	while (!MISC::IS_SESSION_INITIALIZED())
	{
		BUILTIN::WAIT(0);
	}

	func_1();
}

void func_1() // Position - 0x66
{
	char* sVar0;

	sVar0 = func_4();
	SCRIPT::REQUEST_SCRIPT(sVar0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0))
	{
		SCRIPT::REQUEST_SCRIPT(sVar0);
		BUILTIN::WAIT(0);
	}

	BUILTIN::START_NEW_SCRIPT(sVar0, 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
}

void func_2(int iParam0) // Position - 0xA2
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 14; iVar0 = iVar0 + 1)
	{
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(func_3(iVar0));
	}

	switch (iParam0)
	{
		case 0:
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("STANDARD_GLOBAL_REG"));
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("STANDARD_GLOBAL_INIT"));
			break;
	}
}

int func_3(int iParam0) // Position - 0xE9
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_REGISTRATION");
	
		case 1:
			return joaat("MP_FM_REGISTRATION");
	
		case 2:
			return joaat("TUNABLES_REGISTRATION");
	
		case 3:
			return joaat("SC_LB_GLOBAL_BLOCK");
	
		case 4:
			return joaat("MP_SAVE_GAME_GLOBAL_BLOCK");
	
		case 5:
			return joaat("MP_PROP_GLOBAL_BLOCK");
	
		case 6:
			return joaat("MP_PROP_SPECIAL_GLOBAL_BLOCK");
	
		case 7:
			return joaat("TITLE_UPDATE_REGISTRATION");
	
		case 8:
			return joaat("TITLE_UPDATE_REGISTRATION_2");
	
		case 9:
			return joaat("GLOBALS_FMMC_STRUCT_REGISTRATION");
	
		case 10:
			return joaat("GLOBALS_FMMCSTRUCT2_REGISTRATION");
	
		case 11:
			return joaat("GLOBALS_FMMCSTRUCT3_REGISTRATION");
	
		case 12:
			return joaat("SP_DLC_REGISTRATION");
	
		case 13:
			return joaat("SP_PILOTSCHOOL_REG");
	
		default:
		
	}

	return -1;
}

char* func_4() // Position - 0x1BD
{
	char* sVar0;

	sVar0 = "startup";

	if (!STREAMING::IS_GAME_INSTALLED())
		sVar0 = "startup_install";

	return sVar0;
}

