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
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	int Static_46 = 0;
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
	Static_26 = 3;
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_37 = 1;
	Static_38 = 65;
	Static_39 = 49;
	Static_40 = 64;
	Static_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	Static_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_10();

	while (!func_9(18))
	{
		func_1();
		BUILTIN::WAIT(0);
	}

	func_10();
}

void func_1() // Position - 0xA4
{
	switch (Static_46)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !MISC::IS_AUTO_SAVE_IN_PROGRESS() && !func_8() && !func_7())
			{
				SCRIPT::REQUEST_SCRIPT("taxiService");
				Static_46 = 1;
			}
			break;
	
		case 1:
			if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
			{
				BUILTIN::START_NEW_SCRIPT("taxiService", 1828);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
				Static_46 = 2;
			}
			break;
	
		case 2:
			switch (func_5("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */))
			{
				case 2:
					func_2("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */, 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
			
				case 1:
					Static_46 = 3;
					break;
			}
			break;
	
		case 3:
			switch (func_5("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */))
			{
				case 2:
					func_2("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */, 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
			
				case 1:
					Static_46 = 4;
					break;
			}
			break;
	
		case 4:
			func_10();
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x19C
{
	func_3(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1BD
{
	int iVar0;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114931.f_20417[iVar0 /*16*/], sParam0))
			return;
	}

	if (Global_114931.f_20417.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_4), sParam1, 16);
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_9 = iParam5;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_11 = iParam6;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_12 = iParam2;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = -1;
	
		Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 + 1;
		func_4();
	}
}

void func_4() // Position - 0x390
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		Global_114931.f_20417.f_146[iVar0] = 0;
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 0))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[0])
				Global_114931.f_20417.f_146[0] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 1))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[1])
				Global_114931.f_20417.f_146[1] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[iVar0 /*16*/].f_11, 2))
			if (Global_114931.f_20417[iVar0 /*16*/].f_12 > Global_114931.f_20417.f_146[2])
				Global_114931.f_20417.f_146[2] = Global_114931.f_20417[iVar0 /*16*/].f_12;
	}
}

int func_5(char* sParam0) // Position - 0x4A7
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113571))
		return 1;

	if (func_6(sParam0))
		return 0;

	return 2;
}

bool func_6(char* sParam0) // Position - 0x4CE
{
	int iVar0;

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114931.f_20417[iVar0 /*16*/]))
			return true;
	}

	return false;
}

bool func_7() // Position - 0x509
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

bool func_8() // Position - 0x533
{
	return Global_102493.f_1;
}

bool func_9(int iParam0) // Position - 0x541
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

void func_10() // Position - 0x56D
{
	if (func_6("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */))
		func_11("AM_H_TAXI1" /* GXT: Use ~INPUT_CONTEXT~ to flag down passing taxis. */, 1);

	if (func_6("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */))
		func_11("AM_H_TAXI2" /* GXT: Taxi pick ups can be requested through the phone. */, true);

	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_11(char* sParam0, bool bParam1) // Position - 0x59D
{
	int iVar0;
	int iVar1;

	if (Global_113568 && bParam1)
		if (func_14(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
			HUD::CLEAR_HELP(0);

	for (iVar0 = 0; iVar0 < Global_114931.f_20417.f_145; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114931.f_20417[iVar0 /*16*/]))
		{
			for (iVar1 = iVar0; iVar1 <= Global_114931.f_20417.f_145 - 2; iVar1 = iVar1 + 1)
			{
				func_13(iVar1, iVar1 + 1);
			}
		
			func_12(Global_114931.f_20417.f_145 - 1);
			Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 - 1;
			func_4();
			return;
		}
	}
}

void func_12(int iParam0) // Position - 0x64A
{
	TEXT_LABEL_ASSIGN_STRING(&Global_114931.f_20417[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_20417[iParam0 /*16*/].f_4), "", 16);
	Global_114931.f_20417[iParam0 /*16*/].f_8 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_9 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_11 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_10 = -1;
	Global_114931.f_20417[iParam0 /*16*/].f_12 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_13 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_14 = 0;
	Global_114931.f_20417[iParam0 /*16*/].f_15 = 0;
}

void func_13(int iParam0, int iParam1) // Position - 0x6E4
{
	Global_114931.f_20417[iParam0 /*16*/] = { Global_114931.f_20417[iParam1 /*16*/] };
	Global_114931.f_20417[iParam0 /*16*/].f_4 = { Global_114931.f_20417[iParam1 /*16*/].f_4 };
	Global_114931.f_20417[iParam0 /*16*/].f_8 = Global_114931.f_20417[iParam1 /*16*/].f_8;
	Global_114931.f_20417[iParam0 /*16*/].f_10 = Global_114931.f_20417[iParam1 /*16*/].f_10;
	Global_114931.f_20417[iParam0 /*16*/].f_9 = Global_114931.f_20417[iParam1 /*16*/].f_9;
	Global_114931.f_20417[iParam0 /*16*/].f_11 = Global_114931.f_20417[iParam1 /*16*/].f_11;
	Global_114931.f_20417[iParam0 /*16*/].f_12 = Global_114931.f_20417[iParam1 /*16*/].f_12;
	Global_114931.f_20417[iParam0 /*16*/].f_13 = Global_114931.f_20417[iParam1 /*16*/].f_13;
	Global_114931.f_20417[iParam0 /*16*/].f_14 = Global_114931.f_20417[iParam1 /*16*/].f_14;
	Global_114931.f_20417[iParam0 /*16*/].f_15 = Global_114931.f_20417[iParam1 /*16*/].f_15;
}

bool func_14(char* sParam0) // Position - 0x7F4
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

