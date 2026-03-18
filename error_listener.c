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
	Static_61 = (0.05f + 0.275f) - 0.01f;
	func_12();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (func_11())
			return;
	
		func_1();
	}
}

void func_1() // Position - 0xA2
{
	func_2();
}

void func_2() // Position - 0xAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar5;

	for (iVar0 = 0; iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(2); iVar0 = iVar0 + 1)
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(2, iVar0);
	
		if (func_10(iVar1))
		{
			func_9(&iVar2);
			func_8(2, iVar0, iVar1, &iVar2);
			iVar2.f_1 = MISC::GET_FRAME_COUNT() - 1;
			iVar2 = iVar1;
		
			if (!func_7(&iVar2, &uVar5))
				func_6(&iVar2);
		
			func_3(&iVar2);
		}
	}
}

void func_3(var uParam0) // Position - 0x116
{
	int iVar0;

	iVar0 = *uParam0;

	if (func_5() && func_4(iVar0) && iVar0 != 250 && NETWORK::NETWORK_CAN_BAIL())
		NETWORK::NETWORK_BAIL(0, 1, 0);
}

bool func_4(int iParam0) // Position - 0x14F
{
	return iParam0 == 251 || iParam0 == 252 || iParam0 == 253 || iParam0 == 250;
}

bool func_5() // Position - 0x17D
{
	return Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_185 != 0;
}

int func_6(var uParam0) // Position - 0x194
{
	if (Global_34071.f_61 < 20)
	{
		Global_34071[Global_34071.f_61 /*3*/] = { *uParam0 };
		Global_34071.f_61 = Global_34071.f_61 + 1;
		return 1;
	}

	return 0;
}

bool func_7(var uParam0, var uParam1) // Position - 0x1C7
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_34071.f_61)
	{
		if (Global_34071[*uParam1 /*3*/] == *uParam0 && Global_34071[*uParam1 /*3*/].f_2 == uParam0->f_2)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_8(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x215
{
	var uVar0;

	if (iParam2 == 250 || iParam2 == 251 || iParam2 == 252 || iParam2 == 253)
		if (SCRIPT::GET_EVENT_DATA(iParam0, iParam1, &uVar0, 1))
			uParam3->f_2 = uVar0;
}

void func_9(var uParam0) // Position - 0x25A
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_10(int iParam0) // Position - 0x270
{
	return func_4(iParam0);
}

bool func_11() // Position - 0x27E
{
	return false;
}

void func_12() // Position - 0x287
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

