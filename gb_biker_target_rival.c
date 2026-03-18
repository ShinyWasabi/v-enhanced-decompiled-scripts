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
	var Static_26 = 0;
	var Static_27 = 0;
	float Static_28 = 0f;
	float Static_29 = 0f;
	float Static_30 = 0f;
	var Static_31 = 0;
	var Static_32 = 0;
	int Static_33 = 0;
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
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;
	func_101();

	while (true)
	{
		func_100();
	
		if (func_95())
			func_94();
	
		if (Global_2733138.f_3989.f_758 == 0)
			func_94();
	
		switch (Static_33)
		{
			case 0:
				Static_33 = 1;
				break;
		
			case 1:
				if (func_12())
					Static_33 = 2;
				break;
		
			case 2:
				if (!func_1())
					Static_33 = 4;
				break;
		
			case 4:
				func_94();
				break;
		}
	}
}

bool func_1() // Position - 0xD3
{
	bool bVar0;

	if (func_7(true))
	{
		bVar0 = Global_2733138.f_3989.f_757;
	
		if (bVar0 != func_6())
		{
			if (func_4(bVar0))
			{
				func_2(bVar0);
				return false;
			}
		}
		else
		{
			func_2(bVar0);
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_2(bool bParam0) // Position - 0x120
{
	if (bParam0 != func_6())
		func_3(bParam0);

	Global_2733138.f_3989.f_757 = func_6();
}

void func_3(int iParam0) // Position - 0x145
{
	int iVar0;

	iVar0 = iParam0;
	MISC::CLEAR_BIT(&(Global_2647285.f_388), iVar0);
	MISC::CLEAR_BIT(&(Global_2647285.f_389), iVar0);
	MISC::CLEAR_BIT(&(Global_2647285.f_390), iVar0);
	MISC::CLEAR_BIT(&(Global_2647285.f_392), iVar0);
	MISC::CLEAR_BIT(&(Global_2647285.f_396), iVar0);
	MISC::CLEAR_BIT(&(Global_2647285.f_391), iVar0);
}

bool func_4(bool bParam0) // Position - 0x19F
{
	if (!func_5(bParam0, false, true))
		return true;

	return false;
}

bool func_5(bool bParam0, bool bParam1, bool bParam2) // Position - 0x1B8
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

bool func_6() // Position - 0x218
{
	return -1;
}

bool func_7(bool bParam0) // Position - 0x221
{
	return func_8(PLAYER::PLAYER_ID(), bParam0);
}

bool func_8(int iParam0, bool bParam1) // Position - 0x233
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2) // Position - 0x244
{
	bool bVar0;

	if (!func_11(iParam0))
		return 0;

	if (!bParam1)
		if (func_10(iParam0, iParam2))
			return 0;

	bVar0 = Global_1892798[iParam0 /*615*/].f_10;

	if (func_11(bVar0) && Global_1892798[bVar0 /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

bool func_10(bool bParam0, int iParam1) // Position - 0x2A0
{
	if (func_11(bParam0))
		if (func_11(Global_1892798[bParam0 /*615*/].f_10))
			if (Global_1892798[bParam0 /*615*/].f_10 == bParam0 && Global_1892798[bParam0 /*615*/].f_10.f_433 == iParam1)
				return true;

	return false;
}

bool func_11(bool bParam0) // Position - 0x2EF
{
	int iVar0;

	iVar0 = bParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_12() // Position - 0x311
{
	bool bVar0;

	if (func_7(true))
	{
		bVar0 = Global_2733138.f_3989.f_757;
	
		if (bVar0 != func_6())
			if (func_13(bVar0))
				return true;
	}

	return false;
}

bool func_13(bool bParam0) // Position - 0x344
{
	if (func_5(bParam0, false, true))
	{
		func_92(bParam0, 432, true, false);
	
		if (func_91(bParam0))
			func_88(bParam0, func_89(func_90(PLAYER::PLAYER_ID())), true, false);
	
		if (func_86(bParam0))
			func_84(bParam0, true, true, false);
	
		func_78(bParam0, true, false);
		func_14(bParam0, true, 5000);
		return true;
	}

	return false;
}

void func_14(bool bParam0, bool bParam1, int iParam2) // Position - 0x3A8
{
	bool bVar0;

	if (bParam0 == func_6())
		return;

	if (iParam2 > 200000)
		iParam2 = 200000;

	bVar0 = bParam0;

	if (bParam1)
	{
		if (bParam0 == Global_2673274)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2647285[bVar0]))
		{
			MISC::SET_BIT(&(Global_2647285.f_370), bVar0);
			MISC::CLEAR_BIT(&(Global_2647285.f_375), bVar0);
			HUD::SET_BLIP_FLASHES(Global_2647285[bVar0], 1);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2647285[bVar0], 250);
			func_15(bParam0);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2647285.f_375), bVar0);
			else
				Global_2647285.f_201[bVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
		else
		{
			MISC::SET_BIT(&(Global_2647285.f_370), bVar0);
			MISC::CLEAR_BIT(&(Global_2647285.f_375), bVar0);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2647285.f_375), bVar0);
			else
				Global_2647285.f_201[bVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
	}

	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2647285.f_370), bVar0);
		MISC::CLEAR_BIT(&(Global_2647285.f_375), bVar0);
	
		if (HUD::DOES_BLIP_EXIST(Global_2647285[bVar0]))
		{
			func_15(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2647285[bVar0], 0);
		}
	}
}

void func_15(bool bParam0) // Position - 0x4DD
{
	bool bVar0;

	bVar0 = bParam0;

	if (func_5(bParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647285[bVar0]))
		{
			Global_2647285.f_1504[bVar0] = func_16(bParam0);
			HUD::SET_BLIP_PRIORITY(Global_2647285[bVar0], Global_2647285.f_1504[bVar0]);
		}
	}
}

int func_16(bool bParam0) // Position - 0x52B
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;

	if (func_5(bParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647285[bVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2647285[bVar0]);
		
			if (IS_BIT_SET(Global_2647285.f_386, bVar0) || IS_BIT_SET(Global_2647285.f_385, bVar0))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_2647285.f_371, bVar0) || IS_BIT_SET(Global_2647285.f_370, bVar0) || IS_BIT_SET(Global_2647285.f_388, bVar0))
			{
				return func_75(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_75(7);
				
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_75(11);
				
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2673274))
							return func_75(6);
						else
							return func_75(5);
						break;
				
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2673274))
							return func_75(6);
						else
							return func_75(5);
						break;
				
					case 163:
					case 164:
						if (func_74(Global_2673274, bParam0, -2, 0))
							return func_75(6);
						else
							return func_75(5);
						break;
				
					case 303:
					case 418:
						return func_75(10);
				
					case 364:
						if (func_21(Global_2673274, bParam0, true))
							return func_75(10);
						else
							return func_75(5);
						break;
				
					case 478:
					case 501:
					case 523:
					case 556:
						return func_75(10);
				
					case 417:
						if (func_20(bParam0) || func_19(bParam0) || func_17(bParam0))
							if (func_21(Global_2673274, bParam0, true))
								return 3;
							else
								return 4;
						else if (func_21(Global_2673274, bParam0, true))
							return func_75(6);
						else
							return func_75(5);
						break;
				
					case 256:
					case 268:
					default:
						if (func_21(Global_2673274, bParam0, true))
							return func_75(6);
						else
							return func_75(5);
						break;
				}
			}
		}
	}

	return 1;
}

bool func_17(bool bParam0) // Position - 0x796
{
	if (bParam0 != func_6())
		if (func_5(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_18(Global_2658294[bParam0 /*468*/].f_325.f_8) == 16;

	return false;
}

int func_18(bool bParam0) // Position - 0x7DD
{
	switch (bParam0)
	{
		case false:
		case true:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 180:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 181:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	
		case 174:
		case 175:
		case 176:
			return 34;
	
		case 177:
		case 178:
		case 179:
			return 35;
	}

	return -1;
}

bool func_19(bool bParam0) // Position - 0xD46
{
	if (bParam0 != func_6())
		if (func_5(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_18(Global_2658294[bParam0 /*468*/].f_325.f_8) == 15;

	return false;
}

bool func_20(bool bParam0) // Position - 0xD8D
{
	if (bParam0 != func_6())
		if (func_5(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_18(Global_2658294[bParam0 /*468*/].f_325.f_8) == 14;

	return false;
}

bool func_21(bool bParam0, bool bParam1, bool bParam2) // Position - 0xDD4
{
	if (func_24(bParam0, -2, false, false, false) == func_24(bParam1, -2, false, false, false))
		return true;

	if (bParam2)
		if (func_22(func_24(bParam0, -2, false, false, false)) && func_22(func_24(bParam1, -2, false, false, false)))
			return true;

	return false;
}

int func_22(bool bParam0) // Position - 0xE2D
{
	if (bParam0 == func_23(true) || bParam0 == func_23(false))
		return 1;

	return 0;
}

bool func_23(bool bParam0) // Position - 0xE53
{
	if (bParam0)
		return 118;

	return 116;
}

bool func_24(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) // Position - 0xE6A
{
	int iVar0;
	int iVar1;

	if (!func_11(bParam0))
		return true;

	if (func_72(bParam0) && !bParam4)
		if (bParam2)
			return false;
		else
			return true;

	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	
		if (iVar0 > -1 && iVar0 < 4)
			if (Global_4718592.f_133253[iVar0] != -1)
				iParam1 = iVar0;
	}

	if (func_72(PLAYER::PLAYER_ID()) || func_71() && func_70() && !IS_BIT_SET(Global_2733138.f_3789, 31) && !bParam4)
	{
		iVar1 = func_69();
	
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			if (PED::IS_PED_A_PLAYER(iVar1))
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
					if (func_5(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), false, true))
						if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
							if (Global_4718592.f_133253[iParam1] != -1)
								return func_67(iParam1, bParam0, false);
							else
								return func_43(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						else
							return func_43(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
				if (Global_4718592.f_133253[iParam1] != -1)
					return func_67(iParam1, bParam0, false);
				else
					return func_25(false, -1, false);
			else
				return func_25(false, -1, false);
	}

	if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
		if (Global_4718592.f_133253[iParam1] != -1)
			return func_67(iParam1, bParam0, false);
		else
			return func_43(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);

	return func_43(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

bool func_25(bool bParam0, int iParam1, bool bParam2) // Position - 0x1055
{
	return func_26(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

bool func_26(bool bParam0, bool bParam1, int iParam2, bool bParam3) // Position - 0x106B
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		return 3;

	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);

	if (func_42(*Global_4718592.f_199277))
		iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	if (func_41() || func_40() && func_38() && Global_1689116.f_1)
		if (bParam1)
			return func_37(iParam2, iVar0);
		else
			return func_37(iVar0, iVar0);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_31(iVar0, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_16, 18))
				if (iVar0 == iParam2)
					return func_23(true);
				else
					return func_23(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_27(iVar0, iParam2, true, 4);
			else
				return func_27(iVar0, iParam2, false, 4);
	
		return 28;
	}

	if (iVar0 == iParam2 || iParam2 == -1)
		return func_23(true);

	return func_23(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_27(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x1188
{
	int iVar0;

	iVar0 = func_30(iParam0, iParam1, iParam3);

	if (func_28(*Global_4718592.f_139000, true, true))
		if (iVar0 == 1)
			iVar0 = 0;

	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x114;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

bool func_28(int iParam0, bool bParam1, bool bParam2) // Position - 0x12A1
{
	int iVar0;

	if (bParam1)
		if (*Global_4718592.f_199277 == 65)
			return true;

	if (bParam2)
		if (func_29(*Global_4718592.f_199277, false))
			return true;

	if (iParam0 == 0)
		return false;

	for (iVar0 = 0; iVar0 <= 6; iVar0 = iVar0 + 1)
	{
		if (iParam0 == Global_262145.f_9609[iVar0])
			return true;
	}

	return false;
}

bool func_29(int iParam0, bool bParam1) // Position - 0x130D
{
	if (iParam0 == 93)
		if (bParam1)
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
				return true;
		else
			return true;

	return false;
}

int func_30(int iParam0, int iParam1, int iParam2) // Position - 0x1339
{
	int iVar0;
	int iVar1;

	for (iVar0 = 0; iVar0 < iParam2; iVar0 = iVar0 + 1)
	{
		if (iVar0 == iParam1)
			return iVar1;
		else if (!(iParam0 == iVar0))
			if (!func_31(iParam0, iVar0, 0, -1))
				iVar1 = iVar1 + 1;
	}

	return -1;
}

bool func_31(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1381
{
	int iVar0;
	int iVar1;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		iVar0 = Global_1058124.f_14[iParam0];
	
		if (iParam3 != -1)
			iVar0 = iParam3;
	
		if (iVar0 < 17 && iVar0 > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26968*/].f_26699, iVar0))
			{
				iVar1 = Global_1058124.f_14[iParam1];
			
				if (iVar1 < 17 && iVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_32(iParam0, iVar0, iParam1, iVar1) || !func_32(iParam1, iVar1, iParam0, iVar0))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[iVar0], 0 + iParam1);
							break;
					
						case 1:
							if (!func_32(iParam0, iVar0, iParam1, iVar1) || !func_32(iParam1, iVar1, iParam0, iVar0))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[iVar0], 4 + iParam1);
							break;
					
						case 2:
							if (!func_32(iParam0, iVar0, iParam1, iVar1) || !func_32(iParam1, iVar1, iParam0, iVar0))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[iVar0], 8 + iParam1);
							break;
					
						case 3:
							if (!func_32(iParam0, iVar0, iParam1, iVar1) || !func_32(iParam1, iVar1, iParam0, iVar0))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[iVar0], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3554, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3554, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3554, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3554, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

bool func_32(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16CC
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26968*/].f_26700, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_3605[iParam2 /*26968*/].f_26700, iParam3))
		return false;

	bVar0 = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	bVar5 = 0;

	for (bVar5 = 0; bVar5 <= 31; bVar5 = bVar5 + 1)
	{
		bVar1 = bVar5;
	
		if (!func_5(bVar1, true, true) || func_34(bVar1, 0) || IS_BIT_SET(Global_2658294[bVar1 /*468*/].f_203, 2) || func_33(bVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = PLAYER::GET_PLAYER_PED(bVar1);
		
			if (PED::IS_PED_INJURED(uVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(uVar2);
			
				if (iVar4 == joaat("MP_F_FREEMODE_01") || iVar4 == joaat("MP_M_FREEMODE_01"))
					if (iVar3 == joaat("MP_F_FREEMODE_01") || iVar3 == joaat("MP_M_FREEMODE_01"))
						return true;
					else
						return false;
				else if (iVar4 != iVar3)
					return false;
			}
		}
	}

	return bVar0;
}

bool func_33(bool bParam0) // Position - 0x17F8
{
	return IS_BIT_SET(Global_1845299[bParam0 /*883*/].f_36.f_18, 14);
}

bool func_34(bool bParam0, int iParam1) // Position - 0x1810
{
	bool bVar0;

	if (!func_11(bParam0))
		return false;

	if (bParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_35(-1, false) == 8;
	else
		bVar0 = Global_1845299[bParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;

	return bVar0;
}

bool func_35(bool bParam0, bool bParam1) // Position - 0x1869
{
	bool bVar0;
	bool bVar1;

	bVar1 = bParam0;

	if (bVar1 == -1)
		bVar1 = func_36();

	if (Global_1575072[bVar1] == true)
	{
		bParam1;
		bVar0 = 8;
	}
	else
	{
		bVar0 = Global_1574921[bVar1];
		bParam1;
	}

	return bVar0;
}

bool func_36() // Position - 0x18AA
{
	return Global_1574927;
}

int func_37(int iParam0, int iParam1) // Position - 0x18B6
{
	if (iParam0 == -1)
		iParam0 = func_30(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

bool func_38() // Position - 0x1904
{
	if (func_39())
		return true;

	return IS_BIT_SET(*Global_4718592.f_204177, 4);
}

bool func_39() // Position - 0x1923
{
	return IS_BIT_SET(*Global_4718592.f_192014, 12);
}

bool func_40() // Position - 0x1938
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return IS_BIT_SET(*Global_4718592.f_204177, 0);

	return IS_BIT_SET(*Global_4718592.f_204177, 0) || Global_1926953 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_DEATHMATCH_CREATOR")) > 0;
}

bool func_41() // Position - 0x197F
{
	if (func_39() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return true;

	return false;
}

bool func_42(int iParam0) // Position - 0x199C
{
	return iParam0 == 94;
}

bool func_43(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) // Position - 0x19A9
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	else
		iVar0 = iParam2;

	if (Global_1845299[PLAYER::PLAYER_ID() /*883*/] == 148)
		bVar1 = true;

	bVar2 = bParam0;

	if (bVar2 > -1)
		if (Global_1845299[bVar2 /*883*/] == 148)
			bVar1 = true;

	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_51())
			{
				iVar3 = func_47(bParam0);
			
				if (!(iVar3 == -1))
					return func_45(iVar3);
			}
		
			if (func_74(bParam1, bParam0, iVar0, 0) && !IS_BIT_SET(Global_4718592.f_16, 18) || func_31(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_16, 23) && !IS_BIT_SET(Global_4718592.f_16, 18))
				return func_23(true);
			else if (IS_BIT_SET(Global_4718592.f_16, 26))
				return func_44(true);
			else
				return func_26(bParam1, true, iVar0, bParam4);
		}
		else if (Global_1836756 || Global_1836746 || Global_1845299[bParam0 /*883*/] == false)
		{
			if (bParam0 == bParam1 || Global_1836756 == true && Global_1836766 == false)
				return func_23(true);
			else
				return func_26(bParam1, true, iVar0, bParam4);
		}
	
		if (Global_1836750 && Global_1836212.f_14 == bParam0)
			return 28;
	}

	iVar4 = func_47(bParam0);

	if (!(iVar4 == -1))
		return func_45(iVar4);

	if (bParam3)
		return false;

	return true;
}

bool func_44(bool bParam0) // Position - 0x1B41
{
	if (bParam0)
		return 119;

	return 116;
}

bool func_45(int iParam0) // Position - 0x1B58
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_46(iParam0);
	
		switch (iVar0)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

int func_46(int iParam0) // Position - 0x1C1B
{
	return Global_2649162.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_47(bool bParam0) // Position - 0x1C32
{
	if (func_11(bParam0))
		if (func_49(bParam0, true))
			return Global_2649162.f_818.f_11[func_48(bParam0)];

	return -1;
}

bool func_48(bool bParam0) // Position - 0x1C62
{
	if (func_11(bParam0))
		return Global_1892798[bParam0 /*615*/].f_10;

	return func_6();
}

bool func_49(bool bParam0, bool bParam1) // Position - 0x1C85
{
	if (!func_11(bParam0))
		return false;

	if (!bParam1)
		if (func_50(bParam0))
			return false;

	return func_11(Global_1892798[bParam0 /*615*/].f_10);
}

bool func_50(bool bParam0) // Position - 0x1CBD
{
	if (func_11(bParam0))
		if (func_11(Global_1892798[bParam0 /*615*/].f_10))
			return Global_1892798[bParam0 /*615*/].f_10 == bParam0;

	return false;
}

bool func_51() // Position - 0x1CF2
{
	if (func_66() || func_65() || func_64() || func_63() || func_62() || func_60() || func_58() || func_55() || func_52())
		return true;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_37, 1))
		return true;

	return false;
}

bool func_52() // Position - 0x1D6E
{
	return func_53(*Global_4718592.f_139000);
}

bool func_53(int iParam0) // Position - 0x1D84
{
	int iVar0;

	if (iParam0 == 0)
		return 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (iParam0 == func_54(iVar0))
			return 1;
	}

	return 0;
}

int func_54(int iParam0) // Position - 0x1DB8
{
	if (iParam0 != -1)
		return Global_262145.f_36148[iParam0];

	return -1;
}

bool func_55() // Position - 0x1DD7
{
	return func_56(*Global_4718592.f_139000);
}

bool func_56(int iParam0) // Position - 0x1DED
{
	int iVar0;

	if (iParam0 == 0)
		return 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (iParam0 == func_57(iVar0))
			return 1;
	}

	return 0;
}

int func_57(int iParam0) // Position - 0x1E21
{
	if (iParam0 != -1)
		return Global_262145.f_33578[iParam0];

	return -1;
}

bool func_58() // Position - 0x1E40
{
	return func_59(*Global_4718592.f_139000);
}

bool func_59(int iParam0) // Position - 0x1E56
{
	int iVar0;

	if (iParam0 == 0)
		return 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (Global_262145.f_31306[iVar0] == iParam0)
			return 1;
	}

	return 0;
}

bool func_60() // Position - 0x1E8F
{
	return func_61(*Global_4718592.f_139000);
}

bool func_61(int iParam0) // Position - 0x1EA5
{
	int iVar0;

	if (iParam0 == 0)
		return 0;

	for (iVar0 = 0; iVar0 < 8; iVar0 = iVar0 + 1)
	{
		if (Global_262145.f_30473[iVar0] == iParam0)
			return 1;
	}

	return 0;
}

bool func_62() // Position - 0x1EDF
{
	return Global_2685153.f_24;
}

bool func_63() // Position - 0x1EED
{
	return Global_2685153.f_21;
}

bool func_64() // Position - 0x1EFB
{
	return Global_2685153.f_19;
}

bool func_65() // Position - 0x1F09
{
	return Global_2685153.f_18;
}

bool func_66() // Position - 0x1F17
{
	return Global_2685153.f_17;
}

bool func_67(int iParam0, bool bParam1, bool bParam2) // Position - 0x1F25
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_1058124.f_14[iParam0];

	if (func_51())
	{
		iVar2 = func_47(bParam1);
	
		if (!(iVar2 == -1))
			return func_45(iVar2);
	}

	if (iVar1 > -1 && iVar1 < 17)
		if (IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26968*/].f_8610[iVar1], 24))
			return 18;

	if (iParam0 > -1 && bParam1 != func_6())
	{
		if (Global_4718592.f_133253[iParam0] != -1 && Global_4718592.f_133253[iParam0] <= 4)
			if (Global_4718592.f_133253[iParam0] == false)
				bVar0 = 15;
			else if (Global_4718592.f_133253[iParam0] == true)
				bVar0 = 18;
			else if (Global_4718592.f_133253[iParam0] == 2)
				bVar0 = 24;
			else if (Global_4718592.f_133253[iParam0] == 4)
				if (IS_BIT_SET(Global_4718592.f_16, 29))
					bVar0 = 21;
				else
					bVar0 = 6;
			else
				bVar0 = Global_4718592.f_133253[iParam0];
		else
			bVar0 = func_26(bParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_22, 13))
			bVar0 = func_68(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_25, 29))
			bVar0 = false;
	
		if (IS_BIT_SET(Global_4718592.f_16, 26) && !func_31(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1))
			bVar0 = func_44(true);
	}
	else
	{
		bVar0 = true;
	}

	return bVar0;
}

bool func_68(int iParam0) // Position - 0x20A5
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = *Global_4718592.f_199469;
			break;
	
		case 1:
			iVar0 = *Global_4718592.f_199470;
			break;
	
		case 2:
			iVar0 = *Global_4718592.f_199471;
			break;
	
		case 3:
			iVar0 = *Global_4718592.f_199472;
			break;
	}

	switch (iVar0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

int func_69() // Position - 0x217A
{
	return Global_2621446.f_2;
}

bool func_70() // Position - 0x2188
{
	return IS_BIT_SET(Global_2621446, 4);
}

bool func_71() // Position - 0x2196
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_72(bool bParam0) // Position - 0x21B0
{
	if (func_34(bParam0, 0))
		return true;

	if (func_73())
		if (bParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[bParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

bool func_73() // Position - 0x21EF
{
	return IS_BIT_SET(Global_2621446, 3);
}

bool func_74(bool bParam0, bool bParam1, int iParam2, int iParam3) // Position - 0x21FD
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}

	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_75(int iParam0) // Position - 0x2275
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_77())
				if (iParam0 == 5)
					iParam0 = 6;
				else
					iParam0 = 5;
			break;
	}

	return func_76(iParam0);
}

int func_76(int iParam0) // Position - 0x22AF
{
	switch (iParam0)
	{
		case 10:
			return 9;
	
		case 5:
			return 8;
	
		case 6:
			return 7;
	
		case 8:
			return 6;
	
		case 7:
			return 4;
	
		case 4:
		case 11:
			return 2;
	
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}

	return 1;
}

bool func_77() // Position - 0x233A
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2673274);

	if (iVar0 > -1 && iVar0 < 4)
		return IS_BIT_SET(Global_4718592.f_3605[iVar0 /*26968*/].f_14458, 4);

	return false;
}

void func_78(bool bParam0, bool bParam1, bool bParam2) // Position - 0x2371
{
	var uVar0;

	if (func_80(bParam0))
		return;

	func_79(&Global_2647285.f_723[bParam0], &Global_2647285.f_1086[bParam0], &(Global_2647285.f_393), bParam1, bParam0, bParam2, &uVar0);
}

bool func_79(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6) // Position - 0x23AF
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*iParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}

	if (!SCRIPT::IS_THREAD_ACTIVE(*iParam0) || *iParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
		
			*iParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (IS_BIT_SET(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
		
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
				*uParam1 = -1;
		
			*iParam0 = -1;
		}
	
		return true;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !(*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
	}

	return false;
}

bool func_80(bool bParam0) // Position - 0x246E
{
	if (bParam0 == func_6())
		return true;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_81())
		return true;

	return false;
}

int func_81() // Position - 0x2497
{
	switch (func_83())
	{
		case 0:
			return func_82();
	
		case 2:
			return joaat("CREATOR");
	}

	return 0;
}

int func_82() // Position - 0x24CA
{
	switch (Global_2699694)
	{
		case 0:
			return joaat("FREEMODE");
	
		default:
		
	}

	return joaat("FREEMODE");
}

int func_83() // Position - 0x24EE
{
	return Global_33792;
}

void func_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3) // Position - 0x24F9
{
	var uVar0;

	if (func_80(bParam0))
		return;

	if (func_79(&Global_2647285.f_822[bParam0], &Global_2647285.f_1185[bParam0], &(Global_2647285.f_367), bParam1, bParam0, bParam3, &uVar0))
		func_85(bParam0, bParam2);
}

void func_85(bool bParam0, bool bParam1) // Position - 0x2541
{
	if (bParam1)
		MISC::SET_BIT(&(Global_2647285.f_368), bParam0);
	else
		MISC::CLEAR_BIT(&(Global_2647285.f_368), bParam0);

	if (HUD::DOES_BLIP_EXIST(Global_2647285[bParam0]))
		if (bParam1)
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647285[bParam0], 0);
		else
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647285[bParam0], 1);
}

bool func_86(bool bParam0) // Position - 0x259C
{
	return func_87(&Global_2647285.f_822[bParam0]);
}

bool func_87(int iParam0) // Position - 0x25B3
{
	if (SCRIPT::IS_THREAD_ACTIVE(*iParam0))
		if (!(*iParam0 == SCRIPT::GET_ID_OF_THIS_THREAD()))
			return 0;

	return 1;
}

void func_88(bool bParam0, int iParam1, bool bParam2, bool bParam3) // Position - 0x25D6
{
	var uVar0;

	if (func_80(bParam0))
		return;

	if (func_79(&Global_2647285.f_624[bParam0], &Global_2647285.f_987[bParam0], &(Global_2647285.f_389), bParam2, bParam0, bParam3, &uVar0))
		if (bParam2)
			Global_2647285.f_459[bParam0] = iParam1;
}

int func_89(int iParam0) // Position - 0x2628
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	switch (iParam0)
	{
		case 1:
			return 4;
	
		case 0:
			return 4;
	
		case 6:
			return 59;
	
		case 18:
			return 2;
	
		case 13:
			return 5;
	
		case 116:
			return 38;
	
		case 28:
			return 6;
	
		case 29:
			return 7;
	
		case 30:
			return 8;
	
		case 31:
			return 9;
	
		case 32:
			return 10;
	
		case 33:
			return 11;
	
		case 34:
			return 12;
	
		case 35:
			return 13;
	
		case 36:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 16;
	
		case 39:
			return 17;
	
		case 40:
			return 18;
	
		case 41:
			return 19;
	
		case 42:
			return 20;
	
		case 43:
			return 21;
	
		case 44:
			return 22;
	
		case 45:
			return 23;
	
		case 46:
			return 24;
	
		case 47:
			return 25;
	
		case 48:
			return 26;
	
		case 49:
			return 27;
	
		case 50:
			return 28;
	
		case 51:
			return 29;
	
		case 52:
			return 30;
	
		case 53:
			return 31;
	
		case 54:
			return 32;
	
		case 55:
			return 33;
	
		case 56:
			return 34;
	
		case 57:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 9:
			return 57;
	
		case 10:
			return 53;
	
		case 118:
			return 57;
	
		case 14:
			return 56;
	
		case 3:
			return 55;
	
		case 21:
			return 50;
	
		case 15:
			return 51;
	
		case 20:
			return 52;
	
		case 11:
			return 54;
	
		case 23:
			return 58;
	
		case 12:
			return 60;
	
		case 24:
			return 61;
	
		case 4:
			return 62;
	
		default:
		
	}

	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	return (iVar0 * 16777216) + (iVar1 * 65536) + (iVar2 * 256) + uVar3;
}

int func_90(bool bParam0) // Position - 0x2890
{
	int iVar0;

	iVar0 = func_47(bParam0);

	if (iVar0 != -1)
		return func_45(iVar0);

	return 1;
}

bool func_91(bool bParam0) // Position - 0x28B0
{
	return func_87(&Global_2647285.f_624[bParam0]);
}

void func_92(bool bParam0, bool bParam1, bool bParam2, bool bParam3) // Position - 0x28C7
{
	bool bVar0;

	if (func_80(bParam0))
		return;

	if (func_79(&Global_2647285.f_591[bParam0], &Global_2647285.f_954[bParam0], &(Global_2647285.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
			Global_2647285.f_426[bParam0] = bParam1;
	
		if (bVar0)
			func_93();
	}
}

void func_93() // Position - 0x2922
{
	Global_2647285.f_1656 = 1;
	Global_1950714.f_4262 = 1;
}

void func_94() // Position - 0x293A
{
	func_2(Global_2733138.f_3989.f_757);
	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_95() // Position - 0x2954
{
	if (Global_1575064 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_99())
		return true;

	if (Global_2699585)
		return true;

	if (func_98())
		return true;

	if (func_97(159))
		if (!func_96())
			return true;

	if (func_97(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (func_81() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_81()) == 0)
			return true;

	return false;
}

bool func_96() // Position - 0x29D8
{
	return Global_2685153.f_700;
}

bool func_97(int iParam0) // Position - 0x29E7
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
		return true;

	return false;
}

bool func_98() // Position - 0x29FE
{
	return Global_2696981;
}

bool func_99() // Position - 0x2A0A
{
	return Global_2685153.f_695;
}

void func_100() // Position - 0x2A19
{
	BUILTIN::WAIT(0);
}

int func_101() // Position - 0x2A26
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	return 1;
}

