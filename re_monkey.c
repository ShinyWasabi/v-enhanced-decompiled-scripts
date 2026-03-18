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
	int Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	int Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	int Static_45 = 0;
	int Static_46 = 0;
	int Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	float Static_52 = 0f;
	int Static_53 = 0;
	bool Static_54 = 0;
	int Static_55 = 0;
	float Static_56 = 0f;
	int Static_57 = 0;
	int Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	var Static_61 = 0;
	var Static_62 = 4;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	int Static_70 = 0;
	char* Static_71 = 0;
	char* Static_72 = 0;
	char* Static_73 = 0;
	char* Static_74 = 0;
	char* Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	int Static_81 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 5;
	var ScriptArg_2 = 0;
	var ScriptArg_3 = 0;
	var ScriptArg_4 = 0;
	var ScriptArg_5 = 0;
	var ScriptArg_6 = 0;
	var ScriptArg_7 = 0;
	var ScriptArg_8 = 0;
	var ScriptArg_9 = 0;
	var ScriptArg_10 = 0;
	var ScriptArg_11 = 0;
	var ScriptArg_12 = 0;
	var ScriptArg_13 = 0;
	var ScriptArg_14 = 0;
	var ScriptArg_15 = 0;
	var ScriptArg_16 = 0;
	var ScriptArg_17 = 5;
	var ScriptArg_18 = 0;
	var ScriptArg_19 = 0;
	var ScriptArg_20 = 0;
	var ScriptArg_21 = 0;
	var ScriptArg_22 = 0;
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
	Static_38 = 1;
	Static_39 = 65;
	Static_40 = 49;
	Static_41 = 64;
	Static_49 = { -336.61462f, -93.668076f, 46.0005f };
	Static_52 = 256.1257f;
	Static_56 = 0f;
	Static_67 = { -334.8087f, -85.713f, 47.4504f };
	Static_71 = "scr_lamgraff_paint_spray";
	Static_72 = "switch@franklin@lamar_tagging_wall";
	Static_73 = "lamar_tagging_wall_loop_lamar";
	Static_74 = "lamar_tagging_wall_exit_lamar";
	Static_75 = "lamar_tagging_exit_loop_lamar";
	Static_76 = { 0f, 0f, 0f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_150();

	func_85(ScriptArg_0.f_1[0 /*3*/]);

	while (true)
	{
		func_71();
	
		switch (Static_45)
		{
			case 0:
				if (func_55())
					func_52();
				break;
		
			case 1:
				if (func_1())
					func_52();
				break;
		}
	
		BUILTIN::WAIT(0);
	}
}

bool func_1() // Position - 0x119
{
	if (Static_46 == 0)
	{
		return true;
	}
	else if (Static_46 == 1)
	{
		func_51();
	
		if (func_50(PLAYER::PLAYER_PED_ID()))
			func_49(PLAYER::PLAYER_PED_ID(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::DO_SCREEN_FADE_IN(250);
		return true;
	}
	else if (Static_46 == 2)
	{
		switch (Static_47)
		{
			case 0:
				func_36(-899711929);
				func_31();
				func_5(-1, 0);
				func_2();
				func_150();
				break;
		}
	}

	return false;
}

void func_2() // Position - 0x1AE
{
	func_3();
}

int func_3() // Position - 0x1BB
{
	if (func_4(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_4(bool bParam0) // Position - 0x206
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

void func_5(int iParam0, int iParam1) // Position - 0x22E
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
	
		if (!func_26(51))
		{
			func_16("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
	
		if (func_14(iParam0))
			Global_114931.f_25002.f_2 = 3;
	
		if (func_13(iParam0, iParam1) != 322)
			func_7(func_13(iParam0, iParam1), Static_42, Static_42.f_1);
	
		Global_114919 = iParam1;
	
		if (Global_114917 == 0)
			if (Global_114920 == 1 || Global_114920 == 5 || Global_114920 == 11 || Global_114920 == 25)
				func_6(2);
			else if (Global_114920 == 26 || Global_114920 == 8 || Global_114920 == 17)
				func_6(7);
			else
				func_6(1);
	}
}

void func_6(int iParam0) // Position - 0x331
{
	Global_114917 = iParam0;
}

void func_7(int iParam0, var uParam1, var uParam2) // Position - 0x33F
{
	bool bVar0;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_11(891 + iParam0, 1, -1);
	}

	bVar0 = true;

	if (Global_114931.f_10201[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114931.f_10201[iParam0 /*12*/].f_6 == 11 || Global_114931.f_10201[iParam0 /*12*/].f_6 == 12)
			bVar0 = false;
	}
	else
	{
		Global_114931.f_10201[iParam0 /*12*/].f_5 = 1;
		Global_114931.f_10201[iParam0 /*12*/].f_10 = uParam1;
		Global_114931.f_10201[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (bVar0)
		func_8();
}

void func_8() // Position - 0x425
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_114667 = 0;
	Global_114668 = 0;
	Global_114669 = 0;
	Global_114670 = 0;
	Global_114671 = 0;
	Global_114672 = 0;
	Global_114673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114931.f_10201.f_3853;
	Global_114931.f_10201.f_3853 = 0f;

	while (iVar0 < 321)
	{
		if (Global_114931.f_10201[iVar0 /*12*/].f_5 == true)
		{
			switch (Global_114931.f_10201[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114667 = Global_114667 + 1;
					fVar1 = fVar1 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 3:
					Global_114668 = Global_114668 + 1;
					fVar2 = fVar2 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 5:
					Global_114669 = Global_114669 + 1;
					fVar3 = fVar3 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 7:
					Global_114670 = Global_114670 + 1;
					fVar4 = fVar4 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 9:
					Global_114671 = Global_114671 + 1;
					fVar5 = fVar5 + (Global_114931.f_10201[iVar0 /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114672 = Global_114672 + 1;
					fVar6 = fVar6 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 13:
					Global_114673 = Global_114673 + 1;
					fVar7 = fVar7 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		iVar0 = iVar0 + 1;
	}

	if (Global_114650 > 0)
		if (Global_114667 == Global_114650)
			fVar1 = 55f;

	if (Global_114651 > 0)
		if (Global_114668 == Global_114651)
			fVar2 = 10f;

	if (Global_114652 > 0)
		if (Global_114669 == Global_114652)
			fVar3 = 0f;

	if (Global_114653 > 0)
		if (Global_114670 == Global_114653)
			fVar4 = 10f;

	if (Global_114654 > 0)
	{
		if (Global_114671 == Global_114654 || (Global_114654 * 10) / Global_114671 < 41 || Global_114671 > Global_114657 || Global_114671 == Global_114657)
		{
			if (!IS_BIT_SET(Global_114931.f_10201.f_3856, 14))
			{
				if (Global_114671 == Global_114654)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114654, 0);
					MISC::SET_BIT(&(Global_114931.f_10201.f_3856), 14);
				}
			}
		
			fVar5 = 5f;
		}
	}

	if (Global_114655 > 0)
		if (Global_114672 == Global_114655)
			fVar6 = 15f;

	if (Global_114656 > 0)
		if (Global_114673 == Global_114656)
			fVar7 = 5f;

	Global_114931.f_10201.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;

	if (Global_114671 > Global_114657 || Global_114671 == Global_114657)
		iVar9 = Global_114657;
	else
		iVar9 = Global_114671;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114667, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114650, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114668, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114651, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114669, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114652, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114670, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114653, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114657, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_114673 + Global_114672, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_114656 + Global_114655, 1);
	Global_114674 = (Global_114667 * 100) / Global_114650;
	Global_114676 = ((Global_114669 + Global_114668) * 100) / (Global_114652 + Global_114651);
	Global_114675 = ((Global_114670 + iVar9) * 100) / (Global_114653 + Global_114657);
	Global_114677 = ((Global_114672 + Global_114673) * 100) / (Global_114655 + Global_114656);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114931.f_10201.f_3853, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114674, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114675, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114676, 1);

	if (fVar8 > 0f && BUILTIN::FLOOR(fVar8) < BUILTIN::FLOOR(Global_114931.f_10201.f_3853))
		func_10(13, BUILTIN::FLOOR(Global_114931.f_10201.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80305)
		{
			if (func_9() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114665 = false;
			
				if (!Global_65027)
					func_3();
			}
		}
	}
}

int func_9() // Position - 0x8E3
{
	return Global_33792;
}

int func_10(int iParam0, int iParam1) // Position - 0x8EE
{
	int iVar0;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > iVar0)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return 0;
}

void func_11(int iParam0, int iParam1, bool bParam2) // Position - 0x93F
{
	if (bParam2 == -1)
		bParam2 = func_12();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, bParam2);
}

bool func_12() // Position - 0x95D
{
	return Global_1574927;
}

int func_13(int iParam0, int iParam1) // Position - 0x969
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

bool func_14(int iParam0) // Position - 0xCDD
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_15(int iParam0) // Position - 0xD0C
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	for (iVar1 = 0; iVar0 > 31; iVar1 = iVar1 + 1)
	{
		iVar0 = iVar0 - 32;
	}

	if (iVar1 < 3)
		MISC::SET_BIT(&Global_114931.f_20417.f_150[iVar1], iVar0);
}

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xD4E
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xD6F
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
		func_18();
	}
}

void func_18() // Position - 0xF42
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

int func_19() // Position - 0x1059
{
	func_20();

	switch (Global_114931.f_2370.f_539.f_4321)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	}

	return 0;
}

void func_20() // Position - 0x109F
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_24(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_23(PLAYER::PLAYER_PED_ID());
		
			if (func_22(iVar0) && !func_21(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_22(Global_114931.f_2370.f_539.f_4321))
					Global_114931.f_2370.f_539.f_4322 = Global_114931.f_2370.f_539.f_4321;
			
				Global_114931.f_2370.f_539.f_4323 = iVar0;
				Global_114931.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114931.f_2370.f_539.f_4321 != 145)
				Global_114931.f_2370.f_539.f_4323 = Global_114931.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114931.f_2370.f_539.f_4321 = 145;
}

bool func_21(int iParam0) // Position - 0x119C
{
	return Global_44886 == iParam0;
}

bool func_22(int iParam0) // Position - 0x11AA
{
	return iParam0 < 3;
}

int func_23(var uParam0) // Position - 0x11B6
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_24(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_24(int iParam0) // Position - 0x11F3
{
	if (func_22(iParam0))
		return func_25(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_25(int iParam0) // Position - 0x1218
{
	return Global_2339[iParam0 /*29*/];
}

bool func_26(int iParam0) // Position - 0x1227
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	for (iVar1 = 0; iVar0 > 31; iVar1 = iVar1 + 1)
	{
		iVar0 = iVar0 - 32;
	}

	if (iVar1 < 3)
		return IS_BIT_SET(Global_114931.f_20417.f_150[iVar1], iVar0);

	return false;
}

void func_27(int iParam0, int iParam1) // Position - 0x1267
{
	MISC::SET_BIT(&Global_114931.f_25002.f_8[iParam0], iParam1);
}

int func_28(int iParam0) // Position - 0x1282
{
	int iVar0;

	iVar0 = 1;

	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
	
		case 5:
			iVar0 = 2;
			break;
	
		case 9:
			iVar0 = 10;
			break;
	
		case 11:
			iVar0 = 4;
			break;
	
		case 13:
			iVar0 = 4;
			break;
	
		case 15:
			iVar0 = 2;
			break;
	
		case 17:
			iVar0 = 2;
			break;
	
		case 22:
			iVar0 = 2;
			break;
	
		case 23:
			iVar0 = 2;
			break;
	
		case 25:
			iVar0 = 3;
			break;
	
		case 26:
			iVar0 = 2;
			break;
	
		case 27:
			iVar0 = 2;
			break;
	
		case 29:
			iVar0 = 3;
			break;
	}

	return iVar0;
}

int func_29() // Position - 0x1333
{
	var uVar0;
	int iVar16;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	iVar16 = func_30(uVar0);
	return iVar16;
}

int func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1350
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("RE_ABANDONEDCAR"):
			return 23;
	
		case joaat("RE_ACCIDENT"):
			return 0;
	
		case joaat("RE_ARRESTS"):
			return 15;
	
		case joaat("RE_ATMROBBERY"):
			return 1;
	
		case joaat("RE_BIKETHIEF"):
			return 26;
	
		case joaat("RE_BORDER"):
			return 29;
	
		case joaat("RE_BURIALS"):
			return 24;
	
		case joaat("RE_BUS_TOURS"):
			return 2;
	
		case joaat("RE_CARTHEFT"):
			return 17;
	
		case joaat("RE_CHASETHIEVES"):
			return 11;
	
		case joaat("RE_CRASHRESCUE"):
			return 16;
	
		case joaat("RE_CULTSHOOTOUT"):
			return 18;
	
		case joaat("RE_DEALGONEWRONG"):
			return 12;
	
		case joaat("RE_DOMESTIC"):
			return 3;
	
		case joaat("RE_DRUNKDRIVER"):
			return 27;
	
		case joaat("RE_GANG_INTIMIDATION"):
			return 20;
	
		case joaat("RE_GANGFIGHT"):
			return 19;
	
		case joaat("RE_GETAWAY_DRIVER"):
			return 4;
	
		case joaat("RE_HITCH_LIFT"):
			return 13;
	
		case joaat("RE_HOMELAND_SECURITY"):
			return 28;
	
		case joaat("RE_LURED"):
			return 7;
	
		case joaat("RE_MUGGINGS"):
			return 25;
	
		case joaat("RE_PAPARAZZI"):
			return 10;
	
		case joaat("RE_PRISONERLIFT"):
			return 22;
	
		case joaat("RE_PRISONVANBREAK"):
			return 21;
	
		case joaat("RE_SECURITYVAN"):
			return 9;
	
		case joaat("RE_SHOPROBBERY"):
			return 5;
	
		case joaat("RE_SNATCHED"):
			return 6;
	
		case joaat("RE_STAG_DO"):
			return 14;
	
		case joaat("RE_YETARIAN"):
			return 30;
	
		case joaat("RE_DUEL"):
			return 31;
	
		case joaat("RE_SEAPLANE"):
			return 32;
	
		case joaat("RE_MONKEY"):
			return 33;
	}

	return -1;
}

void func_31() // Position - 0x152A
{
	func_32(1751306471, 6, func_35(), 133, 30000, 10000, -1, 0, -1, 0, 0);
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x154E
{
	int iVar0;

	if (func_4(false))
		return 0;

	if (iParam4 < 0)
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 == 76)
		return 0;

	if (iParam7 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_114931.f_7695.f_764 < 8)
	{
		iVar0 = iParam0;
		iVar0.f_3 = func_34(iParam1);
		iVar0.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		iVar0.f_5 = iParam5;
		iVar0.f_1 = iParam9;
		iVar0.f_2 = iParam2;
		iVar0.f_6 = iParam3;
		iVar0.f_7 = iParam6;
		iVar0.f_8 = iParam7;
		iVar0.f_9 = iParam8;
		iVar0.f_10 = -1;
		iVar0.f_11 = -1;
		iVar0.f_13 = iParam10;
		MISC::CLEAR_BIT(&(iVar0.f_1), 0);
		Global_114931.f_7695.f_651[Global_114931.f_7695.f_764 /*14*/] = { iVar0 };
		Global_114931.f_7695.f_764 = Global_114931.f_7695.f_764 + 1;
		func_33(0);
		func_33(1);
		func_33(2);
		return 1;
	}

	return 0;
}

void func_33(int iParam0) // Position - 0x1666
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;

	if (!func_22(iParam0))
		return;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_7695[iVar0 /*15*/].f_2, iParam0))
			if (Global_114931.f_7695[iVar0 /*15*/].f_3 > iVar1)
				iVar1 = Global_114931.f_7695[iVar0 /*15*/].f_3;
	}

	for (iVar2 = 0; iVar2 < Global_114931.f_7695.f_764; iVar2 = iVar2 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_7695.f_651[iVar2 /*14*/].f_2, iParam0))
			if (Global_114931.f_7695.f_651[iVar2 /*14*/].f_3 == 5)
				iVar1 = 5;
	}

	Global_114931.f_7695.f_919[iParam0] = iVar1;
}

int func_34(int iParam0) // Position - 0x1724
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

int func_35() // Position - 0x178E
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	switch (iVar0)
	{
		case joaat("PLAYER_ZERO"):
			return 1;
	
		case joaat("PLAYER_ONE"):
			return 2;
	
		case joaat("PLAYER_TWO"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_36(int iParam0) // Position - 0x17C6
{
	int iVar0;
	int iVar1;

	iVar1 = 0;

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_136; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695[iVar0 /*15*/] == iParam0)
		{
			if (Global_45433 != iVar0)
			{
				func_48(iVar0);
				func_40(iParam0);
				iVar1 = 1;
			}
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_198; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar0 /*15*/] == iParam0)
		{
			func_40(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_650; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar0 /*15*/] == iParam0)
		{
			func_39(iParam0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_764; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_651[iVar0 /*14*/] == iParam0)
		{
			func_38(iVar0);
			iVar1 = 1;
		}
	}

	for (iVar0 = 0; iVar0 < Global_114931.f_7695.f_866; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_7695.f_765[iVar0 /*10*/] == iParam0)
		{
			func_37(iVar0);
			iVar1 = 1;
		}
	}

	return iVar1;
}

void func_37(int iParam0) // Position - 0x18ED
{
	int iVar0;
	var uVar1;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_866)
		return;

	if (Global_114931.f_7695.f_866 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_866 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695.f_765[iVar0 /*10*/] = { Global_114931.f_7695.f_765[iVar0 + 1 /*10*/] };
		}
	}

	if (Global_114931.f_7695.f_866 > 0)
	{
		Global_114931.f_7695.f_765[Global_114931.f_7695.f_866 - 1 /*10*/] = { uVar1 };
		Global_114931.f_7695.f_866 = Global_114931.f_7695.f_866 - 1;
	}
}

void func_38(int iParam0) // Position - 0x19A6
{
	int iVar0;
	var uVar1;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_764)
		return;

	if (Global_114931.f_7695.f_764 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_764 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695.f_651[iVar0 /*14*/] = { Global_114931.f_7695.f_651[iVar0 + 1 /*14*/] };
		}
	}

	if (Global_114931.f_7695.f_764 > 0)
	{
		Global_114931.f_7695.f_651[Global_114931.f_7695.f_764 - 1 /*14*/] = { uVar1 };
		Global_114931.f_7695.f_764 = Global_114931.f_7695.f_764 - 1;
	}

	func_33(0);
	func_33(1);
	func_33(2);
}

void func_39(int iParam0) // Position - 0x1A6E
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_650; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_199[iVar15 /*15*/] == iParam0)
		{
			for (iVar16 = iVar15; iVar16 <= Global_114931.f_7695.f_650 - 2; iVar16 = iVar16 + 1)
			{
				Global_114931.f_7695.f_199[iVar16 /*15*/] = { Global_114931.f_7695.f_199[iVar16 + 1 /*15*/] };
			}
		
			Global_114931.f_7695.f_199[Global_114931.f_7695.f_650 - 1 /*15*/] = { uVar0 };
			Global_114931.f_7695.f_650 = Global_114931.f_7695.f_650 - 1;
			return;
		}
	}
}

void func_40(int iParam0) // Position - 0x1B1B
{
	var uVar0;
	int iVar15;
	int iVar16;

	for (iVar15 = 0; iVar15 < Global_114931.f_7695.f_198; iVar15 = iVar15 + 1)
	{
		if (Global_114931.f_7695.f_137[iVar15 /*15*/] == iParam0)
		{
			func_41(Global_114931.f_7695.f_137[iVar15 /*15*/].f_6);
		
			for (iVar16 = iVar15; iVar16 <= Global_114931.f_7695.f_198 - 2; iVar16 = iVar16 + 1)
			{
				Global_114931.f_7695.f_137[iVar16 /*15*/] = { Global_114931.f_7695.f_137[iVar16 + 1 /*15*/] };
			}
		
			Global_114931.f_7695.f_137[Global_114931.f_7695.f_198 - 1 /*15*/] = { uVar0 };
			Global_114931.f_7695.f_198 = Global_114931.f_7695.f_198 - 1;
			return;
		}
	}
}

int func_41(int iParam0) // Position - 0x1BD7
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (func_47(iParam0, Global_21627) == 1)
		{
			func_46(iParam0, Global_21627, 0);
		
			if (func_45(iParam0, Global_21627) == 0)
			{
				iVar0 = Global_21627;
				func_42(iParam0, iVar0);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_42(int iParam0, int iParam1) // Position - 0x1C2D
{
	int iVar0;

	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_44(iParam0, iVar0, 0);
			func_43(iParam0, iVar0, 0);
		}
	}
}

void func_43(int iParam0, int iParam1, int iParam2) // Position - 0x1C62
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
}

void func_44(int iParam0, int iParam1, int iParam2) // Position - 0x1CA7
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
}

int func_45(int iParam0, int iParam1) // Position - 0x1CEC
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_46(int iParam0, int iParam1, int iParam2) // Position - 0x1D16
{
	Global_2339[iParam0 /*29*/].f_19[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_114931.f_28058[iParam0 /*29*/].f_19[iParam1] = iParam2;
}

int func_47(int iParam0, int iParam1) // Position - 0x1D47
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

void func_48(int iParam0) // Position - 0x1D71
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam0 < 0 || iParam0 >= Global_114931.f_7695.f_136)
		return;

	iVar1 = Global_114931.f_7695[iParam0 /*15*/].f_2;

	if (Global_114931.f_7695.f_136 > 1)
	{
		for (iVar0 = iParam0; iVar0 <= Global_114931.f_7695.f_136 - 2; iVar0 = iVar0 + 1)
		{
			Global_114931.f_7695[iVar0 /*15*/] = { Global_114931.f_7695[iVar0 + 1 /*15*/] };
		}
	}

	if (Global_114931.f_7695.f_136 > 0)
	{
		Global_114931.f_7695[Global_114931.f_7695.f_136 - 1 /*15*/] = { uVar2 };
		Global_114931.f_7695.f_136 = Global_114931.f_7695.f_136 - 1;
	}

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(iVar1, iVar0))
			func_33(iVar0);
	}
}

void func_49(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x1E49
{
	ENTITY::SET_ENTITY_COORDS(uParam0, fParam1, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(uParam0, fParam4);
}

bool func_50(var uParam0) // Position - 0x1E67
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

void func_51() // Position - 0x1E88
{
	int iVar0;
	int iVar1;

	for (iVar0 = 0; iVar0 < 4; iVar0 = iVar0 + 1)
	{
		iVar1 = iVar0;
	
		switch (iVar1)
		{
			case 0:
				break;
		
			case 1:
				Static_62[iVar1] = OBJECT::CREATE_OBJECT(joaat("PROP_PAINTS_CAN02"), -335.66f, -95.24f, 46.16f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Static_62[iVar1], -335.66f, -95.24f, 46.16f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Static_62[iVar1], -2.32f, 0.66f, -0.8f, 2, 1);
				break;
		
			case 2:
				Static_62[iVar1] = OBJECT::CREATE_OBJECT(joaat("PROP_PAINT_BRUSH05"), -336.04f, -94.9f, 46.02f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Static_62[iVar1], -336.04f, -94.9f, 46.02f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Static_62[iVar1], 0.01f, 3.85f, 2.72f, 2, 1);
				break;
		
			case 3:
				Static_62[iVar1] = OBJECT::CREATE_OBJECT(joaat("PROP_PAINT_SPRAY01B"), -336.34f, -95.66f, 46.02f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Static_62[iVar1], -336.34f, -95.66f, 46.02f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Static_62[iVar1], -2.86f, 0.76f, 28.89f, 2, 1);
				break;
		}
	}
}

void func_52() // Position - 0x1FD9
{
	if (Static_46 == 2)
	{
		func_54();
		Static_47 = 0;
	}

	func_53();
}

void func_53() // Position - 0x1FF2
{
	switch (Static_46)
	{
		case 0:
			Static_46 = 2;
			break;
	
		case 1:
			Static_46 = 2;
			break;
	
		case 2:
			Static_46 = 0;
			break;
	}
}

void func_54() // Position - 0x2025
{
	int iVar0;

	iVar0 = Static_45 + 1;

	if (iVar0 >= 0 && iVar0 < 2)
		Static_45 = iVar0;
}

bool func_55() // Position - 0x2047
{
	if (Static_46 == 0)
	{
		return true;
	}
	else if (Static_46 == 1)
	{
		if (func_50(PLAYER::PLAYER_PED_ID()))
			func_49(PLAYER::PLAYER_PED_ID(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::DO_SCREEN_FADE_IN(250);
		return true;
	}
	else if (Static_46 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Static_48))
			if (PED::IS_PED_DEAD_OR_DYING(Static_48, 1))
				func_150();
		else if (Static_47 > 0)
			if (Static_54)
				return true;
			else
				func_150();
	
		switch (Static_47)
		{
			case 0:
				if (func_57())
				{
					func_51();
					Static_47 = Static_47 + 1;
				}
				break;
		
			case 1:
				if (func_56())
				{
					if (func_50(Static_48))
					{
						if (CAM::GET_FOCUS_PED_ON_SCREEN(1106247680, 31086, 1061997773, 1060320051, 1048576000, 1090519040, 1051361018, 31086, 24818) == Static_48)
						{
							Static_81 = MISC::GET_GAME_TIMER() + 2000;
							Static_47 = Static_47 + 1;
						}
					}
				}
				break;
		
			case 2:
				if (Static_81 < MISC::GET_GAME_TIMER())
				{
					Static_54 = true;
					Static_47 = Static_47 + 1;
				}
				break;
		}
	}

	return false;
}

bool func_56() // Position - 0x2170
{
	if (Global_24036)
		return true;

	return false;
}

bool func_57() // Position - 0x2186
{
	if (ENTITY::DOES_ENTITY_EXIST(Static_48))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("U_M_M_STREETART_01"));
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_STREETART_01")))
		{
			Static_48 = PED::CREATE_PED(26, joaat("U_M_M_STREETART_01"), Static_49, Static_52, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_STREETART_01"));
			Static_62[0] = OBJECT::CREATE_OBJECT(joaat("PROP_CS_SPRAY_CAN"), Static_67, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Static_62[0], Static_48, PED::GET_PED_BONE_INDEX(Static_48, 28422), 0f, -0.01f, -0.02f, Static_76, 1, 1, 0, 0, 2, 1, 0);
			PED::SET_PED_KEEP_TASK(Static_48, 1);
			PED::SET_PED_CONFIG_FLAG(Static_48, 42, 1);
			Static_55 = func_68(Static_48, false, 145);
			func_58(true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Static_48, joaat("PLAYER"));
			PED::SET_PED_LOD_MULTIPLIER(Static_48, 2.5f);
		}
	}

	return false;
}

int func_58(bool bParam0) // Position - 0x2248
{
	if (func_62())
	{
		Global_114921 = true;
		Global_114918 = MISC::GET_GAME_TIMER();
	
		if (func_14(Global_114920))
			func_59(0);
	
		HUD::SET_MISSION_NAME(1, "RE_TITLE" /* GXT: Random Event */);
	
		if (bParam0 && func_14(Global_114920))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_59(int iParam0) // Position - 0x229A
{
	switch (iParam0)
	{
		case 0:
			if (Global_114931.f_25002.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_61(iParam0), -1);
					Global_114931.f_25002.f_2 = Global_114931.f_25002.f_2 + 1;
					MISC::SET_BIT(&Global_114927, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114927, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_61(iParam0), -1);
					Global_114931.f_25002.f_3 = Global_114931.f_25002.f_3 + 1;
					MISC::SET_BIT(&Global_114927, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114927, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_61(iParam0), -1);
					Global_114931.f_25002.f_4 = Global_114931.f_25002.f_4 + 1;
					MISC::SET_BIT(&Global_114927, 2);
				}
			}
			break;
	}
}

void func_60(char* sParam0, int iParam1) // Position - 0x2375
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_61(int iParam0) // Position - 0x238C
{
	char* sVar0;

	sVar0 = "";

	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
	
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
	
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}

	return sVar0;
}

bool func_62() // Position - 0x23CC
{
	switch (func_63(&Global_33852, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_63(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4) // Position - 0x2402
{
	int iVar0;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99907.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_67(0))
			return 0;
	
		Global_44850 = Global_44850 + 1;
		*uParam0 = Global_44850;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_24407.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44886 = iParam2;
		Global_44848 = *uParam0;
		Global_44849 = iParam4;
		Global_44847 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44847 > 0)
		{
			iVar0 = 0;
		
			for (iVar0 = 0; iVar0 < Global_44847; iVar0 = iVar0 + 1)
			{
				if (Global_44853[iVar0 /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44848 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!func_65(iParam2))
			return 0;
	
		if (Global_44847 == 8)
			return 0;
	
		Global_44850 = Global_44850 + 1;
		*uParam0 = Global_44850;
		Global_44853[Global_44847 /*4*/] = Global_44850;
		Global_44853[Global_44847 /*4*/].f_1 = iParam1;
		Global_44853[Global_44847 /*4*/].f_2 = iParam2;
		Global_44853[Global_44847 /*4*/].f_3 = 0;
		Global_44847 = Global_44847 + 1;
	
		if (iParam4 != 0)
			func_64(uParam0, iParam4);
	}

	return 2;
}

void func_64(var uParam0, int iParam1) // Position - 0x2539
{
	int iVar0;

	if (Global_44847 == 0)
		return;

	if (*uParam0 == -1)
		return;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < Global_44847; iVar0 = iVar0 + 1)
	{
		if (Global_44853[iVar0 /*4*/] == *uParam0)
			Global_44853[iVar0 /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
}

bool func_65(int iParam0) // Position - 0x2588
{
	return func_66(iParam0, Global_44886);
}

bool func_66(int iParam0, int iParam1) // Position - 0x2599
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

bool func_67(int iParam0) // Position - 0x277A
{
	if (Global_44886 == 15)
		return false;

	if (func_65(iParam0))
		return false;

	return true;
}

int func_68(var uParam0, bool bParam1, int iParam2) // Position - 0x279C
{
	int iVar0;

	iVar0 = func_69(uParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2339[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2339[iParam2 /*29*/].f_3));

	return iVar0;
}

int func_69(var uParam0, bool bParam1, bool bParam2) // Position - 0x27E6
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return 0;

	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		else
			HUD::SET_BLIP_COLOUR(iVar0, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return iVar0;
}

var func_70(bool bParam0, var uParam1, var uParam2) // Position - 0x288A
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_71() // Position - 0x28A1
{
	func_72();

	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && Static_53 < 3)
		func_150();
}

void func_72() // Position - 0x28C2
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar5;
	float fVar8;
	var uVar9;
	bool bVar12;
	bool bVar13;
	float fVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	var uVar22;
	int iVar23;

	if (func_50(Static_48))
	{
		bVar0 = func_50(Static_48);
		bVar1 = func_50(PLAYER::PLAYER_PED_ID());
		uVar2 = { ENTITY::GET_ENTITY_COORDS(Static_48, 0) };
		fVar8 = 7.5f;
		uVar9 = { fVar8, fVar8, fVar8 };
	
		if (bVar1)
		{
			uVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			bVar12 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
			bVar13 = PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID());
		}
	
		if (Static_53 < 3)
			if (MISC::IS_BULLET_IN_AREA(uVar2, fVar8, 0) || MISC::IS_PROJECTILE_IN_AREA(uVar2 - uVar9, uVar2 + uVar9, 0))
				Static_53 = 3;
	
		switch (Static_53)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT(Static_72);
			
				if (STREAMING::HAS_ANIM_DICT_LOADED(Static_72))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Static_48, 1);
					TASK::TASK_PLAY_ANIM(Static_48, Static_72, Static_73, 1000f, -8f, -1, 8193, 0, 0, 0, 0);
					Static_53 = Static_53 + 1;
				}
				break;
		
			case 1:
				if (func_83(joaat("SCRIPT_TASK_PLAY_ANIM")))
					Static_53 = 5;
			
				if (func_82(PLAYER::PLAYER_PED_ID(), Static_48, 35f))
				{
					TASK::OPEN_SEQUENCE_TASK(&Static_80);
					TASK::TASK_PLAY_ANIM(0, Static_72, Static_74, 8f, -8f, -1, 8192, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, Static_72, Static_75, 8f, -2f, -1, 8193, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(Static_80);
					TASK::TASK_PERFORM_SEQUENCE(Static_48, Static_80);
					TASK::CLEAR_SEQUENCE_TASK(&Static_80);
					STREAMING::REMOVE_ANIM_DICT(Static_72);
					Static_53 = Static_53 + 1;
				}
				break;
		
			case 2:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					Static_53 = 5;
			
				if (bVar13)
					fVar14 = 30f;
				else if (bVar12)
					fVar14 = 17.5f;
				else
					fVar14 = 5f;
			
				if (bVar0 && bVar1 && func_82(PLAYER::PLAYER_PED_ID(), Static_48, fVar14))
					Static_53 = 3;
			
				if (Static_54)
					Static_53 = 3;
			
				if (func_81())
					Static_53 = 3;
			
				if (bVar1 && func_80(uVar5, uVar2))
					Static_53 = 3;
			
				func_78();
				break;
		
			case 3:
				if (func_73())
					Static_53 = Static_53 + 1;
				break;
		
			case 4:
				PED::SET_PED_FLEE_ATTRIBUTES(Static_48, 8, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(Static_48, 32, 1);
				TASK::OPEN_SEQUENCE_TASK(&Static_80);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 800);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 9999f, -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(Static_80);
				TASK::TASK_PERFORM_SEQUENCE(Static_48, Static_80);
				TASK::CLEAR_SEQUENCE_TASK(&Static_80);
				Static_53 = Static_53 + 1;
				break;
		
			case 5:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					Static_53 = 5;
			
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Static_48) && BUILTIN::VDIST2(uVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) > 2500f)
				{
					Static_79 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uVar5, uVar2, 1, 0, 7);
					Static_53 = Static_53 + 1;
				}
				break;
		
			case 6:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					Static_53 = 5;
			
				iVar23 = SHAPETEST::GET_SHAPE_TEST_RESULT(Static_79, &iVar15, &uVar16, &uVar19, &uVar22);
			
				if (iVar23 == 2)
					if (iVar15 == 1)
						Static_53 = Static_53 + 1;
					else
						Static_53 = Static_53 - 1;
				else if (iVar23 == 0)
					Static_53 = Static_53 + 1;
				break;
		
			case 7:
				PED::DELETE_PED(&Static_48);
				break;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Static_48))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Static_48, 0);
	}
}

bool func_73() // Position - 0x2BE9
{
	var uVar0;
	var uVar3;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	var uVar11;

	uVar0 = { -335.71f, -93.39f, 46f };
	uVar3 = { -336.7188f, -93.5128f, 46f };

	switch (Static_58)
	{
		case 0:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_48, Static_72, Static_75, 3))
			{
				Static_56 = 0.349f;
				Static_57 = 900;
				Static_59 = { uVar0 };
				Static_58 = 1;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_48, Static_72, Static_74, 3))
			{
				Static_56 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Static_48, Static_72, Static_74);
				Static_56 = func_77(Static_56, 0.2f, 0.349f);
			
				if (Static_56 != 0.2f)
				{
					fVar6 = (1f / (0.349f - 0.161f)) * BUILTIN::TO_FLOAT(900);
					Static_57 = BUILTIN::ROUND((Static_56 - 0.161f) * fVar6);
					Static_59 = { ENTITY::GET_ENTITY_COORDS(Static_48, 0) - { 1f, 0f, 0f } };
					Static_58 = 1;
				}
				else
				{
					Static_58 = 3;
				}
			}
			else
			{
				Static_58 = 3;
			}
			break;
	
		case 1:
			ENTITY::FREEZE_ENTITY_POSITION(Static_48, 1);
			TASK::TASK_PLAY_ANIM(Static_48, Static_72, Static_74, 4f, -8f, -1, 0, Static_56, 1, 0, 0);
			Static_81 = MISC::GET_GAME_TIMER();
			func_76(&Static_55);
			func_75();
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_62[0]))
				ENTITY::DETACH_ENTITY(Static_62[0], 1, 1);
		
			Static_58 = Static_58 + 1;
			break;
	
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_48, Static_72, Static_74, 3))
			{
				iVar7 = MISC::GET_GAME_TIMER() - Static_81;
				fVar8 = BUILTIN::TO_FLOAT(iVar7) / BUILTIN::TO_FLOAT(Static_57);
				fVar9 = Static_56 - ((Static_56 - 0.161f) * fVar8);
				fVar9 = func_77(fVar9, 0.161f, Static_56);
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(Static_48, Static_72, Static_74, fVar9);
				fVar10 = fVar8 - 0.12f;
				fVar10 = func_77(fVar10, 0f, 0.8f);
				uVar11 = { func_74(Static_59, uVar3, fVar10) };
				ENTITY::SET_ENTITY_COORDS(Static_48, uVar11, 0, 1, 0, 1);
			
				if (fVar9 == 0.161f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Static_48, 0);
					return true;
				}
			}
			break;
	
		case 3:
			func_76(&Static_55);
			func_75();
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_62[0]))
				ENTITY::DETACH_ENTITY(Static_62[0], 1, 1);
		
			return true;
	}

	return false;
}

Vector3 func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x2DF7
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

void func_75() // Position - 0x2E12
{
	if (Static_70 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Static_70, 0);
		Static_70 = 0;
	}
}

void func_76(var uParam0) // Position - 0x2E2A
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_ROUTE(*uParam0, 0);
		HUD::REMOVE_BLIP(uParam0);
	}
}

float func_77(float fParam0, float fParam1, float fParam2) // Position - 0x2E4A
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_78() // Position - 0x2E71
{
	float fVar0;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_48, Static_72, Static_74, 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Static_48, Static_72, Static_74);
	
		if (fVar0 < 0.383793f)
			func_75();
		else if (fVar0 < 0.612112f)
			func_79();
		else if (fVar0 < 1f)
			func_75();
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_48, Static_72, Static_75, 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Static_48, Static_72, Static_75);
	
		if (fVar0 < 0.1124f)
			func_75();
		else if (fVar0 < 0.5566f)
			func_79();
		else if (fVar0 < 0.7546f)
			func_75();
		else if (fVar0 < 0.9f)
			func_79();
		else if (fVar0 < 1f)
			func_75();
	}
}

void func_79() // Position - 0x2F32
{
	if (Static_70 == 0)
	{
		Static_70 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(Static_71, Static_62[0], Static_76, Static_76, 1065353216, 0, 0, 0);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Static_70, 1f, 1f, 1f, 0);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(Static_70, 0.2f);
	}
}

bool func_80(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2F72
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;

	fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
	fVar1 = func_77(fVar0 / 14f, 0f, 1f);
	uVar2 = BUILTIN::VDIST(uParam0, uParam3);
	fVar3 = func_77(30f - uVar2, 0f, 30f) / 30f;
	fVar4 = fVar1 * fVar3;
	return fVar4 > 0.25f;
}

bool func_81() // Position - 0x2FCB
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -334.46515f, -93.421715f, 48.573284f, -332.2641f, -82.78552f, 45.810303f, 3f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -329.1134f, -83.87273f, 45.79989f, -331.09372f, -88.05348f, 48.718784f, 3f, 0, 1, 0);
}

bool func_82(var uParam0, var uParam1, float fParam2) // Position - 0x302D
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		fVar0 = fParam2 * fParam2;
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, 0), ENTITY::GET_ENTITY_COORDS(uParam1, 0)) <= fVar0;
	}

	return false;
}

bool func_83(int iParam0) // Position - 0x3069
{
	if (!func_84(Static_48, iParam0) && !func_84(Static_48, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
	{
		func_76(&Static_55);
		TASK::TASK_SMART_FLEE_PED(Static_48, PLAYER::PLAYER_PED_ID(), 9999f, -1, 1, 0);
		return true;
	}

	return false;
}

bool func_84(var uParam0, int iParam1) // Position - 0x30AB
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	return iVar0 == 1 || iVar0 == 0;
}

void func_85(var uParam0, var uParam1, var uParam2) // Position - 0x30CB
{
	if (func_89(uParam0))
		func_86(33);
	else
		func_150();

	STREAMING::REQUEST_PTFX_ASSET();
}

void func_86(int iParam0) // Position - 0x30EF
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	func_88(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_114917 = 0;
	func_87();
}

void func_87() // Position - 0x3125
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_88(int iParam0) // Position - 0x3162
{
	Global_114920 = iParam0;
}

bool func_89(var uParam0, var uParam1, var uParam2) // Position - 0x3170
{
	if (func_95(uParam0, 33, 0, false, false))
		if (func_94(58))
			if (func_91())
				if (func_90())
					return true;

	return false;
}

bool func_90() // Position - 0x31A4
{
	var uVar0;

	if (Global_153815 == 2)
		return true;
	else if (Global_153815 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				MISC::SET_BIT(&uVar0, 2);
				MISC::SET_BIT(&uVar0, 4);
				MISC::SET_BIT(&uVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

bool func_91() // Position - 0x325C
{
	return func_92(func_93(), 5);
}

bool func_92(int iParam0, int iParam1) // Position - 0x326D
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114931.f_32757[iParam0], iParam1);
}

int func_93() // Position - 0x328D
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	switch (iVar0)
	{
		case joaat("PLAYER_ZERO"):
			return 21;
	
		case joaat("PLAYER_ONE"):
			return 22;
	
		case joaat("PLAYER_TWO"):
			return 23;
	
		default:
		
	}

	return -1;
}

bool func_94(int iParam0) // Position - 0x32C8
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114931.f_18581[iParam0 /*6*/], 3);
}

bool func_95(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) // Position - 0x32F3
{
	bool bVar0;
	var uVar1;
	int iVar4;
	var uVar5;
	int iVar8;

	if (!Global_153523)
		return false;

	if (iParam3 == -1)
		iParam3 = func_29();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_90())
			return false;

	Static_42 = { uParam0 };
	bVar0 = false;

	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			uVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
				return false;
		}
	
		if (!Global_114931.f_9092)
			return false;
	
		if (func_4(false))
			return false;
	
		if (func_145())
			return false;
	
		if (func_144())
			return false;
	
		if (Global_114920 != -1)
			return false;
	
		if (func_22(func_143()))
			if (func_137(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (uVar1.f_2 - Static_42.f_2 > 50f)
				return false;
	
		if (!func_136(iParam3))
			return false;
	
		if (func_22(func_143()))
			if (func_135(func_143()) == 4 || func_135(func_143()) == 5)
				return false;
	
		if (func_22(func_143()))
			if (!func_134(iParam3, iParam4, 145))
				return false;
	
		if (!func_133(Global_114931.f_25002.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114922 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_131())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_121(4))
			return false;
	
		if (!func_65(5))
			return false;
	
		if (func_120(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_120(0, 0))
			return false;
	
		if (Global_33939)
			return false;
	
		if (func_136(30) && !func_120(30, 0))
			if (iParam3 != 30)
				if (BUILTIN::VDIST2(uVar1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_22(func_143()))
		{
			for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1)
			{
				uVar5 = { Global_114931.f_2370.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114931.f_2370.f_539.f_2296[iVar4];
			
				if (func_119(iVar8))
					if (func_97(iVar4))
						if (!func_96(uVar5, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), uVar5) < 210f * 210f)
								if (func_143() != iVar4)
									return false;
			}
		}
	}

	return true;
}

bool func_96(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, bool bParam6) // Position - 0x368D
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

bool func_97(int iParam0) // Position - 0x36D4
{
	int iVar0;

	iVar0 = Global_114931.f_2370.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

bool func_98(int iParam0) // Position - 0x36F5
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1) // Position - 0x3704
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_119(iParam0))
		return 0;

	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);

	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1)
		return 1;

	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x3757
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x3775
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = func_108(iParam0) - func_108(iParam1);
		iVar3 = func_110(iParam0) - func_110(iParam1);
		iVar4 = func_107(iParam0) - func_107(iParam1);
		iVar5 = func_106(iParam0) - func_106(iParam1);
		iVar6 = func_105(iParam0) - func_105(iParam1);
		iVar7 = func_104(iParam0) - func_104(iParam1);
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = func_108(iParam1) - func_108(iParam0);
		iVar3 = func_110(iParam1) - func_110(iParam0);
		iVar4 = func_107(iParam1) - func_107(iParam0);
		iVar5 = func_106(iParam1) - func_106(iParam0);
		iVar6 = func_105(iParam1) - func_105(iParam0);
		iVar7 = func_104(iParam1) - func_104(iParam0);
	}

	while (iVar7 < 0)
	{
		iVar7 = iVar7 + 60;
		iVar6 = iVar6 - 1;
	}

	while (iVar7 > 59)
	{
		iVar7 = iVar7 - 60;
		iVar6 = iVar6 + 1;
	}

	while (iVar6 < 0)
	{
		iVar6 = iVar6 + 60;
		iVar5 = iVar5 - 1;
	}

	while (iVar6 > 59)
	{
		iVar6 = iVar6 - 60;
		iVar5 = iVar5 + 1;
	}

	while (iVar5 < 0)
	{
		iVar5 = iVar5 + 24;
		iVar4 = iVar4 - 1;
	}

	while (iVar5 > 23)
	{
		iVar5 = iVar5 - 24;
		iVar4 = iVar4 + 1;
	}

	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 = iVar3 + 12;
			iVar2 = iVar2 - 1;
		}
	
		iVar4 = iVar4 + func_103(iVar0, iVar1);
		iVar3 = iVar3 - 1;
		iVar0 = BUILTIN::ROUND(func_102(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}

	while (iVar3 < 0)
	{
		iVar3 = iVar3 + 12;
		iVar2 = iVar2 - 1;
	}

	while (iVar3 > 12)
	{
		iVar3 = iVar3 - 12;
		iVar2 = iVar2 + 1;
	}

	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_102(float fParam0, float fParam1, float fParam2) // Position - 0x3976
{
	float fVar0;

	if (fParam1 == fParam2)
		return fParam1;

	fVar0 = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / fVar0) * fVar0);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + fVar0;

	return fParam0;
}

int func_103(int iParam0, int iParam1) // Position - 0x39B8
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_104(int iParam0) // Position - 0x3A5A
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_105(int iParam0) // Position - 0x3A6D
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_106(int iParam0) // Position - 0x3A80
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_107(int iParam0) // Position - 0x3A93
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_108(int iParam0) // Position - 0x3AA5
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_109(bool bParam0, var uParam1, var uParam2) // Position - 0x3AC7
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_110(int iParam0) // Position - 0x3ADE
{
	return iParam0 & 15;
}

bool func_111(int iParam0, int iParam1) // Position - 0x3AEB
{
	int iVar0;
	int iVar1;

	if (!func_119(iParam1) || !func_119(iParam0))
		return 1;

	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);

	if (iVar0 > iVar1)
		return 1;
	else if (iVar0 < iVar1)
		return 0;

	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);

	if (iVar0 > iVar1)
		return 1;

	return 0;
}

int func_112() // Position - 0x3BF7
{
	var uVar0;

	func_118(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_117(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_116(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_115(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_114(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_113(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_113(var uParam0, int iParam1) // Position - 0x3C3D
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}
}

void func_114(var uParam0, int iParam1) // Position - 0x3CC3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
}

void func_115(var uParam0, int iParam1) // Position - 0x3CF6
{
	int iVar0;
	int iVar1;

	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);

	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
}

void func_116(var uParam0, int iParam1) // Position - 0x3D47
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
}

void func_117(var uParam0, int iParam1) // Position - 0x3D81
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
}

void func_118(var uParam0, int iParam1) // Position - 0x3DBC
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
}

bool func_119(int iParam0) // Position - 0x3DF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
		return false;

	iVar0 = func_104(iParam0);

	if (iVar0 < 0 || iVar0 >= 60)
		return false;

	iVar1 = func_105(iParam0);

	if (iVar1 < 0 || iVar1 >= 60)
		return false;

	iVar2 = func_106(iParam0);

	if (iVar2 < 0 || iVar2 > 23)
		return false;

	iVar3 = func_108(iParam0);

	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979)
		return false;

	iVar4 = func_110(iParam0);

	if (iVar4 < 0 || iVar4 > 11)
		return false;

	iVar5 = func_107(iParam0);

	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
		return false;

	return true;
}

bool func_120(int iParam0, int iParam1) // Position - 0x3ED4
{
	if (IS_BIT_SET(Global_114931.f_25002.f_8[iParam0], iParam1))
		return true;

	return false;
}

bool func_121(int iParam0) // Position - 0x3EF4
{
	int iVar0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_143();
			
				if (!func_22(iVar0))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_130() || Global_113978 || Global_33795 || func_129() || func_128(8, -1) || func_127() || func_126() || func_125() || func_124() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_130() || Global_33795 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_130() || Global_113978 || Global_33795 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_114931.f_7695.f_919[iVar0] == 5 || Global_45433 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_130() || Global_113978 || Global_33795 || func_129() || func_128(8, -1) || func_127() || func_126() || func_124() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 4:
						if (func_130() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_128(8, -1) || func_124() || func_123() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 5:
						if (func_128(8, -1) || func_127() || func_126() || func_123() || func_122())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_130() || Global_33795 || func_129() || func_128(8, -1) || func_126() || func_125() || func_124() || Global_114931.f_7695.f_919[iVar0] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_130() || func_126() || Global_113978 || Global_33795 || func_129() || Global_46111 || func_128(8, -1) || func_125() || func_123() || func_124() || Global_114931.f_7695.f_919[iVar0] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_130() || Global_113978 || Global_33795 || func_129() || func_128(8, -1) || func_125() || func_123() || func_127() || func_126() || func_124())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

bool func_122() // Position - 0x4613
{
	return Global_102493.f_1;
}

bool func_123() // Position - 0x4621
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 13);

	return false;
}

bool func_124() // Position - 0x4644
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

bool func_125() // Position - 0x465E
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

bool func_126() // Position - 0x4688
{
	return Global_102506.f_418 > 0;
}

bool func_127() // Position - 0x4699
{
	return Global_102506.f_417 > 0;
}

bool func_128(int iParam0, int iParam1) // Position - 0x46AA
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677594.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677594.f_1048, iParam0);
}

bool func_129() // Position - 0x46E2
{
	return Global_1575092;
}

bool func_130() // Position - 0x46EE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

bool func_131() // Position - 0x470A
{
	func_132();

	if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

void func_132() // Position - 0x4732
{
	if (func_21(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[0 /*29*/])
				Global_21627 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[1 /*29*/])
				Global_21627 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[2 /*29*/])
				Global_21627 = 2;
			else
				Global_21627 = 0;
	}
	else
	{
		Global_21627 = func_143();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

bool func_133(int iParam0) // Position - 0x47D4
{
	return func_111(func_112(), iParam0);
}

bool func_134(int iParam0, int iParam1, int iParam2) // Position - 0x47E6
{
	bool bVar0;
	int iVar1;

	bVar0 = 0;
	iVar1 = func_143();

	if (iParam2 != 145 && iParam2 == 0 || iParam2 == 1 || iParam2 == 2)
		iVar1 = iParam2;

	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
				bVar0 = 1;
			break;
	
		case 19:
			if (iVar1 != 2)
				bVar0 = 1;
			break;
	
		case 20:
			if (iVar1 != 1)
				bVar0 = 1;
			break;
	
		case 28:
			if (iVar1 != 2)
				bVar0 = 1;
			break;
	
		case 13:
			if (iVar1 == 0)
				if (iParam1 == 2)
					bVar0 = 0;
				else
					bVar0 = 1;
			else
				bVar0 = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
				bVar0 = 1;
			break;
	
		case 30:
			if (iVar1 != 2)
				bVar0 = 1;
			break;
	
		default:
			bVar0 = 1;
			break;
	}

	return bVar0;
}

int func_135(int iParam0) // Position - 0x48CA
{
	if (!func_22(iParam0))
		return 7;

	return Global_114931.f_7695.f_919[iParam0];
}

bool func_136(int iParam0) // Position - 0x48EE
{
	int iVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_90())
			return false;

	iVar0 = iParam0;

	if (iVar0 < 31)
	{
		bVar1 = IS_BIT_SET(Global_114931.f_25002, iVar0);
	}
	else
	{
		iVar0 = iVar0 - 31;
		bVar1 = IS_BIT_SET(Global_114931.f_25002.f_1, iVar0);
	}

	return bVar1;
}

int func_137(float fParam0, bool bParam1) // Position - 0x4946
{
	var uVar0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_22(func_143()))
		{
			iVar36 = func_19();
			iVar37 = 0;
		
			for (iVar37 = 0; iVar37 < 63; iVar37 = iVar37 + 1)
			{
				iVar32 = iVar37;
			
				if (IS_BIT_SET(Global_114931.f_18581[iVar32 /*6*/], 2) && !IS_BIT_SET(Global_114931.f_18581[iVar32 /*6*/], 3))
				{
					func_138(iVar32, &uVar0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), uVar0.f_6, 1);
				
					if (fVar35 < fVar34)
					{
						bVar38 = true;
					
						if (bParam1)
							if (iVar36 != uVar0.f_26)
								bVar38 = false;
					
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
			}
		}
	}

	return iVar33;
}

void func_138(int iParam0, var uParam1) // Position - 0x49F7
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
	
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
	
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
	
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		default:
			break;
	}
}

void func_139(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x5BA7
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_140(int iParam0) // Position - 0x5C38
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_141(int iParam0) // Position - 0x5F7E
{
	var uVar0;
	var uVar2;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 8);
	uVar2 = { func_142(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar2))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&uVar0, &uVar2, 8);
	}

	return uVar0;
}

struct<2> func_142(int iParam0) // Position - 0x5FB5
{
	var uVar0;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&uVar0, "TON5", 8);
			break;
	
		default:
			break;
	}

	return uVar0;
}

int func_143() // Position - 0x6401
{
	func_20();
	return Global_114931.f_2370.f_539.f_4321;
}

bool func_144() // Position - 0x641A
{
	var uVar0;

	if (Global_33944)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0)))
					return true;
		}
	}

	return false;
}

bool func_145() // Position - 0x645E
{
	if (func_148() && !func_149())
		return true;

	if (func_147() && func_146())
		return true;

	return false;
}

bool func_146() // Position - 0x6490
{
	return Global_114649 > 0;
}

bool func_147() // Position - 0x649E
{
	if (Global_99351 != -1)
		return true;

	return false;
}

bool func_148() // Position - 0x64B3
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 20);

	return false;
}

bool func_149() // Position - 0x64D6
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

void func_150() // Position - 0x64F3
{
	STREAMING::REMOVE_PTFX_ASSET();
	func_76(&Static_55);
	func_151(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_151(int iParam0) // Position - 0x650E
{
	var uVar0;

	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (func_162())
	{
		func_155(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_114922 = MISC::GET_GAME_TIMER();
		func_154(30000);
		TEXT_LABEL_ASSIGN_STRING(&uVar0, func_153(Global_114920, true), 64);
	
		if (func_28(Global_114920) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&uVar0, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&uVar0, Global_114919, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&uVar0, Global_114917, MISC::GET_GAME_TIMER() - Global_114918, 0);
	}
	else if (IS_BIT_SET(Global_114927, 0) && Global_114931.f_25002.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114927, 0);
	}

	func_152(&Global_33852);
	Global_114921 = false;
	func_88(-1);
}

void func_152(var uParam0) // Position - 0x65C0
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44848))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44847 = 0;
	Global_44849 = 0;
	Global_44886 = 15;
	Global_65024 = false;
	Global_65025 = 0;
}

char* func_153(int iParam0, bool bParam1) // Position - 0x65FD
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_154(int iParam0) // Position - 0x6846
{
	Global_45437 = MISC::GET_GAME_TIMER() + iParam0;
}

void func_155(int iParam0) // Position - 0x6858
{
	func_156(iParam0, 0, func_161(iParam0));
}

void func_156(int iParam0, int iParam1, int iParam2) // Position - 0x686D
{
	int iVar0;
	var uVar1;

	iVar0 = func_112();
	func_159(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_158(iParam0, &iVar0);
	uVar1 = { func_157(&iVar0) };
}

struct<16> func_157(var uParam0) // Position - 0x689C
{
	var uVar0;
	int iVar16;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 64);
	iVar16 = func_106(*uParam0);

	if (iVar16 < 10)
		TEXT_LABEL_APPEND_INT(&uVar0, 0, 64);

	TEXT_LABEL_APPEND_INT(&uVar0, iVar16, 64);
	TEXT_LABEL_APPEND_STRING(&uVar0, ":", 64);
	iVar16 = func_105(*uParam0);

	if (iVar16 < 10)
		TEXT_LABEL_APPEND_INT(&uVar0, 0, 64);

	TEXT_LABEL_APPEND_INT(&uVar0, iVar16, 64);
	TEXT_LABEL_APPEND_STRING(&uVar0, ":", 64);
	iVar16 = func_104(*uParam0);

	if (iVar16 < 10)
		TEXT_LABEL_APPEND_INT(&uVar0, 0, 64);

	TEXT_LABEL_APPEND_INT(&uVar0, iVar16, 64);
	TEXT_LABEL_APPEND_STRING(&uVar0, "  ", 64);
	iVar16 = func_107(*uParam0);

	if (iVar16 < 10)
		TEXT_LABEL_APPEND_INT(&uVar0, 0, 64);

	TEXT_LABEL_APPEND_INT(&uVar0, iVar16, 64);
	TEXT_LABEL_APPEND_STRING(&uVar0, "/", 64);
	iVar16 = func_110(*uParam0);

	if (iVar16 < 9)
		TEXT_LABEL_APPEND_INT(&uVar0, 0, 64);

	TEXT_LABEL_APPEND_INT(&uVar0, iVar16 + 1, 64);
	TEXT_LABEL_APPEND_STRING(&uVar0, "/", 64);
	TEXT_LABEL_APPEND_INT(&uVar0, func_108(*uParam0), 64);
	return uVar0;
}

void func_158(int iParam0, var uParam1) // Position - 0x696C
{
	Global_114931.f_25002.f_43[iParam0] = *uParam1;
}

void func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6984
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (iVar5 = iVar5 + iParam1; iVar5 >= 60; iVar5 = iVar5 - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (iVar4 = iVar4 + iParam2; iVar4 >= 60; iVar4 = iVar4 - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (iVar3 = iVar3 + iParam3; iVar3 >= 24; iVar3 = iVar3 - 24)
	{
		iParam4 = iParam4 + 1;
	}

	iVar2 = iVar2 + iParam4;

	for (iVar6 = func_103(iVar1, iVar0); iVar2 > iVar6; iVar6 = func_103(iVar1, iVar0))
	{
		iVar1 = iVar1 + 1;
		iVar2 = iVar2 - iVar6;
	
		if (iVar1 > 11)
		{
			iVar0 = iVar0 + 1;
			iVar1 = iVar1 - 12;
		}
	}

	for (iVar1 = iVar1 + iParam5; iVar1 > 11; iVar1 = iVar1 - 12)
	{
		iParam6 = iParam6 + 1;
	}

	iVar0 = iVar0 + iParam6;
	func_160(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6B06
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_161(int iParam0) // Position - 0x6B3E
{
	int iVar0;

	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
	
		case 0:
			iVar0 = 30;
			break;
	
		case 15:
			iVar0 = 30;
			break;
	
		case 1:
			iVar0 = 200;
			break;
	
		case 26:
			iVar0 = 30;
			break;
	
		case 8:
			iVar0 = 30;
			break;
	
		case 29:
			iVar0 = 30;
			break;
	
		case 24:
			iVar0 = 30;
			break;
	
		case 2:
			iVar0 = 0;
			break;
	
		case 17:
			iVar0 = 30;
			break;
	
		case 11:
			iVar0 = 30;
			break;
	
		case 16:
			iVar0 = 30;
			break;
	
		case 18:
			iVar0 = 30;
			break;
	
		case 12:
			iVar0 = 120;
			break;
	
		case 3:
			iVar0 = 60;
			break;
	
		case 27:
			iVar0 = 60;
			break;
	
		case 19:
			iVar0 = 30;
			break;
	
		case 20:
			iVar0 = 30;
			break;
	
		case 4:
			iVar0 = 60;
			break;
	
		case 28:
			iVar0 = 30;
			break;
	
		case 13:
			iVar0 = 35;
			break;
	
		case 7:
			iVar0 = 30;
			break;
	
		case 25:
			iVar0 = 40;
			break;
	
		case 10:
			iVar0 = 30;
			break;
	
		case 22:
			iVar0 = 30;
			break;
	
		case 21:
			iVar0 = 30;
			break;
	
		case 5:
			iVar0 = 30;
			break;
	
		case 30:
			iVar0 = 60;
			break;
	
		case 9:
			iVar0 = 60;
			break;
	
		case 6:
			iVar0 = 40;
			break;
	
		case 14:
			iVar0 = 40;
			break;
	}

	return iVar0;
}

bool func_162() // Position - 0x6CE1
{
	if (Global_114920 == func_29() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114921)
		return true;

	return false;
}

