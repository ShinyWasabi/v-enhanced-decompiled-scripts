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
	int Static_26 = 0;
	int Static_27 = 0;
	var Static_28 = 0;
	var Static_29 = 0;
	var Static_30 = 0;
	int Static_31 = 0;
	int Static_32 = 0;
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
	Static_27 = -1;
	Static_28 = { 0f, 0f, 0f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			SCRIPT::TERMINATE_THIS_THREAD();
	
		if (func_24(PLAYER::PLAYER_ID()) && ENTITY::DOES_ENTITY_EXIST(func_23()))
			Static_31 = func_23();
		else
			Static_31 = PLAYER::PLAYER_PED_ID();
	
		ENTITY::IS_ENTITY_DEAD(Static_31, 0);
		func_1();
	}
}

void func_1() // Position - 0xB1
{
	var uVar0;
	var uVar3;
	bool bVar6;
	int iVar7;

	func_22();

	if (Static_27 != -1 && func_21(Static_27))
	{
		uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_31, 0) };
		uVar3 = { func_20(Static_27) };
	
		if (BUILTIN::VDIST2(uVar3, uVar0) < (float)func_19(Static_27))
		{
			bVar6 = false;
			iVar7 = 0;
		
			for (iVar7 = 0; iVar7 < func_18(Static_27); iVar7 = iVar7 + 1)
			{
				if (!bVar6)
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Static_31, func_17(Static_27, iVar7), func_16(Static_27, iVar7), func_15(Static_27, iVar7), 0, 1, 0))
						bVar6 = true;
			}
		
			if (bVar6)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY(func_14(Static_27)), uVar3, uVar3.f_1, func_13(Static_27), func_12(Static_27));
				func_11(Static_27);
			}
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_2())
		{
			if (IS_BIT_SET(Static_32, 1))
				MISC::CLEAR_BIT(&Static_32, 1);
		
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!IS_BIT_SET(Static_32, 0))
				{
					HUD::SET_MINIMAP_COMPONENT(15, 1, -1);
					MISC::SET_BIT(&Static_32, 0);
				}
			}
			else if (IS_BIT_SET(Static_32, 0))
			{
				HUD::SET_MINIMAP_COMPONENT(15, 0, -1);
				MISC::CLEAR_BIT(&Static_32, 0);
			}
		}
		else if (!IS_BIT_SET(Static_32, 1))
		{
			HUD::SET_MINIMAP_COMPONENT(15, 0, -1);
			MISC::CLEAR_BIT(&Static_32, 0);
			MISC::SET_BIT(&Static_32, 1);
		}
	}
}

bool func_2() // Position - 0x1E7
{
	bool bVar0;

	if (func_8(PLAYER::PLAYER_ID()))
		return true;

	if (func_5(PLAYER::PLAYER_ID(), true))
	{
		bVar0 = func_4();
	
		if (bVar0 != func_3())
			if (func_8(bVar0))
				return true;
	}

	return false;
}

bool func_3() // Position - 0x227
{
	return -1;
}

bool func_4() // Position - 0x230
{
	return Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_10;
}

bool func_5(int iParam0, bool bParam1) // Position - 0x245
{
	if (!func_7(iParam0))
		return false;

	if (!bParam1)
		if (func_6(iParam0))
			return false;

	return func_7(Global_1892798[iParam0 /*615*/].f_10);
}

bool func_6(bool bParam0) // Position - 0x27D
{
	if (func_7(bParam0))
		if (func_7(Global_1892798[bParam0 /*615*/].f_10))
			return Global_1892798[bParam0 /*615*/].f_10 == bParam0;

	return false;
}

bool func_7(bool bParam0) // Position - 0x2B2
{
	int iVar0;

	iVar0 = bParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_8(bool bParam0) // Position - 0x2D4
{
	int iVar0;

	if (func_10(bParam0))
	{
		iVar0 = func_9(bParam0);
	
		if (iVar0 == 3 || iVar0 == 4 || iVar0 == 5)
			return true;
	}

	return false;
}

int func_9(int iParam0) // Position - 0x30D
{
	if (iParam0 != func_3())
		return Global_1845299[iParam0 /*883*/].f_260.f_304;

	return 0;
}

bool func_10(int iParam0) // Position - 0x331
{
	if (iParam0 != func_3())
		return Global_1845299[iParam0 /*883*/].f_260.f_304 != 0;

	return false;
}

void func_11(int iParam0) // Position - 0x357
{
	var uVar0;

	uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_31, 0) };
	HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(uVar0, uVar0.f_1);

	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_31, 0) };
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(uVar0, uVar0.f_1);
			break;
	
		case 3:
			HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			break;
	
		case 4:
			HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			break;
	}
}

int func_12(int iParam0) // Position - 0x3C5
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_31, 0) };
		
			if (uVar0.f_2 < 9.7796f)
				return 0;
			else if (uVar0.f_2 > 9.7796f && uVar0.f_2 < 16f)
				return 1;
			else
				return 2;
			break;
	
		case 2:
			uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_31, 0) };
		
			if (uVar0.f_2 < 178.9f)
				return 0;
			else if (uVar0.f_2 > 178.9f && uVar0.f_2 < 188.7f)
				return 1;
			else
				return 2;
			break;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_13(int iParam0) // Position - 0x49A
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

char* func_14(int iParam0) // Position - 0x4EB
{
	switch (iParam0)
	{
		case 0:
			return "V_FakeBoatPO1SH2A";
	
		case 1:
			return "V_FakeWarehousePO103";
	
		case 2:
			return "V_FakeKortzCenter";
	
		case 3:
			return "V_FakePrison";
	
		case 4:
			return "V_FakeMilitaryBase";
	}

	return "";
}

float func_15(int iParam0, int iParam1) // Position - 0x547
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 28.125f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 32.6875f;
			
				case 1:
					return 13.1875f;
			
				case 2:
					return 16.25f;
			
				case 3:
					return 21.75f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95f;
			
				case 1:
					return 78.75f;
			
				case 2:
					return 70.6875f;
			
				case 3:
					return 64.4375f;
			
				case 4:
					return 32.375f;
			
				case 5:
					return 19f;
			
				case 6:
					return 19f;
			
				case 7:
					return 19.78125f;
			
				case 8:
					return 32.0625f;
			
				case 9:
					return 35.8125f;
			
				case 10:
					return 30.5f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1500f;
			}
			break;
	}

	return 0f;
}

Vector3 func_16(int iParam0, int iParam1) // Position - 0x6D9
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5371f, -3057.2888f, 40.75164f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.278374f, -2654.2437f, 20.942299f;
			
				case 1:
					return 13.931628f, -2654.5605f, 14.44239f;
			
				case 2:
					return 55.595722f, -2667.4985f, 10.822453f;
			
				case 3:
					return 34.586597f, -2746.3875f, 10.950064f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2169.1704f, 256.7264f, 203.40813f;
			
				case 1:
					return -2216.3938f, 329.4761f, 201.36168f;
			
				case 2:
					return -2345.3528f, 350.78818f, 189.65222f;
			
				case 3:
					return -2288.0972f, 388.99094f, 200.9045f;
			
				case 4:
					return -2310.2632f, 406.638f, 200.90408f;
			
				case 5:
					return -2169.2214f, 260.5679f, 202.42944f;
			
				case 6:
					return -2258.7776f, 166.9506f, 202.83177f;
			
				case 7:
					return -2236.9731f, 285.59576f, 203.03947f;
			
				case 8:
					return -2211.3618f, 303.67413f, 214.93228f;
			
				case 9:
					return -2282.0981f, 383.09036f, 201.0395f;
			
				case 10:
					return -2277.9302f, 356.44424f, 201.10155f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 200f, 2600f, -5f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1451.2051f, 2689.4402f, -37.62654f;
			}
			break;
	}

	return Static_28;
}

Vector3 func_17(int iParam0, int iParam1) // Position - 0x922
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5345f, -2880.354f, -19.964888f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.15308f, -2747.0674f, 1.137565f;
			
				case 1:
					return 13.957768f, -2700.626f, 5.046232f;
			
				case 2:
					return 55.61185f, -2687.6814f, 5.005801f;
			
				case 3:
					return 34.56926f, -2759.479f, -0.030933f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2317.3801f, 191.63188f, 165.40373f;
			
				case 1:
					return -2357.9949f, 264.02972f, 162.79884f;
			
				case 2:
					return -2261.4329f, 387.3963f, 154.35222f;
			
				case 3:
					return -2326.399f, 408.3378f, 140.31822f;
			
				case 4:
					return -2304.6167f, 460.21268f, 140.21474f;
			
				case 5:
					return -2150.825f, 216.41681f, 162.80118f;
			
				case 6:
					return -2172.7651f, 203.5957f, 167.41351f;
			
				case 7:
					return -2191.0364f, 305.96097f, 159.62502f;
			
				case 8:
					return -2227.613f, 340.05872f, 165.13574f;
			
				case 9:
					return -2244.4097f, 399.57635f, 137.5101f;
			
				case 10:
					return -2243.2615f, 371.4072f, 137.2722f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3200f, 2600f, 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2841.1074f, 3506.837f, 1000.47363f;
			}
			break;
	}

	return Static_28;
}

int func_18(int iParam0) // Position - 0xB6B
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 4;
	
		case 2:
			return 11;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	}

	return 0;
}

int func_19(int iParam0) // Position - 0xBBD
{
	switch (iParam0)
	{
		case 0:
			return 10000;
	
		case 1:
			return 10000;
	
		case 2:
			return 250000;
	
		case 3:
			return 280900;
	
		case 4:
			return 2250000;
	}

	return 0;
}

Vector3 func_20(int iParam0) // Position - 0xC1B
{
	switch (iParam0)
	{
		case 0:
			return 1240f, -2970f, 12.2f;
	
		case 1:
			return 40f, -2720f, 12f;
	
		case 2:
			return -2250f, 300f, 182.2f;
	
		case 3:
			return 1700f, 2580f, 80f;
	
		case 4:
			return -2250f, 3100f, 80f;
	}

	return Static_28;
}

bool func_21(int iParam0) // Position - 0xCB5
{
	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	}

	return true;
}

void func_22() // Position - 0xCF2
{
	var uVar0;

	Static_26 = Static_26 + 1;

	if (Static_26 > 4)
		Static_26 = 0;

	if (Static_26 != Static_27)
	{
		if (Static_27 == -1)
		{
			Static_27 = Static_26;
		}
		else
		{
			uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_31, 0) };
		
			if (BUILTIN::VDIST2(func_20(Static_26), uVar0) < BUILTIN::VDIST2(func_20(Static_27), uVar0))
				Static_27 = Static_26;
		}
	}
}

int func_23() // Position - 0xD4C
{
	return Global_2621446.f_2;
}

int func_24(int iParam0) // Position - 0xD5A
{
	if (func_26(iParam0, 0))
		return 1;

	if (func_25())
		if (iParam0 == PLAYER::PLAYER_ID())
			return 1;

	if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 2))
		return 1;

	return 0;
}

bool func_25() // Position - 0xD99
{
	return IS_BIT_SET(Global_2621446, 3);
}

bool func_26(int iParam0, int iParam1) // Position - 0xDA7
{
	bool bVar0;

	if (!func_7(iParam0))
		return false;

	if (iParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_27(-1, false) == 8;
	else
		bVar0 = Global_1845299[iParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;

	return bVar0;
}

int func_27(int iParam0, bool bParam1) // Position - 0xE00
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;

	if (iVar1 == -1)
		iVar1 = func_28();

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

int func_28() // Position - 0xE41
{
	return Global_1574927;
}

