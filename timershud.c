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
	float Static_27 = 0f;
	var Static_28 = 0;
	var Static_29 = 0;
	var Static_30 = 0;
	float Static_31 = 0f;
	float Static_32 = 0f;
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
	var Static_63 = 0;
	var Static_64 = 0;
	float Static_65 = 0f;
	float Static_66 = 0f;
#endregion

void main() // Position - 0x0
{
	var uVar0;
	bool bVar2;

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
	Static_26 = 3;
	Static_27 = 0f;
	Static_31 = -0.0375f;
	Static_32 = 0.17f;
	Static_38 = 1;
	Static_39 = 65;
	Static_40 = 49;
	Static_41 = 64;
	Static_61 = (0.05f + 0.275f) - 0.01f;
	Static_65 = 0.952f;
	Static_66 = 0.949f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	while (true)
	{
		if (func_260(&uVar0, 5, false))
			func_44();
	
		if (Global_1679155.f_1 == false)
			bVar2 = true;
	
		func_43();
		func_42();
		func_11();
	
		if (bVar2)
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("timerbar_lines");
			func_1();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		BUILTIN::WAIT(0);
	}
}

void func_1() // Position - 0xEA
{
	int iVar0;
	var uVar1;

	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1679155 = 0;
	Global_1679155.f_1 = 0;

	for (iVar0 = 0; iVar0 < 10; iVar0 = iVar0 + 1)
	{
		Global_1679155.f_2[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_23[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_44[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_65[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_86[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_107[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_128[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_149[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_170[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_191[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_212[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_233[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_254[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_275[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_296[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_317[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_338[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_359[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_506[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_527[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_548[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_569[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_590[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_611[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_632[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_653[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_674[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_695[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_716[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_737[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_758[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_779[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_800[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_821[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_905[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_1129[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_937[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_969[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_1001[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_1033[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_1065[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_1097[iVar0 /*2*/] = { uVar1 };
		Global_1679155.f_926[iVar0] = 0;
		Global_1679155.f_958[iVar0] = 0;
		Global_1679155.f_990[iVar0] = 0;
		Global_1679155.f_1022[iVar0] = 0;
		Global_1679155.f_1054[iVar0] = 0;
		Global_1679155.f_1086[iVar0] = 0;
		Global_1679155.f_1118[iVar0] = 0;
		Global_1679155.f_1150[iVar0] = 0;
	}

	for (iVar0 = 0; iVar0 < 15; iVar0 = iVar0 + 1)
	{
		Global_1679155.f_7064[iVar0] = 0;
		Global_1679155.f_7080[iVar0] = 0;
		Global_1679155.f_7096[iVar0] = 0;
		Global_1679155.f_7112[iVar0] = 0;
	}

	Global_1679155.f_7128 = 0;
	Global_1679155.f_7129 = 0f;
}

void func_2() // Position - 0x4A5
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_172 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_5115), &uVar0, 227);
	else
		Global_1679155.f_5115 = { uVar0 };
}

void func_3() // Position - 0x507
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_172 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;
	uVar0.f_227 = 10;
	uVar0.f_238 = 10;
	uVar0.f_249 = 10;
	uVar0.f_260 = 10;
	uVar0.f_271 = 10;
	uVar0.f_282 = 10;
	uVar0.f_303 = 10;
	uVar0.f_314 = 10;
	uVar0.f_325 = 10;
	uVar0.f_336 = 10;
	uVar0.f_357 = 10;
	uVar0.f_368 = 10;
	uVar0.f_379 = 10;
	uVar0.f_390 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_4714), &uVar0, 401);
	else
		Global_1679155.f_4714 = { uVar0 };
}

void func_4() // Position - 0x5D9
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_172 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;
	uVar0.f_227 = 10;
	uVar0.f_238 = 10;
	uVar0.f_249 = 10;
	uVar0.f_260 = 10;
	uVar0.f_271 = 10;
	uVar0.f_282 = 10;
	uVar0.f_443 = 10;
	uVar0.f_454 = 10;
	uVar0.f_465 = 10;
	uVar0.f_486 = 10;
	uVar0.f_497 = 10;
	uVar0.f_508 = 10;
	uVar0.f_519 = 10;
	uVar0.f_530 = 10;
	uVar0.f_541 = 10;
	uVar0.f_552 = 10;
	uVar0.f_563 = 10;
	uVar0.f_574 = 10;
	uVar0.f_585 = 10;
	uVar0.f_596 = 10;
	uVar0.f_607 = 10;
	uVar0.f_618 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_4085), &uVar0, 629);
	else
		Global_1679155.f_4085 = { uVar0 };
}

void func_5() // Position - 0x6EB
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_172 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;
	uVar0.f_227 = 10;
	uVar0.f_238 = 10;
	uVar0.f_259 = 10;
	uVar0.f_270 = 10;
	uVar0.f_281 = 10;
	uVar0.f_292 = 10;
	uVar0.f_303 = 10;
	uVar0.f_314 = 10;
	uVar0.f_325 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_3749), &uVar0, 336);
	else
		Global_1679155.f_3749 = { uVar0 };
}

void func_6() // Position - 0x796
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_172 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;
	uVar0.f_227 = 10;
	uVar0.f_238 = 10;
	uVar0.f_259 = 10;
	uVar0.f_270 = 10;
	uVar0.f_281 = 10;
	uVar0.f_292 = 10;
	uVar0.f_303 = 10;
	uVar0.f_314 = 10;
	uVar0.f_325 = 10;
	uVar0.f_336 = 10;
	uVar0.f_347 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_3391), &uVar0, 358);
	else
		Global_1679155.f_3391 = { uVar0 };
}

void func_7() // Position - 0x851
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_172 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;
	uVar0.f_227 = 10;
	uVar0.f_248 = 10;
	uVar0.f_259 = 10;
	uVar0.f_420 = 10;
	uVar0.f_431 = 10;
	uVar0.f_442 = 10;
	uVar0.f_453 = 10;
	uVar0.f_464 = 10;
	uVar0.f_475 = 10;
	uVar0.f_486 = 10;
	uVar0.f_497 = 10;
	uVar0.f_508 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_2872), &uVar0, 519);
	else
		Global_1679155.f_2872 = { uVar0 };
}

void func_8() // Position - 0x914
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_22 = 10;
	uVar0.f_33 = 10;
	uVar0.f_44 = 10;
	uVar0.f_55 = 10;
	uVar0.f_66 = 10;
	uVar0.f_77 = 10;
	uVar0.f_88 = 10;
	uVar0.f_99 = 10;
	uVar0.f_260 = 10;
	uVar0.f_271 = 10;
	uVar0.f_282 = 10;
	uVar0.f_293 = 10;
	uVar0.f_304 = 10;
	uVar0.f_315 = 10;
	uVar0.f_326 = 10;
	uVar0.f_357 = 10;
	uVar0.f_368 = 10;
	uVar0.f_379 = 10;
	uVar0.f_390 = 10;
	uVar0.f_401 = 10;
	uVar0.f_412 = 10;
	uVar0.f_423 = 10;
	uVar0.f_434 = 10;
	uVar0.f_445 = 10;
	uVar0.f_456 = 10;
	uVar0.f_467 = 10;
	uVar0.f_478 = 10;
	uVar0.f_489 = 10;
	uVar0.f_500 = 10;
	uVar0.f_511 = 10;
	uVar0.f_522 = 10;
	uVar0.f_533 = 10;
	uVar0.f_544 = 10;
	uVar0.f_555 = 10;
	uVar0.f_576 = 10;
	uVar0.f_587 = 10;
	uVar0.f_598 = 10;
	uVar0.f_609 = 10;
	uVar0.f_620 = 10;
	uVar0.f_631 = 10;
	uVar0.f_642 = 10;
	uVar0.f_653 = 10;
	uVar0.f_664 = 10;
	uVar0.f_675 = 10;
	uVar0.f_686 = 10;
	uVar0.f_697 = 10;
	uVar0.f_708 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_2153), &uVar0, 719);
	else
		Global_1679155.f_2153 = { uVar0 };
}

void func_9() // Position - 0xAC6
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_22 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;
	uVar0.f_227 = 10;
	uVar0.f_258 = 10;
	uVar0.f_269 = 10;
	uVar0.f_280 = 10;
	uVar0.f_301 = 10;
	uVar0.f_312 = 10;
	uVar0.f_323 = 10;
	uVar0.f_334 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_1808), &uVar0, 345);
	else
		Global_1679155.f_1808 = { uVar0 };
}

void func_10() // Position - 0xB6A
{
	var uVar0;

	uVar0 = 10;
	uVar0.f_11 = 10;
	uVar0.f_22 = 10;
	uVar0.f_183 = 10;
	uVar0.f_194 = 10;
	uVar0.f_205 = 10;
	uVar0.f_216 = 10;
	uVar0.f_227 = 10;
	uVar0.f_238 = 10;
	uVar0.f_269 = 10;
	uVar0.f_280 = 10;
	uVar0.f_291 = 10;
	uVar0.f_312 = 10;
	uVar0.f_323 = 10;
	uVar0.f_334 = 10;
	uVar0.f_345 = 10;
	uVar0.f_356 = 10;
	uVar0.f_367 = 10;
	uVar0.f_378 = 10;
	uVar0.f_389 = 10;
	uVar0.f_400 = 10;
	uVar0.f_411 = 10;
	uVar0.f_422 = 10;
	uVar0.f_433 = 10;
	uVar0.f_444 = 10;
	uVar0.f_455 = 10;
	uVar0.f_466 = 10;
	uVar0.f_477 = 10;
	uVar0.f_488 = 10;
	uVar0.f_499 = 10;
	uVar0.f_510 = 10;
	uVar0.f_521 = 10;
	uVar0.f_532 = 10;
	uVar0.f_543 = 10;
	uVar0.f_554 = 10;
	uVar0.f_565 = 10;
	uVar0.f_576 = 10;
	uVar0.f_587 = 10;
	uVar0.f_598 = 10;
	uVar0.f_609 = 10;
	uVar0.f_620 = 10;

	if (Global_2673273)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1679155.f_1177), &uVar0, 631);
	else
		Global_1679155.f_1177 = { uVar0 };
}

void func_11() // Position - 0xCDD
{
	int iVar0;

	func_41();
	Global_1679155 = 0;
	Global_1679155.f_1162 = 0.725f;
	Global_1679155.f_1161 = func_32();
	Global_1679155.f_1 = 0;
	Global_1679155.f_1163 = 0;
	Global_1679155.f_1164 = 0;
	Global_1679155.f_1165 = 0;
	Global_1679155.f_1166 = 0;
	Global_1679155.f_1167 = 0;
	Global_1679155.f_1168 = 0;
	Global_1679155.f_1169 = 0;
	Global_1679155.f_1170 = 0;
	Global_1679155.f_1171 = 0;
	Global_1679155.f_1172 = 0;
	Global_1679155.f_1173 = 0;
	Global_1679155.f_1174 = 0;
	Global_1679155.f_1175 = 0;
	Global_1679155.f_1176 = 0;
	Global_2698880 = 0;
	Global_2696996 = false;
	Global_2696997 = 0;
	Global_2698855 = 1;
	Global_2699580 = false;

	if (func_31(3))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(3, iVar0) && func_29(3, iVar0))
			{
				func_28(iVar0);
				func_27(3, iVar0);
			}
		}
	}

	if (func_31(6))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(6, iVar0) && func_29(6, iVar0))
			{
				func_26(iVar0);
				func_27(6, iVar0);
			}
		}
	}

	if (func_31(7))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(7, iVar0) && func_29(7, iVar0))
			{
				func_25(iVar0);
				func_27(7, iVar0);
			}
		}
	}

	if (func_31(4))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(4, iVar0) && func_29(4, iVar0))
			{
				func_24(iVar0);
				func_27(4, iVar0);
			}
		}
	}

	if (func_31(5))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(5, iVar0) && func_29(5, iVar0))
			{
				func_23(iVar0);
				func_27(5, iVar0);
			}
		}
	}

	if (func_31(1))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(1, iVar0) && func_29(1, iVar0))
			{
				func_22(iVar0);
				func_27(1, iVar0);
			}
		}
	}

	if (func_31(0))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(0, iVar0) && func_29(0, iVar0))
			{
				func_21(iVar0);
				func_27(0, iVar0);
			}
		}
	}

	if (func_31(2))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(2, iVar0) && func_29(2, iVar0) == false)
			{
				func_20(iVar0);
				func_27(2, iVar0);
			}
		}
	}

	if (func_31(8))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(8, iVar0) && func_29(8, iVar0) == false)
			{
				func_19(iVar0);
				func_27(8, iVar0);
			}
		}
	}

	if (func_31(9))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(9, iVar0) && func_29(9, iVar0) == false)
			{
				func_18(iVar0);
				func_27(9, iVar0);
			}
		}
	}

	if (func_31(10))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(10, iVar0) && func_29(10, iVar0) == false)
			{
				func_16(iVar0);
				func_27(10, iVar0);
			}
		}
	}

	if (func_31(11))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(11, iVar0) && func_29(11, iVar0) == false)
			{
				func_15(iVar0);
				func_27(11, iVar0);
			}
		}
	}

	if (func_31(12))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(12, iVar0) && func_29(12, iVar0) == false)
			{
				func_14(iVar0);
				func_27(12, iVar0);
			}
		}
	}

	if (func_31(13))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(13, iVar0) && func_29(13, iVar0) == false)
			{
				func_13(iVar0);
				func_27(13, iVar0);
			}
		}
	}

	if (func_31(14))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(14, iVar0) && func_29(14, iVar0) == false)
			{
				func_12(iVar0);
				func_27(14, iVar0);
			}
		}
	}
}

void func_12(int iParam0) // Position - 0x1163
{
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_6676[iParam0 /*16*/], "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_6676.f_161[iParam0 /*16*/], "", 64);
	Global_1679155.f_6676.f_322[iParam0] = false;
	Global_1679155.f_6676.f_333[iParam0] = false;
	Global_1679155.f_6676.f_344[iParam0] = 2;
	Global_1679155.f_6676.f_355[iParam0] = false;
	Global_1679155.f_6676.f_366[iParam0] = false;
	Global_1679155.f_6676.f_377[iParam0] = 0;
}

void func_13(int iParam0) // Position - 0x11E7
{
	Global_1679155.f_6445[iParam0] = false;
	Global_1679155.f_6445.f_11[iParam0] = 0;
	Global_1679155.f_6445.f_22[iParam0] = 0;
	Global_1679155.f_6445.f_33[iParam0] = 0;
	Global_1679155.f_6445.f_44[iParam0] = 0;
	Global_1679155.f_6445.f_55[iParam0] = 0;
	Global_1679155.f_6445.f_66[iParam0] = 0;
	Global_1679155.f_6445.f_77[iParam0] = 0;
	Global_1679155.f_6445.f_88[iParam0] = 0;
	Global_1679155.f_6445.f_99[iParam0] = 0;
	Global_1679155.f_6445.f_110[iParam0] = 0;
	Global_1679155.f_6445.f_121[iParam0] = 0;
	Global_1679155.f_6445.f_132[iParam0] = 0;
	Global_1679155.f_6445.f_143[iParam0] = 2;
	Global_1679155.f_6445.f_154[iParam0] = false;
	Global_1679155.f_6445.f_165[iParam0] = false;
	Global_1679155.f_6445.f_176[iParam0] = false;
	Global_1679155.f_6445.f_187[iParam0] = false;
	Global_1679155.f_6445.f_198[iParam0] = false;
	Global_1679155.f_6445.f_209[iParam0] = false;
	Global_1679155.f_6445.f_220[iParam0] = -1;
}

void func_14(int iParam0) // Position - 0x1313
{
	Global_1679155.f_6043[iParam0] = false;
	Global_1679155.f_6043.f_11[iParam0] = false;
	Global_1679155.f_6043.f_22[iParam0] = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_6043.f_33[iParam0 /*6*/], "", 24);
	Global_1679155.f_6043.f_94[iParam0] = 0;
	Global_1679155.f_6043.f_105[iParam0] = false;
	Global_1679155.f_6043.f_116[iParam0] = false;
	Global_1679155.f_6043.f_127[iParam0] = 0;
	Global_1679155.f_6043.f_138[iParam0] = 0;
	Global_1679155.f_6043.f_149[iParam0] = 0;
	Global_1679155.f_6043.f_160[iParam0] = 0;
	Global_1679155.f_6043.f_171[iParam0] = 0;
	Global_1679155.f_6043.f_182[iParam0] = 0;
	Global_1679155.f_6043.f_193[iParam0] = 0;
	Global_1679155.f_6043.f_204[iParam0] = 0;
	Global_1679155.f_6043.f_215[iParam0] = 0;
	Global_1679155.f_6043.f_226[iParam0] = 0;
	Global_1679155.f_6043.f_237[iParam0] = 2;
	Global_1679155.f_6043.f_248[iParam0] = false;
	Global_1679155.f_6043.f_259[iParam0] = false;
	Global_1679155.f_6043.f_270[iParam0] = false;
	Global_1679155.f_6043.f_281[iParam0] = false;
	Global_1679155.f_6043.f_292[iParam0] = false;
	Global_1679155.f_6043.f_303[iParam0] = false;
	Global_1679155.f_6043.f_314[iParam0] = false;
	Global_1679155.f_6043.f_325[iParam0] = 0;
	Global_1679155.f_6043.f_336[iParam0] = false;
	Global_1679155.f_6043.f_347[iParam0] = false;
	Global_1679155.f_6043.f_358[iParam0] = 0;
	Global_1679155.f_6043.f_369[iParam0] = 0;
	Global_1679155.f_6043.f_380[iParam0] = false;
	Global_1679155.f_6043.f_391[iParam0] = 0;
}

void func_15(int iParam0) // Position - 0x14EA
{
	Global_1679155.f_5878[iParam0] = 0;
	Global_1679155.f_5878.f_11[iParam0] = false;
	Global_1679155.f_5878.f_22[iParam0] = false;
	Global_1679155.f_5878.f_33[iParam0] = false;
	Global_1679155.f_5878.f_44[iParam0] = false;
	Global_1679155.f_5878.f_55[iParam0] = 0;
	Global_1679155.f_5878.f_66[iParam0] = 0;
	Global_1679155.f_5878.f_77[iParam0] = 0;
	Global_1679155.f_5878.f_88[iParam0] = 0;
	Global_1679155.f_5878.f_99[iParam0] = 2;
	Global_1679155.f_5878.f_110[iParam0] = false;
	Global_1679155.f_5878.f_121[iParam0] = false;
	Global_1679155.f_5878.f_132[iParam0] = false;
	Global_1679155.f_5878.f_143[iParam0] = false;
	Global_1679155.f_5878.f_154[iParam0] = -1;
}

void func_16(int iParam0) // Position - 0x15C2
{
	Global_1679155.f_5375.f_6[iParam0] = 0;
	Global_1679155.f_5375.f_17[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_5375.f_28[iParam0 /*16*/], "", 64);
	Global_1679155.f_5375.f_189[iParam0] = -1;
	Global_1679155.f_5375.f_200[iParam0] = true;
	Global_1679155.f_5375.f_211[iParam0] = -1;
	Global_1679155.f_5375.f_222[iParam0] = 2;
	Global_1679155.f_5375.f_233[iParam0] = false;
	Global_1679155.f_5375.f_244[iParam0] = 0;
	func_17(&Global_1679155.f_5375.f_255[iParam0 /*2*/]);
	Global_1679155.f_5375.f_276[iParam0] = -1;
	Global_1679155.f_5375.f_470[iParam0] = false;
}

void func_17(int iParam0) // Position - 0x167B
{
	iParam0->f_1 = 0;
}

void func_18(int iParam0) // Position - 0x1688
{
	Global_1679155.f_5342[iParam0] = 0;
	Global_1679155.f_5342.f_11[iParam0] = 1;
	Global_1679155.f_5342.f_22[iParam0] = 2;
}

void func_19(int iParam0) // Position - 0x16B8
{
	Global_1679155.f_5115[iParam0] = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_5115.f_11[iParam0 /*16*/], "", 64);
	Global_1679155.f_5115.f_172[iParam0] = false;
	Global_1679155.f_5115[iParam0] = 0f;
	Global_1679155.f_5115.f_183[iParam0] = 0;
	Global_1679155.f_5115.f_194[iParam0] = 0;
	Global_1679155.f_5115.f_205[iParam0] = 0;
	Global_1679155.f_5115.f_216[iParam0] = 2;
}

void func_20(int iParam0) // Position - 0x1730
{
	Global_1679155.f_2153[iParam0] = false;
	Global_1679155.f_2153.f_11[iParam0] = false;
	Global_1679155.f_2153.f_22[iParam0] = false;
	Global_1679155.f_2153.f_33[iParam0] = false;
	Global_1679155.f_2153.f_44[iParam0] = 0;
	Global_1679155.f_2153.f_55[iParam0] = 0;
	Global_1679155.f_2153.f_66[iParam0] = 0;
	Global_1679155.f_2153.f_77[iParam0] = 0;
	Global_1679155.f_2153.f_88[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_2153.f_99[iParam0 /*16*/], "", 64);
	Global_1679155.f_2153.f_260[iParam0] = -1;
	Global_1679155.f_2153.f_271[iParam0] = -1;
	Global_1679155.f_2153.f_282[iParam0] = 18;
	Global_1679155.f_2153.f_293[iParam0] = 6;
	Global_1679155.f_2153.f_304[iParam0] = -1;
	Global_1679155.f_2153.f_315[iParam0] = 2;
	Global_1679155.f_2153.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1679155.f_2153.f_357[iParam0] = false;
	Global_1679155.f_2153.f_368[iParam0] = 1;
	Global_1679155.f_2153.f_379[iParam0] = 1;
	Global_1679155.f_2153.f_390[iParam0] = 1;
	Global_1679155.f_2153.f_401[iParam0] = 1;
	Global_1679155.f_2153.f_412[iParam0] = 1;
	Global_1679155.f_2153.f_423[iParam0] = 1;
	Global_1679155.f_2153.f_434[iParam0] = 1;
	Global_1679155.f_2153.f_445[iParam0] = 1;
	Global_1679155.f_2153.f_456[iParam0] = 1;
	Global_1679155.f_2153.f_467[iParam0] = 1;
	Global_1679155.f_2153.f_478[iParam0] = 1;
	Global_1679155.f_2153.f_489[iParam0] = 1;
	Global_1679155.f_2153.f_500[iParam0] = 1;
	Global_1679155.f_2153.f_511[iParam0] = 1;
	Global_1679155.f_2153.f_522[iParam0] = 1;
	Global_1679155.f_2153.f_533[iParam0] = 1;
	func_17(&Global_1679155.f_2153.f_555[iParam0 /*2*/]);
	Global_1679155.f_2153.f_576[iParam0] = -1;
	Global_1679155.f_2153.f_609[iParam0] = false;
}

void func_21(int iParam0) // Position - 0x196B
{
	Global_1679155.f_1177[iParam0] = false;
	Global_1679155.f_1177.f_11[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_1177.f_22[iParam0 /*16*/], "", 64);
	Global_1679155.f_1177.f_183[iParam0] = -1;
	Global_1679155.f_1177.f_194[iParam0] = true;
	Global_1679155.f_1177.f_205[iParam0] = -1;
	Global_1679155.f_1177.f_227[iParam0] = 2;
	Global_1679155.f_1177.f_238[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1679155.f_1177.f_269[iParam0] = false;
	Global_1679155.f_1177.f_280[iParam0] = 0;
	func_17(&Global_1679155.f_1177.f_291[iParam0 /*2*/]);
	Global_1679155.f_1177.f_312[iParam0] = -1;
	Global_1679155.f_1177.f_345[iParam0] = false;
	Global_1679155.f_1177.f_356[iParam0] = 0;
	Global_1679155.f_1177.f_367[iParam0] = false;
	Global_1679155.f_1177.f_455[iParam0] = 1;
	Global_1679155.f_1177.f_466[iParam0] = -1;
}

void func_22(int iParam0) // Position - 0x1A7B
{
	Global_1679155.f_1808[iParam0] = false;
	Global_1679155.f_1808.f_11[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_1808.f_22[iParam0 /*16*/], "", 64);
	Global_1679155.f_1808.f_183[iParam0] = -1;
	Global_1679155.f_1808.f_194[iParam0] = 1;
	Global_1679155.f_1808.f_205[iParam0] = -1;
	Global_1679155.f_1808.f_216[iParam0] = 2;
	Global_1679155.f_1808.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1679155.f_1808.f_258[iParam0] = false;
	Global_2739947[iParam0] = 0;
	Global_2739958[iParam0] = 0;
	Global_2739969[iParam0] = 0;
	Global_2739980[iParam0] = 0;
	Global_2739991[iParam0] = 0;
	Global_2740002[iParam0] = 0;
	Global_2740013[iParam0] = 0;
	Global_2740024[iParam0] = 0;
	Global_2740035[iParam0] = false;
	Global_2740046[iParam0] = false;
	Global_2740057[iParam0] = false;
	Global_2740068[iParam0] = false;
	Global_2740079[iParam0] = false;
	Global_2740090[iParam0] = false;
	Global_2740101[iParam0] = false;
	Global_2740112[iParam0] = false;
	func_17(&Global_1679155.f_1808.f_280[iParam0 /*2*/]);
	Global_1679155.f_1808.f_301[iParam0] = -1;
}

void func_23(int iParam0) // Position - 0x1BC1
{
	Global_1679155.f_3749[iParam0] = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_3749.f_11[iParam0 /*16*/], "", 64);
	Global_1679155.f_3749.f_172[iParam0] = -1;
	Global_1679155.f_3749.f_183[iParam0] = -1;
	Global_1679155.f_3749.f_194[iParam0] = 1;
	Global_1679155.f_3749.f_205[iParam0] = -1;
	Global_1679155.f_3749.f_216[iParam0] = 2;
	Global_1679155.f_3749.f_227[iParam0] = false;
	func_17(&Global_1679155.f_3749.f_238[iParam0 /*2*/]);
	Global_1679155.f_3749.f_259[iParam0] = -1;
	Global_1679155.f_3749.f_314[iParam0] = false;
	Global_1679155.f_3749.f_325[iParam0] = 0;
}

void func_24(int iParam0) // Position - 0x1C79
{
	Global_1679155.f_3391[iParam0] = -1;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_3391.f_11[iParam0 /*16*/], "", 64);
	Global_1679155.f_3391.f_172[iParam0] = -1;
	Global_1679155.f_3391.f_183[iParam0] = -1;
	Global_1679155.f_3391.f_194[iParam0] = 1;
	Global_1679155.f_3391.f_205[iParam0] = -1;
	Global_1679155.f_3391.f_216[iParam0] = 2;
	Global_1679155.f_3391.f_227[iParam0] = false;
	func_17(&Global_1679155.f_3391.f_238[iParam0 /*2*/]);
	Global_1679155.f_3391.f_259[iParam0] = -1;
}

void func_25(int iParam0) // Position - 0x1D13
{
	Global_1679155.f_4714[iParam0] = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_4714.f_11[iParam0 /*16*/], "", 64);
	Global_1679155.f_4714.f_172[iParam0] = -1;
	Global_1679155.f_4714.f_183[iParam0] = -1;
	Global_1679155.f_4714.f_194[iParam0] = 0;
	Global_1679155.f_4714.f_205[iParam0] = 1;
	Global_1679155.f_4714.f_216[iParam0] = 0;
	Global_1679155.f_4714.f_227[iParam0] = -1;
	Global_1679155.f_4714.f_249[iParam0] = 2;
	Global_1679155.f_4714.f_260[iParam0] = false;
	func_17(&Global_1679155.f_4714.f_282[iParam0 /*2*/]);
	Global_1679155.f_4714.f_303[iParam0] = -1;
}

void func_26(int iParam0) // Position - 0x1DCB
{
	Global_1679155.f_4085[iParam0] = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_4085.f_11[iParam0 /*16*/], "", 64);
	Global_1679155.f_4085.f_172[iParam0] = -1;
	Global_1679155.f_4085.f_183[iParam0] = true;
	Global_1679155.f_4085.f_194[iParam0] = -1;
	Global_1679155.f_4085.f_260[iParam0] = 2;
	Global_1679155.f_4085.f_271[iParam0] = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_4085.f_282[iParam0 /*16*/], "", 64);
	Global_1679155.f_4085.f_443[iParam0] = 0;
	Global_1679155.f_4085.f_454[iParam0] = -1f;
	func_17(&Global_1679155.f_4085.f_465[iParam0 /*2*/]);
	Global_1679155.f_4085.f_486[iParam0] = -1;
	Global_1679155.f_4085.f_519[iParam0] = 0;
}

void func_27(int iParam0, int iParam1) // Position - 0x1E9A
{
	MISC::CLEAR_BIT(&Global_1679155.f_7096[iParam0], iParam1);
}

void func_28(int iParam0) // Position - 0x1EB3
{
	Global_1679155.f_2872[iParam0] = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_1679155.f_2872.f_11[iParam0 /*16*/], "", 64);
	Global_1679155.f_2872.f_172[iParam0] = -1;
	Global_1679155.f_2872.f_183[iParam0] = 1;
	Global_1679155.f_2872.f_194[iParam0] = -1;
	Global_1679155.f_2872.f_205[iParam0] = 2;
	Global_1679155.f_2872.f_216[iParam0] = false;
	func_17(&Global_1679155.f_2872.f_227[iParam0 /*2*/]);
	Global_1679155.f_2872.f_248[iParam0] = -1;
	Global_1679155.f_2872.f_508[iParam0] = 0;
}

bool func_29(int iParam0, int iParam1) // Position - 0x1F4D
{
	return IS_BIT_SET(Global_1679155.f_7064[iParam0], iParam1);
}

bool func_30(int iParam0, int iParam1) // Position - 0x1F63
{
	return IS_BIT_SET(Global_1679155.f_7096[iParam0], iParam1);
}

bool func_31(int iParam0) // Position - 0x1F79
{
	if (Global_1679155.f_7064[iParam0] > 0)
		return true;

	return false;
}

float func_32() // Position - 0x1F95
{
	float fVar0;

	fVar0 = 0.925f - 0.002f;
	fVar0 = fVar0 + (-0.036f * (float)Global_1679155.f_1163);

	if (Global_1679155.f_1164 == 1)
		fVar0 = fVar0 + -0.15f;
	else if (Global_1679155.f_1165 == 1)
		fVar0 = fVar0 + (-0.048f - 0.753f);

	if (Global_1679155.f_1168 == true)
		fVar0 = fVar0 + -0.919f;

	if (Global_1679155.f_1169 == 1)
		fVar0 = fVar0 + -0.184f;

	if (Global_1679155.f_1170 == 1)
		fVar0 = fVar0 + -0.522f;

	if (Global_1679155.f_1166 == 1 && Global_1679155.f_1167 == 0)
	{
		switch (func_34())
		{
			case 0:
				fVar0 = fVar0 + -0.405f;
				break;
		
			case 2:
				fVar0 = fVar0 + -0.405f;
				break;
		
			case 1:
				fVar0 = fVar0 + -0.414f;
				break;
		
			default:
				if (!func_33())
					fVar0 = fVar0 + -0.405f;
				break;
		}
	}

	return fVar0;
}

bool func_33() // Position - 0x20A2
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPCAMERA")) > 0)
		return true;

	return false;
}

int func_34() // Position - 0x20BF
{
	func_35();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_35() // Position - 0x20D8
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
		
			if (func_37(iVar0) && !func_36(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_37(Global_114931.f_2370.f_539.f_4321))
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

bool func_36(int iParam0) // Position - 0x21D5
{
	return Global_44886 == iParam0;
}

bool func_37(int iParam0) // Position - 0x21E3
{
	return iParam0 < 3;
}

int func_38(var uParam0) // Position - 0x21EF
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_39(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_39(int iParam0) // Position - 0x222C
{
	if (func_37(iParam0))
		return func_40(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_40(int iParam0) // Position - 0x2251
{
	return Global_2339[iParam0 /*29*/];
}

void func_41() // Position - 0x2260
{
	Global_1688687 = Global_1679155;
	Global_1688688 = Global_1679155.f_1163;
}

void func_42() // Position - 0x227B
{
	int iVar0;

	for (iVar0 = 0; iVar0 <= 14; iVar0 = iVar0 + 1)
	{
		Global_1679155.f_7064[iVar0] = 0;
	}
}

void func_43() // Position - 0x22A2
{
	Global_2698725 = false;
}

void func_44() // Position - 0x22AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	uVar3 = 12;

	if (HUD::BUSYSPINNER_IS_DISPLAYING())
		if (Global_1679155.f_1163 == 0)
			func_259(1);

	func_255();

	if (func_250())
	{
		if (MISC::GET_FRAME_COUNT() % 100 == 0)
			if (func_244(PLAYER::PLAYER_ID()))
				func_243();
	
		if (func_242())
			Global_1677594.f_1188 = 1;
	
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			iVar16 = 0;
		
			if (func_29(7, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_4085.f_260[iVar0];
		
			iVar16 = 1;
		
			if (func_29(3, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_2872.f_205[iVar0];
		
			iVar16 = 2;
		
			if (func_29(4, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_3391.f_216[iVar0];
		
			iVar16 = 3;
		
			if (func_29(5, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_3749.f_216[iVar0];
		
			iVar16 = 4;
		
			if (func_29(1, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_1808.f_216[iVar0];
		
			iVar16 = 5;
		
			if (func_29(0, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_1177.f_227[iVar0];
		
			iVar16 = 6;
		
			if (func_29(6, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_4085.f_260[iVar0];
		
			iVar16 = 7;
		
			if (func_29(2, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_2153.f_315[iVar0];
		
			iVar16 = 8;
		
			if (func_29(8, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5115.f_216[iVar0];
		
			iVar16 = 9;
		
			if (func_29(9, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5342.f_22[iVar0];
		
			iVar16 = 10;
		
			if (func_29(10, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5375.f_222[iVar0];
		
			iVar16 = 11;
		
			if (func_29(11, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5878.f_99[iVar0];
		
			iVar16 = 12;
		
			if (func_29(12, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_6043.f_237[iVar0];
		
			iVar16 = 13;
		
			if (func_29(13, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_6445.f_143[iVar0];
		
			iVar16 = 14;
		
			if (func_29(14, iVar0))
				Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_6676.f_344[iVar0];
		}
	
		iVar16 = 0;
	
		if (Global_1677594.f_1188 == 1)
		{
			for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
			{
				iVar16 = 0;
			
				if (func_29(7, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_4714.f_249[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_4714.f_249[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_4714.f_249[iVar0] == 2 || Global_1679155.f_4714.f_249[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_4714.f_249[iVar0] == 13 || Global_1679155.f_4714.f_249[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_4714.f_249[iVar0];
				}
			
				iVar16 = 1;
			
				if (func_29(3, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_2872.f_205[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_2872.f_205[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_2872.f_205[iVar0] == 2 || Global_1679155.f_2872.f_205[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_2872.f_205[iVar0] == 13 || Global_1679155.f_2872.f_205[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_2872.f_205[iVar0];
				}
			
				iVar16 = 2;
			
				if (func_29(4, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_3391.f_216[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_3391.f_216[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_3391.f_216[iVar0] == 2 || Global_1679155.f_3391.f_216[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_3391.f_216[iVar0] == 13 || Global_1679155.f_3391.f_216[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_3391.f_216[iVar0];
				}
			
				iVar16 = 3;
			
				if (func_29(5, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_3749.f_216[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_3749.f_216[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_3749.f_216[iVar0] == 2 || Global_1679155.f_3749.f_216[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_3749.f_216[iVar0] == 13 || Global_1679155.f_3749.f_216[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_3749.f_216[iVar0];
				}
			
				iVar16 = 4;
			
				if (func_29(1, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_1808.f_216[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_1808.f_216[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_1808.f_216[iVar0] == 2 || Global_1679155.f_1808.f_216[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_1808.f_216[iVar0] == 13 || Global_1679155.f_1808.f_216[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_1808.f_216[iVar0];
				}
			
				iVar16 = 5;
			
				if (func_29(0, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_1177.f_227[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_1177.f_227[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_1177.f_227[iVar0] == 2 || Global_1679155.f_1177.f_227[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_1177.f_227[iVar0] == 13 || Global_1679155.f_1177.f_227[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_1177.f_227[iVar0];
				}
			
				iVar16 = 6;
			
				if (func_29(6, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_4085.f_260[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_4085.f_260[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_4085.f_260[iVar0] == 2 || Global_1679155.f_4085.f_260[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_4085.f_260[iVar0] == 13 || Global_1679155.f_4085.f_260[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_4085.f_260[iVar0];
				}
			
				iVar16 = 7;
			
				if (func_29(2, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_2153.f_315[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_2153.f_315[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_2153.f_315[iVar0] == 2 || Global_1679155.f_2153.f_315[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_2153.f_315[iVar0] == 13 || Global_1679155.f_2153.f_315[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_2153.f_315[iVar0];
				}
			
				iVar16 = 8;
			
				if (func_29(8, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5115.f_216[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_5115.f_216[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5115.f_216[iVar0] == 2 || Global_1679155.f_5115.f_216[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5115.f_216[iVar0] == 13 || Global_1679155.f_5115.f_216[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_5115.f_216[iVar0];
				}
			
				iVar16 = 9;
			
				if (func_29(9, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5342.f_22[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_5342.f_22[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5342.f_22[iVar0] == 2 || Global_1679155.f_5342.f_22[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5342.f_22[iVar0] == 13 || Global_1679155.f_5342.f_22[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_5342.f_22[iVar0];
				}
			
				iVar16 = 10;
			
				if (func_29(10, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5375.f_222[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_5375.f_222[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5375.f_222[iVar0] == 2 || Global_1679155.f_5375.f_222[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5375.f_222[iVar0] == 13 || Global_1679155.f_5375.f_222[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_5375.f_222[iVar0];
				}
			
				iVar16 = 11;
			
				if (func_29(11, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_5878.f_99[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_5878.f_99[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5878.f_99[iVar0] == 2 || Global_1679155.f_5878.f_99[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_5878.f_99[iVar0] == 13 || Global_1679155.f_5878.f_99[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_5878.f_99[iVar0];
				}
			
				iVar16 = 12;
			
				if (func_29(12, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_6043.f_237[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_6043.f_237[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_6043.f_237[iVar0] == 2 || Global_1679155.f_6043.f_237[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_6043.f_237[iVar0] == 13 || Global_1679155.f_6043.f_237[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_6043.f_237[iVar0];
				}
			
				iVar16 = 13;
			
				if (func_29(13, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_6445.f_143[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_6445.f_143[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_6445.f_143[iVar0] == 2 || Global_1679155.f_6445.f_143[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_6445.f_143[iVar0] == 13 || Global_1679155.f_6445.f_143[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_6445.f_143[iVar0];
				}
			
				iVar16 = 14;
			
				if (func_29(14, iVar0))
				{
					Global_1677594.f_1189[iVar16 /*11*/][iVar0] = Global_1679155.f_6676.f_344[iVar0];
				
					if (Global_1677594.f_1189[iVar16 /*11*/][iVar0] != 1)
						if (Global_1677594.f_1355[iVar16 /*11*/][iVar0] != Global_1679155.f_6676.f_344[iVar0] && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_6676.f_344[iVar0] == 2 || Global_1679155.f_6676.f_344[iVar0] != 2 && Global_1677594.f_1355[iVar16 /*11*/][iVar0] == 0 && Global_1679155.f_6676.f_344[iVar0] == 13 || Global_1679155.f_6676.f_344[iVar0] != 13)
							Global_1677594.f_1355[iVar16 /*11*/][iVar0] = Global_1679155.f_6676.f_344[iVar0];
				}
			}
		
			for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
			{
				for (iVar1 = 0; iVar1 <= 14; iVar1 = iVar1 + 1)
				{
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] != Global_1677594.f_1355[iVar1 /*11*/][iVar0])
						Global_1677594.f_1355[iVar1 /*11*/][iVar0] = 0;
				}
			}
		
			for (iVar2 = 0; iVar2 <= 11; iVar2 = iVar2 + 1)
			{
				uVar3[iVar2] = 0;
			}
		
			for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
			{
				for (iVar1 = 0; iVar1 <= 14; iVar1 = iVar1 + 1)
				{
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 3)
						uVar3[0] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 4)
						uVar3[1] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 5)
						uVar3[2] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 6)
						uVar3[3] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 7)
						uVar3[4] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 8)
						uVar3[5] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 9)
						uVar3[6] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 10)
						uVar3[7] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 11)
						uVar3[8] = 1;
				
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 12)
						uVar3[9] = 1;
				}
			}
		
			for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
			{
				for (iVar1 = 0; iVar1 <= 14; iVar1 = iVar1 + 1)
				{
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 2)
					{
						for (iVar2 = 0; iVar2 <= 11; iVar2 = iVar2 + 1)
						{
							if (uVar3[iVar2] == 0)
							{
								Global_1677594.f_1189[iVar1 /*11*/][iVar0] = iVar2 + 3;
								uVar3[iVar2] = 1;
								Global_1677594.f_1355[iVar1 /*11*/][iVar0] = Global_1677594.f_1189[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
						}
					}
				}
			}
		
			for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
			{
				for (iVar1 = 0; iVar1 <= 14; iVar1 = iVar1 + 1)
				{
					if (Global_1677594.f_1189[iVar1 /*11*/][iVar0] == 13)
					{
						for (iVar2 = 11; iVar2 >= 1; iVar2 = iVar2 + -1)
						{
							if (uVar3[iVar2] == 0 && uVar3[iVar2 - 1] == 1)
							{
								Global_1677594.f_1189[iVar1 /*11*/][iVar0] = iVar2 + 3;
								uVar3[iVar2] = 1;
								Global_1677594.f_1355[iVar1 /*11*/][iVar0] = Global_1677594.f_1189[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && uVar3[0] == 0)
							{
								Global_1677594.f_1189[iVar1 /*11*/][iVar0] = 3;
								uVar3[0] = 1;
								Global_1677594.f_1355[iVar1 /*11*/][iVar0] = Global_1677594.f_1189[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
						}
					}
				}
			}
		
			Global_1677594.f_1188 = 0;
		}
	
		if (Global_1679155.f_1168)
			iVar17 = 84;
		else
			iVar17 = 66;
	
		if (func_250())
		{
			for (iVar1 = 0; iVar1 <= 15; iVar1 = iVar1 + 1)
			{
				if (func_241(0))
				{
					if (func_31(func_239(0)))
					{
						for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
						{
							iVar18 = func_238(func_239(0));
						
							if (func_237(iVar18))
							{
								if (Global_1677594.f_1355[iVar18 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[iVar18 /*11*/][iVar0] == 1)
								{
									if (func_233(Global_1677594.f_1189[iVar18 /*11*/][iVar0]))
									{
										func_229(true);
									
										if (Global_1679155.f_1165 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
										}
									
										func_228(func_239(0), iVar0);
									
										if (Global_1679155.f_1165 == 0)
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
									
										func_229(false);
									}
								}
							}
						}
					}
				}
			
				if (func_241(1))
				{
					if (func_31(func_239(1)))
					{
						for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
						{
							iVar19 = func_238(func_239(1));
						
							if (func_237(iVar19))
							{
								if (Global_1677594.f_1355[iVar19 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[iVar19 /*11*/][iVar0] == 1)
								{
									if (func_233(Global_1677594.f_1189[iVar19 /*11*/][iVar0]))
									{
										func_229(true);
									
										if (Global_1679155.f_1165 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
										}
									
										func_228(func_239(1), iVar0);
									
										if (Global_1679155.f_1165 == 0)
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
									
										func_229(false);
									}
								}
							}
						}
					}
				}
			
				if (func_31(7) && !func_227(7))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[0 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[0 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[0 /*11*/][iVar0]))
							{
								func_229(true);
							
								if (Global_1679155.f_1165 == 0)
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								}
							
								func_211(iVar0, Global_1679155.f_4714[iVar0], &Global_1679155.f_4714.f_11[iVar0 /*16*/], Global_1679155.f_4714.f_172[iVar0], Global_1679155.f_4714.f_194[iVar0], Global_1679155.f_4714.f_216[iVar0], Global_1679155.f_4714.f_205[iVar0], Global_1679155.f_4714.f_183[iVar0], Global_1679155.f_4714.f_227[iVar0], Global_1679155.f_4714.f_260[iVar0], Global_1679155.f_4714.f_314[iVar0], Global_1679155.f_4714.f_325[iVar0], Global_1679155.f_4714.f_357[iVar0], Global_1679155.f_4714.f_238[iVar0], Global_1679155.f_4714.f_271[iVar0], Global_1679155.f_4714.f_368[iVar0], Global_1679155.f_4714.f_379[iVar0], Global_1679155.f_4714.f_390[iVar0]);
							
								if (Global_1679155.f_1165 == 0)
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
							
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(3) && !func_227(3))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[1 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[1 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[1 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_210(iVar0, Global_1679155.f_2872[iVar0], &Global_1679155.f_2872.f_11[iVar0 /*16*/], Global_1679155.f_2872.f_183[iVar0], Global_1679155.f_2872.f_172[iVar0], Global_1679155.f_2872.f_194[iVar0], Global_1679155.f_2872.f_216[iVar0], &Global_1679155.f_2872.f_259[iVar0 /*16*/], Global_1679155.f_2872.f_420[iVar0], Global_1679155.f_2872.f_453[iVar0], Global_1679155.f_2872.f_431[iVar0], Global_1679155.f_2872.f_442[iVar0], Global_1679155.f_2872.f_464[iVar0], Global_1679155.f_2872.f_475[iVar0], Global_1679155.f_2872.f_486[iVar0], Global_1679155.f_2872.f_497[iVar0], Global_1679155.f_2872.f_508[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(4) && !func_227(4))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[2 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[2 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[2 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_209(iVar0, Global_1679155.f_3391[iVar0], Global_1679155.f_3391.f_172[iVar0], &Global_1679155.f_3391.f_11[iVar0 /*16*/], Global_1679155.f_3391.f_194[iVar0], Global_1679155.f_3391.f_183[iVar0], Global_1679155.f_3391.f_205[iVar0], Global_1679155.f_3391.f_227[iVar0], Global_1679155.f_3391.f_270[iVar0], Global_1679155.f_3391.f_281[iVar0], Global_1679155.f_3391.f_292[iVar0], Global_1679155.f_3391.f_303[iVar0], Global_1679155.f_3391.f_314[iVar0], Global_1679155.f_3391.f_325[iVar0], Global_1679155.f_3391.f_336[iVar0], Global_1679155.f_3391.f_347[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(5) && !func_227(5))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[3 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[3 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[3 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_208(iVar0, Global_1679155.f_3749[iVar0], Global_1679155.f_3749.f_172[iVar0], &Global_1679155.f_3749.f_11[iVar0 /*16*/], Global_1679155.f_3749.f_194[iVar0], Global_1679155.f_3749.f_183[iVar0], Global_1679155.f_3749.f_205[iVar0], Global_1679155.f_3749.f_227[iVar0], Global_1679155.f_3749.f_270[iVar0], Global_1679155.f_3749.f_281[iVar0], Global_1679155.f_3749.f_292[iVar0], Global_1679155.f_3749.f_303[iVar0], Global_1679155.f_3749.f_314[iVar0], Global_1679155.f_3749.f_325[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(1) && !func_227(1))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[4 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[4 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[4 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_198(iVar0, Global_1679155.f_1808[iVar0], Global_1679155.f_1808.f_11[iVar0], &Global_1679155.f_1808.f_22[iVar0 /*16*/], Global_1679155.f_1808.f_194[iVar0], Global_1679155.f_1808.f_205[iVar0], Global_1679155.f_1808.f_258[iVar0], Global_1679155.f_1808.f_183[iVar0], Global_1679155.f_1808.f_227[iVar0 /*3*/], Global_1679155.f_1808.f_227[iVar0 /*3*/].f_1, Global_1679155.f_1808.f_312[iVar0], Global_1679155.f_1808.f_323[iVar0], Global_1679155.f_1808.f_269[iVar0], Global_2739947[iVar0], Global_2739958[iVar0], Global_2739969[iVar0], Global_2739980[iVar0], Global_2739991[iVar0], Global_2740002[iVar0], Global_2740013[iVar0], Global_2740024[iVar0], Global_1679155.f_1808.f_334[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(0) && !func_227(0))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[5 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[5 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[5 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_188(iVar0, Global_1679155.f_1177[iVar0], Global_1679155.f_1177.f_11[iVar0], &Global_1679155.f_1177.f_22[iVar0 /*16*/], Global_1679155.f_1177.f_194[iVar0], Global_1679155.f_1177.f_183[iVar0], Global_1679155.f_1177.f_238[iVar0 /*3*/], Global_1679155.f_1177.f_238[iVar0 /*3*/].f_1, Global_1679155.f_1177.f_269[iVar0], Global_1679155.f_1177.f_205[iVar0], Global_1679155.f_1177.f_280[iVar0], Global_1679155.f_1177.f_323[iVar0], Global_1679155.f_1177.f_334[iVar0], Global_1679155.f_1177.f_345[iVar0], Global_1679155.f_1177.f_356[iVar0], Global_1679155.f_1177.f_367[iVar0], Global_1679155.f_1177.f_378[iVar0], Global_1679155.f_1177.f_389[iVar0], Global_1679155.f_1177.f_400[iVar0], Global_1679155.f_1177.f_411[iVar0], Global_1679155.f_1177.f_422[iVar0], Global_1679155.f_1177.f_433[iVar0], Global_1679155.f_1177.f_444[iVar0], Global_1679155.f_1177.f_455[iVar0], Global_1679155.f_1177.f_466[iVar0], Global_1679155.f_1177.f_477[iVar0], Global_1679155.f_1177.f_488[iVar0], Global_1679155.f_1177.f_499[iVar0], Global_1679155.f_1177.f_510[iVar0], Global_1679155.f_1177.f_521[iVar0], Global_1679155.f_1177.f_532[iVar0], Global_1679155.f_1177.f_543[iVar0], Global_1679155.f_1177.f_554[iVar0], Global_1679155.f_1177.f_565[iVar0], Global_1679155.f_1177.f_576[iVar0], Global_1679155.f_1177.f_587[iVar0], Global_1679155.f_1177.f_598[iVar0], Global_1679155.f_1177.f_609[iVar0], Global_1679155.f_1177.f_620[iVar0], Global_1679155.f_1177.f_216[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(6) && !func_227(6))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[6 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[6 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[6 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_187(iVar0, Global_1679155.f_4085[iVar0], &Global_1679155.f_4085.f_11[iVar0 /*16*/], Global_1679155.f_4085.f_183[iVar0], Global_1679155.f_4085.f_172[iVar0], Global_1679155.f_4085.f_194[iVar0], Global_1679155.f_4085.f_271[iVar0], &Global_1679155.f_4085.f_282[iVar0 /*16*/], Global_1679155.f_4085.f_443[iVar0], Global_1679155.f_4085.f_454[iVar0], Global_1679155.f_4085.f_497[iVar0], Global_1679155.f_4085.f_508[iVar0], Global_1679155.f_4085.f_205[iVar0], Global_1679155.f_4085.f_216[iVar0], Global_1679155.f_4085.f_227[iVar0], Global_1679155.f_4085.f_238[iVar0], Global_1679155.f_4085.f_249[iVar0], Global_1679155.f_4085.f_519[iVar0], Global_1679155.f_4085.f_530[iVar0], Global_1679155.f_4085.f_541[iVar0], Global_1679155.f_4085.f_552[iVar0], Global_1679155.f_4085.f_563[iVar0], Global_1679155.f_4085.f_574[iVar0], Global_1679155.f_4085.f_585[iVar0], Global_1679155.f_4085.f_596[iVar0], Global_1679155.f_4085.f_607[iVar0], Global_1679155.f_4085.f_618[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(2) && !func_227(2))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[7 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[7 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[7 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_175(iVar0, Global_1679155.f_2153[iVar0], &Global_1679155.f_2153.f_99[iVar0 /*16*/], Global_1679155.f_2153.f_282[iVar0], Global_1679155.f_2153.f_293[iVar0], Global_1679155.f_2153.f_260[iVar0], Global_1679155.f_2153.f_11[iVar0], Global_1679155.f_2153.f_22[iVar0], Global_1679155.f_2153.f_33[iVar0], Global_1679155.f_2153.f_44[iVar0], Global_1679155.f_2153.f_55[iVar0], Global_1679155.f_2153.f_66[iVar0], Global_1679155.f_2153.f_77[iVar0], Global_1679155.f_2153.f_88[iVar0], Global_1679155.f_2153.f_271[iVar0], Global_1679155.f_2153.f_304[iVar0], Global_1679155.f_2153.f_357[iVar0], Global_1679155.f_2153.f_326[iVar0 /*3*/], Global_1679155.f_2153.f_326[iVar0 /*3*/].f_1, Global_1679155.f_2153.f_368[iVar0], Global_1679155.f_2153.f_379[iVar0], Global_1679155.f_2153.f_390[iVar0], Global_1679155.f_2153.f_401[iVar0], Global_1679155.f_2153.f_412[iVar0], Global_1679155.f_2153.f_423[iVar0], Global_1679155.f_2153.f_434[iVar0], Global_1679155.f_2153.f_445[iVar0], Global_1679155.f_2153.f_456[iVar0], Global_1679155.f_2153.f_467[iVar0], Global_1679155.f_2153.f_478[iVar0], Global_1679155.f_2153.f_489[iVar0], Global_1679155.f_2153.f_500[iVar0], Global_1679155.f_2153.f_511[iVar0], Global_1679155.f_2153.f_522[iVar0], Global_1679155.f_2153.f_533[iVar0], Global_1679155.f_2153.f_587[iVar0], Global_1679155.f_2153.f_598[iVar0], Global_1679155.f_2153.f_544[iVar0], Global_2740035[iVar0], Global_2740046[iVar0], Global_2740057[iVar0], Global_2740068[iVar0], Global_2740079[iVar0], Global_2740090[iVar0], Global_2740101[iVar0], Global_2740112[iVar0], Global_1679155.f_2153.f_609[iVar0], Global_1679155.f_2153.f_620[iVar0], Global_1679155.f_2153.f_631[iVar0], Global_1679155.f_2153.f_642[iVar0], Global_1679155.f_2153.f_653[iVar0], Global_1679155.f_2153.f_664[iVar0], Global_1679155.f_2153.f_675[iVar0], Global_1679155.f_2153.f_686[iVar0], Global_1679155.f_2153.f_697[iVar0], Global_1679155.f_2153.f_708[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(8) && !func_227(8))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[8 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[8 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[8 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_172(iVar0, &Global_1679155.f_5115.f_11[iVar0 /*16*/], Global_1679155.f_5115[iVar0], Global_1679155.f_5115.f_172[iVar0], Global_1679155.f_5115.f_183[iVar0], Global_1679155.f_5115.f_194[iVar0], Global_1679155.f_5115.f_205[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(9) && !func_227(9))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[9 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[9 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[9 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_167(iVar0, Global_1679155.f_5342[iVar0], Global_1679155.f_5342.f_11[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(10) && !func_227(10))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[10 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[10 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[10 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_152(iVar0, Global_1679155.f_5375.f_6[iVar0], Global_1679155.f_5375.f_17[iVar0], &Global_1679155.f_5375.f_28[iVar0 /*16*/], Global_1679155.f_5375.f_200[iVar0], Global_1679155.f_5375.f_189[iVar0], Global_1679155.f_5375.f_233[iVar0], Global_1679155.f_5375.f_211[iVar0], Global_1679155.f_5375.f_244[iVar0], Global_1679155.f_5375.f_287[iVar0], Global_1679155.f_5375.f_298[iVar0], &Global_1679155.f_5375.f_309[iVar0 /*16*/], &(Global_1679155.f_5375), Global_1679155.f_5375.f_470[iVar0], Global_1679155.f_5375.f_481[iVar0], Global_1679155.f_5375.f_492[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(11) && !func_227(11))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[11 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[11 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[11 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_149(iVar0, Global_1679155.f_5878[iVar0], Global_1679155.f_5878.f_11[iVar0], Global_1679155.f_5878.f_22[iVar0], Global_1679155.f_5878.f_33[iVar0], Global_1679155.f_5878.f_44[iVar0], Global_1679155.f_5878.f_55[iVar0], Global_1679155.f_5878.f_66[iVar0], Global_1679155.f_5878.f_77[iVar0], Global_1679155.f_5878.f_88[iVar0], Global_1679155.f_5878.f_110[iVar0], Global_1679155.f_5878.f_121[iVar0], Global_1679155.f_5878.f_132[iVar0], Global_1679155.f_5878.f_143[iVar0], Global_1679155.f_5878.f_154[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(12) && !func_227(12))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[12 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[12 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[12 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_140(iVar0, Global_1679155.f_6043[iVar0], Global_1679155.f_6043.f_22[iVar0], &Global_1679155.f_6043.f_33[iVar0 /*6*/], Global_1679155.f_6043.f_94[iVar0], Global_1679155.f_6043.f_11[iVar0], Global_1679155.f_6043.f_105[iVar0], Global_1679155.f_6043.f_116[iVar0], Global_1679155.f_6043.f_127[iVar0], Global_1679155.f_6043.f_138[iVar0], Global_1679155.f_6043.f_149[iVar0], Global_1679155.f_6043.f_160[iVar0], Global_1679155.f_6043.f_171[iVar0], Global_1679155.f_6043.f_182[iVar0], Global_1679155.f_6043.f_193[iVar0], Global_1679155.f_6043.f_204[iVar0], Global_1679155.f_6043.f_215[iVar0], Global_1679155.f_6043.f_226[iVar0], Global_1679155.f_6043.f_248[iVar0], Global_1679155.f_6043.f_259[iVar0], Global_1679155.f_6043.f_270[iVar0], Global_1679155.f_6043.f_281[iVar0], Global_1679155.f_6043.f_292[iVar0], Global_1679155.f_6043.f_303[iVar0], Global_1679155.f_6043.f_314[iVar0], Global_1679155.f_6043.f_325[iVar0], Global_1679155.f_6043.f_336[iVar0], Global_1679155.f_6043.f_347[iVar0], Global_1679155.f_6043.f_358[iVar0], Global_1679155.f_6043.f_369[iVar0], Global_1679155.f_6043.f_380[iVar0], Global_1679155.f_6043.f_391[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(13) && !func_227(13))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[13 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[13 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[13 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_135(iVar0, Global_1679155.f_6445[iVar0], Global_1679155.f_6445.f_11[iVar0], Global_1679155.f_6445.f_22[iVar0], Global_1679155.f_6445.f_33[iVar0], Global_1679155.f_6445.f_44[iVar0], Global_1679155.f_6445.f_55[iVar0], Global_1679155.f_6445.f_66[iVar0], Global_1679155.f_6445.f_77[iVar0], Global_1679155.f_6445.f_88[iVar0], Global_1679155.f_6445.f_99[iVar0], Global_1679155.f_6445.f_110[iVar0], Global_1679155.f_6445.f_121[iVar0], Global_1679155.f_6445.f_132[iVar0], Global_1679155.f_6445.f_154[iVar0], Global_1679155.f_6445.f_165[iVar0], Global_1679155.f_6445.f_176[iVar0], Global_1679155.f_6445.f_187[iVar0], Global_1679155.f_6445.f_198[iVar0], Global_1679155.f_6445.f_209[iVar0], Global_1679155.f_6445.f_220[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(14) && !func_227(14))
				{
					for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
					{
						if (Global_1677594.f_1355[14 /*11*/][iVar0] == iVar1 + 3 || Global_1677594.f_1189[14 /*11*/][iVar0] == 1)
						{
							if (func_233(Global_1677594.f_1189[14 /*11*/][iVar0]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, iVar17);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(Static_63, Static_64, Static_65, Static_66);
								func_46(iVar0, &Global_1679155.f_6676[iVar0 /*16*/], &Global_1679155.f_6676.f_161[iVar0 /*16*/], Global_1679155.f_6676.f_322[iVar0], Global_1679155.f_6676.f_333[iVar0], Global_1679155.f_6676.f_355[iVar0], Global_1679155.f_6676.f_366[iVar0], Global_1679155.f_6676.f_377[iVar0]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			}
		}
	
		func_45();
	}
}

void func_45() // Position - 0x510D
{
	int iVar0;

	for (iVar0 = 0; iVar0 <= 14; iVar0 = iVar0 + 1)
	{
		Global_1679155.f_7080[iVar0] = Global_1679155.f_7064[iVar0];
	}
}

void func_46(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7) // Position - 0x513E
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(14, iParam0))
		func_47(14, iParam0, &uVar0, &uVar11, &uVar22, &uVar24, false, 1, sParam1, bParam5, false, 0, bParam3, "", 0, 0f, 0, 0, bParam5, false, false, false, 0, 0, sParam2, false, 0, 255, false, false, false, false, 1, false, 0, -1, true, bParam4, bParam6, iParam7, 0);
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, char* sParam13, int iParam14, float fParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22, int iParam23, char* sParam24, bool bParam25, int iParam26, int iParam27, bool bParam28, bool bParam29, bool bParam30, bool bParam31, int iParam32, bool bParam33, int iParam34, bool bParam35, bool bParam36, bool bParam37, bool bParam38, int iParam39, int iParam40) // Position - 0x518F
{
	float fVar0;
	float fVar9;
	float fVar18;
	float fVar27;
	bool bVar36;
	int iVar37;
	bool bVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar50;
	float fVar51;
	float fVar52;
	float fVar53;
	float fVar54;
	int iVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar67;
	int iVar76;
	char* sVar77;
	char* sVar78;
	int iVar79;
	char* sVar80;
	char* sVar81;
	int iVar82;
	var uVar83;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		func_133(&fVar0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_133(&fVar9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_133(&fVar18, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_133(&fVar27, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (func_132())
			if (bParam25)
				func_131(uParam2, 0);
			else if (bParam12)
				func_130(uParam2, 3);
			else
				func_131(uParam2, 0);
		else if (bParam25)
			func_129(uParam2, 0);
		else if (bParam12)
			func_130(uParam2, 3);
		else
			func_129(uParam2, 0);
	
		if (Global_2696996 && bParam12)
			if (func_132())
				func_131(uParam2, 0);
			else
				func_129(uParam2, 0);
	
		if (bParam6 < 1000000)
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam15 >= 100f && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN" /* GXT: ~1~km/h */, sParam13))
				func_128(uParam3, 0, 0);
			else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && bParam6 > 999 || bParam20 > 999 || fParam15 > 1000f)
				func_128(uParam3, 0, 0);
			else if (bParam20 > 99)
				func_127(uParam3, 0, 0);
			else
				func_126(uParam3, 0, 0);
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam13) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam13))
			func_128(uParam3, 0, 0);
		else
			func_127(uParam3, 0, 0);
	
		func_124(uParam2);
		func_123(uParam3);
		uParam2->f_9 = uParam2->f_9 + (0.03f * (1f - func_121()));
		func_120(6, iParam1);
	
		if (Global_1679155 == 1)
			func_119(iParam7);
	
		func_114(uParam3, uParam4, uParam5, iParam7, uParam2);
	
		if (iParam23 == 1)
		{
			bParam18 = 2;
			bParam9 = 2;
		}
	
		func_113(uParam3, bParam9);
	
		if (bParam10 == false)
		{
			switch (iParam0)
			{
				case 3:
					func_112(iParam1);
					break;
			
				case 4:
					func_111(iParam1);
					break;
			
				case 5:
					func_110(iParam1);
					break;
			
				default:
					func_109(iParam1);
					break;
			}
		}
	
		if (iParam17 == 0)
		{
			switch (iParam0)
			{
				case 3:
					func_108(iParam1);
					break;
			
				case 4:
					func_107(iParam1);
					break;
			
				case 5:
					func_106(iParam1);
					break;
			
				default:
					func_105(iParam1);
					break;
			}
		}
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar37 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
		
			switch (iParam0)
			{
				case 3:
					if (func_103(bParam10, &Global_1679155.f_128[iParam1 /*2*/], &Global_1679155.f_149[iParam1 /*2*/]))
						bVar36 = true;
					else
						bVar36 = false;
					break;
			
				case 4:
					if (func_103(bParam10, &Global_1679155.f_44[iParam1 /*2*/], &Global_1679155.f_65[iParam1 /*2*/]))
						bVar36 = true;
					else
						bVar36 = false;
					break;
			
				case 5:
					if (func_103(bParam10, &Global_1679155.f_2[iParam1 /*2*/], &Global_1679155.f_23[iParam1 /*2*/]))
						bVar36 = true;
					else
						bVar36 = false;
					break;
			
				default:
					if (func_103(bParam10, &Global_1679155.f_86[iParam1 /*2*/], &Global_1679155.f_107[iParam1 /*2*/]))
						bVar36 = true;
					else
						bVar36 = false;
					break;
			}
		
			fVar27 = *uParam4;
			fVar27.f_1 = uParam4->f_1;
			fVar0 = *uParam4;
			fVar0.f_1 = uParam4->f_1 + 0.001f;
		
			if (iParam23 == 1)
			{
				fVar27 = fVar27 + 0.079f;
				fVar27.f_1 = fVar27.f_1 + 0.002f;
				fVar27.f_2 = fVar27.f_2 + 0.157f;
				fVar27.f_3 = fVar27.f_3 + 0.049f;
				fVar27.f_4 = fVar27.f_4 + 255;
				fVar27.f_5 = fVar27.f_5 + 255;
				fVar27.f_6 = fVar27.f_6 + 255;
				fVar27.f_7 = 140;
			}
			else if (bParam6 < 1000000)
			{
				fVar27 = fVar27 + 0.079f;
				fVar27.f_1 = fVar27.f_1 + 0.008f;
				fVar27.f_2 = fVar27.f_2 + 0.157f;
				fVar27.f_3 = fVar27.f_3 + 0.036f;
				fVar27.f_4 = fVar27.f_4 + 255;
				fVar27.f_5 = fVar27.f_5 + 255;
				fVar27.f_6 = fVar27.f_6 + 255;
				fVar27.f_7 = 140;
			}
			else
			{
				fVar27 = fVar27 + 0.079f;
				fVar27.f_1 = fVar27.f_1 + 0.01f;
				fVar27.f_2 = fVar27.f_2 + 0.157f;
				fVar27.f_3 = fVar27.f_3 + 0.033f;
				fVar27.f_4 = fVar27.f_4 + 255;
				fVar27.f_5 = fVar27.f_5 + 255;
				fVar27.f_6 = fVar27.f_6 + 255;
				fVar27.f_7 = 140;
			}
		
			if (func_132())
			{
				fVar27 = fVar27 + -0.025f;
				fVar27.f_2 = fVar27.f_2 + 0.05f;
			}
		
			Global_1679155.f_7129 = Global_1679155.f_7129 + fVar27.f_3;
		
			switch (iParam0)
			{
				case 3:
					func_101(&Global_1679155.f_1001[iParam1 /*2*/], &Global_1679155.f_1022[iParam1], iParam16, iParam17, bParam9, iVar37, fVar27);
					break;
			
				case 4:
					func_101(&Global_1679155.f_969[iParam1 /*2*/], &Global_1679155.f_990[iParam1], iParam16, iParam17, bParam9, iVar37, fVar27);
					break;
			
				case 5:
					func_101(&Global_1679155.f_937[iParam1 /*2*/], &Global_1679155.f_958[iParam1], iParam16, iParam17, bParam9, iVar37, fVar27);
					break;
			
				default:
					if (bParam10 > false)
						iParam0 == 14;
				
					func_101(&Global_1679155.f_1129[iParam1 /*2*/], &Global_1679155.f_1150[iParam1], iParam16, iParam17, bParam9, iVar37, fVar27);
					break;
			}
		
			if (iParam23 == 1 || iParam40 != 0)
			{
				if (iParam40 != 0)
					func_100(&fVar27, iParam40);
			
				func_92("TimerBars", "ALL_WHITE_bg", &fVar27, 1, 0, iVar37, 0);
			}
			else
			{
				func_92("TimerBars", "ALL_BLACK_bg", &fVar27, 1, 0, iVar37, 0);
			}
		
			func_86(&fVar27, iParam26);
			iVar37 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
			func_85(uParam2, bParam18);
			bVar38 = true;
		
			if (Global_2696996)
				bVar38 = false;
		
			if (Global_2696997 == 1)
				bVar38 = true;
		
			func_84(uParam2, false);
		
			if (func_132())
			{
				if (bParam12)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam4->f_1 = uParam4->f_1 + -0.012f;
						uParam5->f_1 = uParam5->f_1 + -0.004f;
					}
					else
					{
						uParam4->f_1 = uParam4->f_1 + -0.004f;
					}
				}
				else if (func_132())
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam4->f_1 = uParam4->f_1 + -0.012f;
						uParam5->f_1 = uParam5->f_1 + -0.004f;
					}
					else
					{
						uParam4->f_1 = uParam4->f_1 + -0.008f;
					}
				}
			}
			else if (bParam25)
			{
				uParam4->f_1 = uParam4->f_1 + 0f;
			}
			else if (bParam12 && Global_2696996 == false)
			{
				uParam4->f_1 = uParam4->f_1 + (-0.002f - 0.004f);
			}
		
			if (iParam23 == 1)
			{
				uParam4->f_1 = uParam4->f_1 - 0.007f;
				uParam5->f_1 = uParam5->f_1 - 0.007f;
			}
		
			if (iParam22 == 2 && MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				sParam8 = "HUD_ROCKET" /* GXT: ROCKETS */;
			else if (iParam22 == 4)
				sParam8 = "HUD_BOOST" /* GXT: BOOST */;
			else if (iParam22 == 1)
				sParam8 = "HUD_SPIKES" /* GXT: SPIKES */;
		
			uParam2->f_6 = iParam27;
			uParam3->f_6 = iParam27;
		
			if (bParam28)
				uParam3->f_6 = 0;
		
			if (bParam38)
				*uParam2 = iParam39;
		
			if (bParam30)
				if (bVar36)
					func_81(uParam2, uParam4, sParam8, bParam18, bParam9, iParam11, bParam12, bVar38);
			else
				func_81(uParam2, uParam4, sParam8, bParam18, bParam9, iParam11, bParam12, bVar38);
		
			if (bParam33)
			{
				if (bParam35 > false)
				{
					if (!func_80(&Global_1679155.f_884[iParam1 /*2*/]))
						func_79(&Global_1679155.f_884[iParam1 /*2*/], false, false);
					else if (func_260(&Global_1679155.f_884[iParam1 /*2*/], bParam35, false))
						func_78(&Global_1679155.f_884[iParam1 /*2*/], false, false);
				
					func_75(uParam3, bParam9, iParam34, bParam35, Global_1679155.f_884[iParam1 /*2*/]);
				}
			}
		
			if (iParam23 == 1)
			{
				fVar9 = uParam3->f_9;
				fVar9.f_1 = uParam5->f_1 - 0.0175f;
				fVar18 = uParam3->f_9;
				fVar18.f_1 = uParam5->f_1 + 0.0175f;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArrow", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArrow"))
				{
					fVar9 = fVar9 + 0.0095f;
					fVar9 = fVar9 - 0.015f;
					fVar9.f_1 = fVar9.f_1 + 0.019f;
					fVar9.f_2 = fVar9.f_2 + 0.01f;
					fVar9.f_3 = fVar9.f_3 + 0.01f;
					fVar9.f_4 = fVar9.f_4 + 0;
					fVar9.f_5 = fVar9.f_5 + 0;
					fVar9.f_6 = fVar9.f_6 + 0;
					fVar9.f_7 = fVar9.f_7 - 50;
					fVar9.f_8 = -90f;
					func_92("MPArrow", "MP_ArrowXLarge", &fVar9, 1, 0, iVar37, 0);
					fVar18 = fVar18 + 0.0095f;
					fVar18 = fVar18 - 0.015f;
					fVar18.f_1 = fVar18.f_1 + 0.019f;
					fVar18.f_2 = fVar18.f_2 + 0.01f;
					fVar18.f_3 = fVar18.f_3 + 0.01f;
					fVar18.f_4 = fVar18.f_4 + 0;
					fVar18.f_5 = fVar18.f_5 + 0;
					fVar18.f_6 = fVar18.f_6 + 0;
					fVar18.f_7 = fVar18.f_7 - 50;
					fVar18.f_8 = 90f;
					func_92("MPArrow", "MP_ArrowXLarge", &fVar18, 1, 0, iVar37, 0);
				}
			}
		
			if (bParam31)
			{
				fVar39 = func_74() + func_73(iParam7);
				fVar40 = func_72();
			
				if (func_132())
					fVar41 = fVar40 - 0.061f;
				else
					fVar41 = fVar40 - 0.0365f;
			
				fVar41.f_1 = fVar39 + 0.057f;
				fVar41.f_2 = fVar27.f_2 - 0.004f;
				fVar41.f_3 = 0.01f;
				fVar41.f_4 = 255;
				fVar41.f_5 = 255;
				fVar41.f_6 = 255;
				fVar41.f_7 = 255;
				func_100(&fVar41, iParam32);
				func_92("TimerBars", "DamagebarFill_128", &fVar41, 0, 0, iVar37, 0);
			}
		
			if (bParam19)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
				{
					fVar50 = 0f;
				
					if (bParam12 == true)
					{
						HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam8);
						fVar51 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam8);
					
						if (iParam11 != -1)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam11);
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam11);
						}
					
						fVar51 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
						fVar51 = fVar51 + 0.05f;
						fVar51 = fVar51 * func_121();
					}
				
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && bParam12 == false)
					{
						fVar52 = 0.153f - 0.072f;
						fVar53 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 && bParam12 == false)
					{
						fVar52 = 0.153f - 0.01f - 0.06f;
						fVar53 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 && bParam12 == false)
					{
						fVar52 = 0.153f - 0.012f - 0.06f;
						fVar53 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && bParam12 == false)
					{
						fVar52 = 0.153f - 0.012f - 0.06f;
						fVar53 = -0.457f;
					}
					else
					{
						fVar52 = 0.153f - 0.037f - 0.036f;
						fVar53 = -0.457f + 0.194f;
					}
				
					fVar52 = fVar52 + 0.03f;
				
					if (Global_1679155.f_1172)
						fVar52 = fVar52 + -0.03f;
				
					if (MISC::IS_PC_VERSION() && !GRAPHICS::GET_IS_WIDESCREEN())
						fVar52 = fVar52 + -0.015f;
				
					if (Global_1679155.f_1173 && Global_1679155.f_1172 == false)
						fVar52 = fVar52 + (-0.015f - 0.003f);
				
					fVar50 = (fVar53 * fVar51) + fVar52;
					fVar54 = 0.015f;
					iVar55 = BUILTIN::FLOOR(MISC::ABSF(fVar50) / fVar54);
					fVar56 = func_71(MISC::ABSF(fVar50), fVar54);
					fVar57 = (float)iVar55 * fVar54;
				
					if (fVar56 > fVar54 / 2f)
						fVar57 = fVar57 + fVar54;
				
					if (fVar50 < 0f)
						fVar50 = -fVar57;
					else
						fVar50 = fVar57;
				
					fVar0 = fVar0 + fVar50;
					fVar0 = fVar0 - 0.015f;
					fVar0.f_1 = fVar0.f_1 + 0.008f;
					fVar0.f_2 = fVar0.f_2 + 0.022f;
					fVar0.f_3 = fVar0.f_3 + 0.04f;
					fVar0.f_4 = fVar0.f_4 + 194;
					fVar0.f_5 = fVar0.f_5 + 80;
					fVar0.f_6 = fVar0.f_6 + 80;
					fVar0.f_7 = fVar0.f_7 - 50;
					func_92("CommonMenu", "MP_AlertTriangle", &fVar0, 1, 0, iVar37, 0);
				}
			}
		
			if (bVar36)
			{
				if (iParam22 != 0)
				{
					func_70(uParam3);
					fVar58 = *uParam5 + 0.145f + 0.001f;
				
					if (func_132())
						fVar58.f_1 = (uParam5->f_1 + 0.016f) - 0.006f;
					else
						fVar58.f_1 = uParam5->f_1 + 0.016f;
				
					fVar58.f_2 = 0.016f + 0.003f;
					fVar58.f_3 = 0.032f + 0.004f;
					fVar58.f_7 = iParam27;
					func_100(&fVar58, 1);
					fVar67 = *uParam5 + 0.145f + 0.001f;
				
					if (func_132())
						fVar67.f_1 = (uParam5->f_1 + 0.016f) - 0.006f;
					else
						fVar67.f_1 = uParam5->f_1 + 0.016f;
				
					fVar67.f_2 = 0.016f + 0.003f;
					fVar67.f_3 = 0.032f + 0.004f;
					fVar67.f_7 = 255;
					func_100(&fVar67, 1);
				
					if (bParam28)
						fVar58.f_7 = 0;
				
					sVar77 = "";
					iVar79 = 1;
					sVar80 = "";
					iVar82 = 1;
				
					switch (iParam22)
					{
						case 5:
							fVar58.f_3 = fVar58.f_3 + -0.009f;
							fVar58.f_2 = fVar58.f_2 + -0.002f;
						
							if (func_132())
								fVar58.f_1 = fVar58.f_1 + 0.0055f;
							else
								fVar58.f_1 = fVar58.f_1 + 0.0025f;
						
							sVar80 = "MPRPSymbol";
							sVar81 = "RP";
							break;
					
						case 2:
							sVar80 = "TimerBars";
							sVar81 = "Rockets";
							break;
					
						case 3:
							sVar80 = "MpSpecialRace";
							sVar81 = "HOMING_ROCKET";
							break;
					
						case 1:
							sVar80 = "TimerBars";
							sVar81 = "Spikes";
							break;
					
						case 4:
							sVar80 = "TimerBars";
							sVar81 = "Boost";
							break;
					
						case 6:
							sVar80 = "CrossTheLine";
							sVar81 = "Timer_LargeTick_32";
							iVar82 = 18;
							break;
					
						case 7:
							sVar80 = "CrossTheLine";
							sVar81 = "Timer_LargeCross_32";
							iVar82 = 6;
							break;
					
						case 8:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Beast";
							iVar82 = 118;
							break;
					
						case 9:
							sVar80 = "MPSpecialRace";
							sVar81 = "MACHINE_GUN";
							break;
					
						case 10:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Random";
							iVar82 = 118;
							break;
					
						case 11:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Slow_Time";
							break;
					
						case 12:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Swap";
							iVar82 = 118;
							break;
					
						case 13:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Testosterone";
							iVar82 = 118;
							break;
					
						case 14:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Thermal";
							iVar82 = 118;
							break;
					
						case 15:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Weed";
							iVar82 = 118;
							break;
					
						case 16:
							sVar80 = "TimerBar_Icons";
							sVar81 = "Pickup_Hidden";
							iVar82 = 118;
							break;
					
						case 17:
						case 18:
							if (bParam29 != func_69())
							{
								iVar76 = func_62(bParam29);
							
								if (iVar76 != 0)
								{
									sVar80 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar76);
									sVar81 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar76);
								}
							}
						
							if (func_132())
								fVar58.f_1 = (uParam5->f_1 + 0.016f) - 0.0005f;
							else
								fVar58.f_1 = uParam5->f_1 + 0.0185f;
						
							fVar58.f_2 = 0.016f + 0.004f;
							fVar58.f_3 = 0.032f + 0.002f;
						
							if (iParam22 == 18)
							{
								if (func_132())
									fVar67.f_1 = uParam5->f_1 + 0.016f;
								else
									fVar67.f_1 = uParam5->f_1 + 0.019f;
							
								fVar67.f_2 = 0.016f + 0.004f;
								fVar67.f_3 = 0.032f + 0.002f;
								sVar77 = "timerbar_sr";
								sVar78 = "timer_cross";
								iVar79 = bParam18;
								fVar58.f_7 = 127;
							}
							break;
					}
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar80))
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar80, 0);
					
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar80))
						{
							func_100(&fVar58, iVar82);
							func_92(sVar80, sVar81, &fVar58, 1, 0, 4, 0);
						}
					}
				
					if (iParam22 == 18)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar77))
						{
							GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar77, 0);
						
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar77))
							{
								func_100(&fVar67, iVar79);
								func_92(sVar77, sVar78, &fVar67, 1, 0, 4, 0);
							}
						}
					}
				}
			
				func_84(uParam3, false);
				iVar37 = func_104();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar37);
			
				if (iParam22 == 0 || iParam22 == 5 || iParam22 == 9)
				{
					uVar83 = { *uParam2 };
					func_123(&uVar83);
				
					if (bParam21)
					{
						func_61(uParam5, uParam3, "???", "", 1, 2);
					}
					else if (iParam22 == 5)
					{
						if (bParam36)
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam24))
								func_81(&uVar83, uParam4, sParam24, bParam18, bParam9, -1, bParam37, bVar38);
						else if (iParam14 == 0)
							func_59(uParam5, uParam3, "HUD_KSMULTI" /* GXT: ~1~x */, bParam6, 2);
						else
							func_57(uParam5, uParam3, "HUD_KSMULTI" /* GXT: ~1~x */, fParam15, Global_2698855, 2);
					}
					else if (func_56(sParam13))
					{
						if (bParam36)
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam24))
								func_81(&uVar83, uParam4, sParam24, bParam18, bParam9, -1, bParam37, bVar38);
						else if (bParam20 == 0)
							if (iParam14 == 0)
								func_59(uParam5, uParam3, "NUMBER" /* GXT: ~1~ */, bParam6, 2);
							else
								func_57(uParam5, uParam3, "NUMBER" /* GXT: ~1~ */, fParam15, Global_2698855, 2);
						else
							func_54(uParam5, uParam3, "TIMER_DASHES" /* GXT: ~1~/~1~ */, bParam6, bParam20, 2, 0);
					}
					else if (bParam36)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam24))
							func_81(&uVar83, uParam4, sParam24, bParam18, bParam9, -1, bParam37, bVar38);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam13) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S" /* GXT: $~a~ */, sParam13))
					{
						sParam13 = "HUD_CASH_S" /* GXT: $~a~ */;
						*uParam3 = 5;
						func_84(uParam3, false);
						func_49(uParam5, uParam3, sParam13, bParam6, 2);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam13) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S" /* GXT: -$~a~ */, sParam13))
					{
						*uParam3 = 5;
						func_84(uParam3, false);
						sParam13 = "HUD_CASH_NEG_S" /* GXT: -$~a~ */;
						func_49(uParam5, uParam3, sParam13, bParam6, 2);
					}
					else if (iParam14 == 0)
					{
						func_59(uParam5, uParam3, sParam13, bParam6, 2);
					}
					else
					{
						func_57(uParam5, uParam3, sParam13, fParam15, Global_2698855, 2);
					}
				}
			}
		
			func_48();
		}
	}
}

void func_48() // Position - 0x63D9
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}

void func_49(var uParam0, var uParam1, char* sParam2, bool bParam3, int iParam4) // Position - 0x63E6
{
	char* sVar0;

	sVar0 = sParam2;

	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(bParam3);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(bParam3, 1);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
		}
	}
}

var func_50(var uParam0) // Position - 0x6437
{
	return uParam0;
}

var func_51(var uParam0) // Position - 0x6441
{
	return uParam0;
}

bool func_52() // Position - 0x644B
{
	if (func_53())
		return true;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
		return false;

	if (MISC::IS_FRONTEND_FADING())
		return false;

	return true;
}

bool func_53() // Position - 0x648A
{
	return Global_1574604;
}

void func_54(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) // Position - 0x6496
{
	char* sVar0;

	sVar0 = sParam2;

	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_CENTRE(iParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_55(func_51(*uParam0), func_50(uParam0->f_1), sVar0, bParam3, bParam4);
		}
	}
}

void func_55(var uParam0, var uParam1, char* sParam2, bool bParam3, int iParam4) // Position - 0x64DF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(bParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, 0);
}

bool func_56(char* sParam0) // Position - 0x6502
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

void func_57(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5) // Position - 0x653B
{
	if (!func_56(sParam2))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_58(func_51(*uParam0), func_50(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}

void func_58(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x657A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, 0);
}

void func_59(var uParam0, var uParam1, char* sParam2, bool bParam3, int iParam4) // Position - 0x6599
{
	char* sVar0;

	sVar0 = sParam2;

	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			func_60(func_51(*uParam0), func_50(uParam0->f_1), sVar0, bParam3, 0);
		}
	}
}

void func_60(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x65DB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, iParam4);
}

void func_61(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5) // Position - 0x65F9
{
	char* sVar0;

	if (!func_56(sParam2))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
		
			if (func_56(sParam3))
				sVar0 = "STRING";
			else
				sVar0 = sParam3;
		
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(bParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
		}
	}
}

int func_62(bool bParam0) // Position - 0x665A
{
	int iVar0;

	iVar0 = func_66(bParam0);

	if (iVar0 == -1)
	{
		func_63(bParam0, true);
		return 0;
	}

	Global_1690223[iVar0 /*5*/].f_4 = 1;
	return Global_1690223[iVar0 /*5*/].f_2;
}

void func_63(bool bParam0, bool bParam1) // Position - 0x6690
{
	if (!func_65(bParam0, false, true))
		return;

	if (func_66(bParam0) != -1)
		return;

	if (Global_1690386)
		if (bParam0 == Global_1690386.f_1)
			return;

	if (func_64(bParam0))
		return;

	if (Global_1690424 >= 32)
		return;

	Global_1690391[Global_1690424] = bParam0;
	Global_1690424 = Global_1690424 + 1;
	bParam1;
}

bool func_64(bool bParam0) // Position - 0x66FC
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < Global_1690424; iVar0 = iVar0 + 1)
	{
		if (Global_1690391[iVar0] == bParam0)
			return true;
	}

	return false;
}

bool func_65(bool bParam0, bool bParam1, bool bParam2) // Position - 0x672E
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

int func_66(bool bParam0) // Position - 0x678E
{
	int iVar0;

	if (!func_65(bParam0, false, true))
		return -1;

	if (Global_1690384 == 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < Global_1690384; iVar0 = iVar0 + 1)
	{
		if (Global_1690223[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1690223[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1690223[iVar0 /*5*/].f_2))
				return iVar0;
		
			func_67(iVar0);
			return -1;
		}
	}

	return -1;
}

void func_67(int iParam0) // Position - 0x680D
{
	var uVar0;
	var uVar16;
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1690384)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1690223[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&uVar0, "CHAR_DEFAULT", 64);
	
		if (Global_1690223[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&uVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1690223[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&uVar16, &uVar16, &uVar0, &uVar0);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1690223[iParam0 /*5*/].f_2);
	}

	iVar32 = iParam0;

	for (iVar33 = iVar32 + 1; iVar33 < Global_1690384; iVar33 = iVar33 + 1)
	{
		Global_1690223[iVar32 /*5*/] = { Global_1690223[iVar33 /*5*/] };
		iVar32 = iVar32 + 1;
	}

	func_68(&Global_1690223[iVar32 /*5*/]);
	Global_1690384 = Global_1690384 - 1;
}

void func_68(bool bParam0) // Position - 0x68C3
{
	*bParam0 = 0;
	bParam0->f_1 = func_69();
	bParam0->f_2 = 0;
	bParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		bParam0->f_3 = NETWORK::GET_NETWORK_TIME();
}

int func_69() // Position - 0x68F0
{
	return -1;
}

void func_70(var uParam0) // Position - 0x68F9
{
	uParam0->f_9 = ((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f - 0.002f - 0.001f;
}

float func_71(float fParam0, float fParam1) // Position - 0x6934
{
	return fParam0 - ((float)BUILTIN::FLOOR(fParam0 / fParam1) * fParam1);
}

float func_72() // Position - 0x694C
{
	float fVar0;

	fVar0 = ((0.919f - 0.081f) + 0.028f + 0.05f) - 0.001f - 0.002f;
	return fVar0;
}

float func_73(int iParam0) // Position - 0x697B
{
	switch (iParam0)
	{
		case 1:
			return Global_1679155.f_1161;
	
		case 2:
			return Global_1679155.f_1162;
	}

	return Global_1679155.f_1161;
}

float func_74() // Position - 0x69B7
{
	float fVar0;

	fVar0 = ((0.013f - 0.002f) + 0.001f + 0.001f) - 0.001f;
	return fVar0;
}

void func_75(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, var uParam5) // Position - 0x69E0
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	float fVar9;

	iVar8 = func_77(&uParam4, false, false);

	if (bParam3 / 2 > iVar8)
	{
		fVar9 = BUILTIN::TO_FLOAT(iVar8 / 2) / BUILTIN::TO_FLOAT(bParam3 / 2);
		HUD::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
		HUD::GET_HUD_COLOUR(iParam2, &uVar4, &uVar5, &uVar6, &uVar7);
	}
	else
	{
		fVar9 = BUILTIN::TO_FLOAT(iVar8) / BUILTIN::TO_FLOAT(bParam3);
		HUD::GET_HUD_COLOUR(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
		HUD::GET_HUD_COLOUR(iParam1, &uVar4, &uVar5, &uVar6, &uVar7);
	}

	uParam0->f_3 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar0), BUILTIN::TO_FLOAT(uVar4), fVar9));
	uParam0->f_4 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar1), BUILTIN::TO_FLOAT(uVar5), fVar9));
	uParam0->f_5 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar2), BUILTIN::TO_FLOAT(uVar6), fVar9));
	uParam0->f_6 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar3), BUILTIN::TO_FLOAT(uVar7), fVar9));
}

float func_76(var uParam0, var uParam1, float fParam2) // Position - 0x6AC0
{
	return ((1f - fParam2) * uParam0) + (fParam2 * uParam1);
}

int func_77(var uParam0, bool bParam1, bool bParam2) // Position - 0x6AD5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_78(var uParam0, bool bParam1, bool bParam2) // Position - 0x6B1C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*uParam0 = MISC::GET_GAME_TIMER();

	uParam0->f_1 = 1;
}

void func_79(var uParam0, bool bParam1, bool bParam2) // Position - 0x6B59
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}
}

bool func_80(var uParam0) // Position - 0x6B9E
{
	return uParam0->f_1;
}

void func_81(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) // Position - 0x6BAA
{
	if (bParam6 == true)
	{
		if (bParam7)
			func_61(uParam1, uParam0, sParam2, "", iParam3, 2);
		else
			func_61(uParam1, uParam0, sParam2, "", iParam4, 2);
	}
	else if (iParam5 == -1)
	{
		func_82(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = uParam1->f_1 + (-0.003f - 0.001f);
		func_59(uParam1, uParam0, sParam2, iParam5, 2);
	}
}

void func_82(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x6C19
{
	char* sVar0;

	sVar0 = sParam2;

	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			func_83(func_51(*uParam0), func_50(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_83(var uParam0, var uParam1, char* sParam2, int iParam3) // Position - 0x6C5F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, iParam3);
}

void func_84(var uParam0, bool bParam1) // Position - 0x6C77
{
	HUD::SET_TEXT_FONT(*uParam0);

	if (!(uParam0->f_8 == 0f) || !(uParam0->f_9 == 0f))
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);

	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);

	switch (uParam0->f_7)
	{
		case 0:
			break;
	
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
	
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
	
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}

	if (bParam1)
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}

void func_85(var uParam0, bool bParam1) // Position - 0x6D10
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	HUD::GET_HUD_COLOUR(bParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_86(var uParam0, int iParam1) // Position - 0x6D38
{
	float fVar0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (iParam1 == 0)
		return;

	fVar0 = 0.951f;
	fVar0.f_1 = uParam0->f_1;
	fVar0.f_2 = 0.002f;
	fVar0.f_3 = uParam0->f_3;
	HUD::GET_HUD_COLOUR(iParam1, &uVar8, &uVar9, &uVar10, &uVar11);
	fVar0.f_4 = uVar8;
	fVar0.f_5 = uVar9;
	fVar0.f_6 = uVar10;
	fVar0.f_7 = uVar11;
	func_87(fVar0, 0, 0);
}

void func_87(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9) // Position - 0x6D9A
{
	var uVar0;

	uVar0 = { uParam0 };

	switch (iParam8)
	{
		case 2:
			func_91(&uVar0);
			break;
	
		case 1:
			func_90(&uVar0);
			break;
	
		case 3:
			func_89(&uVar0);
			break;
	
		case 4:
			func_88(&uVar0);
			break;
	}

	if (func_52())
		if (iParam9 == 1)
			GRAPHICS::DRAW_RECT(func_51(uVar0), func_50(uVar0.f_1), uVar0.f_2, uVar0.f_3, uVar0.f_4, uVar0.f_5, uVar0.f_6, uVar0.f_7, 0);
		else
			GRAPHICS::DRAW_RECT(func_51(uVar0), func_50(uVar0.f_1), uVar0.f_2, uVar0.f_3, uVar0.f_4, uVar0.f_5, uVar0.f_6, uVar0.f_7, 0);
}

void func_88(var uParam0) // Position - 0x6E55
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_89(var uParam0) // Position - 0x6E75
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_90(var uParam0) // Position - 0x6E95
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
}

void func_91(var uParam0) // Position - 0x6EBE
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_92(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6EDB
{
	var uVar0;

	uVar0 = { *uParam2 };

	switch (iParam4)
	{
		case 0:
			func_99(&uVar0);
			break;
	
		case 1:
			func_98(&uVar0);
			break;
	
		case 5:
			func_97(&uVar0);
			break;
	
		case 6:
			func_96(&uVar0);
			break;
	
		case 7:
			func_95(&uVar0);
			break;
	
		case 8:
			func_94(&uVar0);
			break;
	
		case 9:
			func_93(&uVar0);
			break;
	}

	if (func_52())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	
		if (iParam3 == 1)
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_51(uVar0), func_50(uVar0.f_1), uVar0.f_2, uVar0.f_3, uVar0.f_8, uVar0.f_4, uVar0.f_5, uVar0.f_6, uVar0.f_7, iParam6, 0);
		else
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_51(uVar0), func_50(uVar0.f_1), uVar0.f_2, uVar0.f_3, uVar0.f_8, uVar0.f_4, uVar0.f_5, uVar0.f_6, uVar0.f_7, iParam6, 0);
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_93(var uParam0) // Position - 0x6FE2
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_94(var uParam0) // Position - 0x6FFC
{
	uParam0->f_7 = 2;
}

void func_95(var uParam0) // Position - 0x7009
{
	uParam0->f_7 = 5;
}

void func_96(var uParam0) // Position - 0x7016
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_97(var uParam0) // Position - 0x7033
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_98(var uParam0) // Position - 0x7050
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
}

void func_99(var uParam0) // Position - 0x7079
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_100(var uParam0, bool bParam1) // Position - 0x70A1
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	HUD::GET_HUD_COLOUR(bParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) // Position - 0x70C9
{
	var uVar0;

	if (iParam3 > 0)
	{
		uVar0 = { uParam6 };
	
		if (func_260(iParam0, 2000, false) == false)
		{
			if (func_102(*iParam0, 1250, false))
				*iParam1 = *iParam1 - 17;
		
			uVar0.f_7 = *iParam1;
		
			if (iParam2 == 2)
				func_100(&uVar0, 6);
			else if (iParam2 == 3)
				func_100(&uVar0, 18);
			else
				func_100(&uVar0, iParam4);
		
			func_92("TimerBars", "ALL_WHITE_bg", &uVar0, 1, 0, iParam5, 0);
		}
	}
	else
	{
		*iParam1 = 255;
		func_78(iParam0, false, false);
	}
}

bool func_102(var uParam0, var uParam1, int iParam2, bool bParam3) // Position - 0x7158
{
	if (iParam2 == -1)
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >= iParam2)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0)) >= iParam2)
		return true;

	return false;
}

bool func_103(bool bParam0, int iParam1, int iParam2) // Position - 0x71AB
{
	if (func_260(iParam1, bParam0, false))
		return true;

	if (!func_80(iParam2))
	{
		func_79(iParam2, false, false);
	}
	else if (func_260(iParam2, 300, false))
	{
		if (func_260(iParam2, 800, false))
		{
			func_17(iParam2);
			return true;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}

	return true;
}

int func_104() // Position - 0x720B
{
	int iVar0;

	iVar0 = 1;

	if (Global_1679155.f_1171)
		iVar0 = 7;

	return iVar0;
}

void func_105(int iParam0) // Position - 0x7225
{
	func_17(&Global_1679155.f_590[iParam0 /*2*/]);
	func_17(&Global_1679155.f_611[iParam0 /*2*/]);
}

void func_106(int iParam0) // Position - 0x724B
{
	func_17(&Global_1679155.f_506[iParam0 /*2*/]);
	func_17(&Global_1679155.f_527[iParam0 /*2*/]);
}

void func_107(int iParam0) // Position - 0x7271
{
	func_17(&Global_1679155.f_548[iParam0 /*2*/]);
	func_17(&Global_1679155.f_569[iParam0 /*2*/]);
}

void func_108(int iParam0) // Position - 0x7297
{
	func_17(&Global_1679155.f_632[iParam0 /*2*/]);
	func_17(&Global_1679155.f_653[iParam0 /*2*/]);
}

void func_109(int iParam0) // Position - 0x72BD
{
	func_17(&Global_1679155.f_86[iParam0 /*2*/]);
	func_17(&Global_1679155.f_107[iParam0 /*2*/]);
}

void func_110(int iParam0) // Position - 0x72E1
{
	func_17(&Global_1679155.f_2[iParam0 /*2*/]);
	func_17(&Global_1679155.f_23[iParam0 /*2*/]);
}

void func_111(int iParam0) // Position - 0x7305
{
	func_17(&Global_1679155.f_44[iParam0 /*2*/]);
	func_17(&Global_1679155.f_65[iParam0 /*2*/]);
}

void func_112(int iParam0) // Position - 0x7329
{
	func_17(&Global_1679155.f_128[iParam0 /*2*/]);
	func_17(&Global_1679155.f_149[iParam0 /*2*/]);
}

void func_113(var uParam0, bool bParam1) // Position - 0x734D
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	HUD::GET_HUD_COLOUR(bParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_114(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) // Position - 0x737B
{
	float fVar0;

	fVar0 = func_118(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_73(iParam3);
	uParam1->f_1 = uParam1->f_1 + func_117(uParam4);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_116(uParam0);
	func_115(iParam3, -fVar0);
}

void func_115(int iParam0, float fParam1) // Position - 0x73CC
{
	switch (iParam0)
	{
		case 1:
			Global_1679155.f_1161 = Global_1679155.f_1161 + fParam1;
			break;
	
		case 2:
			Global_1679155.f_1162 = Global_1679155.f_1162 + fParam1;
			break;
	}
}

float func_116(var uParam0) // Position - 0x740F
{
	float fVar0;

	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) - 0.0005f - 0.002f) + 0.002f + 0.0005f;
			break;
	
		case 10:
			fVar0 = (((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f;
			break;
	
		case 11:
			fVar0 = (-0.047f - 0.004f) + 0.012f + 0.001f + 0.007f;
			break;
	
		case 12:
			fVar0 = -0.019f + 0.011f + 0.004f;
			break;
	
		case 13:
			fVar0 = -0.012f + 0.001f;
			break;
	
		case 14:
			fVar0 = -0.012f + 0.001f + 0.001f;
			break;
	
		case 15:
			fVar0 = (-0.035f - 0.008f) + 0.006f + 0.013f + 0.0005f;
			break;
	
		case 16:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f;
			break;
	
		case 17:
			fVar0 = (-0.01f - 0.005f) + 0.004f + 0.005f + 0.0007f;
			break;
	
		case 18:
			fVar0 = (-0.01f - 0.005f) + 0.004f + 0.005f + 0.003f;
			break;
	
		case 6:
			fVar0 = (-0.01f - 0.005f) + 0.004f + 0.005f;
			break;
	
		case 19:
			fVar0 = (-0.01f - 0.005f) + 0.004f + 0.005f;
			break;
	}

	if (func_132())
		fVar0 = fVar0 + 0.003f;

	return fVar0;
}

float func_117(var uParam0) // Position - 0x75E9
{
	float fVar0;

	switch (uParam0->f_10)
	{
		case 6:
			fVar0 = 0f;
			break;
	}

	return fVar0;
}

float func_118(var uParam0) // Position - 0x7608
{
	float fVar0;

	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f) + 0.001f + 0.0018f + 0.0005f) - 0.0005f;
			break;
	
		case 10:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f + 0.002f) - 0.004f;
			break;
	
		case 11:
			fVar0 = (((0.065f + 0.009f) - 0.006f - 0.009f) + 0.001f) - 0.009f;
			break;
	
		case 12:
			fVar0 = 0f;
			break;
	
		case 13:
			fVar0 = 0.065f + 0.009f;
			break;
	
		case 14:
			fVar0 = (0.065f + 0.009f) - 0.015f - 0.022f;
			break;
	
		case 15:
			fVar0 = 0f;
			break;
	
		case 16:
			fVar0 = ((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f) + 0.001f + 0.002f + 0.0003f;
			break;
	
		case 17:
			fVar0 = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f - 0.0005f;
			break;
	
		case 18:
			fVar0 = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f;
			break;
	
		case 19:
			fVar0 = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f;
			break;
	}

	return fVar0;
}

void func_119(int iParam0) // Position - 0x77E9
{
	switch (iParam0)
	{
		case 1:
			Global_1679155.f_1161 = func_32();
			break;
	
		case 2:
			Global_1679155.f_1162 = func_32();
			break;
	}
}

void func_120(int iParam0, int iParam1) // Position - 0x7820
{
	MISC::SET_BIT(&Global_1679155.f_7096[iParam0], iParam1);
}

float func_121() // Position - 0x7839
{
	float fVar0;
	var uVar1;
	var uVar2;
	float fVar3;

	fVar0 = GRAPHICS::GET_ASPECT_RATIO(0);
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&uVar1, &uVar2);
	fVar3 = BUILTIN::TO_FLOAT(uVar1) / BUILTIN::TO_FLOAT(uVar2);
	fVar0 = func_122(fVar0, fVar3);

	if (fVar3 > 3.5f && fVar0 > 1.7f)
		return 1.4f;

	if (fVar0 > 1.7f)
		return 1f;
	else if (fVar0 > 1.5f)
		return 1.2f;
	else if (fVar0 > 1.3f)
		return 1.3f;

	return 1.4f;
}

float func_122(float fParam0, float fParam1) // Position - 0x78C9
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

void func_123(var uParam0) // Position - 0x78E0
{
	float fVar0;

	fVar0 = (((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f) + 0.001f;
	uParam0->f_9 = fVar0;

	if (Global_1679155.f_1165 == 0)
	{
		switch (uParam0->f_10)
		{
			case 11:
				uParam0->f_9 = uParam0->f_9 + 0.001f;
				break;
		
			case 10:
				uParam0->f_9 = uParam0->f_9 + 0.001f;
				break;
		
			default:
				break;
		}
	}

	if (Global_1679155.f_1165 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = uParam0->f_9 + -0.113f;
	}
}

void func_124(var uParam0) // Position - 0x7977
{
	float fVar0;

	fVar0 = (0.88f - 0.062f) + 0.026f + 0.027f + 0.03f;

	if (Global_1679155.f_1172)
	{
		fVar0 = fVar0 + -0.034f;
	
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
			fVar0 = fVar0 + -0.02f;
	}

	if (Global_1679155.f_1173 && Global_1679155.f_1172 == false)
	{
		fVar0 = fVar0 + (-0.015f - 0.003f);
	
		if (GRAPHICS::GET_IS_WIDESCREEN() == 0)
			fVar0 = fVar0 + -0.017f;
	}

	if (Global_1679155.f_1174 && Global_1679155.f_1173 == false && Global_1679155.f_1172 == false)
		fVar0 = fVar0 + -0.038f;

	if (Global_1679155.f_1165 == 1)
		fVar0 = fVar0 + -0.113f;

	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 && LOCALIZATION::GET_CURRENT_LANGUAGE() == 1 && !GRAPHICS::GET_IS_WIDESCREEN() && Global_1679155.f_1174)
		fVar0 = fVar0 + -0.007f;

	if (Global_1679155.f_1175)
		if (LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
			fVar0 = fVar0 + -0.009f;
		else
			fVar0 = fVar0 + -0.009f;

	if (Global_1679155.f_1176)
		if (func_125())
			fVar0 = fVar0 + -0.03f;
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
			fVar0 = fVar0 + -0.024f;
		else
			fVar0 = fVar0 + -0.019f;

	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 1 && Global_1679155.f_1173 == false && Global_1679155.f_1172 == false && Global_1679155.f_1165 == 0 && Global_1679155.f_1174 == false && Global_1679155.f_1175 == false && Global_1679155.f_1176 == false && MISC::IS_PC_VERSION())
		fVar0 = fVar0 + -0.005f;

	uParam0->f_9 = fVar0;
}

bool func_125() // Position - 0x7BE2
{
	int iVar0;
	var uVar1;

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
	
		if (iVar0 <= 1024)
			return true;
	}

	return false;
}

void func_126(var uParam0, int iParam1, int iParam2) // Position - 0x7C06
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
}

void func_127(var uParam0, int iParam1, int iParam2) // Position - 0x7C6B
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f - 0.095f - 0.008f - 0.012f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
}

void func_128(var uParam0, int iParam1, int iParam2) // Position - 0x7CE2
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f - 0.095f - 0.008f - 0.012f - 0.06f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
}

void func_129(var uParam0, int iParam1) // Position - 0x7D5F
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_130(var uParam0, int iParam1) // Position - 0x7DAB
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.355f + 0.092f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
}

void func_131(var uParam0, int iParam1) // Position - 0x7DFC
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.416f + 0.089f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

bool func_132() // Position - 0x7E4E
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
		return true;

	return false;
}

void func_133(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x7E8C
{
	*uParam0 = fParam1;
	uParam0->f_1 = fParam2 + iParam9;
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

bool func_134() // Position - 0x7EC6
{
	return true;
}

void func_135(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20) // Position - 0x7ECF
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(13, iParam0))
		func_136(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, bParam1, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, bParam14, bParam15, bParam16, bParam17, bParam18, bParam19, bParam20);
}

void func_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25) // Position - 0x7F19
{
	float fVar0;
	bool bVar9;
	int iVar10;
	float fVar11;
	float fVar20;
	float fVar29;
	float fVar38;
	float fVar47;
	float fVar56;
	float fVar65;
	float fVar74;
	float fVar83;
	float fVar92;
	float fVar101;
	float fVar110;
	var uVar119;
	var uVar120;
	var uVar121;
	var uVar122;
	var uVar123;
	var uVar124;
	var uVar125;
	var uVar131;
	var uVar137;
	var uVar143;
	var uVar149;
	var uVar155;
	var uVar161;
	var uVar167;
	var uVar173;
	var uVar179;
	var uVar185;
	var uVar191;
	var uVar197;
	var uVar203;
	var uVar209;
	var uVar215;
	var uVar221;
	var uVar227;
	var uVar233;
	var uVar239;
	var uVar245;
	var uVar251;
	var uVar257;
	var uVar263;
	bool bVar269;
	bool bVar270;
	bool bVar271;
	bool bVar272;
	bool bVar273;
	bool bVar274;
	bool bVar275;
	bool bVar276;
	bool bVar277;
	bool bVar278;
	bool bVar279;
	bool bVar280;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		func_120(13, iParam0);
		func_129(uParam1, 0);
		func_124(uParam1);
	
		if (Global_1679155 == 1)
			func_119(iParam6);
	
		func_126(uParam2, 0, 0);
		func_123(uParam2);
		func_114(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_133(&fVar0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (bParam25 == false)
			func_139(iParam0);
	
		if (func_103(bParam25, &Global_1679155.f_464[iParam0 /*2*/], &Global_1679155.f_485[iParam0 /*2*/]))
			bVar9 = true;
		else
			bVar9 = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			fVar0 = *uParam3;
			fVar0.f_1 = uParam3->f_1;
			fVar0 = fVar0 + 0.079f;
			fVar0.f_1 = fVar0.f_1 + 0.008f;
			fVar0.f_2 = fVar0.f_2 + 0.157f;
			fVar0.f_3 = fVar0.f_3 + 0.036f;
			fVar0.f_4 = fVar0.f_4 + 255;
			fVar0.f_5 = fVar0.f_5 + 255;
			fVar0.f_6 = fVar0.f_6 + 255;
			fVar0.f_7 = 140;
		
			if (func_132())
			{
				fVar0 = fVar0 + -0.025f;
				fVar0.f_2 = fVar0.f_2 + 0.05f;
			}
		
			Global_1679155.f_7129 = Global_1679155.f_7129 + fVar0.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &fVar0, 1, 0, 4, 0);
			func_84(uParam1, false);
			fVar11 = *uParam4 + 0.145f + 0.001f;
			fVar20 = *uParam4 + 0.145f + 0.001f;
			fVar29 = *uParam4 + 0.123f;
			fVar38 = *uParam4 + 0.123f;
			fVar47 = *uParam4 + 0.101f;
			fVar56 = *uParam4 + 0.101f;
			fVar65 = *uParam4 + 0.078f;
			fVar74 = *uParam4 + 0.078f;
			fVar83 = *uParam4 + 0.056f;
			fVar92 = *uParam4 + 0.056f;
			fVar101 = *uParam4 + 0.034f;
			fVar110 = *uParam4 + 0.034f;
		
			if (func_132())
			{
				fVar11.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar20.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar29.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar38.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar47.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar56.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar65.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar74.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar83.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar92.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar101.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar110.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
			}
			else
			{
				fVar11.f_1 = uParam4->f_1 + 0.0185f;
				fVar20.f_1 = uParam4->f_1 + 0.019f;
				fVar29.f_1 = uParam4->f_1 + 0.0185f;
				fVar38.f_1 = uParam4->f_1 + 0.019f;
				fVar47.f_1 = uParam4->f_1 + 0.0185f;
				fVar56.f_1 = uParam4->f_1 + 0.019f;
				fVar65.f_1 = uParam4->f_1 + 0.0185f;
				fVar74.f_1 = uParam4->f_1 + 0.019f;
				fVar83.f_1 = uParam4->f_1 + 0.0185f;
				fVar92.f_1 = uParam4->f_1 + 0.019f;
				fVar101.f_1 = uParam4->f_1 + 0.0185f;
				fVar110.f_1 = uParam4->f_1 + 0.019f;
			}
		
			fVar11.f_2 = 0.016f + 0.003f;
			fVar20.f_2 = 0.016f + 0.003f;
			fVar29.f_2 = 0.016f + 0.003f;
			fVar38.f_2 = 0.016f + 0.003f;
			fVar47.f_2 = 0.016f + 0.003f;
			fVar56.f_2 = 0.016f + 0.003f;
			fVar65.f_2 = 0.016f + 0.003f;
			fVar74.f_2 = 0.016f + 0.003f;
			fVar83.f_2 = 0.016f + 0.003f;
			fVar92.f_2 = 0.016f + 0.003f;
			fVar101.f_2 = 0.016f + 0.003f;
			fVar110.f_2 = 0.016f + 0.003f;
			fVar11.f_3 = 0.032f + 0.004f;
			fVar20.f_3 = 0.032f + 0.004f;
			fVar29.f_3 = 0.032f + 0.004f;
			fVar38.f_3 = 0.032f + 0.004f;
			fVar47.f_3 = 0.032f + 0.004f;
			fVar56.f_3 = 0.032f + 0.004f;
			fVar65.f_3 = 0.032f + 0.004f;
			fVar74.f_3 = 0.032f + 0.004f;
			fVar83.f_3 = 0.032f + 0.004f;
			fVar92.f_3 = 0.032f + 0.004f;
			fVar101.f_3 = 0.032f + 0.004f;
			fVar110.f_3 = 0.032f + 0.004f;
			fVar11.f_7 = 255;
			fVar20.f_7 = 255;
			fVar29.f_7 = 255;
			fVar38.f_7 = 255;
			fVar47.f_7 = 255;
			fVar56.f_7 = 255;
			fVar65.f_7 = 255;
			fVar74.f_7 = 255;
			fVar83.f_7 = 255;
			fVar92.f_7 = 255;
			fVar101.f_7 = 255;
			fVar110.f_7 = 255;
			func_100(&fVar11, true);
			func_100(&fVar20, true);
			func_100(&fVar29, true);
			func_100(&fVar38, true);
			func_100(&fVar47, true);
			func_100(&fVar56, true);
			func_100(&fVar65, true);
			func_100(&fVar74, true);
			func_100(&fVar83, true);
			func_100(&fVar92, true);
			func_100(&fVar101, true);
			func_100(&fVar110, true);
			TEXT_LABEL_ASSIGN_STRING(&uVar125, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar131, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar137, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar143, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar149, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar155, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar161, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar167, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar173, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar179, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar185, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar191, "", 24);
			bVar269 = true;
			bVar270 = true;
			bVar271 = true;
			bVar272 = true;
			bVar273 = true;
			bVar274 = true;
			bVar275 = true;
			bVar276 = true;
			bVar277 = true;
			bVar278 = true;
			bVar279 = true;
			bVar280 = true;
			func_138(&iParam13, &fVar11, &uVar125, &uVar197, &bVar269, &iParam7, &uVar119, &fVar20, &uVar131, &uVar203, &bVar270, bParam5, false);
			func_138(&iParam14, &fVar29, &uVar137, &uVar209, &bVar271, &iParam8, &uVar120, &fVar38, &uVar143, &uVar215, &bVar272, bParam5, false);
			func_138(&iParam15, &fVar47, &uVar149, &uVar221, &bVar273, &iParam9, &uVar121, &fVar56, &uVar155, &uVar227, &bVar274, bParam5, false);
			func_138(&iParam16, &fVar65, &uVar161, &uVar233, &bVar275, &iParam10, &uVar122, &fVar74, &uVar167, &uVar239, &bVar276, bParam5, false);
			func_138(&iParam17, &fVar83, &uVar173, &uVar245, &bVar277, &iParam11, &uVar123, &fVar92, &uVar179, &uVar251, &bVar278, bParam5, false);
			func_138(&iParam18, &fVar101, &uVar185, &uVar257, &bVar279, &iParam12, &uVar124, &fVar110, &uVar191, &uVar263, &bVar280, bParam5, false);
		
			if (bParam19)
				if (bVar9)
					func_137(iParam13, &fVar11, &fVar20, &uVar125, &uVar197, bVar269, &uVar131, &uVar203, bVar270);
			else
				func_137(iParam13, &fVar11, &fVar20, &uVar125, &uVar197, bVar269, &uVar131, &uVar203, bVar270);
		
			if (bParam20)
				if (bVar9)
					func_137(iParam14, &fVar29, &fVar38, &uVar137, &uVar209, bVar271, &uVar143, &uVar215, bVar272);
			else
				func_137(iParam14, &fVar29, &fVar38, &uVar137, &uVar209, bVar271, &uVar143, &uVar215, bVar272);
		
			if (bParam21)
				if (bVar9)
					func_137(iParam15, &fVar47, &fVar56, &uVar149, &uVar221, bVar273, &uVar155, &uVar227, bVar274);
			else
				func_137(iParam15, &fVar47, &fVar56, &uVar149, &uVar221, bVar273, &uVar155, &uVar227, bVar274);
		
			if (bParam22)
				if (bVar9)
					func_137(iParam16, &fVar65, &fVar74, &uVar161, &uVar233, bVar275, &uVar167, &uVar239, bVar276);
			else
				func_137(iParam16, &fVar65, &fVar74, &uVar161, &uVar233, bVar275, &uVar167, &uVar239, bVar276);
		
			if (bParam23)
				if (bVar9)
					func_137(iParam17, &fVar83, &fVar92, &uVar173, &uVar245, bVar277, &uVar179, &uVar251, bVar278);
			else
				func_137(iParam17, &fVar83, &fVar92, &uVar173, &uVar245, bVar277, &uVar179, &uVar251, bVar278);
		
			if (bParam24)
				if (bVar9)
					func_137(iParam18, &fVar101, &fVar110, &uVar185, &uVar257, bVar279, &uVar191, &uVar263, bVar280);
			else
				func_137(iParam18, &fVar101, &fVar110, &uVar185, &uVar257, bVar279, &uVar191, &uVar263, bVar280);
		}
	
		func_48();
	}
}

void func_137(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7, bool bParam8) // Position - 0x8762
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
		{
			func_100(uParam1, bParam5);
			func_92(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}

	if (iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uVar0, uVar1, uVar2, 153, 0);
	}

	if (iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 || iParam0 == 24 || iParam0 == 25 || iParam0 == 26 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam6, 0);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam6))
			{
				func_100(uParam2, bParam8);
				func_92(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

void func_138(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, var uParam10, bool bParam11, bool bParam12) // Position - 0x88DA
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = uParam1->f_3 + -0.009f;
			uParam1->f_2 = uParam1->f_2 + -0.002f;
		
			if (func_132())
				uParam1->f_1 = uParam1->f_1 + 0.0055f;
			else
				uParam1->f_1 = uParam1->f_1 + 0.0025f;
		
			TEXT_LABEL_ASSIGN_STRING(sParam2, "MPRPSymbol", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "RP", 24);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBars", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Rockets", 24);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "MpSpecialRace", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "HOMING_ROCKET", 24);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBars", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Spikes", 24);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBars", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Boost", 24);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "CrossTheLine", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Timer_LargeTick_32", 24);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "CrossTheLine", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Timer_LargeCross_32", 24);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Beast", 24);
			*uParam4 = 118;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "MPSpecialRace", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "MACHINE_GUN", 24);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Random", 24);
			*uParam4 = 118;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Slow_Time", 24);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Swap", 24);
			*uParam4 = 118;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Testosterone", 24);
			*uParam4 = 118;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Thermal", 24);
			*uParam4 = 118;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Weed", 24);
			*uParam4 = 118;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Hidden", 24);
			*uParam4 = 118;
			break;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
			if (*uParam5 != func_69())
			{
				*uParam6 = func_62(*uParam5);
			
				if (*uParam6 != 0)
				{
					TEXT_LABEL_ASSIGN_STRING(sParam2, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
					TEXT_LABEL_ASSIGN_STRING(sParam3, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
				}
			}
		
			uParam1->f_2 = 0.016f + 0.004f;
			uParam1->f_3 = 0.034f;
		
			if (*uParam0 == 18)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_cross", 24);
				*uParam10 = bParam11;
			}
		
			if (*uParam0 == 19)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_tick", 24);
				*uParam10 = bParam11;
			}
		
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_0", 24);
				*uParam10 = bParam12;
			}
		
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_1", 24);
				*uParam10 = bParam12;
			}
		
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_2", 24);
				*uParam10 = bParam12;
			}
		
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_3", 24);
				*uParam10 = bParam12;
			}
		
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_4", 24);
				*uParam10 = bParam12;
			}
		
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_5", 24);
				*uParam10 = bParam12;
			}
		
			if (*uParam0 == 26)
				*uParam10 = bParam11;
		
			if (*uParam0 == 20 || *uParam0 == 21 || *uParam0 == 22 || *uParam0 == 23 || *uParam0 == 24 || *uParam0 == 25 || *uParam0 == 26)
				uParam1->f_7 = 127;
			break;
	
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}
}

void func_139(int iParam0) // Position - 0x8D2E
{
	func_17(&Global_1679155.f_464[iParam0 /*2*/]);
	func_17(&Global_1679155.f_485[iParam0 /*2*/]);
}

void func_140(int iParam0, bool bParam1, float fParam2, char* sParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, int iParam25, bool bParam26, bool bParam27, int iParam28, int iParam29, bool bParam30, int iParam31) // Position - 0x8D54
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(12, iParam0))
		func_141(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, bParam1, fParam2, sParam3, iParam4, bParam5, bParam6, bParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, bParam18, bParam19, bParam20, bParam21, bParam22, bParam23, bParam24, iParam25, bParam26, bParam27, iParam28, iParam29, bParam30, iParam31);
}

void func_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, bool bParam31, bool bParam32, int iParam33, int iParam34, bool bParam35, int iParam36) // Position - 0x8DB4
{
	float fVar0;
	float fVar9;
	float fVar18;
	float fVar27;
	float fVar36;
	float fVar45;
	float fVar54;
	float fVar63;
	float fVar72;
	float fVar81;
	float fVar90;
	float fVar99;
	float fVar108;
	float fVar117;
	float fVar126;
	float fVar135;
	var uVar144;
	var uVar145;
	var uVar146;
	var uVar147;
	var uVar148;
	var uVar149;
	var uVar155;
	var uVar161;
	var uVar167;
	var uVar173;
	var uVar179;
	var uVar185;
	var uVar191;
	var uVar197;
	var uVar203;
	var uVar209;
	var uVar215;
	var uVar221;
	var uVar227;
	var uVar233;
	var uVar239;
	var uVar245;
	var uVar251;
	var uVar257;
	var uVar263;
	var uVar269;
	var uVar275;
	var uVar281;
	var uVar287;
	var uVar293;
	var uVar299;
	var uVar305;
	var uVar311;
	var uVar317;
	var uVar323;
	bool bVar329;
	bool bVar330;
	bool bVar331;
	bool bVar332;
	bool bVar333;
	bool bVar334;
	bool bVar335;
	bool bVar336;
	bool bVar337;
	bool bVar338;
	bool bVar339;
	bool bVar340;
	bool bVar341;
	bool bVar342;
	bool bVar343;
	int iVar344;
	bool bVar345;
	bool bVar346;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		func_133(&fVar0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_129(uParam1, 3);
	
		if (bParam5 < 1000000)
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam6 >= 100f && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN" /* GXT: ~1~km/h */, sParam7))
				func_128(uParam2, 0, 0);
			else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && bParam5 > 999 || bParam9 > 999 || fParam6 > 1000f)
				func_128(uParam2, 0, 0);
			else if (bParam9 > 99)
				func_127(uParam2, 0, 0);
			else
				func_126(uParam2, 0, 0);
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam7))
			func_128(uParam2, 0, 0);
		else
			func_127(uParam2, 0, 0);
	
		func_124(uParam1);
		func_123(uParam2);
		func_120(12, iParam0);
	
		if (Global_1679155 == 1)
			func_119(iParam12);
	
		func_114(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_113(uParam2, bParam11);
		uParam2->f_6 = 255;
		fVar9 = *uParam4 + 0.095f;
		fVar18 = *uParam4 + 0.095f;
		fVar27 = *uParam4 + 0.095f;
		fVar36 = *uParam4 + 0.072f;
		fVar45 = *uParam4 + 0.072f;
		fVar54 = *uParam4 + 0.072f;
		fVar63 = *uParam4 + 0.049f;
		fVar72 = *uParam4 + 0.049f;
		fVar81 = *uParam4 + 0.049f;
		fVar90 = *uParam4 + 0.026f;
		fVar99 = *uParam4 + 0.026f;
		fVar108 = *uParam4 + 0.026f;
		fVar117 = *uParam4 + 0.003f;
		fVar126 = *uParam4 + 0.003f;
		fVar135 = *uParam4 + 0.003f;
	
		if (func_132())
		{
			fVar9.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			fVar18.f_1 = uParam4->f_1 + 0.016f;
			fVar27.f_1 = uParam4->f_1 + 0.016f;
			fVar36.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			fVar45.f_1 = uParam4->f_1 + 0.016f;
			fVar54.f_1 = uParam4->f_1 + 0.016f;
			fVar63.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			fVar72.f_1 = uParam4->f_1 + 0.016f;
			fVar81.f_1 = uParam4->f_1 + 0.016f;
			fVar90.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			fVar99.f_1 = uParam4->f_1 + 0.016f;
			fVar108.f_1 = uParam4->f_1 + 0.016f;
			fVar117.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			fVar126.f_1 = uParam4->f_1 + 0.016f;
			fVar135.f_1 = uParam4->f_1 + 0.016f;
		}
		else
		{
			fVar9.f_1 = uParam4->f_1 + 0.0185f;
			fVar18.f_1 = uParam4->f_1 + 0.019f;
			fVar27.f_1 = uParam4->f_1 + 0.019f;
			fVar36.f_1 = uParam4->f_1 + 0.0185f;
			fVar45.f_1 = uParam4->f_1 + 0.019f;
			fVar54.f_1 = uParam4->f_1 + 0.019f;
			fVar63.f_1 = uParam4->f_1 + 0.0185f;
			fVar72.f_1 = uParam4->f_1 + 0.019f;
			fVar81.f_1 = uParam4->f_1 + 0.019f;
			fVar90.f_1 = uParam4->f_1 + 0.0185f;
			fVar99.f_1 = uParam4->f_1 + 0.019f;
			fVar108.f_1 = uParam4->f_1 + 0.019f;
			fVar117.f_1 = uParam4->f_1 + 0.0185f;
			fVar126.f_1 = uParam4->f_1 + 0.019f;
			fVar135.f_1 = uParam4->f_1 + 0.019f;
		}
	
		fVar9.f_2 = 0.016f + 0.003f;
		fVar18.f_2 = 0.016f + 0.003f;
		fVar27.f_2 = 0.016f + 0.003f;
		fVar36.f_2 = 0.016f + 0.003f;
		fVar45.f_2 = 0.016f + 0.003f;
		fVar54.f_2 = 0.016f + 0.003f;
		fVar63.f_2 = 0.016f + 0.003f;
		fVar72.f_2 = 0.016f + 0.003f;
		fVar81.f_2 = 0.016f + 0.003f;
		fVar90.f_2 = 0.016f + 0.003f;
		fVar99.f_2 = 0.016f + 0.003f;
		fVar108.f_2 = 0.016f + 0.003f;
		fVar117.f_2 = 0.016f + 0.003f;
		fVar126.f_2 = 0.016f + 0.003f;
		fVar135.f_2 = 0.016f + 0.003f;
		fVar9.f_3 = 0.032f + 0.004f;
		fVar18.f_3 = 0.032f + 0.004f;
		fVar27.f_3 = 0.032f + 0.004f;
		fVar36.f_3 = 0.032f + 0.004f;
		fVar45.f_3 = 0.032f + 0.004f;
		fVar54.f_3 = 0.032f + 0.004f;
		fVar63.f_3 = 0.032f + 0.004f;
		fVar72.f_3 = 0.032f + 0.004f;
		fVar81.f_3 = 0.032f + 0.004f;
		fVar90.f_3 = 0.032f + 0.004f;
		fVar99.f_3 = 0.032f + 0.004f;
		fVar108.f_3 = 0.032f + 0.004f;
		fVar117.f_3 = 0.032f + 0.004f;
		fVar126.f_3 = 0.032f + 0.004f;
		fVar135.f_3 = 0.032f + 0.004f;
		fVar9.f_7 = 255;
		fVar18.f_7 = 255;
		fVar27.f_7 = 255;
		fVar36.f_7 = 255;
		fVar45.f_7 = 255;
		fVar54.f_7 = 255;
		fVar63.f_7 = 255;
		fVar72.f_7 = 255;
		fVar81.f_7 = 255;
		fVar90.f_7 = 255;
		fVar99.f_7 = 255;
		fVar108.f_7 = 255;
		fVar117.f_7 = 255;
		fVar126.f_7 = 255;
		fVar135.f_7 = 255;
		func_100(&fVar9, true);
		func_100(&fVar18, true);
		func_100(&fVar27, true);
		func_100(&fVar36, true);
		func_100(&fVar45, true);
		func_100(&fVar54, true);
		func_100(&fVar63, true);
		func_100(&fVar72, true);
		func_100(&fVar81, true);
		func_100(&fVar90, true);
		func_100(&fVar99, true);
		func_100(&fVar108, true);
		func_100(&fVar117, true);
		func_100(&fVar126, true);
		func_100(&fVar135, true);
		TEXT_LABEL_ASSIGN_STRING(&uVar149, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar155, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar161, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar167, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar173, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar179, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar185, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar191, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar197, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar203, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar209, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar215, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar221, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar227, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar233, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar239, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar245, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar251, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar257, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar263, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar269, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar275, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar281, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar287, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar293, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar299, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar305, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar311, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar317, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&uVar323, "", 24);
		bVar329 = true;
		bVar330 = true;
		bVar331 = true;
		bVar332 = true;
		bVar333 = true;
		bVar334 = true;
		bVar335 = true;
		bVar336 = true;
		bVar337 = true;
		bVar338 = true;
		bVar339 = true;
		bVar340 = true;
		bVar341 = true;
		bVar342 = true;
		bVar343 = true;
		func_138(&iParam18, &fVar9, &uVar149, &uVar239, &bVar329, &iParam13, &uVar144, &fVar18, &uVar155, &uVar245, &bVar330, bParam11, bParam25);
		func_138(&iParam19, &fVar36, &uVar167, &uVar257, &bVar332, &iParam14, &uVar145, &fVar45, &uVar173, &uVar263, &bVar333, bParam11, bParam26);
		func_138(&iParam20, &fVar63, &uVar185, &uVar275, &bVar335, &iParam15, &uVar146, &fVar72, &uVar191, &uVar281, &bVar336, bParam11, bParam27);
		func_138(&iParam21, &fVar90, &uVar203, &uVar293, &bVar338, &iParam16, &uVar147, &fVar99, &uVar209, &uVar299, &bVar339, bParam11, bParam28);
		func_138(&iParam22, &fVar117, &uVar221, &uVar311, &bVar341, &iParam17, &uVar148, &fVar126, &uVar227, &uVar317, &bVar342, bParam11, bParam29);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (func_147(&uVar149, &uVar155, &uVar167, &uVar173, &uVar185, &uVar191, &uVar203, &uVar209, &uVar221, &uVar227) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar344 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar344);
			fVar0 = *uParam3;
			fVar0.f_1 = uParam3->f_1;
		
			if (bParam5 < 1000000)
			{
				fVar0 = fVar0 + 0.079f;
				fVar0.f_1 = fVar0.f_1 + 0.008f;
				fVar0.f_2 = fVar0.f_2 + 0.157f;
				fVar0.f_3 = fVar0.f_3 + 0.036f;
				fVar0.f_4 = fVar0.f_4 + 255;
				fVar0.f_5 = fVar0.f_5 + 255;
				fVar0.f_6 = fVar0.f_6 + 255;
				fVar0.f_7 = 140;
			}
			else
			{
				fVar0 = fVar0 + 0.079f;
				fVar0.f_1 = fVar0.f_1 + 0.01f;
				fVar0.f_2 = fVar0.f_2 + 0.157f;
				fVar0.f_3 = fVar0.f_3 + 0.033f;
				fVar0.f_4 = fVar0.f_4 + 255;
				fVar0.f_5 = fVar0.f_5 + 255;
				fVar0.f_6 = fVar0.f_6 + 255;
				fVar0.f_7 = 140;
			}
		
			if (func_132())
			{
				fVar0 = fVar0 + -0.025f;
				fVar0.f_2 = fVar0.f_2 + 0.05f;
			}
		
			Global_1679155.f_7129 = Global_1679155.f_7129 + fVar0.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &fVar0, 1, 0, 4, 0);
			func_84(uParam1, false);
		
			if (bParam35 == false)
				func_146(iParam0);
		
			if (func_103(bParam35, &Global_1679155.f_422[iParam0 /*2*/], &Global_1679155.f_443[iParam0 /*2*/]))
				bVar345 = true;
			else
				bVar345 = false;
		
			if (iParam34 && GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
			{
				if (bVar345)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
						func_145(iParam18, &fVar9, &fVar18, &uVar149, &uVar239, bVar329, &uVar155, &uVar245, bVar330);
				
					if (iParam33 == iParam14 && iParam36 == 4)
						func_145(iParam19, &fVar36, &fVar45, &uVar167, &uVar257, bVar332, &uVar173, &uVar263, bVar333);
				
					if (iParam33 == iParam15 && iParam36 == 3)
						func_145(iParam20, &fVar63, &fVar72, &uVar185, &uVar275, bVar335, &uVar191, &uVar281, bVar336);
				
					if (iParam33 == iParam16 && iParam36 == 2)
						func_145(iParam21, &fVar90, &fVar99, &uVar203, &uVar293, bVar338, &uVar209, &uVar299, bVar339);
				
					if (iParam33 == iParam17 && iParam36 == 1)
						func_145(iParam22, &fVar117, &fVar126, &uVar221, &uVar311, bVar341, &uVar227, &uVar317, bVar342);
				}
			
				if (iParam33 == iParam13 && iParam36 != 5)
					func_145(iParam18, &fVar9, &fVar18, &uVar149, &uVar239, bVar329, &uVar155, &uVar245, bVar330);
			
				if (iParam33 == iParam14 && iParam36 != 4)
					func_145(iParam19, &fVar36, &fVar45, &uVar167, &uVar257, bVar332, &uVar173, &uVar263, bVar333);
			
				if (iParam33 == iParam15 && iParam36 != 3)
					func_145(iParam20, &fVar63, &fVar72, &uVar185, &uVar275, bVar335, &uVar191, &uVar281, bVar336);
			
				if (iParam33 == iParam16 && iParam36 != 2)
					func_145(iParam21, &fVar90, &fVar99, &uVar203, &uVar293, bVar338, &uVar209, &uVar299, bVar339);
			
				if (iParam33 == iParam17 && iParam36 != 1)
					func_145(iParam22, &fVar117, &fVar126, &uVar221, &uVar311, bVar341, &uVar227, &uVar317, bVar342);
			
				if (iParam33 != iParam13)
					func_145(iParam18, &fVar9, &fVar18, &uVar149, &uVar239, bVar329, &uVar155, &uVar245, bVar330);
			
				if (iParam33 != iParam14)
					func_145(iParam19, &fVar36, &fVar45, &uVar167, &uVar257, bVar332, &uVar173, &uVar263, bVar333);
			
				if (iParam33 != iParam15)
					func_145(iParam20, &fVar63, &fVar72, &uVar185, &uVar275, bVar335, &uVar191, &uVar281, bVar336);
			
				if (iParam33 != iParam16)
					func_145(iParam21, &fVar90, &fVar99, &uVar203, &uVar293, bVar338, &uVar209, &uVar299, bVar339);
			
				if (iParam33 != iParam17)
					func_145(iParam22, &fVar117, &fVar126, &uVar221, &uVar311, bVar341, &uVar227, &uVar317, bVar342);
			}
			else
			{
				func_145(iParam18, &fVar9, &fVar18, &uVar149, &uVar239, bVar329, &uVar155, &uVar245, bVar330);
				func_145(iParam19, &fVar36, &fVar45, &uVar167, &uVar257, bVar332, &uVar173, &uVar263, bVar333);
				func_145(iParam20, &fVar63, &fVar72, &uVar185, &uVar275, bVar335, &uVar191, &uVar281, bVar336);
				func_145(iParam21, &fVar90, &fVar99, &uVar203, &uVar293, bVar338, &uVar209, &uVar299, bVar339);
				func_145(iParam22, &fVar117, &fVar126, &uVar221, &uVar311, bVar341, &uVar227, &uVar317, bVar342);
			}
		
			if (bParam32 == false)
				func_144(iParam0);
		
			if (func_103(bParam32, &Global_1679155.f_380[iParam0 /*2*/], &Global_1679155.f_401[iParam0 /*2*/]))
				bVar346 = true;
			else
				bVar346 = false;
		
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_143(&fVar27, &uVar161, &uVar251, &bVar331, &iParam13, &bParam23, bParam11);
						func_143(&fVar54, &uVar179, &uVar269, &bVar334, &iParam14, &bParam23, bParam11);
						func_143(&fVar81, &uVar197, &uVar287, &bVar337, &iParam15, &bParam23, bParam11);
						func_143(&fVar108, &uVar215, &uVar305, &bVar340, &iParam16, &bParam23, bParam11);
						func_143(&fVar135, &uVar233, &uVar323, &bVar343, &iParam17, &bParam23, bParam11);
					
						if (bParam31)
						{
							if (bVar346)
							{
								func_142(&fVar27, &uVar161, &uVar251, bVar331);
								func_142(&fVar54, &uVar179, &uVar269, bVar334);
								func_142(&fVar81, &uVar197, &uVar287, bVar337);
								func_142(&fVar108, &uVar215, &uVar305, bVar340);
								func_142(&fVar135, &uVar233, &uVar323, bVar343);
							}
						}
						else
						{
							func_142(&fVar27, &uVar161, &uVar251, bVar331);
							func_142(&fVar54, &uVar179, &uVar269, bVar334);
							func_142(&fVar81, &uVar197, &uVar287, bVar337);
							func_142(&fVar108, &uVar215, &uVar305, bVar340);
							func_142(&fVar135, &uVar233, &uVar323, bVar343);
						}
						break;
				
					case 0:
						break;
				
					case 1:
						func_143(&fVar27, &uVar161, &uVar251, &bVar331, &iParam13, &bParam23, bParam11);
					
						if (bParam31)
							if (bVar346)
								func_142(&fVar27, &uVar161, &uVar251, bVar331);
						else
							func_142(&fVar27, &uVar161, &uVar251, bVar331);
						break;
				
					case 2:
						func_143(&fVar54, &uVar179, &uVar269, &bVar334, &iParam14, &bParam23, bParam11);
					
						if (bParam31)
							if (bVar346)
								func_142(&fVar54, &uVar179, &uVar269, bVar334);
						else
							func_142(&fVar54, &uVar179, &uVar269, bVar334);
						break;
				
					case 3:
						func_143(&fVar81, &uVar197, &uVar287, &bVar337, &iParam15, &bParam23, bParam11);
					
						if (bParam31)
							if (bVar346)
								func_142(&fVar81, &uVar197, &uVar287, bVar337);
						else
							func_142(&fVar81, &uVar197, &uVar287, bVar337);
						break;
				
					case 4:
						func_143(&fVar108, &uVar215, &uVar305, &bVar340, &iParam16, &bParam23, bParam11);
					
						if (bParam31)
							if (bVar346)
								func_142(&fVar108, &uVar215, &uVar305, bVar340);
						else
							func_142(&fVar108, &uVar215, &uVar305, bVar340);
						break;
				
					case 5:
						func_143(&fVar135, &uVar233, &uVar323, &bVar343, &iParam17, &bParam23, bParam11);
					
						if (bParam31)
							if (bVar346)
								func_142(&fVar135, &uVar233, &uVar323, bVar343);
						else
							func_142(&fVar135, &uVar233, &uVar323, bVar343);
						break;
				}
			}
		
			func_84(uParam2, false);
		
			if (bParam10)
			{
				func_61(uParam4, uParam2, "???", "", true, 2);
			}
			else if (func_56(sParam7))
			{
				if (bParam9 == false)
					if (iParam8 == 0)
						if (bParam5 != -999)
							func_59(uParam4, uParam2, "NUMBER" /* GXT: ~1~ */, bParam5, 2);
					else
						func_57(uParam4, uParam2, "NUMBER" /* GXT: ~1~ */, fParam6, Global_2698855, 2);
				else
					func_54(uParam4, uParam2, "TIMER_DASHES" /* GXT: ~1~/~1~ */, bParam5, bParam9, 2, 0);
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /* GXT: $~1~ */, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S" /* GXT: $~a~ */, sParam7))
			{
				sParam7 = "HUD_CASH_S" /* GXT: $~a~ */;
				*uParam2 = 5;
				func_84(uParam2, false);
				func_49(uParam4, uParam2, sParam7, bParam5, 2);
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /* GXT: -$~1~ */, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S" /* GXT: -$~a~ */, sParam7))
			{
				*uParam2 = 5;
				func_84(uParam2, false);
				sParam7 = "HUD_CASH_NEG_S" /* GXT: -$~a~ */;
				func_49(uParam4, uParam2, sParam7, bParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_59(uParam4, uParam2, sParam7, bParam5, 2);
			}
			else
			{
				func_57(uParam4, uParam2, sParam7, fParam6, Global_2698855, 2);
			}
		
			func_48();
		}
	}
}

void func_142(var uParam0, char* sParam1, char* sParam2, bool bParam3) // Position - 0x9E1D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			func_100(uParam0, bParam3);
			func_92(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}
}

void func_143(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, bool bParam6) // Position - 0x9E58
{
	if (*uParam5 != func_69() && *uParam4 != func_69())
	{
		if (*uParam5 == *uParam4)
		{
			TEXT_LABEL_ASSIGN_STRING(sParam1, "timerbar_sr", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "timer_box", 24);
			*uParam3 = bParam6;
			uParam0->f_2 = 0.016f + 0.008f;
			uParam0->f_3 = 0.038f;
		}
	}
}

void func_144(int iParam0) // Position - 0x9EAE
{
	func_17(&Global_1679155.f_380[iParam0 /*2*/]);
	func_17(&Global_1679155.f_401[iParam0 /*2*/]);
}

void func_145(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7, bool bParam8) // Position - 0x9ED4
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_100(uParam1, bParam5);
		func_92(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}

	if (iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(2, &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uVar0, uVar1, uVar2, 153, 0);
	}

	if (iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 || iParam0 == 24 || iParam0 == 25 || iParam0 == 26 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			func_100(uParam2, bParam8);
			func_92(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}
}

void func_146(int iParam0) // Position - 0xA026
{
	func_17(&Global_1679155.f_422[iParam0 /*2*/]);
	func_17(&Global_1679155.f_443[iParam0 /*2*/]);
}

int func_147(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0xA04C
{
	int iVar0;

	iVar0 = 1;

	if (func_148(uParam0, uParam1) == 0)
		iVar0 = 0;

	if (func_148(uParam2, uParam3) == 0)
		iVar0 = 0;

	if (func_148(uParam4, uParam5) == 0)
		iVar0 = 0;

	if (func_148(uParam6, uParam7) == 0)
		iVar0 = 0;

	if (func_148(uParam8, uParam9) == 0)
		iVar0 = 0;

	return iVar0;
}

int func_148(var uParam0, var uParam1) // Position - 0xA0A4
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam0, 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0))
			iVar0 = 1;
	}
	else
	{
		iVar0 = 1;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam1))
			iVar1 = 1;
	}
	else
	{
		iVar1 = 1;
	}

	if (iVar0 && iVar1)
		return 1;

	return 0;
}

void func_149(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14) // Position - 0xA109
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(11, iParam0))
		func_150(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, bParam2, bParam3, bParam4, bParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, bParam14);
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19) // Position - 0xA147
{
	float fVar0;
	bool bVar9;
	int iVar10;
	float fVar11;
	float fVar20;
	float fVar29;
	float fVar38;
	float fVar47;
	float fVar56;
	float fVar65;
	float fVar74;
	var uVar83;
	var uVar84;
	var uVar85;
	var uVar86;
	var uVar87;
	var uVar93;
	var uVar99;
	var uVar105;
	var uVar111;
	var uVar117;
	var uVar123;
	var uVar129;
	var uVar135;
	var uVar141;
	var uVar147;
	var uVar153;
	var uVar159;
	var uVar165;
	var uVar171;
	var uVar177;
	bool bVar183;
	bool bVar184;
	bool bVar185;
	bool bVar186;
	bool bVar187;
	bool bVar188;
	bool bVar189;
	bool bVar190;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		func_120(11, iParam0);
		func_129(uParam1, 0);
		func_124(uParam1);
	
		if (Global_1679155 == 1)
			func_119(iParam6);
	
		func_126(uParam2, 0, 0);
		func_123(uParam2);
		func_114(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_133(&fVar0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (bParam19 == false)
			func_151(iParam0);
	
		if (func_103(bParam19, &Global_1679155.f_338[iParam0 /*2*/], &Global_1679155.f_359[iParam0 /*2*/]))
			bVar9 = true;
		else
			bVar9 = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			fVar0 = *uParam3;
			fVar0.f_1 = uParam3->f_1;
			fVar0 = fVar0 + 0.079f;
			fVar0.f_1 = fVar0.f_1 + 0.008f;
			fVar0.f_2 = fVar0.f_2 + 0.157f;
			fVar0.f_3 = fVar0.f_3 + 0.036f;
			fVar0.f_4 = fVar0.f_4 + 255;
			fVar0.f_5 = fVar0.f_5 + 255;
			fVar0.f_6 = fVar0.f_6 + 255;
			fVar0.f_7 = 140;
		
			if (func_132())
			{
				fVar0 = fVar0 + -0.025f;
				fVar0.f_2 = fVar0.f_2 + 0.05f;
			}
		
			Global_1679155.f_7129 = Global_1679155.f_7129 + fVar0.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &fVar0, 1, 0, 4, 0);
			func_84(uParam1, false);
			fVar11 = *uParam4 + 0.145f + 0.001f;
			fVar20 = *uParam4 + 0.145f + 0.001f;
			fVar29 = *uParam4 + 0.123f;
			fVar38 = *uParam4 + 0.123f;
			fVar47 = *uParam4 + 0.101f;
			fVar56 = *uParam4 + 0.101f;
			fVar65 = *uParam4 + 0.078f;
			fVar74 = *uParam4 + 0.078f;
		
			if (func_132())
			{
				fVar11.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar20.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar29.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar38.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar47.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar56.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				fVar65.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				fVar74.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
			}
			else
			{
				fVar11.f_1 = uParam4->f_1 + 0.0185f;
				fVar20.f_1 = uParam4->f_1 + 0.019f;
				fVar29.f_1 = uParam4->f_1 + 0.0185f;
				fVar38.f_1 = uParam4->f_1 + 0.019f;
				fVar47.f_1 = uParam4->f_1 + 0.0185f;
				fVar56.f_1 = uParam4->f_1 + 0.019f;
				fVar65.f_1 = uParam4->f_1 + 0.0185f;
				fVar74.f_1 = uParam4->f_1 + 0.019f;
			}
		
			fVar11.f_2 = 0.016f + 0.003f;
			fVar20.f_2 = 0.016f + 0.003f;
			fVar29.f_2 = 0.016f + 0.003f;
			fVar38.f_2 = 0.016f + 0.003f;
			fVar47.f_2 = 0.016f + 0.003f;
			fVar56.f_2 = 0.016f + 0.003f;
			fVar65.f_2 = 0.016f + 0.003f;
			fVar74.f_2 = 0.016f + 0.003f;
			fVar11.f_3 = 0.032f + 0.004f;
			fVar20.f_3 = 0.032f + 0.004f;
			fVar29.f_3 = 0.032f + 0.004f;
			fVar38.f_3 = 0.032f + 0.004f;
			fVar47.f_3 = 0.032f + 0.004f;
			fVar56.f_3 = 0.032f + 0.004f;
			fVar65.f_3 = 0.032f + 0.004f;
			fVar74.f_3 = 0.032f + 0.004f;
			fVar11.f_7 = 255;
			fVar20.f_7 = 255;
			fVar29.f_7 = 255;
			fVar38.f_7 = 255;
			fVar47.f_7 = 255;
			fVar56.f_7 = 255;
			fVar65.f_7 = 255;
			fVar74.f_7 = 255;
			func_100(&fVar11, true);
			func_100(&fVar20, true);
			func_100(&fVar29, true);
			func_100(&fVar38, true);
			func_100(&fVar47, true);
			func_100(&fVar56, true);
			func_100(&fVar65, true);
			func_100(&fVar74, true);
			TEXT_LABEL_ASSIGN_STRING(&uVar87, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar93, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar99, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar105, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar111, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar117, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar123, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&uVar129, "", 24);
			bVar183 = true;
			bVar184 = true;
			bVar185 = true;
			bVar186 = true;
			bVar187 = true;
			bVar188 = true;
			bVar189 = true;
			bVar190 = true;
			func_138(&iParam11, &fVar11, &uVar87, &uVar135, &bVar183, &bParam7, &uVar83, &fVar20, &uVar93, &uVar141, &bVar184, iParam5, 0);
			func_138(&iParam12, &fVar29, &uVar99, &uVar147, &bVar185, &bParam8, &uVar84, &fVar38, &uVar105, &uVar153, &bVar186, iParam5, 0);
			func_138(&iParam13, &fVar47, &uVar111, &uVar159, &bVar187, &bParam9, &uVar85, &fVar56, &uVar117, &uVar165, &bVar188, iParam5, 0);
			func_138(&iParam14, &fVar65, &uVar123, &uVar171, &bVar189, &bParam10, &uVar86, &fVar74, &uVar129, &uVar177, &bVar190, iParam5, 0);
		
			if (bParam15)
				if (bVar9)
					func_137(iParam11, &fVar11, &fVar20, &uVar87, &uVar135, bVar183, &uVar93, &uVar141, bVar184);
			else
				func_137(iParam11, &fVar11, &fVar20, &uVar87, &uVar135, bVar183, &uVar93, &uVar141, bVar184);
		
			if (bParam16)
				if (bVar9)
					func_137(iParam12, &fVar29, &fVar38, &uVar99, &uVar147, bVar185, &uVar105, &uVar153, bVar186);
			else
				func_137(iParam12, &fVar29, &fVar38, &uVar99, &uVar147, bVar185, &uVar105, &uVar153, bVar186);
		
			if (bParam17)
				if (bVar9)
					func_137(iParam13, &fVar47, &fVar56, &uVar111, &uVar159, bVar187, &uVar117, &uVar165, bVar188);
			else
				func_137(iParam13, &fVar47, &fVar56, &uVar111, &uVar159, bVar187, &uVar117, &uVar165, bVar188);
		
			if (bParam18)
				if (bVar9)
					func_137(iParam14, &fVar65, &fVar74, &uVar123, &uVar171, bVar189, &uVar129, &uVar177, bVar190);
			else
				func_137(iParam14, &fVar65, &fVar74, &uVar123, &uVar171, bVar189, &uVar129, &uVar177, bVar190);
		}
	
		func_48();
	}
}

void func_151(int iParam0) // Position - 0xA721
{
	func_17(&Global_1679155.f_338[iParam0 /*2*/]);
	func_17(&Global_1679155.f_359[iParam0 /*2*/]);
}

void func_152(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, bool bParam13, int iParam14, bool bParam15) // Position - 0xA747
{
	var uVar0;
	var uVar11;
	var uVar13;

	if (func_29(10, iParam0))
	{
		uVar13 = 4;
		func_153(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, bParam4, bParam7, bParam6, bParam5, iParam8, iParam9, iParam10, sParam11, sParam12, bParam13, iParam14, bParam15);
	}
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, bool bParam17, int iParam18, bool bParam19) // Position - 0xA78A
{
	float fVar0;
	bool bVar9;
	int iVar10;
	var uVar11;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		iParam13 == 2;
		func_120(10, iParam0);
	
		if (func_132())
			func_166(uParam1, 0);
		else if (bParam17)
			func_129(uParam1, 0);
		else if (bParam10)
			func_130(uParam1, 3);
		else
			func_129(uParam1, 0);
	
		if (Global_1679155 == 1)
			func_119(iParam6);
	
		func_162(uParam2, uParam3, &fVar0, iParam6, uParam1);
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	
		if (bParam11 == false)
			func_161(iParam0);
	
		if (iParam14 == 0)
			func_160(iParam0);
	
		if (func_103(bParam11, &Global_1679155.f_296[iParam0 /*2*/], &Global_1679155.f_317[iParam0 /*2*/]))
			bVar9 = true;
		else
			bVar9 = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			fVar0 = *uParam2;
			fVar0.f_1 = uParam2->f_1;
			fVar0 = fVar0 + 0.079f;
			fVar0.f_1 = fVar0.f_1 + 0.008f;
			fVar0.f_2 = fVar0.f_2 + 0.157f;
			fVar0.f_3 = fVar0.f_3 + 0.036f;
			fVar0.f_4 = fVar0.f_4 + 255;
			fVar0.f_5 = fVar0.f_5 + 255;
			fVar0.f_6 = fVar0.f_6 + 255;
			fVar0.f_7 = 140;
		
			if (func_132())
			{
				fVar0 = fVar0 + -0.025f;
				fVar0.f_2 = fVar0.f_2 + 0.05f;
			}
		
			Global_1679155.f_7129 = Global_1679155.f_7129 + fVar0.f_3;
		
			if (iParam14 > 0)
			{
				uVar11 = { fVar0 };
			
				if (func_260(&Global_1679155.f_905[iParam0 /*2*/], 2000, false) == false)
				{
					if (func_102(Global_1679155.f_905[iParam0 /*2*/], 1250, false))
						Global_1679155.f_926[iParam0] = Global_1679155.f_926[iParam0] - 17;
				
					uVar11.f_7 = Global_1679155.f_926[iParam0];
					func_100(&uVar11, bParam8);
					func_92("TimerBars", "ALL_WHITE_bg", &uVar11, 1, 0, iVar10, 0);
				}
			}
			else
			{
				Global_1679155.f_926[iParam0] = 255;
				func_78(&Global_1679155.f_905[iParam0 /*2*/], false, false);
			}
		
			func_92("TimerBars", "ALL_BLACK_bg", &fVar0, 1, 0, iVar10, 0);
			func_86(&fVar0, iParam18);
		
			if (func_132())
				if (bParam10)
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.012f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.008f;
			else if (bParam10)
				uParam2->f_1 = uParam2->f_1 + -0.005f + 0.001f;
		
			iVar10 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		
			if (bParam17)
			{
				func_85(uParam1, bParam8);
				func_84(uParam1, false);
				func_61(uParam2, uParam1, sParam7, "", bParam19, 2);
			}
			else if (bParam10 == true)
			{
				func_85(uParam1, bParam8);
				func_84(uParam1, false);
				func_61(uParam2, uParam1, sParam7, "", bParam19, 2);
			}
			else
			{
				func_84(uParam1, false);
			
				if (bParam9 == -1)
					func_82(uParam2, uParam1, sParam7, 0, 1);
				else
					func_59(uParam2, uParam1, sParam7, bParam9, 2);
			}
		
			iVar10 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		
			if (bVar9)
			{
				func_156(iParam4, iParam5, uParam3, bParam8, iParam12, iVar10);
				func_154(sParam15, uParam3, iVar10, sParam16);
			}
		
			func_48();
		}
	}
}

void func_154(char* sParam0, var uParam1, int iParam2, char* sParam3) // Position - 0xAB19
{
	var uVar0;

	uVar0 = 1;
	uVar0[0 /*9*/] = 0f;
	uVar0[0 /*9*/].f_1 = 0f;
	uVar0[0 /*9*/].f_2 = -0.015f;
	uVar0[0 /*9*/].f_3 = -0.025f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, 0);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
	{
		func_155(&uParam1->[0 /*9*/], &uVar0[0 /*9*/]);
		func_100(&uParam1->[0 /*9*/], true);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
		uParam1->[0 /*9*/].f_7 = 255;
		func_92(sParam3, sParam0, &uParam1->[0 /*9*/], 0, 0, iParam2, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	}
}

void func_155(var uParam0, var uParam1) // Position - 0xAB9E
{
	*uParam0 = *uParam0 + *uParam1;
	uParam0->f_1 = uParam0->f_1 + uParam1->f_1;
	uParam0->f_2 = uParam0->f_2 + uParam1->f_2;
	uParam0->f_3 = uParam0->f_3 + uParam1->f_3;
	uParam0->f_4 = uParam0->f_4 + uParam1->f_4;
	uParam0->f_5 = uParam0->f_5 + uParam1->f_5;
	uParam0->f_6 = uParam0->f_6 + uParam1->f_6;
	uParam0->f_7 = uParam0->f_7 + uParam1->f_7;
}

void func_156(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5) // Position - 0xAC0B
{
	var uVar0;
	float fVar19;

	uVar0 = 2;
	uVar0[0 /*9*/] = 0.003f;
	uVar0[0 /*9*/].f_1 = -0.004f;
	uVar0[0 /*9*/].f_2 = 0.011f;
	uVar0[0 /*9*/].f_3 = 0.059f;
	uVar0[1 /*9*/] = 0f;
	uVar0[1 /*9*/].f_2 = 0.011f;
	uVar0[1 /*9*/].f_3 = 0.059f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_155(&uParam2->[0 /*9*/], &uVar0[0 /*9*/]);
		func_155(&uParam2->[1 /*9*/], &uVar0[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_100(&uParam2->[1 /*9*/], bParam3);
		func_100(&uParam2->[3 /*9*/], bParam3);
		fVar19 = (BUILTIN::TO_FLOAT(iParam0) / BUILTIN::TO_FLOAT(iParam1)) * 100f;
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		func_100(&uParam2->[3 /*9*/], bParam3);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		uParam2->[3 /*9*/].f_7 = 255;
		func_157(uParam2->[0 /*9*/], fVar19, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, true);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_157(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15) // Position - 0xAD60
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;

	fVar0 = fParam0.f_2;
	fVar1 = 0f;
	fVar2 = func_159(fParam0);
	fVar3 = fParam9;

	if (fParam9 < 0f)
		fVar3 = 0f;

	if (fParam9 > 100f)
		fVar3 = 100f;

	if (bParam15)
		if (fParam9 > 95f && fParam9 < 100f)
			fVar3 = 96f;

	if (iParam12 == 0)
	{
		fVar4 = (fVar1 - fVar0) / 100f;
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = (fVar4 * fVar5) + fVar6;
		fVar2 = fParam0;
		fVar8 = func_158(fParam0);
		fVar9 = fVar8 - (fVar7 / 2f);
	}
	else
	{
		fVar4 = (fVar0 - fVar1) / 100f;
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = (fVar4 * fVar5) + fVar6;
	
		if (fParam9 >= 100f)
			fVar7 = fParam0.f_2;
	
		fVar8 = fParam0;
		fVar4 = (fVar8 - fVar2) / 100f;
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = (fVar4 * fVar5) + fVar6;
	}

	if (iParam14 > 0f && iParam14 < 100f)
	{
		fVar10 = fParam0.f_2 * 0.01f;
		fVar9 = fVar9 + (iParam14 * fVar10);
	}

	*uParam10 = fVar9;
	uParam10->f_1 = fParam0.f_1;
	uParam10->f_2 = fVar7;

	if (iParam11 == 1)
		uParam10->f_3 = fParam0.f_3;

	uParam10->f_8 = fParam0.f_8;
}

float func_158(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAEA5
{
	float fVar0;
	float fVar1;

	fVar0 = fParam0.f_2 / 2f;
	fVar1 = fParam0;
	fVar1 = fVar1 + fVar0;
	fVar1 = fVar1 - 0.002f;
	return fVar1;
}

float func_159(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAECC
{
	float fVar0;
	float fVar1;

	fVar0 = fParam0.f_2 / 2f;
	fVar1 = fParam0;
	fVar1 = fVar1 - fVar0;
	return fVar1;
}

void func_160(int iParam0) // Position - 0xAEE9
{
	func_17(&Global_1679155.f_800[iParam0 /*2*/]);
	func_17(&Global_1679155.f_821[iParam0 /*2*/]);
}

void func_161(int iParam0) // Position - 0xAF0F
{
	func_17(&Global_1679155.f_296[iParam0 /*2*/]);
	func_17(&Global_1679155.f_317[iParam0 /*2*/]);
	Global_1679155.f_1177.f_205[iParam0] = -1;
}

void func_162(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) // Position - 0xAF43
{
	float fVar0;

	fVar0 = func_165(false, true);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam3);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam4);
	func_163(uParam1, iParam3, -1f, -1f);
	func_115(iParam3, -fVar0);
	func_133(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_163(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xAF97
{
	float fVar0;
	float fVar1;

	if (!func_164(fParam2, fParam3))
	{
		fVar0 = func_74() + func_73(iParam1);
		fVar1 = func_72();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}

	uParam0->[0 /*9*/] = fVar1;
	uParam0->[0 /*9*/].f_1 = fVar0;
	uParam0->[0 /*9*/].f_2 = 0.062f;
	uParam0->[0 /*9*/].f_3 = 0.016f;
	uParam0->[0 /*9*/].f_4 = 255;
	uParam0->[0 /*9*/].f_5 = 255;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = fVar1;
	uParam0->[1 /*9*/].f_1 = fVar0;
	uParam0->[1 /*9*/].f_2 = 0.069f;
	uParam0->[1 /*9*/].f_3 = 0.011f;
	uParam0->[1 /*9*/].f_4 = 255;
	uParam0->[1 /*9*/].f_5 = 255;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = fVar1;
	uParam0->[2 /*9*/].f_1 = fVar0;
	uParam0->[2 /*9*/].f_2 = 0.069f;
	uParam0->[2 /*9*/].f_3 = 0.009f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 120;
	uParam0->[3 /*9*/] = fVar1;
	uParam0->[3 /*9*/].f_1 = fVar0;
	uParam0->[3 /*9*/].f_2 = 0.069f;
	uParam0->[3 /*9*/].f_3 = 0.008f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 90;
}

bool func_164(int iParam0, float fParam1) // Position - 0xB0F1
{
	if (iParam0 == -1f && fParam1 == -1f)
		return false;

	return true;
}

float func_165(bool bParam0, bool bParam1) // Position - 0xB10E
{
	float fVar0;

	fVar0 = 0.025f + 0.006f + 0.0009f;

	if (bParam0 == 1)
		fVar0 = fVar0 + 0.008f;

	if (bParam1)
		fVar0 = fVar0 + 0.008f;

	return fVar0;
}

void func_166(var uParam0, int iParam1) // Position - 0xB14A
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.508f - 0.03f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_167(int iParam0, int iParam1, int iParam2) // Position - 0xB19C
{
	var uVar0;
	var uVar11;

	if (func_29(9, iParam0))
		func_168(iParam0, &uVar0, &uVar11, 1, iParam1, iParam2);
}

void func_168(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0xB1BE
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var uVar5;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		HUD::GET_HUD_COLOUR(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_171(uParam1, 3, uVar0, uVar1, uVar2);
	
		if (func_132())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
	
		if (Global_1679155 == 1)
			func_119(iParam3);
	
		fVar4 = 0.131f;
	
		if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
			fVar4 = 0.0872f;
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
			fVar4 = 0.095f;
	
		*uParam2 = 0.795f;
		uParam2->f_1 = (func_73(iParam3) + func_116(uParam1)) - fVar4;
		func_123(uParam1);
		func_84(uParam1, false);
		func_120(9, iParam0);
		Global_1679155.f_7129 = Global_1679155.f_7129 + (fVar4 - 0.036f);
		func_170(&uVar5, iParam4);
		func_82(uParam2, uParam1, func_169(&uVar5), 0, 1);
		func_48();
	}
}

char* func_169(char* sParam0) // Position - 0xB2A3
{
	return sParam0;
}

void func_170(var uParam0, int iParam1) // Position - 0xB2AD
{
	var uVar0;

	TEXT_LABEL_ASSIGN_STRING(&uVar0, "RACE_POS_", 16);
	TEXT_LABEL_APPEND_INT(&uVar0, iParam1, 16);
	*uParam0 = { uVar0 };
}

void func_171(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0xB2CB
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
}

void func_172(int iParam0, char* sParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB313
{
	var uVar0;
	var uVar11;
	var uVar13;

	if (func_29(8, iParam0))
	{
		uVar13 = 2;
		func_173(iParam0, &uVar0, &uVar11, &uVar13, 1, sParam1, bParam3, fParam2, iParam4, iParam5, iParam6);
	}
}

void func_173(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, bool bParam6, float fParam7, int iParam8, int iParam9, int iParam10) // Position - 0xB344
{
	var uVar0;
	float fVar9;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		func_133(&fVar9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_129(uParam1, 0);
		func_124(uParam1);
		func_120(8, iParam0);
	
		if (Global_1679155 == 1)
			func_119(iParam4);
	
		func_174(uParam2, iParam4, uParam1, &uVar0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Hunting"))
		{
			fVar9 = *uParam2;
			fVar9.f_1 = uParam2->f_1;
			fVar9 = fVar9 + 0.079f;
			fVar9.f_1 = fVar9.f_1 + 0.008f;
			fVar9.f_2 = fVar9.f_2 + 0.157f;
			fVar9.f_3 = fVar9.f_3 + 0.036f;
			fVar9.f_4 = fVar9.f_4 + 255;
			fVar9.f_5 = fVar9.f_5 + 255;
			fVar9.f_6 = fVar9.f_6 + 255;
			fVar9.f_7 = 140;
		
			if (func_132())
			{
				fVar9 = fVar9 + -0.025f;
				fVar9.f_2 = fVar9.f_2 + 0.05f;
			}
		
			Global_1679155.f_7129 = Global_1679155.f_7129 + fVar9.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &fVar9, 1, 0, 4, 0);
			uVar0.f_4 = iParam8;
			uVar0.f_5 = iParam9;
			uVar0.f_6 = iParam10;
			uVar0.f_7 = 255;
			uVar0.f_8 = fParam7;
			func_92("Hunting", "HuntingWindArrow_32", &uVar0, 1, 0, 4, 0);
			uParam1->f_3 = iParam8;
			uParam1->f_4 = iParam9;
			uParam1->f_5 = iParam10;
			uParam1->f_6 = 255;
			func_84(uParam1, false);
			fParam7 = fParam7;
			uParam3->[0 /*9*/] = uParam3->[0 /*9*/];
			func_59(uParam2, uParam1, sParam5, bParam6, 2);
			func_48();
		}
	}
}

void func_174(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0xB4D9
{
	float fVar0;

	fVar0 = func_165(false, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam1);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam2);
	func_115(iParam1, -fVar0);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam2);
	*uParam3 = 0.9375f;
	uParam3->f_1 = uParam0->f_1 + 0.009f;
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_175(int iParam0, bool bParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, float fParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, bool bParam37, bool bParam38, bool bParam39, bool bParam40, bool bParam41, bool bParam42, bool bParam43, bool bParam44, bool bParam45, bool bParam46, int iParam47, bool bParam48, bool bParam49, bool bParam50, bool bParam51, bool bParam52, bool bParam53, bool bParam54, bool bParam55) // Position - 0xB54A
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar95;

	if (func_29(2, iParam0))
	{
		uVar13 = 9;
	
		if (bParam1 < 9)
			func_176(iParam0, &uVar0, &uVar11, &uVar13, &uVar95, bParam1, 1, bParam3, bParam4, sParam2, iParam5, bParam6, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, iParam13, bParam14, bParam15, bParam16, iParam17, fParam18, iParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28, iParam29, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, bParam37, bParam38, bParam39, bParam40, bParam41, bParam42, bParam43, bParam44, bParam45, bParam46, iParam47, bParam48, bParam49, bParam50, bParam51, bParam52, bParam53, bParam54, bParam55);
	}
}

void func_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22, float fParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, bool bParam42, bool bParam43, bool bParam44, bool bParam45, bool bParam46, bool bParam47, bool bParam48, bool bParam49, bool bParam50, bool bParam51, int iParam52, bool bParam53, bool bParam54, bool bParam55, bool bParam56, bool bParam57, bool bParam58, bool bParam59, bool bParam60) // Position - 0xB5E9
{
	float fVar0;
	bool bVar9;
	int iVar10;
	var uVar11;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		iParam40 == 2;
		func_120(2, iParam0);
	
		if (Global_1679155 == 1)
			func_119(iParam6);
	
		func_183(uParam2, uParam3, &fVar0, uParam4, iParam6, iParam22, fParam23, uParam1);
	
		if (func_132())
			func_166(uParam1, 0);
		else if (bParam51)
			func_129(uParam1, 0);
		else if (bParam21)
			func_130(uParam1, 3);
		else
			func_129(uParam1, 0);
	
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	
		if (bParam19 == false)
			func_182(iParam0);
	
		if (iParam41 == 0)
			func_181(iParam0);
	
		iVar10 = func_104();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			if (func_103(bParam19, &Global_1679155.f_212[iParam0 /*2*/], &Global_1679155.f_233[iParam0 /*2*/]))
				bVar9 = true;
			else
				bVar9 = false;
		
			if (!func_164(iParam22, fParam23))
			{
				fVar0 = *uParam2;
				fVar0.f_1 = uParam2->f_1;
				fVar0 = fVar0 + 0.079f;
				fVar0.f_1 = fVar0.f_1 + 0.012f;
				fVar0.f_2 = fVar0.f_2 + 0.157f;
				fVar0.f_3 = fVar0.f_3 + 0.028f;
				fVar0.f_4 = fVar0.f_4 + 255;
				fVar0.f_5 = fVar0.f_5 + 255;
				fVar0.f_6 = fVar0.f_6 + 255;
				fVar0.f_7 = 140;
			
				if (func_132())
				{
					fVar0 = fVar0 + -0.025f;
					fVar0.f_2 = fVar0.f_2 + 0.05f;
				}
			
				Global_1679155.f_7129 = Global_1679155.f_7129 + fVar0.f_3;
			
				if (iParam41 > 0)
				{
					uVar11 = { fVar0 };
				
					if (func_260(&Global_1679155.f_1065[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_102(Global_1679155.f_1065[iParam0 /*2*/], 1250, false))
							Global_1679155.f_1086[iParam0] = Global_1679155.f_1086[iParam0] - 17;
					
						uVar11.f_7 = Global_1679155.f_1086[iParam0];
						func_100(&uVar11, bParam7);
						func_92("TimerBars", "ALL_WHITE_bg", &uVar11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1679155.f_1086[iParam0] = 255;
					func_78(&Global_1679155.f_1065[iParam0 /*2*/], false, false);
				}
			
				func_92("TimerBars", "ALL_BLACK_bg", &fVar0, 1, 0, iVar10, 0);
			}
		
			func_86(&fVar0, iParam52);
			iVar10 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
			func_85(uParam1, bParam42);
		
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				uParam2->f_1 = uParam2->f_1 + -0.009f;
			else
				uParam2->f_1 = uParam2->f_1 + -0.003f;
		
			if (func_132())
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.007f;
		
			if (func_132() == false)
				if (bParam51)
					uParam2->f_1 = uParam2->f_1 + 0.003f;
				else if (bParam21)
					uParam2->f_1 = uParam2->f_1 + -0.002f;
			else if (bParam21)
				uParam2->f_1 = uParam2->f_1 + 0.007f;
			else
				uParam2->f_1 = uParam2->f_1 + 0.003f;
		
			if (!func_164(iParam22, fParam23))
			{
				func_84(uParam1, false);
			
				if (bParam51)
				{
					func_61(uParam2, uParam1, sParam9, "", bParam42, 2);
				}
				else if (bParam21 == true)
				{
					func_61(uParam2, uParam1, sParam9, "", bParam42, 2);
				}
				else if (bParam20 == -1)
				{
					func_82(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = uParam2->f_1 - -0.003f;
					func_59(uParam2, uParam1, sParam9, bParam20, 2);
				}
			}
		
			if (bVar9)
				func_177(bParam5, uParam3, bParam7, bParam8, iParam10, bParam11, bParam12, bParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam24, iParam25, iParam26, iParam27, iParam28, iParam29, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iVar10, bParam43, bParam44, bParam45, bParam46, bParam47, bParam48, bParam49, bParam50, bParam53, bParam54, bParam55, bParam56, bParam57, bParam58, bParam59, bParam60);
		
			func_48();
		}
	}
}

void func_177(bool bParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, int iParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, bool bParam35, bool bParam36, bool bParam37, bool bParam38, bool bParam39, bool bParam40, bool bParam41, bool bParam42, bool bParam43, bool bParam44, bool bParam45) // Position - 0xB9F7
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	bool bVar14;

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Cross", 0);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Cross"))
	{
		fVar3 = -0.0094f;
	
		for (iVar4 = 0; iVar4 <= bParam0 - 1; iVar4 = iVar4 + 1)
		{
			uParam1->[iVar4 /*9*/] = uParam1->[iVar4 /*9*/] + (fVar3 * (float)iVar4);
		
			if (func_180(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = bParam5;
						bVar1 = bParam13;
						bVar2 = bParam21;
						break;
				
					case 1:
						bVar0 = bParam6;
						bVar1 = bParam14;
						bVar2 = bParam22;
						break;
				
					case 2:
						bVar0 = bParam7;
						bVar1 = bParam15;
						bVar2 = bParam23;
						break;
				
					case 3:
						bVar0 = bParam8;
						bVar1 = bParam16;
						bVar2 = bParam24;
						break;
				
					case 4:
						bVar0 = bParam9;
						bVar1 = bParam17;
						bVar2 = bParam25;
						break;
				
					case 5:
						bVar0 = bParam10;
						bVar1 = bParam18;
						bVar2 = bParam26;
						break;
				
					case 6:
						bVar0 = bParam11;
						bVar1 = bParam19;
						bVar2 = bParam27;
						break;
				
					case 7:
						bVar0 = bParam12;
						bVar1 = bParam20;
						bVar2 = bParam28;
						break;
				}
			
				bVar14 = false;
			
				if (bVar2 == 2)
				{
					bVar14 = true;
					bVar2 = true;
				}
			
				uVar5 = { func_179(uParam1->[iVar4 /*9*/], bVar0, bParam2, bParam3, bVar1, bVar2) };
			
				if (bVar14)
					uVar5.f_7 = 51;
			
				func_92("TimerBars", "Circle_checkpoints", &uVar5, 0, 0, iParam29, 0);
			
				if (func_178(iVar4, bParam30, bParam31, bParam32, bParam33, bParam34, bParam35, bParam36, bParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_100(&uParam1->[iVar4 /*9*/], bParam38);
							break;
					
						case 1:
							func_100(&uParam1->[iVar4 /*9*/], bParam39);
							break;
					
						case 2:
							func_100(&uParam1->[iVar4 /*9*/], bParam40);
							break;
					
						case 3:
							func_100(&uParam1->[iVar4 /*9*/], bParam41);
							break;
					
						case 4:
							func_100(&uParam1->[iVar4 /*9*/], bParam42);
							break;
					
						case 5:
							func_100(&uParam1->[iVar4 /*9*/], bParam43);
							break;
					
						case 6:
							func_100(&uParam1->[iVar4 /*9*/], bParam44);
							break;
					
						case 7:
							func_100(&uParam1->[iVar4 /*9*/], bParam45);
							break;
					}
				
					func_92("Cross", "Circle_checkpoints_Cross", &uParam1->[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
		}
	}
}

bool func_178(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) // Position - 0xBC37
{
	if (iParam0 == 0 && bParam1 == 1)
		return true;

	if (iParam0 == 1 && bParam2 == 1)
		return true;

	if (iParam0 == 2 && bParam3 == 1)
		return true;

	if (iParam0 == 3 && bParam4 == 1)
		return true;

	if (iParam0 == 4 && bParam5 == 1)
		return true;

	if (iParam0 == 5 && bParam6 == 1)
		return true;

	if (iParam0 == 6 && bParam7 == 1)
		return true;

	if (iParam0 == 7 && bParam8 == 1)
		return true;

	return false;
}

struct<9> func_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13) // Position - 0xBCE0
{
	var uVar0;

	uVar0 = { uParam0 };

	if (bParam12 == false)
		if (bParam9)
			func_100(&uVar0, bParam10);
		else
			func_100(&uVar0, bParam11);
	else if (bParam9)
		func_100(&uVar0, bParam12);
	else
		func_100(&uVar0, bParam13);

	bParam9 == false;
	return uVar0;
}

bool func_180(int iParam0, int iParam1) // Position - 0xBD36
{
	if (iParam1 == -1)
		return true;

	if (iParam0 > iParam1)
		return false;

	return true;
}

void func_181(int iParam0) // Position - 0xBD54
{
	func_17(&Global_1679155.f_716[iParam0 /*2*/]);
	func_17(&Global_1679155.f_737[iParam0 /*2*/]);
}

void func_182(int iParam0) // Position - 0xBD7A
{
	func_17(&Global_1679155.f_212[iParam0 /*2*/]);
	func_17(&Global_1679155.f_233[iParam0 /*2*/]);
}

void func_183(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, float fParam6, var uParam7) // Position - 0xBD9E
{
	float fVar0;

	fVar0 = func_165(false, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam4);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam7);
	func_185(uParam1, iParam4, iParam5, fParam6);
	func_184(uParam3);

	if (!func_164(iParam5, fParam6))
		func_115(iParam4, -fVar0);

	func_133(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_184(var uParam0) // Position - 0xBE06
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_185(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xBE46
{
	float fVar0;
	float fVar1;

	if (!func_164(fParam2, fParam3))
	{
		fVar0 = func_74() + func_73(iParam1);
		fVar1 = func_186();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}

	uParam0->[0 /*9*/] = fVar1;
	uParam0->[0 /*9*/].f_1 = fVar0;
	uParam0->[0 /*9*/].f_2 = 0.012f;
	uParam0->[0 /*9*/].f_3 = 0.023f;
	uParam0->[0 /*9*/].f_4 = 0;
	uParam0->[0 /*9*/].f_5 = 0;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = fVar1;
	uParam0->[1 /*9*/].f_1 = fVar0;
	uParam0->[1 /*9*/].f_2 = 0.012f;
	uParam0->[1 /*9*/].f_3 = 0.023f;
	uParam0->[1 /*9*/].f_4 = 0;
	uParam0->[1 /*9*/].f_5 = 0;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = fVar1;
	uParam0->[2 /*9*/].f_1 = fVar0;
	uParam0->[2 /*9*/].f_2 = 0.012f;
	uParam0->[2 /*9*/].f_3 = 0.023f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 250;
	uParam0->[3 /*9*/] = fVar1;
	uParam0->[3 /*9*/].f_1 = fVar0;
	uParam0->[3 /*9*/].f_2 = 0.012f;
	uParam0->[3 /*9*/].f_3 = 0.023f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 250;
	uParam0->[4 /*9*/] = fVar1;
	uParam0->[4 /*9*/].f_1 = fVar0;
	uParam0->[4 /*9*/].f_2 = 0.012f;
	uParam0->[4 /*9*/].f_3 = 0.023f;
	uParam0->[4 /*9*/].f_4 = 0;
	uParam0->[4 /*9*/].f_5 = 0;
	uParam0->[4 /*9*/].f_6 = 0;
	uParam0->[4 /*9*/].f_7 = 250;
	uParam0->[5 /*9*/] = fVar1;
	uParam0->[5 /*9*/].f_1 = fVar0;
	uParam0->[5 /*9*/].f_2 = 0.012f;
	uParam0->[5 /*9*/].f_3 = 0.023f;
	uParam0->[5 /*9*/].f_4 = 0;
	uParam0->[5 /*9*/].f_5 = 0;
	uParam0->[5 /*9*/].f_6 = 0;
	uParam0->[5 /*9*/].f_7 = 250;
	uParam0->[6 /*9*/] = fVar1;
	uParam0->[6 /*9*/].f_1 = fVar0;
	uParam0->[6 /*9*/].f_2 = 0.012f;
	uParam0->[6 /*9*/].f_3 = 0.023f;
	uParam0->[6 /*9*/].f_4 = 0;
	uParam0->[6 /*9*/].f_5 = 0;
	uParam0->[6 /*9*/].f_6 = 0;
	uParam0->[6 /*9*/].f_7 = 250;
	uParam0->[7 /*9*/] = fVar1;
	uParam0->[7 /*9*/].f_1 = fVar0;
	uParam0->[7 /*9*/].f_2 = 0.012f;
	uParam0->[7 /*9*/].f_3 = 0.023f;
	uParam0->[7 /*9*/].f_4 = 0;
	uParam0->[7 /*9*/].f_5 = 0;
	uParam0->[7 /*9*/].f_6 = 0;
	uParam0->[7 /*9*/].f_7 = 250;
}

float func_186() // Position - 0xC0C2
{
	float fVar0;

	fVar0 = ((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f - 0.005f) + 0.065f) - 0.0005f;
	return fVar0;
}

void func_187(int iParam0, bool bParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, int iParam19, int iParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, int iParam25, int iParam26) // Position - 0xC103
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(6, iParam0))
		func_47(6, iParam0, &uVar0, &uVar11, &uVar22, &uVar24, bParam1, 1, sParam2, bParam3, bParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, bParam12, bParam13, bParam14, bParam15, iParam16, iParam17, "", bParam18, iParam19, iParam20, bParam21, bParam22, bParam23, bParam24, iParam25, false, 0, -1, false, false, false, 0, iParam26);
}

void func_188(int iParam0, bool bParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5, float fParam6, float fParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22, int iParam23, bool bParam24, bool bParam25, int iParam26, int iParam27, bool bParam28, bool bParam29, int iParam30, bool bParam31, int iParam32, bool bParam33, int iParam34, int iParam35, bool bParam36, int iParam37, bool bParam38, int iParam39) // Position - 0xC163
{
	var uVar0;
	var uVar11;
	var uVar13;

	if (func_29(0, iParam0))
	{
		uVar13 = 4;
		func_189(iParam0, &uVar0, &uVar11, &uVar13, bParam1, iParam2, 1, sParam3, bParam4, bParam9, bParam8, bParam5, fParam6, fParam7, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, bParam18, bParam19, bParam20, bParam21, iParam22, iParam23, bParam24, bParam25, iParam26, iParam27, bParam28, bParam29, iParam30, bParam31, iParam32, bParam33, iParam34, iParam35, bParam36, iParam37, bParam38, iParam39);
	}
}

void func_189(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, int iParam26, int iParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, bool bParam33, int iParam34, bool bParam35, int iParam36, bool bParam37, int iParam38, int iParam39, bool bParam40, int iParam41, bool bParam42, int iParam43) // Position - 0xC1D5
{
	float fVar0;
	bool bVar9;
	int iVar10;
	var uVar11;
	float fVar20;
	float fVar21;
	float fVar22;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		iParam15 == 2;
		func_120(0, iParam0);
	
		if (func_132())
			if (bParam17)
				func_197(uParam1, 0);
			else
				func_166(uParam1, 0);
		else if (bParam19)
			func_129(uParam1, 0);
		else if (bParam10)
			func_130(uParam1, 3);
		else if (bParam17)
			func_196(uParam1, 0);
		else
			func_129(uParam1, 0);
	
		if (Global_1679155 == 1)
			func_119(iParam6);
	
		func_195(uParam2, uParam3, &fVar0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	
		if (bParam11 == false)
			func_161(iParam0);
	
		if (iParam16 == 0)
			func_160(iParam0);
	
		if (func_103(bParam11, &Global_1679155.f_296[iParam0 /*2*/], &Global_1679155.f_317[iParam0 /*2*/]))
			bVar9 = true;
		else
			bVar9 = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar10 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		
			if (!func_164(fParam12, fParam13))
			{
				fVar0 = *uParam2;
				fVar0.f_1 = uParam2->f_1;
			
				if (bParam17)
				{
					fVar0 = fVar0 + 0.079f;
					fVar0.f_1 = fVar0.f_1 + 0.008f;
					fVar0.f_2 = fVar0.f_2 + 0.157f;
					fVar0.f_3 = fVar0.f_3 + 0.036f;
					fVar0.f_4 = fVar0.f_4 + 255;
					fVar0.f_5 = fVar0.f_5 + 255;
					fVar0.f_6 = fVar0.f_6 + 255;
					fVar0.f_7 = 140;
				}
				else
				{
					fVar0 = fVar0 + 0.079f;
					fVar0.f_1 = fVar0.f_1 + 0.012f;
					fVar0.f_2 = fVar0.f_2 + 0.157f;
					fVar0.f_3 = fVar0.f_3 + 0.028f;
					fVar0.f_4 = fVar0.f_4 + 255;
					fVar0.f_5 = fVar0.f_5 + 255;
					fVar0.f_6 = fVar0.f_6 + 255;
					fVar0.f_7 = 140;
				}
			
				if (func_132())
				{
					fVar0 = fVar0 + -0.025f;
					fVar0.f_2 = fVar0.f_2 + 0.05f;
				}
			
				Global_1679155.f_7129 = Global_1679155.f_7129 + fVar0.f_3 + 0.01f;
			
				if (iParam16 > 0)
				{
					uVar11 = { fVar0 };
				
					if (func_260(&Global_1679155.f_905[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_102(Global_1679155.f_905[iParam0 /*2*/], 1250, false))
							Global_1679155.f_926[iParam0] = Global_1679155.f_926[iParam0] - 17;
					
						uVar11.f_7 = Global_1679155.f_926[iParam0];
						func_100(&uVar11, bParam8);
						func_92("TimerBars", "ALL_WHITE_bg", &uVar11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1679155.f_926[iParam0] = 255;
					func_78(&Global_1679155.f_905[iParam0 /*2*/], false, false);
				}
			
				if (bParam42 != false)
				{
					func_100(&fVar0, bParam42);
					func_92("TimerBars", "ALL_WHITE_bg", &fVar0, 1, 0, iVar10, 0);
				}
				else
				{
					func_92("TimerBars", "ALL_BLACK_bg", &fVar0, 1, 0, iVar10, 0);
				}
			}
		
			func_86(&fVar0, iParam21);
		
			if (func_132())
			{
				if (bParam17)
					uParam2->f_1 = uParam2->f_1 + -0.01f;
				else if (bParam10)
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (bParam17 == false)
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.012f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.008f;
			}
			else if (bParam17)
			{
				uParam2->f_1 = uParam2->f_1 + -0.01f + 0.0022f + 0.001f;
			}
			else if (bParam10)
			{
				uParam2->f_1 = uParam2->f_1 + -0.005f + 0.001f;
				uParam2->f_1 = uParam2->f_1 + -0.002f;
			}
		
			iVar10 = func_104();
		
			if (iParam39 != -1)
				if (func_194(iParam39))
					iVar10 = iParam39;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		
			if (!func_164(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_85(uParam1, bParam8);
					func_84(uParam1, false);
					func_61(uParam2, uParam1, sParam7, "", bParam22, 2);
				}
				else if (bParam10 == true)
				{
					func_85(uParam1, bParam8);
					func_84(uParam1, false);
					func_61(uParam2, uParam1, sParam7, "", bParam22, 2);
				}
				else
				{
					func_85(uParam1, bParam22);
					func_84(uParam1, false);
				
					if (bParam29)
						func_193(uParam2, uParam1, sParam7, 0, 1, bParam4, iParam5);
					else if (bParam9 == -1 && iParam43 == -1f)
						func_82(uParam2, uParam1, sParam7, 0, 1);
					else if (iParam43 != -1f)
						func_57(uParam2, uParam1, sParam7, iParam43, 1, 2);
					else
						func_59(uParam2, uParam1, sParam7, bParam9, 2);
				}
			}
		
			if (bParam23)
			{
				if (!func_164(fParam12, fParam13))
				{
					fVar20 = func_74() + func_73(iParam6);
					fVar21 = func_72();
				}
				else
				{
					fVar20 = fParam13;
					fVar21 = fParam12;
				}
			
				fVar22.f_1 = fVar20 + 0.0486f;
				fVar22 = fVar21 - 0.0505f;
				fVar22.f_2 = 0.18f;
				fVar22.f_3 = 0.01f;
				fVar22.f_4 = 255;
				fVar22.f_5 = 255;
				fVar22.f_6 = 255;
				fVar22.f_7 = 255;
				func_100(&fVar22, bParam24);
				func_92("TimerBars", "TPBar", &fVar22, 0, 0, iVar10, 0);
			}
		
			iVar10 = func_104();
		
			if (iParam39 != -1)
				if (func_194(iParam39))
					iVar10 = iParam39;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar10);
		
			if (bVar9)
				if (bParam17)
					func_192(bParam4, iParam5, uParam3, bParam8, iParam14, iVar10, iParam20, &Global_1679155.f_842[iParam0 /*2*/], &Global_1679155.f_863[iParam0 /*2*/], iParam30, iParam31, iParam27, bParam28, bParam32, bParam33, iParam34, bParam35, iParam36, bParam37, iParam38, bParam40, iParam41);
				else
					func_190(bParam4, iParam5, uParam3, bParam8, iParam14, iVar10, &Global_1679155.f_842[iParam0 /*2*/], &Global_1679155.f_863[iParam0 /*2*/], iParam18, iParam20, bParam25, iParam26, iParam30, iParam31, iParam27, bParam28, bParam32, bParam33, iParam34, bParam35, iParam36, bParam37, iParam38, bParam40, iParam41);
		
			func_48();
		}
	}
}

void func_190(bool bParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, bool bParam23, int iParam24) // Position - 0xC813
{
	var uVar0;
	float fVar19;
	var uVar20;
	char* sVar29;

	uVar0 = 2;
	uVar0[0 /*9*/].f_1 = 0f;
	uVar0[0 /*9*/].f_2 = 0.007f;
	uVar0[0 /*9*/].f_3 = 0.004f;
	uVar0[1 /*9*/] = 0f;
	uVar0[1 /*9*/].f_2 = 0.007f;
	uVar0[1 /*9*/].f_3 = 0.004f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);

	if (iParam9 != 0)
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", 0);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_155(&uParam2->[0 /*9*/], &uVar0[0 /*9*/]);
		func_155(&uParam2->[1 /*9*/], &uVar0[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_100(&uParam2->[1 /*9*/], bParam3);
	
		if (bParam10)
			func_100(&uParam2->[3 /*9*/], 3);
		else
			func_100(&uParam2->[3 /*9*/], bParam3);
	
		if (bParam11 != 0 && bParam0 < bParam11)
			func_100(&uParam2->[1 /*9*/], 6);
	
		if (bParam15 > false)
		{
			if (!func_80(uParam6))
				func_79(uParam6, false, false);
			else if (func_260(uParam6, bParam15, false))
				func_78(uParam6, false, false);
		
			func_191(&uParam2->[1 /*9*/], bParam3, iParam14, bParam15, *uParam6);
		}
	
		fVar19 = (BUILTIN::TO_FLOAT(bParam0) / BUILTIN::TO_FLOAT(iParam1)) * 100f;
	
		if (iParam12 != -1f && iParam13 != -1f)
			fVar19 = (iParam12 / iParam13) * 100f;
		else if (iParam12 != -1f && iParam13 == -1f)
			fVar19 = (iParam12 / BUILTIN::TO_FLOAT(iParam1)) * 100f;
		else if (iParam12 == -1f && iParam13 != -1f)
			fVar19 = (BUILTIN::TO_FLOAT(bParam0) / iParam13) * 100f;
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
	
		if (bParam10)
			func_100(&uParam2->[3 /*9*/], 3);
		else
			func_100(&uParam2->[3 /*9*/], bParam3);
	
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		uParam2->[3 /*9*/].f_7 = 255;
		func_157(uParam2->[0 /*9*/], fVar19, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam23);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
	
		if (bParam16)
		{
			uVar20 = { uParam2->[1 /*9*/] };
			func_157(uParam2->[0 /*9*/], iParam18, &uVar20, 1, 1, iParam4, iParam22, bParam23);
			func_100(&uVar20, bParam17);
			uVar20.f_7 = iParam24;
		
			if (bParam21 > false)
			{
				if (!func_80(uParam7))
					func_79(uParam7, false, false);
				else if (func_260(uParam7, bParam21, false))
					func_78(uParam7, false, false);
			
				func_191(&uVar20, bParam17, iParam20, bParam21, *uParam7);
			}
		
			if (bParam19)
				if (fVar19 <= iParam22)
					uVar20.f_7 = 100;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_92("TimerBars", "DamageBarFill_128", &uVar20, 0, 0, iParam5, 0);
		}
	
		if (iParam9 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", 0);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				if (iParam9 != 10)
				{
					sVar29 = "LineMarker90_128";
				
					switch (iParam9)
					{
						case 1:
							sVar29 = "LineMarker10_128";
							break;
					
						case 2:
							sVar29 = "LineMarker20_128";
							break;
					
						case 3:
							sVar29 = "LineMarker30_128";
							break;
					
						case 4:
							sVar29 = "LineMarker40_128";
							break;
					
						case 5:
							sVar29 = "LineMarker50_128";
							break;
					
						case 6:
							sVar29 = "LineMarker60_128";
							break;
					
						case 7:
							sVar29 = "LineMarker70_128";
							break;
					
						case 8:
							sVar29 = "LineMarker80_128";
							break;
					
						case 9:
							sVar29 = "LineMarker90_128";
							break;
					}
				
					uParam2->[3 /*9*/].f_7 = 255;
					func_100(&uParam2->[3 /*9*/], 2);
					func_92("timerbar_lines", sVar29, &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					uParam2->[3 /*9*/].f_7 = 255;
					func_100(&uParam2->[3 /*9*/], 2);
					func_92("timerbar_lines", "LineMarker20_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
					func_92("timerbar_lines", "LineMarker40_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
					func_92("timerbar_lines", "LineMarker60_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
					func_92("timerbar_lines", "LineMarker80_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	
		if (iParam8 > 0 && fVar19 >= (float)iParam8)
		{
			func_100(&uParam2->[1 /*9*/], 6);
			func_157(uParam2->[0 /*9*/], BUILTIN::TO_FLOAT(iParam8), &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam23);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_191(var uParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, var uParam5) // Position - 0xCC90
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	float fVar9;

	iVar8 = func_77(&uParam4, false, false);

	if (bParam3 / 2 > iVar8)
	{
		fVar9 = BUILTIN::TO_FLOAT(iVar8 / 2) / BUILTIN::TO_FLOAT(bParam3 / 2);
		HUD::GET_HUD_COLOUR(bParam1, &uVar0, &uVar1, &uVar2, &uVar3);
		HUD::GET_HUD_COLOUR(iParam2, &uVar4, &uVar5, &uVar6, &uVar7);
	}
	else
	{
		fVar9 = BUILTIN::TO_FLOAT(iVar8) / BUILTIN::TO_FLOAT(bParam3);
		HUD::GET_HUD_COLOUR(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
		HUD::GET_HUD_COLOUR(bParam1, &uVar4, &uVar5, &uVar6, &uVar7);
	}

	uParam0->f_4 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar0), BUILTIN::TO_FLOAT(uVar4), fVar9));
	uParam0->f_5 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar1), BUILTIN::TO_FLOAT(uVar5), fVar9));
	uParam0->f_6 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar2), BUILTIN::TO_FLOAT(uVar6), fVar9));
	uParam0->f_7 = BUILTIN::FLOOR(func_76(BUILTIN::TO_FLOAT(uVar3), BUILTIN::TO_FLOAT(uVar7), fVar9));
}

void func_192(bool bParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21) // Position - 0xCD70
{
	var uVar0;
	float fVar19;
	var uVar20;
	char* sVar29;

	uVar0 = 2;
	uVar0[0 /*9*/].f_1 = -0.004f;
	uVar0[0 /*9*/].f_2 = 0.007f;
	uVar0[0 /*9*/].f_3 = 0.016f;
	uVar0[1 /*9*/].f_2 = 0.007f;
	uVar0[1 /*9*/].f_3 = 0.016f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);

	if (iParam6 != 0)
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", 0);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_155(&uParam2->[0 /*9*/], &uVar0[0 /*9*/]);
		func_155(&uParam2->[1 /*9*/], &uVar0[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_100(&uParam2->[1 /*9*/], bParam3);
		func_100(&uParam2->[3 /*9*/], bParam3);
	
		if (bParam12 > false)
		{
			if (!func_80(uParam7))
				func_79(uParam7, false, false);
			else if (func_260(uParam7, bParam12, false))
				func_78(uParam7, false, false);
		
			func_191(&uParam2->[1 /*9*/], bParam3, iParam11, bParam12, *uParam7);
		}
	
		fVar19 = (BUILTIN::TO_FLOAT(bParam0) / BUILTIN::TO_FLOAT(iParam1)) * 100f;
	
		if (iParam9 != -1f && iParam10 != -1f)
			fVar19 = (iParam9 / iParam10) * 100f;
		else if (iParam9 != -1f && iParam10 == -1f)
			fVar19 = (iParam9 / BUILTIN::TO_FLOAT(iParam1)) * 100f;
		else if (iParam9 == -1f && iParam10 != -1f)
			fVar19 = (BUILTIN::TO_FLOAT(bParam0) / iParam10) * 100f;
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		func_100(&uParam2->[3 /*9*/], bParam3);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		uParam2->[3 /*9*/].f_7 = 255;
		func_157(uParam2->[0 /*9*/], fVar19, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam20);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
	
		if (bParam13)
		{
			uVar20 = { uParam2->[1 /*9*/] };
			func_157(uParam2->[0 /*9*/], iParam15, &uVar20, 1, 1, iParam4, iParam19, bParam20);
			func_100(&uVar20, bParam14);
			uVar20.f_7 = iParam21;
		
			if (bParam18 > false)
			{
				if (!func_80(uParam8))
					func_79(uParam8, false, false);
				else if (func_260(uParam8, bParam18, false))
					func_78(uParam8, false, false);
			
				func_191(&uVar20, bParam14, iParam17, bParam18, *uParam8);
			}
		
			if (bParam16)
				if (fVar19 <= iParam19)
					uVar20.f_7 = 100;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_92("TimerBars", "DamageBarFill_128", &uVar20, 0, 0, iParam5, 0);
		}
	
		if (iParam6 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", 0);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				sVar29 = "LineMarker90_128";
			
				switch (iParam6)
				{
					case 1:
						sVar29 = "LineMarker10_128";
						break;
				
					case 2:
						sVar29 = "LineMarker20_128";
						break;
				
					case 3:
						sVar29 = "LineMarker30_128";
						break;
				
					case 4:
						sVar29 = "LineMarker40_128";
						break;
				
					case 5:
						sVar29 = "LineMarker50_128";
						break;
				
					case 6:
						sVar29 = "LineMarker60_128";
						break;
				
					case 7:
						sVar29 = "LineMarker70_128";
						break;
				
					case 8:
						sVar29 = "LineMarker80_128";
						break;
				
					case 9:
						sVar29 = "LineMarker90_128";
						break;
				}
			
				uParam2->[1 /*9*/].f_7 = 255;
				func_100(&uParam2->[1 /*9*/], 2);
				func_92("timerbar_lines", sVar29, &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}
}

void func_193(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6) // Position - 0xD0E4
{
	char* sVar0;

	sVar0 = sParam2;

	if (!func_56(sVar0))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			func_55(func_51(*uParam0), func_50(uParam0->f_1), sVar0, bParam5, iParam6);
		}
	}
}

bool func_194(int iParam0) // Position - 0xD12D
{
	return iParam0 >= 0 && iParam0 <= 8;
}

void func_195(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7) // Position - 0xD143
{
	float fVar0;

	fVar0 = func_165(bParam7, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam3);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam6);
	func_163(uParam1, iParam3, fParam4, fParam5);

	if (!func_164(fParam4, fParam5))
		func_115(iParam3, -fVar0);

	func_133(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_196(var uParam0, int iParam1) // Position - 0xD1A6
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.508f - 0.03f - 0.106f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
}

void func_197(var uParam0, int iParam1) // Position - 0xD1FE
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f) + 0.086f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_198(int iParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21) // Position - 0xD256
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar113;
	var uVar124;
	var uVar126;

	if (func_29(1, iParam0))
	{
		uVar13 = 11;
		func_199(iParam0, &uVar0, &uVar11, &uVar13, &uVar126, &uVar113, &uVar124, bParam1, iParam2, 1, sParam3, iParam4, bParam5, bParam6, bParam7, iParam8, fParam9, iParam10, iParam11, true, bParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_199(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, bool bParam8, int iParam9, char* sParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15, float fParam16, int iParam17, int iParam18, bool bParam19, bool bParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29) // Position - 0xD2AC
{
	float fVar0;
	var uVar9;
	var uVar11;
	bool bVar22;
	int iVar23;
	int iVar24;
	var uVar25;

	Global_1679155 = Global_1679155 + 1;

	if (func_134())
	{
		iParam17 == 2;
		func_120(1, iParam0);
	
		if (func_132())
			func_166(uParam1, 0);
		else if (bParam13)
			func_130(uParam1, 3);
		else
			func_129(uParam1, 0);
	
		func_129(&uVar11, 0);
		uVar11.f_2 = uVar11.f_2 + 0.166f + 0.095f;
	
		if (Global_1679155 == 1)
			func_119(iParam9);
	
		func_207(uParam5, 0, 0);
		func_123(uParam5);
		func_84(uParam5, false);
		iVar23 = 0;
	
		if (bParam20 > false)
			iVar23 = 1;
	
		func_205(bParam8, uParam2, uParam3, &fVar0, uParam6, uParam5, uParam4, iParam9, iParam15, fParam16, uParam1, iVar23);
		uVar9 = *uParam2;
		uVar9.f_1 = uParam2->f_1;
		uVar9.f_1 = uVar9.f_1 + (-0.006f - 0.007f);
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
		func_204(&uVar11);
	
		if (bParam14 == false)
			func_203(iParam0);
	
		if (iParam18 == 0)
			func_202(iParam0);
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			iVar24 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar24);
		
			if (func_103(bParam14, &Global_1679155.f_254[iParam0 /*2*/], &Global_1679155.f_275[iParam0 /*2*/]))
				bVar22 = true;
			else
				bVar22 = false;
		
			if (!func_164(iParam15, fParam16))
			{
				fVar0 = *uParam2;
				fVar0.f_1 = uParam2->f_1;
			
				if (bParam8 < 9 && bParam20 == false)
				{
					fVar0 = fVar0 + 0.079f;
					fVar0.f_1 = fVar0.f_1 + 0.012f;
					fVar0.f_2 = fVar0.f_2 + 0.157f;
					fVar0.f_3 = fVar0.f_3 + 0.028f;
					fVar0.f_4 = fVar0.f_4 + 255;
					fVar0.f_5 = fVar0.f_5 + 255;
					fVar0.f_6 = fVar0.f_6 + 255;
					fVar0.f_7 = 140;
				}
				else
				{
					fVar0 = fVar0 + 0.079f;
					fVar0.f_1 = fVar0.f_1 + 0.008f;
					fVar0.f_2 = fVar0.f_2 + 0.157f;
					fVar0.f_3 = fVar0.f_3 + 0.036f;
					fVar0.f_4 = fVar0.f_4 + 255;
					fVar0.f_5 = fVar0.f_5 + 255;
					fVar0.f_6 = fVar0.f_6 + 255;
					fVar0.f_7 = 140;
				}
			
				if (func_132())
				{
					fVar0 = fVar0 + -0.025f;
					fVar0.f_2 = fVar0.f_2 + 0.05f;
				}
			
				Global_1679155.f_7129 = Global_1679155.f_7129 + fVar0.f_3;
			
				if (bParam7 == bParam8 && bParam7 > false || iParam18 > 0)
				{
					uVar25 = { fVar0 };
				
					if (func_260(&Global_1679155.f_1097[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_102(Global_1679155.f_1097[iParam0 /*2*/], 1250, false))
							Global_1679155.f_1118[iParam0] = Global_1679155.f_1118[iParam0] - 17;
					
						uVar25.f_7 = Global_1679155.f_1118[iParam0];
						func_100(&uVar25, iParam11);
						func_92("TimerBars", "ALL_WHITE_bg", &uVar25, 1, 0, iVar24, 0);
					}
				}
				else
				{
					Global_1679155.f_1118[iParam0] = 255;
					func_78(&Global_1679155.f_1097[iParam0 /*2*/], false, false);
				}
			
				func_92("TimerBars", "ALL_BLACK_bg", &fVar0, 1, 0, iVar24, 0);
			}
		
			func_86(&fVar0, iParam29);
		
			if (bParam13)
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				}
				else
				{
					uParam2->f_1 = uParam2->f_1 + -0.003f;
				
					if (func_132() == false)
						uParam2->f_1 = uParam2->f_1 + -0.002f;
				}
			}
			else if (func_132())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.003f;
			}
		
			iVar24 = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar24);
		
			if (!func_164(iParam15, fParam16))
			{
				func_84(uParam1, false);
			
				if (bParam13 == true)
					func_61(uParam2, uParam1, sParam10, "", 1, 2);
				else if (bParam12 == -1)
					func_82(uParam2, uParam1, sParam10, 0, 1);
				else
					func_59(uParam2, uParam1, sParam10, bParam12, 2);
			}
		
			if (bParam20 > false)
				func_59(&uVar9, &uVar11, "HUD_MULTSMAL" /* GXT: ~1~x */, bParam20, 2);
		
			if (bVar22)
				func_200(bParam7, bParam8, uParam3, uParam5, uParam6, iParam11, iVar24, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
		
			func_48();
		}
	}
}

void func_200(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15) // Position - 0xD708
{
	float fVar0;
	int iVar1;
	char* sVar2;

	if (bParam1 < 9)
	{
		fVar0 = -0.0094f;
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			for (iVar1 = 0; iVar1 <= bParam1 - 1; iVar1 = iVar1 + 1)
			{
				uParam2->[iVar1 /*9*/] = uParam2->[iVar1 /*9*/] + (fVar0 * (float)iVar1);
			
				if (bParam1 - iVar1 > bParam0)
				{
					func_100(&uParam2->[iVar1 /*9*/], iParam5);
					uParam2->[iVar1 /*9*/].f_7 = 51;
					func_92("TimerBars", "Circle_checkpoints_Outline", &uParam2->[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_100(&uParam2->[iVar1 /*9*/], iParam5);
					func_92("TimerBars", "Circle_checkpoints", &uParam2->[iVar1 /*9*/], 0, 0, iParam6, 0);
				
					if (func_178(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_100(&uParam2->[iVar1 /*9*/], 2);
						func_92("Cross", "Circle_checkpoints_Cross", &uParam2->[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_54(uParam4, uParam3, "TIMER_DASHES" /* GXT: ~1~/~1~ */, bParam0, bParam1, 2, 0);
	}
	else
	{
		func_201(uParam3);
	
		if (bParam7)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
			{
				uParam2->[0 /*9*/] = uParam2->[0 /*9*/] + (0.058f - 0.06f);
				uParam2->[0 /*9*/].f_1 = uParam2->[0 /*9*/].f_1 + -0.005f;
				uParam2->[0 /*9*/].f_2 = uParam2->[0 /*9*/].f_2 + (0.003f - 0.005f) + 0.002f;
				uParam2->[0 /*9*/].f_3 = uParam2->[0 /*9*/].f_3 + (0.009f - 0.01f);
				func_100(&uParam2->[0 /*9*/], iParam5);
				func_92("TimerBars", "Circle_checkpoints_Big", &uParam2->[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
	
		sVar2 = "TIMER_DASHES" /* GXT: ~1~/~1~ */;
	
		if (bParam7 == true && bParam0 > 99 && bParam1 > 99)
			sVar2 = "TIMER_DASHES" /* GXT: ~1~/~1~ */;
	
		func_54(uParam4, uParam3, sVar2, bParam0, bParam1, 2, 0);
	}
}

void func_201(var uParam0) // Position - 0xD8E7
{
	uParam0->f_9 = ((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f;
}

void func_202(int iParam0) // Position - 0xD916
{
	func_17(&Global_1679155.f_758[iParam0 /*2*/]);
	func_17(&Global_1679155.f_779[iParam0 /*2*/]);
}

void func_203(int iParam0) // Position - 0xD93C
{
	func_17(&Global_1679155.f_254[iParam0 /*2*/]);
	func_17(&Global_1679155.f_275[iParam0 /*2*/]);
	Global_1679155.f_1808.f_205[iParam0] = -1;
}

void func_204(var uParam0) // Position - 0xD96F
{
	float fVar0;

	fVar0 = (0.88f - 0.062f) + 0.026f + 0.027f + 0.037f + 0.003f;
	uParam0->f_9 = fVar0;
}

void func_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, float fParam9, var uParam10, int iParam11) // Position - 0xD9A2
{
	float fVar0;

	fVar0 = func_118(uParam5);

	if (iParam0 < 9)
		fVar0 = func_165(iParam11, false);

	*uParam1 = 0.795f;
	uParam1->f_1 = func_73(iParam7);
	uParam1->f_1 = uParam1->f_1 + func_117(uParam10);
	*uParam4 = 0.795f;
	uParam4->f_1 = uParam1->f_1 + func_116(uParam5);
	func_206(uParam2, iParam7, iParam8, fParam9);
	func_184(uParam6);

	if (!func_164(iParam8, fParam9))
		func_115(iParam7, -fVar0);

	func_133(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_206(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xDA31
{
	float fVar0;
	float fVar1;

	if (!func_164(fParam2, fParam3))
	{
		fVar0 = func_74() + func_73(iParam1);
		fVar1 = func_186();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}

	uParam0->[0 /*9*/] = fVar1;
	uParam0->[0 /*9*/].f_1 = fVar0;
	uParam0->[0 /*9*/].f_2 = 0.012f;
	uParam0->[0 /*9*/].f_3 = 0.023f;
	uParam0->[0 /*9*/].f_4 = 0;
	uParam0->[0 /*9*/].f_5 = 0;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = fVar1;
	uParam0->[1 /*9*/].f_1 = fVar0;
	uParam0->[1 /*9*/].f_2 = 0.012f;
	uParam0->[1 /*9*/].f_3 = 0.023f;
	uParam0->[1 /*9*/].f_4 = 0;
	uParam0->[1 /*9*/].f_5 = 0;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = fVar1;
	uParam0->[2 /*9*/].f_1 = fVar0;
	uParam0->[2 /*9*/].f_2 = 0.012f;
	uParam0->[2 /*9*/].f_3 = 0.023f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 250;
	uParam0->[3 /*9*/] = fVar1;
	uParam0->[3 /*9*/].f_1 = fVar0;
	uParam0->[3 /*9*/].f_2 = 0.012f;
	uParam0->[3 /*9*/].f_3 = 0.023f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 250;
	uParam0->[4 /*9*/] = fVar1;
	uParam0->[4 /*9*/].f_1 = fVar0;
	uParam0->[4 /*9*/].f_2 = 0.012f;
	uParam0->[4 /*9*/].f_3 = 0.023f;
	uParam0->[4 /*9*/].f_4 = 0;
	uParam0->[4 /*9*/].f_5 = 0;
	uParam0->[4 /*9*/].f_6 = 0;
	uParam0->[4 /*9*/].f_7 = 250;
	uParam0->[5 /*9*/] = fVar1;
	uParam0->[5 /*9*/].f_1 = fVar0;
	uParam0->[5 /*9*/].f_2 = 0.012f;
	uParam0->[5 /*9*/].f_3 = 0.023f;
	uParam0->[5 /*9*/].f_4 = 0;
	uParam0->[5 /*9*/].f_5 = 0;
	uParam0->[5 /*9*/].f_6 = 0;
	uParam0->[5 /*9*/].f_7 = 250;
	uParam0->[6 /*9*/] = fVar1;
	uParam0->[6 /*9*/].f_1 = fVar0;
	uParam0->[6 /*9*/].f_2 = 0.012f;
	uParam0->[6 /*9*/].f_3 = 0.023f;
	uParam0->[6 /*9*/].f_4 = 0;
	uParam0->[6 /*9*/].f_5 = 0;
	uParam0->[6 /*9*/].f_6 = 0;
	uParam0->[6 /*9*/].f_7 = 250;
	uParam0->[7 /*9*/] = fVar1;
	uParam0->[7 /*9*/].f_1 = fVar0;
	uParam0->[7 /*9*/].f_2 = 0.012f;
	uParam0->[7 /*9*/].f_3 = 0.023f;
	uParam0->[7 /*9*/].f_4 = 0;
	uParam0->[7 /*9*/].f_5 = 0;
	uParam0->[7 /*9*/].f_6 = 0;
	uParam0->[7 /*9*/].f_7 = 250;
	uParam0->[8 /*9*/] = fVar1;
	uParam0->[8 /*9*/].f_1 = fVar0;
	uParam0->[8 /*9*/].f_2 = 0.012f;
	uParam0->[8 /*9*/].f_3 = 0.023f;
	uParam0->[8 /*9*/].f_4 = 0;
	uParam0->[8 /*9*/].f_5 = 0;
	uParam0->[8 /*9*/].f_6 = 0;
	uParam0->[8 /*9*/].f_7 = 250;
	uParam0->[9 /*9*/] = fVar1;
	uParam0->[9 /*9*/].f_1 = fVar0;
	uParam0->[9 /*9*/].f_2 = 0.012f;
	uParam0->[9 /*9*/].f_3 = 0.023f;
	uParam0->[9 /*9*/].f_4 = 0;
	uParam0->[9 /*9*/].f_5 = 0;
	uParam0->[9 /*9*/].f_6 = 0;
	uParam0->[9 /*9*/].f_7 = 250;
}

void func_207(var uParam0, int iParam1, int iParam2) // Position - 0xDD4B
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f - 0.001f - 0.013f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_208(int iParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) // Position - 0xDDBC
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(5, iParam0))
		func_47(5, iParam0, &uVar0, &uVar11, &uVar22, &uVar24, bParam1, 1, sParam3, iParam4, bParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, false, bParam2, false, 0, 0, "", false, iParam11, 255, false, false, false, false, 1, false, 0, -1, false, false, bParam12, iParam13, 0);
}

void func_209(int iParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15) // Position - 0xDE12
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(4, iParam0))
		func_47(4, iParam0, &uVar0, &uVar11, &uVar22, &uVar24, bParam1, 1, sParam3, iParam4, bParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, bParam2, false, 0, 0, "", bParam11, iParam13, iParam14, false, false, bParam15, false, 1, false, 0, -1, false, false, false, 0, 0);
}

void func_210(int iParam0, bool bParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16) // Position - 0xDE69
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;

	if (func_29(3, iParam0))
		func_47(3, iParam0, &uVar0, &uVar11, &uVar22, &uVar24, bParam1, 1, sParam2, iParam3, bParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, false, 0, bParam9, 0, 0, "", false, iParam12, 255, false, false, false, false, 1, bParam13, iParam14, bParam15, false, false, false, 0, iParam16);
}

void func_211(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, int iParam16, bool bParam17) // Position - 0xDEC0
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar33;
	var uVar35;
	var uVar37;

	if (func_29(7, iParam0))
		func_212(iParam0, &uVar0, &uVar11, &uVar22, &uVar33, &uVar35, &uVar37, bParam1, 1, iParam3, iParam4, sParam2, iParam6, iParam5, bParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13, bParam14, iParam15, iParam16, bParam17);
}

void func_212(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, bool bParam24) // Position - 0xDF07
{
	var uVar0;
	var uVar11;
	float fVar13;
	bool bVar22;
	int iVar23;
	float fVar24;
	var uVar33;

	Global_1679155 = Global_1679155 + 1;
	iParam17 == 2;
	func_133(&fVar13, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_120(7, iParam0);

	if (bParam21)
		func_129(uParam1, 0);
	else if (bParam16)
		func_130(uParam1, 3);
	else if (func_132())
		func_131(uParam1, 0);
	else
		func_129(uParam1, 0);

	func_226(&uVar0, 0);

	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_225(uParam3, 0);
				func_207(uParam2, 0, 0);
			}
			else
			{
				func_225(uParam3, 0);
				func_207(uParam2, 0, 5);
			}
		
			func_123(uParam2);
			func_123(uParam3);
			break;
	
		case 2:
			func_207(uParam2, 0, 0);
			func_123(&uVar0);
			func_123(uParam3);
			func_224(uParam2);
			break;
	
		case 3:
			func_207(uParam2, 0, 0);
			func_123(&uVar0);
			func_123(uParam3);
			func_224(uParam2);
			break;
	
		case 4:
			func_207(uParam3, 0, 0);
		
			if (bParam19)
				func_207(uParam2, 0, 0);
			else
				func_207(uParam2, 0, 5);
		
			func_123(uParam2);
			func_123(uParam3);
			break;
	}

	func_124(uParam1);

	if (Global_1679155.f_1172 == false && Global_1679155.f_1173 == false)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = uParam1->f_9 + -0.016f;
		
			if (func_132())
				uParam1->f_9 = uParam1->f_9 + -0.008f;
		}
	}
	else if (Global_1679155.f_1172 == false && Global_1679155.f_1173 == true)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = uParam1->f_9 + 0f;
		
			if (func_132())
				uParam1->f_9 = uParam1->f_9 + -0.009f;
		}
	}

	if (Global_1679155 == 1)
		func_119(iParam8);

	func_223(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar11);
	uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	func_113(uParam2, iParam12);

	if (bParam14 == false)
		func_222(iParam0);

	if (iParam18 == 0)
		func_221(iParam0);

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		iVar23 = func_104();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar23);
	
		if (func_103(bParam14, &Global_1679155.f_170[iParam0 /*2*/], &Global_1679155.f_191[iParam0 /*2*/]))
			bVar22 = true;
		else
			bVar22 = false;
	
		fVar13 = *uParam4;
		fVar13.f_1 = uParam4->f_1;
	
		if (Global_1679155.f_1165 == 1)
			fVar13 = fVar13 + -0.113f;
	
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				fVar13 = fVar13 + 0.079f;
				fVar13.f_1 = fVar13.f_1 + 0.008f;
				fVar13.f_2 = fVar13.f_2 + 0.157f;
				fVar13.f_3 = fVar13.f_3 + 0.036f;
				fVar13.f_4 = fVar13.f_4 + 255;
				fVar13.f_5 = fVar13.f_5 + 255;
				fVar13.f_6 = fVar13.f_6 + 255;
				fVar13.f_7 = 140;
				break;
		
			case 2:
				fVar13 = fVar13 + 0.079f;
				fVar13.f_1 = fVar13.f_1 + 0.008f;
				fVar13.f_2 = fVar13.f_2 + 0.157f;
				fVar13.f_3 = fVar13.f_3 + 0.036f;
				fVar13.f_4 = fVar13.f_4 + 255;
				fVar13.f_5 = fVar13.f_5 + 255;
				fVar13.f_6 = fVar13.f_6 + 255;
				fVar13.f_7 = 140;
				break;
		
			case 3:
				fVar13 = fVar13 + 0.079f;
				fVar13.f_1 = fVar13.f_1 + 0.008f;
				fVar13.f_2 = fVar13.f_2 + 0.157f;
				fVar13.f_3 = fVar13.f_3 + 0.036f;
				fVar13.f_4 = fVar13.f_4 + 255;
				fVar13.f_5 = fVar13.f_5 + 255;
				fVar13.f_6 = fVar13.f_6 + 255;
				fVar13.f_7 = 140;
				break;
		
			case 4:
				fVar13 = fVar13 + 0.079f;
				fVar13.f_1 = fVar13.f_1 + 0.008f;
				fVar13.f_2 = fVar13.f_2 + 0.157f;
				fVar13.f_3 = fVar13.f_3 + 0.036f;
				fVar13.f_4 = fVar13.f_4 + 255;
				fVar13.f_5 = fVar13.f_5 + 255;
				fVar13.f_6 = fVar13.f_6 + 255;
				fVar13.f_7 = 140;
				break;
		}
	
		fVar24 = *uParam5 + 0.145f + 0.001f;
	
		if (func_132())
			fVar24.f_1 = (uParam5->f_1 + 0.019f) - 0.006f;
		else
			fVar24.f_1 = uParam5->f_1 + 0.019f;
	
		fVar24.f_2 = 0.016f + 0.003f;
		fVar24.f_3 = 0.032f + 0.004f;
		fVar24.f_7 = 255;
		func_100(&fVar24, 1);
		fVar24 = uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f);
	
		if (func_132())
			fVar24 = fVar24 - 0.003f;
	
		switch (iParam23)
		{
			case 5:
				fVar24.f_3 = fVar24.f_3 + -0.009f;
				fVar24.f_2 = fVar24.f_2 + -0.002f;
			
				if (func_132())
					fVar24.f_1 = fVar24.f_1 + 0.0055f;
				else
					fVar24.f_1 = fVar24.f_1 + 0.0025f;
			
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPRPSymbol", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPRPSymbol"))
					func_92("MPRPSymbol", "RP", &fVar24, 1, 0, 4, 0);
				break;
		
			case 2:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
					func_92("TimerBars", "Rockets", &fVar24, 1, 0, 4, 0);
				break;
		
			case 1:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
					func_92("TimerBars", "Spikes", &fVar24, 1, 0, 4, 0);
				break;
		
			case 4:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
					func_92("TimerBars", "Boost", &fVar24, 1, 0, 4, 0);
				break;
		
			case 6:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_100(&fVar24, 18);
					func_92("CrossTheLine", "Timer_LargeTick_32", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 7:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_100(&fVar24, 6);
					func_92("CrossTheLine", "Timer_LargeCross_32", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 8:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Beast", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 9:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_B_Time", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 10:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Random", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 11:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Slow_Time", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 12:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Swap", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 13:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Testosterone", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 14:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Thermal", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 15:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Weed", &fVar24, 1, 0, 4, 0);
				}
				break;
		
			case 16:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", 0);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&fVar24, 118);
					func_92("TimerBar_Icons", "Pickup_Hidden", &fVar24, 1, 0, 4, 0);
				}
				break;
		}
	
		if (func_132())
		{
			fVar13 = fVar13 + -0.025f;
			fVar13.f_2 = fVar13.f_2 + 0.05f;
		}
	
		Global_1679155.f_7129 = Global_1679155.f_7129 + fVar13.f_3;
	
		if (Global_1679155.f_1165 == 0)
		{
			if (iParam18 > 0)
			{
				uVar33 = { fVar13 };
			
				if (func_260(&Global_1679155.f_1033[iParam0 /*2*/], 2000, false) == false)
				{
					if (func_102(Global_1679155.f_1033[iParam0 /*2*/], 1250, false))
						Global_1679155.f_1054[iParam0] = Global_1679155.f_1054[iParam0] - 17;
				
					uVar33.f_7 = Global_1679155.f_1054[iParam0];
				
					if (iParam17 == 2)
						func_100(&uVar33, 6);
					else if (iParam17 == 3)
						func_100(&uVar33, 18);
					else
						func_100(&uVar33, iParam12);
				
					func_92("TimerBars", "ALL_WHITE_bg", &uVar33, 1, 0, iVar23, 0);
				}
			}
			else
			{
				Global_1679155.f_1054[iParam0] = 255;
				func_78(&Global_1679155.f_1033[iParam0 /*2*/], false, false);
			}
		
			func_92("TimerBars", "ALL_BLACK_bg", &fVar13, 1, 0, iVar23, 0);
		}
	
		func_86(&fVar13, iParam22);
	
		if (bParam16)
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				uParam4->f_1 = uParam4->f_1 + -0.012f;
			else
				uParam4->f_1 = uParam4->f_1 + -0.004f;
		else if (func_132())
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				uParam4->f_1 = uParam4->f_1 + -0.012f;
			else
				uParam4->f_1 = uParam4->f_1 + -0.008f;
	
		iVar23 = func_104();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iVar23);
		func_113(uParam1, iParam20);
	
		if (Global_1679155.f_1165 == 0)
		{
			if (func_56(sParam11) == false)
			{
				func_84(uParam1, false);
			
				if (bParam21 == true)
				{
					func_61(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (bParam16 == true)
				{
					*uParam1 = 4;
					func_61(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_82(uParam4, uParam1, sParam11, 0, 1);
				}
				else
				{
					func_59(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
	
		if (bVar22)
		{
			if (iParam9 == 0)
				func_220(iParam0);
		
			if (iParam9 != 0 && func_260(&Global_1679155.f_4714.f_336[iParam0 /*2*/], 4000, false) == false)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_219(uParam3);
						func_218(uParam6, uParam3, iParam9, 66, "TIMER_POS" /* GXT: +~a~ */, 0, 1);
						func_217(uParam3);
					}
					else
					{
						func_216(uParam3);
						func_218(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_217(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_216(uParam3);
					func_218(uParam6, uParam3, iParam9, 66, "TIMER_POS" /* GXT: +~a~ */, 0, 1);
					func_217(uParam3);
				}
				else
				{
					func_219(uParam3);
					func_218(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_217(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
					if (iParam10 == 1)
						func_215(uParam2);
					else if (iParam10 == 2)
						func_214(uParam2);
					else if (iParam10 == 3)
						func_213(uParam2);
			
				if (Global_1679155.f_1165 == 1)
				{
					uParam2->f_7 = 0;
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				}
			
				func_84(uParam2, false);
			
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_61(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = *uParam5 + 0.117f;
						
							if (bParam24)
								func_218(uParam5, uParam2, bParam7, 2627, "", 0, 1);
							else
								func_218(uParam5, uParam2, bParam7, 2567, "", 0, 1);
						}
						break;
				
					case 0:
						if (bParam19)
						{
							func_61(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = *uParam5 + 0.117f;
							func_218(uParam5, uParam2, bParam7, 6, "", 0, 1);
						}
						break;
				
					case 2:
						*uParam5 = *uParam5 + 0.12f;
						func_218(uParam5, uParam2, bParam7, 6, "", 0, 1);
						func_82(&uVar11, &uVar0, "TIMER_AM_O" /* GXT: AM */, 0, 1);
						break;
				
					case 3:
						*uParam5 = *uParam5 + 0.12f;
						func_218(uParam5, uParam2, bParam7, 6, "", 0, 1);
						func_82(&uVar11, &uVar0, "TIMER_PM_O" /* GXT: PM */, 0, 1);
						break;
				
					case 4:
						*uParam5 = *uParam5 + 0.12f;
					
						if (bParam19)
							func_61(uParam5, uParam2, "--:--:--", "", 1, 2);
						else
							func_218(uParam5, uParam2, bParam7, 2567, "", 0, 1);
						break;
				
					case 5:
						*uParam5 = *uParam5 + 0.117f;
						func_218(uParam5, uParam2, bParam7, 2, "", 0, 1);
						break;
				}
			}
		}
	
		func_48();
	}
}

void func_213(var uParam0) // Position - 0xEBB8
{
	func_85(uParam0, 109);
}

void func_214(var uParam0) // Position - 0xEBC8
{
	func_85(uParam0, 108);
}

void func_215(var uParam0) // Position - 0xEBD8
{
	func_85(uParam0, 107);
}

void func_216(var uParam0) // Position - 0xEBE8
{
	func_85(uParam0, 6);
}

void func_217(var uParam0) // Position - 0xEBF7
{
	func_85(uParam0, 1);
}

void func_218(var uParam0, var uParam1, bool bParam2, int iParam3, char* sParam4, int iParam5, int iParam6) // Position - 0xEC06
{
	char* sVar0;

	if (func_52())
	{
		func_84(uParam1, false);
		HUD::SET_TEXT_RIGHT_JUSTIFY(iParam6);
		HUD::SET_TEXT_CENTRE(iParam5);
	
		if (func_56(sParam4))
			sVar0 = "STRING";
		else
			sVar0 = sParam4;
	
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(bParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
	}
}

void func_219(var uParam0) // Position - 0xEC5F
{
	func_85(uParam0, 18);
}

void func_220(int iParam0) // Position - 0xEC6F
{
	func_17(&Global_1679155.f_4714.f_336[iParam0 /*2*/]);
}

void func_221(int iParam0) // Position - 0xEC89
{
	func_17(&Global_1679155.f_674[iParam0 /*2*/]);
	func_17(&Global_1679155.f_695[iParam0 /*2*/]);
}

void func_222(int iParam0) // Position - 0xECAF
{
	func_17(&Global_1679155.f_170[iParam0 /*2*/]);
	func_17(&Global_1679155.f_191[iParam0 /*2*/]);
}

void func_223(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7) // Position - 0xECD3
{
	float fVar0;

	fVar0 = func_118(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_73(iParam4);
	uParam1->f_1 = uParam1->f_1 + func_117(uParam5);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_116(uParam0);
	*uParam7 = 0.795f;
	uParam7->f_1 = uParam1->f_1 + func_116(uParam6);
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_115(iParam4, -fVar0);
}

void func_224(var uParam0) // Position - 0xED49
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f) + 0.014f) - 0.024f) + 0.005f;
}

void func_225(var uParam0, int iParam1) // Position - 0xED8A
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.315f + 0.183f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_226(var uParam0, int iParam1) // Position - 0xEDDC
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f) - 0.01f - 0.11f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

bool func_227(int iParam0) // Position - 0xEE3A
{
	int iVar0;
	int iVar1;

	if (func_237(iParam0))
	{
		iVar1 = 2;
	
		for (iVar0 = 0; iVar0 < iVar1; iVar0 = iVar0 + 1)
		{
			if (Global_1677517[iVar0] == iParam0)
				return true;
		}
	}

	return false;
}

void func_228(int iParam0, int iParam1) // Position - 0xEE73
{
	switch (iParam0)
	{
		case 7:
			func_211(iParam1, Global_1679155.f_4714[iParam1], &Global_1679155.f_4714.f_11[iParam1 /*16*/], Global_1679155.f_4714.f_172[iParam1], Global_1679155.f_4714.f_194[iParam1], Global_1679155.f_4714.f_216[iParam1], Global_1679155.f_4714.f_205[iParam1], Global_1679155.f_4714.f_183[iParam1], Global_1679155.f_4714.f_227[iParam1], Global_1679155.f_4714.f_260[iParam1], Global_1679155.f_4714.f_314[iParam1], Global_1679155.f_4714.f_325[iParam1], Global_1679155.f_4714.f_357[iParam1], Global_1679155.f_4714.f_238[iParam1], Global_1679155.f_4714.f_271[iParam1], Global_1679155.f_4714.f_368[iParam1], Global_1679155.f_4714.f_379[iParam1], Global_1679155.f_4714.f_390[iParam1]);
			break;
	
		case 3:
			func_210(iParam1, Global_1679155.f_2872[iParam1], &Global_1679155.f_2872.f_11[iParam1 /*16*/], Global_1679155.f_2872.f_183[iParam1], Global_1679155.f_2872.f_172[iParam1], Global_1679155.f_2872.f_194[iParam1], Global_1679155.f_2872.f_216[iParam1], &Global_1679155.f_2872.f_259[iParam1 /*16*/], Global_1679155.f_2872.f_420[iParam1], Global_1679155.f_2872.f_453[iParam1], Global_1679155.f_2872.f_431[iParam1], Global_1679155.f_2872.f_442[iParam1], Global_1679155.f_2872.f_464[iParam1], Global_1679155.f_2872.f_475[iParam1], Global_1679155.f_2872.f_486[iParam1], Global_1679155.f_2872.f_497[iParam1], Global_1679155.f_2872.f_508[iParam1]);
			break;
	
		case 4:
			func_209(iParam1, Global_1679155.f_3391[iParam1], Global_1679155.f_3391.f_172[iParam1], &Global_1679155.f_3391.f_11[iParam1 /*16*/], Global_1679155.f_3391.f_194[iParam1], Global_1679155.f_3391.f_183[iParam1], Global_1679155.f_3391.f_205[iParam1], Global_1679155.f_3391.f_227[iParam1], Global_1679155.f_3391.f_270[iParam1], Global_1679155.f_3391.f_281[iParam1], Global_1679155.f_3391.f_292[iParam1], Global_1679155.f_3391.f_303[iParam1], Global_1679155.f_3391.f_314[iParam1], Global_1679155.f_3391.f_325[iParam1], Global_1679155.f_3391.f_336[iParam1], Global_1679155.f_3391.f_347[iParam1]);
			break;
	
		case 5:
			func_208(iParam1, Global_1679155.f_3749[iParam1], Global_1679155.f_3749.f_172[iParam1], &Global_1679155.f_3749.f_11[iParam1 /*16*/], Global_1679155.f_3749.f_194[iParam1], Global_1679155.f_3749.f_183[iParam1], Global_1679155.f_3749.f_205[iParam1], Global_1679155.f_3749.f_227[iParam1], Global_1679155.f_3749.f_270[iParam1], Global_1679155.f_3749.f_281[iParam1], Global_1679155.f_3749.f_292[iParam1], Global_1679155.f_3749.f_303[iParam1], Global_1679155.f_3749.f_314[iParam1], Global_1679155.f_3749.f_325[iParam1]);
			break;
	
		case 1:
			func_198(iParam1, Global_1679155.f_1808[iParam1], Global_1679155.f_1808.f_11[iParam1], &Global_1679155.f_1808.f_22[iParam1 /*16*/], Global_1679155.f_1808.f_194[iParam1], Global_1679155.f_1808.f_205[iParam1], Global_1679155.f_1808.f_258[iParam1], Global_1679155.f_1808.f_183[iParam1], Global_1679155.f_1808.f_227[iParam1 /*3*/], Global_1679155.f_1808.f_227[iParam1 /*3*/].f_1, Global_1679155.f_1808.f_312[iParam1], Global_1679155.f_1808.f_323[iParam1], Global_1679155.f_1808.f_269[iParam1], Global_2739947[iParam1], Global_2739958[iParam1], Global_2739969[iParam1], Global_2739980[iParam1], Global_2739991[iParam1], Global_2740002[iParam1], Global_2740013[iParam1], Global_2740024[iParam1], Global_1679155.f_1808.f_334[iParam1]);
			break;
	
		case 0:
			func_188(iParam1, Global_1679155.f_1177[iParam1], Global_1679155.f_1177.f_11[iParam1], &Global_1679155.f_1177.f_22[iParam1 /*16*/], Global_1679155.f_1177.f_194[iParam1], Global_1679155.f_1177.f_183[iParam1], Global_1679155.f_1177.f_238[iParam1 /*3*/], Global_1679155.f_1177.f_238[iParam1 /*3*/].f_1, Global_1679155.f_1177.f_269[iParam1], Global_1679155.f_1177.f_205[iParam1], Global_1679155.f_1177.f_280[iParam1], Global_1679155.f_1177.f_323[iParam1], Global_1679155.f_1177.f_334[iParam1], Global_1679155.f_1177.f_345[iParam1], Global_1679155.f_1177.f_356[iParam1], Global_1679155.f_1177.f_367[iParam1], Global_1679155.f_1177.f_378[iParam1], Global_1679155.f_1177.f_389[iParam1], Global_1679155.f_1177.f_400[iParam1], Global_1679155.f_1177.f_411[iParam1], Global_1679155.f_1177.f_422[iParam1], Global_1679155.f_1177.f_433[iParam1], Global_1679155.f_1177.f_444[iParam1], Global_1679155.f_1177.f_455[iParam1], Global_1679155.f_1177.f_466[iParam1], Global_1679155.f_1177.f_477[iParam1], Global_1679155.f_1177.f_488[iParam1], Global_1679155.f_1177.f_499[iParam1], Global_1679155.f_1177.f_510[iParam1], Global_1679155.f_1177.f_521[iParam1], Global_1679155.f_1177.f_532[iParam1], Global_1679155.f_1177.f_543[iParam1], Global_1679155.f_1177.f_554[iParam1], Global_1679155.f_1177.f_565[iParam1], Global_1679155.f_1177.f_576[iParam1], Global_1679155.f_1177.f_587[iParam1], Global_1679155.f_1177.f_598[iParam1], Global_1679155.f_1177.f_609[iParam1], false, -1082130432);
			break;
	
		case 6:
			func_187(iParam1, Global_1679155.f_4085[iParam1], &Global_1679155.f_4085.f_11[iParam1 /*16*/], Global_1679155.f_4085.f_183[iParam1], Global_1679155.f_4085.f_172[iParam1], Global_1679155.f_4085.f_194[iParam1], Global_1679155.f_4085.f_271[iParam1], &Global_1679155.f_4085.f_282[iParam1 /*16*/], Global_1679155.f_4085.f_443[iParam1], Global_1679155.f_4085.f_454[iParam1], Global_1679155.f_4085.f_497[iParam1], Global_1679155.f_4085.f_508[iParam1], Global_1679155.f_4085.f_205[iParam1], Global_1679155.f_4085.f_216[iParam1], Global_1679155.f_4085.f_227[iParam1], Global_1679155.f_4085.f_238[iParam1], Global_1679155.f_4085.f_249[iParam1], Global_1679155.f_4085.f_519[iParam1], Global_1679155.f_4085.f_530[iParam1], Global_1679155.f_4085.f_541[iParam1], Global_1679155.f_4085.f_552[iParam1], Global_1679155.f_4085.f_563[iParam1], Global_1679155.f_4085.f_574[iParam1], Global_1679155.f_4085.f_585[iParam1], Global_1679155.f_4085.f_596[iParam1], Global_1679155.f_4085.f_607[iParam1], Global_1679155.f_4085.f_618[iParam1]);
			break;
	
		case 2:
			func_175(iParam1, Global_1679155.f_2153[iParam1], &Global_1679155.f_2153.f_99[iParam1 /*16*/], Global_1679155.f_2153.f_282[iParam1], Global_1679155.f_2153.f_293[iParam1], Global_1679155.f_2153.f_260[iParam1], Global_1679155.f_2153.f_11[iParam1], Global_1679155.f_2153.f_22[iParam1], Global_1679155.f_2153.f_33[iParam1], Global_1679155.f_2153.f_44[iParam1], Global_1679155.f_2153.f_55[iParam1], Global_1679155.f_2153.f_66[iParam1], Global_1679155.f_2153.f_77[iParam1], Global_1679155.f_2153.f_88[iParam1], Global_1679155.f_2153.f_271[iParam1], Global_1679155.f_2153.f_304[iParam1], Global_1679155.f_2153.f_357[iParam1], Global_1679155.f_2153.f_326[iParam1 /*3*/], Global_1679155.f_2153.f_326[iParam1 /*3*/].f_1, Global_1679155.f_2153.f_368[iParam1], Global_1679155.f_2153.f_379[iParam1], Global_1679155.f_2153.f_390[iParam1], Global_1679155.f_2153.f_401[iParam1], Global_1679155.f_2153.f_412[iParam1], Global_1679155.f_2153.f_423[iParam1], Global_1679155.f_2153.f_434[iParam1], Global_1679155.f_2153.f_445[iParam1], Global_1679155.f_2153.f_456[iParam1], Global_1679155.f_2153.f_467[iParam1], Global_1679155.f_2153.f_478[iParam1], Global_1679155.f_2153.f_489[iParam1], Global_1679155.f_2153.f_500[iParam1], Global_1679155.f_2153.f_511[iParam1], Global_1679155.f_2153.f_522[iParam1], Global_1679155.f_2153.f_533[iParam1], Global_1679155.f_2153.f_587[iParam1], Global_1679155.f_2153.f_598[iParam1], Global_1679155.f_2153.f_544[iParam1], Global_2740035[iParam1], Global_2740046[iParam1], Global_2740057[iParam1], Global_2740068[iParam1], Global_2740079[iParam1], Global_2740090[iParam1], Global_2740101[iParam1], Global_2740112[iParam1], Global_1679155.f_2153.f_609[iParam1], Global_1679155.f_2153.f_620[iParam1], Global_1679155.f_2153.f_631[iParam1], Global_1679155.f_2153.f_642[iParam1], Global_1679155.f_2153.f_653[iParam1], Global_1679155.f_2153.f_664[iParam1], Global_1679155.f_2153.f_675[iParam1], Global_1679155.f_2153.f_686[iParam1], Global_1679155.f_2153.f_697[iParam1], Global_1679155.f_2153.f_708[iParam1]);
			break;
	
		case 8:
			func_172(iParam1, &Global_1679155.f_5115.f_11[iParam1 /*16*/], Global_1679155.f_5115[iParam1], Global_1679155.f_5115.f_172[iParam1], Global_1679155.f_5115.f_183[iParam1], Global_1679155.f_5115.f_194[iParam1], Global_1679155.f_5115.f_205[iParam1]);
			break;
	
		case 9:
			func_167(iParam1, Global_1679155.f_5342[iParam1], Global_1679155.f_5342.f_11[iParam1]);
			break;
	
		case 10:
			func_152(iParam1, Global_1679155.f_5375.f_6[iParam1], Global_1679155.f_5375.f_17[iParam1], &Global_1679155.f_5375.f_28[iParam1 /*16*/], Global_1679155.f_5375.f_200[iParam1], Global_1679155.f_5375.f_189[iParam1], Global_1679155.f_5375.f_233[iParam1], Global_1679155.f_5375.f_211[iParam1], Global_1679155.f_5375.f_244[iParam1], Global_1679155.f_5375.f_287[iParam1], Global_1679155.f_5375.f_298[iParam1], &Global_1679155.f_5375.f_309[iParam1 /*16*/], &(Global_1679155.f_5375), Global_1679155.f_5375.f_470[iParam1], Global_1679155.f_5375.f_481[iParam1], Global_1679155.f_5375.f_492[iParam1]);
			break;
	
		case 11:
			func_149(iParam1, Global_1679155.f_5878[iParam1], Global_1679155.f_5878.f_11[iParam1], Global_1679155.f_5878.f_22[iParam1], Global_1679155.f_5878.f_33[iParam1], Global_1679155.f_5878.f_44[iParam1], Global_1679155.f_5878.f_55[iParam1], Global_1679155.f_5878.f_66[iParam1], Global_1679155.f_5878.f_77[iParam1], Global_1679155.f_5878.f_88[iParam1], Global_1679155.f_5878.f_110[iParam1], Global_1679155.f_5878.f_121[iParam1], Global_1679155.f_5878.f_132[iParam1], Global_1679155.f_5878.f_143[iParam1], Global_1679155.f_5878.f_154[iParam1]);
			break;
	
		case 12:
			func_140(iParam1, Global_1679155.f_6043[iParam1], Global_1679155.f_6043.f_22[iParam1], &Global_1679155.f_6043.f_33[iParam1 /*6*/], Global_1679155.f_6043.f_94[iParam1], Global_1679155.f_6043.f_11[iParam1], Global_1679155.f_6043.f_105[iParam1], Global_1679155.f_6043.f_116[iParam1], Global_1679155.f_6043.f_127[iParam1], Global_1679155.f_6043.f_138[iParam1], Global_1679155.f_6043.f_149[iParam1], Global_1679155.f_6043.f_160[iParam1], Global_1679155.f_6043.f_171[iParam1], Global_1679155.f_6043.f_182[iParam1], Global_1679155.f_6043.f_193[iParam1], Global_1679155.f_6043.f_204[iParam1], Global_1679155.f_6043.f_215[iParam1], Global_1679155.f_6043.f_226[iParam1], Global_1679155.f_6043.f_248[iParam1], Global_1679155.f_6043.f_259[iParam1], Global_1679155.f_6043.f_270[iParam1], Global_1679155.f_6043.f_281[iParam1], Global_1679155.f_6043.f_292[iParam1], Global_1679155.f_6043.f_303[iParam1], Global_1679155.f_6043.f_314[iParam1], Global_1679155.f_6043.f_325[iParam1], Global_1679155.f_6043.f_336[iParam1], Global_1679155.f_6043.f_347[iParam1], Global_1679155.f_6043.f_358[iParam1], Global_1679155.f_6043.f_369[iParam1], Global_1679155.f_6043.f_380[iParam1], Global_1679155.f_6043.f_391[iParam1]);
			break;
	
		case 13:
			func_135(iParam1, Global_1679155.f_6445[iParam1], Global_1679155.f_6445.f_11[iParam1], Global_1679155.f_6445.f_22[iParam1], Global_1679155.f_6445.f_33[iParam1], Global_1679155.f_6445.f_44[iParam1], Global_1679155.f_6445.f_55[iParam1], Global_1679155.f_6445.f_66[iParam1], Global_1679155.f_6445.f_77[iParam1], Global_1679155.f_6445.f_88[iParam1], Global_1679155.f_6445.f_99[iParam1], Global_1679155.f_6445.f_110[iParam1], Global_1679155.f_6445.f_121[iParam1], Global_1679155.f_6445.f_132[iParam1], Global_1679155.f_6445.f_154[iParam1], Global_1679155.f_6445.f_165[iParam1], Global_1679155.f_6445.f_176[iParam1], Global_1679155.f_6445.f_187[iParam1], Global_1679155.f_6445.f_198[iParam1], Global_1679155.f_6445.f_209[iParam1], Global_1679155.f_6445.f_220[iParam1]);
			break;
	
		case 14:
			func_46(iParam1, &Global_1679155.f_6676[iParam1 /*16*/], &Global_1679155.f_6676.f_161[iParam1 /*16*/], Global_1679155.f_6676.f_322[iParam1], Global_1679155.f_6676.f_333[iParam1], Global_1679155.f_6676.f_355[iParam1], Global_1679155.f_6676.f_366[iParam1], Global_1679155.f_6676.f_377[iParam1]);
			break;
	}
}

void func_229(bool bParam0) // Position - 0xFE87
{
	if (func_230())
		if (bParam0)
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		else
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

bool func_230() // Position - 0xFEA8
{
	if (func_231(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

bool func_231(int iParam0) // Position - 0xFEC0
{
	switch (func_232(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return false;
	
		default:
		
	}

	return true;
}

int func_232(int iParam0) // Position - 0xFF20
{
	return Global_1845299[iParam0 /*883*/].f_185;
}

bool func_233(int iParam0) // Position - 0xFF33
{
	if (Global_2698880 == 1)
		return false;

	if (func_236() == 0)
		if (HUD::IS_PAUSE_MENU_ACTIVE())
			return false;

	if (iParam0 != 1 && Global_1679155.f_1166 == 0 && Global_1679155.f_1167 == 0)
		if (func_234())
			return false;

	return true;
}

bool func_234() // Position - 0xFF89
{
	var uVar0;

	if (Global_21627.f_1 > 3)
		return true;

	if (func_235())
	{
		uVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&uVar0);
	
		if (Global_21572 == 0)
			if (uVar0.f_1 > -119f)
				return true;
			else
				return false;
		else if (uVar0.f_1 > -101f)
			return true;
		else
			return false;
	}

	return false;
}

bool func_235() // Position - 0xFFF7
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	return false;
}

int func_236() // Position - 0x10015
{
	return Global_33792;
}

bool func_237(int iParam0) // Position - 0x10020
{
	return iParam0 > -1 && iParam0 < 15;
}

int func_238(int iParam0) // Position - 0x10036
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 7:
			return 0;
	
		case 3:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 1:
			return 4;
	
		case 0:
			return 5;
	
		case 6:
			return 6;
	
		case 2:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 11;
	
		case 12:
			return 12;
	
		case 13:
			return 13;
	
		case 14:
			return 14;
	
		default:
		
	}

	return -1;
}

int func_239(int iParam0) // Position - 0x100ED
{
	if (func_240(iParam0))
		return Global_1677517[iParam0];

	return -1;
}

bool func_240(int iParam0) // Position - 0x1010A
{
	return iParam0 >= 0 && iParam0 < 2;
}

bool func_241(int iParam0) // Position - 0x1011F
{
	if (func_240(iParam0))
		return Global_1677517[iParam0] != -1;

	return false;
}

bool func_242() // Position - 0x1013E
{
	int iVar0;

	for (iVar0 = 0; iVar0 <= 14; iVar0 = iVar0 + 1)
	{
		if (Global_1679155.f_7080[iVar0] != Global_1679155.f_7064[iVar0])
			return true;
	}

	if (Global_1679155.f_7128)
	{
		Global_1679155.f_7128 = 0;
		return true;
	}

	return false;
}

void func_243() // Position - 0x1018D
{
	Global_1679155.f_7128 = 1;
}

bool func_244(int iParam0) // Position - 0x1019D
{
	if (func_246(iParam0, 0))
		return true;

	if (func_245())
		if (iParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

bool func_245() // Position - 0x101DC
{
	return IS_BIT_SET(Global_2621446, 3);
}

bool func_246(int iParam0, int iParam1) // Position - 0x101EA
{
	bool bVar0;

	if (!func_249(iParam0))
		return false;

	if (iParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_247(-1, false) == 8;
	else
		bVar0 = Global_1845299[iParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;

	return bVar0;
}

bool func_247(bool bParam0, bool bParam1) // Position - 0x10243
{
	bool bVar0;
	bool bVar1;

	bVar1 = bParam0;

	if (bVar1 == -1)
		bVar1 = func_248();

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

bool func_248() // Position - 0x10284
{
	return Global_1574927;
}

bool func_249(int iParam0) // Position - 0x10290
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_250() // Position - 0x102B2
{
	if (Global_1574529)
		return false;

	if (Global_77359)
		return false;

	if (HUD::IS_MP_TEXT_CHAT_TYPING())
		return false;

	if (Global_1944385.f_4)
		return false;

	if (Global_1679155.f_1169 || Global_1679155.f_1170)
	{
		if (Global_1679155.f_1171 == false)
			if (func_254(PLAYER::PLAYER_PED_ID()))
				func_253();
	
		return true;
	}

	if (func_53())
	{
		if (Global_1679155.f_1171 == false)
			if (func_254(PLAYER::PLAYER_PED_ID()))
				func_253();
	
		return true;
	}

	if (Global_2699580)
		return false;

	if (Global_1576360)
		return false;

	if (func_252())
	{
		if (Global_1679155.f_1171 == false)
			if (func_254(PLAYER::PLAYER_PED_ID()))
				func_253();
	
		return true;
	}

	if (Global_24407.f_4 && func_231(PLAYER::PLAYER_ID()) == false)
		return false;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (Global_1679155.f_1171 == false)
		if (func_254(PLAYER::PLAYER_PED_ID()))
			func_253();

	if (func_251(8, -1))
		return false;

	if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON() == 0)
		return false;

	if (func_236() == 0)
		if (Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_236 != 99)
			if (NETWORK::NETWORK_IS_IN_SPECTATOR_MODE() == 0 && Global_1836746 == false && !IS_BIT_SET(Global_2673274.f_1762.f_756, 11) && Global_1845299[PLAYER::PLAYER_ID() /*883*/] != false)
				return false;

	if (IS_BIT_SET(Global_2621446, 11))
		return false;

	return true;
}

bool func_251(int iParam0, int iParam1) // Position - 0x1043D
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

bool func_252() // Position - 0x10475
{
	if (Global_1926078)
		return true;

	return false;
}

void func_253() // Position - 0x10489
{
	Global_1679155.f_1171 = 1;
}

bool func_254(var uParam0) // Position - 0x10499
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
		
			if (iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER") || iVar0 == joaat("WEAPON_MARKSMANRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
				return true;
		}
	}

	return false;
}

void func_255() // Position - 0x104F6
{
	int iVar0;

	if (func_258(2))
	{
		for (iVar0 = 0; iVar0 <= 9; iVar0 = iVar0 + 1)
		{
			if (func_30(2, iVar0) && func_29(2, iVar0))
			{
				func_17(&Global_1679155.f_2153.f_555[iVar0 /*2*/]);
			}
			else if (func_260(&Global_1679155.f_2153.f_555[iVar0 /*2*/], Global_1679155.f_2153.f_576[iVar0], false) == false)
			{
				Global_1679155.f_1 = 1;
				func_257(2, iVar0);
			}
			else
			{
				func_256(2, iVar0);
			}
		}
	}
}

void func_256(int iParam0, int iParam1) // Position - 0x10581
{
	MISC::CLEAR_BIT(&Global_1679155.f_7112[iParam0], iParam1);
}

void func_257(int iParam0, int iParam1) // Position - 0x1059A
{
	MISC::SET_BIT(&Global_1679155.f_7064[iParam0], iParam1);
}

bool func_258(int iParam0) // Position - 0x105B3
{
	if (Global_1679155.f_7112[iParam0] > 0)
		return true;

	return false;
}

void func_259(int iParam0) // Position - 0x105CF
{
	Global_1679155.f_1163 = iParam0;
}

bool func_260(var uParam0, bool bParam1, bool bParam2) // Position - 0x105E0
{
	if (bParam1 == -1)
		return true;

	func_79(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= bParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= bParam1)
		return true;

	return false;
}

