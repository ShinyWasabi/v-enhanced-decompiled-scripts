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
	var Static_19 = 0;
	var Static_20 = 0;
	float Static_21 = 0f;
	float Static_22 = 0f;
	float Static_23 = 0f;
	var Static_24 = 0;
	var Static_25 = 0;
	float Static_26 = 0f;
	var Static_27 = 0;
	var Static_28 = 0;
	var Static_29 = 0;
	float Static_30 = 0f;
	float Static_31 = 0f;
	var Static_32 = 0;
	var Static_33 = 0;
	int Static_34 = 0;
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
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	float Static_61 = 0f;
	var Static_62 = 0;
	float Static_63 = 0f;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 0;
	var Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	var Static_83 = 0;
	var Static_84 = 0;
	var Static_85 = 0;
	var Static_86 = 0;
	var Static_87 = 0;
	var Static_88 = 0;
	var Static_89 = 0;
	var Static_90 = 0;
	var Static_91 = 0;
	var Static_92 = 0;
	var Static_93 = 0;
	var Static_94 = 0;
	var Static_95 = 0;
	var Static_96 = 0;
	var Static_97 = 0;
	var Static_98 = 0;
	var Static_99 = 0;
	var Static_100 = 0;
	var Static_101 = 0;
	var Static_102 = 0;
	var Static_103 = 0;
	var Static_104 = 0;
	var Static_105 = 0;
	bool Static_106 = 0;
	bool Static_107 = 0;
	bool Static_108 = 0;
	var Static_109 = 0;
	var Static_110 = 0;
	var Static_111 = 0;
	var Static_112 = 0;
	var Static_113 = 0;
	var Static_114 = 0;
	var Static_115 = 0;
	var Static_116 = 0;
	var Static_117 = 0;
	var Static_118 = 0;
	var Static_119 = 0;
	var Static_120 = 0;
	var Static_121 = 0;
	var Static_122 = 0;
	var Static_123 = 0;
	var Static_124 = 0;
	var Static_125 = 0;
	var Static_126 = 0;
	var Static_127 = 0;
	var Static_128 = 0;
	int Static_129 = 0;
	bool Static_130 = 0;
	int Static_131 = 0;
	int Static_132 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;

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
	Static_21 = 80f;
	Static_22 = 140f;
	Static_23 = 180f;
	Static_26 = 0f;
	Static_30 = -0.0375f;
	Static_31 = 0.17f;
	Static_34 = 3;
	Static_38 = 1;
	Static_39 = 65;
	Static_40 = 49;
	Static_41 = 64;
	Static_61 = (0.05f + 0.275f) - 0.01f;
	Static_63 = 0f;
	Static_132 = -1;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CONTEXT_CONTROLLER")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iVar0 = 0;
	iVar1 = iVar0;
	BUILTIN::SETTIMERA(0);
	Global_45854 = false;
	func_41();
	TEXT_LABEL_ASSIGN_STRING(&Global_45855, "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */, 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar7 = -1;
	bVar8 = Global_80305;

	while (true)
	{
		if (Global_80305)
			func_35();
		else
			func_33();
	
		func_26();
	
		if (Global_80305 != bVar8)
		{
			func_25();
			func_41();
			iVar2 = -1;
			bVar8 = Global_80305;
		
			while (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				BUILTIN::WAIT(2000);
			}
		}
	
		if (Global_45860)
			if (Global_45862 > -1)
				if (!Global_45660[Global_45862 /*32*/].f_6)
					if (!func_23(Global_45862, 1))
						Global_45862 = -1;
	
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
	
		if (iVar2 > -1)
		{
			if (!Global_45860)
			{
				if (Global_45862 != iVar2)
				{
					if (func_18(Global_45862))
					{
						func_25();
					
						if (!Global_45660[iVar2 /*32*/].f_5 && Global_45660[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_45660[iVar2 /*32*/].f_7)
								{
									if (!Global_45660[iVar2 /*32*/].f_6)
									{
										if (!Global_45660[iVar2 /*32*/].f_12)
											func_17(Global_45660[iVar2 /*32*/].f_8, Global_45660[iVar2 /*32*/].f_3);
										else
											func_16(Global_45660[iVar2 /*32*/].f_8, Global_45660[iVar2 /*32*/].f_13, Global_45660[iVar2 /*32*/].f_3, Global_45660[iVar2 /*32*/].f_30);
									
										Global_45862 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
			
				if (PAD::IS_CONTROL_RELEASED(2, 51))
					bVar6 = true;
			
				if (!func_19())
				{
					if (iVar2 > -1 && bVar6)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
						{
							Global_45660[iVar2 /*32*/].f_4 = 1;
							Global_45660[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_45660[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_45853 = false;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
			
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
							{
								if (PAD::IS_CONTROL_ENABLED(0, 101))
								{
									bVar5 = true;
									PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
								}
							
								if (PAD::IS_CONTROL_ENABLED(0, 74))
								{
									bVar4 = true;
									PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							PAD::ENABLE_CONTROL_ACTION(0, 101, 1);
							bVar5 = false;
						}
					
						if (bVar4)
						{
							PAD::ENABLE_CONTROL_ACTION(0, 74, 1);
							bVar4 = false;
						}
					}
				
					iVar3 = iVar2;
				}
				break;
		
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (BUILTIN::TIMERA() > 5000)
					{
						Global_45660[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
				
					if (!(iVar7 == Global_45660[iVar2 /*32*/].f_1))
						iVar0 = 0;
				
					if (Global_45660[iVar2 /*32*/].f_7 || Global_45660[iVar2 /*32*/] == false)
						iVar0 = 0;
				}
				break;
		
			case 2:
				if (Global_45853)
					func_25();
			
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
					if (iVar2 > -1)
						Global_45660[iVar2 /*32*/].f_29 = 0;
			
				if (Global_45854)
				{
					Global_45854 = false;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_45660[iVar2 /*32*/].f_4 || Global_45660[iVar2 /*32*/].f_7))
					{
						Global_45854 = false;
						iVar2 = -1;
					}
				}
			
				if (iVar2 > -1)
					if (Global_45660[iVar2 /*32*/].f_7 || Global_45660[iVar2 /*32*/] == false)
						iVar2 = -1;
			
				if (iVar2 == -1)
				{
					iVar0 = 0;
					bVar6 = false;
				}
				break;
		}
	
		if (iVar2 > -1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
		}
	
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			BUILTIN::SETTIMERA(0);
			bVar6 = false;
		}
	
		func_12();
		func_10(&iVar2);
		Global_45859 = false;
		Global_45860 = false;
		func_1();
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x45A
{
	int iVar0;

	if (!Static_106)
		return;

	iVar0 = 1;

	if (Static_129 == 1)
		iVar0 = 0;

	if (Static_107)
	{
		if (Static_108)
			HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
	
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Static_109);
	
		if (Static_108)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Static_113);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45855);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Static_113);
		}
	
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, iVar0, 50);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Static_109);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45855);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, iVar0, 50);
	}

	switch (Static_129)
	{
		case 0:
			break;
	
		case 1:
			func_9(false);
			break;
	
		case 2:
			func_2(false);
			break;
	}
}

void func_2(bool bParam0) // Position - 0x4F7
{
	char* sVar0;

	sVar0 = "GTAO_Boss_Goons_FM_Soundset";

	if (func_4(true))
		sVar0 = "GTAO_Biker_FM_Soundset";

	if (bParam0 && !func_3())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
}

bool func_3() // Position - 0x52B
{
	return Global_2673274.f_2591[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0) // Position - 0x541
{
	return func_5(PLAYER::PLAYER_ID(), bParam0);
}

bool func_5(int iParam0, bool bParam1) // Position - 0x553
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2) // Position - 0x564
{
	bool bVar0;

	if (!func_8(iParam0))
		return 0;

	if (!bParam1)
		if (func_7(iParam0, iParam2))
			return 0;

	bVar0 = Global_1892798[iParam0 /*615*/].f_10;

	if (func_8(bVar0) && Global_1892798[bVar0 /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

bool func_7(bool bParam0, int iParam1) // Position - 0x5C0
{
	if (func_8(bParam0))
		if (func_8(Global_1892798[bParam0 /*615*/].f_10))
			if (Global_1892798[bParam0 /*615*/].f_10 == bParam0 && Global_1892798[bParam0 /*615*/].f_10.f_433 == iParam1)
				return true;

	return false;
}

bool func_8(bool bParam0) // Position - 0x60F
{
	int iVar0;

	iVar0 = bParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

void func_9(bool bParam0) // Position - 0x631
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);

	if (bParam0 && !func_3())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
}

void func_10(var uParam0) // Position - 0x65E
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (Global_45660[iVar0 /*32*/] && Global_45660[iVar0 /*32*/].f_4)
		{
			if (Global_45660[iVar0 /*32*/].f_31 != 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_45660[iVar0 /*32*/].f_31))
				{
					if (*uParam0 > -1)
						func_11();
				
					Global_45660[iVar0 /*32*/] = false;
					Global_45660[iVar0 /*32*/].f_31 = 0;
					Global_45660[iVar0 /*32*/] = false;
					Global_45660[iVar0 /*32*/].f_4 = 0;
					Global_45660[iVar0 /*32*/].f_5 = 0;
					Global_45660[iVar0 /*32*/].f_2 = 0;
					Global_45660[iVar0 /*32*/].f_7 = 0;
					Global_45660[iVar0 /*32*/].f_6 = 0;
					Global_45660[iVar0 /*32*/].f_3 = 0;
					*uParam0 = -1;
				}
			}
		}
	}
}

void func_11() // Position - 0x716
{
	if (Global_45862 != -1 || Static_106)
	{
		Static_106 = false;
		Global_45862 = -1;
	}
}

void func_12() // Position - 0x735
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (Global_45660[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_45862)
				func_25();
		
			Global_45660[iVar0 /*32*/].f_31 = 0;
			Global_45660[iVar0 /*32*/] = false;
			Global_45660[iVar0 /*32*/].f_4 = 0;
			Global_45660[iVar0 /*32*/].f_5 = 0;
			Global_45660[iVar0 /*32*/].f_2 = 0;
			Global_45660[iVar0 /*32*/].f_7 = 0;
			Global_45660[iVar0 /*32*/].f_6 = 0;
			Global_45660[iVar0 /*32*/].f_1 = -1;
			Global_45660[iVar0 /*32*/].f_3 = 0;
		}
	}
}

bool func_13(int iParam0) // Position - 0x7C2
{
	if (iParam0 < 0)
		return false;

	if (Global_45660[iParam0 /*32*/].f_5)
		return true;

	return false;
}

int func_14() // Position - 0x7E5
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (Global_45660[iVar0 /*32*/] == true)
			if (Global_45660[iVar0 /*32*/].f_4 == false)
				iVar1 = iVar1 + 1;
	}

	if (iVar1 == 0)
		func_25();

	return iVar1;
}

int func_15() // Position - 0x82F
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (Global_45660[iVar0 /*32*/])
		{
			if (Global_45660[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_45660[iVar0 /*32*/].f_2;
			}
		}
	}

	return iVar2;
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, bool bParam21) // Position - 0x87B
{
	Static_109 = { uParam0 };
	Static_113 = { uParam4 };
	Static_106 = true;
	Static_107 = true;
	Static_129 = iParam20;
	Static_108 = bParam21;
}

void func_17(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x8A3
{
	Static_109 = { uParam0 };
	Static_106 = true;
	Static_107 = false;
	Static_129 = iParam4;
}

bool func_18(int iParam0) // Position - 0x8BD
{
	int iVar0;

	if (Global_99358 && Global_99357)
		return false;

	if (iParam0 > 0)
		if (func_23(iParam0, 1) || Static_106)
			return true;

	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME())
	{
		for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
		{
			if (func_23(iVar0, 1))
				return true;
		}
	
		return false;
	}

	return true;
}

bool func_19() // Position - 0x92B
{
	if (Global_77359)
		return true;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return true;

	if (func_22(0))
		return true;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return true;

	if (Global_45859)
		return true;

	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
		return true;

	if (func_21(true))
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return true;

	if (func_20(8, -1))
		return true;

	return false;
}

bool func_20(int iParam0, int iParam1) // Position - 0x9A2
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

bool func_21(bool bParam0) // Position - 0x9DA
{
	if (bParam0)
		return Global_24407.f_4 && Global_24407.f_104 == 4;

	return Global_24407.f_4;
}

bool func_22(int iParam0) // Position - 0xA03
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

bool func_23(int iParam0, int iParam1) // Position - 0xA5A
{
	int iVar0;
	bool bVar1;

	iVar0 = func_24(iParam0);

	if (iParam1 == 0)
		if (iVar0 == -1)
			return false;
	else
		iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (Global_45660[iVar0 /*32*/].f_6)
		return false;

	bVar1 = 0;

	if (!Global_45660[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_45660[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45855);
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_45660[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45855);
	
		if (Global_45660[iVar0 /*32*/].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_45660[iVar0 /*32*/].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_45660[iVar0 /*32*/].f_13));
	
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return bVar1;
}

int func_24(int iParam0) // Position - 0xB0F
{
	int iVar0;

	if (iParam0 < 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (Global_45660[iVar0 /*32*/].f_1 == iParam0)
			return iVar0;
	}

	return -1;
}

void func_25() // Position - 0xB4A
{
	func_11();
	Global_45862 = -1;
}

void func_26() // Position - 0xB5A
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_32())
	{
		if (func_31(false))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2685153.f_789.f_12)))
			{
				func_30();
				func_27(6, 0);
			}
		}
	}
}

void func_27(int iParam0, int iParam1) // Position - 0xB97
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	Global_77473 = iParam0;
	bVar0 = iParam1 == 1;
	bVar1 = iParam1 == 2;
	bVar2 = iParam1 == 3;

	switch (Global_77473)
	{
		case 3:
			Global_77471 = 0;
			break;
	
		case 4:
			Global_77471 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPSECUROSERV")) > 0)
	{
		if (bVar0)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPBIKERBUSINESS")) > 0)
	{
		if (bVar1)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPIMPORTEXPORT")) > 0)
	{
		if (bVar2)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPINTERNET")) > 0)
	{
		if (bVar0 || bVar1 || bVar2)
		{
		}
	
		return;
	}

	if (Global_80305 && func_29())
		return;

	if (!Global_80305 && func_28())
		return;

	if (Global_80305)
	{
		Global_77324 = iParam1;
	}
	else if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
			SCRIPT::REQUEST_SCRIPT("appImportExport");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
			SCRIPT::REQUEST_SCRIPT("appInternet");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appInternet", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}
}

bool func_28() // Position - 0xD77
{
	return Global_77360;
}

bool func_29() // Position - 0xD83
{
	return Global_1935999;
}

void func_30() // Position - 0xD8F
{
	Global_2685153.f_789.f_28 = 0;
}

bool func_31(bool bParam0) // Position - 0xDA1
{
	if (bParam0)
		return Global_2685153.f_789.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2685153.f_789.f_31;

	return Global_2685153.f_789.f_28;
}

bool func_32() // Position - 0xDDD
{
	return Global_77359;
}

void func_33() // Position - 0xDE9
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;

	for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1)
	{
		if (Global_62201[iVar1] < 0)
		{
			Global_62201[iVar1] = 0;
			bVar0 = true;
		}
	}

	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0) // Position - 0xE33
{
	int iVar0;

	iVar0 = Global_62201[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_35() // Position - 0xE8D
{
	var uVar0;
	var uVar14;
	int iVar31;

	if (Global_1835512 != -1)
	{
		uVar0 = 1;
		uVar0[0 /*13*/] = Global_1835513[0];
		uVar0[0 /*13*/].f_1 = Global_1835513[1];
		uVar0[0 /*13*/].f_2 = Global_1835513[2];
		uVar0[0 /*13*/].f_3 = Global_1835513[3];
		uVar0[0 /*13*/].f_4 = Global_1835513[4];
		uVar0[0 /*13*/].f_5 = Global_1835513[5];
		uVar0[0 /*13*/].f_6 = Global_1835513[6];
		uVar0[0 /*13*/].f_7 = Global_1835513[7];
		uVar0[0 /*13*/].f_8 = Global_1835513[8];
		uVar0[0 /*13*/].f_9 = Global_1835513[9];
		uVar0[0 /*13*/].f_10 = Global_1835513[10];
		uVar0[0 /*13*/].f_11 = Global_1835513[11];
		uVar0[0 /*13*/].f_12 = Global_1835513[12];
	
		if (MISC::IS_XBOX360_VERSION() || func_40())
		{
			if (!Static_130)
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&uVar0[0 /*13*/]))
					Static_130 = true;
		
			if (Static_130)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
						TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_39() /*5574*/].f_5397.f_18[Global_1835512 /*6*/], NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&uVar0[0 /*13*/]), 24);
				
					func_38();
				}
			}
		}
		else if (MISC::IS_PS3_VERSION() || func_37())
		{
			if (func_36(uVar0[0 /*13*/]))
			{
				uVar14 = 1;
			
				switch (Static_131)
				{
					case 0:
						Static_132 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&uVar0, 1);
					
						if (Static_132 >= 0)
							Static_131 = Static_131 + 1;
						break;
				
					case 1:
						iVar31 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Static_132, &uVar14, 1);
					
						switch (iVar31)
						{
							case -1:
								func_38();
								break;
						
							case 0:
								TEXT_LABEL_COPY(&Global_2359296[func_39() /*5574*/].f_5397.f_18[Global_1835512 /*6*/], { uVar14[0 /*16*/] }, 6);
								func_38();
								break;
						
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_38();
			}
		}
		else
		{
			if (func_36(uVar0[0 /*13*/]))
				TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_39() /*5574*/].f_5397.f_18[Global_1835512 /*6*/], NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&uVar0[0 /*13*/]), 24);
		
			func_38();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x10A7
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_37() // Position - 0x10B7
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_38() // Position - 0x10CD
{
	Global_1835512 = -1;
	Static_130 = false;
	Static_132 = -1;
	Static_131 = 0;
}

int func_39() // Position - 0x10E3
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

bool func_40() // Position - 0x10F0
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_41() // Position - 0x1106
{
	int iVar0;

	Global_45853 = false;
	Global_45859 = false;
	Global_45860 = false;
	Global_45861 = 1;
	Global_45862 = -1;
	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		Global_45660[iVar0 /*32*/] = false;
	}
}

