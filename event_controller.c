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
	float Static_45 = 0f;
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
	var Static_61 = 0;
	var Static_62 = 0;
	bool Static_63 = 0;
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
	Static_45 = (0.05f + 0.275f) - 0.01f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_157();
		func_1();
	}
}

void func_1() // Position - 0xA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		for (iVar2 = 0; iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1); iVar2 = iVar2 + 1)
		{
			iVar7 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
		
			switch (iVar7)
			{
				case 193:
					func_154();
					break;
			
				case 194:
					func_153();
					break;
			
				case 195:
					func_147(iVar2);
					break;
			
				case 196:
					func_146(iVar2);
					break;
			
				case 197:
					func_135(iVar2);
					break;
			
				case 215:
					func_3(iVar2);
					break;
			}
		}
	}

	for (iVar2 = 0; iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0); iVar2 = iVar2 + 1)
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		Static_63 = true;
	
		switch (iVar0)
		{
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
			
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_57278.f_1[iVar3] = iVar1;
							iVar3 = iVar3 + 1;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_57278.f_25[iVar5] = iVar1;
							iVar5 = iVar5 + 1;
						}
					}
				}
				break;
		
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
			
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_57278.f_13[iVar4] = iVar1;
							iVar4 = iVar4 + 1;
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_57278.f_37[iVar6] = iVar1;
							iVar6 = iVar6 + 1;
						}
					}
				}
				break;
		}
	}

	Global_57278 = iVar3;
	Global_57278.f_12 = iVar4;
	Global_57278.f_24 = iVar5;
	Global_57278.f_36 = iVar6;
}

bool func_2(int iParam0) // Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0) // Position - 0x25B
{
	struct<39> Var0;
	int iVar39;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		iVar39 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(Var0.f_38);
	
		if (iVar39 >= 0 && iVar39 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		{
			if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(iVar39) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
			{
				if (NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
					func_67(iVar39);
				else
					NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar39);
			
				func_66(Var0.f_37, -1);
			}
			else if (func_49())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, int iParam37) // Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	var uVar36;
	var uVar52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	bool bVar73;
	int iVar74;
	int iVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	int iVar80;
	int iVar81;
	int iVar82;

	bVar0 = false;

	if (iParam37 >= 1000000)
	{
		iParam37 = iParam37 - 1000000;
		bVar0 = true;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_48())
		{
			func_47(uParam22);
			return 0;
		}
	
		if (func_46())
		{
			func_47(uParam22);
			return 0;
		}
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bVar0)
		{
		}
		else if (!NETWORK::NETWORK_IS_FRIEND(&uParam23))
		{
			func_47(uParam22);
			return 0;
		}
	
		if (Global_21570)
		{
			func_47(uParam22);
			return 0;
		}
	
		bVar1 = true;
	
		if (!func_45())
		{
			if (!func_44(false))
			{
				if (bVar1)
				{
					func_47(uParam22);
					return 0;
				}
			}
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_43(PLAYER::PLAYER_ID()))
		{
			func_47(uParam22);
			return 0;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam6))
	{
		func_47(uParam22);
		return 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		func_47(uParam22);
		return 0;
	}

	uVar2 = { uParam6 };
	iVar18 = func_42(uVar2);

	if (iVar18 != -1)
		func_39(iVar18);

	iVar19 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(uParam22);

	if (iVar19 != -1)
	{
		uVar20 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(iVar19);
		iVar21 = 0;
	
		for (iVar21 = 0; iVar21 <= 11; iVar21 = iVar21 + 1)
		{
			if (uVar20 == Global_2625757[iVar21 /*4*/].f_3 && MISC::GET_GAME_TIMER() < Global_2625757[iVar21 /*4*/].f_2)
			{
				Global_2625757[iVar21 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar21 = 12;
				func_47(uParam22);
				return 0;
			}
		}
	}

	uVar22.f_1 = -1;
	uVar22.f_2 = -1;
	uVar22.f_9 = -1;
	func_38(&uVar22);
	bVar32 = false;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	TEXT_LABEL_ASSIGN_STRING(&uVar36, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&uVar52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	bVar73 = false;

	if (func_37(&uParam0, &bVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_35(&uParam0, &uVar22, false))
	{
		iVar34 = uVar22.f_2;
		bVar32 = func_34(iVar34, uVar22.f_1);
		iVar33 = func_33(&uVar22);
		uVar36 = { func_32(&uVar22, false) };
		uVar52 = { func_31(&uVar22) };
		iVar69 = 1;
		iVar68 = func_30(&uVar22, false);
		bVar73 = func_29(&uVar22);
		iVar74 = func_27(&uVar22);
		iVar75 = func_26(&uVar22);
		bVar76 = func_21(&uVar22);
	
		if (!bVar76)
			iVar72 = 1;
	}
	else
	{
		bVar77 = false;
	
		if (func_19(PLAYER::PLAYER_ID(), uParam23))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar77 = true;
			}
			else
			{
				func_47(uParam22);
				func_17(false);
				return 0;
			}
		}
	
		if (!func_16())
		{
			if (!bVar77)
			{
				if (func_14(PLAYER::PLAYER_ID(), uParam23))
				{
					func_47(uParam22);
					func_17(false);
					return 0;
				}
			}
		}
	
		if (!func_13())
		{
			func_47(uParam22);
			bVar78 = true;
			func_17(bVar78);
			return 0;
		}
	
		bVar79 = false;
	
		if (!bVar77)
		{
			if (func_7(uParam23, &bVar79, true))
			{
				func_47(uParam22);
				func_17(bVar79);
				return 0;
			}
		}
	
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}

	iVar80 = Global_1689057;

	if (iVar80 >= 12)
		iVar80 = iVar80 - 1;

	for (iVar81 = iVar80 - 1; iVar81 >= 0; iVar81 = iVar81 - 1)
	{
		Global_2623479[iVar80 /*99*/] = { Global_2623479[iVar81 /*99*/] };
		iVar80 = iVar80 - 1;
	}

	Global_1689057 = Global_1689057 + 1;

	if (Global_1689057 > 12)
		Global_1689057 = 12;

	iVar82 = 0;
	Global_2623479[iVar82 /*99*/] = false;
	Global_2623479[iVar82 /*99*/].f_1 = 0;
	Global_2623479[iVar82 /*99*/].f_5 = 0;
	Global_2623479[iVar82 /*99*/].f_2 = iVar70;
	Global_2623479[iVar82 /*99*/].f_3 = 0;
	Global_2623479[iVar82 /*99*/].f_4 = iVar71;
	Global_2623479[iVar82 /*99*/].f_6 = { uParam0 };
	Global_2623479[iVar82 /*99*/].f_12 = iVar74;
	Global_2623479[iVar82 /*99*/].f_13 = iVar75;
	Global_2623479[iVar82 /*99*/].f_15 = { uParam6 };
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623479[iVar82 /*99*/].f_31), "", 64);
	Global_2623479[iVar82 /*99*/].f_49 = iVar34;
	Global_2623479[iVar82 /*99*/].f_50 = bVar32;
	Global_2623479[iVar82 /*99*/].f_51 = iVar33;
	Global_2623479[iVar82 /*99*/].f_91 = uParam22;
	Global_2623479[iVar82 /*99*/].f_57 = { uVar36 };
	Global_2623479[iVar82 /*99*/].f_73 = { uVar52 };
	Global_2623479[iVar82 /*99*/].f_52 = iVar68;
	Global_2623479[iVar82 /*99*/].f_53 = 0;
	Global_2623479[iVar82 /*99*/].f_53.f_1 = 0;
	Global_2623479[iVar82 /*99*/].f_53.f_2 = 0;
	Global_2623479[iVar82 /*99*/].f_56 = iVar69;
	Global_2623479[iVar82 /*99*/].f_90 = uParam36;
	Global_2623479[iVar82 /*99*/].f_92 = -1;
	Global_2623479[iVar82 /*99*/].f_93 = iVar72;
	Global_2623479[iVar82 /*99*/].f_94 = Global_2625809;
	Global_2623479[iVar82 /*99*/].f_95 = bVar73;
	Global_2623479[iVar82 /*99*/].f_98 = NETWORK::NETWORK_IS_FRIEND(&uParam23);

	if (Global_2623479[iVar82 /*99*/].f_50 == 0)
		if (Global_2623479[iVar82 /*99*/].f_51 == 1)
			Global_2623479[iVar82 /*99*/].f_56 = 0;

	Global_2623479[iVar82 /*99*/].f_96 = func_6(uParam23, iVar82);
	Global_2623479[iVar82 /*99*/].f_97 = 0;
	Global_2623479[iVar82 /*99*/].f_89 = iParam37;
	Global_2625809 = Global_2625809 + 1;
	Global_2623479[iVar82 /*99*/].f_47 = func_5(uParam23);

	if (Global_2623479[iVar82 /*99*/].f_47 != -1)
		Global_2623479[iVar82 /*99*/].f_48 = MISC::GET_GAME_TIMER() + 15000;

	return 1;
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x84B
{
	var uVar0;
	int iVar14;

	if (!func_16())
		return -1;

	uVar0 = 1;
	uVar0[0 /*13*/] = { uParam0 };
	iVar14 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&uVar0, 1);

	if (iVar14 < 0)
		return -1;

	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13) // Position - 0x886
{
	if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
		return 0;

	if (Global_2623479[iParam13 /*99*/].f_90 > 0)
		return 0;

	return 1;
}

bool func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14) // Position - 0x8AF
{
	var uVar0;

	*uParam13 = 0;

	if (func_12(0))
		return false;

	if (func_16())
	{
		if (!func_11())
		{
			*uParam13 = 1;
			return true;
		}
	}

	if (!func_9(1) && !bParam14)
		return true;

	uVar0 = { func_8(PLAYER::PLAYER_ID()) };

	if (!bParam14 && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uVar0, &uParam0))
		if (!NETWORK::NETWORK_IS_FRIEND(&uParam0))
			return true;

	return false;
}

struct<13> func_8(int iParam0) // Position - 0x923
{
	var uVar0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &uVar0, 13);
	return uVar0;
}

bool func_9(int iParam0) // Position - 0x93A
{
	if (MISC::IS_PS3_VERSION() || func_10() && iParam0 == 0)
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0 || NETWORK::_NETWORK_HAVE_PLATFORM_COMMUNICATION_PRIVILEGES() == 0)
			return false;
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0)
		return false;

	if (func_11() == false)
		return false;

	return true;
}

bool func_10() // Position - 0x993
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

bool func_11() // Position - 0x9A9
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (func_10() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0 && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (func_16() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		return true;

	return false;
}

bool func_12(int iParam0) // Position - 0xA21
{
	if (MISC::IS_PS3_VERSION() || func_10() && iParam0 == 0)
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0 || NETWORK::_NETWORK_HAVE_PLATFORM_COMMUNICATION_PRIVILEGES() == 0)
			return false;
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
		return false;

	if (func_11() == false)
		return false;

	return true;
}

bool func_13() // Position - 0xA7A
{
	if (!MISC::IS_XBOX360_VERSION())
		return true;

	return NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
}

bool func_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xA92
{
	if (!func_15(iParam0))
	{
		if (func_16() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1))
				return false;
	
		if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
				return true;
	}

	return false;
}

bool func_15(int iParam0) // Position - 0xAD9
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return true;
	
		default:
		
	}

	return false;
}

bool func_16() // Position - 0xB05
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_17(bool bParam0) // Position - 0xB1B
{
	int iVar0;

	if (bParam0)
		if (!MISC::IS_XBOX360_VERSION())
			return;

	if (func_16())
		return;

	iVar0 = MISC::GET_GAME_TIMER();

	if (iVar0 < Global_2625806)
		return;

	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		return;

	if (bParam0)
		func_18("INV_NO_XBOXLIVE", -1);
	else
		func_18("INV_RESTRICT" /* GXT: You have received an Invite to user-generated content which is currently restricted by your control settings. */, -1);

	Global_2625806 = iVar0 + 1800000;
}

void func_18(char* sParam0, int iParam1) // Position - 0xB7B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_19(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xB92
{
	if (!func_15(uParam0))
	{
		if (func_16() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&uParam1))
				return false;
	
		if (!func_20())
			return true;
	}

	return false;
}

bool func_20() // Position - 0xBCF
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
		return false;

	if (func_10())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (func_16())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, 1))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return true;

	return false;
}

bool func_21(var uParam0) // Position - 0xC40
{
	bool bVar0;
	int iVar1;

	bVar0 = 0;

	if (func_25(uParam0))
		return IS_BIT_SET(Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return IS_BIT_SET(Global_2628568.f_1.f_63, 14);
	
		return bVar0;
	}

	iVar1 = func_22(uParam0);

	if (iVar1 == -1)
		return bVar0;

	switch (uParam0->f_2)
	{
		case 63:
			return IS_BIT_SET(Global_794954.f_4[iVar1 /*95*/].f_82, 14);
	
		case 62:
			return IS_BIT_SET(Global_958977.f_1804[iVar1 /*95*/].f_82, 14);
	
		case 40:
			return bVar0;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return bVar0;
	else if (uParam0->f_2 < 32)
		return bVar0;

	return bVar0;
}

int func_22(var uParam0) // Position - 0xD10
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
		return -1;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return 9999;
	
		return -1;
	}

	iVar0 = 0;

	switch (uParam0->f_2)
	{
		case 63:
			if (IS_BIT_SET(Global_794954.f_4[uParam0->f_1 /*95*/].f_82, 13))
				if (MISC::ARE_STRINGS_EQUAL(&Global_794954.f_4[uParam0->f_1 /*95*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_794954.f_4[uParam0->f_1 /*95*/].f_82, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (iVar0 = 0; iVar0 < 1518; iVar0 = iVar0 + 1)
			{
				if (IS_BIT_SET(Global_794954.f_4[iVar0 /*95*/].f_82, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Global_794954.f_4[iVar0 /*95*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
			}
		
			return -1;
	
		case 62:
			if (IS_BIT_SET(Global_958977.f_1804[uParam0->f_1 /*95*/].f_82, 13))
				if (MISC::ARE_STRINGS_EQUAL(&Global_958977.f_1804[uParam0->f_1 /*95*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_958977.f_1804[uParam0->f_1 /*95*/].f_82, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (iVar0 = 0; iVar0 < 300; iVar0 = iVar0 + 1)
			{
				if (IS_BIT_SET(Global_958977.f_1804[iVar0 /*95*/].f_82, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Global_958977.f_1804[iVar0 /*95*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
			}
		
			return -1;
	
		case 40:
			return uParam0->f_1;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (IS_BIT_SET(Global_993502.f_4[uParam0->f_1 /*95*/].f_82, 13))
			if (MISC::ARE_STRINGS_EQUAL(&Global_993502.f_4[uParam0->f_1 /*95*/], &(uParam0->f_3)))
				return uParam0->f_1;
	
		if (IS_BIT_SET(Global_993502.f_4[uParam0->f_1 /*95*/].f_82, 13))
			if (Global_1573131.f_5)
				return -1;
	
		for (iVar0 = 0; iVar0 < 62; iVar0 = iVar0 + 1)
		{
			if (IS_BIT_SET(Global_993502.f_4[iVar0 /*95*/].f_82, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_993502.f_4[iVar0 /*95*/], &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
		}
	
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}

	return -1;
}

bool func_23(var uParam0) // Position - 0xF66
{
	if (Global_2628568)
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628568.f_1), &(uParam0->f_3)))
			return true;

	return false;
}

bool func_24(int iParam0) // Position - 0xF8B
{
	return iParam0 == 9999;
}

bool func_25(var uParam0) // Position - 0xF99
{
	int iVar0;

	iVar0 = uParam0->f_9;

	if (iVar0 == -1)
		return false;

	if (!Global_2625811.f_356[iVar0 /*75*/])
		return false;

	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2625811.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
		return false;

	if (!IS_BIT_SET(Global_2625811.f_356[iVar0 /*75*/].f_5, 3))
		return false;

	return true;
}

int func_26(var uParam0) // Position - 0xFF9
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_22(uParam0);

	if (iVar1 == -1)
		return iVar0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[iVar1 /*95*/].f_86;
	
		case 62:
			return iVar0;
	
		default:
		
	}

	return iVar0;
}

int func_27(var uParam0) // Position - 0x1042
{
	var uVar0;
	int iVar13;
	int iVar14;

	uVar0.f_2 = -1;
	uVar0.f_5 = -1;
	uVar0.f_6 = -1;
	uVar0.f_10 = -1;
	uVar0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_22(uParam0);

	if (iVar14 == -1)
		return iVar13;

	switch (uParam0->f_2)
	{
		case 63:
			uVar0 = { func_28(uParam0) };
			return uVar0.f_1;
	
		case 62:
			return iVar13;
	
		default:
		
	}

	return iVar13;
}

struct<13> func_28(var uParam0) // Position - 0x10AF
{
	var uVar0;
	int iVar13;

	uVar0.f_2 = -1;
	uVar0.f_5 = -1;
	uVar0.f_6 = -1;
	uVar0.f_10 = -1;
	uVar0.f_12 = -1;
	iVar13 = func_22(uParam0);

	if (iVar13 == -1)
		return uVar0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_144215[iVar13 /*13*/];
	
		case 62:
			return Global_958977.f_30305[iVar13 /*13*/];
	
		default:
		
	}

	return uVar0;
}

bool func_29(var uParam0) // Position - 0x112C
{
	bool bVar0;
	int iVar1;

	bVar0 = 0;

	if (func_25(uParam0))
		return IS_BIT_SET(Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return IS_BIT_SET(Global_2628568.f_1.f_63, 17);
	
		return bVar0;
	}

	iVar1 = func_22(uParam0);

	if (iVar1 == -1)
		return bVar0;

	switch (uParam0->f_2)
	{
		case 63:
			return IS_BIT_SET(Global_794954.f_4[iVar1 /*95*/].f_82, 17);
	
		case 62:
			return IS_BIT_SET(Global_958977.f_1804[iVar1 /*95*/].f_82, 17);
	
		case 40:
			return bVar0;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return bVar0;
	else if (uParam0->f_2 < 32)
		return bVar0;

	return bVar0;
}

int func_30(var uParam0, bool bParam1) // Position - 0x11FC
{
	int iVar0;
	int iVar1;

	iVar0 = 0;

	if (!bParam1)
		if (func_25(uParam0))
			if (IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
				return Global_2628702.f_513[uParam0->f_9];

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628568.f_1.f_54;
	
		return iVar0;
	}

	iVar1 = func_22(uParam0);

	if (iVar1 == -1)
		return 0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[iVar1 /*95*/].f_60;
	
		case 62:
			return Global_958977.f_1804[iVar1 /*95*/].f_60;
	
		case 40:
			return 0;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[iVar1 /*95*/].f_60;
	else if (uParam0->f_2 < 32)
		return iVar0;

	return iVar0;
}

struct<16> func_31(var uParam0) // Position - 0x12DB
{
	var uVar0;
	int iVar16;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "NO DESCRIPTION", 64);

	if (func_25(uParam0))
		return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_28;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628568.f_1.f_28;
	
		return uVar0;
	}

	iVar16 = func_22(uParam0);

	if (iVar16 == -1)
		return uVar0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[iVar16 /*95*/].f_38;
	
		case 62:
			return Global_958977.f_1804[iVar16 /*95*/].f_38;
	
		case 40:
			return uVar0;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[iVar16 /*95*/].f_38;
	else if (uParam0->f_2 < 32)
		return uVar0;

	return uVar0;
}

struct<16> func_32(var uParam0, bool bParam1) // Position - 0x13CB
{
	var uVar0;
	int iVar16;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "UNKNOWN", 64);

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "", 64);

	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
				return Global_2628702[uParam0->f_9 /*16*/];
		
			return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628568.f_1.f_12;
	
		return uVar0;
	}

	iVar16 = func_22(uParam0);

	if (iVar16 == -1)
		return uVar0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[iVar16 /*95*/].f_22;
	
		case 62:
			return Global_958977.f_1804[iVar16 /*95*/].f_22;
	
		case 40:
			return uVar0;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[iVar16 /*95*/].f_22;
	else if (uParam0->f_2 < 32)
		return uVar0;

	return uVar0;
}

int func_33(var uParam0) // Position - 0x14ED
{
	int iVar0;
	int iVar1;

	iVar0 = -1;

	if (func_25(uParam0))
		return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_55;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628568.f_1.f_55;
	
		return iVar0;
	}

	iVar1 = func_22(uParam0);

	if (iVar1 == -1)
		return iVar0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794954.f_4[iVar1 /*95*/].f_74;
	
		case 62:
			return Global_958977.f_1804[iVar1 /*95*/].f_74;
	
		case 40:
			return iVar0;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[iVar1 /*95*/].f_74;
	else if (uParam0->f_2 < 32)
		return iVar0;

	return iVar0;
}

bool func_34(int iParam0, int iParam1) // Position - 0x15BB
{
	if (func_24(iParam1))
	{
		if (Global_2628568)
			return Global_2628568.f_1.f_53;
	
		return 372;
	}

	switch (iParam0)
	{
		case 63:
			return Global_794954.f_4[iParam1 /*95*/].f_71;
	
		case 62:
			return Global_958977.f_1804[iParam1 /*95*/].f_71;
	
		default:
		
	}

	if (iParam0 == PLAYER::PLAYER_ID())
		return Global_993502.f_4[iParam1 /*95*/].f_71;
	else if (iParam0 < 32)
		return 372;

	return 372;
}

bool func_35(var uParam0, var uParam1, bool bParam2) // Position - 0x1644
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
		return false;

	iVar0 = 0;
	bVar1 = -1;
	iVar2 = 1518;

	if (!bParam2)
		iVar2 = 1500;

	for (iVar0 = 0; iVar0 < iVar2; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_794954.f_4[iVar0 /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_794954.f_4[iVar0 /*95*/], uParam0))
			{
				bVar1 = Global_794954.f_4[iVar0 /*95*/].f_71;
				*uParam1 = func_36(bVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794954.f_4[iVar0 /*95*/] };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (iVar0 = 0; iVar0 < 300; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_958977.f_1804[iVar0 /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_958977.f_1804[iVar0 /*95*/], uParam0))
			{
				bVar1 = Global_958977.f_1804[iVar0 /*95*/].f_71;
				*uParam1 = func_36(bVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *uParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (iVar0 = 0; iVar0 < 62; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_993502.f_4[iVar0 /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_993502.f_4[iVar0 /*95*/], uParam0))
			{
				bVar1 = Global_993502.f_4[iVar0 /*95*/].f_71;
				*uParam1 = func_36(bVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *uParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	return false;
}

int func_36(bool bParam0) // Position - 0x17D4
{
	switch (bParam0)
	{
		case 15:
			return 244;
	
		case 14:
			return 245;
	
		case 122:
			return 249;
	
		case 11:
			return 246;
	
		case 13:
			return 247;
	
		case 12:
			return 248;
	
		case 8:
			return 251;
	
		case true:
			return 252;
	
		case 5:
			return 250;
	
		case 6:
			return 253;
	
		case 3:
			return 256;
	
		case false:
			return 254;
	
		case 2:
			return 255;
	
		case 148:
			return 49;
	
		case 151:
			return 52;
	
		case 152:
			return 53;
	
		case 157:
			return 54;
	
		case 153:
			return 55;
	
		case 154:
			return 56;
	
		case 155:
			return 57;
	
		case 159:
			return 58;
	
		case 162:
			return 51;
	
		case 142:
			return 60;
	
		case 160:
			return 62;
	
		case 164:
			return 63;
	
		case 163:
			return 64;
	
		case 166:
			return 65;
	
		case 167:
			return 66;
	
		case 168:
			return 67;
	
		case 169:
			return 68;
	
		case 170:
			return 69;
	
		case 171:
			return 70;
	
		case 172:
			return 71;
	
		case 173:
			return 72;
	
		case 178:
			return 73;
	
		case 188:
			return 74;
	
		case 214:
			return 75;
	
		case 215:
			return 76;
	
		case 216:
			return 77;
	
		case 217:
			return 78;
	
		case 218:
			return 79;
	
		case 219:
			return 80;
	
		case 220:
			return 81;
	
		case 221:
			return 82;
	
		case 179:
			return 84;
	
		case 189:
			return 83;
	
		case 180:
			return 85;
	
		case 182:
			return 87;
	
		case 183:
			return 88;
	
		case 185:
			return 89;
	
		case 186:
			return 90;
	
		case 190:
			return 91;
	
		case 191:
			return 92;
	
		case 192:
			return 93;
	
		case 193:
			return 94;
	
		case 205:
			return 102;
	
		case 194:
			return 95;
	
		case 197:
			return 96;
	
		case 198:
			return 97;
	
		case 195:
			return 98;
	
		case 199:
			return 99;
	
		case 200:
			return 100;
	
		case 201:
			return 101;
	
		case 207:
			return 103;
	
		case 208:
			return 104;
	
		case 209:
			return 105;
	
		case 210:
			return 106;
	
		case 225:
			return 107;
	
		case 226:
			return 108;
	
		case 227:
			return 109;
	
		case 229:
			return 110;
	
		case 230:
			return 111;
	
		case 233:
			return 113;
	
		case 237:
			return 115;
	
		case 238:
			return 116;
	
		case 249:
			return 123;
	
		case 239:
			return 117;
	
		case 240:
			return 118;
	
		case 241:
			return 119;
	
		case 242:
			return 120;
	
		case 244:
			return 121;
	
		case 248:
			return 122;
	
		case 250:
			return 124;
	
		case 243:
			return 125;
	
		case 158:
			return 126;
	
		case 181:
			return 86;
	
		case 150:
			return 127;
	
		case 24:
			return 128;
	
		case 26:
			return 129;
	
		case 256:
			return 130;
	
		case 258:
			return 131;
	
		case 259:
			return 133;
	
		case 271:
			return 134;
	
		case 273:
			return 135;
	
		case 276:
			return 136;
	
		case 277:
			return 137;
	
		case 262:
			return 138;
	
		case 263:
			return 139;
	
		case 264:
			return 140;
	
		case 268:
			return 141;
	
		case 269:
			return 143;
	
		case 270:
			return 144;
	
		case 275:
			return 145;
	
		case 280:
			return 146;
	
		case 281:
			return 147;
	
		case 282:
			return 148;
	
		case 286:
			return 149;
	
		case 267:
			return 151;
	
		case 266:
			return 150;
	
		case 287:
			return 152;
	
		case 289:
			return 153;
	
		case 147:
			return 154;
	
		case 291:
			return 155;
	
		case 292:
			return 156;
	
		case 293:
			return 157;
	
		case 294:
			return 158;
	
		case 295:
			return 159;
	
		case 296:
			return 160;
	
		case 297:
			return 161;
	
		case 298:
			return 162;
	
		case 299:
			return 163;
	
		case 300:
			return 164;
	
		case 301:
			return 165;
	
		case 288:
			return 166;
	
		case 290:
			return 167;
	
		case 304:
			return 168;
	
		case 305:
			return 169;
	
		case 306:
			return 170;
	
		case 307:
			return 171;
	
		case 308:
			return 172;
	
		case 309:
			return 173;
	
		case 310:
			return 174;
	
		case 311:
			return 175;
	
		case 312:
			return 176;
	
		case 313:
			return 177;
	
		case 314:
			return 178;
	
		case 315:
			return 179;
	
		case 316:
			return 180;
	
		case 317:
			return 181;
	
		case 318:
			return 182;
	
		case 320:
			return 183;
	
		case 322:
			return 184;
	
		case 323:
			return 185;
	
		case 324:
			return 186;
	
		case 325:
			return 187;
	
		case 326:
			return 188;
	
		case 327:
			return 189;
	
		case 328:
			return 190;
	
		case 329:
			return 191;
	
		case 330:
			return 192;
	
		case 331:
			return 193;
	
		case 332:
			return 194;
	
		case 333:
			return 195;
	
		case 337:
			return 196;
	
		case 338:
			return 197;
	
		case 339:
			return 198;
	
		case 340:
			return 199;
	
		case 343:
			return 200;
	
		case 344:
			return 201;
	
		case 345:
			return 202;
	
		case 346:
			return 203;
	
		case 347:
			return 204;
	
		case 348:
			return 205;
	
		case 349:
			return 206;
	
		case 350:
			return 207;
	
		case 351:
			return 208;
	
		case 353:
			return 210;
	
		case 354:
			return 211;
	
		case 355:
			return 212;
	
		case 356:
			return 213;
	
		case 357:
			return 214;
	
		case 358:
			return 215;
	
		case 359:
			return 216;
	
		case 360:
			return 217;
	
		case 361:
			return 218;
	
		case 362:
			return 219;
	
		case 363:
			return 220;
	
		case 364:
			return 221;
	
		case 365:
			return 222;
	
		case 366:
			return 223;
	
		case 367:
			return 224;
	
		case 368:
			return 225;
	
		default:
		
	}

	return 0;
}

bool func_37(var uParam0, var uParam1, var uParam2) // Position - 0x1FB7
{
	int iVar0;
	var uVar1;
	var uVar3;
	var uVar7;

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
		return false;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(uParam0);

	if (!(iVar0 > 12))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&uVar1, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(uParam0, 0, 5), 8);

	if (!MISC::ARE_STRINGS_EQUAL(&uVar1, "FAKE_"))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&uVar3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(uParam0, 5, 12), 16);

	if (MISC::ARE_STRINGS_EQUAL(&uVar3, "GOLF___"))
		*uParam1 = 11;
	else if (MISC::ARE_STRINGS_EQUAL(&uVar3, "TENNIS_"))
		*uParam1 = 12;
	else if (MISC::ARE_STRINGS_EQUAL(&uVar3, "PILOTS_"))
		*uParam1 = 122;
	else if (MISC::ARE_STRINGS_EQUAL(&uVar3, "SHOOTR_"))
		*uParam1 = 13;
	else if (MISC::ARE_STRINGS_EQUAL(&uVar3, "DARTS__"))
		*uParam1 = 14;
	else if (MISC::ARE_STRINGS_EQUAL(&uVar3, "ARMWRS_"))
		*uParam1 = 15;
	else
		return false;

	TEXT_LABEL_ASSIGN_STRING(&uVar7, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(uParam0, 12, iVar0), 8);

	if (!MISC::STRING_TO_INT(&uVar7, uParam2))
		return false;

	return true;
}

void func_38(var uParam0) // Position - 0x20A6
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_39(int iParam0) // Position - 0x20C9
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 >= Global_1689057)
		return;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 <= 11; iVar0 = iVar0 + 1)
	{
		if (MISC::GET_GAME_TIMER() > Global_2625757[iVar0 /*4*/].f_2 || Global_2625757[iVar0 /*4*/].f_2 == 0)
		{
			if (NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES() > 0 && Global_2623479[iParam0 /*99*/].f_91 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
			{
				Global_2625757[iVar0 /*4*/].f_3 = NETWORK::NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Global_2623479[iParam0 /*99*/].f_91);
				Global_2625757[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
				iVar0 = 12;
			}
		}
	}

	if (Global_2623479[iParam0 /*99*/].f_92 != -1)
		HUD::THEFEED_REMOVE_ITEM(Global_2623479[iParam0 /*99*/].f_92);

	if (!Global_2623479[iParam0 /*99*/].f_56)
		if (Global_2623479[iParam0 /*99*/].f_52 != 0)
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_2623479[iParam0 /*99*/].f_52);

	func_47(Global_2623479[iParam0 /*99*/].f_91);
	iVar1 = iParam0;

	for (iVar2 = iVar1 + 1; iVar2 < Global_1689057; iVar2 = iVar2 + 1)
	{
		Global_2623479[iVar1 /*99*/] = { Global_2623479[iVar2 /*99*/] };
		iVar1 = iVar1 + 1;
	}

	func_41(iVar1);
	Global_1689057 = Global_1689057 - 1;

	if (Global_1689030)
		if (Global_1689028 > 0)
			func_40();
}

void func_40() // Position - 0x2211
{
	Global_1689030 = false;
}

void func_41(int iParam0) // Position - 0x221E
{
	Global_2623479[iParam0 /*99*/] = false;
	Global_2623479[iParam0 /*99*/].f_1 = 0;
	Global_2623479[iParam0 /*99*/].f_5 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623479[iParam0 /*99*/].f_15), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623479[iParam0 /*99*/].f_31), "", 64);
	Global_2623479[iParam0 /*99*/].f_47 = -1;
	Global_2623479[iParam0 /*99*/].f_48 = MISC::GET_GAME_TIMER();
	Global_2623479[iParam0 /*99*/].f_49 = -1;
	Global_2623479[iParam0 /*99*/].f_50 = -1;
	Global_2623479[iParam0 /*99*/].f_51 = -1;
	Global_2623479[iParam0 /*99*/].f_52 = 0;
	Global_2623479[iParam0 /*99*/].f_53 = 0;
	Global_2623479[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2623479[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2623479[iParam0 /*99*/].f_56 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623479[iParam0 /*99*/].f_57), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623479[iParam0 /*99*/].f_73), "", 64);
	Global_2623479[iParam0 /*99*/].f_89 = 0;
	Global_2623479[iParam0 /*99*/].f_90 = 0;
	Global_2623479[iParam0 /*99*/].f_91 = -1;
	Global_2623479[iParam0 /*99*/].f_92 = -1;
	Global_2623479[iParam0 /*99*/].f_93 = 0;
	Global_2623479[iParam0 /*99*/].f_94 = -1;
	Global_2623479[iParam0 /*99*/].f_95 = 0;
	Global_2623479[iParam0 /*99*/].f_96 = 0;
	Global_2623479[iParam0 /*99*/].f_97 = 0;
	Global_2623479[iParam0 /*99*/].f_98 = 0;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x2360
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < Global_1689057; iVar0 = iVar0 + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2623479[iVar0 /*99*/].f_15)))
			return iVar0;
	}

	return -1;
}

bool func_43(int iParam0) // Position - 0x2399
{
	return IS_BIT_SET(Global_1845299[iParam0 /*883*/].f_140, 22);
}

bool func_44(bool bParam0) // Position - 0x23AF
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

bool func_45() // Position - 0x23D7
{
	if (Global_114931.f_9092.f_330[0 /*6*/])
		return true;

	return false;
}

bool func_46() // Position - 0x23F4
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_140, 2);
}

void func_47(var uParam0) // Position - 0x240B
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(uParam0);

	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
		return;

	if (NETWORK::NETWORK_REMOVE_PRESENCE_INVITE(iVar0))
		return;
}

bool func_48() // Position - 0x243E
{
	return Global_1575045 == 10;
}

bool func_49() // Position - 0x244D
{
	if (!Global_80305)
		return true;
	else if (func_50())
		return true;

	return false;
}

bool func_50() // Position - 0x2470
{
	if (!func_63())
		return false;

	if (func_51(false))
		return false;

	return true;
}

bool func_51(bool bParam0) // Position - 0x2491
{
	if (bParam0)
		return func_54();

	return func_52(func_53());
}

bool func_52(int iParam0) // Position - 0x24AD
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_53() // Position - 0x24C2
{
	return Global_1912540[PLAYER::PLAYER_ID() /*319*/].f_279;
}

bool func_54() // Position - 0x24D8
{
	return func_61(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_60() != 0 && !func_55(0);
}

bool func_55(int iParam0) // Position - 0x2508
{
	int iVar0;

	iVar0 = func_56(16738, -1);
	return IS_BIT_SET(iVar0, iParam0);
}

int func_56(int iParam0, int iParam1) // Position - 0x251F
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_57(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

var func_57(int iParam0, int iParam1) // Position - 0x254E
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_58(iParam1));
}

int func_58(int iParam0) // Position - 0x2563
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_59();
	
		if (iVar1 > -1)
		{
			Global_2741524 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741524 = 1;
		}
	}

	return iVar0;
}

int func_59() // Position - 0x2597
{
	return Global_1574927;
}

int func_60() // Position - 0x25A3
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

bool func_61(int iParam0, int iParam1) // Position - 0x25AF
{
	var uVar0;
	int iVar1;

	uVar0 = func_62(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(uVar0, &iVar1, -1))
		return iVar1;

	return 0;
}

var func_62(int iParam0, int iParam1) // Position - 0x25D3
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_58(iParam1));
}

bool func_63() // Position - 0x25E8
{
	if (Global_1574612)
		return true;

	if (func_65())
		return true;

	if (func_64())
		return true;

	return func_61(120, -1);
}

bool func_64() // Position - 0x2618
{
	return Global_1575080;
}

bool func_65() // Position - 0x2624
{
	return Global_1575082;
}

void func_66(int iParam0, int iParam1) // Position - 0x2630
{
	int iVar0;

	iVar0 = iParam1;

	if (iVar0 == -1)
		iVar0 = func_59();

	Global_1575072[iVar0] = iParam0;
}

void func_67(int iParam0) // Position - 0x2652
{
	func_128();

	if (func_127(1))
	{
		if (!func_117())
		{
			if (!func_105(1))
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					func_104();
			
				func_70(1, false);
				NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iParam0);
				func_69();
				func_68();
			}
		}
	}
}

void func_68() // Position - 0x2697
{
	Global_1935678.f_7 = 1;
}

void func_69() // Position - 0x26A6
{
	Global_1935678.f_6 = 1;
}

void func_70(int iParam0, bool bParam1) // Position - 0x26B5
{
	if (func_127(iParam0))
	{
		Global_1935678.f_16[iParam0 /*44*/].f_5 = 1;
		func_72(iParam0, false);
		func_71();
	
		if (bParam1)
			Global_1935678 = 1;
	}
}

void func_71() // Position - 0x26E8
{
	Global_1935678.f_2 = 1;
}

void func_72(int iParam0, bool bParam1) // Position - 0x26F7
{
	var uVar0;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam1)
		{
			func_103();
			func_84(PLAYER::PLAYER_ID(), false, 81920, 0);
			Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_96 = 8;
			func_83();
			func_82();
		}
	
		func_81(iParam0);
		func_80(iParam0);
		func_78();
		func_77();
		func_71();
	}

	uVar0 = { func_76(iParam0) };
	func_75(iParam0);
	func_73(&uVar0);
}

void func_73(char* sParam0) // Position - 0x2763
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_2685153.f_865), sParam0, 24);

	if (func_74())
		TEXT_LABEL_ASSIGN_STRING(&(Global_1048576.f_44), sParam0, 24);
}

bool func_74() // Position - 0x2787
{
	return IS_BIT_SET(Global_2686095.f_1.f_2809, 5);
}

void func_75(int iParam0) // Position - 0x279A
{
	Global_1935678.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_76(int iParam0) // Position - 0x27AF
{
	return Global_1935678.f_16[iParam0 /*44*/].f_6;
}

void func_77() // Position - 0x27C5
{
	Global_2685153.f_9 = 100;
}

void func_78() // Position - 0x27D5
{
	MISC::SET_BIT(&Global_2685153, 5);
	func_79();
}

void func_79() // Position - 0x27EA
{
	MISC::SET_BIT(&Global_2685153, 8);
}

void func_80(int iParam0) // Position - 0x27FC
{
	Global_1935678.f_8 = iParam0;
}

void func_81(int iParam0) // Position - 0x280C
{
	Global_1935678.f_9 = iParam0;
}

void func_82() // Position - 0x281C
{
	Global_2694245.f_1 = 0;
}

void func_83() // Position - 0x282B
{
	char* sVar0;

	TEXT_LABEL_ASSIGN_STRING(&(Global_2685153.f_865), sVar0, 24);
}

void func_84(int iParam0, bool bParam1, int iParam2, int iParam3) // Position - 0x283E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(0);

	if (func_102())
		if (bParam1)
			return;
		else
			iParam3 = 1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != 0;
		bVar3 = iParam2 & 4 != 0;
		bVar4 = iParam2 & 8 != 0;
		bVar5 = iParam2 & 16 != 0;
		bVar6 = iParam2 & 32 != 0;
		bVar7 = iParam2 & 64 != 0;
		bVar8 = iParam2 & 128 != 0;
		bVar9 = iParam2 & 256 != 0;
		bVar10 = iParam2 & 512 != 0;
		bVar11 = iParam2 & 1024 != 0;
		bVar12 = iParam2 & 2048 != 0;
		bVar13 = iParam2 & 4096 != 0;
		bVar14 = iParam2 & 8192 != 0;
		bVar15 = iParam2 & 16384 != 0;
		bVar16 = iParam2 & 32768 != 0;
		bVar17 = iParam2 & 65536 != 0;
		bVar18 = iParam2 & 131072 != 0;
		bVar19 = iParam2 & 262144 != 0;
		bVar20 = iParam2 & 524288 != 0;
		bVar21 = iParam2 & 1048576 != 0;
		bVar22 = iParam2 & 2097152 != 0;
		bVar23 = iParam2 & 4194304 != 0;
		bVar24 = iParam2 & 8388608 != 0;
		bVar25 = iParam2 & 16777216 != 0;
	
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			bVar1 = false;
	
		if (!func_100())
		{
			bVar26 = false;
		
			if (bParam1 == true)
				bVar26 = true;
		
			if (bVar16 == false && !bVar21)
				bVar26 = true;
		
			if (bVar10 == true)
				bVar26 = true;
		
			if (bVar26)
				return;
		}
	
		bVar18;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1)
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
				return;
		
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
		
			if (!bVar20)
			{
				if (bVar19 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				else if (bVar14 || !func_97(PLAYER::PLAYER_ID(), 0) && !func_96() && !func_95(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
			
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
				
					Global_2658294[iParam0 /*468*/].f_258 = 0;
				}
			}
		
			if (bParam1)
			{
				if (bVar1)
				{
					func_92(0, 0, 0);
				
					if (bVar25)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_91(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
					if (!bVar22)
						ENTITY::SET_ENTITY_COLLISION(uVar27, 1, 0);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, 0);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, 0);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, 1);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uVar27))
					PED::FINALIZE_HEAD_BLEND(uVar27);
			
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_90();
					func_89();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!bVar23;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2658294[iParam0 /*468*/].f_259 = 0;
			
				if (!bVar24)
					bVar3 = true;
			
				if (Global_2698364)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
					Global_2698364 = false;
				}
			
				if (Global_2635562.f_2982)
					Global_2635562.f_2982 = 0;
			}
			else
			{
				if (!func_91(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
					
						if (!bVar16)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
					}
				
					if (func_88(*Global_4718592.f_199277))
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, 1);
				}
			
				if (func_85(true))
					bVar10 = false;
			
				if (bVar10)
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
			
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
			
				if (bVar3)
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
			}
		
			iVar28 = 0;
		
			if (bVar2)
				iVar28 = iVar28 | 2;
		
			if (bVar3)
				iVar28 = iVar28 | 4;
		
			if (bVar4)
				iVar28 = iVar28 | 8;
		
			if (bVar5)
				iVar28 = iVar28 | 16;
		
			if (bVar6)
				iVar28 = iVar28 | 32;
		
			if (bVar7)
				iVar28 = iVar28 | 64;
		
			if (bVar8)
				iVar28 = iVar28 | 128;
		
			if (bVar9)
				iVar28 = iVar28 | 256;
		
			if (bVar10)
				iVar28 = iVar28 | 512;
		
			if (bVar11)
				iVar28 = iVar28 | 1024;
		
			if (bVar12)
				iVar28 = iVar28 | 2048;
		
			if (bVar13)
				iVar28 = iVar28 | 4096;
		
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_85(bool bParam0) // Position - 0x2CF3
{
	if (bParam0 && Global_1575064)
		if (func_86())
			return false;
		else
			return true;

	return Global_1575064;
}

bool func_86() // Position - 0x2D1F
{
	if (func_87())
		return true;

	return Global_1575067;
}

bool func_87() // Position - 0x2D3A
{
	if (Global_1575064 || Global_1575070)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_DEATHMATCH_CONTROLER")) != 0)
			return true;

	return false;
}

bool func_88(int iParam0) // Position - 0x2D65
{
	return iParam0 == 17;
}

void func_89() // Position - 0x2D72
{
	var uVar0;

	Global_2673274.f_1101 = 0;
	Global_2673274.f_1102 = 0;
	Global_2673274.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673274.f_1108 = -1;
	Global_2673274.f_1109 = 0;
	Global_2635562.f_2993 = { uVar0 };
}

void func_90() // Position - 0x2DBF
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3036 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2991 = 0;
}

bool func_91(var uParam0) // Position - 0x2DFD
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (iVar0 == 0)
			return true;
	}

	return false;
}

void func_92(int iParam0, int iParam1, int iParam2) // Position - 0x2E2E
{
	int iVar0;
	int iVar1;

	ENTITY::IS_ENTITY_DEAD(iParam1, 0);

	if (iParam0 == 1)
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			if (PED::IS_PED_A_PLAYER(iParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
					iVar0 = 1;

	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_94();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_97(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_93(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}
}

void func_93(int iParam0, int iParam1) // Position - 0x2EFE
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 != 0)
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}

void func_94() // Position - 0x2F1A
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (iVar0 = 0; iVar0 < 8; iVar0 = iVar0 + 1)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_95(int iParam0) // Position - 0x2F72
{
	if (func_97(iParam0, 0))
		return true;

	if (func_96())
		if (iParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

bool func_96() // Position - 0x2FB1
{
	return IS_BIT_SET(Global_2621446, 3);
}

bool func_97(int iParam0, int iParam1) // Position - 0x2FBF
{
	bool bVar0;

	if (!func_99(iParam0))
		return false;

	if (iParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_98(-1, false) == 8;
	else
		bVar0 = Global_1845299[iParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;

	return bVar0;
}

int func_98(int iParam0, bool bParam1) // Position - 0x3018
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;

	if (iVar1 == -1)
		iVar1 = func_59();

	if (Global_1575072[iVar1] == 1)
	{
		bParam1;
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574921[iVar1];
		bParam1;
	}

	return iVar0;
}

bool func_99(int iParam0) // Position - 0x3059
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_100() // Position - 0x307B
{
	if (func_101() == 0)
		return true;

	return false;
}

int func_101() // Position - 0x3090
{
	return Global_1574634.f_18;
}

bool func_102() // Position - 0x309E
{
	if (IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_882, 2) && !(Global_2686095.f_2847.f_220 == -1))
		return true;

	return false;
}

void func_103() // Position - 0x30CF
{
	MISC::SET_BIT(&Global_2685153, 7);
}

void func_104() // Position - 0x30E0
{
	MISC::SET_BIT(&(Global_2685153.f_2), 15);
}

bool func_105(int iParam0) // Position - 0x30F4
{
	if (iParam0 || func_116())
	{
		if (!func_107(true))
			return true;
	
		if (!func_106())
			return true;
	
		if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
			return true;
	}

	return false;
}

bool func_106() // Position - 0x3130
{
	return Global_1935678.f_4;
}

bool func_107(bool bParam0) // Position - 0x313E
{
	if (!func_113())
		return false;

	if (func_110(func_112(-1), 0) >= 1 || func_61(123, -1) && func_61(133, -1))
	{
		func_109();
		return true;
	}
	else if (bParam0)
	{
		func_108();
	}

	return false;
}

void func_108() // Position - 0x318F
{
	Global_1935678.f_5 = 1;
}

void func_109() // Position - 0x319E
{
	Global_1935678.f_4 = 1;
}

int func_110(int iParam0, int iParam1) // Position - 0x31AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iParam1 == 0;
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = (iVar1 - iVar2) / 2;

	for (iVar0 = 0; iVar0 <= 100; iVar0 = iVar0 + 1)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
		
			if (iVar3 == 0)
				iVar3 = 1;
		
			return iVar3;
		}
	
		if (func_111(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_111(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
				iVar2 = iVar2 + 1;
			else
				iVar2 = iVar3;
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = iVar1 - 1;
		}
		else
		{
			iVar1 = iVar3;
		}
	
		fVar4 = ((BUILTIN::TO_FLOAT(iVar1) - BUILTIN::TO_FLOAT(iVar2)) / 2f) + BUILTIN::TO_FLOAT(iVar2);
		iVar3 = BUILTIN::ROUND(fVar4);
	}

	return 8000;
}

int func_111(int iParam0) // Position - 0x3268
{
	int iVar0;
	int iVar1;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				return 0;
		
			case 2:
				return 800;
		
			case 3:
				return 2100;
		
			case 4:
				return 3800;
		
			case 5:
				return &func_36;
		
			case 6:
				return 9500;
		
			case 7:
				return 12500;
		
			case 8:
				return 16000;
		
			case 9:
				return 19800;
		
			case 10:
				return 24000;
		
			case 11:
				return 28500;
		
			case 12:
				return 33400;
		
			case 13:
				return 38700;
		
			case 14:
				return 44200;
		
			case 15:
				return 50200;
		
			case 16:
				return 56400;
		
			case 17:
				return 63000;
		
			case 18:
				return 69900;
		
			case 19:
				return 77100;
		
			case 20:
				return 84700;
		
			case 21:
				return 92500;
		
			case 22:
				return 100700;
		
			case 23:
				return 109200;
		
			case 24:
				return 118000;
		
			case 25:
				return 127100;
		
			case 26:
				return 136500;
		
			case 27:
				return 146200;
		
			case 28:
				return 156200;
		
			case 29:
				return 166500;
		
			case 30:
				return 177100;
		
			case 31:
				return 188000;
		
			case 32:
				return 199200;
		
			case 33:
				return 210700;
		
			case 34:
				return 222400;
		
			case 35:
				return 234500;
		
			case 36:
				return 246800;
		
			case 37:
				return 259400;
		
			case 38:
				return 272300;
		
			case 39:
				return 285500;
		
			case 40:
				return 299000;
		
			case 41:
				return 312700;
		
			case 42:
				return 326800;
		
			case 43:
				return 341000;
		
			case 44:
				return 355600;
		
			case 45:
				return 370500;
		
			case 46:
				return 385600;
		
			case 47:
				return 401000;
		
			case 48:
				return 416600;
		
			case 49:
				return 432600;
		
			case 50:
				return 448800;
		
			case 51:
				return 465200;
		
			case 52:
				return 482000;
		
			case 53:
				return 499000;
		
			case 54:
				return 516300;
		
			case 55:
				return 533800;
		
			case 56:
				return 551600;
		
			case 57:
				return 569600;
		
			case 58:
				return 588000;
		
			case 59:
				return 606500;
		
			case 60:
				return 625400;
		
			case 61:
				return 644500;
		
			case 62:
				return joaat("PYRO_SUB_BASS_SYNTH");
		
			case 63:
				return 683400;
		
			case 64:
				return 703300;
		
			case 65:
				return 723400;
		
			case 66:
				return 743800;
		
			case 67:
				return 764500;
		
			case 68:
				return 785400;
		
			case 69:
				return 806500;
		
			case 70:
				return 827900;
		
			case 71:
				return 849600;
		
			case 72:
				return 871500;
		
			case 73:
				return 893600;
		
			case 74:
				return 916000;
		
			case 75:
				return 938700;
		
			case 76:
				return 961600;
		
			case 77:
				return 984700;
		
			case 78:
				return 1008100;
		
			case 79:
				return 1031800;
		
			case 80:
				return 1055700;
		
			case 81:
				return 1079800;
		
			case 82:
				return 1104200;
		
			case 83:
				return 1128800;
		
			case 84:
				return 1153700;
		
			case 85:
				return 1178800;
		
			case 86:
				return 1204200;
		
			case 87:
				return 1229800;
		
			case 88:
				return 1255600;
		
			case 89:
				return 1281700;
		
			case 90:
				return 1308100;
		
			case 91:
				return 1334600;
		
			case 92:
				return 1361400;
		
			case 93:
				return 1388500;
		
			case 94:
				return 1415800;
		
			case 95:
				return 1443300;
		
			case 96:
				return 1471100;
		
			case 97:
				return 1499100;
		
			case 98:
				return 1527300;
		
			case 99:
				return 1555800;
		}
	}
	else
	{
		iVar0 = iParam0 - 99;
		iVar1 = (iVar0 * (iVar0 + 1)) / 2;
		return 1555800 + (iVar0 * 28500) + (iVar1 * 50);
	}

	return 1555800;
}

int func_112(int iParam0) // Position - 0x37AC
{
	return func_56(640, iParam0);
}

bool func_113() // Position - 0x37BD
{
	if (func_115() && func_114(0))
		return true;

	return false;
}

bool func_114(int iParam0) // Position - 0x37DB
{
	return Global_1574538[iParam0];
}

bool func_115() // Position - 0x37EB
{
	return func_114(func_59() + 1);
}

int func_116() // Position - 0x37FD
{
	return Global_1935678.f_2;
}

bool func_117() // Position - 0x380B
{
	if (func_126() || !func_124(-1) || !func_122() || !func_119() || func_118())
		return true;

	return false;
}

bool func_118() // Position - 0x384B
{
	return Global_2696995;
}

bool func_119() // Position - 0x3857
{
	int iVar0;

	if (func_120(&iVar0) == 0)
		if (iVar0 == 1)
			return false;

	return true;
}

int func_120(var uParam0) // Position - 0x3874
{
	if (func_121())
	{
		*uParam0 = 11;
		return 1;
	}

	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(uParam0);
}

bool func_121() // Position - 0x3892
{
	return Global_34070;
}

bool func_122() // Position - 0x389D
{
	int iVar0;

	for (iVar0 = 0; iVar0 <= 1; iVar0 = iVar0 + 1)
	{
		if (func_123(iVar0) == 1)
		{
			iVar0 = 2;
			return true;
		}
	}

	return false;
}

int func_123(int iParam0) // Position - 0x38C9
{
	if (func_61(76, iParam0) == true)
		return 1;

	return 0;
}

bool func_124(int iParam0) // Position - 0x38E5
{
	int iVar0;
	int iVar1;

	iVar0 = func_125(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);

	if (IS_BIT_SET(iVar1, 1))
		return true;

	return false;
}

int func_125(int iParam0) // Position - 0x3909
{
	int iVar0;

	if (iParam0 == -1)
		iParam0 = func_59();

	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
	
		case 1:
			iVar0 = 915;
			break;
	
		case 2:
			iVar0 = 916;
			break;
	
		case 3:
			iVar0 = 917;
			break;
	
		case 4:
			iVar0 = 918;
			break;
	}

	return iVar0;
}

bool func_126() // Position - 0x396C
{
	return Global_2685153.f_745;
}

bool func_127(int iParam0) // Position - 0x397B
{
	return Global_1935678.f_16[iParam0 /*44*/].f_4;
}

void func_128() // Position - 0x398F
{
	int iVar0;
	int iVar1;

	func_134();

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE() && !func_131())
	{
		for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
		{
			iVar1 = SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(func_130(iVar0));
		
			if (iVar1 > 0)
			{
				Global_1935678.f_16[iVar0 /*44*/] = iVar1;
				func_129(iVar0, iVar1);
			}
		}
	}
	else
	{
		for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
		{
			Global_1935678.f_16[iVar0 /*44*/].f_4 = 0;
		}
	}
}

void func_129(int iParam0, int iParam1) // Position - 0x3A06
{
	bool bVar0;
	var uVar1;
	var uVar17;

	bVar0 = true;

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(iParam1, "contentId", &uVar1))
		TEXT_LABEL_COPY(&(Global_1935678.f_16[iParam0 /*44*/].f_6), { uVar1 }, 6);
	else
		bVar0 = false;

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(iParam1, "playlist", &uVar1))
		Global_1935678.f_16[iParam0 /*44*/].f_12 = { uVar1 };
	else
		bVar0 = false;

	if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(iParam1, &uVar1))
		Global_1935678.f_16[iParam0 /*44*/].f_28 = { uVar1 };
	else
		bVar0 = false;

	if (iParam0 == 1)
	{
		if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(iParam1, "coronaCountdown", &uVar17))
			Global_1935678.f_16[iParam0 /*44*/].f_1 = uVar17;
		else
			Global_1935678.f_16[iParam0 /*44*/].f_1 = 120000;
	
		Global_1935678.f_16[iParam0 /*44*/].f_2 = 0;
	
		if (SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(iParam1, "eventSubType", &uVar17))
			Global_1935678.f_16[iParam0 /*44*/].f_2 = uVar17;
	}

	if (bVar0)
	{
		if (iParam0 != 1)
			Global_1935678.f_1 = 1;
	
		Global_1935678.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1935678.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_130(int iParam0) // Position - 0x3B14
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
	
		case 1:
			return "Tournament";
	
		case 2:
			return "LiveStreaming";
	
		case 3:
			return "Sweepstakes";
	
		case 4:
			return "FeaturedPlaylist";
	
		default:
		
	}

	return "";
}

bool func_131() // Position - 0x3B61
{
	if (!func_132())
		return true;

	return false;
}

bool func_132() // Position - 0x3B76
{
	if (func_133())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
		return false;

	return true;
}

bool func_133() // Position - 0x3B96
{
	return Global_2697505;
}

void func_134() // Position - 0x3BA2
{
	var uVar0;

	uVar0.f_8 = -1;
	uVar0.f_9 = -1;
	uVar0.f_16 = 6;
	Global_1935678 = { uVar0 };
}

void func_135(int iParam0) // Position - 0x3BCD
{
	struct<21> Var0;

	if (Global_80305)
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	else
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21616, 1);

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
		func_137();

	Global_2739212.f_1 = 0;
	Global_2739212.f_33 = -1;
	Global_2739212.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2739212.f_4), "", 64);
	func_136(&(Global_2739212.f_20));
}

void func_136(var uParam0) // Position - 0x3C35
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_137() // Position - 0x3C7D
{
	Global_2739212.f_2 = 1;
	Global_2739212.f_38 = 1;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				BUILTIN::WAIT(0);
			}
		
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2739212 = 0;
			Global_2739212.f_2 = 0;
		}
		else if (func_145(Global_2739212.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2739212.f_20)))
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2739212.f_20)))
					func_144();
		}
		else
		{
			func_144();
		}
	}
	else
	{
		func_144();
	}

	if (Global_2739212.f_37)
		func_138(0);

	Global_2739212.f_37 = 0;
	Global_2739212.f_3 = 0;
}

void func_138(int iParam0) // Position - 0x3D1D
{
	if (func_143())
		return;

	if (Global_21859)
		if (func_142())
			func_140(true, true);
		else
			func_140(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_139())
		Global_21627.f_1 = 3;
}

bool func_139() // Position - 0x3DA7
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_140(bool bParam0, bool bParam1) // Position - 0x3DCE
{
	if (bParam0)
	{
		if (func_141(0))
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

bool func_141(int iParam0) // Position - 0x3E42
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

bool func_142() // Position - 0x3E99
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_143() // Position - 0x3EA7
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_144() // Position - 0x3EB6
{
	Global_2739212.f_1 = 0;
	Global_2739212 = 0;
	Global_2739212.f_2 = 0;
	Global_2739212.f_33 = -1;
	Global_2739212.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2739212.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2739212.f_39[0 /*16*/], "", 64);
	Global_2739212.f_38 = 0;
	Global_2739212.f_56 = 0;
	Global_2739212.f_57 = 0;
	Global_2739212.f_58 = -2;
	Global_2739212.f_3 = 0;
	func_136(&(Global_2739212.f_20));
}

bool func_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x3F25
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_146(int iParam0) // Position - 0x3F35
{
	struct<15> Var0;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 15))
	{
		Global_2739212.f_33 = Var0.f_1;
		Global_2739212.f_34 = Var0;
	}
}

void func_147(int iParam0) // Position - 0x3F60
{
	struct<21> Var0;

	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		if (Global_2739212.f_3 == 0)
		{
			if (!func_148(&(Var0.f_8)))
			{
				NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(0, 2);
			}
			else
			{
				Global_2739212.f_3 = 1;
				TEXT_LABEL_COPY(&(Global_2739212.f_4), { Var0 }, 16);
				Global_2739212.f_20 = { Var0.f_8 };
				TEXT_LABEL_ASSIGN_STRING(&Global_2739212.f_39[0 /*16*/], "", 64);
				Global_2739212.f_58 = -2;
				Global_2739212.f_56 = 0;
				Global_2739212.f_57 = 0;
			}
		}
		else if (!func_148(&(Var0.f_8)))
		{
			NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(0, 2);
		}
		else
		{
			Global_2739212.f_3 = 1;
			TEXT_LABEL_COPY(&(Global_2739212.f_4), { Var0 }, 16);
			Global_2739212.f_20 = { Var0.f_8 };
			TEXT_LABEL_ASSIGN_STRING(&Global_2739212.f_39[0 /*16*/], "", 64);
			Global_2739212.f_58 = -2;
			Global_2739212.f_56 = 0;
			Global_2739212.f_57 = 0;
		}
	}
}

bool func_148(var uParam0) // Position - 0x4045
{
	if (Global_80305)
	{
		if (func_50() == false)
			return false;
	
		if (func_152(PLAYER::PLAYER_ID(), true, true))
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
					return false;
	}

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
		return false;

	Global_2739212.f_1;

	if (Global_21867 == 1)
		return false;

	if (Global_1836778)
		return false;

	if (Global_2739212.f_36)
		return false;

	if (func_139())
		return false;

	if (Global_44886 != 6 && Global_44886 != 8 && Global_44886 != 12 && Global_44886 != 15)
		return false;

	if (func_151() && !func_150(12))
		return false;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		return false;

	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		return false;

	if (!func_149(PLAYER::PLAYER_ID()))
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (Global_80566)
		return false;

	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			return false;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return false;

	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
		return false;

	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
		return false;

	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
		if (func_16())
			if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
				return false;
		else if (func_10())
			return false;

	return true;
}

bool func_149(int iParam0) // Position - 0x41C9
{
	int iVar0;
	var uVar1;

	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
		return false;

	iVar0 = -1;

	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
	
		if (iVar0 == -1)
			return false;
	}

	if (MISC::IS_PS3_VERSION() || func_10())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;

	if (MISC::IS_XBOX360_VERSION() || func_16())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, 1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
				return true;
		}
		else
		{
			uVar1 = { func_8(iParam0) };
		
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&uVar1))
				return true;
		}
	}

	if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;

	return false;
}

bool func_150(int iParam0) // Position - 0x42A2
{
	return Global_44886 == iParam0;
}

bool func_151() // Position - 0x42B0
{
	if (Global_44886 == 15)
		return false;

	return true;
}

bool func_152(bool bParam0, bool bParam1, bool bParam2) // Position - 0x42C5
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
					return false;
		
			if (bParam2)
				if (bVar0 == Global_2673274.f_3)
					return Global_2673274.f_2;
				else if (Global_2658294[bVar0 /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_153() // Position - 0x4325
{
	func_144();
}

void func_154() // Position - 0x4331
{
	Global_2739212.f_1 = 1;
	Global_2739212.f_33 = -1;
	Global_2739212.f_34 = -1;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21608) == 1)
	{
		if (Global_21615)
		{
			func_155(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
		
			if (Global_21570)
				func_155(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_155(Global_21608, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_155(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x43AA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_156(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_156(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_156(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_156(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_156(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_156(char* sParam0) // Position - 0x445D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_157() // Position - 0x446F
{
	int iVar0;

	if (Static_63)
	{
		Global_57278 = 0;
		Global_57278.f_12 = 0;
		Global_57278.f_24 = 0;
		Global_57278.f_36 = 0;
	
		for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
		{
			Global_57278.f_1[iVar0] = 0;
			Global_57278.f_13[iVar0] = 0;
			Global_57278.f_25[iVar0] = 0;
			Global_57278.f_37[iVar0] = 0;
		}
	
		Static_63 = false;
	}
}

