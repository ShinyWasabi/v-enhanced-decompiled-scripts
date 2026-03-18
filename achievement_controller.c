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
	int Static_19 = 0;
	float Static_20 = 0f;
	var Static_21 = 0;
	var Static_22 = 0;
	var Static_23 = 0;
	float Static_24 = 0f;
	float Static_25 = 0f;
	var Static_26 = 0;
	var Static_27 = 0;
	float Static_28 = 0f;
	float Static_29 = 0f;
	float Static_30 = 0f;
	var Static_31 = 0;
	var Static_32 = 0;
	var Static_33 = 0;
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
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	float Static_53 = 0f;
	int Static_54 = 0;
	int Static_55 = 0;
	int Static_56 = 0;
	int Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	int Static_61 = 0;
	int Static_62 = 0;
	float Static_63 = 0f;
	int Static_64 = 0;
	int Static_65 = 0;
	int Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	bool Static_70 = 0;
	int Static_71 = 0;
	bool Static_72 = 0;
#endregion

void main() // Position - 0x0
{
	int iVar0;

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
	Static_19 = 3;
	Static_20 = 0f;
	Static_24 = -0.0375f;
	Static_25 = 0.17f;
	Static_28 = 80f;
	Static_29 = 140f;
	Static_30 = 180f;
	Static_38 = 1;
	Static_39 = 65;
	Static_40 = 49;
	Static_41 = 64;
	Static_53 = 0f;
	Static_61 = 1000;
	Static_62 = 3333;
	Static_63 = 0f;
	Static_70 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	Static_56 = MISC::GET_GAME_TIMER();
	Static_65 = 0;
	func_164(Static_66);
	func_163();
	func_161(&Global_4525144);
	func_160(&Global_4525144, 1);
	func_158(&Static_67);

	while (true)
	{
		if (Global_34043 != Static_65)
		{
			if (Static_65 == 0 && Global_34043 != 0)
				if (MISC::IS_PS3_VERSION() || func_157())
					func_156("CHEAT_TROPHIE" /* GXT: Cheats have been activated. Trophies will not be awarded for the duration of this session. */, -1);
				else
					func_156("CHEAT_ACHIEVE" /* GXT: Cheats have been activated. Achievements will not be awarded for the duration of this session. */, -1);
		
			Static_65 != 0 && Global_34043 == 0;
		}
	
		Static_65 = Global_34043;
	
		if (!func_155(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
				func_146();
		
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
				func_144();
		
			if (Global_33802)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					iVar0 = func_129(true);
				
					if (iVar0 > 0)
					{
						func_128(12, iVar0);
						STATS::STAT_SET_INT(joaat("NUM_GOLD_MEDALS_OBTAINED"), iVar0, 1);
					}
				
					if (iVar0 >= 70)
						func_122(12, 1);
				}
			
				Global_33802 = false;
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					Static_66 = Static_66 + 1;
				
					if (MISC::GET_GAME_TIMER() > Static_56)
					{
						func_111(false);
						Static_56 = MISC::GET_GAME_TIMER() + Static_61;
					}
				
					if (MISC::GET_GAME_TIMER() > Static_57)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || Static_64 == 1)
							if (func_110(53))
								func_109();
					
						Static_57 = MISC::GET_GAME_TIMER() + Static_62;
					}
				}
			}
		
			func_101(&Global_4525144);
			func_1();
		}
		else
		{
			func_101(&Global_4525144);
			func_1();
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0x20D
{
	bool bVar0;
	int iVar1;

	if (!func_100(&Global_4525144))
		return;

	if (!Global_80305)
	{
		if (Static_72)
			Static_72 = false;
	
		return;
	}

	if (!func_97())
		return;

	if (Static_70)
	{
		if (!func_95(3, -1))
			return;
	
		if (!func_95(5, -1))
			return;
	}

	if (Static_72)
		return;

	bVar0 = SOCIALCLUB::SC_ACHIEVEMENT_INFO_STATUS(&iVar1);
	iVar1 == -1 && Static_71 == 0;

	if (bVar0 && iVar1 == 0)
	{
		func_94();
		Static_72 = true;
	}
	else
	{
		func_2();
	}
}

void func_2() // Position - 0x29D
{
	int iVar0;

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
		if (func_91() | true)
			func_122(33, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_87(&Static_67) > 5f)
		{
			func_22(PLAYER::PLAYER_PED_ID());
			func_158(&Static_67);
		}
	}

	iVar0 = func_19(func_21(-1), 0);

	if (iVar0 >= 100)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
			func_122(36, 1);

	if (iVar0 >= 50)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
			func_122(35, 1);

	if (iVar0 >= 25)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
			func_122(34, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		func_16(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
		if (func_15(joaat("MPPLY_TOTAL_CUSTOM_RACES_WON")) >= 5)
			func_122(38, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
		if (func_13(48, -1) >= 10)
			func_122(39, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
		if (func_13(52, -1) > 0)
			func_122(40, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
		if (IS_BIT_SET(Global_2733138.f_1415.f_18, 1))
			func_122(41, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
		if (func_11(756, -1) >= 30)
			func_122(43, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
		if (func_13(14, -1) >= 20)
			func_122(44, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		func_9(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
		if (func_8(11, -1))
			func_122(48, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		func_3(false);
}

int func_3(bool bParam0) // Position - 0x442
{
	if (!func_97())
		return 0;

	if (!Global_80305)
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		return 0;

	bParam0 == true;

	if (!func_4(100, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(102, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(101, -1))
	{
		bParam0 == true;
		return 0;
	}

	func_122(49, 1);
	return 1;
}

bool func_4(int iParam0, int iParam1) // Position - 0x4BD
{
	var uVar0;
	bool bVar1;

	uVar0 = func_5(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(uVar0, &bVar1, -1))
		return bVar1;

	return false;
}

var func_5(int iParam0, int iParam1) // Position - 0x4E1
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_6(iParam1));
}

int func_6(int iParam0) // Position - 0x4F6
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_7();
	
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

int func_7() // Position - 0x52A
{
	return Global_1574927;
}

bool func_8(int iParam0, int iParam1) // Position - 0x536
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_9(bool bParam0) // Position - 0x552
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_97())
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		return 0;

	if (!Global_80305)
		return 0;

	iVar2 = func_11(757, -1);

	for (iVar0 = 0; iVar0 < 9; iVar0 = iVar0 + 1)
	{
		if (func_10(iVar2, iVar0, bParam0))
			iVar1 = iVar1 + 1;
	}

	if (iVar1 == 9)
	{
		func_122(45, 1);
		return 1;
	}

	return 0;
}

bool func_10(int iParam0, int iParam1, bool bParam2) // Position - 0x5C3
{
	bool bVar0;

	bVar0 = IS_BIT_SET(iParam0, iParam1);

	if (!bParam2)
		return bVar0;

	switch (iParam1)
	{
		case 0:
			return bVar0;
	
		case 1:
			return bVar0;
	
		case 2:
			return bVar0;
	
		case 3:
			return bVar0;
	
		case 4:
			return bVar0;
	
		case 5:
			return bVar0;
	
		case 6:
			return bVar0;
	
		case 7:
			return bVar0;
	
		case 8:
			return bVar0;
	
		default:
		
	}

	return false;
}

int func_11(int iParam0, int iParam1) // Position - 0x648
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_12(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

var func_12(int iParam0, int iParam1) // Position - 0x677
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(iParam1));
}

int func_13(int iParam0, int iParam1) // Position - 0x68C
{
	var uVar0;
	int iVar1;

	uVar0 = func_14(iParam0, iParam1);

	if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
		return iVar1;

	return 0;
}

var func_14(int iParam0, int iParam1) // Position - 0x6B0
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_6(iParam1));
}

int func_15(int iParam0) // Position - 0x6C6
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (STATS::STAT_GET_INT(iVar0, &iVar1, -1))
		return iVar1;

	return 0;
}

int func_16(bool bParam0) // Position - 0x6E4
{
	int iVar0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		return 0;

	if (!func_97())
		return 0;

	if (!Global_80305)
		return 0;

	if (bParam0)
	{
		iVar0 = func_13(21, -1);
		iVar0 = iVar0 - func_13(58, -1);
		iVar0 = iVar0 - func_13(57, -1);
	}

	if (func_17(8, -1))
	{
		func_122(37, 1);
		return 1;
	}

	return 0;
}

bool func_17(int iParam0, int iParam1) // Position - 0x74E
{
	var uVar0;
	bool bVar1;

	uVar0 = func_18(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(uVar0, &bVar1, -1))
		return bVar1;

	return false;
}

var func_18(int iParam0, int iParam1) // Position - 0x772
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_6(iParam1));
}

int func_19(int iParam0, int iParam1) // Position - 0x788
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
	
		if (func_20(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_20(iVar3) < iParam0)
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

int func_20(int iParam0) // Position - 0x843
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
				return 6100;
		
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

int func_21(int iParam0) // Position - 0xD87
{
	return func_11(640, iParam0);
}

void func_22(var uParam0) // Position - 0xD98
{
	int iVar0;
	int iVar1;

	iVar1 = 44;
	iVar1.f_221 = 51;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
		return;

	func_83(uParam0, &iVar1);
	iVar0 = 0;

	for (iVar0 = 0; iVar0 < iVar1; iVar0 = iVar0 + 1)
	{
		if (func_23(uParam0, iVar1[iVar0 /*5*/]))
		{
			func_122(29, 1);
			return;
		}
	}

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < iVar1.f_221; iVar0 = iVar0 + 1)
	{
		if (func_23(uParam0, iVar1.f_221[iVar0 /*5*/]))
		{
			func_122(29, 1);
			return;
		}
	}
}

bool func_23(var uParam0, int iParam1) // Position - 0xE27
{
	var uVar0;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	var uVar45;

	if (iParam1 == -61829581)
		return false;

	if (iParam1 == joaat("WEAPON_KNUCKLE"))
		return false;

	if (PED::IS_PED_INJURED(uParam0))
		return false;

	if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0, iParam1, 0))
		return false;

	iVar39 = func_82(iParam1, &uVar0);

	if (iParam1 != joaat("WEAPON_PISTOL") && iParam1 != joaat("WEAPON_APPISTOL") && iParam1 != joaat("WEAPON_COMBATPISTOL") && iParam1 != joaat("WEAPON_MICROSMG") && iParam1 != joaat("WEAPON_SMG") && iParam1 != joaat("WEAPON_PUMPSHOTGUN") && iParam1 != joaat("WEAPON_ASSAULTSHOTGUN") && iParam1 != joaat("WEAPON_SAWNOFFSHOTGUN") && iParam1 != joaat("WEAPON_ASSAULTRIFLE") && iParam1 != joaat("WEAPON_CARBINERIFLE") && iParam1 != joaat("WEAPON_ADVANCEDRIFLE") && iParam1 != joaat("WEAPON_SNIPERRIFLE") && iParam1 != joaat("WEAPON_HEAVYSNIPER") && iParam1 != joaat("WEAPON_MG") && iParam1 != joaat("WEAPON_COMBATMG") && iParam1 != joaat("WEAPON_GRENADELAUNCHER") && iParam1 != joaat("WEAPON_ASSAULTMG") && iParam1 != joaat("WEAPON_ASSAULTSMG") && iParam1 != joaat("WEAPON_ASSAULTSNIPER") && iParam1 != joaat("WEAPON_BULLPUPSHOTGUN") && iParam1 != joaat("WEAPON_PISTOL50") && iVar39 == -1 || EXTRAMETADATA::GET_NUM_DLC_WEAPON_COMPONENTS(iVar39) < 3)
		return false;

	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;

	for (iVar44 = 0; func_28(&uVar45, iParam1, iVar44, false); iVar44 = iVar44 + 1)
	{
		if (uVar45.f_4 == joaat("WAPCLIP") || uVar45.f_4 == joaat("WAPCLIP_2"))
			iVar41 = iVar41 + 1;
	
		if (uVar45.f_4 == joaat("WAPSCOP") || uVar45.f_4 == joaat("WAPSCOP_2"))
			iVar40 = iVar40 + 1;
	
		if (func_26(uParam0, iParam1, uVar45))
		{
			if (uVar45.f_4 == joaat("WAPCLIP") || uVar45.f_4 == joaat("WAPCLIP_2"))
				iVar43 = uVar45.f_6;
			else if (uVar45.f_4 == joaat("WAPSCOP") || uVar45.f_4 == joaat("WAPSCOP_2"))
				iVar42 = uVar45.f_6;
		}
		else if (uVar45.f_4 == joaat("WAPCLIP") || uVar45.f_4 == joaat("WAPCLIP_2") || uVar45.f_4 == joaat("WAPSCOP") || uVar45.f_4 == joaat("WAPSCOP_2") || uVar45.f_4 == joaat("WAPRAIL") || uVar45.f_4 == joaat("GUN_ROOT") || uVar45.f_4 == joaat("GUN_GRIPR"))
		{
		}
		else
		{
			return false;
		}
	}

	if (iVar40 > iVar42)
		return false;

	if (iVar41 > iVar43)
		return false;

	if (WEAPON::GET_WEAPON_TINT_COUNT(iParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, iParam1) == 0 && !func_24(func_25(iParam1, joaat("GUN_ROOT"))))
		return false;

	return true;
}

bool func_24(int iParam0) // Position - 0x1120
{
	if (iParam0 == joaat("COMPONENT_PISTOL_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER") || iParam0 == joaat("COMPONENT_APPISTOL_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_MICROSMG_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_SMG_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_MG_VARMOD_LOWRIDER") || iParam0 == joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER") || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER") || iParam0 == joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER") || iParam0 == joaat("COMPONENT_PISTOL50_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW") || iParam0 == joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER") || iParam0 == joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER") || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PIMP") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_HATE") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_LOVE") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_KING") || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS") || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1") || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2") || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_BOSS") || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_GOON") || iParam0 == joaat("COMPONENT_GUNRUN_MK2_UPGRADE") || iParam0 == joaat("COMPONENT_APPISTOL_VARMOD_SECURITY") || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY") || iParam0 == joaat("COMPONENT_MICROSMG_VARMOD_SECURITY") || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"))
		return true;

	return false;
}

int func_25(int iParam0, int iParam1) // Position - 0x1330
{
	int iVar0;
	int iVar7;

	while (func_28(&iVar0, iParam0, iVar7, false))
	{
		if (iVar0.f_4 == iParam1)
			if (func_26(PLAYER::PLAYER_PED_ID(), iParam0, iVar0))
				return iVar0;
	
		iVar7 = iVar7 + 1;
	}

	return 0;
}

bool func_26(var uParam0, int iParam1, var uParam2) // Position - 0x136D
{
	if (func_27(uParam0))
		return WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, iParam1, uParam2);

	return false;
}

bool func_27(var uParam0) // Position - 0x138C
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
			return true;

	return false;
}

bool func_28(var uParam0, int iParam1, int iParam2, bool bParam3) // Position - 0x13AD
{
	int iVar0;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	var uVar54;
	int iVar93;

	iVar0 = 37;
	func_81(uParam0, 0, 989182658, 0, 0);

	if (func_80(iParam1))
		return false;

	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23"), joaat("GUN_ROOT"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"), joaat("GUN_ROOT"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"), joaat("GUN_ROOT"), 2, 0);
						break;
				
					case 7:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_XM3"), joaat("GUN_ROOT"), 3, 0);
						break;
				
					case 8:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_FRN"), joaat("GUN_ROOT"), 4, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SMG"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 8:
							func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 7:
						func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 8:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 9:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"), joaat("GUN_ROOT"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 7:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				
					case 8:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"), joaat("GUN_ROOT"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 7:
						func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPSCOP"), 1, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPSCOP"), 1, 1);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPSCOP"), 1, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPGRIP"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 4, 0);
					break;
			
				case 14:
					func_81(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP_2"), 2, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 25:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 28:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 29:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 30:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 31:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 32:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 33:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 34:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 35:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 36:
					func_81(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
			
				case 14:
					func_81(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP_2"), 2, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 25:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 28:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 29:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 30:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 31:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 32:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 33:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 34:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 35:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 36:
					func_81(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
			
				case 12:
					func_81(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 2, 0);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 3, 0);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 4, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 5, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 6, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 7, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 8, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 22:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 25:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 28:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 29:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 30:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 31:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 32:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 33:
					func_81(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPSCOP"), 1, 0);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPSCOP"), 2, 1);
					break;
			
				case 8:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPSCOP"), 3, 0);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPSCOP"), 4, 0);
					break;
			
				case 10:
					func_81(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSUPP"), 2, 0);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSUPP"), 3, 0);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSUPP"), 4, 0);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 16:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 25:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFLSHLASR"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP"), 2, 0);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSUPP"), 3, 0);
					break;
			
				case 13:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			
				case 25:
					func_81(uParam0, joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"), joaat("GUN_ROOT"), 13, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
			
				case 12:
					func_81(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSUPP_2"), 1, 0);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 2, 0);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 3, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 4, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 5, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 6, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 7, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 8, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 23:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 25:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 28:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 29:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 30:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 31:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 32:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 33:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 34:
					func_81(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("GUN_ROOT"), 2, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"), joaat("GUN_ROOT"), 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("GUN_ROOT"), 2, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"), joaat("GUN_ROOT"), 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 8:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 9:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23"), joaat("GUN_ROOT"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 8:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 7:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				
					case 8:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23"), joaat("GUN_ROOT"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPCLIP"), 3, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 7:
						func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPSCOP"), 1, 1);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("GUN_ROOT"), 1, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("GUN_ROOT"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (func_79(Static_54))
			{
				if (!func_76(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
							break;
					
						case 1:
							func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
							break;
					
						case 2:
							func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
							break;
					
						case 3:
							func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
							break;
					
						case 4:
							func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
							break;
					
						case 5:
							func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
							break;
					
						case 6:
							func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
							break;
					
						case 7:
							func_81(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("GUN_GRIPR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSH"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
			
				case 6:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
			
				case 7:
					func_81(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
			
				case 8:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
			
				case 10:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP"), 4, 0);
					break;
			
				case 11:
					func_81(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSUPP"), 2, 0);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSUPP"), 3, 0);
					break;
			
				case 14:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 25:
					func_81(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 4, 0);
					break;
			
				case 12:
					func_81(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 2, 0);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 3, 0);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 4, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 5, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 6, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 7, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 8, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 9, 0);
					break;
			
				case 21:
					func_81(uParam0, 0, joaat("WAPGRIP"), 1, 1);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 25:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 28:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 29:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 30:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 31:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 32:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 33:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 34:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 35:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 36:
					func_81(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPFLSHLASR_2"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFLSHLASR_2"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSUPP_2"), 2, 0);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSUPP_2"), 3, 0);
					break;
			
				case 13:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
			
				case 10:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPSCOP_2"), 4, 1);
					break;
			
				case 11:
					func_81(uParam0, 0, joaat("WAPSUPP_2"), 1, 1);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP_2"), 2, 0);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP_2"), 3, 0);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP_2"), 4, 0);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP_2"), 5, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP_2"), 6, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP_2"), 7, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP_2"), 8, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP_2"), 9, 0);
					break;
			
				case 20:
					func_81(uParam0, 0, joaat("WAPGRIP_2"), 1, 1);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP_2"), 2, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 24:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 25:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 28:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 29:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 30:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 31:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 32:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 33:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 34:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 35:
					func_81(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, 0, joaat("WAPSCOP"), 1, 1);
					break;
			
				case 6:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP"), 2, 0);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPSCOP"), 3, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSUPP"), 2, 0);
					break;
			
				case 12:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 14:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 23:
					func_81(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPCLIP"), 3, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPCLIP"), 4, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPCLIP"), 5, 0);
					break;
			
				case 5:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPCLIP"), 6, 0);
					break;
			
				case 6:
					func_81(uParam0, 0, joaat("WAPFLSHLASR"), 1, 1);
					break;
			
				case 7:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 2, 0);
					break;
			
				case 8:
					func_81(uParam0, 0, joaat("WAPSCOP_2"), 1, 1);
					break;
			
				case 9:
					func_81(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPSCOP_2"), 2, 0);
					break;
			
				case 10:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPSCOP_2"), 3, 0);
					break;
			
				case 11:
					func_81(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPSCOP_2"), 4, 0);
					break;
			
				case 12:
					func_81(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBARREL"), 1, 1);
					break;
			
				case 13:
					func_81(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBARREL"), 2, 0);
					break;
			
				case 14:
					func_81(uParam0, 0, joaat("WAPSUPP"), 1, 1);
					break;
			
				case 15:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 2, 0);
					break;
			
				case 16:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSUPP"), 3, 0);
					break;
			
				case 17:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSUPP"), 4, 0);
					break;
			
				case 18:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSUPP"), 5, 0);
					break;
			
				case 19:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSUPP"), 6, 0);
					break;
			
				case 20:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSUPP"), 7, 0);
					break;
			
				case 21:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSUPP"), 8, 0);
					break;
			
				case 22:
					func_81(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSUPP"), 9, 0);
					break;
			
				case 23:
					func_81(uParam0, 0, joaat("WAPGRIP"), 1, 1);
					break;
			
				case 24:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGRIP"), 2, 0);
					break;
			
				case 25:
					func_81(uParam0, 0, joaat("GUN_ROOT"), 1, 1);
					break;
			
				case 26:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("GUN_ROOT"), 2, 0);
					break;
			
				case 27:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("GUN_ROOT"), 3, 0);
					break;
			
				case 28:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("GUN_ROOT"), 4, 0);
					break;
			
				case 29:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("GUN_ROOT"), 5, 0);
					break;
			
				case 30:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("GUN_ROOT"), 6, 0);
					break;
			
				case 31:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("GUN_ROOT"), 7, 0);
					break;
			
				case 32:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("GUN_ROOT"), 8, 0);
					break;
			
				case 33:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("GUN_ROOT"), 9, 0);
					break;
			
				case 34:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("GUN_ROOT"), 10, 0);
					break;
			
				case 35:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("GUN_ROOT"), 11, 0);
					break;
			
				case 36:
					func_81(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("GUN_ROOT"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSUPP"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 2, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				
					case 7:
						func_81(uParam0, joaat("COMPONENT_HEAVYRIFLE_CAMO1"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
						break;
				
					case 1:
						func_81(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
						break;
				
					case 2:
						func_81(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPSCOP"), 1, 0);
						break;
				
					case 3:
						func_81(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPSCOP"), 2, 0);
						break;
				
					case 4:
						func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFLSHLASR"), 1, 0);
						break;
				
					case 5:
						func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 1, 0);
						break;
				
					case 6:
						func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_AR_FLSH_REH"), joaat("WAPFLSHLASR"), 1, 0);
					break;
			
				case 3:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSUPP"), 1, 0);
					break;
			
				case 4:
					func_81(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGRIP"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar38 = func_62(iParam1, &iVar0);
			
				if (iVar38 > 0 && iParam2 >= 0 && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 1, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 2, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 3, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 4, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 5, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 6, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 7, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 8, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 9, 0);
							break;
					
						case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 10, 0);
							break;
					}
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar38 = func_62(iParam1, &iVar0);
			
				if (iVar38 > 0 && iParam2 >= 0 && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case joaat("COMPONENT_BAT_VARMOD_XM3"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 1, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 2, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 3, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 4, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 5, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 6, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 7, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 8, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 9, 0);
							break;
					
						case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
							func_81(uParam0, iVar0[iParam2], joaat("GUN_ROOT"), 10, 0);
							break;
					}
				}
			}
			break;
	
		case joaat("WEAPON_RPG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_81(uParam0, joaat("COMPONENT_RPG_VARMOD_TVR"), joaat("GUN_ROOT"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_BATTLERIFLE"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_BATTLERIFLE_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_BATTLERIFLE_CLIP_02"), joaat("WAPCLIP"), 2, 0);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSUPP"), 3, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_STUNGUN_MP"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_STUNGUN_VARMOD_BAIL"), joaat("GUN_ROOT"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_STRICKLER"):
			switch (iParam2)
			{
				case 0:
					func_81(uParam0, joaat("COMPONENT_STRICKLER_CLIP_01"), joaat("WAPCLIP"), 1, 1);
					break;
			
				case 1:
					func_81(uParam0, joaat("COMPONENT_STRICKLER_SIGHT"), joaat("WAPSCOP"), 2, 1);
					break;
			
				case 2:
					func_81(uParam0, joaat("COMPONENT_STRICKLER_FLSH"), joaat("WAPFLSHLASR"), 3, 1);
					break;
			}
			break;
	
		default:
			iVar51 = func_82(iParam1, &uVar54);
		
			if (iVar51 != -1)
			{
				for (iVar52 = 0; iVar52 < EXTRAMETADATA::GET_NUM_DLC_WEAPON_COMPONENTS(iVar51); iVar52 = iVar52 + 1)
				{
					if (EXTRAMETADATA::GET_DLC_WEAPON_COMPONENT_DATA(iVar51, iVar52, &iVar93))
					{
						if (!func_61(iVar93.f_3))
						{
							if (iVar93 == joaat("WAPCLIP") || iVar93 == joaat("WAPCLIP_2"))
								iVar40 = iVar40 + 1;
							else if (iVar93 == joaat("WAPFLSHLASR") || iVar93 == joaat("WAPFLSHLASR_2"))
								iVar41 = iVar41 + 1;
							else if (iVar93 == joaat("WAPSCOP") || iVar93 == joaat("WAPSCOP_2"))
								iVar42 = iVar42 + 1;
							else if (iVar93 == joaat("WAPRAIL") || iVar93 == joaat("WAPRAIL_2"))
								iVar43 = iVar43 + 1;
							else if (iVar93 == joaat("WAPGRIP") || iVar93 == joaat("WAPGRIP_2"))
								iVar44 = iVar44 + 1;
							else if (iVar93 == joaat("WAPSUPP") || iVar93 == joaat("WAPSUPP_2"))
								iVar45 = iVar45 + 1;
							else if (iVar93 == 1731751835)
								iVar46 = iVar46 + 1;
							else if (iVar93 == joaat("GUN_ROOT"))
								iVar47 = iVar47 + 1;
							else if (iVar93 == joaat("GUN_GRIPR"))
								iVar48 = iVar48 + 1;
							else if (iVar93 == joaat("WAPBARREL"))
								iVar49 = iVar49 + 1;
							else
								iVar50 = iVar50 + 1;
						
							if (iVar53 == iParam2)
							{
								if (iVar93 == joaat("WAPCLIP") || iVar93 == joaat("WAPCLIP_2"))
									iVar39 = iVar40;
								else if (iVar93 == joaat("WAPFLSHLASR") || iVar93 == joaat("WAPFLSHLASR_2"))
									iVar39 = iVar41;
								else if (iVar93 == joaat("WAPSCOP") || iVar93 == joaat("WAPSCOP_2"))
									iVar39 = iVar42;
								else if (iVar93 == joaat("WAPRAIL") || iVar93 == joaat("WAPRAIL_2"))
									iVar39 = iVar43;
								else if (iVar93 == joaat("WAPGRIP") || iVar93 == joaat("WAPGRIP_2"))
									iVar39 = iVar44;
								else if (iVar93 == joaat("WAPSUPP") || iVar93 == joaat("WAPSUPP_2"))
									iVar39 = iVar45;
								else if (iVar93 == 1731751835)
									iVar39 = iVar46;
								else if (iVar93 == joaat("GUN_ROOT"))
									iVar39 = iVar47;
								else if (iVar93 == joaat("GUN_GRIPR"))
									iVar39 = iVar48;
								else if (iVar93 == joaat("WAPBARREL"))
									iVar39 = iVar49;
								else
									iVar39 = iVar50;
							
								func_81(uParam0, iVar93.f_3, iVar93, iVar39, iVar93.f_1);
							}
						
							iVar53 = iVar53 + 1;
						}
					}
				}
			}
			break;
	}

	if (bParam3)
		uParam0->f_2 = func_29(iParam1, *uParam0);

	return uParam0->f_4 != 989182658;
}

int func_29(int iParam0, int iParam1) // Position - 0x6C94
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar43;
	int iVar65;
	int iVar66;
	var uVar67;
	var uVar106;
	var uVar128;
	var uVar144;
	float fVar148;

	iVar0 = 0;
	fVar1 = 2.5f;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
	
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 155;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 729;
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = 18600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = 159;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 735;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 14500;
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 165;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 185;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 730;
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = 15800;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 137;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 190;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 549;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 775;
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = 15100;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 134;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 210;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 549;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 815;
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = 19300;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 159;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 565;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 810;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = 14400;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 105;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 132;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 150;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 815;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = 17900;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 124;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 159;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 812;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = 16500;
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 145;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 450;
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = 15600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 126;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 129;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 559;
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = 14000;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 975;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = 16900;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 139;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 150;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 225;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 899;
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 559;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 975;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 920;
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = 13000;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 999;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 128;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 185;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = &func_1;
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = 17600;
						break;
				}
			
				if (func_56())
					iVar0 = 0;
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						break;
				}
			
				if (func_56())
					iVar0 = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = 20000;
						break;
				}
			
				if (func_56())
					iVar0 = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = 13700;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = 3612;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1020;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 5000;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 1760;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = 17200;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 710;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4800;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = 12000;
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = 4900;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = 5600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = 5500;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = 5200;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = 4600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = 4700;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = 4800;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = 4300;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = 4000;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 108;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = 9950;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 11350;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = 16600;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 29;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = 9150;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 13900;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 108;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = 9975;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2525;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 11550;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = 18000;
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4840;
						break;
				}
				break;
		
			default:
				iVar2 = func_82(iParam0, &uVar4);
			
				if (iVar2 != -1)
				{
					for (iVar3 = 0; iVar3 < EXTRAMETADATA::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2); iVar3 = iVar3 + 1)
					{
						if (EXTRAMETADATA::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &uVar43))
						{
							if (!func_61(uVar43.f_3))
							{
								if (uVar43.f_3 == iParam1)
								{
									fVar1 = 1f;
								
									if (!func_54(iParam1))
										uVar43.f_5 = -1;
								
									if (uVar43.f_5 == -1)
										iVar0 = -1;
									else
										iVar0 = uVar43.f_5;
								
									if (iParam0 == joaat("WEAPON_HAMMER"))
										if (func_56())
											iVar0 = 0;
								}
							}
						}
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
	
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 9175;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2812 /* Tunable: WEAPONADDON_PISTOL_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1675;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4030 /* Tunable: WEAPONADDON_PISTOL_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 12050;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4031 /* Tunable: WEAPONADDON_PISTOL_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11160 /* Tunable: LUXE1_ADDONSPISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4092);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21009 /* Tunable: GR_WEAPON_UPGRADES_PISTOL_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_20907 /* Tunable: LOW1_MACHINEPISTOL_EXTENDED_CLIP */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2813 /* Tunable: WEAPONADDON_COMBATPISTOL_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1825;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4032 /* Tunable: WEAPONADDON_COMBATPISTOL_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_20908 /* Tunable: LOW1_MACHINEPISTOL_SUPPRESSOR */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4033 /* Tunable: WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12508 /* Tunable: WEAPONADDONCOMBAT_PISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4089 /* Tunable: WEAPONADDON_COMBATPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 9400;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2815 /* Tunable: WEAPONADDON_APPISTOL_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1975;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4034 /* Tunable: WEAPONADDON_APPISTOL_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12200;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4035 /* Tunable: WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11159 /* Tunable: LUXE1_ADDONSAP_PISTOL_GILDED_GUN_METAL_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4085 /* Tunable: WEAPONADDON_APPPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31583 /* Tunable: FIXER_THE_STUDIO_FINISH */;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 9325;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2816 /* Tunable: WEAPONADDON_MICROSMG_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1900;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4038 /* Tunable: WEAPONADDON_MICROSMG_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10800;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4040 /* Tunable: WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12150;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4039 /* Tunable: WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11163 /* Tunable: LUXE1_ADDONSMICRO_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4091 /* Tunable: WEAPONADDON_MICROSMG_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31582 /* Tunable: FIXER_THE_WEED_FINISH */;
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_FRN"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 9475;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2817 /* Tunable: WEAPONADDON_SMG_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = Global_262145.f_16620 /* Tunable: ADDONS_SMG_DRUM_MAGAZINE */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2050;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4041 /* Tunable: WEAPONADDON_SMG_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 10825;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4043 /* Tunable: WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12250;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4042 /* Tunable: WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11162 /* Tunable: LUXE1_ADDONSSMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4096 /* Tunable: WEAPONADDON_SMG_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21010 /* Tunable: GR_WEAPON_UPGRADES_SMG_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 9550;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2819 /* Tunable: WEAPONADDON_ASSAULTRIFLE_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16615 /* Tunable: ADDONS_ASSAULT_RIFLE_DRUM_MAGAZINE */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4200;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4051 /* Tunable: WEAPONADDON_ASSRIFLE_GRIP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2125;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4048 /* Tunable: WEAPONADDON_ASSRIFLE_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10850;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4050 /* Tunable: WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12300;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4049 /* Tunable: WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11156 /* Tunable: LUXE1_KIT_ASSAULT_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4086 /* Tunable: WEAPONADDON_ASSAULTRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21012 /* Tunable: GR_WEAPON_UPGRADES_ASSAULT_RIFLE_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 9775;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2820 /* Tunable: WEAPONADDON_CARBINERIFLE_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16614 /* Tunable: ADDONS_CARBINE_RIFLE_BOX_MAGAZINE */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4350;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4055 /* Tunable: WEAPONADDON_CARBINERRIFLE_GRIP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2350;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4052 /* Tunable: WEAPONADDON_CARBINERRIFLE_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10900;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4054 /* Tunable: WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12450;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4053 /* Tunable: WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11158 /* Tunable: LUXE1_ADDONSCARBINE_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4087 /* Tunable: WEAPONADDON_CARBINERILE_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21013 /* Tunable: GR_WEAPON_UPGRADES_CARBINE_RIFLE_MK_II */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 9925;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2821 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2425;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4056 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 10950;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4058 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12500;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4057 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11157 /* Tunable: LUXE1_ADDONSADVANCED_RIFLE_GILDED_GUN_METAL_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4084 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 9850;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2822 /* Tunable: WEAPONADDON_MG_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 10925;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4059 /* Tunable: WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12509 /* Tunable: WEAPONADDONMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4090 /* Tunable: WEAPONADDON_MG_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 10000;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2823 /* Tunable: WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4425;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4074 /* Tunable: WEAPONADDON_COMBATMG_GRIP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10975;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4075 /* Tunable: WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12510 /* Tunable: WEAPONADDONCOMBAT_MG_ETCHED_GUN_METAL_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4088 /* Tunable: WEAPONADDON_COMBATMG_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21011 /* Tunable: GR_WEAPON_UPGRADES_COMBAT_MG_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1750;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4060 /* Tunable: WEAPONADDON_PUMPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 12350;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4061 /* Tunable: WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12505 /* Tunable: WEAPONADDONPUMP_SHOTGUN_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4094 /* Tunable: WEAPONADDON_PUMPSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22676 /* Tunable: GO_WEAPON_UPGRADES_PUMP_SHOTGUN_MK_II */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31580 /* Tunable: FIXER_THE_BONE_FINISH */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 9625;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2824 /* Tunable: WEAPONADDON_ASSAULTSHOTGUN_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4064 /* Tunable: WEAPONADDON_ASSHOTGUN_GRIP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2200;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4065 /* Tunable: WEAPONADDON_ASSHOTGUN_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12350;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4066 /* Tunable: WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE */);
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 12400;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4067 /* Tunable: WEAPONADDON_SNIPER_SCOPE1_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4068 /* Tunable: WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12050;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4069 /* Tunable: WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11165 /* Tunable: LUXE1_ADDONSSNIPER_RIFLE_ETCHED_WOOD_GRIP_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4097 /* Tunable: WEAPONADDON_SNIPERRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 99;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4070 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE1_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4071 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21014 /* Tunable: GR_WEAPON_UPGRADES_HEAVY_SNIPER_MK_II */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4500;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4076 /* Tunable: WEAPONADDON_GRENADELAUNCHER_GRIP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2500;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4072 /* Tunable: WEAPONADDON_GRENADELAUNCHER_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 11000;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4073 /* Tunable: WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2818 /* Tunable: WEAPONADDON_ASSAULTSMG_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4044 /* Tunable: WEAPONADDON_ASSSMG_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4047 /* Tunable: WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4045 /* Tunable: WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12506 /* Tunable: WEAPONADDONASSAULT_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4046);
						break;
				}
				break;
		
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						iVar0 = Global_262145.f_7219 /* Tunable: VALENTINE_GUSENBERG_WEAPONMOD_EXTENDED_CLIP */;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7917 /* Tunable: DLC_WEAPON_ADDON_SNS_PISTOL_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12507 /* Tunable: WEAPONADDONSNS_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22681 /* Tunable: GO_WEAPON_UPGRADES_SNS_PISTOL_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = Global_262145.f_7921 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = Global_262145.f_16617 /* Tunable: ADDONS_SPECIAL_CARBINE_DRUM_MAGAZINE */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7924 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_7920 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_7918 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7923 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_GRIP */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12511 /* Tunable: WEAPONADDONSPECIAL_CARBINE_ETCHED_GUN_METAL_FINISH */;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22677 /* Tunable: GO_WEAPON_UPGRADES_SPECIAL_CARBINE_MK_II */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7922 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_7925 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7919 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_7944 /* Tunable: LUXE1_ADDONSHEAVY_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_7928 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7930 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_7926 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_7927 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7929 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_GRIP */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = Global_262145.f_12512 /* Tunable: WEAPONADDONBULLPUP_RIFLE_GILDED_GUN_METAL_FINISH */;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22680 /* Tunable: GO_WEAPON_UPGRADES_BULLPUP_RIFLE_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_8402 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_8403 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR */;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						iVar0 = Global_262145.f_8991 /* Tunable: LTS_HEAVY_SHOTGUN_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						iVar0 = Global_262145.f_16621 /* Tunable: ADDONS_HEAVY_SHOTGUN_DRUM_MAGAZINE */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8992 /* Tunable: LTS_HEAVY_SHOTGUN_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_8993 /* Tunable: LTS_HEAVY_SHOTGUN_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8994 /* Tunable: LTS_HEAVY_SHOTGUN_GRIP */;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_8997 /* Tunable: LTS_MARKSMAN_RIFLE_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8998 /* Tunable: LTS_MARKSMAN_RIFLE_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_9000 /* Tunable: LTS_MARKSMAN_RIFLE_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_9001 /* Tunable: LTS_MARKSMAN_RIFLE_GRIP */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_9002 /* Tunable: LUXE1_ADDONSMARKSMAN_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22678 /* Tunable: GO_WEAPON_UPGRADES_MARKSMAN_RIFLE_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_15178 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_GRIP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4062 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4063 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */);
						break;
				}
			
				if (func_56())
					iVar0 = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_2814 /* Tunable: WEAPONADDON_PISTOL50_CLIP_02_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4036 /* Tunable: WEAPONADDON_DLCPISTOL50_FLSH_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4037 /* Tunable: WEAPONADDON_DLCPISTOL50_SUPP_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11161 /* Tunable: LUXE1_ADDONSPISTOL_50_PLATINUM_PEARL_DELUXE_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4093 /* Tunable: WEAPONADDON_PISTOL50_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				}
			
				if (func_56())
					iVar0 = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11164 /* Tunable: LUXE1_ADDONSSAWED_OFF_SHOTGUN_GILDED_GUN_METAL_FINISH */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4095 /* Tunable: WEAPONADDON_SAWNOFFSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = Global_262145.f_11485 /* Tunable: LUXE2_THE_PIMP_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4098 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PIMP_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = Global_262145.f_11486 /* Tunable: LUXE2_THE_BALLAS_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4099 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_BALLAS_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = Global_262145.f_11487 /* Tunable: LUXE2_THE_HUSTLER_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4100 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HUSTLER_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = Global_262145.f_11488 /* Tunable: LUXE2_THE_ROCK_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4101 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_ROCK_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = Global_262145.f_11489 /* Tunable: LUXE2_THE_HATER_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4102 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HATER_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = Global_262145.f_11490 /* Tunable: LUXE2_THE_LOVER_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4103 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_LOVER_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = Global_262145.f_11491 /* Tunable: LUXE2_THE_PLAYER_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4104 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PLAYER_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = Global_262145.f_11492 /* Tunable: LUXE2_THE_KING_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4105 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_KING_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = Global_262145.f_11493 /* Tunable: LUXE2_THE_VAGOS_KNUCKLE_DUSTER */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4106 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_VAGOS_ENGRAVED_EXPENDITURE_TUNABLE */);
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_11509 /* Tunable: LOWRIDER_MACHINEPISTOL_CLIP02 */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4107);
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = Global_262145.f_16619 /* Tunable: ADDONS_MACHINE_PISTOL_DRUM_MAGAZINE */;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_11510 /* Tunable: LOWRIDER_MACHINEPISTOL_SUPP */;
						iVar0 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iVar0) * Global_262145.f_4108);
						break;
				}
				break;
		
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						iVar0 = Global_262145.f_13336 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_BOSS_VARIANT */;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						iVar0 = Global_262145.f_13337 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_GOON_VARIANT */;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						iVar0 = Global_262145.f_13394 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_BOSS_VARIANT */;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						iVar0 = Global_262145.f_13335 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_GOON_VARIANT */;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22679 /* Tunable: GO_WEAPON_UPGRADES_HEAVY_REVOVLER_MK_II */;
						break;
				}
				break;
		
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_15115 /* Tunable: ADDONS_COMPACT_RIFLE_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16616 /* Tunable: ADDONS_COMPACT_RIFLE_DRUM_MAGAZINE */;
						break;
				}
				break;
		
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_18945 /* Tunable: DLC_WEAPON_ADDON_MINI_SMG_EXTENDED_CLIP */;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						iVar0 = Global_262145.f_20903 /* Tunable: LUXE1_COMBATPDW_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						iVar0 = Global_262145.f_16618 /* Tunable: ADDONS_PDW_DRUM_MAGAZINE */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_20904 /* Tunable: LUXE1_COMBATPDW_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_20906 /* Tunable: LUXE1_COMBATPDW_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_20905 /* Tunable: LUXE1_COMBATPDW_GRIP */;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21015 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21016 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21017 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MAG_FULL_METAL_JACKET_ROUNDS */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21018 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21019 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21020 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_FLASHLIGHTS_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21021 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_SCOPES_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21022 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_SCOPES_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21023 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_SCOPES_MEDIUM_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21024 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_SCOPES_LARGE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_21025 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21026 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_MUZZLE_BRAKE_1 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21027 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_MUZZLE_BRAKE_2 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21028 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_MUZZLE_BRAKE_3 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21029 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_MUZZLE_BRAKE_4 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21030 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_MUZZLE_BRAKE_5 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21031 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_MUZZLE_BRAKE_6 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21032 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_MUZ_MUZZLE_BRAKE_7 */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21033 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_GRIP */;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_21034 /* Tunable: UPGRD_WEAP_MOD_ASSAULT_RIFLE_MK2_BARRELS_HVY_BARREL */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21035 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21036 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21037 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MAG_FULL_METAL_JACKET_ROUNDS */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21038 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21039 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21040 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_FLASHLIGHTS_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21041 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_SCOPES_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21042 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_SCOPES_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21043 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_SCOPES_MEDIUM_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21044 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_SCOPES_LARGE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_21045 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21046 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_MUZZLE_BRAKE_1 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21047 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_MUZZLE_BRAKE_2 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21048 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_MUZZLE_BRAKE_3 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21049 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_MUZZLE_BRAKE_4 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21050 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_MUZZLE_BRAKE_5 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21051 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_MUZZLE_BRAKE_6 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21052 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_MUZ_MUZZLE_BRAKE_7 */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21053 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_GRIP */;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_21054 /* Tunable: UPGRD_WEAP_MOD_CARBINE_RIFLE_MK2_BARRELS_HVY_BARREL */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21055 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21056 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21057 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MAG_FULL_METAL_JACKET_ROUNDS */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21058 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21059 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21060 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_SCOPES_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21061 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_SCOPES_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21062 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_SCOPES_MEDIUM_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21063 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_SCOPES_LARGE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21064 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MUZ_MUZZLE_BRAKE_1 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21065 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MUZ_MUZZLE_BRAKE_2 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21066 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MUZ_MUZZLE_BRAKE_3 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21067 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MUZ_MUZZLE_BRAKE_4 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21068 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MUZ_MUZZLE_BRAKE_5 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21069 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MUZ_MUZZLE_BRAKE_6 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21070 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_MUZ_MUZZLE_BRAKE_7 */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21071 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_GRIP */;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_21072 /* Tunable: UPGRD_WEAP_MOD_COMB_MG_MK2_BARRELS_HVY_BARREL */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21073 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21074 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21076 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MAG_FULL_METAL_JACKET_ROUNDS */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21077 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_21075 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MAG_EXPLOSIVE_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_21078 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_SCOPES_ZOOM_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_21079 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_SCOPES_NIGHT_VISION_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_21080 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_SCOPES_THERMAL_VISION_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_21081 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MUZ_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_21082 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MUZ_HVY_MUZZLE_BRAKE_1 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_21083 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_MUZ_HVY_MUZZLE_BRAKE_2 */;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_21084 /* Tunable: UPGRD_WEAP_MOD_HVY_SNIPER_MK2_BARRELS_HVY_BARREL */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21085 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21087 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_MAG_HOLLOW_POINT_ROUNDS */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21086 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_MAG_FULL_METAL_JACKET_ROUNDS */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21088 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21089 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_21090 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_FLASHLIGHTS_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_21091 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_FLASHLIGHTS_RAIL_MOUNT */;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_21092 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_MUZ_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_21093 /* Tunable: UPGRD_WEAP_MOD_PISTOL_MK2_MUZ_COMPENSATOR */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21094 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21096 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MAG_HOLLOW_POINT_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21095 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MAG_FULL_METAL_JACKET_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21097 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21098 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21099 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_FLASHLIGHTS_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_21100 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_SCOPES_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_21101 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_SCOPES_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_21102 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_SCOPES_MEDIUM_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21103 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21104 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_MUZZLE_BRAKE_1 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21105 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_MUZZLE_BRAKE_2 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21106 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_MUZZLE_BRAKE_3 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21107 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_MUZZLE_BRAKE_4 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21108 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_MUZZLE_BRAKE_5 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21109 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_MUZZLE_BRAKE_6 */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21110 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_MUZ_MUZZLE_BRAKE_7 */;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_21111 /* Tunable: UPGRD_WEAP_MOD_SMG_MK2_BARRELS_HVY_BARREL */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22708 /* Tunable: UPGRD_WEAP_MOD_PUMPSHOTGUN_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_22709 /* Tunable: UPGRD_WEAP_MOD_PUMPSHOTGUN_MK2_MAG_EXPLOSIVE_ROUNDS */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22707 /* Tunable: UPGRD_WEAP_MOD_PUMPSHOTGUN_MK2_MAG_HOLLOW_POINT_ROUNDS */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22706 /* Tunable: UPGRD_WEAP_MOD_PUMPSHOTGUN_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22735 /* Tunable: H2_PUMP_SHOTGUN_MK_II_MOD_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22736 /* Tunable: H2_PUMP_SHOTGUN_MK_II_MOD_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22737 /* Tunable: H2_PUMP_SHOTGUN_MK_II_MOD_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22738 /* Tunable: H2_PUMP_SHOTGUN_MK_II_MOD_MEDIUM_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_22739 /* Tunable: H2_PUMP_SHOTGUN_MK_II_MOD_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_22740 /* Tunable: H2_PUMP_SHOTGUN_MK_II_MOD_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22710 /* Tunable: UPGRD_WEAP_MOD_SPECIALCARBINE_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22714 /* Tunable: UPGRD_WEAP_MOD_SPECIALCARBINE_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22712 /* Tunable: UPGRD_WEAP_MOD_SPECIALCARBINE_MK2_MAG_FMJ_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22713 /* Tunable: UPGRD_WEAP_MOD_SPECIALCARBINE_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22711 /* Tunable: UPGRD_WEAP_MOD_SPECIALCARBINE_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22741 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22742 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22743 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22744 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_LARGE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_22745 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22746 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_FLAT_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22747 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_TACTICAL_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22748 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_FAT_END_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22749 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_PRECISION_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22750 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_HEAVY_DUTY_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22751 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_SLANTED_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22752 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_SPLIT_END_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22753 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_GRIP */;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_22754 /* Tunable: H2_SPECIAL_CARBINE_MK_II_MOD_HEAVY_BARREL */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23618 /* Tunable: UPGRD_WEAP_MOD_SNSPISTOL_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22730 /* Tunable: UPGRD_WEAP_MOD_SNSPISTOL_MK2_MAG_FMJ_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22732 /* Tunable: UPGRD_WEAP_MOD_SNSPISTOL_MK2_MAG_HOLLOW_POINT_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22731 /* Tunable: UPGRD_WEAP_MOD_SNSPISTOL_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22729 /* Tunable: UPGRD_WEAP_MOD_SNSPISTOL_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_22786 /* Tunable: H2_SNS_PISTOL_MK_II_MOD_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_22787 /* Tunable: H2_SNS_PISTOL_MK_II_MOD_MOUNTED_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_22788 /* Tunable: H2_SNS_PISTOL_MK_II_MOD_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_22789 /* Tunable: H2_SNS_PISTOL_MK_II_MOD_COMPENSATOR */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22715 /* Tunable: UPGRD_WEAP_MOD_MARKSMANRIFLE_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22719 /* Tunable: UPGRD_WEAP_MOD_MARKSMANRIFLE_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22717 /* Tunable: UPGRD_WEAP_MOD_MARKSMANRIFLE_MK2_MAG_FMJ_ROUNDS */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22718 /* Tunable: UPGRD_WEAP_MOD_MARKSMANRIFLE_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22716 /* Tunable: UPGRD_WEAP_MOD_MARKSMANRIFLE_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22755 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22756 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_22757 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_22758 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22759 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_FLAT_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22760 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_TACTICAL_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22761 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_FAT_END_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22762 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_PRECISION_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22763 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_HEAVY_DUTY_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22764 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_SLANTED_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22765 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_SPLIT_END_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22766 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_GRIP */;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_22767 /* Tunable: H2_MARKSMAN_RIFLE_MK_II_MOD_HEAVY_BARREL */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22720 /* Tunable: UPGRD_WEAP_MOD_REVOLVER_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22721 /* Tunable: UPGRD_WEAP_MOD_REVOLVER_MK2_MAG_FMJ_ROUNDS */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22723 /* Tunable: UPGRD_WEAP_MOD_REVOLVER_MK2_MAG_HOLLOW_POINT_ROUNDS */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22722 /* Tunable: UPGRD_WEAP_MOD_REVOLVER_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22768 /* Tunable: H2_HEAVY_REVOLVER_MK_II_MOD_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_22769 /* Tunable: H2_HEAVY_REVOLVER_MK_II_MOD_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_22770 /* Tunable: H2_HEAVY_REVOLVER_MK_II_MOD_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_22771 /* Tunable: H2_HEAVY_REVOLVER_MK_II_MOD_COMPENSATOR */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22724 /* Tunable: UPGRD_WEAP_MOD_BULLPUPRIFLE_MK2_MAG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22728 /* Tunable: UPGRD_WEAP_MOD_BULLPUPRIFLE_MK2_MAG_ARMOR_PIERCING_ROUNDS */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22726 /* Tunable: UPGRD_WEAP_MOD_BULLPUPRIFLE_MK2_MAG_FMJ_ROUNDS */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22727 /* Tunable: UPGRD_WEAP_MOD_BULLPUPRIFLE_MK2_MAG_INCENDIARY_ROUNDS */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22725 /* Tunable: UPGRD_WEAP_MOD_BULLPUPRIFLE_MK2_MAG_TRACER_ROUNDS */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_22772 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_22773 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_HOLOGRAPHIC_SIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_22774 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_SMALL_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_22775 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_MEDIUM_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_22785 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_HEAVY_BARREL */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_22776 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_22777 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_FLAT_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_22778 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_TACTICAL_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_22779 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_FAT_END_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_22780 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_PRECISION_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_22781 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_HEAVY_DUTY_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_22782 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_SLANTED_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_22783 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_SPLIT_END_MUZZLE_BRAKE */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_22784 /* Tunable: H2_BULLPUP_RIFLE_MK_II_MOD_GRIP */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21143 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21144 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21145 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21146 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21147 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21148 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21149 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21150 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21151 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21152 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21153 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
		
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_28328 /* Tunable: ARCADE_CERAMIC_PISTOL_MOD_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						iVar0 = Global_262145.f_28329 /* Tunable: ARCADE_CERAMIC_PISTOL_MOD_SUPRESSOR */;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30286 /* Tunable: IH_COMBAT_SHOTGUN_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30287 /* Tunable: IH_COMBAT_SHOTGUN_SUPPRESSOR */;
						break;
				}
				break;
		
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_30273 /* Tunable: IH_MILITARY_RIFLE_DEFAULT_CLIP */;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_30274 /* Tunable: IH_MILITARY_RIFLE_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_30275 /* Tunable: IH_MILITARY_RIFLE_IRON_SIGHTS */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_30276 /* Tunable: IH_MILITARY_RIFLE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30277 /* Tunable: IH_MILITARY_RIFLE_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30278 /* Tunable: IH_MILITARY_RIFLE_SUPPRESSOR */;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_31549 /* Tunable: FIXER_HEAVY_RIFLE_DEFAULT_CLIP */;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_31550 /* Tunable: FIXER_HEAVY_RIFLE_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						iVar0 = Global_262145.f_31581 /* Tunable: FIXER_THE_FAMILIES_FINISH */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_31555 /* Tunable: FIXER_HEAVY_RIFLE_GRIP */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_31553 /* Tunable: FIXER_HEAVY_RIFLE_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_31552 /* Tunable: FIXER_HEAVY_RIFLE_SCOPE */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_31554 /* Tunable: FIXER_HEAVY_RIFLE_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_31551 /* Tunable: FIXER_HEAVY_RIFLE_IRON_SIGHTS */;
						break;
				}
				break;
		
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						iVar0 = *Global_262145.f_33098 /* Tunable: SU22_SERVICE_CARBINE_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						iVar0 = *Global_262145.f_33100 /* Tunable: SU22_SERVICE_CARBINE_FLASHLIGHT */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = *Global_262145.f_33101 /* Tunable: SU22_SERVICE_CARBINE_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = *Global_262145.f_33099 /* Tunable: SU22_SERVICE_CARBINE_GRIP */;
						break;
				}
				break;
		
			case joaat("WEAPON_KNIFE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
						iVar0 = *Global_262145.f_34105 /* Tunable: XM22_KNIFE_EYES */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
						iVar0 = *Global_262145.f_34109 /* Tunable: XM22_KNIFE_SPATTER */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
						iVar0 = *Global_262145.f_34106 /* Tunable: XM22_KNIFE_FLAMES */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
						iVar0 = *Global_262145.f_34107 /* Tunable: XM22_KNIFE_LIGHTNING */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
						iVar0 = *Global_262145.f_34110 /* Tunable: XM22_KNIFE_PILLS */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
						iVar0 = *Global_262145.f_34108 /* Tunable: XM22_KNIFE_SNAKESKIN */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
						iVar0 = *Global_262145.f_34112 /* Tunable: XM22_KNIFE_LUCHA_LIBRE */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
						iVar0 = *Global_262145.f_34111 /* Tunable: XM22_KNIFE_TRIPPY */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
						iVar0 = *Global_262145.f_34113 /* Tunable: XM22_KNIFE_TEQUILYA */;
						break;
				
					case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
						iVar0 = *Global_262145.f_34114 /* Tunable: XM22_KNIFE_ORANGOTANG */;
						break;
				}
				break;
		
			case joaat("WEAPON_BAT"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BAT_VARMOD_XM3"):
						iVar0 = *Global_262145.f_34095 /* Tunable: XM22_BASEBALL_BAT_BLAGUEURS */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
						iVar0 = *Global_262145.f_34096 /* Tunable: XM22_BASEBALL_BAT_SPATTER */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
						iVar0 = *Global_262145.f_34098 /* Tunable: XM22_BASEBALL_BAT_BULLET_HOLES */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
						iVar0 = *Global_262145.f_34099 /* Tunable: XM22_BASEBALL_BAT_BURGER_SHOT */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
						iVar0 = *Global_262145.f_34100 /* Tunable: XM22_BASEBALL_BAT_CLUCKIN_BELL */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
						iVar0 = *Global_262145.f_34101 /* Tunable: XM22_BASEBALL_BAT_FATAL_INCURSION */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
						iVar0 = *Global_262145.f_34102 /* Tunable: XM22_BASEBALL_BAT_LUCHA_LIBRE */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
						iVar0 = *Global_262145.f_34103 /* Tunable: XM22_BASEBALL_BAT_TRIPPY */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
						iVar0 = *Global_262145.f_34104 /* Tunable: XM22_BASEBALL_BAT_TIE_DYE */;
						break;
				
					case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
						iVar0 = *Global_262145.f_34097 /* Tunable: XM22_BASEBALL_BAT_WALL */;
						break;
				}
				break;
		
			case joaat("WEAPON_PISTOLXM3"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_PISTOLXM3_SUPP"):
						iVar0 = *Global_262145.f_34078 /* Tunable: XM22_WM29_SUPPRESSOR */;
						break;
				}
				break;
		
			case joaat("WEAPON_TECPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TECPISTOL_CLIP_01"):
						iVar0 = *Global_262145.f_35598 /* Tunable: SU23_TACTICAL_SMG_DEFAULT_CLIP */;
						break;
				
					case joaat("COMPONENT_TECPISTOL_CLIP_02"):
						iVar0 = *Global_262145.f_35599 /* Tunable: SU23_TACTICAL_SMG_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = *Global_262145.f_35601 /* Tunable: SU23_TACTICAL_SMG_SUPPRESSOR */;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = *Global_262145.f_35600 /* Tunable: SU23_TACTICAL_SMG_SCOPE */;
						break;
				}
				break;
		
			case joaat("WEAPON_RPG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RPG_VARMOD_TVR"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_BATTLERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BATTLERIFLE_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_BATTLERIFLE_CLIP_02"):
						iVar0 = *Global_262145.f_35742 /* Tunable: XM23_BATTLE_RIFLE_MOD_EXTENDED_CLIP */;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = *Global_262145.f_35743 /* Tunable: XM23_BATTLE_RIFLE_MOD_SUPPRESSOR */;
						break;
				}
				break;
		
			case joaat("WEAPON_STUNGUN_MP"):
				switch (iParam1)
				{
					case joaat("COMPONENT_STUNGUN_VARMOD_BAIL"):
						iVar0 = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_STRICKLER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_STRICKLER_CLIP_01"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_STRICKLER_SIGHT"):
						iVar0 = 0;
						break;
				
					case joaat("COMPONENT_STRICKLER_FLSH"):
						iVar0 = 0;
						break;
				}
				break;
		
			default:
				iVar65 = func_82(iParam0, &uVar67);
			
				if (iVar65 != -1)
				{
					for (iVar66 = 0; iVar66 < EXTRAMETADATA::GET_NUM_DLC_WEAPON_COMPONENTS(iVar65); iVar66 = iVar66 + 1)
					{
						if (EXTRAMETADATA::GET_DLC_WEAPON_COMPONENT_DATA(iVar65, iVar66, &uVar106))
						{
							if (!func_61(uVar106.f_3))
							{
								if (uVar106.f_3 == iParam1)
								{
									fVar1 = 1f;
								
									if (uVar106.f_5 == -1)
										iVar0 = -1;
									else
										iVar0 = uVar106.f_5;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52())
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar144, func_50(iParam1, iParam0), 16);
		func_41(&uVar128, uVar144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_48(iParam0), func_47(iParam0), -1, false, false, 2);
	
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&uVar128))
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&uVar128), joaat("CATEGORY_WEAPON_MOD"), 1);
	}

	if (iVar0 > 0)
	{
		fVar148 = func_30(iParam0, &iVar0, fVar1);
		fVar148 != 1f;
	}

	return iVar0;
}

float func_30(int iParam0, var uParam1, float fParam2) // Position - 0xA8CE
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = 0f;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_52())
	{
		fVar1 = fVar1 + func_40();
		fVar0 = 1f - fVar1;
		*uParam1 = BUILTIN::ROUND(BUILTIN::TO_FLOAT(*uParam1) * fVar0);
		return fVar0;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		*uParam1 = BUILTIN::ROUND(BUILTIN::TO_FLOAT(*uParam1) * fParam2);

	if (!Global_80305)
	{
		if (*uParam1 != 0)
		{
			iVar2 = func_31(iParam0);
		
			if (iVar2 == 3)
				fVar1 = 0.1f;
			else if (iVar2 == 2)
				fVar1 = 0.15f;
			else if (iVar2 == 1)
				fVar1 = 0.25f;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = fVar1 + Static_53;
		fVar1 = fVar1 + func_40();
	}

	fVar0 = 1f - fVar1;
	*uParam1 = BUILTIN::ROUND(BUILTIN::TO_FLOAT(*uParam1) * fVar0);

	if (fVar0 < 0f)
	{
		fVar0 = 0f;
		*uParam1 = 0;
	}

	return fVar0;
}

int func_31(int iParam0) // Position - 0xA9AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar10;

	iVar0 = func_35();

	if (iParam0 == 0 || !func_34(iVar0))
		return -1;

	iVar1 = 7;

	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
	
		case joaat("GADGET_PARACHUTE"):
			break;
	
		case joaat("WEAPON_MICROSMG"):
			iVar1 = 1;
			break;
	
		case joaat("WEAPON_SMG"):
			iVar1 = 1;
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar1 = 3;
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar1 = 3;
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar1 = 3;
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar1 = 2;
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			iVar1 = 2;
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar1 = 2;
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
	
		case joaat("WEAPON_MG"):
			iVar1 = 4;
			break;
	
		case joaat("WEAPON_COMBATMG"):
			iVar1 = 4;
			break;
	
		case joaat("WEAPON_RPG"):
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
	
		case joaat("WEAPON_MINIGUN"):
			iVar1 = 5;
			break;
	
		case joaat("WEAPON_KNIFE"):
			break;
	
		case joaat("WEAPON_NIGHTSTICK"):
			break;
	
		case joaat("WEAPON_PETROLCAN"):
			break;
	
		case joaat("WEAPON_STUNGUN"):
			break;
	
		case joaat("WEAPON_APPISTOL"):
			iVar1 = 0;
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			iVar1 = 0;
			break;
	
		case joaat("WEAPON_PISTOL"):
			iVar1 = 0;
			break;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
	
		case joaat("WEAPON_GRENADE"):
			break;
	
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}

	if (iVar1 != 7)
	{
		switch (func_32(iVar1, iVar0))
		{
			case 1:
				return 3;
		
			case 2:
				return 2;
		
			case 3:
				return 1;
		}
	}
	else
	{
		uVar3 = 6;
		uVar3[0] = func_32(1, iVar0);
		uVar3[1] = func_32(3, iVar0);
		uVar3[2] = func_32(2, iVar0);
		uVar3[3] = func_32(4, iVar0);
		uVar3[4] = func_32(5, iVar0);
		uVar3[5] = func_32(0, iVar0);
		bVar10 = false;
	
		for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1)
		{
			if (uVar3[iVar2] < 3)
				bVar10 = true;
		}
	
		if (!bVar10)
			return 1;
	
		bVar10 = false;
	
		for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1)
		{
			if (uVar3[iVar2] < 2)
				bVar10 = true;
		}
	
		if (!bVar10)
			return 2;
	
		bVar10 = false;
	
		for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1)
		{
			if (uVar3[iVar2] < 1)
				bVar10 = true;
		}
	
		if (!bVar10)
			return 3;
	}

	return -1;
}

int func_32(int iParam0, int iParam1) // Position - 0xAC08
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}

	iVar4 = func_33(iVar0, iParam1);

	if (func_33(iVar1, iParam1) < iVar4)
		iVar4 = func_33(iVar1, iParam1);

	if (func_33(iVar2, iParam1) < iVar4)
		iVar4 = func_33(iVar2, iParam1);

	if (iVar3 != -1)
		if (func_33(iVar3, iParam1) < iVar4)
			iVar4 = func_33(iVar3, iParam1);

	return iVar4;
}

int func_33(int iParam0, int iParam1) // Position - 0xAD0C
{
	return Global_114931.f_19154[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_34(int iParam0) // Position - 0xAD28
{
	return iParam0 < 3;
}

int func_35() // Position - 0xAD34
{
	func_36();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_36() // Position - 0xAD4D
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_38(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_37(PLAYER::PLAYER_PED_ID());
		
			if (func_34(iVar0) && !func_155(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_34(Global_114931.f_2370.f_539.f_4321))
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

int func_37(var uParam0) // Position - 0xAE4A
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_38(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_38(int iParam0) // Position - 0xAE87
{
	if (func_34(iParam0))
		return func_39(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_39(int iParam0) // Position - 0xAEAC
{
	return Global_2339[iParam0 /*29*/];
}

var func_40() // Position - 0xAEBB
{
	return Global_102506.f_2131;
}

void func_41(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, int iParam13) // Position - 0xAECA
{
	char* sVar0;

	switch (MISC::GET_HASH_KEY(&uParam1))
	{
		case joaat("GSA_TYPE_R1"):
		case joaat("GSA_TYPE_R"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_R" /* GXT: Rounds */, 16);
			break;
	
		case joaat("GSA_TYPE_C1"):
		case joaat("GSA_TYPE_C"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_C" /* GXT: Cartridges */, 16);
			break;
	
		case joaat("GSA_TYPE_RO1"):
		case joaat("GSA_TYPE_RO"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_RO" /* GXT: Rockets */, 16);
			break;
	
		case joaat("GSA_TYPE_CH1"):
		case joaat("GSA_TYPE_CH"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_CH" /* GXT: Charges */, 16);
			break;
	
		case joaat("GSA_TYPE_G1"):
		case joaat("GSA_TYPE_G"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_G" /* GXT: Grenades */, 16);
			break;
	
		case joaat("GSA_TYPE_B1"):
		case joaat("GSA_TYPE_B"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_B" /* GXT: Bombs */, 16);
			break;
	
		case joaat("GSA_TYPE_FW1"):
		case joaat("GSA_TYPE_FW"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_FW" /* GXT: Fireworks */, 16);
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);

	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("MP_M_FREEMODE_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_FREEMODE_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_HA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 1:
			if (iParam5 == joaat("MP_M_FREEMODE_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_FREEMODE_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_CL_", 64);
		
			if (iParam7 == 12)
				TEXT_LABEL_APPEND_STRING(sParam0, "OUTFIT_", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam10 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
			}
			break;
	
		case 2:
			if (iParam5 == joaat("MP_M_FREEMODE_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_FREEMODE_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_TA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(sParam0, "WP_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
			break;
	
		case 4:
			if (iParam5 == Global_77319)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_77320)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_77321)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_77322)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_77323)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == func_46())
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam5 == func_45())
			{
				if (iParam7 == 40)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				else if (iParam7 == 2)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t2_v38", 64);
				else if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t1_v38", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t0_v38", 64);
			}
			else if (iParam5 == func_44())
			{
				if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t0_v4", 64);
			}
			else if (iParam5 == joaat("AVENGER3"))
			{
				if (iParam7 == 40)
					if (iParam13 == 61)
						TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t0_v0", 64);
					else if (iParam13 == 103)
						if (!func_42())
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v0", 64);
						else
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v1", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_AVENGER_t0_v33", 64);
			}
			else if (iParam7 == 67)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			}
			else if (iParam5 == 0)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
			
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_1_", 64);
					else if (iParam9 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_2_", 64);
					else if (iParam9 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_EXTRA_1_", 64);
				
					if (iParam10 == 5)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHROME_", 64);
					else if (iParam10 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CLASSIC_", 64);
					else if (iParam10 == 0)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALLIC_", 64);
					else if (iParam10 == 4)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALS_", 64);
					else if (iParam10 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_MATTE_", 64);
					else if (iParam10 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_PEARLESCENT_", 64);
					else if (iParam10 == 6)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHAMELEON_", 64);
					else if (iParam10 == 7)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_NONE_", 64);
				
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_6_", 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1) || MISC::GET_HASH_KEY(&uParam1) == joaat("CARNOTFOUND"))
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_INSURANCE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
						case joaat("PONY2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("TORNADO4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 52 && MISC::GET_HASH_KEY(&uParam1) == joaat("HSW_VEHMOD"))
			{
				sVar0 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || MISC::GET_HASH_KEY(sVar0) == joaat("CARNOTFOUND"))
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, sVar0, 64);
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case joaat("FCR2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "FCR2", 16);
						break;
				
					case joaat("DIABLOUS2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "DIABLOUS2", 16);
						break;
				
					case joaat("COMET3"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "COMET3", 16);
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam5), 16);
					
						if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
							return;
						break;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEU_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t0_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
						case joaat("PONY2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("TORNADO4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			
				if (iParam10 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
				}
			}
			break;
	}

	if (bParam12)
		TEXT_LABEL_APPEND_STRING(sParam0, "_CESP", 64);
}

bool func_42() // Position - 0xB5F3
{
	return func_43();
}

bool func_43() // Position - 0xB5FF
{
	return Global_1583772[189 /*143*/].f_66 == joaat("THRUSTER");
}

int func_44() // Position - 0xB617
{
	return joaat("MANCHEZ3");
}

int func_45() // Position - 0xB624
{
	return joaat("BRICKADE2");
}

int func_46() // Position - 0xB631
{
	return joaat("KOSATKA");
}

int func_47(int iParam0) // Position - 0xB63E
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
	}

	return -1;
}

int func_48(int iParam0) // Position - 0xB69D
{
	return func_49(iParam0);
}

int func_49(int iParam0) // Position - 0xB6AB
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
	
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		case joaat("WEAPON_APPISTOL"):
			return 3;
	
		case joaat("WEAPON_PISTOL50"):
			return 4;
	
		case joaat("WEAPON_SMG"):
			return 5;
	
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
	
		case joaat("WEAPON_MICROSMG"):
			return 7;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
	
		case joaat("WEAPON_MG"):
			return 12;
	
		case joaat("WEAPON_COMBATMG"):
			return 13;
	
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
	
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
	
		case joaat("WEAPON_GRENADE"):
			return 16;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
	
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
	
		case joaat("WEAPON_RPG"):
			return 27;
	
		case joaat("WEAPON_MINIGUN"):
			return 28;
	
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
	
		case joaat("WEAPON_STUNGUN"):
			return 31;
	
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
	
		case joaat("GADGET_PARACHUTE"):
			return 33;
	
		case joaat("WEAPON_KNIFE"):
			return 34;
	
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
	
		case joaat("WEAPON_HAMMER"):
			return 36;
	
		case joaat("WEAPON_BAT"):
			return 37;
	
		case joaat("WEAPON_CROWBAR"):
			return 38;
	
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
	
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
	
		case joaat("WEAPON_MOLOTOV"):
			return 41;
	
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
	
		case joaat("WEAPON_PETROLCAN"):
			return 43;
	
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
	
		case joaat("WEAPON_BOTTLE"):
			return 45;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
	
		case joaat("WEAPON_GUSENBERG"):
			return 50;
	
		case joaat("WEAPON_DAGGER"):
			return 51;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
	
		case joaat("WEAPON_FLAREGUN"):
			return 57;
	
		case joaat("WEAPON_MUSKET"):
			return 53;
	
		case joaat("WEAPON_FIREWORK"):
			return 54;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
	
		case joaat("WEAPON_PROXMINE"):
			return 60;
	
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
	
		case joaat("WEAPON_HATCHET"):
			return 58;
	
		case joaat("WEAPON_RAILGUN"):
			return 59;
	
		case joaat("WEAPON_COMBATPDW"):
			return 64;
	
		case joaat("WEAPON_KNUCKLE"):
			return 62;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
	
		case joaat("WEAPON_MACHETE"):
			return 65;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
	
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
	
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
	
		case joaat("WEAPON_REVOLVER"):
			return 70;
	
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
	
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
	
		case joaat("WEAPON_MINISMG"):
			return 73;
	
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
	
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
	
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
	
		case joaat("WEAPON_POOLCUE"):
			return 77;
	
		case joaat("WEAPON_WRENCH"):
			return 78;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
	
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
	
		case joaat("WEAPON_SMG_MK2"):
			return 5;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
	
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
	
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
	
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
	
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
	
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
	
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
	
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
	
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
	
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
	
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
	
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
	
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
	
		case joaat("WEAPON_PISTOLXM3"):
			return 95;
	
		case joaat("WEAPON_CANDYCANE"):
			return 96;
	
		case joaat("WEAPON_RAILGUNXM3"):
			return 97;
	
		case joaat("WEAPON_TECPISTOL"):
			return 98;
	
		case joaat("WEAPON_BATTLERIFLE"):
			return 99;
	
		case joaat("WEAPON_SNOWLAUNCHER"):
			return 100;
	
		case joaat("WEAPON_STUNROD"):
			return 101;
	
		case joaat("WEAPON_STRICKLER"):
			return 102;
	}

	return 0;
}

char* func_50(int iParam0, int iParam1) // Position - 0xBCFB
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar41;

	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	else if (iParam1 == joaat("WEAPON_BAT"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_BAT_VARMOD_XM3"):
				return "WCT_BAT_XM3";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
				return "WCT_BAT_XM301";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
				return "WCT_BAT_XM302";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
				return "WCT_BAT_XM303";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
				return "WCT_BAT_XM304";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
				return "WCT_BAT_XM305";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
				return "WCT_BAT_XM306";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
				return "WCT_BAT_XM307";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
				return "WCT_BAT_XM308";
		
			case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
				return "WCT_BAT_XM309";
		}
	}
	else if (iParam1 == joaat("WEAPON_KNIFE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
				return "WCT_KNIFE_XM3";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
				return "WCT_KNIFE_XM301";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
				return "WCT_KNIFE_XM302";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
				return "WCT_KNIFE_XM303";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
				return "WCT_KNIFE_XM304";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
				return "WCT_KNIFE_XM305";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
				return "WCT_KNIFE_XM306";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
				return "WCT_KNIFE_XM307";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
				return "WCT_KNIFE_XM308";
		
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
				return "WCT_KNIFE_XM309";
		}
	}

	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /* GXT: No Attachment */;
	
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
	
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /* GXT: Grip */;
	
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
	
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
	
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /* GXT: Scope */;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
	
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /* GXT: Advanced Scope */;
	
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
	
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
	
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
	
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
	
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
	
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
	
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
	
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
	
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
	
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
	
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
	
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
	
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE";
	
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
			return "WCT_PISTMK2_XM3";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
			return "WCT_MSMG_XM3";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
			return "WCT_PUMPSHT_XM3";
	
		case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_PISTOLXM3_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
	
		case joaat("COMPONENT_MICROSMG_VARMOD_FRN"):
			return "WCT_MSMGFRN_VAR";
	
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"):
			return "WCT_CRBNMIC_VAR";
	
		case joaat("COMPONENT_RPG_VARMOD_TVR"):
			return "WCT_RPGTVR_VAR";
	
		case joaat("COMPONENT_TECPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_TECPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_BATTLERIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
	
		case joaat("COMPONENT_BATTLERIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
	
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23"):
			return "WCT_COMPIST_XM";
	
		case joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23"):
			return "WCT_HVSP_XM";
	
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23"):
			return "WCT_SPCR_XM";
	
		case joaat("COMPONENT_STUNGUN_VARMOD_BAIL"):
			return "WCT_STNGN_BAIL";
	
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_82(iParam1, &uVar2);
			
				if (iVar0 != -1)
				{
					for (iVar1 = 0; iVar1 < EXTRAMETADATA::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0); iVar1 = iVar1 + 1)
					{
						if (EXTRAMETADATA::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &uVar41))
							if (uVar41.f_3 == iParam0)
								return func_51(&(uVar41.f_6));
					}
				}
			}
			break;
	}

	return "WCT_INVALID";
}

char* func_51(var uParam0) // Position - 0xC84D
{
	return uParam0;
}

int func_52() // Position - 0xC857
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_53())
		return 1;

	return 0;
}

int func_53() // Position - 0xC874
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
bool func_54(int iParam0) // Position - 0xC88B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return false;
		
			default:
				goto 0x5E;
		}
	}
	else if (func_55(iParam0))
	{
		return Global_262145.f_21004 /* Tunable: ENABLE_INDEPENDENCE_LIVERY_WEAPONS */;
	}

	return true;
}

bool func_55(int iParam0) // Position - 0xC8ED
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return true;
	}

	return false;
}

bool func_56() // Position - 0xC94C
{
	if (func_60() && func_59() || func_58())
		return true;

	if (func_57())
		return true;

	return false;
}

bool func_57() // Position - 0xC97E
{
	return true;
}

int func_58() // Position - 0xC987
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (IS_BIT_SET(Global_26, 6))
		if (IS_BIT_SET(Global_26, 2) || IS_BIT_SET(Global_26, 4))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1))
		if (IS_BIT_SET(iVar0, 6))
			if (IS_BIT_SET(iVar0, 2) || IS_BIT_SET(iVar0, 4))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_153817.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
				if (IS_BIT_SET(iVar1, 8))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(iVar3, 2) || IS_BIT_SET(iVar3, 4))
			return 1;
	}

	return 0;
}

int func_59() // Position - 0xCA3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (IS_BIT_SET(Global_26, 5))
		if (IS_BIT_SET(Global_26, 1) || IS_BIT_SET(Global_26, 3))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1))
		if (IS_BIT_SET(iVar0, 5))
			if (IS_BIT_SET(iVar0, 1) || IS_BIT_SET(iVar0, 3))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_153817.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
				if (IS_BIT_SET(iVar1, 5))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(iVar3, 1) || IS_BIT_SET(iVar3, 3))
			return 1;
	}

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar4, -1);
				MISC::SET_BIT(&uVar4, 1);
				MISC::SET_BIT(&uVar4, 3);
				MISC::SET_BIT(&uVar4, 5);
				MISC::SET_BIT(&Global_26, 1);
				MISC::SET_BIT(&Global_26, 3);
				MISC::SET_BIT(&Global_26, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar4, 1);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar4, 1);
					MISC::SET_BIT(&uVar4, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar4);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

bool func_60() // Position - 0xCB76
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

bool func_61(int iParam0) // Position - 0xCC2E
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3_SLIDE"):
			return true;
	}

	return false;
}

int func_62(int iParam0, var uParam1) // Position - 0xCCCF
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_01"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_01");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_02"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_02");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_03"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_03");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_04"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_04");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_05"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_05");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_06"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_06");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_07"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_07");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_08"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_08");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_KNIFE_VARMOD_XM3_09"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_KNIFE_VARMOD_XM3_09");
					iVar0 = iVar0 + 1;
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_01"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_02"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_03"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_04"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_05"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_06"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_07"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_08"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					iVar0 = iVar0 + 1;
				}
			
				if (func_63(joaat("COMPONENT_BAT_VARMOD_XM3_09"), iParam0, &iVar1, &uVar2) && iVar1)
				{
					uParam1->[iVar0] = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					iVar0 = iVar0 + 1;
				}
			}
			break;
	}

	return iVar0;
}

int func_63(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0xD04B
{
	*uParam2 = 1;
	*uParam3 = 0;

	switch (iParam1)
	{
		case joaat("WEAPON_BAT"):
			if (!*Global_262145.f_33899 /* Tunable: 1490225691 */ && func_75(Static_54, false) || func_65(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (!func_75(Static_54, false))
				return 0;
		
			*uParam2 = 0;
			*uParam3 = 1;
		
			switch (iParam0)
			{
				case joaat("COMPONENT_BAT_VARMOD_XM3"):
					if (func_8(36789, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
					if (func_8(36790, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
					if (func_8(36792, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
					if (func_8(36793, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
					if (func_8(36794, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
					if (func_8(36795, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
					if (func_8(36796, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
					if (func_8(36797, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
					if (func_8(36798, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
					if (func_8(36791, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			}
		
			switch (iParam0)
			{
				case joaat("COMPONENT_BAT_VARMOD_XM3"):
					if (*Global_262145.f_33900 /* Tunable: 354449819 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
					if (*Global_262145.f_33901 /* Tunable: 1865562201 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
					if (*Global_262145.f_33903 /* Tunable: -1255391756 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
					if (*Global_262145.f_33904 /* Tunable: 65834410 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
					if (*Global_262145.f_33905 /* Tunable: 1228141838 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
					if (*Global_262145.f_33906 /* Tunable: 1802728391 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
					if (*Global_262145.f_33907 /* Tunable: 2101034372 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
					if (*Global_262145.f_33908 /* Tunable: 828523727 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
					if (*Global_262145.f_33909 /* Tunable: -135589075 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
					if (*Global_262145.f_33902 /* Tunable: -957889877 */)
						*uParam2 = 1;
					break;
			}
		
			if (*uParam2 && func_64())
				*uParam3 = 0;
		
			return 1;
	
		case joaat("WEAPON_KNIFE"):
			if (!*Global_262145.f_33899 /* Tunable: 1490225691 */ && func_75(Static_54, false) || func_65(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (!func_75(Static_54, false))
				return 0;
		
			*uParam2 = 0;
			*uParam3 = 1;
		
			switch (iParam0)
			{
				case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
					if (func_8(36799, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
					if (func_8(36803, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
					if (func_8(36800, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
					if (func_8(36801, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
					if (func_8(36804, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
					if (func_8(36802, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
					if (func_8(36806, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
					if (func_8(36805, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
					if (func_8(36807, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
					if (func_8(36808, -1))
					{
						*uParam2 = 1;
						*uParam3 = 0;
						return 1;
					}
					break;
			}
		
			switch (iParam0)
			{
				case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
					if (*Global_262145.f_33910 /* Tunable: 1117934344 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
					if (*Global_262145.f_33914 /* Tunable: 864690681 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
					if (*Global_262145.f_33911 /* Tunable: 148518627 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
					if (*Global_262145.f_33912 /* Tunable: -925304230 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
					if (*Global_262145.f_33915 /* Tunable: 591553011 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
					if (*Global_262145.f_33913 /* Tunable: -795389552 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
					if (*Global_262145.f_33917 /* Tunable: -471845741 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
					if (*Global_262145.f_33916 /* Tunable: -2077004525 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
					if (*Global_262145.f_33918 /* Tunable: -1184242643 */)
						*uParam2 = 1;
					break;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
					if (*Global_262145.f_33919 /* Tunable: -1402034474 */)
						*uParam2 = 1;
					break;
			}
		
			if (*uParam2 && func_64())
				*uParam3 = 0;
		
			return 1;
	}

	return 0;
}

bool func_64() // Position - 0xD5F3
{
	if (!IS_BIT_SET(Global_1970058.f_3, 3) && !IS_BIT_SET(Global_1970058.f_3, 2) && MISC::GET_FRAME_COUNT() % Global_262145.f_31257 /* Tunable: GTAO_AUTO_REFRESH_FREQUENCY_IN_FRAMES */ == 0)
		MISC::SET_BIT(&(Global_1970058.f_3), 2);

	if (!IS_BIT_SET(Global_1970058.f_3, 1) || IS_BIT_SET(Global_1970058.f_3, 2) && !NETWORK::IS_COMMERCE_STORE_OPEN() && !NETWORK::IS_COMMERCE_DATA_FETCH_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_HAS_SC_MEMBERSHIP_INFO())
		{
			NETWORK::NETWORK_GET_SC_MEMBERSHIP_INFO(&Global_1970058);
			MISC::SET_BIT(&(Global_1970058.f_3), 1);
		
			if (IS_BIT_SET(Global_1970058.f_3, 2))
				MISC::CLEAR_BIT(&(Global_1970058.f_3), 2);
		}
	}

	if (Global_1970058)
		if (!IS_BIT_SET(Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_204, 31))
			MISC::SET_BIT(&(Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_204), 31);
	else if (IS_BIT_SET(Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_204, 31))
		MISC::CLEAR_BIT(&(Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_204), 31);

	return Global_1970058;
}

bool func_65(int iParam0, int iParam1, int iParam2) // Position - 0xD6EC
{
	int iVar0;
	int iVar1;

	if (func_74())
		return false;

	iVar0 = func_69(iParam0, iParam1, iParam2);
	iVar1 = func_67(iParam0, iParam1);
	return IS_BIT_SET(iVar0, func_66(iVar1));
}

int func_66(int iParam0) // Position - 0xD71E
{
	return iParam0 % 32;
}

int func_67(int iParam0, int iParam1) // Position - 0xD72B
{
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1) // Position - 0xD73B
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
			
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
			
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
			
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
			
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23"):
					return 613;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
			
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
					return 569;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
			
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
					return 570;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_FRN"):
					return 605;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
					return 602;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
			
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
			
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
			
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
			
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
			
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
			
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH"):
					return 604;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
			
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
			
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
			
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
			
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
					return 571;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
					return 603;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
			
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
			
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			
				case joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23"):
					return 614;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
			
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
			
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
			
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
			
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
					return 95;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
	
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
					return 105;
			
				case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
					return 106;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
					return 109;
			
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
					return 110;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
			
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23"):
					return 615;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
			
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
			
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
			
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
			
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
			
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
			
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
	
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
			
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
			
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
			
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
			
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
			
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
			
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
			
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
			
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
			
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			
				case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
					return 601;
			}
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
			
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
			
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
			
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
			
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
			
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
			
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
			
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
			
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
			
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
			
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
			
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
			
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
			
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
			
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
			
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
			
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
			
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
			
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
			
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
			
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return &func_1;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
			
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
			
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
			
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
			
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
			
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			break;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
					return 559;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
			}
			break;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
					return 562;
			
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
					return 563;
			
				case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
					return 564;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
			}
			break;
	
		case joaat("WEAPON_GADGETPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
					return 558;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
					return 99;
			
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
					return 100;
			
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			
				case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
					return 572;
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
					return 573;
			
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
					return 574;
			
				case joaat("COMPONENT_AT_AR_FLSH_REH"):
					return 575;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 576;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 577;
			}
			break;
	
		case joaat("WEAPON_PISTOLXM3"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
					return 578;
			
				case joaat("COMPONENT_PISTOLXM3_SUPP"):
					return 579;
			}
			break;
	
		case joaat("WEAPON_TECPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TECPISTOL_CLIP_01"):
					return 607;
			
				case joaat("COMPONENT_TECPISTOL_CLIP_02"):
					return 608;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 609;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 610;
			}
			break;
	
		case joaat("WEAPON_RAILGUNXM3"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAILGUNXM3_CLIP_01"):
					return 580;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BAT_VARMOD_XM3"):
					return 581;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
					return 583;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
					return 584;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
					return 585;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
					return 586;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
					return 587;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
					return 588;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
					return 589;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
					return 590;
			
				case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
					return 591;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
					return 582;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
					return 592;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
					return 593;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
					return 594;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
					return 595;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
					return 596;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
					return 597;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
					return 598;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
					return 599;
			
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
					return 600;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RPG_VARMOD_TVR"):
					return 606;
			}
			break;
	
		case joaat("WEAPON_STUNGUN_MP"):
			switch (iParam0)
			{
				case joaat("COMPONENT_STUNGUN_VARMOD_BAIL"):
					return 617;
			}
			break;
	
		case joaat("WEAPON_BATTLERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BATTLERIFLE_CLIP_01"):
					return 611;
			
				case joaat("COMPONENT_BATTLERIFLE_CLIP_02"):
					return 612;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 616;
			}
			break;
	
		case joaat("WEAPON_STRICKLER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_STRICKLER_CLIP_01"):
					return 618;
			
				case joaat("COMPONENT_STRICKLER_SIGHT"):
					return 619;
			
				case joaat("COMPONENT_STRICKLER_FLSH"):
					return 620;
			}
			break;
	}

	return 0;
}

int func_69(int iParam0, int iParam1, int iParam2) // Position - 0xFD5A
{
	int iVar0;

	iVar0 = func_11(func_70(iParam0, iParam1), iParam2);
	return iVar0;
}

int func_70(int iParam0, int iParam1) // Position - 0xFD74
{
	int iVar0;
	int iVar1;

	iVar0 = func_67(iParam0, iParam1);
	iVar1 = func_73(iVar0);

	if (func_72() == 0 || func_71() == 0 || func_72() == 999 && func_71() == 999)
	{
		switch (iVar1)
		{
			case 0:
				return 811;
		
			case 1:
				return 812;
		
			case 2:
				return 813;
		
			case 3:
				return 814;
		
			case 4:
				return 1753;
		
			case 5:
				return 2435;
		
			case 6:
				return 2828;
		
			case 7:
				return 5502;
		
			case 8:
				return 5506;
		
			case 9:
				return 5510;
		
			case 10:
				return 5623;
		
			case 11:
				return 5627;
		
			case 12:
				return 5631;
		
			case 13:
				return 5635;
		
			case 14:
				return 6374;
		
			case 15:
				return 6497;
		
			case 16:
				return 6517;
		
			case 17:
				return 6523;
		
			case 18:
				return 10273;
		
			case 19:
				return 12007;
		}
	}

	return 18486;
}

int func_71() // Position - 0xFEF4
{
	return Global_33793;
}

int func_72() // Position - 0xFEFF
{
	return Global_33792;
}

int func_73(int iParam0) // Position - 0xFF0A
{
	return iParam0 / 32;
}

bool func_74() // Position - 0xFF17
{
	return Global_1575071;
}

bool func_75(int iParam0, bool bParam1) // Position - 0xFF23
{
	if (iParam0 == 58)
	{
		if (bParam1)
			return Global_102506.f_349[58] < 5f;
	
		return true;
	}

	return false;
}

bool func_76(int iParam0, int iParam1, int iParam2) // Position - 0xFF4C
{
	int iVar0;
	int iVar1;

	if (func_74())
		return false;

	iVar0 = func_77(iParam0, iParam1, iParam2);
	iVar1 = func_67(iParam0, iParam1);
	return IS_BIT_SET(iVar0, func_66(iVar1));
}

int func_77(int iParam0, int iParam1, int iParam2) // Position - 0xFF7E
{
	int iVar0;

	iVar0 = func_11(func_78(iParam0, iParam1), iParam2);
	return iVar0;
}

int func_78(int iParam0, int iParam1) // Position - 0xFF98
{
	int iVar0;
	int iVar1;

	iVar0 = func_67(iParam0, iParam1);
	iVar1 = func_73(iVar0);

	if (func_72() == 0 || func_71() == 0 || func_72() == 999 && func_71() == 999)
	{
		switch (iVar1)
		{
			case 0:
				return 688;
		
			case 1:
				return 689;
		
			case 2:
				return 690;
		
			case 3:
				return 691;
		
			case 4:
				return 1755;
		
			case 5:
				return 2437;
		
			case 6:
				return 2830;
		
			case 7:
				return 5504;
		
			case 8:
				return 5508;
		
			case 9:
				return 5512;
		
			case 10:
				return 5625;
		
			case 11:
				return 5629;
		
			case 12:
				return 5633;
		
			case 13:
				return 5637;
		
			case 14:
				return 6376;
		
			case 15:
				return 6499;
		
			case 16:
				return 6519;
		
			case 17:
				return 6525;
		
			case 18:
				return 10275;
		
			case 19:
				return 12009;
		}
	}

	return 1755;
}

bool func_79(int iParam0) // Position - 0x1013A
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
		case 60:
		case 61:
		case 64:
			return true;
	
		default:
		
	}

	return false;
}

bool func_80(int iParam0) // Position - 0x10190
{
	switch (iParam0)
	{
		case joaat("WEAPON_STRICKLER"):
			return true;
	}

	return false;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x101AD
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_82(int iParam0, var uParam1) // Position - 0x101CC
{
	int iVar0;
	int iVar1;

	iVar1 = EXTRAMETADATA::GET_NUM_DLC_WEAPONS();

	for (iVar0 = 0; iVar0 < iVar1; iVar0 = iVar0 + 1)
	{
		if (EXTRAMETADATA::GET_DLC_WEAPON_DATA(iVar0, uParam1))
			if (uParam1->f_1 == iParam0)
				return iVar0;
	}

	return -1;
}

void func_83(var uParam0, var uParam1) // Position - 0x10207
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar50;
	int iVar72;
	int iVar73;

	if (!PED::IS_PED_INJURED(uParam0))
	{
		for (iVar0 = 0; iVar0 <= 44 - 1; iVar0 = iVar0 + 1)
		{
			uParam1->[iVar0 /*5*/].f_1 = 0;
		}
	
		for (iVar0 = 0; iVar0 <= 44 - 1; iVar0 = iVar0 + 1)
		{
			iVar3 = func_86(iVar0);
		
			if (iVar3 != 0)
			{
				iVar4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(uParam0, func_86(iVar0));
				iVar4.f_1 = 0;
				iVar4.f_2 = 0;
				iVar4.f_3 = 0;
				iVar4.f_4 = 0;
			
				if (iVar4 != 0 && iVar4 != joaat("WEAPON_UNARMED"))
				{
					iVar4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0, iVar4);
				
					if (iVar4 == joaat("GADGET_PARACHUTE"))
						iVar4.f_1 = 1;
				
					iVar4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, iVar4);
					iVar4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(uParam0, iVar4);
				
					if (iVar4.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(uParam0, iVar4, &(iVar4.f_1)))
							iVar4.f_1 = 0;
				
					uParam1->[iVar0 /*5*/].f_1 = iVar4.f_1;
					iVar1 = 0;
				
					for (iVar2 = func_85(iVar4, iVar1); iVar2 != 0; iVar2 = func_85(iVar4, iVar1))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, iVar4, iVar2))
							MISC::SET_BIT(&(iVar4.f_2), iVar1);
					
						iVar1 = iVar1 + 1;
					}
				}
			
				uParam1->[iVar0 /*5*/] = { iVar4 };
			}
		}
	
		for (iVar0 = 0; iVar0 <= 50; iVar0 = iVar0 + 1)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
		}
	
		iVar10 = EXTRAMETADATA::GET_NUM_DLC_WEAPONS_SP();
	
		for (iVar9 = 0; iVar9 < iVar10; iVar9 = iVar9 + 1)
		{
			if (EXTRAMETADATA::GET_DLC_WEAPON_DATA_SP(iVar9, &uVar11) && !func_84(uVar11.f_1) && iVar72 < 51)
			{
				if (!EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(uVar11))
				{
					iVar4 = uVar11.f_1;
					iVar4.f_1 = 0;
					iVar4.f_2 = 0;
					iVar4.f_3 = 0;
					iVar4.f_4 = 0;
					iVar4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0, iVar4);
				
					if (WEAPON::HAS_PED_GOT_WEAPON(uParam0, iVar4, 0))
					{
						iVar4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(uParam0, iVar4);
						iVar4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(uParam0, iVar4);
					}
				
					if (iVar4.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(uParam0, iVar4, &(iVar4.f_1)))
							iVar4.f_1 = 0;
				
					uParam1->f_221[iVar72 /*5*/].f_1 = iVar4.f_1;
					iVar73 = 0;
				
					for (iVar1 = 0; iVar1 < EXTRAMETADATA::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9); iVar1 = iVar1 + 1)
					{
						if (EXTRAMETADATA::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &uVar50))
						{
							if (!func_61(uVar50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(uParam0, iVar4, uVar50.f_3))
									MISC::SET_BIT(&(iVar4.f_2), iVar73);
							
								iVar73 = iVar73 + 1;
							}
						}
					}
				}
			
				if (iVar4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0, iVar4, 0))
					{
						iVar4 = 0;
						iVar4.f_1 = 0;
					}
				}
			
				uParam1->f_221[iVar72 /*5*/] = { iVar4 };
				iVar72 = iVar72 + 1;
			}
		}
	}
}

bool func_84(int iParam0) // Position - 0x1048F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case joaat("WEAPON_PISTOLXM3"):
			case joaat("WEAPON_CANDYCANE"):
			case joaat("WEAPON_RAILGUNXM3"):
			case joaat("WEAPON_TECPISTOL"):
			case joaat("WEAPON_BATTLERIFLE"):
			case joaat("WEAPON_SNOWLAUNCHER"):
			case joaat("WEAPON_STUNROD"):
			case joaat("WEAPON_STRICKLER"):
				return true;
		}
	}

	return false;
}

int func_85(int iParam0, int iParam1) // Position - 0x10687
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar43;

	iVar0 = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			
				case 7:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_XM3");
					break;
			
				case 8:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_FRN");
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			
				case 10:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH");
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			
				case 8:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					break;
			
				case 3:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					break;
			
				case 4:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					break;
			
				case 5:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					break;
			
				case 6:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					break;
			
				case 7:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					break;
			
				case 8:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					break;
			
				case 9:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					break;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_RPG_VARMOD_TVR");
					break;
			}
			break;
	
		case joaat("WEAPON_BATTLERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_02");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_STUNGUN_MP"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_STUNGUN_VARMOD_BAIL");
					break;
			}
			break;
	
		case joaat("WEAPON_STRICKLER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_STRICKLER_CLIP_01");
					break;
			
				case 1:
					iVar0 = joaat("COMPONENT_STRICKLER_SIGHT");
					break;
			
				case 2:
					iVar0 = joaat("COMPONENT_STRICKLER_FLSH");
					break;
			}
			break;
	
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_82(iParam0, &uVar4);
			
				if (iVar1 != -1)
				{
					for (iVar2 = 0; iVar2 < EXTRAMETADATA::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1); iVar2 = iVar2 + 1)
					{
						if (EXTRAMETADATA::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &uVar43))
						{
							if (!func_61(uVar43.f_3))
							{
								if (iVar3 == iParam1)
									return uVar43.f_3;
							
								iVar3 = iVar3 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return iVar0;
}

int func_86(int iParam0) // Position - 0x11408
{
	int iVar0;

	iVar0 = 0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
	
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
	
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
	
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
	
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}

	return iVar0;
}

float func_87(var uParam0) // Position - 0x1167C
{
	if (func_90(uParam0))
		if (func_89(uParam0))
			return uParam0->f_2;
		else
			return func_88(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_88(bool bParam0) // Position - 0x116B8
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

bool func_89(var uParam0) // Position - 0x11710
{
	return IS_BIT_SET(*uParam0, 2);
}

bool func_90(var uParam0) // Position - 0x1171D
{
	return IS_BIT_SET(*uParam0, 1);
}

bool func_91() // Position - 0x1172A
{
	if (Global_1574612)
		return true;

	if (func_93())
		return true;

	if (func_92())
		return true;

	return func_4(124, -1);
}

bool func_92() // Position - 0x1175A
{
	return Global_1575080;
}

bool func_93() // Position - 0x11766
{
	return Global_1575082;
}

void func_94() // Position - 0x11772
{
	int iVar0;

	for (iVar0 = 1; iVar0 <= 49; iVar0 = iVar0 + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
				func_122(iVar0, 1);
	}

	for (iVar0 = 51; iVar0 <= 59; iVar0 = iVar0 + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
				func_122(iVar0, 1);
	}

	for (iVar0 = 70; iVar0 <= 77; iVar0 = iVar0 + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
				func_122(iVar0, 1);
	}
}

bool func_95(int iParam0, int iParam1) // Position - 0x11806
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
		iParam1 = func_7();

	iVar0 = func_96(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return IS_BIT_SET(iVar1, iParam0);
}

int func_96(int iParam0) // Position - 0x1182F
{
	int iVar0;

	if (iParam0 == -1)
		iParam0 = func_7();

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

bool func_97() // Position - 0x11892
{
	if (func_99() && func_98(0))
		return true;

	return false;
}

var func_98(int iParam0) // Position - 0x118B0
{
	return Global_1574538[iParam0];
}

var func_99() // Position - 0x118C0
{
	return func_98(func_7() + 1);
}

bool func_100(var uParam0) // Position - 0x118D2
{
	return uParam0->f_79 == 1;
}

void func_101(var uParam0) // Position - 0x118E0
{
	float fVar0;

	fVar0 = Global_4525143;
	uParam0->f_80 = uParam0->f_80 + MISC::GET_FRAME_TIME();

	if (!func_100(uParam0))
		return;

	if (func_108(uParam0) < 0f)
	{
		func_107(uParam0, 0);
		return;
	}

	if (func_155(14))
		fVar0 = 10f;

	if (func_108(uParam0) < fVar0)
		return;

	if (func_106(uParam0, 0))
		return;

	if (func_104(uParam0->[0]))
	{
		func_103(uParam0);
		func_102(uParam0);
		func_107(uParam0, 0);
	}
}

void func_102(var uParam0) // Position - 0x11968
{
	int iVar0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		if (func_106(uParam0, iVar0))
			iVar0 = *uParam0 + 100;
	}
}

void func_103(var uParam0) // Position - 0x11999
{
	int iVar0;

	iVar0 = 1;

	if (func_106(uParam0, 0))
		return;

	while (iVar0 < *uParam0)
	{
		uParam0->[iVar0 - 1] = uParam0->[iVar0];
		iVar0 = iVar0 + 1;
	}
}

bool func_104(int iParam0) // Position - 0x119D0
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return false;

	if (func_155(14) && !func_105(iParam0))
		return false;

	if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		return false;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return true;

	return false;
}

bool func_105(int iParam0) // Position - 0x11A1A
{
	switch (iParam0)
	{
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
			return true;
	
		default:
		
	}

	return false;
}

bool func_106(var uParam0, int iParam1) // Position - 0x11A6A
{
	return uParam0->[iParam1] == 78;
}

void func_107(var uParam0, int iParam1) // Position - 0x11A7B
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;
}

float func_108(var uParam0) // Position - 0x11A98
{
	return uParam0->f_80;
}

int func_109() // Position - 0x11AA4
{
	float fVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_80305)
		return 0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			fVar0 = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
		
			if (fVar0 > 0.01f && MISC::IS_PC_VERSION())
				func_128(14, BUILTIN::FLOOR(fVar0 * 100f));
		
			if (fVar0 >= 0.975f)
			{
				func_122(14, 1);
				return 1;
			}
		}
	}

	return 0;
}

bool func_110(int iParam0) // Position - 0x11B1C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

void func_111(bool bParam0) // Position - 0x11B48
{
	if (Global_80305)
	{
		if (bParam0)
			func_9(bParam0);
	
		func_3(bParam0);
		func_16(bParam0);
		bParam0;
	}

	func_121(bParam0);
	func_114(bParam0);
	func_113();
	func_112();

	if (bParam0)
		func_90(&Static_58);
}

int func_112() // Position - 0x11B9C
{
	int iVar0;
	int iVar1;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
		return 0;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(joaat("FIRST_PERSON_CAM_TIME")) * 24);
	iVar0 = iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("FIRST_PERSON_CAM_TIME"));
	iVar1 = iVar1 + (STATS::STAT_GET_NUMBER_OF_DAYS(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
	iVar1 = iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("MP_FIRST_PERSON_CAM_TIME"));

	if (iVar0 + iVar1 >= 15)
	{
		func_122(50, 1);
		return 1;
	}

	return 0;
}

int func_113() // Position - 0x11C0A
{
	int iVar0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
		return 0;

	iVar0 = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();

	if (iVar0 > 0)
	{
		if (Global_34058 < iVar0)
		{
			if (Global_34058 >= 0)
				func_128(22, iVar0);
		
			Global_34058 = iVar0;
		}
	}

	if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
	{
		func_122(22, 1);
		return 1;
	}

	return 0;
}

int func_114(bool bParam0) // Position - 0x11C61
{
	var uVar0;
	int iVar7;
	int iVar8;
	int iVar9;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
		return 0;

	uVar0 = 6;
	uVar0[0] = func_120();
	uVar0[1] = func_119();
	uVar0[2] = func_118();
	uVar0[3] = func_117();
	uVar0[4] = func_116();
	uVar0[5] = func_115();
	iVar7 = 0;

	for (iVar8 = 0; iVar8 < 6; iVar8 = iVar8 + 1)
	{
		if (uVar0[iVar8])
			iVar7 = iVar7 + 1;
	}

	STATS::STAT_GET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), &iVar9, -1);

	if (iVar7 > iVar9 && iVar7 > 0)
	{
		STATS::STAT_SET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), iVar7, 1);
		func_128(17, iVar7);
	}

	bParam0;

	if (!uVar0[0])
	{
		bParam0;
		return 0;
	}

	if (!uVar0[1])
	{
		bParam0;
		return 0;
	}

	if (!uVar0[2])
	{
		bParam0;
		return 0;
	}

	if (!uVar0[3])
	{
		bParam0;
		return 0;
	}

	if (!uVar0[4])
	{
		bParam0;
		return 0;
	}

	if (!uVar0[5])
	{
		bParam0;
		return 0;
	}

	func_122(17, 1);
	return 1;
}

int func_115() // Position - 0x11D83
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 12; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_1995[0 /*121*/][iVar0 /*10*/].f_8 == 3)
			return 1;
		else if (Global_114931.f_1995[1 /*121*/][iVar0 /*10*/].f_8 == 3)
			return 1;
		else if (Global_114931.f_1995[2 /*121*/][iVar0 /*10*/].f_8 == 3)
			return 1;
	}

	return 0;
}

int func_116() // Position - 0x11DF0
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 22; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_19154[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
			return 1;
		else if (Global_114931.f_19154[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
			return 1;
		else if (Global_114931.f_19154[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
			return 1;
	}

	return 0;
}

int func_117() // Position - 0x11E66
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 4; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_24983.f_1, iVar0))
			return 1;
	}

	return 0;
}

int func_118() // Position - 0x11E97
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 5; iVar0 = iVar0 + 1)
	{
		if (IS_BIT_SET(Global_114931.f_24986.f_2, iVar0))
			return 1;
	}

	return 0;
}

int func_119() // Position - 0x11EC8
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 7; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_19023.f_19[iVar0] == 1)
			return 1;
	}

	return 0;
}

int func_120() // Position - 0x11EFB
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 3; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_20018[iVar0] == 1)
			return 1;
	}

	return 0;
}

int func_121(bool bParam0) // Position - 0x11F2C
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &uVar0, -1))
		iVar1 = iVar1 + uVar0;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &uVar0, -1))
		iVar1 = iVar1 + uVar0;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &uVar0, -1))
		iVar1 = iVar1 + uVar0;

	bParam0;
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);

	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_128(27, iVar1);
	}

	if (iVar1 < 200000000)
		return 0;

	func_122(27, 1);
	return 1;
}

int func_122(int iParam0, int iParam1) // Position - 0x11FE3
{
	if (iParam0 >= 78)
		return 0;

	return func_123(iParam0, iParam1);
}

int func_123(int iParam0, int iParam1) // Position - 0x11FFE
{
	if (func_155(14) && !func_105(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_34043 != 0 && !Global_80305)
		return 0;

	if (func_100(&Global_4525144))
	{
		if (func_126(&Global_4525144, iParam0))
			return 0;
	
		if (func_124(&Global_4525144, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

bool func_124(var uParam0, int iParam1) // Position - 0x1209B
{
	int iVar0;
	var uVar1;

	uVar1 = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_155(14) && !func_105(iParam1))
		return false;

	if (func_126(uParam0, iParam1))
		return false;

	if (func_108(uParam0) < 0f)
		func_107(uParam0, 0);

	func_161(&uVar1);
	iVar0 = 0;

	for (iVar0 = 0; iVar0 < *uParam0 - 1; iVar0 = iVar0 + 1)
	{
		uVar1[iVar0 + 1] = uParam0->[iVar0];
	}

	func_125(&uVar1, iParam1);
	iVar0 = 0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		uParam0->[iVar0] = uVar1[iVar0];
	}

	return true;
}

int func_125(var uParam0, int iParam1) // Position - 0x1214C
{
	int iVar0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_155(14) && !func_105(iParam1))
		return 0;

	if (func_126(uParam0, iParam1))
		return 0;

	if (func_108(uParam0) < 0f)
		func_107(uParam0, 0);

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		if (func_106(uParam0, iVar0))
		{
			uParam0->[iVar0] = iParam1;
			return 1;
		}
	}

	return 0;
}

bool func_126(var uParam0, int iParam1) // Position - 0x121C7
{
	return func_127(uParam0, iParam1) != -1;
}

int func_127(var uParam0, int iParam1) // Position - 0x121D9
{
	int iVar0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		if (uParam0->[iVar0] == iParam1)
			return iVar0;
	}

	return -1;
}

int func_128(int iParam0, int iParam1) // Position - 0x12206
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

int func_129(bool bParam0) // Position - 0x12257
{
	int iVar0;

	iVar0 = func_142(bParam0) + func_130(bParam0);
	bParam0;
	return iVar0;
}

int func_130(bool bParam0) // Position - 0x12275
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	iVar3 = 0;
	iVar4 = 0;
	bParam0;

	for (iVar0 = 0; iVar0 < Global_114931.f_18581; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_18581[iVar0 /*6*/].f_3 != -1 && func_140(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
		
			for (iVar5 = 0; iVar5 < func_138(iVar0, 7); iVar5 = iVar5 + 1)
			{
				iVar7 = func_136(iVar0, 7, iVar5);
			
				if (!Global_65252[iVar7 /*13*/].f_7)
				{
					if (func_133(iVar7) == 1)
						iVar4 = iVar4 + 1;
				
					iVar3 = iVar3 + 1;
				}
			}
		
			fVar6 = func_132(iVar4, iVar3, false);
			iVar2 = func_131(fVar6);
		
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				bParam0;
				iVar2 = Global_114931.f_2359[iVar0 - 52 /*2*/];
				fVar6 = 0f;
			}
		
			if (fVar6 >= 100f || iVar2 == 3)
				iVar1 = iVar1 + 1;
		}
	}

	bParam0;
	return iVar1;
}

int func_131(float fParam0) // Position - 0x12369
{
	if (fParam0 == 0f)
		return 0;

	if (fParam0 == 100f)
		return 3;
	else if (fParam0 > 50f)
		return 2;

	return 1;
}

float func_132(int iParam0, int iParam1, bool bParam2) // Position - 0x1239E
{
	float fVar0;
	float fVar1;

	if (bParam2)
		return 0f;

	if (iParam0 == iParam1)
		return 100f;

	fVar0 = BUILTIN::TO_FLOAT(iParam0) / BUILTIN::TO_FLOAT(iParam1);
	fVar1 = (50f * fVar0) + 50f;
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::CEIL(fVar1));

	if (fVar1 > 100f)
		fVar1 = 100f;

	return fVar1;
}

int func_133(int iParam0) // Position - 0x123FD
{
	if (func_134(iParam0, func_135(Global_65252[iParam0 /*13*/].f_4)))
		return 1;

	return 0;
}

bool func_134(int iParam0, int iParam1) // Position - 0x12420
{
	if (iParam1 < 0)
		return false;

	switch (Global_65252[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
				return false;
			break;
	}

	if (iParam1 == 2147483647)
		return false;

	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897 && Global_114931.f_24911[4 /*4*/] == func_35())
		Global_65252[iParam0 /*13*/].f_2 = 0;

	if (Global_65252[iParam0 /*13*/].f_3)
		if (iParam1 < Global_65252[iParam0 /*13*/].f_2)
			return true;
	else if (iParam1 >= Global_65252[iParam0 /*13*/].f_2)
		return true;

	return false;
}

int func_135(int iParam0) // Position - 0x124EA
{
	int iVar0;

	if (iParam0 == 0)
		return -1;

	if (STATS::STAT_GET_INT(iParam0, &iVar0, -1))
		return iVar0 - 1;

	return -1;
}

int func_136(int iParam0, int iParam1, int iParam2) // Position - 0x12513
{
	switch (iParam1)
	{
		case 1:
			return Global_93217[iParam0 /*34*/].f_17[iParam2];
	
		case 7:
			return func_137(iParam0, iParam2);
	
		default:
			break;
	}

	return 914;
}

int func_137(int iParam0, int iParam1) // Position - 0x12556
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
			
				case 1:
					return 742;
			
				default:
				
			}
		
			return -1;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
			
				case 1:
					return 744;
			
				default:
				
			}
		
			return -1;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
			
				case 1:
					return 746;
			
				default:
				
			}
		
			return -1;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
			
				case 1:
					return 748;
			
				default:
				
			}
		
			return -1;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
			
				default:
				
			}
		
			return -1;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
			
				case 1:
					return 752;
			
				default:
				
			}
		
			return -1;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
			
				case 1:
					return 754;
			
				default:
				
			}
		
			return -1;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
			
				case 1:
					return 756;
			
				case 2:
					return 757;
			
				default:
				
			}
		
			return -1;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
			
				case 1:
					return 759;
			
				default:
				
			}
		
			return -1;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
			
				case 1:
					return 761;
			
				default:
				
			}
		
			return -1;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
			
				default:
				
			}
		
			return -1;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
			
				default:
				
			}
		
			return -1;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
			
				case 1:
					return 765;
			
				default:
				
			}
		
			return -1;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
			
				default:
				
			}
		
			return -1;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
			
				case 1:
					return 768;
			
				case 2:
					return 769;
			
				default:
				
			}
		
			return -1;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
			
				case 1:
					return 771;
			
				default:
				
			}
		
			return -1;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
			
				case 1:
					return 773;
			
				default:
				
			}
		
			return -1;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
			
				case 1:
					return 775;
			
				default:
				
			}
		
			return -1;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
			
				case 1:
					return 777;
			
				default:
				
			}
		
			return -1;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
			
				case 1:
					return 779;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
			
				case 1:
					return 781;
			
				case 2:
					return 782;
			
				default:
				
			}
		
			return -1;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
			
				case 1:
					return 784;
			
				default:
				
			}
		
			return -1;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
			
				case 1:
					return 786;
			
				default:
				
			}
		
			return -1;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
			
				case 1:
					return 788;
			
				default:
				
			}
		
			return -1;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
			
				default:
				
			}
		
			return -1;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
			
				case 1:
					return 791;
			
				case 2:
					return 792;
			
				default:
				
			}
		
			return -1;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
			
				case 1:
					return 794;
			
				case 2:
					return 795;
			
				default:
				
			}
		
			return -1;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
			
				case 1:
					return 797;
			
				default:
				
			}
		
			return -1;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
			
				case 1:
					return 799;
			
				default:
				
			}
		
			return -1;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
			
				case 1:
					return 801;
			
				default:
				
			}
		
			return -1;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
			
				case 1:
					return 803;
			
				default:
				
			}
		
			return -1;
	
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
			
				case 1:
					return 805;
			
				default:
				
			}
		
			return -1;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
			
				default:
				
			}
		
			return -1;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
			
				case 1:
					return 808;
			
				case 2:
					return 809;
			
				default:
				
			}
		
			return -1;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
			
				case 1:
					return 829;
			
				case 2:
					return 830;
			
				default:
				
			}
		
			return -1;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
			
				case 1:
					return 832;
			
				case 2:
					return 833;
			
				default:
				
			}
		
			return -1;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
			
				case 1:
					return 835;
			
				case 2:
					return 836;
			
				default:
				
			}
		
			return -1;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
			
				case 1:
					return 838;
			
				case 2:
					return 839;
			
				default:
				
			}
		
			return -1;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
			
				case 1:
					return 841;
			
				case 2:
					return 842;
			
				default:
				
			}
		
			return -1;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
			
				case 1:
					return 844;
			
				case 2:
					return 845;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	return -1;
}

int func_138(int iParam0, int iParam1) // Position - 0x12C3A
{
	switch (iParam1)
	{
		case 1:
			return Global_93217[iParam0 /*34*/].f_16;
	
		case 7:
			return func_139(iParam0);
	
		default:
			break;
	}

	return 0;
}

int func_139(int iParam0) // Position - 0x12C75
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 2;
	
		case 8:
			return 1;
	
		case 12:
			return 1;
	
		case 14:
			return 2;
	
		case 16:
			return 2;
	
		case 17:
			return 3;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 1;
	
		case 25:
			return 3;
	
		case 26:
			return 2;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 32:
			return 2;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			return 3;
	
		case 34:
			return 2;
	
		case 38:
			return 2;
	
		case 39:
			return 2;
	
		case 40:
			return 1;
	
		case 41:
			return 3;
	
		case 42:
			return 3;
	
		case 43:
			return 2;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 49:
			return 2;
	
		case 50:
			return 2;
	
		case 51:
			return 1;
	
		case 57:
			return 3;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 3;
	
		case 24:
			return 3;
	
		default:
		
	}

	return 0;
}

bool func_140(int iParam0, int iParam1) // Position - 0x12E26
{
	switch (iParam1)
	{
		case 1:
			return !IS_BIT_SET(Global_93217[iParam0 /*34*/].f_15, 5);
	
		case 7:
			return func_141(iParam0);
	
		default:
			break;
	}

	return false;
}

bool func_141(int iParam0) // Position - 0x12E64
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

int func_142(bool bParam0) // Position - 0x131AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;

	iVar3 = 0;
	iVar4 = 0;
	bParam0;

	for (iVar0 = 0; iVar0 < Global_114931.f_9092.f_330; iVar0 = iVar0 + 1)
	{
		if (Global_114931.f_9092.f_330[iVar0 /*6*/].f_3 != -1 && func_140(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
		
			for (iVar5 = 0; iVar5 < func_138(iVar0, 1); iVar5 = iVar5 + 1)
			{
				iVar7 = func_136(iVar0, 1, iVar5);
			
				if (!Global_65252[iVar7 /*13*/].f_7)
				{
					if (func_133(iVar7) == 1)
						iVar4 = iVar4 + 1;
				
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_143(iVar7);
						
							if (iVar8 >= 2147483647)
								iVar8 = 1;
							break;
					}
				
					iVar3 = iVar3 + 1;
				}
			}
		
			fVar6 = func_132(iVar4, iVar3, false);
			iVar2 = func_131(fVar6);
		
			if (iVar8 > -1)
				iVar2 = iVar8;
		
			if (fVar6 >= 100f || iVar2 == 3)
				iVar1 = iVar1 + 1;
		}
	}

	bParam0;
	return iVar1;
}

int func_143(int iParam0) // Position - 0x132C4
{
	int iVar0;

	iVar0 = func_135(Global_65252[iParam0 /*13*/].f_4);

	if (iVar0 > -2)
		return iVar0;

	return 0;
}

void func_144() // Position - 0x132E9
{
	var uVar0;
	var uVar1;

	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0);

	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		return;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_122(25, 1);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
	
		if (ENTITY::IS_ENTITY_A_PED(uVar0))
		{
			uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0);
		
			if (func_145(uVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar1) == joaat("A_C_SHARKTIGER"))
				{
					func_122(25, 1);
					return;
				}
			}
		}
	}
}

bool func_145(var uParam0) // Position - 0x13372
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(uParam0, 0);
}

void func_146() // Position - 0x13390
{
	switch (Static_55)
	{
		case 0:
			Static_63 = 0f;
		
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				return;
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == 0)
			{
				if (func_151() == 2)
				{
					func_158(&Static_58);
					Static_55 = Static_55 + 1;
				}
			}
			break;
	
		case 1:
			if (func_150() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				func_149(&Static_58);
				Static_55 = 0;
				return;
			}
		
			if (MISC::GET_MISSION_FLAG() == 1)
			{
				func_149(&Static_58);
				Static_55 = 0;
				return;
			}
		
			if (func_151() < 2)
			{
				func_149(&Static_58);
				Static_55 = 0;
				return;
			}
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_149(&Static_58);
				Static_55 = 0;
				return;
			}
		
			Static_63 = func_148(&Static_58);
		
			if (Static_63 >= 180f)
			{
				func_122(24, 1);
				func_147(&Static_58);
				Static_55 = Static_55 + 1;
			}
			break;
	
		case 2:
			Static_55 = Static_55 + 1;
			break;
	}
}

void func_147(var uParam0) // Position - 0x134A0
{
	if (func_90(uParam0))
	{
		if (!func_89(uParam0))
		{
			uParam0->f_2 = func_88(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

float func_148(var uParam0) // Position - 0x134D7
{
	if (func_90(uParam0))
		if (func_89(uParam0))
			return uParam0->f_2;
		else
			return func_88(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return 0f;
}

void func_149(var uParam0) // Position - 0x13510
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_150() // Position - 0x13526
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

int func_151() // Position - 0x13542
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_153(2);

	if (func_152(iVar1, 0) || IS_BIT_SET(Global_98280, 2))
		iVar0 = iVar0 + 1;

	iVar1 = func_153(1);

	if (func_152(iVar1, 0) || IS_BIT_SET(Global_98280, 1))
		iVar0 = iVar0 + 1;

	iVar1 = func_153(0);

	if (func_152(iVar1, 0) || IS_BIT_SET(Global_98280, 0))
		iVar0 = iVar0 + 1;

	return iVar0;
}

bool func_152(int iParam0, int iParam1) // Position - 0x135B8
{
	return false;
}

int func_153(int iParam0) // Position - 0x13611
{
	if (iParam0 > 3)
		return 0;

	if (iParam0 == func_35())
		return PLAYER::PLAYER_PED_ID();

	return Global_99907[func_154(iParam0)];
}

int func_154(int iParam0) // Position - 0x13642
{
	if (iParam0 == 0)
		return 0;
	else if (iParam0 == 2)
		return 2;
	else if (iParam0 == 1)
		return 1;
	else if (iParam0 == 145)
		return 3;

	return 4;
}

bool func_155(int iParam0) // Position - 0x1367D
{
	return Global_44886 == iParam0;
}

void func_156(char* sParam0, int iParam1) // Position - 0x1368B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_157() // Position - 0x136A2
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_158(var uParam0) // Position - 0x136B8
{
	func_159(uParam0, 0f);
}

void func_159(var uParam0, float fParam1) // Position - 0x136C7
{
	uParam0->f_1 = func_88(IS_BIT_SET(*uParam0, 4)) - fParam1;
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_160(var uParam0, int iParam1) // Position - 0x136F2
{
	uParam0->f_79 = iParam1;

	if (uParam0->f_79)
		func_107(uParam0, 0);
}

void func_161(var uParam0) // Position - 0x1370E
{
	int iVar0;

	for (iVar0 = 0; iVar0 < *uParam0; iVar0 = iVar0 + 1)
	{
		func_162(uParam0, iVar0);
	}

	func_107(uParam0, Global_4525143 - 0.5f);
}

void func_162(var uParam0, int iParam1) // Position - 0x13742
{
	uParam0->[iParam1] = 78;
}

void func_163() // Position - 0x13752
{
	int iVar0;
	int iVar1;

	iVar1 = 78;

	for (iVar0 = 1; iVar0 <= iVar1 - 1; iVar0 = iVar0 + 1)
	{
		PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0);
	}
}

void func_164(int iParam0) // Position - 0x1377C
{
	iParam0 > 0;
}

