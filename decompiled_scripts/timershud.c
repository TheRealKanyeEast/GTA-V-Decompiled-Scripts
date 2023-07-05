#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
#endregion

void main() // Position - 0x0
{
	var unk;
	BOOL flag;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	fLocal_65 = 0.952f;
	fLocal_66 = 0.949f;

	if (unk_0x96CFB880BAC634CE(32))
		unk_0xBBC29EBE6E1A48FA();

	unk_0x51CC1333A10C4E09();

	while (true)
	{
		if (func_252(&unk, 5, false))
			func_43();
	
		if (Global_1655612.f_1 == 0)
			flag = true;
	
		func_42();
		func_41();
		func_11();
	
		if (flag)
		{
			unk_0x633E3833FB96BCCB("timerbar_lines");
			func_1();
			unk_0xBBC29EBE6E1A48FA();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xEA
{
	int i;
	var unk;

	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1655612 = 0;
	Global_1655612.f_1 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		Global_1655612.f_2[i /*2*/] = { unk };
		Global_1655612.f_23[i /*2*/] = { unk };
		Global_1655612.f_44[i /*2*/] = { unk };
		Global_1655612.f_65[i /*2*/] = { unk };
		Global_1655612.f_86[i /*2*/] = { unk };
		Global_1655612.f_107[i /*2*/] = { unk };
		Global_1655612.f_128[i /*2*/] = { unk };
		Global_1655612.f_149[i /*2*/] = { unk };
		Global_1655612.f_170[i /*2*/] = { unk };
		Global_1655612.f_191[i /*2*/] = { unk };
		Global_1655612.f_212[i /*2*/] = { unk };
		Global_1655612.f_233[i /*2*/] = { unk };
		Global_1655612.f_254[i /*2*/] = { unk };
		Global_1655612.f_275[i /*2*/] = { unk };
		Global_1655612.f_296[i /*2*/] = { unk };
		Global_1655612.f_317[i /*2*/] = { unk };
		Global_1655612.f_338[i /*2*/] = { unk };
		Global_1655612.f_359[i /*2*/] = { unk };
		Global_1655612.f_506[i /*2*/] = { unk };
		Global_1655612.f_527[i /*2*/] = { unk };
		Global_1655612.f_548[i /*2*/] = { unk };
		Global_1655612.f_569[i /*2*/] = { unk };
		Global_1655612.f_590[i /*2*/] = { unk };
		Global_1655612.f_611[i /*2*/] = { unk };
		Global_1655612.f_632[i /*2*/] = { unk };
		Global_1655612.f_653[i /*2*/] = { unk };
		Global_1655612.f_674[i /*2*/] = { unk };
		Global_1655612.f_695[i /*2*/] = { unk };
		Global_1655612.f_716[i /*2*/] = { unk };
		Global_1655612.f_737[i /*2*/] = { unk };
		Global_1655612.f_758[i /*2*/] = { unk };
		Global_1655612.f_779[i /*2*/] = { unk };
		Global_1655612.f_800[i /*2*/] = { unk };
		Global_1655612.f_821[i /*2*/] = { unk };
		Global_1655612.f_905[i /*2*/] = { unk };
		Global_1655612.f_1129[i /*2*/] = { unk };
		Global_1655612.f_937[i /*2*/] = { unk };
		Global_1655612.f_969[i /*2*/] = { unk };
		Global_1655612.f_1001[i /*2*/] = { unk };
		Global_1655612.f_1033[i /*2*/] = { unk };
		Global_1655612.f_1065[i /*2*/] = { unk };
		Global_1655612.f_1097[i /*2*/] = { unk };
		Global_1655612.f_926[i] = 0;
		Global_1655612.f_958[i] = 0;
		Global_1655612.f_990[i] = 0;
		Global_1655612.f_1022[i] = 0;
		Global_1655612.f_1054[i] = 0;
		Global_1655612.f_1086[i] = 0;
		Global_1655612.f_1118[i] = 0;
		Global_1655612.f_1150[i] = 0;
	}

	for (i = 0; i < 15; i = i + 1)
	{
		Global_1655612.f_7009[i] = 0;
		Global_1655612.f_7025[i] = 0;
		Global_1655612.f_7041[i] = 0;
		Global_1655612.f_7057[i] = 0;
	}

	Global_1655612.f_7073 = 0;
	Global_1655612.f_7074 = 0f;
	return;
}

void func_2() // Position - 0x4A5
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_172 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_5060), &unk, 227);
	else
		Global_1655612.f_5060 = { unk };

	return;
}

void func_3() // Position - 0x507
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_172 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;
	unk.f_227 = 10;
	unk.f_238 = 10;
	unk.f_249 = 10;
	unk.f_260 = 10;
	unk.f_271 = 10;
	unk.f_282 = 10;
	unk.f_303 = 10;
	unk.f_314 = 10;
	unk.f_325 = 10;
	unk.f_336 = 10;
	unk.f_357 = 10;
	unk.f_368 = 10;
	unk.f_379 = 10;
	unk.f_390 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_4659), &unk, 401);
	else
		Global_1655612.f_4659 = { unk };

	return;
}

void func_4() // Position - 0x5D9
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_172 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;
	unk.f_227 = 10;
	unk.f_238 = 10;
	unk.f_249 = 10;
	unk.f_260 = 10;
	unk.f_271 = 10;
	unk.f_282 = 10;
	unk.f_443 = 10;
	unk.f_454 = 10;
	unk.f_465 = 10;
	unk.f_486 = 10;
	unk.f_497 = 10;
	unk.f_508 = 10;
	unk.f_519 = 10;
	unk.f_530 = 10;
	unk.f_541 = 10;
	unk.f_552 = 10;
	unk.f_563 = 10;
	unk.f_574 = 10;
	unk.f_585 = 10;
	unk.f_596 = 10;
	unk.f_607 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_4041), &unk, 618);
	else
		Global_1655612.f_4041 = { unk };

	return;
}

void func_5() // Position - 0x6E3
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_172 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;
	unk.f_227 = 10;
	unk.f_238 = 10;
	unk.f_259 = 10;
	unk.f_270 = 10;
	unk.f_281 = 10;
	unk.f_292 = 10;
	unk.f_303 = 10;
	unk.f_314 = 10;
	unk.f_325 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_3705), &unk, 336);
	else
		Global_1655612.f_3705 = { unk };

	return;
}

void func_6() // Position - 0x78E
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_172 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;
	unk.f_227 = 10;
	unk.f_238 = 10;
	unk.f_259 = 10;
	unk.f_270 = 10;
	unk.f_281 = 10;
	unk.f_292 = 10;
	unk.f_303 = 10;
	unk.f_314 = 10;
	unk.f_325 = 10;
	unk.f_336 = 10;
	unk.f_347 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_3347), &unk, 358);
	else
		Global_1655612.f_3347 = { unk };

	return;
}

void func_7() // Position - 0x849
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_172 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;
	unk.f_227 = 10;
	unk.f_248 = 10;
	unk.f_259 = 10;
	unk.f_420 = 10;
	unk.f_431 = 10;
	unk.f_442 = 10;
	unk.f_453 = 10;
	unk.f_464 = 10;
	unk.f_475 = 10;
	unk.f_486 = 10;
	unk.f_497 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_2839), &unk, 508);
	else
		Global_1655612.f_2839 = { unk };

	return;
}

void func_8() // Position - 0x904
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_22 = 10;
	unk.f_33 = 10;
	unk.f_44 = 10;
	unk.f_55 = 10;
	unk.f_66 = 10;
	unk.f_77 = 10;
	unk.f_88 = 10;
	unk.f_99 = 10;
	unk.f_260 = 10;
	unk.f_271 = 10;
	unk.f_282 = 10;
	unk.f_293 = 10;
	unk.f_304 = 10;
	unk.f_315 = 10;
	unk.f_326 = 10;
	unk.f_357 = 10;
	unk.f_368 = 10;
	unk.f_379 = 10;
	unk.f_390 = 10;
	unk.f_401 = 10;
	unk.f_412 = 10;
	unk.f_423 = 10;
	unk.f_434 = 10;
	unk.f_445 = 10;
	unk.f_456 = 10;
	unk.f_467 = 10;
	unk.f_478 = 10;
	unk.f_489 = 10;
	unk.f_500 = 10;
	unk.f_511 = 10;
	unk.f_522 = 10;
	unk.f_533 = 10;
	unk.f_544 = 10;
	unk.f_555 = 10;
	unk.f_576 = 10;
	unk.f_587 = 10;
	unk.f_598 = 10;
	unk.f_609 = 10;
	unk.f_620 = 10;
	unk.f_631 = 10;
	unk.f_642 = 10;
	unk.f_653 = 10;
	unk.f_664 = 10;
	unk.f_675 = 10;
	unk.f_686 = 10;
	unk.f_697 = 10;
	unk.f_708 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_2120), &unk, 719);
	else
		Global_1655612.f_2120 = { unk };

	return;
}

void func_9() // Position - 0xAB6
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_22 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;
	unk.f_227 = 10;
	unk.f_258 = 10;
	unk.f_269 = 10;
	unk.f_280 = 10;
	unk.f_301 = 10;
	unk.f_312 = 10;
	unk.f_323 = 10;
	unk.f_334 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_1775), &unk, 345);
	else
		Global_1655612.f_1775 = { unk };

	return;
}

void func_10() // Position - 0xB5A
{
	var unk;

	unk = 10;
	unk.f_11 = 10;
	unk.f_22 = 10;
	unk.f_183 = 10;
	unk.f_194 = 10;
	unk.f_205 = 10;
	unk.f_216 = 10;
	unk.f_227 = 10;
	unk.f_258 = 10;
	unk.f_269 = 10;
	unk.f_280 = 10;
	unk.f_301 = 10;
	unk.f_312 = 10;
	unk.f_323 = 10;
	unk.f_334 = 10;
	unk.f_345 = 10;
	unk.f_356 = 10;
	unk.f_367 = 10;
	unk.f_378 = 10;
	unk.f_389 = 10;
	unk.f_400 = 10;
	unk.f_411 = 10;
	unk.f_422 = 10;
	unk.f_433 = 10;
	unk.f_444 = 10;
	unk.f_455 = 10;
	unk.f_466 = 10;
	unk.f_477 = 10;
	unk.f_488 = 10;
	unk.f_499 = 10;
	unk.f_510 = 10;
	unk.f_521 = 10;
	unk.f_532 = 10;
	unk.f_543 = 10;
	unk.f_554 = 10;
	unk.f_565 = 10;
	unk.f_576 = 10;
	unk.f_587 = 10;

	if (Global_2672523)
		unk_0xDD7F149F8BAF1260(&(Global_1655612.f_1177), &unk, 598);
	else
		Global_1655612.f_1177 = { unk };

	return;
}

void func_11() // Position - 0xCB6
{
	int i;

	Global_1655612 = 0;
	Global_1655612.f_1162 = 0.725f;
	Global_1655612.f_1161 = func_32();
	Global_1655612.f_1 = 0;
	Global_1655612.f_1163 = 0;
	Global_1655612.f_1164 = 0;
	Global_1655612.f_1165 = 0;
	Global_1655612.f_1166 = 0;
	Global_1655612.f_1167 = 0;
	Global_1655612.f_1168 = 0;
	Global_1655612.f_1169 = 0;
	Global_1655612.f_1170 = 0;
	Global_1655612.f_1171 = 0;
	Global_1655612.f_1172 = 0;
	Global_1655612.f_1173 = 0;
	Global_1655612.f_1174 = 0;
	Global_1655612.f_1175 = 0;
	Global_1655612.f_1176 = 0;
	Global_2696290 = 0;
	Global_2694590 = false;
	Global_2694591 = 0;
	Global_2696265 = 1;
	Global_2696989 = false;

	if (func_31(3))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(3, i) && func_29(3, i))
			{
				func_28(i);
				func_27(3, i);
			}
		}
	}

	if (func_31(6))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(6, i) && func_29(6, i))
			{
				func_26(i);
				func_27(6, i);
			}
		}
	}

	if (func_31(7))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(7, i) && func_29(7, i))
			{
				func_25(i);
				func_27(7, i);
			}
		}
	}

	if (func_31(4))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(4, i) && func_29(4, i))
			{
				func_24(i);
				func_27(4, i);
			}
		}
	}

	if (func_31(5))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(5, i) && func_29(5, i))
			{
				func_23(i);
				func_27(5, i);
			}
		}
	}

	if (func_31(1))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(1, i) && func_29(1, i))
			{
				func_22(i);
				func_27(1, i);
			}
		}
	}

	if (func_31(0))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(0, i) && func_29(0, i))
			{
				func_21(i);
				func_27(0, i);
			}
		}
	}

	if (func_31(2))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(2, i) && func_29(2, i) == false)
			{
				func_20(i);
				func_27(2, i);
			}
		}
	}

	if (func_31(8))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(8, i) && func_29(8, i) == false)
			{
				func_19(i);
				func_27(8, i);
			}
		}
	}

	if (func_31(9))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(9, i) && func_29(9, i) == false)
			{
				func_18(i);
				func_27(9, i);
			}
		}
	}

	if (func_31(10))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(10, i) && func_29(10, i) == false)
			{
				func_16(i);
				func_27(10, i);
			}
		}
	}

	if (func_31(11))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(11, i) && func_29(11, i) == false)
			{
				func_15(i);
				func_27(11, i);
			}
		}
	}

	if (func_31(12))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(12, i) && func_29(12, i) == false)
			{
				func_14(i);
				func_27(12, i);
			}
		}
	}

	if (func_31(13))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(13, i) && func_29(13, i) == false)
			{
				func_13(i);
				func_27(13, i);
			}
		}
	}

	if (func_31(14))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(14, i) && func_29(14, i) == false)
			{
				func_12(i);
				func_27(14, i);
			}
		}
	}

	return;
}

void func_12(int iParam0) // Position - 0x1138
{
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_6621[iParam0 /*16*/], "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_6621.f_161[iParam0 /*16*/], "", 64);
	Global_1655612.f_6621.f_322[iParam0] = false;
	Global_1655612.f_6621.f_333[iParam0] = false;
	Global_1655612.f_6621.f_344[iParam0] = 2;
	Global_1655612.f_6621.f_355[iParam0] = 0;
	Global_1655612.f_6621.f_366[iParam0] = false;
	Global_1655612.f_6621.f_377[iParam0] = 0;
	return;
}

void func_13(int iParam0) // Position - 0x11BC
{
	Global_1655612.f_6390[iParam0] = 0;
	Global_1655612.f_6390.f_11[iParam0] = 0;
	Global_1655612.f_6390.f_22[iParam0] = 0;
	Global_1655612.f_6390.f_33[iParam0] = 0;
	Global_1655612.f_6390.f_44[iParam0] = 0;
	Global_1655612.f_6390.f_55[iParam0] = 0;
	Global_1655612.f_6390.f_66[iParam0] = 0;
	Global_1655612.f_6390.f_77[iParam0] = 0;
	Global_1655612.f_6390.f_88[iParam0] = 0;
	Global_1655612.f_6390.f_99[iParam0] = 0;
	Global_1655612.f_6390.f_110[iParam0] = 0;
	Global_1655612.f_6390.f_121[iParam0] = 0;
	Global_1655612.f_6390.f_132[iParam0] = 0;
	Global_1655612.f_6390.f_143[iParam0] = 2;
	Global_1655612.f_6390.f_154[iParam0] = false;
	Global_1655612.f_6390.f_165[iParam0] = false;
	Global_1655612.f_6390.f_176[iParam0] = false;
	Global_1655612.f_6390.f_187[iParam0] = false;
	Global_1655612.f_6390.f_198[iParam0] = false;
	Global_1655612.f_6390.f_209[iParam0] = false;
	Global_1655612.f_6390.f_220[iParam0] = -1;
	return;
}

void func_14(int iParam0) // Position - 0x12E8
{
	Global_1655612.f_5988[iParam0] = 0;
	Global_1655612.f_5988.f_11[iParam0] = 0;
	Global_1655612.f_5988.f_22[iParam0] = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_5988.f_33[iParam0 /*6*/], "", 24);
	Global_1655612.f_5988.f_94[iParam0] = 0;
	Global_1655612.f_5988.f_105[iParam0] = false;
	Global_1655612.f_5988.f_116[iParam0] = 0;
	Global_1655612.f_5988.f_127[iParam0] = 0;
	Global_1655612.f_5988.f_138[iParam0] = 0;
	Global_1655612.f_5988.f_149[iParam0] = 0;
	Global_1655612.f_5988.f_160[iParam0] = 0;
	Global_1655612.f_5988.f_171[iParam0] = 0;
	Global_1655612.f_5988.f_182[iParam0] = 0;
	Global_1655612.f_5988.f_193[iParam0] = 0;
	Global_1655612.f_5988.f_204[iParam0] = 0;
	Global_1655612.f_5988.f_215[iParam0] = 0;
	Global_1655612.f_5988.f_226[iParam0] = 0;
	Global_1655612.f_5988.f_237[iParam0] = 2;
	Global_1655612.f_5988.f_248[iParam0] = 0;
	Global_1655612.f_5988.f_259[iParam0] = false;
	Global_1655612.f_5988.f_270[iParam0] = 0;
	Global_1655612.f_5988.f_281[iParam0] = 0;
	Global_1655612.f_5988.f_292[iParam0] = 0;
	Global_1655612.f_5988.f_303[iParam0] = 0;
	Global_1655612.f_5988.f_314[iParam0] = 0;
	Global_1655612.f_5988.f_325[iParam0] = 0;
	Global_1655612.f_5988.f_336[iParam0] = false;
	Global_1655612.f_5988.f_347[iParam0] = 0;
	Global_1655612.f_5988.f_358[iParam0] = 0;
	Global_1655612.f_5988.f_369[iParam0] = 0;
	Global_1655612.f_5988.f_380[iParam0] = 0;
	Global_1655612.f_5988.f_391[iParam0] = 0;
	return;
}

void func_15(int iParam0) // Position - 0x14BF
{
	Global_1655612.f_5823[iParam0] = 0;
	Global_1655612.f_5823.f_11[iParam0] = 0;
	Global_1655612.f_5823.f_22[iParam0] = 0;
	Global_1655612.f_5823.f_33[iParam0] = 0;
	Global_1655612.f_5823.f_44[iParam0] = 0;
	Global_1655612.f_5823.f_55[iParam0] = 0;
	Global_1655612.f_5823.f_66[iParam0] = 0;
	Global_1655612.f_5823.f_77[iParam0] = 0;
	Global_1655612.f_5823.f_88[iParam0] = 0;
	Global_1655612.f_5823.f_99[iParam0] = 2;
	Global_1655612.f_5823.f_110[iParam0] = false;
	Global_1655612.f_5823.f_121[iParam0] = false;
	Global_1655612.f_5823.f_132[iParam0] = false;
	Global_1655612.f_5823.f_143[iParam0] = false;
	Global_1655612.f_5823.f_154[iParam0] = -1;
	return;
}

void func_16(int iParam0) // Position - 0x1597
{
	Global_1655612.f_5320.f_6[iParam0] = 0;
	Global_1655612.f_5320.f_17[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_5320.f_28[iParam0 /*16*/], "", 64);
	Global_1655612.f_5320.f_189[iParam0] = -1;
	Global_1655612.f_5320.f_200[iParam0] = 1;
	Global_1655612.f_5320.f_211[iParam0] = -1;
	Global_1655612.f_5320.f_222[iParam0] = 2;
	Global_1655612.f_5320.f_233[iParam0] = false;
	Global_1655612.f_5320.f_244[iParam0] = 0;
	func_17(&Global_1655612.f_5320.f_255[iParam0 /*2*/]);
	Global_1655612.f_5320.f_276[iParam0] = -1;
	Global_1655612.f_5320.f_470[iParam0] = false;
	return;
}

void func_17(var uParam0) // Position - 0x1650
{
	uParam0->f_1 = 0;
	return;
}

void func_18(int iParam0) // Position - 0x165D
{
	Global_1655612.f_5287[iParam0] = 0;
	Global_1655612.f_5287.f_11[iParam0] = 1;
	Global_1655612.f_5287.f_22[iParam0] = 2;
	return;
}

void func_19(int iParam0) // Position - 0x168D
{
	Global_1655612.f_5060[iParam0] = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_5060.f_11[iParam0 /*16*/], "", 64);
	Global_1655612.f_5060.f_172[iParam0] = 0;
	Global_1655612.f_5060[iParam0] = 0f;
	Global_1655612.f_5060.f_183[iParam0] = 0;
	Global_1655612.f_5060.f_194[iParam0] = 0;
	Global_1655612.f_5060.f_205[iParam0] = 0;
	Global_1655612.f_5060.f_216[iParam0] = 2;
	return;
}

void func_20(int iParam0) // Position - 0x1705
{
	Global_1655612.f_2120[iParam0] = 0;
	Global_1655612.f_2120.f_11[iParam0] = 0;
	Global_1655612.f_2120.f_22[iParam0] = 0;
	Global_1655612.f_2120.f_33[iParam0] = 0;
	Global_1655612.f_2120.f_44[iParam0] = 0;
	Global_1655612.f_2120.f_55[iParam0] = 0;
	Global_1655612.f_2120.f_66[iParam0] = 0;
	Global_1655612.f_2120.f_77[iParam0] = 0;
	Global_1655612.f_2120.f_88[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_2120.f_99[iParam0 /*16*/], "", 64);
	Global_1655612.f_2120.f_260[iParam0] = -1;
	Global_1655612.f_2120.f_271[iParam0] = -1;
	Global_1655612.f_2120.f_282[iParam0] = 18;
	Global_1655612.f_2120.f_293[iParam0] = 6;
	Global_1655612.f_2120.f_304[iParam0] = -1;
	Global_1655612.f_2120.f_315[iParam0] = 2;
	Global_1655612.f_2120.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1655612.f_2120.f_357[iParam0] = false;
	Global_1655612.f_2120.f_368[iParam0] = 1;
	Global_1655612.f_2120.f_379[iParam0] = 1;
	Global_1655612.f_2120.f_390[iParam0] = 1;
	Global_1655612.f_2120.f_401[iParam0] = 1;
	Global_1655612.f_2120.f_412[iParam0] = 1;
	Global_1655612.f_2120.f_423[iParam0] = 1;
	Global_1655612.f_2120.f_434[iParam0] = 1;
	Global_1655612.f_2120.f_445[iParam0] = 1;
	Global_1655612.f_2120.f_456[iParam0] = 1;
	Global_1655612.f_2120.f_467[iParam0] = 1;
	Global_1655612.f_2120.f_478[iParam0] = 1;
	Global_1655612.f_2120.f_489[iParam0] = 1;
	Global_1655612.f_2120.f_500[iParam0] = 1;
	Global_1655612.f_2120.f_511[iParam0] = 1;
	Global_1655612.f_2120.f_522[iParam0] = 1;
	Global_1655612.f_2120.f_533[iParam0] = 1;
	func_17(&Global_1655612.f_2120.f_555[iParam0 /*2*/]);
	Global_1655612.f_2120.f_576[iParam0] = -1;
	Global_1655612.f_2120.f_609[iParam0] = false;
	return;
}

void func_21(int iParam0) // Position - 0x1940
{
	Global_1655612.f_1177[iParam0] = 0;
	Global_1655612.f_1177.f_11[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_1177.f_22[iParam0 /*16*/], "", 64);
	Global_1655612.f_1177.f_183[iParam0] = -1;
	Global_1655612.f_1177.f_194[iParam0] = 1;
	Global_1655612.f_1177.f_205[iParam0] = -1;
	Global_1655612.f_1177.f_216[iParam0] = 2;
	Global_1655612.f_1177.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1655612.f_1177.f_258[iParam0] = false;
	Global_1655612.f_1177.f_269[iParam0] = 0;
	func_17(&Global_1655612.f_1177.f_280[iParam0 /*2*/]);
	Global_1655612.f_1177.f_301[iParam0] = -1;
	Global_1655612.f_1177.f_334[iParam0] = false;
	Global_1655612.f_1177.f_345[iParam0] = 0;
	Global_1655612.f_1177.f_356[iParam0] = false;
	Global_1655612.f_1177.f_444[iParam0] = 1;
	Global_1655612.f_1177.f_455[iParam0] = -1;
	return;
}

void func_22(int iParam0) // Position - 0x1A50
{
	Global_1655612.f_1775[iParam0] = 0;
	Global_1655612.f_1775.f_11[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_1775.f_22[iParam0 /*16*/], "", 64);
	Global_1655612.f_1775.f_183[iParam0] = -1;
	Global_1655612.f_1775.f_194[iParam0] = 1;
	Global_1655612.f_1775.f_205[iParam0] = -1;
	Global_1655612.f_1775.f_216[iParam0] = 2;
	Global_1655612.f_1775.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1655612.f_1775.f_258[iParam0] = false;
	Global_2804286[iParam0] = 0;
	Global_2804297[iParam0] = 0;
	Global_2804308[iParam0] = 0;
	Global_2804319[iParam0] = 0;
	Global_2804330[iParam0] = 0;
	Global_2804341[iParam0] = 0;
	Global_2804352[iParam0] = 0;
	Global_2804363[iParam0] = 0;
	Global_2804374[iParam0] = 0;
	Global_2804385[iParam0] = 0;
	Global_2804396[iParam0] = 0;
	Global_2804407[iParam0] = 0;
	Global_2804418[iParam0] = 0;
	Global_2804429[iParam0] = 0;
	Global_2804440[iParam0] = 0;
	Global_2804451[iParam0] = 0;
	func_17(&Global_1655612.f_1775.f_280[iParam0 /*2*/]);
	Global_1655612.f_1775.f_301[iParam0] = -1;
	return;
}

void func_23(int iParam0) // Position - 0x1B96
{
	Global_1655612.f_3705[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_3705.f_11[iParam0 /*16*/], "", 64);
	Global_1655612.f_3705.f_172[iParam0] = -1;
	Global_1655612.f_3705.f_183[iParam0] = -1;
	Global_1655612.f_3705.f_194[iParam0] = 1;
	Global_1655612.f_3705.f_205[iParam0] = -1;
	Global_1655612.f_3705.f_216[iParam0] = 2;
	Global_1655612.f_3705.f_227[iParam0] = false;
	func_17(&Global_1655612.f_3705.f_238[iParam0 /*2*/]);
	Global_1655612.f_3705.f_259[iParam0] = -1;
	Global_1655612.f_3705.f_314[iParam0] = false;
	Global_1655612.f_3705.f_325[iParam0] = 0;
	return;
}

void func_24(int iParam0) // Position - 0x1C4E
{
	Global_1655612.f_3347[iParam0] = -1;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_3347.f_11[iParam0 /*16*/], "", 64);
	Global_1655612.f_3347.f_172[iParam0] = -1;
	Global_1655612.f_3347.f_183[iParam0] = -1;
	Global_1655612.f_3347.f_194[iParam0] = 1;
	Global_1655612.f_3347.f_205[iParam0] = -1;
	Global_1655612.f_3347.f_216[iParam0] = 2;
	Global_1655612.f_3347.f_227[iParam0] = false;
	func_17(&Global_1655612.f_3347.f_238[iParam0 /*2*/]);
	Global_1655612.f_3347.f_259[iParam0] = -1;
	return;
}

void func_25(int iParam0) // Position - 0x1CE8
{
	Global_1655612.f_4659[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_4659.f_11[iParam0 /*16*/], "", 64);
	Global_1655612.f_4659.f_172[iParam0] = -1;
	Global_1655612.f_4659.f_183[iParam0] = -1;
	Global_1655612.f_4659.f_194[iParam0] = 0;
	Global_1655612.f_4659.f_205[iParam0] = 1;
	Global_1655612.f_4659.f_216[iParam0] = 0;
	Global_1655612.f_4659.f_227[iParam0] = -1;
	Global_1655612.f_4659.f_249[iParam0] = 2;
	Global_1655612.f_4659.f_260[iParam0] = false;
	func_17(&Global_1655612.f_4659.f_282[iParam0 /*2*/]);
	Global_1655612.f_4659.f_303[iParam0] = -1;
	return;
}

void func_26(int iParam0) // Position - 0x1DA0
{
	Global_1655612.f_4041[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_4041.f_11[iParam0 /*16*/], "", 64);
	Global_1655612.f_4041.f_172[iParam0] = -1;
	Global_1655612.f_4041.f_183[iParam0] = 1;
	Global_1655612.f_4041.f_194[iParam0] = -1;
	Global_1655612.f_4041.f_260[iParam0] = 2;
	Global_1655612.f_4041.f_271[iParam0] = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_4041.f_282[iParam0 /*16*/], "", 64);
	Global_1655612.f_4041.f_443[iParam0] = 0;
	Global_1655612.f_4041.f_454[iParam0] = -1f;
	func_17(&Global_1655612.f_4041.f_465[iParam0 /*2*/]);
	Global_1655612.f_4041.f_486[iParam0] = -1;
	Global_1655612.f_4041.f_519[iParam0] = 0;
	return;
}

void func_27(int iParam0, int iParam1) // Position - 0x1E6F
{
	unk_0x8744D2E3FC95740E(&Global_1655612.f_7041[iParam0], iParam1);
	return;
}

void func_28(int iParam0) // Position - 0x1E88
{
	Global_1655612.f_2839[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_2839.f_11[iParam0 /*16*/], "", 64);
	Global_1655612.f_2839.f_172[iParam0] = -1;
	Global_1655612.f_2839.f_183[iParam0] = 1;
	Global_1655612.f_2839.f_194[iParam0] = -1;
	Global_1655612.f_2839.f_205[iParam0] = 2;
	Global_1655612.f_2839.f_216[iParam0] = false;
	func_17(&Global_1655612.f_2839.f_227[iParam0 /*2*/]);
	Global_1655612.f_2839.f_248[iParam0] = -1;
	return;
}

BOOL func_29(int iParam0, int iParam1) // Position - 0x1F13
{
	return IS_BIT_SET(Global_1655612.f_7009[iParam0], iParam1);
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x1F29
{
	return IS_BIT_SET(Global_1655612.f_7041[iParam0], iParam1);
}

BOOL func_31(int iParam0) // Position - 0x1F3F
{
	if (Global_1655612.f_7009[iParam0] > 0)
		return true;

	return false;
}

float func_32() // Position - 0x1F5B
{
	float num;

	num = 0.925f - 0.002f;
	num = num + (-0.036f * (float)Global_1655612.f_1163);

	if (Global_1655612.f_1164 == 1)
		num = num + -0.15f;
	else if (Global_1655612.f_1165 == 1)
		num = num + (-0.048f - 0.753f);

	if (Global_1655612.f_1168 == true)
		num = num + -0.919f;

	if (Global_1655612.f_1169 == 1)
		num = num + -0.184f;

	if (Global_1655612.f_1170 == 1)
		num = num + -0.522f;

	if (Global_1655612.f_1166 == 1 && Global_1655612.f_1167 == 0)
	{
		switch (func_34())
		{
			case 0:
				num = num + -0.405f;
				break;
		
			case 2:
				num = num + -0.405f;
				break;
		
			case 1:
				num = num + -0.414f;
				break;
		
			default:
				if (!func_33())
					num = num + -0.405f;
				break;
		}
	}

	return num;
}

BOOL func_33() // Position - 0x2068
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
		return true;

	return false;
}

int func_34() // Position - 0x2085
{
	func_35();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_35() // Position - 0x209E
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_39(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_38(unk_0x4A8C381C258A124D());
		
			if (func_37(num) && !func_36(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_37(Global_113810.f_2366.f_539.f_4321))
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
			
				Global_113810.f_2366.f_539.f_4323 = num;
				Global_113810.f_2366.f_539.f_4321 = num;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != 145)
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113810.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_36(int iParam0) // Position - 0x219B
{
	return Global_43377 == iParam0;
}

BOOL func_37(int iParam0) // Position - 0x21A9
{
	return iParam0 < 3;
}

int func_38(var uParam0) // Position - 0x21B5
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_39(i) == num)
				return i;
		}
	}

	return 145;
}

int func_39(int iParam0) // Position - 0x21F2
{
	if (func_37(iParam0))
		return func_40(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_40(int iParam0) // Position - 0x2217
{
	return Global_2058[iParam0 /*29*/];
}

void func_41() // Position - 0x2226
{
	int i;

	for (i = 0; i <= 14; i = i + 1)
	{
		Global_1655612.f_7009[i] = 0;
	}

	return;
}

void func_42() // Position - 0x224D
{
	Global_2696138 = 0;
	return;
}

void func_43() // Position - 0x225A
{
	int i;
	int j;
	int k;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;

	unk = 12;

	if (unk_0x92E1F6B57257471D())
		if (Global_1655612.f_1163 == 0)
			func_251(1);

	func_247();

	if (func_242())
	{
		if (unk_0x8034325BF6D6E41F() % 100 == 0)
			if (func_236(unk_0x259BE71D8A81D4FA()))
				func_235();
	
		if (func_234())
			Global_1654054.f_1185 = 1;
	
		for (i = 0; i <= 9; i = i + 1)
		{
			num = 0;
		
			if (func_29(7, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_4041.f_260[i];
		
			num = 1;
		
			if (func_29(3, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_2839.f_205[i];
		
			num = 2;
		
			if (func_29(4, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_3347.f_216[i];
		
			num = 3;
		
			if (func_29(5, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_3705.f_216[i];
		
			num = 4;
		
			if (func_29(1, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_1775.f_216[i];
		
			num = 5;
		
			if (func_29(0, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_1177.f_216[i];
		
			num = 6;
		
			if (func_29(6, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_4041.f_260[i];
		
			num = 7;
		
			if (func_29(2, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_2120.f_315[i];
		
			num = 8;
		
			if (func_29(8, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5060.f_216[i];
		
			num = 9;
		
			if (func_29(9, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5287.f_22[i];
		
			num = 10;
		
			if (func_29(10, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5320.f_222[i];
		
			num = 11;
		
			if (func_29(11, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5823.f_99[i];
		
			num = 12;
		
			if (func_29(12, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5988.f_237[i];
		
			num = 13;
		
			if (func_29(13, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_6390.f_143[i];
		
			num = 14;
		
			if (func_29(14, i))
				Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_6621.f_344[i];
		}
	
		num = 0;
	
		if (Global_1654054.f_1185 == 1)
		{
			for (i = 0; i <= 9; i = i + 1)
			{
				num = 0;
			
				if (func_29(7, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_4659.f_249[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_4659.f_249[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_4659.f_249[i] == 2 || Global_1655612.f_4659.f_249[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_4659.f_249[i] == 13 || Global_1655612.f_4659.f_249[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_4659.f_249[i];
				}
			
				num = 1;
			
				if (func_29(3, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_2839.f_205[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_2839.f_205[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_2839.f_205[i] == 2 || Global_1655612.f_2839.f_205[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_2839.f_205[i] == 13 || Global_1655612.f_2839.f_205[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_2839.f_205[i];
				}
			
				num = 2;
			
				if (func_29(4, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_3347.f_216[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_3347.f_216[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_3347.f_216[i] == 2 || Global_1655612.f_3347.f_216[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_3347.f_216[i] == 13 || Global_1655612.f_3347.f_216[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_3347.f_216[i];
				}
			
				num = 3;
			
				if (func_29(5, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_3705.f_216[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_3705.f_216[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_3705.f_216[i] == 2 || Global_1655612.f_3705.f_216[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_3705.f_216[i] == 13 || Global_1655612.f_3705.f_216[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_3705.f_216[i];
				}
			
				num = 4;
			
				if (func_29(1, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_1775.f_216[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_1775.f_216[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_1775.f_216[i] == 2 || Global_1655612.f_1775.f_216[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_1775.f_216[i] == 13 || Global_1655612.f_1775.f_216[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_1775.f_216[i];
				}
			
				num = 5;
			
				if (func_29(0, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_1177.f_216[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_1177.f_216[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_1177.f_216[i] == 2 || Global_1655612.f_1177.f_216[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_1177.f_216[i] == 13 || Global_1655612.f_1177.f_216[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_1177.f_216[i];
				}
			
				num = 6;
			
				if (func_29(6, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_4041.f_260[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_4041.f_260[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_4041.f_260[i] == 2 || Global_1655612.f_4041.f_260[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_4041.f_260[i] == 13 || Global_1655612.f_4041.f_260[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_4041.f_260[i];
				}
			
				num = 7;
			
				if (func_29(2, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_2120.f_315[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_2120.f_315[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_2120.f_315[i] == 2 || Global_1655612.f_2120.f_315[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_2120.f_315[i] == 13 || Global_1655612.f_2120.f_315[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_2120.f_315[i];
				}
			
				num = 8;
			
				if (func_29(8, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5060.f_216[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_5060.f_216[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5060.f_216[i] == 2 || Global_1655612.f_5060.f_216[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5060.f_216[i] == 13 || Global_1655612.f_5060.f_216[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_5060.f_216[i];
				}
			
				num = 9;
			
				if (func_29(9, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5287.f_22[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_5287.f_22[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5287.f_22[i] == 2 || Global_1655612.f_5287.f_22[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5287.f_22[i] == 13 || Global_1655612.f_5287.f_22[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_5287.f_22[i];
				}
			
				num = 10;
			
				if (func_29(10, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5320.f_222[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_5320.f_222[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5320.f_222[i] == 2 || Global_1655612.f_5320.f_222[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5320.f_222[i] == 13 || Global_1655612.f_5320.f_222[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_5320.f_222[i];
				}
			
				num = 11;
			
				if (func_29(11, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5823.f_99[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_5823.f_99[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5823.f_99[i] == 2 || Global_1655612.f_5823.f_99[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5823.f_99[i] == 13 || Global_1655612.f_5823.f_99[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_5823.f_99[i];
				}
			
				num = 12;
			
				if (func_29(12, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_5988.f_237[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_5988.f_237[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5988.f_237[i] == 2 || Global_1655612.f_5988.f_237[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_5988.f_237[i] == 13 || Global_1655612.f_5988.f_237[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_5988.f_237[i];
				}
			
				num = 13;
			
				if (func_29(13, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_6390.f_143[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_6390.f_143[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_6390.f_143[i] == 2 || Global_1655612.f_6390.f_143[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_6390.f_143[i] == 13 || Global_1655612.f_6390.f_143[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_6390.f_143[i];
				}
			
				num = 14;
			
				if (func_29(14, i))
				{
					Global_1654054.f_1186[num /*11*/][i] = Global_1655612.f_6621.f_344[i];
				
					if (Global_1654054.f_1186[num /*11*/][i] != 1)
						if (Global_1654054.f_1352[num /*11*/][i] != Global_1655612.f_6621.f_344[i] && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_6621.f_344[i] == 2 || Global_1655612.f_6621.f_344[i] != 2 && Global_1654054.f_1352[num /*11*/][i] == 0 && Global_1655612.f_6621.f_344[i] == 13 || Global_1655612.f_6621.f_344[i] != 13)
							Global_1654054.f_1352[num /*11*/][i] = Global_1655612.f_6621.f_344[i];
				}
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1654054.f_1186[j /*11*/][i] != Global_1654054.f_1352[j /*11*/][i])
						Global_1654054.f_1352[j /*11*/][i] = 0;
				}
			}
		
			for (k = 0; k <= 11; k = k + 1)
			{
				unk[k] = 0;
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1654054.f_1186[j /*11*/][i] == 3)
						unk[0] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 4)
						unk[1] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 5)
						unk[2] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 6)
						unk[3] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 7)
						unk[4] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 8)
						unk[5] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 9)
						unk[6] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 10)
						unk[7] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 11)
						unk[8] = 1;
				
					if (Global_1654054.f_1186[j /*11*/][i] == 12)
						unk[9] = 1;
				}
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1654054.f_1186[j /*11*/][i] == 2)
					{
						for (k = 0; k <= 11; k = k + 1)
						{
							if (unk[k] == 0)
							{
								Global_1654054.f_1186[j /*11*/][i] = k + 3;
								unk[k] = 1;
								Global_1654054.f_1352[j /*11*/][i] = Global_1654054.f_1186[j /*11*/][i];
								k = 12;
							}
						}
					}
				}
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1654054.f_1186[j /*11*/][i] == 13)
					{
						for (k = 11; k >= 1; k = k + -1)
						{
							if (unk[k] == 0 && unk[k - 1] == 1)
							{
								Global_1654054.f_1186[j /*11*/][i] = k + 3;
								unk[k] = 1;
								Global_1654054.f_1352[j /*11*/][i] = Global_1654054.f_1186[j /*11*/][i];
								k = 0;
							}
							else if (k == 1 && unk[0] == 0)
							{
								Global_1654054.f_1186[j /*11*/][i] = 3;
								unk[0] = 1;
								Global_1654054.f_1352[j /*11*/][i] = Global_1654054.f_1186[j /*11*/][i];
								k = 0;
							}
						}
					}
				}
			}
		
			Global_1654054.f_1185 = 0;
		}
	
		if (Global_1655612.f_1168)
			num2 = 84;
		else
			num2 = 66;
	
		if (func_242())
		{
			for (j = 0; j <= 15; j = j + 1)
			{
				if (func_233(0))
				{
					if (func_31(func_231(0)))
					{
						for (i = 0; i <= 9; i = i + 1)
						{
							num3 = func_230(func_231(0));
						
							if (func_229(num3))
							{
								if (Global_1654054.f_1352[num3 /*11*/][i] == j + 3 || Global_1654054.f_1186[num3 /*11*/][i] == 1)
								{
									if (func_225(Global_1654054.f_1186[num3 /*11*/][i]))
									{
										func_221(true);
									
										if (Global_1655612.f_1165 == 0)
										{
											unk_0x9A122D542F2BB60E(82, num2);
											unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
										}
									
										func_220(func_231(0), i);
									
										if (Global_1655612.f_1165 == 0)
											unk_0x90B531766063C5CD();
									
										func_221(false);
									}
								}
							}
						}
					}
				}
			
				if (func_233(1))
				{
					if (func_31(func_231(1)))
					{
						for (i = 0; i <= 9; i = i + 1)
						{
							num4 = func_230(func_231(1));
						
							if (func_229(num4))
							{
								if (Global_1654054.f_1352[num4 /*11*/][i] == j + 3 || Global_1654054.f_1186[num4 /*11*/][i] == 1)
								{
									if (func_225(Global_1654054.f_1186[num4 /*11*/][i]))
									{
										func_221(true);
									
										if (Global_1655612.f_1165 == 0)
										{
											unk_0x9A122D542F2BB60E(82, num2);
											unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
										}
									
										func_220(func_231(1), i);
									
										if (Global_1655612.f_1165 == 0)
											unk_0x90B531766063C5CD();
									
										func_221(false);
									}
								}
							}
						}
					}
				}
			
				if (func_31(7) && !func_219(7))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[0 /*11*/][i] == j + 3 || Global_1654054.f_1186[0 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[0 /*11*/][i]))
							{
								func_221(true);
							
								if (Global_1655612.f_1165 == 0)
								{
									unk_0x9A122D542F2BB60E(82, num2);
									unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								}
							
								func_203(i, Global_1655612.f_4659[i], &Global_1655612.f_4659.f_11[i /*16*/], Global_1655612.f_4659.f_172[i], Global_1655612.f_4659.f_194[i], Global_1655612.f_4659.f_216[i], Global_1655612.f_4659.f_205[i], Global_1655612.f_4659.f_183[i], Global_1655612.f_4659.f_227[i], Global_1655612.f_4659.f_260[i], Global_1655612.f_4659.f_314[i], Global_1655612.f_4659.f_325[i], Global_1655612.f_4659.f_357[i], Global_1655612.f_4659.f_238[i], Global_1655612.f_4659.f_271[i], Global_1655612.f_4659.f_368[i], Global_1655612.f_4659.f_379[i], Global_1655612.f_4659.f_390[i]);
							
								if (Global_1655612.f_1165 == 0)
									unk_0x90B531766063C5CD();
							
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(3) && !func_219(3))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[1 /*11*/][i] == j + 3 || Global_1654054.f_1186[1 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[1 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_202(i, Global_1655612.f_2839[i], &Global_1655612.f_2839.f_11[i /*16*/], Global_1655612.f_2839.f_183[i], Global_1655612.f_2839.f_172[i], Global_1655612.f_2839.f_194[i], Global_1655612.f_2839.f_216[i], &Global_1655612.f_2839.f_259[i /*16*/], Global_1655612.f_2839.f_420[i], Global_1655612.f_2839.f_453[i], Global_1655612.f_2839.f_431[i], Global_1655612.f_2839.f_442[i], Global_1655612.f_2839.f_464[i], Global_1655612.f_2839.f_475[i], Global_1655612.f_2839.f_486[i], Global_1655612.f_2839.f_497[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(4) && !func_219(4))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[2 /*11*/][i] == j + 3 || Global_1654054.f_1186[2 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[2 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_201(i, Global_1655612.f_3347[i], Global_1655612.f_3347.f_172[i], &Global_1655612.f_3347.f_11[i /*16*/], Global_1655612.f_3347.f_194[i], Global_1655612.f_3347.f_183[i], Global_1655612.f_3347.f_205[i], Global_1655612.f_3347.f_227[i], Global_1655612.f_3347.f_270[i], Global_1655612.f_3347.f_281[i], Global_1655612.f_3347.f_292[i], Global_1655612.f_3347.f_303[i], Global_1655612.f_3347.f_314[i], Global_1655612.f_3347.f_325[i], Global_1655612.f_3347.f_336[i], Global_1655612.f_3347.f_347[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(5) && !func_219(5))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[3 /*11*/][i] == j + 3 || Global_1654054.f_1186[3 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[3 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_200(i, Global_1655612.f_3705[i], Global_1655612.f_3705.f_172[i], &Global_1655612.f_3705.f_11[i /*16*/], Global_1655612.f_3705.f_194[i], Global_1655612.f_3705.f_183[i], Global_1655612.f_3705.f_205[i], Global_1655612.f_3705.f_227[i], Global_1655612.f_3705.f_270[i], Global_1655612.f_3705.f_281[i], Global_1655612.f_3705.f_292[i], Global_1655612.f_3705.f_303[i], Global_1655612.f_3705.f_314[i], Global_1655612.f_3705.f_325[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(1) && !func_219(1))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[4 /*11*/][i] == j + 3 || Global_1654054.f_1186[4 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[4 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_190(i, Global_1655612.f_1775[i], Global_1655612.f_1775.f_11[i], &Global_1655612.f_1775.f_22[i /*16*/], Global_1655612.f_1775.f_194[i], Global_1655612.f_1775.f_205[i], Global_1655612.f_1775.f_258[i], Global_1655612.f_1775.f_183[i], Global_1655612.f_1775.f_227[i /*3*/], Global_1655612.f_1775.f_227[i /*3*/].f_1, Global_1655612.f_1775.f_312[i], Global_1655612.f_1775.f_323[i], Global_1655612.f_1775.f_269[i], Global_2804286[i], Global_2804297[i], Global_2804308[i], Global_2804319[i], Global_2804330[i], Global_2804341[i], Global_2804352[i], Global_2804363[i], Global_1655612.f_1775.f_334[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(0) && !func_219(0))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[5 /*11*/][i] == j + 3 || Global_1654054.f_1186[5 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[5 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_180(i, Global_1655612.f_1177[i], Global_1655612.f_1177.f_11[i], &Global_1655612.f_1177.f_22[i /*16*/], Global_1655612.f_1177.f_194[i], Global_1655612.f_1177.f_183[i], Global_1655612.f_1177.f_227[i /*3*/], Global_1655612.f_1177.f_227[i /*3*/].f_1, Global_1655612.f_1177.f_258[i], Global_1655612.f_1177.f_205[i], Global_1655612.f_1177.f_269[i], Global_1655612.f_1177.f_312[i], Global_1655612.f_1177.f_323[i], Global_1655612.f_1177.f_334[i], Global_1655612.f_1177.f_345[i], Global_1655612.f_1177.f_356[i], Global_1655612.f_1177.f_367[i], Global_1655612.f_1177.f_378[i], Global_1655612.f_1177.f_389[i], Global_1655612.f_1177.f_400[i], Global_1655612.f_1177.f_411[i], Global_1655612.f_1177.f_422[i], Global_1655612.f_1177.f_433[i], Global_1655612.f_1177.f_444[i], Global_1655612.f_1177.f_455[i], Global_1655612.f_1177.f_466[i], Global_1655612.f_1177.f_477[i], Global_1655612.f_1177.f_488[i], Global_1655612.f_1177.f_499[i], Global_1655612.f_1177.f_510[i], Global_1655612.f_1177.f_521[i], Global_1655612.f_1177.f_532[i], Global_1655612.f_1177.f_543[i], Global_1655612.f_1177.f_554[i], Global_1655612.f_1177.f_565[i], Global_1655612.f_1177.f_576[i], Global_1655612.f_1177.f_587[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(6) && !func_219(6))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[6 /*11*/][i] == j + 3 || Global_1654054.f_1186[6 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[6 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_179(i, Global_1655612.f_4041[i], &Global_1655612.f_4041.f_11[i /*16*/], Global_1655612.f_4041.f_183[i], Global_1655612.f_4041.f_172[i], Global_1655612.f_4041.f_194[i], Global_1655612.f_4041.f_271[i], &Global_1655612.f_4041.f_282[i /*16*/], Global_1655612.f_4041.f_443[i], Global_1655612.f_4041.f_454[i], Global_1655612.f_4041.f_497[i], Global_1655612.f_4041.f_508[i], Global_1655612.f_4041.f_205[i], Global_1655612.f_4041.f_216[i], Global_1655612.f_4041.f_227[i], Global_1655612.f_4041.f_238[i], Global_1655612.f_4041.f_249[i], Global_1655612.f_4041.f_519[i], Global_1655612.f_4041.f_530[i], Global_1655612.f_4041.f_541[i], Global_1655612.f_4041.f_552[i], Global_1655612.f_4041.f_563[i], Global_1655612.f_4041.f_574[i], Global_1655612.f_4041.f_585[i], Global_1655612.f_4041.f_596[i], Global_1655612.f_4041.f_607[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(2) && !func_219(2))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[7 /*11*/][i] == j + 3 || Global_1654054.f_1186[7 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[7 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_167(i, Global_1655612.f_2120[i], &Global_1655612.f_2120.f_99[i /*16*/], Global_1655612.f_2120.f_282[i], Global_1655612.f_2120.f_293[i], Global_1655612.f_2120.f_260[i], Global_1655612.f_2120.f_11[i], Global_1655612.f_2120.f_22[i], Global_1655612.f_2120.f_33[i], Global_1655612.f_2120.f_44[i], Global_1655612.f_2120.f_55[i], Global_1655612.f_2120.f_66[i], Global_1655612.f_2120.f_77[i], Global_1655612.f_2120.f_88[i], Global_1655612.f_2120.f_271[i], Global_1655612.f_2120.f_304[i], Global_1655612.f_2120.f_357[i], Global_1655612.f_2120.f_326[i /*3*/], Global_1655612.f_2120.f_326[i /*3*/].f_1, Global_1655612.f_2120.f_368[i], Global_1655612.f_2120.f_379[i], Global_1655612.f_2120.f_390[i], Global_1655612.f_2120.f_401[i], Global_1655612.f_2120.f_412[i], Global_1655612.f_2120.f_423[i], Global_1655612.f_2120.f_434[i], Global_1655612.f_2120.f_445[i], Global_1655612.f_2120.f_456[i], Global_1655612.f_2120.f_467[i], Global_1655612.f_2120.f_478[i], Global_1655612.f_2120.f_489[i], Global_1655612.f_2120.f_500[i], Global_1655612.f_2120.f_511[i], Global_1655612.f_2120.f_522[i], Global_1655612.f_2120.f_533[i], Global_1655612.f_2120.f_587[i], Global_1655612.f_2120.f_598[i], Global_1655612.f_2120.f_544[i], Global_2804374[i], Global_2804385[i], Global_2804396[i], Global_2804407[i], Global_2804418[i], Global_2804429[i], Global_2804440[i], Global_2804451[i], Global_1655612.f_2120.f_609[i], Global_1655612.f_2120.f_620[i], Global_1655612.f_2120.f_631[i], Global_1655612.f_2120.f_642[i], Global_1655612.f_2120.f_653[i], Global_1655612.f_2120.f_664[i], Global_1655612.f_2120.f_675[i], Global_1655612.f_2120.f_686[i], Global_1655612.f_2120.f_697[i], Global_1655612.f_2120.f_708[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(8) && !func_219(8))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[8 /*11*/][i] == j + 3 || Global_1654054.f_1186[8 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[8 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_164(i, &Global_1655612.f_5060.f_11[i /*16*/], Global_1655612.f_5060[i], Global_1655612.f_5060.f_172[i], Global_1655612.f_5060.f_183[i], Global_1655612.f_5060.f_194[i], Global_1655612.f_5060.f_205[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(9) && !func_219(9))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[9 /*11*/][i] == j + 3 || Global_1654054.f_1186[9 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[9 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_158(i, Global_1655612.f_5287[i], Global_1655612.f_5287.f_11[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(10) && !func_219(10))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[10 /*11*/][i] == j + 3 || Global_1654054.f_1186[10 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[10 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_143(i, Global_1655612.f_5320.f_6[i], Global_1655612.f_5320.f_17[i], &Global_1655612.f_5320.f_28[i /*16*/], Global_1655612.f_5320.f_200[i], Global_1655612.f_5320.f_189[i], Global_1655612.f_5320.f_233[i], Global_1655612.f_5320.f_211[i], Global_1655612.f_5320.f_244[i], Global_1655612.f_5320.f_287[i], Global_1655612.f_5320.f_298[i], &Global_1655612.f_5320.f_309[i /*16*/], &(Global_1655612.f_5320), Global_1655612.f_5320.f_470[i], Global_1655612.f_5320.f_481[i], Global_1655612.f_5320.f_492[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(11) && !func_219(11))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[11 /*11*/][i] == j + 3 || Global_1654054.f_1186[11 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[11 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_140(i, Global_1655612.f_5823[i], Global_1655612.f_5823.f_11[i], Global_1655612.f_5823.f_22[i], Global_1655612.f_5823.f_33[i], Global_1655612.f_5823.f_44[i], Global_1655612.f_5823.f_55[i], Global_1655612.f_5823.f_66[i], Global_1655612.f_5823.f_77[i], Global_1655612.f_5823.f_88[i], Global_1655612.f_5823.f_110[i], Global_1655612.f_5823.f_121[i], Global_1655612.f_5823.f_132[i], Global_1655612.f_5823.f_143[i], Global_1655612.f_5823.f_154[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(12) && !func_219(12))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[12 /*11*/][i] == j + 3 || Global_1654054.f_1186[12 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[12 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_131(i, Global_1655612.f_5988[i], Global_1655612.f_5988.f_22[i], &Global_1655612.f_5988.f_33[i /*6*/], Global_1655612.f_5988.f_94[i], Global_1655612.f_5988.f_11[i], Global_1655612.f_5988.f_105[i], Global_1655612.f_5988.f_116[i], Global_1655612.f_5988.f_127[i], Global_1655612.f_5988.f_138[i], Global_1655612.f_5988.f_149[i], Global_1655612.f_5988.f_160[i], Global_1655612.f_5988.f_171[i], Global_1655612.f_5988.f_182[i], Global_1655612.f_5988.f_193[i], Global_1655612.f_5988.f_204[i], Global_1655612.f_5988.f_215[i], Global_1655612.f_5988.f_226[i], Global_1655612.f_5988.f_248[i], Global_1655612.f_5988.f_259[i], Global_1655612.f_5988.f_270[i], Global_1655612.f_5988.f_281[i], Global_1655612.f_5988.f_292[i], Global_1655612.f_5988.f_303[i], Global_1655612.f_5988.f_314[i], Global_1655612.f_5988.f_325[i], Global_1655612.f_5988.f_336[i], Global_1655612.f_5988.f_347[i], Global_1655612.f_5988.f_358[i], Global_1655612.f_5988.f_369[i], Global_1655612.f_5988.f_380[i], Global_1655612.f_5988.f_391[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(13) && !func_219(13))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[13 /*11*/][i] == j + 3 || Global_1654054.f_1186[13 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[13 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_126(i, Global_1655612.f_6390[i], Global_1655612.f_6390.f_11[i], Global_1655612.f_6390.f_22[i], Global_1655612.f_6390.f_33[i], Global_1655612.f_6390.f_44[i], Global_1655612.f_6390.f_55[i], Global_1655612.f_6390.f_66[i], Global_1655612.f_6390.f_77[i], Global_1655612.f_6390.f_88[i], Global_1655612.f_6390.f_99[i], Global_1655612.f_6390.f_110[i], Global_1655612.f_6390.f_121[i], Global_1655612.f_6390.f_132[i], Global_1655612.f_6390.f_154[i], Global_1655612.f_6390.f_165[i], Global_1655612.f_6390.f_176[i], Global_1655612.f_6390.f_187[i], Global_1655612.f_6390.f_198[i], Global_1655612.f_6390.f_209[i], Global_1655612.f_6390.f_220[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			
				if (func_31(14) && !func_219(14))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1654054.f_1352[14 /*11*/][i] == j + 3 || Global_1654054.f_1186[14 /*11*/][i] == 1)
						{
							if (func_225(Global_1654054.f_1186[14 /*11*/][i]))
							{
								func_221(true);
								unk_0x9A122D542F2BB60E(82, num2);
								unk_0x9C066F8D86A1A438(uLocal_63, uLocal_64, fLocal_65, fLocal_66);
								func_45(i, &Global_1655612.f_6621[i /*16*/], &Global_1655612.f_6621.f_161[i /*16*/], Global_1655612.f_6621.f_322[i], Global_1655612.f_6621.f_333[i], Global_1655612.f_6621.f_355[i], Global_1655612.f_6621.f_366[i], Global_1655612.f_6621.f_377[i]);
								unk_0x90B531766063C5CD();
								func_221(false);
							}
						}
					}
				}
			}
		}
	
		func_44();
	}

	return;
}

void func_44() // Position - 0x5074
{
	int i;

	for (i = 0; i <= 14; i = i + 1)
	{
		Global_1655612.f_7025[i] = Global_1655612.f_7009[i];
	}

	return;
}

void func_45(int iParam0, char* sParam1, char* sParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x50A5
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(14, iParam0))
		func_46(iParam0, &unk, &unk12, &unk23, &unk25, 0, 1, sParam1, iParam5, 0, 0, bParam3, "", 0, 0f, 0, 0, iParam5, false, 0, false, 0, 0, sParam2, false, 0, 255, false, 0, false, false, 1, false, 0, -1, true, bParam4, bParam6, iParam7);

	return;
}

void func_46(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, BOOL bParam18, int iParam19, BOOL bParam20, int iParam21, int iParam22, char* sParam23, BOOL bParam24, int iParam25, int iParam26, BOOL bParam27, int iParam28, BOOL bParam29, BOOL bParam30, int iParam31, BOOL bParam32, int iParam33, int iParam34, BOOL bParam35, BOOL bParam36, BOOL bParam37, int iParam38) // Position - 0x50F3
{
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	int num5;
	var unk33;
	BOOL flag2;
	float num6;
	float num7;
	float num8;
	float num9;
	var unk50;
	float num10;
	float num11;
	float num12;
	float num13;
	int num14;
	char* str;
	char* str2;
	int num15;
	char* str3;
	char* str4;
	int num16;
	var unk67;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		func_124(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_124(&num2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_124(&num3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_124(&num4, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (func_123())
			if (bParam24)
				func_122(uParam1, 0);
			else if (bParam11)
				func_121(uParam1, 3);
			else
				func_122(uParam1, 0);
		else if (bParam24)
			func_120(uParam1, 0);
		else if (bParam11)
			func_121(uParam1, 3);
		else
			func_120(uParam1, 0);
	
		if (Global_2694590 && bParam11)
			if (func_123())
				func_122(uParam1, 0);
			else
				func_120(uParam1, 0);
	
		if (iParam5 < 1000000)
			if (unk_0x8608526719A575EE() == 8 && fParam14 >= 100f && unk_0x1B79E937E91F40C3("AMCH_KMHN" /*~1~km/h*/, sParam12))
				func_119(uParam2, 0, 0);
			else if (unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12 && iParam5 > 999 || iParam19 > 999 || fParam14 > 1000f)
				func_119(uParam2, 0, 0);
			else if (iParam19 > 99)
				func_118(uParam2, 0, 0);
			else
				func_117(uParam2, 0, 0);
		else if (unk_0x8608526719A575EE() == 8 && unk_0x1B79E937E91F40C3("HUD_CASH" /*$~1~*/, sParam12) || unk_0x1B79E937E91F40C3("HUD_CASH_NEG" /*-$~1~*/, sParam12))
			func_119(uParam2, 0, 0);
		else
			func_118(uParam2, 0, 0);
	
		func_115(uParam1);
		func_114(uParam2);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_112()));
		func_111(6, iParam0);
	
		if (Global_1655612 == 1)
			func_110(iParam6);
	
		func_105(uParam2, uParam3, uParam4, iParam6, uParam1);
	
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
	
		func_104(uParam2, iParam8);
	
		if (iParam9 == 0)
			func_103(iParam0);
	
		if (iParam16 == 0)
			func_102(iParam0);
	
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			num5 = func_101();
			unk_0xA4F67CEB594AE064(num5);
		
			if (func_100(iParam9, &Global_1655612.f_86[iParam0 /*2*/], &Global_1655612.f_107[iParam0 /*2*/]))
				flag = true;
			else
				flag = false;
		
			num4 = *uParam3;
			num4.f_1 = uParam3->f_1;
			num = *uParam3;
			num.f_1 = uParam3->f_1 + 0.001f;
		
			if (iParam22 == 1)
			{
				num4 = num4 + 0.079f;
				num4.f_1 = num4.f_1 + 0.002f;
				num4.f_2 = num4.f_2 + 0.157f;
				num4.f_3 = num4.f_3 + 0.049f;
				num4.f_4 = num4.f_4 + 255;
				num4.f_5 = num4.f_5 + 255;
				num4.f_6 = num4.f_6 + 255;
				num4.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				num4 = num4 + 0.079f;
				num4.f_1 = num4.f_1 + 0.008f;
				num4.f_2 = num4.f_2 + 0.157f;
				num4.f_3 = num4.f_3 + 0.036f;
				num4.f_4 = num4.f_4 + 255;
				num4.f_5 = num4.f_5 + 255;
				num4.f_6 = num4.f_6 + 255;
				num4.f_7 = 140;
			}
			else
			{
				num4 = num4 + 0.079f;
				num4.f_1 = num4.f_1 + 0.01f;
				num4.f_2 = num4.f_2 + 0.157f;
				num4.f_3 = num4.f_3 + 0.033f;
				num4.f_4 = num4.f_4 + 255;
				num4.f_5 = num4.f_5 + 255;
				num4.f_6 = num4.f_6 + 255;
				num4.f_7 = 140;
			}
		
			if (func_123())
			{
				num4 = num4 + -0.025f;
				num4.f_2 = num4.f_2 + 0.05f;
			}
		
			Global_1655612.f_7074 = Global_1655612.f_7074 + num4.f_3;
		
			if (iParam16 > 0)
			{
				unk33 = { num4 };
			
				if (func_252(&Global_1655612.f_1129[iParam0 /*2*/], 2000, false) == false)
				{
					if (func_99(Global_1655612.f_1129[iParam0 /*2*/], 1250, false))
						Global_1655612.f_1150[iParam0] = Global_1655612.f_1150[iParam0] - 17;
				
					unk33.f_7 = Global_1655612.f_1150[iParam0];
				
					if (iParam15 == 2)
						func_98(&unk33, 6);
					else if (iParam15 == 3)
						func_98(&unk33, 18);
					else
						func_98(&unk33, iParam8);
				
					func_90("TimerBars", "ALL_WHITE_bg", &unk33, 1, 0, num5, 0);
				}
			}
			else
			{
				Global_1655612.f_1150[iParam0] = 255;
				func_89(&Global_1655612.f_1129[iParam0 /*2*/], false, false);
			}
		
			if (iParam22 == 1)
				func_90("TimerBars", "ALL_WHITE_bg", &num4, 1, 0, num5, 0);
			else
				func_90("TimerBars", "ALL_BLACK_bg", &num4, 1, 0, num5, 0);
		
			func_83(&num4, iParam25);
			num5 = func_101();
			unk_0xA4F67CEB594AE064(num5);
			func_82(uParam1, iParam17);
			flag2 = true;
		
			if (Global_2694590)
				flag2 = false;
		
			if (Global_2694591 == 1)
				flag2 = true;
		
			func_81(uParam1, false);
		
			if (func_123())
			{
				if (bParam11)
				{
					if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
					{
						uParam3->f_1 = uParam3->f_1 + -0.012f;
						uParam4->f_1 = uParam4->f_1 + -0.004f;
					}
					else
					{
						uParam3->f_1 = uParam3->f_1 + -0.004f;
					}
				}
				else if (func_123())
				{
					if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
					{
						uParam3->f_1 = uParam3->f_1 + -0.012f;
						uParam4->f_1 = uParam4->f_1 + -0.004f;
					}
					else
					{
						uParam3->f_1 = uParam3->f_1 + -0.008f;
					}
				}
			}
			else if (bParam24)
			{
				uParam3->f_1 = uParam3->f_1 + 0f;
			}
			else if (bParam11 && Global_2694590 == false)
			{
				uParam3->f_1 = uParam3->f_1 + (-0.002f - 0.004f);
			}
		
			if (iParam22 == 1)
			{
				uParam3->f_1 = uParam3->f_1 - 0.007f;
				uParam4->f_1 = uParam4->f_1 - 0.007f;
			}
		
			if (iParam21 == 2 && unk_0xD6F9DEE4765092A9(sParam7))
				sParam7 = "HUD_ROCKET" /*ROCKETS*/;
			else if (iParam21 == 4)
				sParam7 = "HUD_BOOST" /*BOOST*/;
			else if (iParam21 == 1)
				sParam7 = "HUD_SPIKES" /*SPIKES*/;
		
			uParam1->f_6 = iParam26;
			uParam2->f_6 = iParam26;
		
			if (bParam27)
				uParam2->f_6 = 0;
		
			if (bParam37)
				*uParam1 = iParam38;
		
			if (bParam29)
				if (flag)
					func_78(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, flag2);
			else
				func_78(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, flag2);
		
			if (bParam32)
			{
				if (iParam34 > 0)
				{
					if (!func_77(&Global_1655612.f_884[iParam0 /*2*/]))
						func_76(&Global_1655612.f_884[iParam0 /*2*/], false, false);
					else if (func_252(&Global_1655612.f_884[iParam0 /*2*/], iParam34, false))
						func_89(&Global_1655612.f_884[iParam0 /*2*/], false, false);
				
					func_73(uParam2, iParam8, iParam33, iParam34, Global_1655612.f_884[iParam0 /*2*/]);
				}
			}
		
			if (iParam22 == 1)
			{
				num2 = uParam2->f_9;
				num2.f_1 = uParam4->f_1 - 0.0175f;
				num3 = uParam2->f_9;
				num3.f_1 = uParam4->f_1 + 0.0175f;
				unk_0xD0D00ED689D6CA81("MPArrow", 0);
			
				if (unk_0x38D063D8CF6D1967("MPArrow"))
				{
					num2 = num2 + 0.0095f;
					num2 = num2 - 0.015f;
					num2.f_1 = num2.f_1 + 0.019f;
					num2.f_2 = num2.f_2 + 0.01f;
					num2.f_3 = num2.f_3 + 0.01f;
					num2.f_4 = num2.f_4 + 0;
					num2.f_5 = num2.f_5 + 0;
					num2.f_6 = num2.f_6 + 0;
					num2.f_7 = num2.f_7 - 50;
					num2.f_8 = -90f;
					func_90("MPArrow", "MP_ArrowXLarge", &num2, 1, 0, num5, 0);
					num3 = num3 + 0.0095f;
					num3 = num3 - 0.015f;
					num3.f_1 = num3.f_1 + 0.019f;
					num3.f_2 = num3.f_2 + 0.01f;
					num3.f_3 = num3.f_3 + 0.01f;
					num3.f_4 = num3.f_4 + 0;
					num3.f_5 = num3.f_5 + 0;
					num3.f_6 = num3.f_6 + 0;
					num3.f_7 = num3.f_7 - 50;
					num3.f_8 = 90f;
					func_90("MPArrow", "MP_ArrowXLarge", &num3, 1, 0, num5, 0);
				}
			}
		
			if (bParam30)
			{
				num6 = func_72() + func_71(iParam6);
				num7 = func_70();
			
				if (func_123())
					num8 = num7 - 0.061f;
				else
					num8 = num7 - 0.0365f;
			
				num8.f_1 = num6 + 0.057f;
				num8.f_2 = num4.f_2 - 0.004f;
				num8.f_3 = 0.01f;
				num8.f_4 = 255;
				num8.f_5 = 255;
				num8.f_6 = 255;
				num8.f_7 = 255;
				func_98(&num8, iParam31);
				func_90("TimerBars", "DamagebarFill_128", &num8, 0, 0, num5, 0);
			}
		
			if (bParam18)
			{
				unk_0xD0D00ED689D6CA81("CommonMenu", 0);
			
				if (unk_0x38D063D8CF6D1967("CommonMenu"))
				{
					num9 = 0f;
				
					if (bParam11 == true)
					{
						unk_0x282D5DA1EE14950F("STRING");
						unk_0x60D332F23943B34F(sParam7);
						unk50 = unk_0x43026780D77E3DC0(1);
					}
					else
					{
						unk_0x282D5DA1EE14950F(sParam7);
					
						if (iParam10 != -1)
						{
							unk_0x511D14ED2DA887E1(iParam10);
							unk_0x511D14ED2DA887E1(iParam10);
						}
					
						unk50 = unk_0x43026780D77E3DC0(1);
					}
				
					if (unk_0x8608526719A575EE() == 8 && bParam11 == false)
					{
						num10 = 0.153f - 0.072f;
						num11 = -0.457f;
					}
					else if (unk_0x8608526719A575EE() == 10 && bParam11 == false)
					{
						num10 = 0.153f - 0.01f - 0.06f;
						num11 = -0.457f;
					}
					else if (unk_0x8608526719A575EE() == 9 && bParam11 == false)
					{
						num10 = 0.153f - 0.012f - 0.06f;
						num11 = -0.457f;
					}
					else if (unk_0x8608526719A575EE() == 12 && bParam11 == false)
					{
						num10 = 0.153f - 0.012f - 0.06f;
						num11 = -0.457f;
					}
					else
					{
						num10 = 0.153f - 0.037f - 0.036f;
						num11 = -0.457f + 0.194f;
					}
				
					num10 = num10 + 0.03f;
				
					if (Global_1655612.f_1172)
						num10 = num10 + -0.03f;
				
					if (unk_0x761778199FE1211C() && !unk_0x485ADB2D2728D748())
						num10 = num10 + -0.015f;
				
					if (Global_1655612.f_1173 && Global_1655612.f_1172 == false)
						num10 = num10 + (-0.015f - 0.003f);
				
					num9 = (num11 * unk50) + num10;
					num = num + num9;
					num = num - 0.015f;
					num.f_1 = num.f_1 + 0.008f;
					num.f_2 = num.f_2 + 0.022f;
					num.f_3 = num.f_3 + 0.04f;
					num.f_4 = num.f_4 + 194;
					num.f_5 = num.f_5 + 80;
					num.f_6 = num.f_6 + 80;
					num.f_7 = num.f_7 - 50;
					func_90("CommonMenu", "MP_AlertTriangle", &num, 1, 0, num5, 0);
				}
			}
		
			if (flag)
			{
				if (iParam21 != 0)
				{
					func_69(uParam2);
					num12 = *uParam4 + 0.145f + 0.001f;
				
					if (func_123())
						num12.f_1 = (uParam4->f_1 + 0.016f) - 0.006f;
					else
						num12.f_1 = uParam4->f_1 + 0.016f;
				
					num12.f_2 = 0.016f + 0.003f;
					num12.f_3 = 0.032f + 0.004f;
					num12.f_7 = iParam26;
					func_98(&num12, 1);
					num13 = *uParam4 + 0.145f + 0.001f;
				
					if (func_123())
						num13.f_1 = (uParam4->f_1 + 0.016f) - 0.006f;
					else
						num13.f_1 = uParam4->f_1 + 0.016f;
				
					num13.f_2 = 0.016f + 0.003f;
					num13.f_3 = 0.032f + 0.004f;
					num13.f_7 = 255;
					func_98(&num13, 1);
				
					if (bParam27)
						num12.f_7 = 0;
				
					str = "";
					num15 = 1;
					str3 = "";
					num16 = 1;
				
					switch (iParam21)
					{
						case 5:
							num12.f_3 = num12.f_3 + -0.009f;
							num12.f_2 = num12.f_2 + -0.002f;
						
							if (func_123())
								num12.f_1 = num12.f_1 + 0.0055f;
							else
								num12.f_1 = num12.f_1 + 0.0025f;
						
							str3 = "MPRPSymbol";
							str4 = "RP";
							break;
					
						case 2:
							str3 = "TimerBars";
							str4 = "Rockets";
							break;
					
						case 3:
							str3 = "MpSpecialRace";
							str4 = "HOMING_ROCKET";
							break;
					
						case 1:
							str3 = "TimerBars";
							str4 = "Spikes";
							break;
					
						case 4:
							str3 = "TimerBars";
							str4 = "Boost";
							break;
					
						case 6:
							str3 = "CrossTheLine";
							str4 = "Timer_LargeTick_32";
							num16 = 18;
							break;
					
						case 7:
							str3 = "CrossTheLine";
							str4 = "Timer_LargeCross_32";
							num16 = 6;
							break;
					
						case 8:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Beast";
							num16 = 118;
							break;
					
						case 9:
							str3 = "MPSpecialRace";
							str4 = "MACHINE_GUN";
							break;
					
						case 10:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Random";
							num16 = 118;
							break;
					
						case 11:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Slow_Time";
							break;
					
						case 12:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Swap";
							num16 = 118;
							break;
					
						case 13:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Testosterone";
							num16 = 118;
							break;
					
						case 14:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Thermal";
							num16 = 118;
							break;
					
						case 15:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Weed";
							num16 = 118;
							break;
					
						case 16:
							str3 = "TimerBar_Icons";
							str4 = "Pickup_Hidden";
							num16 = 118;
							break;
					
						case 17:
						case 18:
							if (iParam28 != func_68())
							{
								num14 = func_61(iParam28);
							
								if (num14 != 0)
								{
									str3 = unk_0x008C0EB38E4459EE(num14);
									str4 = unk_0x008C0EB38E4459EE(num14);
								}
							}
						
							if (func_123())
								num12.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
							else
								num12.f_1 = uParam4->f_1 + 0.0185f;
						
							num12.f_2 = 0.016f + 0.004f;
							num12.f_3 = 0.032f + 0.002f;
						
							if (iParam21 == 18)
							{
								if (func_123())
									num13.f_1 = uParam4->f_1 + 0.016f;
								else
									num13.f_1 = uParam4->f_1 + 0.019f;
							
								num13.f_2 = 0.016f + 0.004f;
								num13.f_3 = 0.032f + 0.002f;
								str = "timerbar_sr";
								str2 = "timer_cross";
								num15 = iParam17;
								num12.f_7 = 127;
							}
							break;
					}
				
					if (!unk_0xD6F9DEE4765092A9(str3))
					{
						unk_0xD0D00ED689D6CA81(str3, 0);
					
						if (unk_0x38D063D8CF6D1967(str3))
						{
							func_98(&num12, num16);
							func_90(str3, str4, &num12, 1, 0, 4, 0);
						}
					}
				
					if (iParam21 == 18)
					{
						if (!unk_0xD6F9DEE4765092A9(str))
						{
							unk_0xD0D00ED689D6CA81(str, 0);
						
							if (unk_0x38D063D8CF6D1967(str))
							{
								func_98(&num13, num15);
								func_90(str, str2, &num13, 1, 0, 4, 0);
							}
						}
					}
				}
			
				func_81(uParam2, false);
				num5 = func_101();
				unk_0xA4F67CEB594AE064(num5);
			
				if (iParam21 == 0 || iParam21 == 5 || iParam21 == 9)
				{
					unk67 = { *uParam1 };
					func_114(&unk67);
				
					if (bParam20)
					{
						func_60(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5)
					{
						if (bParam35)
							if (!unk_0xD6F9DEE4765092A9(sParam23))
								func_78(&unk67, uParam3, sParam23, iParam17, iParam8, -1, bParam36, flag2);
						else if (iParam13 == 0)
							func_58(uParam4, uParam2, "HUD_KSMULTI" /*~1~x*/, iParam5, 2);
						else
							func_56(uParam4, uParam2, "HUD_KSMULTI" /*~1~x*/, fParam14, Global_2696265, 2);
					}
					else if (func_55(sParam12))
					{
						if (bParam35)
							if (!unk_0xD6F9DEE4765092A9(sParam23))
								func_78(&unk67, uParam3, sParam23, iParam17, iParam8, -1, bParam36, flag2);
						else if (iParam19 == 0)
							if (iParam13 == 0)
								func_58(uParam4, uParam2, "NUMBER" /*~1~*/, iParam5, 2);
							else
								func_56(uParam4, uParam2, "NUMBER" /*~1~*/, fParam14, Global_2696265, 2);
						else
							func_53(uParam4, uParam2, "TIMER_DASHES" /*~1~/~1~*/, iParam5, iParam19, 2, 0);
					}
					else if (bParam35)
					{
						if (!unk_0xD6F9DEE4765092A9(sParam23))
							func_78(&unk67, uParam3, sParam23, iParam17, iParam8, -1, bParam36, flag2);
					}
					else if (unk_0x1B79E937E91F40C3("HUD_CASH" /*$~1~*/, sParam12) || unk_0x1B79E937E91F40C3("HUD_CASH_S" /*$~a~*/, sParam12))
					{
						sParam12 = "HUD_CASH_S" /*$~a~*/;
						*uParam2 = 5;
						func_81(uParam2, false);
						func_48(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (unk_0x1B79E937E91F40C3("HUD_CASH_NEG" /*-$~1~*/, sParam12) || unk_0x1B79E937E91F40C3("HUD_CASH_NEG_S" /*-$~a~*/, sParam12))
					{
						*uParam2 = 5;
						func_81(uParam2, false);
						sParam12 = "HUD_CASH_NEG_S" /*-$~a~*/;
						func_48(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_58(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_56(uParam4, uParam2, sParam12, fParam14, Global_2696265, 2);
					}
				}
			}
		
			func_47();
		}
	}

	return;
}

void func_47() // Position - 0x61B0
{
	unk_0xA4F67CEB594AE064(4);
	return;
}

void func_48(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x61BD
{
	char* str;

	str = sParam2;

	if (!func_55(str))
	{
		if (func_51())
		{
			func_81(uParam1, false);
			unk_0x2873B596E322DCDA(iParam4);
			unk_0xEAEB6E7D3FAEBD5B(str);
			unk_0x511D14ED2DA887E1(iParam3);
			unk_0xB5DF3215F3864B3F(iParam3, 1);
			unk_0x25DD447A6EB3A86F(func_50(*uParam0), func_49(uParam0->f_1), 0);
		}
	}

	return;
}

var func_49(var uParam0) // Position - 0x620E
{
	return uParam0;
}

var func_50(var uParam0) // Position - 0x6218
{
	return uParam0;
}

BOOL func_51() // Position - 0x6222
{
	if (func_52())
		return true;

	if (unk_0x15CCE8886267624F())
		return false;

	if (unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69())
		return false;

	if (unk_0x114ABA9988FF784B())
		return false;

	return true;
}

BOOL func_52() // Position - 0x6261
{
	return Global_1574604;
}

void func_53(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x626D
{
	char* str;

	str = sParam2;

	if (!func_55(str))
	{
		if (func_51())
		{
			func_81(uParam1, false);
			unk_0xEAF65721ACB2FDFB(iParam6);
			unk_0x2873B596E322DCDA(iParam5);
			func_54(func_50(*uParam0), func_49(uParam0->f_1), str, iParam3, iParam4);
		}
	}

	return;
}

void func_54(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x62B6
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x511D14ED2DA887E1(iParam4);
	unk_0x25DD447A6EB3A86F(uParam0, uParam1, 0);
	return;
}

BOOL func_55(char* sParam0) // Position - 0x62D9
{
	if (unk_0xFF692AB7350A74D7(sParam0))
		return true;
	else if (unk_0x1B79E937E91F40C3(sParam0, "") || unk_0x1B79E937E91F40C3(sParam0, "0"))
		return true;

	return false;
}

void func_56(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5) // Position - 0x6312
{
	if (!func_55(sParam2))
	{
		if (func_51())
		{
			func_81(uParam1, false);
			unk_0x2873B596E322DCDA(iParam5);
			func_57(func_50(*uParam0), func_49(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}

	return;
}

void func_57(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x6351
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x7DCF91CE9137DE0E(fParam3, iParam4);
	unk_0x25DD447A6EB3A86F(uParam0, uParam1, 0);
	return;
}

void func_58(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x6370
{
	char* str;

	str = sParam2;

	if (!func_55(str))
	{
		if (func_51())
		{
			func_81(uParam1, false);
			unk_0x2873B596E322DCDA(iParam4);
			func_59(func_50(*uParam0), func_49(uParam0->f_1), str, iParam3, 0);
		}
	}

	return;
}

void func_59(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x63B2
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x25DD447A6EB3A86F(uParam0, uParam1, iParam4);
	return;
}

void func_60(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x63D0
{
	char* str;

	if (!func_55(sParam2))
	{
		if (func_51())
		{
			func_81(uParam1, false);
			unk_0x2873B596E322DCDA(iParam5);
		
			if (func_55(sParam3))
				str = "STRING";
			else
				str = sParam3;
		
			unk_0xEAEB6E7D3FAEBD5B(str);
			unk_0x4E5A3D96808F7F84(iParam4);
			unk_0x60D332F23943B34F(sParam2);
			unk_0x25DD447A6EB3A86F(func_50(*uParam0), func_49(uParam0->f_1), 0);
		}
	}

	return;
}

int func_61(int iParam0) // Position - 0x6431
{
	int num;

	num = func_65(iParam0);

	if (num == -1)
	{
		func_62(iParam0, true);
		return 0;
	}

	Global_1666485[num /*5*/].f_4 = 1;
	return Global_1666485[num /*5*/].f_2;
}

void func_62(int iParam0, BOOL bParam1) // Position - 0x6467
{
	if (!func_64(iParam0, false, true))
		return;

	if (func_65(iParam0) != -1)
		return;

	if (Global_1666648)
		if (iParam0 == Global_1666648.f_1)
			return;

	if (func_63(iParam0))
		return;

	if (Global_1666686 >= 32)
		return;

	Global_1666653[Global_1666686] = iParam0;
	Global_1666686 = Global_1666686 + 1;
	bParam1;
	return;
}

BOOL func_63(int iParam0) // Position - 0x64D3
{
	int i;

	i = 0;

	for (i = 0; i < Global_1666686; i = i + 1)
	{
		if (Global_1666653[i] == iParam0)
			return true;
	}

	return false;
}

BOOL func_64(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6505
{
	int num;

	num = iParam0;

	if (num != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
				if (!unk_0x75EAB09F5E974116(iParam0))
					return false;
		
			if (bParam2)
				if (num == Global_2672524.f_3)
					return Global_2672524.f_2;
				else if (Global_2657704[num /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

int func_65(int iParam0) // Position - 0x6565
{
	int i;

	if (!func_64(iParam0, false, true))
		return -1;

	if (Global_1666646 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1666646; i = i + 1)
	{
		if (Global_1666485[i /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1666485[i /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1666485[i /*5*/].f_2))
				return i;
		
			func_66(i);
			return -1;
		}
	}

	return -1;
}

void func_66(int iParam0) // Position - 0x65E4
{
	var unk;
	var unk17;
	int num;
	int i;

	if (iParam0 >= Global_1666646)
		return;

	if (unk_0xCF3FA9D6B87D2277(Global_1666485[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	
		if (Global_1666485[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x008C0EB38E4459EE(Global_1666485[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&unk17, &unk17, &unk, &unk);
		}
	
		unk_0x697995B2B26B6CD4(Global_1666485[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1666646; i = i + 1)
	{
		Global_1666485[num /*5*/] = { Global_1666485[i /*5*/] };
		num = num + 1;
	}

	func_67(&Global_1666485[num /*5*/]);
	Global_1666646 = Global_1666646 - 1;
	return;
}

void func_67(var uParam0) // Position - 0x669A
{
	*uParam0 = 0;
	uParam0->f_1 = func_68();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

int func_68() // Position - 0x66C7
{
	return -1;
}

void func_69(var uParam0) // Position - 0x66D0
{
	uParam0->f_9 = ((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f - 0.002f - 0.001f;
	return;
}

float func_70() // Position - 0x670B
{
	float num;

	num = ((0.919f - 0.081f) + 0.028f + 0.05f) - 0.001f - 0.002f;
	return num;
}

float func_71(int iParam0) // Position - 0x673A
{
	switch (iParam0)
	{
		case 1:
			return Global_1655612.f_1161;
	
		case 2:
			return Global_1655612.f_1162;
	}

	return Global_1655612.f_1161;
}

float func_72() // Position - 0x6776
{
	float num;

	num = ((0.013f - 0.002f) + 0.001f + 0.001f) - 0.001f;
	return num;
}

void func_73(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Position - 0x679F
{
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	int value7;
	int value8;
	int value9;
	float num;

	value9 = func_75(&uParam4, false, false);

	if (iParam3 / 2 > value9)
	{
		num = SYSTEM::TO_FLOAT(value9 / 2) / SYSTEM::TO_FLOAT(iParam3 / 2);
		unk_0xA306E6FD2A6558E6(iParam1, &value, &value2, &value3, &value4);
		unk_0xA306E6FD2A6558E6(uParam2, &value5, &value6, &value7, &value8);
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value9) / SYSTEM::TO_FLOAT(iParam3);
		unk_0xA306E6FD2A6558E6(uParam2, &value, &value2, &value3, &value4);
		unk_0xA306E6FD2A6558E6(iParam1, &value5, &value6, &value7, &value8);
	}

	uParam0->f_3 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(value5), num));
	uParam0->f_4 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value2), SYSTEM::TO_FLOAT(value6), num));
	uParam0->f_5 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value3), SYSTEM::TO_FLOAT(value7), num));
	uParam0->f_6 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value4), SYSTEM::TO_FLOAT(value8), num));
	return;
}

float func_74(float fParam0, float fParam1, float fParam2) // Position - 0x687F
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

int func_75(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6894
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		if (!bParam2)
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		else
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);

	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

void func_76(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x68DB
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
			if (!bParam2)
				*uParam0 = unk_0x7E3F74F641EE6B27();
			else
				*uParam0 = unk_0x0728E77B2BF91D54();
		else
			*uParam0 = unk_0x1DD05E817C89C737();
	
		uParam0->f_1 = 1;
	}

	return;
}

BOOL func_77(var uParam0) // Position - 0x6920
{
	return uParam0->f_1;
}

void func_78(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x692C
{
	if (bParam6 == true)
	{
		if (bParam7)
			func_60(uParam1, uParam0, sParam2, "", iParam3, 2);
		else
			func_60(uParam1, uParam0, sParam2, "", iParam4, 2);
	}
	else if (iParam5 == -1)
	{
		func_79(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = uParam1->f_1 + (-0.003f - 0.001f);
		func_58(uParam1, uParam0, sParam2, iParam5, 2);
	}

	return;
}

void func_79(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x699B
{
	char* str;

	str = sParam2;

	if (!func_55(str))
	{
		if (func_51())
		{
			func_81(uParam1, false);
			unk_0x16EC7160BEBE7A6F(iParam4);
			unk_0xEAF65721ACB2FDFB(iParam3);
			func_80(func_50(*uParam0), func_49(uParam0->f_1), str, 0);
		}
	}

	return;
}

void func_80(var uParam0, var uParam1, char* sParam2, int iParam3) // Position - 0x69E1
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x25DD447A6EB3A86F(uParam0, uParam1, iParam3);
	return;
}

void func_81(var uParam0, BOOL bParam1) // Position - 0x69F9
{
	unk_0x8413CD3BCEEAD8DC(*uParam0);

	if (!(uParam0->f_8 == 0f) || !(uParam0->f_9 == 0f))
		unk_0xE05EB1EAE7CCDC59(uParam0->f_8, uParam0->f_9);

	unk_0xBFE94E91C83D8794(uParam0->f_1, uParam0->f_2);
	unk_0x5A18938160AE52D0(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);

	switch (uParam0->f_7)
	{
		case 0:
			break;
	
		case 1:
			unk_0xF18BC069A9C882EC();
			unk_0x2B50C29142312934();
			break;
	
		case 3:
			unk_0x2B50C29142312934();
			break;
	
		case 2:
			unk_0xF18BC069A9C882EC();
			break;
	}

	if (bParam1)
		unk_0xA4F67CEB594AE064(4);

	return;
}

void func_82(var uParam0, int iParam1) // Position - 0x6A92
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	unk_0xA306E6FD2A6558E6(iParam1, &unk, &unk2, &unk3, &unk4);
	uParam0->f_3 = unk;
	uParam0->f_4 = unk2;
	uParam0->f_5 = unk3;
	return;
}

void func_83(var uParam0, int iParam1) // Position - 0x6ABA
{
	float num;
	var unk8;
	var unk9;
	var unk10;
	var unk11;

	if (iParam1 == 0)
		return;

	num = 0.951f;
	num.f_1 = uParam0->f_1;
	num.f_2 = 0.002f;
	num.f_3 = uParam0->f_3;
	unk_0xA306E6FD2A6558E6(iParam1, &unk8, &unk9, &unk10, &unk11);
	num.f_4 = unk8;
	num.f_5 = unk9;
	num.f_6 = unk10;
	num.f_7 = unk11;
	func_84(num, 0, 0);
	return;
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9) // Position - 0x6B1C
{
	var unk;

	unk = { uParam0 };

	switch (iParam8)
	{
		case 2:
			func_88(&unk);
			break;
	
		case 1:
			func_87(&unk);
			break;
	
		case 3:
			func_86(&unk);
			break;
	
		case 4:
			func_85(&unk);
			break;
	}

	if (func_51())
		if (iParam9 == 1)
			unk_0x81645EE95A114FAE(func_50(unk), func_49(unk.f_1), unk.f_2, unk.f_3, unk.f_4, unk.f_5, unk.f_6, unk.f_7, 0);
		else
			unk_0x81645EE95A114FAE(func_50(unk), func_49(unk.f_1), unk.f_2, unk.f_3, unk.f_4, unk.f_5, unk.f_6, unk.f_7, 0);

	return;
}

void func_85(var uParam0) // Position - 0x6BD7
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
	return;
}

void func_86(var uParam0) // Position - 0x6BF7
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
	return;
}

void func_87(var uParam0) // Position - 0x6C17
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
	return;
}

void func_88(var uParam0) // Position - 0x6C40
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
	return;
}

void func_89(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6C5D
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		if (!bParam2)
			*uParam0 = unk_0x7E3F74F641EE6B27();
		else
			*uParam0 = unk_0x0728E77B2BF91D54();
	else
		*uParam0 = unk_0x1DD05E817C89C737();

	uParam0->f_1 = 1;
	return;
}

void func_90(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6C9A
{
	var unk;

	unk = { *uParam2 };

	switch (iParam4)
	{
		case 0:
			func_97(&unk);
			break;
	
		case 1:
			func_96(&unk);
			break;
	
		case 5:
			func_95(&unk);
			break;
	
		case 6:
			func_94(&unk);
			break;
	
		case 7:
			func_93(&unk);
			break;
	
		case 8:
			func_92(&unk);
			break;
	
		case 9:
			func_91(&unk);
			break;
	}

	if (func_51())
	{
		unk_0xA4F67CEB594AE064(iParam5);
	
		if (iParam3 == 1)
			unk_0xFFA2B456A81EA1EB(sParam0, sParam1, func_50(unk), func_49(unk.f_1), unk.f_2, unk.f_3, unk.f_8, unk.f_4, unk.f_5, unk.f_6, unk.f_7, iParam6, 0);
		else
			unk_0xFFA2B456A81EA1EB(sParam0, sParam1, func_50(unk), func_49(unk.f_1), unk.f_2, unk.f_3, unk.f_8, unk.f_4, unk.f_5, unk.f_6, unk.f_7, iParam6, 0);
	
		unk_0xA4F67CEB594AE064(4);
	}

	return;
}

void func_91(var uParam0) // Position - 0x6DA1
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
	return;
}

void func_92(var uParam0) // Position - 0x6DBB
{
	uParam0->f_7 = 2;
	return;
}

void func_93(var uParam0) // Position - 0x6DC8
{
	uParam0->f_7 = 5;
	return;
}

void func_94(var uParam0) // Position - 0x6DD5
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
	return;
}

void func_95(var uParam0) // Position - 0x6DF2
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
	return;
}

void func_96(var uParam0) // Position - 0x6E0F
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
	return;
}

void func_97(var uParam0) // Position - 0x6E38
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
	return;
}

void func_98(var uParam0, int iParam1) // Position - 0x6E60
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	unk_0xA306E6FD2A6558E6(iParam1, &unk, &unk2, &unk3, &unk4);
	uParam0->f_4 = unk;
	uParam0->f_5 = unk2;
	uParam0->f_6 = unk3;
	return;
}

BOOL func_99(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x6E88
{
	if (iParam2 == -1)
		return true;

	if (unk_0x76CD105BCAC6EB9F() && !bParam3)
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uParam0)) >= iParam2)
			return true;
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), uParam0)) >= iParam2)
		return true;

	return false;
}

BOOL func_100(int iParam0, var uParam1, var uParam2) // Position - 0x6EDB
{
	if (func_252(uParam1, iParam0, false))
		return true;

	if (!func_77(uParam2))
	{
		func_76(uParam2, false, false);
	}
	else if (func_252(uParam2, 300, false))
	{
		if (func_252(uParam2, 800, false))
		{
			func_17(uParam2);
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

int func_101() // Position - 0x6F3B
{
	int num;

	num = 1;

	if (Global_1655612.f_1171)
		num = 7;

	return num;
}

void func_102(int iParam0) // Position - 0x6F55
{
	func_17(&Global_1655612.f_590[iParam0 /*2*/]);
	func_17(&Global_1655612.f_611[iParam0 /*2*/]);
	return;
}

void func_103(int iParam0) // Position - 0x6F7B
{
	func_17(&Global_1655612.f_86[iParam0 /*2*/]);
	func_17(&Global_1655612.f_107[iParam0 /*2*/]);
	return;
}

void func_104(var uParam0, int iParam1) // Position - 0x6F9F
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	unk_0xA306E6FD2A6558E6(iParam1, &unk, &unk2, &unk3, &unk4);
	uParam0->f_3 = unk;
	uParam0->f_4 = unk2;
	uParam0->f_5 = unk3;
	uParam0->f_6 = unk4;
	return;
}

void func_105(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) // Position - 0x6FCD
{
	float num;

	num = func_109(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_71(iParam3);
	uParam1->f_1 = uParam1->f_1 + func_108(uParam4);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_107(uParam0);
	func_106(iParam3, -num);
	return;
}

void func_106(int iParam0, float fParam1) // Position - 0x701E
{
	switch (iParam0)
	{
		case 1:
			Global_1655612.f_1161 = Global_1655612.f_1161 + fParam1;
			break;
	
		case 2:
			Global_1655612.f_1162 = Global_1655612.f_1162 + fParam1;
			break;
	}

	return;
}

float func_107(var uParam0) // Position - 0x7061
{
	float num;

	switch (uParam0->f_10)
	{
		case 9:
			num = (((-0.01f - 0.005f) + 0.004f) - 0.0005f - 0.002f) + 0.002f + 0.0005f;
			break;
	
		case 10:
			num = (((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f;
			break;
	
		case 11:
			num = (-0.047f - 0.004f) + 0.012f + 0.001f + 0.007f;
			break;
	
		case 12:
			num = -0.019f + 0.011f + 0.004f;
			break;
	
		case 13:
			num = -0.012f + 0.001f;
			break;
	
		case 14:
			num = -0.012f + 0.001f + 0.001f;
			break;
	
		case 15:
			num = (-0.035f - 0.008f) + 0.006f + 0.013f + 0.0005f;
			break;
	
		case 16:
			num = (((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f;
			break;
	
		case 17:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f + 0.0007f;
			break;
	
		case 18:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f + 0.003f;
			break;
	
		case 6:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f;
			break;
	
		case 19:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f;
			break;
	}

	if (func_123())
		num = num + 0.003f;

	return num;
}

float func_108(var uParam0) // Position - 0x723B
{
	float num;

	switch (uParam0->f_10)
	{
		case 6:
			num = 0f;
			break;
	}

	return num;
}

float func_109(var uParam0) // Position - 0x725A
{
	float num;

	switch (uParam0->f_10)
	{
		case 9:
			num = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f) + 0.001f + 0.0018f + 0.0005f) - 0.0005f;
			break;
	
		case 10:
			num = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f + 0.002f) - 0.004f;
			break;
	
		case 11:
			num = (((0.065f + 0.009f) - 0.006f - 0.009f) + 0.001f) - 0.009f;
			break;
	
		case 12:
			num = 0f;
			break;
	
		case 13:
			num = 0.065f + 0.009f;
			break;
	
		case 14:
			num = (0.065f + 0.009f) - 0.015f - 0.022f;
			break;
	
		case 15:
			num = 0f;
			break;
	
		case 16:
			num = ((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f) + 0.001f + 0.002f + 0.0003f;
			break;
	
		case 17:
			num = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f - 0.0005f;
			break;
	
		case 18:
			num = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f;
			break;
	
		case 19:
			num = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f;
			break;
	}

	return num;
}

void func_110(int iParam0) // Position - 0x743B
{
	switch (iParam0)
	{
		case 1:
			Global_1655612.f_1161 = func_32();
			break;
	
		case 2:
			Global_1655612.f_1162 = func_32();
			break;
	}

	return;
}

void func_111(int iParam0, int iParam1) // Position - 0x7472
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1655612.f_7041[iParam0], iParam1);
	return;
}

float func_112() // Position - 0x748B
{
	float num;
	int value;
	int value2;
	float num2;

	num = unk_0x4AE9635532D92447(0);
	unk_0x21564F65F997D833(&value, &value2);
	num2 = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(value2);
	num = func_113(num, num2);

	if (num2 > 3.5f && num > 1.7f)
		return 1.4f;

	if (num > 1.7f)
		return 1f;
	else if (num > 1.5f)
		return 1.2f;
	else if (num > 1.3f)
		return 1.3f;

	return 1.4f;
}

float func_113(float fParam0, float fParam1) // Position - 0x751B
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

void func_114(var uParam0) // Position - 0x7532
{
	float num;

	num = (((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f) + 0.001f;
	uParam0->f_9 = num;

	if (Global_1655612.f_1165 == 0)
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

	if (Global_1655612.f_1165 == 1)
	{
		uParam0->f_9 = num;
		uParam0->f_9 = uParam0->f_9 + -0.113f;
	}

	return;
}

void func_115(var uParam0) // Position - 0x75C9
{
	float num;

	num = (0.88f - 0.062f) + 0.026f + 0.027f + 0.03f;

	if (Global_1655612.f_1172)
	{
		num = num + -0.034f;
	
		if (unk_0x485ADB2D2728D748() == 0)
			num = num + -0.02f;
	}

	if (Global_1655612.f_1173 && Global_1655612.f_1172 == false)
	{
		num = num + (-0.015f - 0.003f);
	
		if (unk_0x485ADB2D2728D748() == 0)
			num = num + -0.017f;
	}

	if (Global_1655612.f_1174 && Global_1655612.f_1173 == false && Global_1655612.f_1172 == false)
		num = num + -0.038f;

	if (Global_1655612.f_1165 == 1)
		num = num + -0.113f;

	if (unk_0x8608526719A575EE() == 7 && unk_0x8608526719A575EE() == 1 && !unk_0x485ADB2D2728D748() && Global_1655612.f_1174)
		num = num + -0.007f;

	if (Global_1655612.f_1175)
		if (unk_0x8608526719A575EE() != 0 && unk_0x8608526719A575EE() != 5 && unk_0x8608526719A575EE() != 6 && unk_0x8608526719A575EE() != 9 && unk_0x8608526719A575EE() != 11 && unk_0x8608526719A575EE() != 12)
			num = num + -0.009f;
		else
			num = num + -0.009f;

	if (Global_1655612.f_1176)
		if (func_116())
			num = num + -0.03f;
		else if (unk_0x8608526719A575EE() != 0 && unk_0x8608526719A575EE() != 5 && unk_0x8608526719A575EE() != 6 && unk_0x8608526719A575EE() != 9 && unk_0x8608526719A575EE() != 11 && unk_0x8608526719A575EE() != 12)
			num = num + -0.024f;
		else
			num = num + -0.019f;

	if (unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 7 || unk_0x8608526719A575EE() == 1 && Global_1655612.f_1173 == false && Global_1655612.f_1172 == false && Global_1655612.f_1165 == 0 && Global_1655612.f_1174 == false && Global_1655612.f_1175 == false && Global_1655612.f_1176 == false && unk_0x761778199FE1211C())
		num = num + -0.005f;

	uParam0->f_9 = num;
	return;
}

BOOL func_116() // Position - 0x7834
{
	int num;
	var unk;

	if (unk_0x761778199FE1211C())
	{
		unk_0x21564F65F997D833(&num, &unk);
	
		if (num <= 1024)
			return true;
	}

	return false;
}

void func_117(var uParam0, int iParam1, int iParam2) // Position - 0x7858
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
	return;
}

void func_118(var uParam0, int iParam1, int iParam2) // Position - 0x78BD
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
	return;
}

void func_119(var uParam0, int iParam1, int iParam2) // Position - 0x7934
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
	return;
}

void func_120(var uParam0, int iParam1) // Position - 0x79B1
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
	return;
}

void func_121(var uParam0, int iParam1) // Position - 0x79FD
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
	return;
}

void func_122(var uParam0, int iParam1) // Position - 0x7A4E
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
	return;
}

BOOL func_123() // Position - 0x7AA0
{
	if (unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10 || unk_0x8608526719A575EE() == 12)
		return true;

	return false;
}

void func_124(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x7ADE
{
	*uParam0 = fParam1;
	uParam0->f_1 = fParam2 + iParam9;
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
	return;
}

BOOL func_125() // Position - 0x7B18
{
	return true;
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, int iParam20) // Position - 0x7B21
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(13, iParam0))
		func_127(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, bParam14, bParam15, bParam16, bParam17, bParam18, bParam19, iParam20);

	return;
}

void func_127(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24, int iParam25) // Position - 0x7B6B
{
	float num;
	BOOL flag;
	int num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;
	float num13;
	float num14;
	var unk105;
	var unk106;
	var unk107;
	var unk108;
	var unk109;
	var unk110;
	var unk111;
	var unk117;
	var unk123;
	var unk129;
	var unk135;
	var unk141;
	var unk147;
	var unk153;
	var unk159;
	var unk165;
	var unk171;
	var unk177;
	var unk183;
	var unk189;
	var unk195;
	var unk201;
	var unk207;
	var unk213;
	var unk219;
	var unk225;
	var unk231;
	var unk237;
	var unk243;
	var unk249;
	int num15;
	int num16;
	int num17;
	int num18;
	int num19;
	int num20;
	int num21;
	int num22;
	int num23;
	int num24;
	int num25;
	int num26;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		func_111(13, iParam0);
		func_120(uParam1, 0);
		func_115(uParam1);
	
		if (Global_1655612 == 1)
			func_110(iParam6);
	
		func_117(uParam2, 0, 0);
		func_114(uParam2);
		func_105(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_124(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (iParam25 == 0)
			func_130(iParam0);
	
		if (func_100(iParam25, &Global_1655612.f_464[iParam0 /*2*/], &Global_1655612.f_485[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			num2 = func_101();
			unk_0xA4F67CEB594AE064(num2);
			num = *uParam3;
			num.f_1 = uParam3->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_123())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
			func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, 0);
			func_81(uParam1, false);
			num3 = *uParam4 + 0.145f + 0.001f;
			num4 = *uParam4 + 0.145f + 0.001f;
			num5 = *uParam4 + 0.123f;
			num6 = *uParam4 + 0.123f;
			num7 = *uParam4 + 0.101f;
			num8 = *uParam4 + 0.101f;
			num9 = *uParam4 + 0.078f;
			num10 = *uParam4 + 0.078f;
			num11 = *uParam4 + 0.056f;
			num12 = *uParam4 + 0.056f;
			num13 = *uParam4 + 0.034f;
			num14 = *uParam4 + 0.034f;
		
			if (func_123())
			{
				num3.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num4.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num5.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num6.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num7.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num8.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num9.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num10.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num11.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num12.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num13.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num14.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
			}
			else
			{
				num3.f_1 = uParam4->f_1 + 0.0185f;
				num4.f_1 = uParam4->f_1 + 0.019f;
				num5.f_1 = uParam4->f_1 + 0.0185f;
				num6.f_1 = uParam4->f_1 + 0.019f;
				num7.f_1 = uParam4->f_1 + 0.0185f;
				num8.f_1 = uParam4->f_1 + 0.019f;
				num9.f_1 = uParam4->f_1 + 0.0185f;
				num10.f_1 = uParam4->f_1 + 0.019f;
				num11.f_1 = uParam4->f_1 + 0.0185f;
				num12.f_1 = uParam4->f_1 + 0.019f;
				num13.f_1 = uParam4->f_1 + 0.0185f;
				num14.f_1 = uParam4->f_1 + 0.019f;
			}
		
			num3.f_2 = 0.016f + 0.003f;
			num4.f_2 = 0.016f + 0.003f;
			num5.f_2 = 0.016f + 0.003f;
			num6.f_2 = 0.016f + 0.003f;
			num7.f_2 = 0.016f + 0.003f;
			num8.f_2 = 0.016f + 0.003f;
			num9.f_2 = 0.016f + 0.003f;
			num10.f_2 = 0.016f + 0.003f;
			num11.f_2 = 0.016f + 0.003f;
			num12.f_2 = 0.016f + 0.003f;
			num13.f_2 = 0.016f + 0.003f;
			num14.f_2 = 0.016f + 0.003f;
			num3.f_3 = 0.032f + 0.004f;
			num4.f_3 = 0.032f + 0.004f;
			num5.f_3 = 0.032f + 0.004f;
			num6.f_3 = 0.032f + 0.004f;
			num7.f_3 = 0.032f + 0.004f;
			num8.f_3 = 0.032f + 0.004f;
			num9.f_3 = 0.032f + 0.004f;
			num10.f_3 = 0.032f + 0.004f;
			num11.f_3 = 0.032f + 0.004f;
			num12.f_3 = 0.032f + 0.004f;
			num13.f_3 = 0.032f + 0.004f;
			num14.f_3 = 0.032f + 0.004f;
			num3.f_7 = 255;
			num4.f_7 = 255;
			num5.f_7 = 255;
			num6.f_7 = 255;
			num7.f_7 = 255;
			num8.f_7 = 255;
			num9.f_7 = 255;
			num10.f_7 = 255;
			num11.f_7 = 255;
			num12.f_7 = 255;
			num13.f_7 = 255;
			num14.f_7 = 255;
			func_98(&num3, 1);
			func_98(&num4, 1);
			func_98(&num5, 1);
			func_98(&num6, 1);
			func_98(&num7, 1);
			func_98(&num8, 1);
			func_98(&num9, 1);
			func_98(&num10, 1);
			func_98(&num11, 1);
			func_98(&num12, 1);
			func_98(&num13, 1);
			func_98(&num14, 1);
			TEXT_LABEL_ASSIGN_STRING(&unk111, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk117, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk123, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk129, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk135, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk141, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk147, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk153, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk159, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk165, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk171, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk177, "", 24);
			num15 = 1;
			num16 = 1;
			num17 = 1;
			num18 = 1;
			num19 = 1;
			num20 = 1;
			num21 = 1;
			num22 = 1;
			num23 = 1;
			num24 = 1;
			num25 = 1;
			num26 = 1;
			func_129(&iParam13, &num3, &unk111, &unk183, &num15, &iParam7, &unk105, &num4, &unk117, &unk189, &num16, iParam5, 0);
			func_129(&iParam14, &num5, &unk123, &unk195, &num17, &iParam8, &unk106, &num6, &unk129, &unk201, &num18, iParam5, 0);
			func_129(&iParam15, &num7, &unk135, &unk207, &num19, &iParam9, &unk107, &num8, &unk141, &unk213, &num20, iParam5, 0);
			func_129(&iParam16, &num9, &unk147, &unk219, &num21, &iParam10, &unk108, &num10, &unk153, &unk225, &num22, iParam5, 0);
			func_129(&iParam17, &num11, &unk159, &unk231, &num23, &iParam11, &unk109, &num12, &unk165, &unk237, &num24, iParam5, 0);
			func_129(&iParam18, &num13, &unk171, &unk243, &num25, &iParam12, &unk110, &num14, &unk177, &unk249, &num26, iParam5, 0);
		
			if (bParam19)
				if (flag)
					func_128(iParam13, &num3, &num4, &unk111, &unk183, num15, &unk117, &unk189, num16);
			else
				func_128(iParam13, &num3, &num4, &unk111, &unk183, num15, &unk117, &unk189, num16);
		
			if (bParam20)
				if (flag)
					func_128(iParam14, &num5, &num6, &unk123, &unk195, num17, &unk129, &unk201, num18);
			else
				func_128(iParam14, &num5, &num6, &unk123, &unk195, num17, &unk129, &unk201, num18);
		
			if (bParam21)
				if (flag)
					func_128(iParam15, &num7, &num8, &unk135, &unk207, num19, &unk141, &unk213, num20);
			else
				func_128(iParam15, &num7, &num8, &unk135, &unk207, num19, &unk141, &unk213, num20);
		
			if (bParam22)
				if (flag)
					func_128(iParam16, &num9, &num10, &unk147, &unk219, num21, &unk153, &unk225, num22);
			else
				func_128(iParam16, &num9, &num10, &unk147, &unk219, num21, &unk153, &unk225, num22);
		
			if (bParam23)
				if (flag)
					func_128(iParam17, &num11, &num12, &unk159, &unk231, num23, &unk165, &unk237, num24);
			else
				func_128(iParam17, &num11, &num12, &unk159, &unk231, num23, &unk165, &unk237, num24);
		
			if (bParam24)
				if (flag)
					func_128(iParam18, &num13, &num14, &unk171, &unk243, num25, &unk177, &unk249, num26);
			else
				func_128(iParam18, &num13, &num14, &unk171, &unk243, num25, &unk177, &unk249, num26);
		}
	
		func_47();
	}

	return;
}

void func_128(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8) // Position - 0x83B6
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		unk_0xD0D00ED689D6CA81(sParam3, 0);
	
		if (unk_0x38D063D8CF6D1967(sParam3))
		{
			func_98(uParam1, iParam5);
			func_90(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}

	if (iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		unk_0xA306E6FD2A6558E6(2, &unk, &unk2, &unk3, &unk4);
		unk_0x81645EE95A114FAE(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, unk, unk2, unk3, 153, 0);
	}

	if (iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 || iParam0 == 24 || iParam0 == 25 || iParam0 == 26 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam6))
		{
			unk_0xD0D00ED689D6CA81(sParam6, 0);
		
			if (unk_0x38D063D8CF6D1967(sParam6))
			{
				func_98(uParam2, iParam8);
				func_90(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}

	return;
}

void func_129(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, var uParam10, int iParam11, int iParam12) // Position - 0x852E
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = uParam1->f_3 + -0.009f;
			uParam1->f_2 = uParam1->f_2 + -0.002f;
		
			if (func_123())
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
			if (*uParam5 != func_68())
			{
				*uParam6 = func_61(*uParam5);
			
				if (*uParam6 != 0)
				{
					TEXT_LABEL_ASSIGN_STRING(sParam2, unk_0x008C0EB38E4459EE(*uParam6), 24);
					TEXT_LABEL_ASSIGN_STRING(sParam3, unk_0x008C0EB38E4459EE(*uParam6), 24);
				}
			}
		
			uParam1->f_2 = 0.016f + 0.004f;
			uParam1->f_3 = 0.034f;
		
			if (*uParam0 == 18)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_cross", 24);
				*uParam10 = iParam11;
			}
		
			if (*uParam0 == 19)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_tick", 24);
				*uParam10 = iParam11;
			}
		
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_0", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_1", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_2", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_3", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_4", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_5", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 26)
				*uParam10 = iParam11;
		
			if (*uParam0 == 20 || *uParam0 == 21 || *uParam0 == 22 || *uParam0 == 23 || *uParam0 == 24 || *uParam0 == 25 || *uParam0 == 26)
				uParam1->f_7 = 127;
			break;
	
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}

	return;
}

void func_130(int iParam0) // Position - 0x8982
{
	func_17(&Global_1655612.f_464[iParam0 /*2*/]);
	func_17(&Global_1655612.f_485[iParam0 /*2*/]);
	return;
}

void func_131(int iParam0, int iParam1, float fParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, BOOL bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, BOOL bParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31) // Position - 0x89A8
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(12, iParam0))
		func_132(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, iParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, iParam29, iParam30, iParam31);

	return;
}

void func_132(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, BOOL bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, BOOL bParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36) // Position - 0x8A08
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;
	float num13;
	float num14;
	float num15;
	float num16;
	var unk129;
	var unk130;
	var unk131;
	var unk132;
	var unk133;
	var unk134;
	var unk140;
	var unk146;
	var unk152;
	var unk158;
	var unk164;
	var unk170;
	var unk176;
	var unk182;
	var unk188;
	var unk194;
	var unk200;
	var unk206;
	var unk212;
	var unk218;
	var unk224;
	var unk230;
	var unk236;
	var unk242;
	var unk248;
	var unk254;
	var unk260;
	var unk266;
	var unk272;
	var unk278;
	var unk284;
	var unk290;
	var unk296;
	var unk302;
	var unk308;
	int num17;
	int num18;
	int num19;
	int num20;
	int num21;
	int num22;
	int num23;
	int num24;
	int num25;
	int num26;
	int num27;
	int num28;
	int num29;
	int num30;
	int num31;
	int num32;
	BOOL flag;
	BOOL flag2;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		func_124(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_120(uParam1, 3);
	
		if (iParam5 < 1000000)
			if (unk_0x8608526719A575EE() == 8 && fParam6 >= 100f && unk_0x1B79E937E91F40C3("AMCH_KMHN" /*~1~km/h*/, sParam7))
				func_119(uParam2, 0, 0);
			else if (unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12 && iParam5 > 999 || iParam9 > 999 || fParam6 > 1000f)
				func_119(uParam2, 0, 0);
			else if (iParam9 > 99)
				func_118(uParam2, 0, 0);
			else
				func_117(uParam2, 0, 0);
		else if (unk_0x8608526719A575EE() == 8 && unk_0x1B79E937E91F40C3("HUD_CASH" /*$~1~*/, sParam7) || unk_0x1B79E937E91F40C3("HUD_CASH_NEG" /*-$~1~*/, sParam7))
			func_119(uParam2, 0, 0);
		else
			func_118(uParam2, 0, 0);
	
		func_115(uParam1);
		func_114(uParam2);
		func_111(12, iParam0);
	
		if (Global_1655612 == 1)
			func_110(iParam12);
	
		func_105(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_104(uParam2, iParam11);
		uParam2->f_6 = 255;
		num2 = *uParam4 + 0.095f;
		num3 = *uParam4 + 0.095f;
		num4 = *uParam4 + 0.095f;
		num5 = *uParam4 + 0.072f;
		num6 = *uParam4 + 0.072f;
		num7 = *uParam4 + 0.072f;
		num8 = *uParam4 + 0.049f;
		num9 = *uParam4 + 0.049f;
		num10 = *uParam4 + 0.049f;
		num11 = *uParam4 + 0.026f;
		num12 = *uParam4 + 0.026f;
		num13 = *uParam4 + 0.026f;
		num14 = *uParam4 + 0.003f;
		num15 = *uParam4 + 0.003f;
		num16 = *uParam4 + 0.003f;
	
		if (func_123())
		{
			num2.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num3.f_1 = uParam4->f_1 + 0.016f;
			num4.f_1 = uParam4->f_1 + 0.016f;
			num5.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num6.f_1 = uParam4->f_1 + 0.016f;
			num7.f_1 = uParam4->f_1 + 0.016f;
			num8.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num9.f_1 = uParam4->f_1 + 0.016f;
			num10.f_1 = uParam4->f_1 + 0.016f;
			num11.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num12.f_1 = uParam4->f_1 + 0.016f;
			num13.f_1 = uParam4->f_1 + 0.016f;
			num14.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num15.f_1 = uParam4->f_1 + 0.016f;
			num16.f_1 = uParam4->f_1 + 0.016f;
		}
		else
		{
			num2.f_1 = uParam4->f_1 + 0.0185f;
			num3.f_1 = uParam4->f_1 + 0.019f;
			num4.f_1 = uParam4->f_1 + 0.019f;
			num5.f_1 = uParam4->f_1 + 0.0185f;
			num6.f_1 = uParam4->f_1 + 0.019f;
			num7.f_1 = uParam4->f_1 + 0.019f;
			num8.f_1 = uParam4->f_1 + 0.0185f;
			num9.f_1 = uParam4->f_1 + 0.019f;
			num10.f_1 = uParam4->f_1 + 0.019f;
			num11.f_1 = uParam4->f_1 + 0.0185f;
			num12.f_1 = uParam4->f_1 + 0.019f;
			num13.f_1 = uParam4->f_1 + 0.019f;
			num14.f_1 = uParam4->f_1 + 0.0185f;
			num15.f_1 = uParam4->f_1 + 0.019f;
			num16.f_1 = uParam4->f_1 + 0.019f;
		}
	
		num2.f_2 = 0.016f + 0.003f;
		num3.f_2 = 0.016f + 0.003f;
		num4.f_2 = 0.016f + 0.003f;
		num5.f_2 = 0.016f + 0.003f;
		num6.f_2 = 0.016f + 0.003f;
		num7.f_2 = 0.016f + 0.003f;
		num8.f_2 = 0.016f + 0.003f;
		num9.f_2 = 0.016f + 0.003f;
		num10.f_2 = 0.016f + 0.003f;
		num11.f_2 = 0.016f + 0.003f;
		num12.f_2 = 0.016f + 0.003f;
		num13.f_2 = 0.016f + 0.003f;
		num14.f_2 = 0.016f + 0.003f;
		num15.f_2 = 0.016f + 0.003f;
		num16.f_2 = 0.016f + 0.003f;
		num2.f_3 = 0.032f + 0.004f;
		num3.f_3 = 0.032f + 0.004f;
		num4.f_3 = 0.032f + 0.004f;
		num5.f_3 = 0.032f + 0.004f;
		num6.f_3 = 0.032f + 0.004f;
		num7.f_3 = 0.032f + 0.004f;
		num8.f_3 = 0.032f + 0.004f;
		num9.f_3 = 0.032f + 0.004f;
		num10.f_3 = 0.032f + 0.004f;
		num11.f_3 = 0.032f + 0.004f;
		num12.f_3 = 0.032f + 0.004f;
		num13.f_3 = 0.032f + 0.004f;
		num14.f_3 = 0.032f + 0.004f;
		num15.f_3 = 0.032f + 0.004f;
		num16.f_3 = 0.032f + 0.004f;
		num2.f_7 = 255;
		num3.f_7 = 255;
		num4.f_7 = 255;
		num5.f_7 = 255;
		num6.f_7 = 255;
		num7.f_7 = 255;
		num8.f_7 = 255;
		num9.f_7 = 255;
		num10.f_7 = 255;
		num11.f_7 = 255;
		num12.f_7 = 255;
		num13.f_7 = 255;
		num14.f_7 = 255;
		num15.f_7 = 255;
		num16.f_7 = 255;
		func_98(&num2, 1);
		func_98(&num3, 1);
		func_98(&num4, 1);
		func_98(&num5, 1);
		func_98(&num6, 1);
		func_98(&num7, 1);
		func_98(&num8, 1);
		func_98(&num9, 1);
		func_98(&num10, 1);
		func_98(&num11, 1);
		func_98(&num12, 1);
		func_98(&num13, 1);
		func_98(&num14, 1);
		func_98(&num15, 1);
		func_98(&num16, 1);
		TEXT_LABEL_ASSIGN_STRING(&unk134, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk140, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk146, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk152, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk158, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk164, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk170, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk176, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk182, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk188, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk194, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk200, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk206, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk212, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk218, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk224, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk230, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk236, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk242, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk248, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk254, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk260, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk266, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk272, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk278, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk284, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk290, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk296, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk302, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk308, "", 24);
		num17 = 1;
		num18 = 1;
		num19 = 1;
		num20 = 1;
		num21 = 1;
		num22 = 1;
		num23 = 1;
		num24 = 1;
		num25 = 1;
		num26 = 1;
		num27 = 1;
		num28 = 1;
		num29 = 1;
		num30 = 1;
		num31 = 1;
		func_129(&iParam18, &num2, &unk134, &unk224, &num17, &iParam13, &unk129, &num3, &unk140, &unk230, &num18, iParam11, iParam25);
		func_129(&iParam19, &num5, &unk152, &unk242, &num20, &iParam14, &unk130, &num6, &unk158, &unk248, &num21, iParam11, iParam26);
		func_129(&iParam20, &num8, &unk170, &unk260, &num23, &iParam15, &unk131, &num9, &unk176, &unk266, &num24, iParam11, iParam27);
		func_129(&iParam21, &num11, &unk188, &unk278, &num26, &iParam16, &unk132, &num12, &unk194, &unk284, &num27, iParam11, iParam28);
		func_129(&iParam22, &num14, &unk206, &unk296, &num29, &iParam17, &unk133, &num15, &unk212, &unk302, &num30, iParam11, iParam29);
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (func_138(&unk134, &unk140, &unk152, &unk158, &unk170, &unk176, &unk188, &unk194, &unk206, &unk212) && unk_0x38D063D8CF6D1967("TimerBars"))
		{
			num32 = func_101();
			unk_0xA4F67CEB594AE064(num32);
			num = *uParam3;
			num.f_1 = uParam3->f_1;
		
			if (iParam5 < 1000000)
			{
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
			}
			else
			{
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.01f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.033f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
			}
		
			if (func_123())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
			func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, 0);
			func_81(uParam1, false);
		
			if (iParam35 == 0)
				func_137(iParam0);
		
			if (func_100(iParam35, &Global_1655612.f_422[iParam0 /*2*/], &Global_1655612.f_443[iParam0 /*2*/]))
				flag = true;
			else
				flag = false;
		
			if (iParam34 && unk_0x26A0105F181C2828())
			{
				if (flag)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
						func_136(iParam18, &num2, &num3, &unk134, &unk224, num17, &unk140, &unk230, num18);
				
					if (iParam33 == iParam14 && iParam36 == 4)
						func_136(iParam19, &num5, &num6, &unk152, &unk242, num20, &unk158, &unk248, num21);
				
					if (iParam33 == iParam15 && iParam36 == 3)
						func_136(iParam20, &num8, &num9, &unk170, &unk260, num23, &unk176, &unk266, num24);
				
					if (iParam33 == iParam16 && iParam36 == 2)
						func_136(iParam21, &num11, &num12, &unk188, &unk278, num26, &unk194, &unk284, num27);
				
					if (iParam33 == iParam17 && iParam36 == 1)
						func_136(iParam22, &num14, &num15, &unk206, &unk296, num29, &unk212, &unk302, num30);
				}
			
				if (iParam33 == iParam13 && iParam36 != 5)
					func_136(iParam18, &num2, &num3, &unk134, &unk224, num17, &unk140, &unk230, num18);
			
				if (iParam33 == iParam14 && iParam36 != 4)
					func_136(iParam19, &num5, &num6, &unk152, &unk242, num20, &unk158, &unk248, num21);
			
				if (iParam33 == iParam15 && iParam36 != 3)
					func_136(iParam20, &num8, &num9, &unk170, &unk260, num23, &unk176, &unk266, num24);
			
				if (iParam33 == iParam16 && iParam36 != 2)
					func_136(iParam21, &num11, &num12, &unk188, &unk278, num26, &unk194, &unk284, num27);
			
				if (iParam33 == iParam17 && iParam36 != 1)
					func_136(iParam22, &num14, &num15, &unk206, &unk296, num29, &unk212, &unk302, num30);
			
				if (iParam33 != iParam13)
					func_136(iParam18, &num2, &num3, &unk134, &unk224, num17, &unk140, &unk230, num18);
			
				if (iParam33 != iParam14)
					func_136(iParam19, &num5, &num6, &unk152, &unk242, num20, &unk158, &unk248, num21);
			
				if (iParam33 != iParam15)
					func_136(iParam20, &num8, &num9, &unk170, &unk260, num23, &unk176, &unk266, num24);
			
				if (iParam33 != iParam16)
					func_136(iParam21, &num11, &num12, &unk188, &unk278, num26, &unk194, &unk284, num27);
			
				if (iParam33 != iParam17)
					func_136(iParam22, &num14, &num15, &unk206, &unk296, num29, &unk212, &unk302, num30);
			}
			else
			{
				func_136(iParam18, &num2, &num3, &unk134, &unk224, num17, &unk140, &unk230, num18);
				func_136(iParam19, &num5, &num6, &unk152, &unk242, num20, &unk158, &unk248, num21);
				func_136(iParam20, &num8, &num9, &unk170, &unk260, num23, &unk176, &unk266, num24);
				func_136(iParam21, &num11, &num12, &unk188, &unk278, num26, &unk194, &unk284, num27);
				func_136(iParam22, &num14, &num15, &unk206, &unk296, num29, &unk212, &unk302, num30);
			}
		
			if (iParam32 == 0)
				func_135(iParam0);
		
			if (func_100(iParam32, &Global_1655612.f_380[iParam0 /*2*/], &Global_1655612.f_401[iParam0 /*2*/]))
				flag2 = true;
			else
				flag2 = false;
		
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_134(&num4, &unk146, &unk236, &num19, &iParam13, &iParam23, iParam11);
						func_134(&num7, &unk164, &unk254, &num22, &iParam14, &iParam23, iParam11);
						func_134(&num10, &unk182, &unk272, &num25, &iParam15, &iParam23, iParam11);
						func_134(&num13, &unk200, &unk290, &num28, &iParam16, &iParam23, iParam11);
						func_134(&num16, &unk218, &unk308, &num31, &iParam17, &iParam23, iParam11);
					
						if (bParam31)
						{
							if (flag2)
							{
								func_133(&num4, &unk146, &unk236, num19);
								func_133(&num7, &unk164, &unk254, num22);
								func_133(&num10, &unk182, &unk272, num25);
								func_133(&num13, &unk200, &unk290, num28);
								func_133(&num16, &unk218, &unk308, num31);
							}
						}
						else
						{
							func_133(&num4, &unk146, &unk236, num19);
							func_133(&num7, &unk164, &unk254, num22);
							func_133(&num10, &unk182, &unk272, num25);
							func_133(&num13, &unk200, &unk290, num28);
							func_133(&num16, &unk218, &unk308, num31);
						}
						break;
				
					case 0:
						break;
				
					case 1:
						func_134(&num4, &unk146, &unk236, &num19, &iParam13, &iParam23, iParam11);
					
						if (bParam31)
							if (flag2)
								func_133(&num4, &unk146, &unk236, num19);
						else
							func_133(&num4, &unk146, &unk236, num19);
						break;
				
					case 2:
						func_134(&num7, &unk164, &unk254, &num22, &iParam14, &iParam23, iParam11);
					
						if (bParam31)
							if (flag2)
								func_133(&num7, &unk164, &unk254, num22);
						else
							func_133(&num7, &unk164, &unk254, num22);
						break;
				
					case 3:
						func_134(&num10, &unk182, &unk272, &num25, &iParam15, &iParam23, iParam11);
					
						if (bParam31)
							if (flag2)
								func_133(&num10, &unk182, &unk272, num25);
						else
							func_133(&num10, &unk182, &unk272, num25);
						break;
				
					case 4:
						func_134(&num13, &unk200, &unk290, &num28, &iParam16, &iParam23, iParam11);
					
						if (bParam31)
							if (flag2)
								func_133(&num13, &unk200, &unk290, num28);
						else
							func_133(&num13, &unk200, &unk290, num28);
						break;
				
					case 5:
						func_134(&num16, &unk218, &unk308, &num31, &iParam17, &iParam23, iParam11);
					
						if (bParam31)
							if (flag2)
								func_133(&num16, &unk218, &unk308, num31);
						else
							func_133(&num16, &unk218, &unk308, num31);
						break;
				}
			}
		
			func_81(uParam2, false);
		
			if (bParam10)
			{
				func_60(uParam4, uParam2, "???", "", 1, 2);
			}
			else if (func_55(sParam7))
			{
				if (iParam9 == 0)
					if (iParam8 == 0)
						if (iParam5 != -999)
							func_58(uParam4, uParam2, "NUMBER" /*~1~*/, iParam5, 2);
					else
						func_56(uParam4, uParam2, "NUMBER" /*~1~*/, fParam6, Global_2696265, 2);
				else
					func_53(uParam4, uParam2, "TIMER_DASHES" /*~1~/~1~*/, iParam5, iParam9, 2, 0);
			}
			else if (unk_0x1B79E937E91F40C3("HUD_CASH" /*$~1~*/, sParam7) || unk_0x1B79E937E91F40C3("HUD_CASH_S" /*$~a~*/, sParam7))
			{
				sParam7 = "HUD_CASH_S" /*$~a~*/;
				*uParam2 = 5;
				func_81(uParam2, false);
				func_48(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (unk_0x1B79E937E91F40C3("HUD_CASH_NEG" /*-$~1~*/, sParam7) || unk_0x1B79E937E91F40C3("HUD_CASH_NEG_S" /*-$~a~*/, sParam7))
			{
				*uParam2 = 5;
				func_81(uParam2, false);
				sParam7 = "HUD_CASH_NEG_S" /*-$~a~*/;
				func_48(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_58(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_56(uParam4, uParam2, sParam7, fParam6, Global_2696265, 2);
			}
		
			func_47();
		}
	}

	return;
}

void func_133(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x9A71
{
	if (!unk_0xD6F9DEE4765092A9(sParam1))
	{
		unk_0xD0D00ED689D6CA81(sParam1, 0);
	
		if (unk_0x38D063D8CF6D1967(sParam1))
		{
			func_98(uParam0, iParam3);
			func_90(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}

	return;
}

void func_134(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6) // Position - 0x9AAC
{
	if (*uParam5 != func_68() && *uParam4 != func_68())
	{
		if (*uParam5 == *uParam4)
		{
			TEXT_LABEL_ASSIGN_STRING(sParam1, "timerbar_sr", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "timer_box", 24);
			*uParam3 = iParam6;
			uParam0->f_2 = 0.016f + 0.008f;
			uParam0->f_3 = 0.038f;
		}
	}

	return;
}

void func_135(int iParam0) // Position - 0x9B02
{
	func_17(&Global_1655612.f_380[iParam0 /*2*/]);
	func_17(&Global_1655612.f_401[iParam0 /*2*/]);
	return;
}

void func_136(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8) // Position - 0x9B28
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_98(uParam1, iParam5);
		func_90(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}

	if (iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		unk_0xA306E6FD2A6558E6(2, &unk, &unk2, &unk3, &unk4);
		unk_0x81645EE95A114FAE(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, unk, unk2, unk3, 153, 0);
	}

	if (iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 || iParam0 == 24 || iParam0 == 25 || iParam0 == 26 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam6))
		{
			func_98(uParam2, iParam8);
			func_90(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}

	return;
}

void func_137(int iParam0) // Position - 0x9C7A
{
	func_17(&Global_1655612.f_422[iParam0 /*2*/]);
	func_17(&Global_1655612.f_443[iParam0 /*2*/]);
	return;
}

int func_138(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x9CA0
{
	int num;

	num = 1;

	if (func_139(uParam0, uParam1) == 0)
		num = 0;

	if (func_139(uParam2, uParam3) == 0)
		num = 0;

	if (func_139(uParam4, uParam5) == 0)
		num = 0;

	if (func_139(uParam6, uParam7) == 0)
		num = 0;

	if (func_139(uParam8, uParam9) == 0)
		num = 0;

	return num;
}

int func_139(var uParam0, var uParam1) // Position - 0x9CF8
{
	int num;
	int num2;

	if (!unk_0xD6F9DEE4765092A9(uParam0))
	{
		unk_0xD0D00ED689D6CA81(uParam0, 0);
	
		if (unk_0x38D063D8CF6D1967(uParam0))
			num = 1;
	}
	else
	{
		num = 1;
	}

	if (!unk_0xD6F9DEE4765092A9(uParam1))
	{
		unk_0xD0D00ED689D6CA81(uParam1, 0);
	
		if (unk_0x38D063D8CF6D1967(uParam1))
			num2 = 1;
	}
	else
	{
		num2 = 1;
	}

	if (num && num2)
		return 1;

	return 0;
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, int iParam14) // Position - 0x9D5D
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(11, iParam0))
		func_141(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);

	return;
}

void func_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, int iParam19) // Position - 0x9D9B
{
	float num;
	BOOL flag;
	int num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	var unk73;
	var unk74;
	var unk75;
	var unk76;
	var unk77;
	var unk83;
	var unk89;
	var unk95;
	var unk101;
	var unk107;
	var unk113;
	var unk119;
	var unk125;
	var unk131;
	var unk137;
	var unk143;
	var unk149;
	var unk155;
	var unk161;
	var unk167;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;
	int num17;
	int num18;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		func_111(11, iParam0);
		func_120(uParam1, 0);
		func_115(uParam1);
	
		if (Global_1655612 == 1)
			func_110(iParam6);
	
		func_117(uParam2, 0, 0);
		func_114(uParam2);
		func_105(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_124(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (iParam19 == 0)
			func_142(iParam0);
	
		if (func_100(iParam19, &Global_1655612.f_338[iParam0 /*2*/], &Global_1655612.f_359[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			num2 = func_101();
			unk_0xA4F67CEB594AE064(num2);
			num = *uParam3;
			num.f_1 = uParam3->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_123())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
			func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, 0);
			func_81(uParam1, false);
			num3 = *uParam4 + 0.145f + 0.001f;
			num4 = *uParam4 + 0.145f + 0.001f;
			num5 = *uParam4 + 0.123f;
			num6 = *uParam4 + 0.123f;
			num7 = *uParam4 + 0.101f;
			num8 = *uParam4 + 0.101f;
			num9 = *uParam4 + 0.078f;
			num10 = *uParam4 + 0.078f;
		
			if (func_123())
			{
				num3.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num4.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num5.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num6.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num7.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num8.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num9.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num10.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
			}
			else
			{
				num3.f_1 = uParam4->f_1 + 0.0185f;
				num4.f_1 = uParam4->f_1 + 0.019f;
				num5.f_1 = uParam4->f_1 + 0.0185f;
				num6.f_1 = uParam4->f_1 + 0.019f;
				num7.f_1 = uParam4->f_1 + 0.0185f;
				num8.f_1 = uParam4->f_1 + 0.019f;
				num9.f_1 = uParam4->f_1 + 0.0185f;
				num10.f_1 = uParam4->f_1 + 0.019f;
			}
		
			num3.f_2 = 0.016f + 0.003f;
			num4.f_2 = 0.016f + 0.003f;
			num5.f_2 = 0.016f + 0.003f;
			num6.f_2 = 0.016f + 0.003f;
			num7.f_2 = 0.016f + 0.003f;
			num8.f_2 = 0.016f + 0.003f;
			num9.f_2 = 0.016f + 0.003f;
			num10.f_2 = 0.016f + 0.003f;
			num3.f_3 = 0.032f + 0.004f;
			num4.f_3 = 0.032f + 0.004f;
			num5.f_3 = 0.032f + 0.004f;
			num6.f_3 = 0.032f + 0.004f;
			num7.f_3 = 0.032f + 0.004f;
			num8.f_3 = 0.032f + 0.004f;
			num9.f_3 = 0.032f + 0.004f;
			num10.f_3 = 0.032f + 0.004f;
			num3.f_7 = 255;
			num4.f_7 = 255;
			num5.f_7 = 255;
			num6.f_7 = 255;
			num7.f_7 = 255;
			num8.f_7 = 255;
			num9.f_7 = 255;
			num10.f_7 = 255;
			func_98(&num3, 1);
			func_98(&num4, 1);
			func_98(&num5, 1);
			func_98(&num6, 1);
			func_98(&num7, 1);
			func_98(&num8, 1);
			func_98(&num9, 1);
			func_98(&num10, 1);
			TEXT_LABEL_ASSIGN_STRING(&unk77, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk83, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk89, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk95, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk101, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk107, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk113, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk119, "", 24);
			num11 = 1;
			num12 = 1;
			num13 = 1;
			num14 = 1;
			num15 = 1;
			num16 = 1;
			num17 = 1;
			num18 = 1;
			func_129(&iParam11, &num3, &unk77, &unk125, &num11, &iParam7, &unk73, &num4, &unk83, &unk131, &num12, iParam5, 0);
			func_129(&iParam12, &num5, &unk89, &unk137, &num13, &iParam8, &unk74, &num6, &unk95, &unk143, &num14, iParam5, 0);
			func_129(&iParam13, &num7, &unk101, &unk149, &num15, &iParam9, &unk75, &num8, &unk107, &unk155, &num16, iParam5, 0);
			func_129(&iParam14, &num9, &unk113, &unk161, &num17, &iParam10, &unk76, &num10, &unk119, &unk167, &num18, iParam5, 0);
		
			if (bParam15)
				if (flag)
					func_128(iParam11, &num3, &num4, &unk77, &unk125, num11, &unk83, &unk131, num12);
			else
				func_128(iParam11, &num3, &num4, &unk77, &unk125, num11, &unk83, &unk131, num12);
		
			if (bParam16)
				if (flag)
					func_128(iParam12, &num5, &num6, &unk89, &unk137, num13, &unk95, &unk143, num14);
			else
				func_128(iParam12, &num5, &num6, &unk89, &unk137, num13, &unk95, &unk143, num14);
		
			if (bParam17)
				if (flag)
					func_128(iParam13, &num7, &num8, &unk101, &unk149, num15, &unk107, &unk155, num16);
			else
				func_128(iParam13, &num7, &num8, &unk101, &unk149, num15, &unk107, &unk155, num16);
		
			if (bParam18)
				if (flag)
					func_128(iParam14, &num9, &num10, &unk113, &unk161, num17, &unk119, &unk167, num18);
			else
				func_128(iParam14, &num9, &num10, &unk113, &unk161, num17, &unk119, &unk167, num18);
		}
	
		func_47();
	}

	return;
}

void func_142(int iParam0) // Position - 0xA375
{
	func_17(&Global_1655612.f_338[iParam0 /*2*/]);
	func_17(&Global_1655612.f_359[iParam0 /*2*/]);
	return;
}

void func_143(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, BOOL bParam13, int iParam14, int iParam15) // Position - 0xA39B
{
	var unk;
	var unk12;
	var unk14;

	if (func_29(10, iParam0))
	{
		unk14 = 4;
		func_144(iParam0, &unk, &unk12, &unk14, iParam1, iParam2, 1, sParam3, iParam4, iParam7, bParam6, iParam5, iParam8, iParam9, iParam10, sParam11, sParam12, bParam13, iParam14, iParam15);
	}

	return;
}

void func_144(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, BOOL bParam17, int iParam18, int iParam19) // Position - 0xA3DE
{
	float num;
	BOOL flag;
	int num2;
	var unk9;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		iParam13 == 2;
		func_111(10, iParam0);
	
		if (func_123())
			func_157(uParam1, 0);
		else if (bParam17)
			func_120(uParam1, 0);
		else if (bParam10)
			func_121(uParam1, 3);
		else
			func_120(uParam1, 0);
	
		if (Global_1655612 == 1)
			func_110(iParam6);
	
		func_153(uParam2, uParam3, &num, iParam6, uParam1);
		func_115(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_112()));
	
		if (iParam11 == 0)
			func_152(iParam0);
	
		if (iParam14 == 0)
			func_151(iParam0);
	
		if (func_100(iParam11, &Global_1655612.f_296[iParam0 /*2*/], &Global_1655612.f_317[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			num2 = func_101();
			unk_0xA4F67CEB594AE064(num2);
			num = *uParam2;
			num.f_1 = uParam2->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_123())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
		
			if (iParam14 > 0)
			{
				unk9 = { num };
			
				if (func_252(&Global_1655612.f_905[iParam0 /*2*/], 2000, false) == false)
				{
					if (func_99(Global_1655612.f_905[iParam0 /*2*/], 1250, false))
						Global_1655612.f_926[iParam0] = Global_1655612.f_926[iParam0] - 17;
				
					unk9.f_7 = Global_1655612.f_926[iParam0];
					func_98(&unk9, iParam8);
					func_90("TimerBars", "ALL_WHITE_bg", &unk9, 1, 0, num2, 0);
				}
			}
			else
			{
				Global_1655612.f_926[iParam0] = 255;
				func_89(&Global_1655612.f_905[iParam0 /*2*/], false, false);
			}
		
			func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, num2, 0);
			func_83(&num, iParam18);
		
			if (func_123())
				if (bParam10)
					if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.012f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.008f;
			else if (bParam10)
				uParam2->f_1 = uParam2->f_1 + -0.005f + 0.001f;
		
			num2 = func_101();
			unk_0xA4F67CEB594AE064(num2);
		
			if (bParam17)
			{
				func_82(uParam1, iParam8);
				func_81(uParam1, false);
				func_60(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else if (bParam10 == true)
			{
				func_82(uParam1, iParam8);
				func_81(uParam1, false);
				func_60(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else
			{
				func_81(uParam1, false);
			
				if (iParam9 == -1)
					func_79(uParam2, uParam1, sParam7, 0, 1);
				else
					func_58(uParam2, uParam1, sParam7, iParam9, 2);
			}
		
			num2 = func_101();
			unk_0xA4F67CEB594AE064(num2);
		
			if (flag)
			{
				func_147(iParam4, iParam5, uParam3, iParam8, iParam12, num2);
				func_145(sParam15, uParam3, num2, sParam16);
			}
		
			func_47();
		}
	}

	return;
}

void func_145(char* sParam0, var uParam1, int iParam2, char* sParam3) // Position - 0xA76D
{
	var unk;

	unk = 1;
	unk[0 /*9*/] = 0f;
	unk[0 /*9*/].f_1 = 0f;
	unk[0 /*9*/].f_2 = -0.015f;
	unk[0 /*9*/].f_3 = -0.025f;
	unk_0xD0D00ED689D6CA81(sParam3, 0);

	if (unk_0x38D063D8CF6D1967(sParam3))
	{
		func_146(&uParam1->[0 /*9*/], &unk[0 /*9*/]);
		func_98(&uParam1->[0 /*9*/], 1);
		unk_0xA4F67CEB594AE064(iParam2);
		uParam1->[0 /*9*/].f_7 = 255;
		func_90(sParam3, sParam0, &uParam1->[0 /*9*/], 0, 0, iParam2, 0);
		unk_0xA4F67CEB594AE064(iParam2);
	}

	return;
}

void func_146(var uParam0, var uParam1) // Position - 0xA7F2
{
	*uParam0 = *uParam0 + *uParam1;
	uParam0->f_1 = uParam0->f_1 + uParam1->f_1;
	uParam0->f_2 = uParam0->f_2 + uParam1->f_2;
	uParam0->f_3 = uParam0->f_3 + uParam1->f_3;
	uParam0->f_4 = uParam0->f_4 + uParam1->f_4;
	uParam0->f_5 = uParam0->f_5 + uParam1->f_5;
	uParam0->f_6 = uParam0->f_6 + uParam1->f_6;
	uParam0->f_7 = uParam0->f_7 + uParam1->f_7;
	return;
}

void func_147(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0xA85F
{
	var unk;
	float num;

	unk = 2;
	unk[0 /*9*/] = 0.003f;
	unk[0 /*9*/].f_1 = -0.004f;
	unk[0 /*9*/].f_2 = 0.011f;
	unk[0 /*9*/].f_3 = 0.059f;
	unk[1 /*9*/] = 0f;
	unk[1 /*9*/].f_2 = 0.011f;
	unk[1 /*9*/].f_3 = 0.059f;
	unk_0xD0D00ED689D6CA81("TimerBars", 0);

	if (unk_0x38D063D8CF6D1967("TimerBars"))
	{
		func_146(&uParam2->[0 /*9*/], &unk[0 /*9*/]);
		func_146(&uParam2->[1 /*9*/], &unk[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_98(&uParam2->[1 /*9*/], iParam3);
		func_98(&uParam2->[3 /*9*/], iParam3);
		num = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f;
		unk_0xA4F67CEB594AE064(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		func_98(&uParam2->[3 /*9*/], iParam3);
		uParam2->[3 /*9*/].f_7 = 51;
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		uParam2->[3 /*9*/].f_7 = 255;
		func_148(uParam2->[0 /*9*/], num, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, true);
		unk_0xA4F67CEB594AE064(iParam5);
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
		unk_0xA4F67CEB594AE064(iParam5);
	}

	return;
}

void func_148(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15) // Position - 0xA9B4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;

	num = fParam0.f_2;
	num2 = 0f;
	num3 = func_150(fParam0);
	num4 = fParam9;

	if (fParam9 < 0f)
		num4 = 0f;

	if (fParam9 > 100f)
		num4 = 100f;

	if (bParam15)
		if (fParam9 > 95f && fParam9 < 100f)
			num4 = 96f;

	if (iParam12 == 0)
	{
		num5 = (num2 - num) / 100f;
		num6 = num4;
		num7 = num;
		num8 = (num5 * num6) + num7;
		num3 = fParam0;
		num9 = func_149(fParam0);
		num10 = num9 - (num8 / 2f);
	}
	else
	{
		num5 = (num - num2) / 100f;
		num6 = num4;
		num7 = 0f;
		num8 = (num5 * num6) + num7;
	
		if (fParam9 >= 100f)
			num8 = fParam0.f_2;
	
		num9 = fParam0;
		num5 = (num9 - num3) / 100f;
		num6 = num4;
		num7 = num3;
		num10 = (num5 * num6) + num7;
	}

	if (iParam14 > 0f && iParam14 < 100f)
	{
		num11 = fParam0.f_2 * 0.01f;
		num10 = num10 + (iParam14 * num11);
	}

	*uParam10 = num10;
	uParam10->f_1 = fParam0.f_1;
	uParam10->f_2 = num8;

	if (iParam11 == 1)
		uParam10->f_3 = fParam0.f_3;

	uParam10->f_8 = fParam0.f_8;
	return;
}

float func_149(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAAF9
{
	float num;
	float num2;

	num = fParam0.f_2 / 2f;
	num2 = fParam0;
	num2 = num2 + num;
	num2 = num2 - 0.002f;
	return num2;
}

float func_150(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAB20
{
	float num;
	float num2;

	num = fParam0.f_2 / 2f;
	num2 = fParam0;
	num2 = num2 - num;
	return num2;
}

void func_151(int iParam0) // Position - 0xAB3D
{
	func_17(&Global_1655612.f_800[iParam0 /*2*/]);
	func_17(&Global_1655612.f_821[iParam0 /*2*/]);
	return;
}

void func_152(int iParam0) // Position - 0xAB63
{
	func_17(&Global_1655612.f_296[iParam0 /*2*/]);
	func_17(&Global_1655612.f_317[iParam0 /*2*/]);
	Global_1655612.f_1177.f_205[iParam0] = -1;
	return;
}

void func_153(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) // Position - 0xAB97
{
	float num;

	num = func_156(false, true);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_71(iParam3);
	uParam0->f_1 = uParam0->f_1 + func_108(uParam4);
	func_154(uParam1, iParam3, -1f, -1f);
	func_106(iParam3, -num);
	func_124(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_154(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xABEB
{
	float num;
	float num2;

	if (!func_155(fParam2, fParam3))
	{
		num = func_72() + func_71(iParam1);
		num2 = func_70();
	}
	else
	{
		num = fParam3;
		num2 = fParam2;
	}

	uParam0->[0 /*9*/] = num2;
	uParam0->[0 /*9*/].f_1 = num;
	uParam0->[0 /*9*/].f_2 = 0.062f;
	uParam0->[0 /*9*/].f_3 = 0.016f;
	uParam0->[0 /*9*/].f_4 = 255;
	uParam0->[0 /*9*/].f_5 = 255;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = num2;
	uParam0->[1 /*9*/].f_1 = num;
	uParam0->[1 /*9*/].f_2 = 0.069f;
	uParam0->[1 /*9*/].f_3 = 0.011f;
	uParam0->[1 /*9*/].f_4 = 255;
	uParam0->[1 /*9*/].f_5 = 255;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = num2;
	uParam0->[2 /*9*/].f_1 = num;
	uParam0->[2 /*9*/].f_2 = 0.069f;
	uParam0->[2 /*9*/].f_3 = 0.009f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 120;
	uParam0->[3 /*9*/] = num2;
	uParam0->[3 /*9*/].f_1 = num;
	uParam0->[3 /*9*/].f_2 = 0.069f;
	uParam0->[3 /*9*/].f_3 = 0.008f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 90;
	return;
}

BOOL func_155(float fParam0, float fParam1) // Position - 0xAD45
{
	if (fParam0 == -1f && fParam1 == -1f)
		return false;

	return true;
}

float func_156(BOOL bParam0, BOOL bParam1) // Position - 0xAD62
{
	float num;

	num = 0.025f + 0.006f + 0.0009f;

	if (bParam0 == 1)
		num = num + 0.008f;

	if (bParam1)
		num = num + 0.008f;

	return num;
}

void func_157(var uParam0, int iParam1) // Position - 0xAD9E
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
	return;
}

void func_158(int iParam0, int iParam1, int iParam2) // Position - 0xADF0
{
	var unk;
	var unk12;

	if (func_29(9, iParam0))
		func_159(iParam0, &unk, &unk12, 1, iParam1, iParam2);

	return;
}

void func_159(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0xAE12
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	float num;
	var unk5;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		func_163();
		unk_0xA306E6FD2A6558E6(iParam5, &unk, &unk2, &unk3, &unk4);
		func_162(uParam1, 3, unk, unk2, unk3);
	
		if (func_123())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
	
		if (Global_1655612 == 1)
			func_110(iParam3);
	
		num = 0.131f;
	
		if (unk_0x8608526719A575EE() == 8)
			num = 0.0872f;
		else if (unk_0x8608526719A575EE() == 10)
			num = 0.095f;
	
		*uParam2 = 0.795f;
		uParam2->f_1 = (func_71(iParam3) + func_107(uParam1)) - num;
		func_114(uParam1);
		func_81(uParam1, false);
		func_111(9, iParam0);
		func_161(&unk5, iParam4);
		func_79(uParam2, uParam1, func_160(&unk5), 0, 1);
		func_47();
	}

	return;
}

char* func_160(char* sParam0) // Position - 0xAEE4
{
	return sParam0;
}

void func_161(var uParam0, int iParam1) // Position - 0xAEEE
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "RACE_POS_", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 16);
	*uParam0 = { unk };
	return;
}

void func_162(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0xAF0C
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
	return;
}

void func_163() // Position - 0xAF54
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
	return;
}

void func_164(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAF72
{
	var unk;
	var unk12;
	var unk14;

	if (func_29(8, iParam0))
	{
		unk14 = 2;
		func_165(iParam0, &unk, &unk12, &unk14, 1, sParam1, iParam3, fParam2, iParam4, iParam5, iParam6);
	}

	return;
}

void func_165(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) // Position - 0xAFA3
{
	var unk;
	float num;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		func_124(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_120(uParam1, 0);
		func_115(uParam1);
		func_111(8, iParam0);
	
		if (Global_1655612 == 1)
			func_110(iParam4);
	
		func_166(uParam2, iParam4, uParam1, &unk);
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
		unk_0xD0D00ED689D6CA81("Hunting", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars") && unk_0x38D063D8CF6D1967("Hunting"))
		{
			num = *uParam2;
			num.f_1 = uParam2->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_123())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
			func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, 0);
			unk.f_4 = uParam8;
			unk.f_5 = uParam9;
			unk.f_6 = uParam10;
			unk.f_7 = 255;
			unk.f_8 = uParam7;
			func_90("Hunting", "HuntingWindArrow_32", &unk, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_81(uParam1, false);
			uParam7 = uParam7;
			uParam3->[0 /*9*/] = uParam3->[0 /*9*/];
			func_58(uParam2, uParam1, sParam5, iParam6, 2);
			func_47();
		}
	}

	return;
}

void func_166(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0xB138
{
	float num;

	num = func_156(false, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_71(iParam1);
	uParam0->f_1 = uParam0->f_1 + func_108(uParam2);
	func_106(iParam1, -num);
	uParam0->f_1 = uParam0->f_1 + func_108(uParam2);
	*uParam3 = 0.9375f;
	uParam3->f_1 = uParam0->f_1 + 0.009f;
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
	return;
}

void func_167(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, BOOL bParam16, float fParam17, float fParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, BOOL bParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55) // Position - 0xB1A9
{
	var unk;
	var unk12;
	var unk14;
	var unk96;

	if (func_29(2, iParam0))
	{
		unk14 = 9;
	
		if (iParam1 < 9)
			func_168(iParam0, &unk, &unk12, &unk14, &unk96, iParam1, 1, iParam3, iParam4, sParam2, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, bParam16, fParam17, fParam18, iParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28, iParam29, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
	}

	return;
}

void func_168(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, float fParam22, float fParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, BOOL bParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60) // Position - 0xB248
{
	float num;
	BOOL flag;
	int num2;
	var unk9;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		iParam40 == 2;
		func_111(2, iParam0);
	
		if (Global_1655612 == 1)
			func_110(iParam6);
	
		func_175(uParam2, uParam3, &num, uParam4, iParam6, fParam22, fParam23, uParam1);
	
		if (func_123())
			func_157(uParam1, 0);
		else if (bParam51)
			func_120(uParam1, 0);
		else if (bParam21)
			func_121(uParam1, 3);
		else
			func_120(uParam1, 0);
	
		func_115(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_112()));
	
		if (iParam19 == 0)
			func_174(iParam0);
	
		if (iParam41 == 0)
			func_173(iParam0);
	
		num2 = func_101();
		unk_0xA4F67CEB594AE064(num2);
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			if (func_100(iParam19, &Global_1655612.f_212[iParam0 /*2*/], &Global_1655612.f_233[iParam0 /*2*/]))
				flag = true;
			else
				flag = false;
		
			if (!func_155(fParam22, fParam23))
			{
				num = *uParam2;
				num.f_1 = uParam2->f_1;
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.012f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.028f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
			
				if (func_123())
				{
					num = num + -0.025f;
					num.f_2 = num.f_2 + 0.05f;
				}
			
				Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
			
				if (iParam41 > 0)
				{
					unk9 = { num };
				
					if (func_252(&Global_1655612.f_1065[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_99(Global_1655612.f_1065[iParam0 /*2*/], 1250, false))
							Global_1655612.f_1086[iParam0] = Global_1655612.f_1086[iParam0] - 17;
					
						unk9.f_7 = Global_1655612.f_1086[iParam0];
						func_98(&unk9, iParam7);
						func_90("TimerBars", "ALL_WHITE_bg", &unk9, 1, 0, num2, 0);
					}
				}
				else
				{
					Global_1655612.f_1086[iParam0] = 255;
					func_89(&Global_1655612.f_1065[iParam0 /*2*/], false, false);
				}
			
				func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, num2, 0);
			}
		
			func_83(&num, iParam52);
			num2 = func_101();
			unk_0xA4F67CEB594AE064(num2);
			func_82(uParam1, iParam42);
		
			if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
				uParam2->f_1 = uParam2->f_1 + -0.009f;
			else
				uParam2->f_1 = uParam2->f_1 + -0.003f;
		
			if (func_123())
				if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.007f;
		
			if (func_123() == false)
				if (bParam51)
					uParam2->f_1 = uParam2->f_1 + 0.003f;
				else if (bParam21)
					uParam2->f_1 = uParam2->f_1 + -0.002f;
			else if (bParam21)
				uParam2->f_1 = uParam2->f_1 + 0.007f;
			else
				uParam2->f_1 = uParam2->f_1 + 0.003f;
		
			if (!func_155(fParam22, fParam23))
			{
				func_81(uParam1, false);
			
				if (bParam51)
				{
					func_60(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == true)
				{
					func_60(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_79(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = uParam2->f_1 - -0.003f;
					func_58(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
		
			if (flag)
				func_169(iParam5, uParam3, iParam7, iParam8, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam24, iParam25, iParam26, iParam27, iParam28, iParam29, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37, iParam38, iParam39, num2, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
		
			func_47();
		}
	}

	return;
}

void func_169(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45) // Position - 0xB656
{
	BOOL flag;
	int num;
	int num2;
	float num3;
	int i;
	var unk;
	BOOL flag2;

	unk_0xD0D00ED689D6CA81("TimerBars", 0);
	unk_0xD0D00ED689D6CA81("Cross", 0);

	if (unk_0x38D063D8CF6D1967("TimerBars") && unk_0x38D063D8CF6D1967("Cross"))
	{
		num3 = -0.0094f;
	
		for (i = 0; i <= iParam0 - 1; i = i + 1)
		{
			uParam1->[i /*9*/] = uParam1->[i /*9*/] + (num3 * (float)i);
		
			if (func_172(i, iParam4))
			{
				switch (i)
				{
					case 0:
						flag = bParam5;
						num = iParam13;
						num2 = iParam21;
						break;
				
					case 1:
						flag = bParam6;
						num = iParam14;
						num2 = iParam22;
						break;
				
					case 2:
						flag = bParam7;
						num = iParam15;
						num2 = iParam23;
						break;
				
					case 3:
						flag = bParam8;
						num = iParam16;
						num2 = iParam24;
						break;
				
					case 4:
						flag = bParam9;
						num = iParam17;
						num2 = iParam25;
						break;
				
					case 5:
						flag = bParam10;
						num = iParam18;
						num2 = iParam26;
						break;
				
					case 6:
						flag = bParam11;
						num = iParam19;
						num2 = iParam27;
						break;
				
					case 7:
						flag = bParam12;
						num = iParam20;
						num2 = iParam28;
						break;
				}
			
				flag2 = false;
			
				if (num2 == 2)
				{
					flag2 = true;
					num2 = 1;
				}
			
				unk = { func_171(uParam1->[i /*9*/], flag, iParam2, iParam3, num, num2) };
			
				if (flag2)
					unk.f_7 = 51;
			
				func_90("TimerBars", "Circle_checkpoints", &unk, 0, 0, iParam29, 0);
			
				if (func_170(i, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (i)
					{
						case 0:
							func_98(&uParam1->[i /*9*/], iParam38);
							break;
					
						case 1:
							func_98(&uParam1->[i /*9*/], iParam39);
							break;
					
						case 2:
							func_98(&uParam1->[i /*9*/], iParam40);
							break;
					
						case 3:
							func_98(&uParam1->[i /*9*/], iParam41);
							break;
					
						case 4:
							func_98(&uParam1->[i /*9*/], iParam42);
							break;
					
						case 5:
							func_98(&uParam1->[i /*9*/], iParam43);
							break;
					
						case 6:
							func_98(&uParam1->[i /*9*/], iParam44);
							break;
					
						case 7:
							func_98(&uParam1->[i /*9*/], iParam45);
							break;
					}
				
					func_90("Cross", "Circle_checkpoints_Cross", &uParam1->[i /*9*/], 0, 0, iParam29, 0);
				}
			}
		}
	}

	return;
}

BOOL func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xB896
{
	if (iParam0 == 0 && iParam1 == 1)
		return true;

	if (iParam0 == 1 && iParam2 == 1)
		return true;

	if (iParam0 == 2 && iParam3 == 1)
		return true;

	if (iParam0 == 3 && iParam4 == 1)
		return true;

	if (iParam0 == 4 && iParam5 == 1)
		return true;

	if (iParam0 == 5 && iParam6 == 1)
		return true;

	if (iParam0 == 6 && iParam7 == 1)
		return true;

	if (iParam0 == 7 && iParam8 == 1)
		return true;

	return false;
}

struct<9> func_171(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, BOOL bParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0xB93F
{
	var unk;

	unk = { uParam0 };

	if (iParam12 == 0)
		if (bParam9)
			func_98(&unk, iParam10);
		else
			func_98(&unk, iParam11);
	else if (bParam9)
		func_98(&unk, iParam12);
	else
		func_98(&unk, iParam13);

	bParam9 == false;
	return unk;
}

BOOL func_172(int iParam0, int iParam1) // Position - 0xB995
{
	if (iParam1 == -1)
		return true;

	if (iParam0 > iParam1)
		return false;

	return true;
}

void func_173(int iParam0) // Position - 0xB9B3
{
	func_17(&Global_1655612.f_716[iParam0 /*2*/]);
	func_17(&Global_1655612.f_737[iParam0 /*2*/]);
	return;
}

void func_174(int iParam0) // Position - 0xB9D9
{
	func_17(&Global_1655612.f_212[iParam0 /*2*/]);
	func_17(&Global_1655612.f_233[iParam0 /*2*/]);
	return;
}

void func_175(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7) // Position - 0xB9FD
{
	float num;

	num = func_156(false, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_71(iParam4);
	uParam0->f_1 = uParam0->f_1 + func_108(uParam7);
	func_177(uParam1, iParam4, fParam5, fParam6);
	func_176(uParam3);

	if (!func_155(fParam5, fParam6))
		func_106(iParam4, -num);

	func_124(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_176(var uParam0) // Position - 0xBA65
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
	return;
}

void func_177(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xBAA5
{
	float num;
	float num2;

	if (!func_155(fParam2, fParam3))
	{
		num = func_72() + func_71(iParam1);
		num2 = func_178();
	}
	else
	{
		num = fParam3;
		num2 = fParam2;
	}

	uParam0->[0 /*9*/] = num2;
	uParam0->[0 /*9*/].f_1 = num;
	uParam0->[0 /*9*/].f_2 = 0.012f;
	uParam0->[0 /*9*/].f_3 = 0.023f;
	uParam0->[0 /*9*/].f_4 = 0;
	uParam0->[0 /*9*/].f_5 = 0;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = num2;
	uParam0->[1 /*9*/].f_1 = num;
	uParam0->[1 /*9*/].f_2 = 0.012f;
	uParam0->[1 /*9*/].f_3 = 0.023f;
	uParam0->[1 /*9*/].f_4 = 0;
	uParam0->[1 /*9*/].f_5 = 0;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = num2;
	uParam0->[2 /*9*/].f_1 = num;
	uParam0->[2 /*9*/].f_2 = 0.012f;
	uParam0->[2 /*9*/].f_3 = 0.023f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 250;
	uParam0->[3 /*9*/] = num2;
	uParam0->[3 /*9*/].f_1 = num;
	uParam0->[3 /*9*/].f_2 = 0.012f;
	uParam0->[3 /*9*/].f_3 = 0.023f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 250;
	uParam0->[4 /*9*/] = num2;
	uParam0->[4 /*9*/].f_1 = num;
	uParam0->[4 /*9*/].f_2 = 0.012f;
	uParam0->[4 /*9*/].f_3 = 0.023f;
	uParam0->[4 /*9*/].f_4 = 0;
	uParam0->[4 /*9*/].f_5 = 0;
	uParam0->[4 /*9*/].f_6 = 0;
	uParam0->[4 /*9*/].f_7 = 250;
	uParam0->[5 /*9*/] = num2;
	uParam0->[5 /*9*/].f_1 = num;
	uParam0->[5 /*9*/].f_2 = 0.012f;
	uParam0->[5 /*9*/].f_3 = 0.023f;
	uParam0->[5 /*9*/].f_4 = 0;
	uParam0->[5 /*9*/].f_5 = 0;
	uParam0->[5 /*9*/].f_6 = 0;
	uParam0->[5 /*9*/].f_7 = 250;
	uParam0->[6 /*9*/] = num2;
	uParam0->[6 /*9*/].f_1 = num;
	uParam0->[6 /*9*/].f_2 = 0.012f;
	uParam0->[6 /*9*/].f_3 = 0.023f;
	uParam0->[6 /*9*/].f_4 = 0;
	uParam0->[6 /*9*/].f_5 = 0;
	uParam0->[6 /*9*/].f_6 = 0;
	uParam0->[6 /*9*/].f_7 = 250;
	uParam0->[7 /*9*/] = num2;
	uParam0->[7 /*9*/].f_1 = num;
	uParam0->[7 /*9*/].f_2 = 0.012f;
	uParam0->[7 /*9*/].f_3 = 0.023f;
	uParam0->[7 /*9*/].f_4 = 0;
	uParam0->[7 /*9*/].f_5 = 0;
	uParam0->[7 /*9*/].f_6 = 0;
	uParam0->[7 /*9*/].f_7 = 250;
	return;
}

float func_178() // Position - 0xBD1F
{
	float num;

	num = ((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f - 0.005f) + 0.065f) - 0.0005f;
	return num;
}

void func_179(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, int iParam17, BOOL bParam18, int iParam19, int iParam20, BOOL bParam21, int iParam22, BOOL bParam23, BOOL bParam24, int iParam25) // Position - 0xBD60
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(6, iParam0))
		func_46(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, "", bParam18, iParam19, iParam20, bParam21, iParam22, bParam23, bParam24, iParam25, false, 0, -1, false, false, false, 0);

	return;
}

void func_180(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, int iParam17, int iParam18, BOOL bParam19, int iParam20, BOOL bParam21, int iParam22, int iParam23, int iParam24, BOOL bParam25, float fParam26, float fParam27, BOOL bParam28, int iParam29, float fParam30, BOOL bParam31, var uParam32, int iParam33, int iParam34, int iParam35, BOOL bParam36) // Position - 0xBDBD
{
	var unk;
	var unk12;
	var unk14;

	if (func_29(0, iParam0))
	{
		unk14 = 4;
		func_181(iParam0, &unk, &unk12, &unk14, iParam1, iParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24, bParam25, fParam26, fParam27, bParam28, iParam29, fParam30, bParam31, uParam32, iParam33, iParam34, iParam35, bParam36);
	}

	return;
}

void func_181(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, BOOL bParam17, int iParam18, BOOL bParam19, int iParam20, int iParam21, int iParam22, BOOL bParam23, int iParam24, BOOL bParam25, int iParam26, int iParam27, int iParam28, BOOL bParam29, float fParam30, float fParam31, BOOL bParam32, int iParam33, float fParam34, BOOL bParam35, var uParam36, int iParam37, int iParam38, int iParam39, BOOL bParam40) // Position - 0xBE29
{
	float num;
	BOOL flag;
	int num2;
	var unk9;
	float num3;
	float num4;
	float num5;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		iParam15 == 2;
		func_111(0, iParam0);
	
		if (func_123())
			if (bParam17)
				func_189(uParam1, 0);
			else
				func_157(uParam1, 0);
		else if (bParam19)
			func_120(uParam1, 0);
		else if (bParam10)
			func_121(uParam1, 3);
		else if (bParam17)
			func_188(uParam1, 0);
		else
			func_120(uParam1, 0);
	
		if (Global_1655612 == 1)
			func_110(iParam6);
	
		func_187(uParam2, uParam3, &num, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_115(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_112()));
	
		if (iParam11 == 0)
			func_152(iParam0);
	
		if (iParam16 == 0)
			func_151(iParam0);
	
		if (func_100(iParam11, &Global_1655612.f_296[iParam0 /*2*/], &Global_1655612.f_317[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			num2 = func_101();
			unk_0xA4F67CEB594AE064(num2);
		
			if (!func_155(fParam12, fParam13))
			{
				num = *uParam2;
				num.f_1 = uParam2->f_1;
			
				if (bParam17)
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.008f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.036f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = num.f_6 + 255;
					num.f_7 = 140;
				}
				else
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.012f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.028f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = *num.f_6 + 255;
					num.f_7 = 140;
				}
			
				if (func_123())
				{
					num = num + -0.025f;
					num.f_2 = num.f_2 + 0.05f;
				}
			
				Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
			
				if (iParam16 > 0)
				{
					unk9 = { num };
				
					if (func_252(&Global_1655612.f_905[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_99(Global_1655612.f_905[iParam0 /*2*/], 1250, false))
							Global_1655612.f_926[iParam0] = Global_1655612.f_926[iParam0] - 17;
					
						unk9.f_7 = Global_1655612.f_926[iParam0];
						func_98(&unk9, iParam8);
						func_90("TimerBars", "ALL_WHITE_bg", &unk9, 1, 0, num2, 0);
					}
				}
				else
				{
					Global_1655612.f_926[iParam0] = 255;
					func_89(&Global_1655612.f_905[iParam0 /*2*/], false, false);
				}
			
				func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, num2, 0);
			}
		
			func_83(&num, iParam21);
		
			if (func_123())
			{
				if (bParam17)
					uParam2->f_1 = uParam2->f_1 + -0.01f;
				else if (bParam10)
					if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (bParam17 == false)
					if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
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
		
			num2 = func_101();
		
			if (iParam39 != -1)
				if (func_186(iParam39))
					num2 = iParam39;
		
			unk_0xA4F67CEB594AE064(num2);
		
			if (!func_155(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_82(uParam1, iParam8);
					func_81(uParam1, false);
					func_60(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (bParam10 == true)
				{
					func_82(uParam1, iParam8);
					func_81(uParam1, false);
					func_60(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_82(uParam1, iParam22);
					func_81(uParam1, false);
				
					if (bParam29)
						func_185(uParam2, uParam1, sParam7, 0, 1, iParam4, iParam5);
					else if (iParam9 == -1)
						func_79(uParam2, uParam1, sParam7, 0, 1);
					else
						func_58(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
		
			if (bParam23)
			{
				if (!func_155(fParam12, fParam13))
				{
					num3 = func_72() + func_71(iParam6);
					num4 = func_70();
				}
				else
				{
					num3 = fParam13;
					num4 = fParam12;
				}
			
				num5.f_1 = num3 + 0.0486f;
				num5 = num4 - 0.0505f;
				num5.f_2 = 0.18f;
				num5.f_3 = 0.01f;
				num5.f_4 = 255;
				num5.f_5 = 255;
				num5.f_6 = 255;
				num5.f_7 = 255;
				func_98(&num5, iParam24);
				func_90("TimerBars", "TPBar", &num5, 0, 0, num2, 0);
			}
		
			num2 = func_101();
		
			if (iParam39 != -1)
				if (func_186(iParam39))
					num2 = iParam39;
		
			unk_0xA4F67CEB594AE064(num2);
		
			if (flag)
				if (bParam17)
					func_184(iParam4, iParam5, uParam3, iParam8, iParam14, num2, iParam20, &Global_1655612.f_842[iParam0 /*2*/], &Global_1655612.f_863[iParam0 /*2*/], fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, uParam36, iParam37, bParam40);
				else
					func_182(iParam4, iParam5, uParam3, iParam8, iParam14, num2, &Global_1655612.f_842[iParam0 /*2*/], &Global_1655612.f_863[iParam0 /*2*/], iParam18, iParam20, bParam25, iParam26, fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, uParam36, iParam37, iParam38, bParam40);
		
			func_47();
		}
	}

	return;
}

void func_182(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, BOOL bParam16, int iParam17, float fParam18, BOOL bParam19, var uParam20, int iParam21, int iParam22, BOOL bParam23) // Position - 0xC419
{
	var unk;
	float num;
	var unk20;
	char* str;

	unk = 2;
	unk[0 /*9*/].f_1 = 0f;
	unk[0 /*9*/].f_2 = 0.007f;
	unk[0 /*9*/].f_3 = 0.004f;
	unk[1 /*9*/] = 0f;
	unk[1 /*9*/].f_2 = 0.007f;
	unk[1 /*9*/].f_3 = 0.004f;
	unk_0xD0D00ED689D6CA81("TimerBars", 0);

	if (iParam9 != 0)
		unk_0xD0D00ED689D6CA81("timerbar_lines", 0);

	if (unk_0x38D063D8CF6D1967("TimerBars"))
	{
		func_146(&uParam2->[0 /*9*/], &unk[0 /*9*/]);
		func_146(&uParam2->[1 /*9*/], &unk[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_98(&uParam2->[1 /*9*/], iParam3);
	
		if (bParam10)
			func_98(&uParam2->[3 /*9*/], 3);
		else
			func_98(&uParam2->[3 /*9*/], iParam3);
	
		if (iParam11 != 0 && iParam0 < iParam11)
			func_98(&uParam2->[1 /*9*/], 6);
	
		if (iParam15 > 0)
		{
			if (!func_77(uParam6))
				func_76(uParam6, false, false);
			else if (func_252(uParam6, iParam15, false))
				func_89(uParam6, false, false);
		
			func_183(&uParam2->[1 /*9*/], iParam3, iParam14, iParam15, *uParam6);
		}
	
		num = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f;
	
		if (fParam12 != -1f && fParam13 != -1f)
			num = (fParam12 / fParam13) * 100f;
		else if (fParam12 != -1f && fParam13 == -1f)
			num = (fParam12 / SYSTEM::TO_FLOAT(iParam1)) * 100f;
		else if (fParam12 == -1f && fParam13 != -1f)
			num = (SYSTEM::TO_FLOAT(iParam0) / fParam13) * 100f;
	
		unk_0xA4F67CEB594AE064(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
	
		if (bParam10)
			func_98(&uParam2->[3 /*9*/], 3);
		else
			func_98(&uParam2->[3 /*9*/], iParam3);
	
		uParam2->[3 /*9*/].f_7 = 51;
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		uParam2->[3 /*9*/].f_7 = 255;
		func_148(uParam2->[0 /*9*/], num, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam23);
		unk_0xA4F67CEB594AE064(iParam5);
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
	
		if (bParam16)
		{
			unk20 = { uParam2->[1 /*9*/] };
			func_148(uParam2->[0 /*9*/], fParam18, &unk20, 1, 1, iParam4, iParam22, bParam23);
			func_98(&unk20, iParam17);
			unk20.f_7 = 255;
		
			if (iParam21 > 0)
			{
				if (!func_77(uParam7))
					func_76(uParam7, false, false);
				else if (func_252(uParam7, iParam21, false))
					func_89(uParam7, false, false);
			
				func_183(&unk20, iParam17, uParam20, iParam21, *uParam7);
			}
		
			if (bParam19)
				if (num <= fParam18)
					unk20.f_7 = 100;
		
			unk_0xA4F67CEB594AE064(iParam5);
			func_90("TimerBars", "DamageBarFill_128", &unk20, 0, 0, iParam5, 0);
		}
	
		if (iParam9 != 0)
		{
			unk_0xD0D00ED689D6CA81("timerbar_lines", 0);
		
			if (unk_0x38D063D8CF6D1967("timerbar_lines"))
			{
				if (iParam9 != 10)
				{
					str = "LineMarker90_128";
				
					switch (iParam9)
					{
						case 1:
							str = "LineMarker10_128";
							break;
					
						case 2:
							str = "LineMarker20_128";
							break;
					
						case 3:
							str = "LineMarker30_128";
							break;
					
						case 4:
							str = "LineMarker40_128";
							break;
					
						case 5:
							str = "LineMarker50_128";
							break;
					
						case 6:
							str = "LineMarker60_128";
							break;
					
						case 7:
							str = "LineMarker70_128";
							break;
					
						case 8:
							str = "LineMarker80_128";
							break;
					
						case 9:
							str = "LineMarker90_128";
							break;
					}
				
					uParam2->[3 /*9*/].f_7 = 255;
					func_98(&uParam2->[3 /*9*/], 2);
					func_90("timerbar_lines", str, &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					uParam2->[3 /*9*/].f_7 = 255;
					func_98(&uParam2->[3 /*9*/], 2);
					func_90("timerbar_lines", "LineMarker20_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
					func_90("timerbar_lines", "LineMarker40_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
					func_90("timerbar_lines", "LineMarker60_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
					func_90("timerbar_lines", "LineMarker80_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
	
		unk_0xA4F67CEB594AE064(iParam5);
	
		if (iParam8 > 0 && num >= (float)iParam8)
		{
			func_98(&uParam2->[1 /*9*/], 6);
			func_148(uParam2->[0 /*9*/], SYSTEM::TO_FLOAT(iParam8), &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam23);
			unk_0xA4F67CEB594AE064(iParam5);
			func_90("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
			unk_0xA4F67CEB594AE064(iParam5);
		}
	
		unk_0xA4F67CEB594AE064(iParam5);
	}

	return;
}

void func_183(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Position - 0xC896
{
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	int value7;
	int value8;
	int value9;
	float num;

	value9 = func_75(&uParam4, false, false);

	if (iParam3 / 2 > value9)
	{
		num = SYSTEM::TO_FLOAT(value9 / 2) / SYSTEM::TO_FLOAT(iParam3 / 2);
		unk_0xA306E6FD2A6558E6(iParam1, &value, &value2, &value3, &value4);
		unk_0xA306E6FD2A6558E6(uParam2, &value5, &value6, &value7, &value8);
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value9) / SYSTEM::TO_FLOAT(iParam3);
		unk_0xA306E6FD2A6558E6(uParam2, &value, &value2, &value3, &value4);
		unk_0xA306E6FD2A6558E6(iParam1, &value5, &value6, &value7, &value8);
	}

	uParam0->f_4 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(value5), num));
	uParam0->f_5 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value2), SYSTEM::TO_FLOAT(value6), num));
	uParam0->f_6 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value3), SYSTEM::TO_FLOAT(value7), num));
	uParam0->f_7 = SYSTEM::FLOOR(func_74(SYSTEM::TO_FLOAT(value4), SYSTEM::TO_FLOAT(value8), num));
	return;
}

void func_184(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, float fParam9, float fParam10, int iParam11, int iParam12, BOOL bParam13, int iParam14, float fParam15, BOOL bParam16, var uParam17, int iParam18, BOOL bParam19) // Position - 0xC976
{
	var unk;
	float num;
	var unk20;
	char* str;

	unk = 2;
	unk[0 /*9*/].f_1 = -0.004f;
	unk[0 /*9*/].f_2 = 0.007f;
	unk[0 /*9*/].f_3 = 0.016f;
	unk[1 /*9*/].f_2 = 0.007f;
	unk[1 /*9*/].f_3 = 0.016f;
	unk_0xD0D00ED689D6CA81("TimerBars", 0);

	if (iParam6 != 0)
		unk_0xD0D00ED689D6CA81("timerbar_lines", 0);

	if (unk_0x38D063D8CF6D1967("TimerBars"))
	{
		func_146(&uParam2->[0 /*9*/], &unk[0 /*9*/]);
		func_146(&uParam2->[1 /*9*/], &unk[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_98(&uParam2->[1 /*9*/], iParam3);
		func_98(&uParam2->[3 /*9*/], iParam3);
	
		if (iParam12 > 0)
		{
			if (!func_77(uParam7))
				func_76(uParam7, false, false);
			else if (func_252(uParam7, iParam12, false))
				func_89(uParam7, false, false);
		
			func_183(&uParam2->[1 /*9*/], iParam3, iParam11, iParam12, *uParam7);
		}
	
		num = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f;
	
		if (fParam9 != -1f && fParam10 != -1f)
			num = (fParam9 / fParam10) * 100f;
		else if (fParam9 != -1f && fParam10 == -1f)
			num = (fParam9 / SYSTEM::TO_FLOAT(iParam1)) * 100f;
		else if (fParam9 == -1f && fParam10 != -1f)
			num = (SYSTEM::TO_FLOAT(iParam0) / fParam10) * 100f;
	
		unk_0xA4F67CEB594AE064(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		func_98(&uParam2->[3 /*9*/], iParam3);
		uParam2->[3 /*9*/].f_7 = 51;
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, 0);
		uParam2->[3 /*9*/].f_7 = 255;
		func_148(uParam2->[0 /*9*/], num, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam19);
		unk_0xA4F67CEB594AE064(iParam5);
		func_90("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
	
		if (bParam13)
		{
			unk20 = { uParam2->[1 /*9*/] };
			func_148(uParam2->[0 /*9*/], fParam15, &unk20, 1, 1, iParam4, 0, bParam19);
			func_98(&unk20, iParam14);
			unk20.f_7 = 255;
		
			if (iParam18 > 0)
			{
				if (!func_77(uParam8))
					func_76(uParam8, false, false);
				else if (func_252(uParam8, iParam18, false))
					func_89(uParam8, false, false);
			
				func_183(&unk20, iParam14, uParam17, iParam18, *uParam8);
			}
		
			if (bParam16)
				if (num <= fParam15)
					unk20.f_7 = 100;
		
			unk_0xA4F67CEB594AE064(iParam5);
			func_90("TimerBars", "DamageBarFill_128", &unk20, 0, 0, iParam5, 0);
		}
	
		if (iParam6 != 0)
		{
			unk_0xD0D00ED689D6CA81("timerbar_lines", 0);
		
			if (unk_0x38D063D8CF6D1967("timerbar_lines"))
			{
				str = "LineMarker90_128";
			
				switch (iParam6)
				{
					case 1:
						str = "LineMarker10_128";
						break;
				
					case 2:
						str = "LineMarker20_128";
						break;
				
					case 3:
						str = "LineMarker30_128";
						break;
				
					case 4:
						str = "LineMarker40_128";
						break;
				
					case 5:
						str = "LineMarker50_128";
						break;
				
					case 6:
						str = "LineMarker60_128";
						break;
				
					case 7:
						str = "LineMarker70_128";
						break;
				
					case 8:
						str = "LineMarker80_128";
						break;
				
					case 9:
						str = "LineMarker90_128";
						break;
				}
			
				uParam2->[1 /*9*/].f_7 = 255;
				func_98(&uParam2->[1 /*9*/], 2);
				func_90("timerbar_lines", str, &uParam2->[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
	
		unk_0xA4F67CEB594AE064(iParam5);
		unk_0xA4F67CEB594AE064(iParam5);
	}

	return;
}

void func_185(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xCCE9
{
	char* str;

	str = sParam2;

	if (!func_55(str))
	{
		if (func_51())
		{
			func_81(uParam1, false);
			unk_0x16EC7160BEBE7A6F(iParam4);
			unk_0xEAF65721ACB2FDFB(iParam3);
			func_54(func_50(*uParam0), func_49(uParam0->f_1), str, iParam5, iParam6);
		}
	}

	return;
}

BOOL func_186(int iParam0) // Position - 0xCD32
{
	return iParam0 >= 0 && iParam0 <= 8;
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, BOOL bParam7) // Position - 0xCD48
{
	float num;

	num = func_156(bParam7, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_71(iParam3);
	uParam0->f_1 = uParam0->f_1 + func_108(uParam6);
	func_154(uParam1, iParam3, fParam4, fParam5);

	if (!func_155(fParam4, fParam5))
		func_106(iParam3, -num);

	func_124(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_188(var uParam0, int iParam1) // Position - 0xCDAB
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
	return;
}

void func_189(var uParam0, int iParam1) // Position - 0xCE03
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
	return;
}

void func_190(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21) // Position - 0xCE5B
{
	var unk;
	var unk12;
	var unk14;
	var unk114;
	var unk125;
	var unk127;

	if (func_29(1, iParam0))
	{
		unk14 = 11;
		func_191(iParam0, &unk, &unk12, &unk14, &unk127, &unk114, &unk125, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, true, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}

	return;
}

void func_191(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, BOOL bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, BOOL bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29) // Position - 0xCEB1
{
	float num;
	var unk9;
	var unk11;
	BOOL flag;
	int num2;
	int num3;
	var unk22;

	Global_1655612 = Global_1655612 + 1;

	if (func_125())
	{
		iParam17 == 2;
		func_111(1, iParam0);
	
		if (func_123())
			func_157(uParam1, 0);
		else if (bParam13)
			func_121(uParam1, 3);
		else
			func_120(uParam1, 0);
	
		func_120(&unk11, 0);
		unk11.f_2 = unk11.f_2 + 0.166f + 0.095f;
	
		if (Global_1655612 == 1)
			func_110(iParam9);
	
		func_199(uParam5, 0, 0);
		func_114(uParam5);
		func_81(uParam5, false);
		num2 = 0;
	
		if (iParam20 > 0)
			num2 = 1;
	
		func_197(iParam8, uParam2, uParam3, &num, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, num2);
		unk9 = *uParam2;
		unk9.f_1 = uParam2->f_1;
		unk9.f_1 = unk9.f_1 + (-0.006f - 0.007f);
		func_115(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_112()));
		func_196(&unk11);
	
		if (iParam14 == 0)
			func_195(iParam0);
	
		if (iParam18 == 0)
			func_194(iParam0);
	
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			num3 = func_101();
			unk_0xA4F67CEB594AE064(num3);
		
			if (func_100(iParam14, &Global_1655612.f_254[iParam0 /*2*/], &Global_1655612.f_275[iParam0 /*2*/]))
				flag = true;
			else
				flag = false;
		
			if (!func_155(fParam15, fParam16))
			{
				num = *uParam2;
				num.f_1 = uParam2->f_1;
			
				if (iParam8 < 9 && iParam20 == 0)
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.012f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.028f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = num.f_6 + 255;
					num.f_7 = 140;
				}
				else
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.008f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.036f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = num.f_6 + 255;
					num.f_7 = 140;
				}
			
				if (func_123())
				{
					num = num + -0.025f;
					num.f_2 = num.f_2 + 0.05f;
				}
			
				Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
			
				if (iParam7 == iParam8 && iParam7 > 0 || iParam18 > 0)
				{
					unk22 = { num };
				
					if (func_252(&Global_1655612.f_1097[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_99(Global_1655612.f_1097[iParam0 /*2*/], 1250, false))
							Global_1655612.f_1118[iParam0] = Global_1655612.f_1118[iParam0] - 17;
					
						unk22.f_7 = Global_1655612.f_1118[iParam0];
						func_98(&unk22, iParam11);
						func_90("TimerBars", "ALL_WHITE_bg", &unk22, 1, 0, num3, 0);
					}
				}
				else
				{
					Global_1655612.f_1118[iParam0] = 255;
					func_89(&Global_1655612.f_1097[iParam0 /*2*/], false, false);
				}
			
				func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, num3, 0);
			}
		
			func_83(&num, iParam29);
		
			if (bParam13)
			{
				if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
				{
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				}
				else
				{
					uParam2->f_1 = uParam2->f_1 + -0.003f;
				
					if (func_123() == false)
						uParam2->f_1 = uParam2->f_1 + -0.002f;
				}
			}
			else if (func_123())
			{
				if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.003f;
			}
		
			num3 = func_101();
			unk_0xA4F67CEB594AE064(num3);
		
			if (!func_155(fParam15, fParam16))
			{
				func_81(uParam1, false);
			
				if (bParam13 == true)
					func_60(uParam2, uParam1, sParam10, "", 1, 2);
				else if (iParam12 == -1)
					func_79(uParam2, uParam1, sParam10, 0, 1);
				else
					func_58(uParam2, uParam1, sParam10, iParam12, 2);
			}
		
			if (iParam20 > 0)
				func_58(&unk9, &unk11, "HUD_MULTSMAL" /*~1~x*/, iParam20, 2);
		
			if (flag)
				func_192(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, num3, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
		
			func_47();
		}
	}

	return;
}

void func_192(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15) // Position - 0xD30D
{
	float num;
	int i;
	char* str;

	if (iParam1 < 9)
	{
		num = -0.0094f;
		unk_0xD0D00ED689D6CA81("TimerBars", 0);
	
		if (unk_0x38D063D8CF6D1967("TimerBars"))
		{
			for (i = 0; i <= iParam1 - 1; i = i + 1)
			{
				uParam2->[i /*9*/] = uParam2->[i /*9*/] + (num * (float)i);
			
				if (iParam1 - i > iParam0)
				{
					func_98(&uParam2->[i /*9*/], iParam5);
					uParam2->[i /*9*/].f_7 = 51;
					func_90("TimerBars", "Circle_checkpoints_Outline", &uParam2->[i /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_98(&uParam2->[i /*9*/], iParam5);
					func_90("TimerBars", "Circle_checkpoints", &uParam2->[i /*9*/], 0, 0, iParam6, 0);
				
					if (func_170(i, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_98(&uParam2->[i /*9*/], 2);
						func_90("Cross", "Circle_checkpoints_Cross", &uParam2->[i /*9*/], 0, 0, iParam6, 0);
					}
				}
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_53(uParam4, uParam3, "TIMER_DASHES" /*~1~/~1~*/, iParam0, iParam1, 2, 0);
	}
	else
	{
		func_193(uParam3);
	
		if (bParam7)
		{
			unk_0xD0D00ED689D6CA81("TimerBars", 0);
		
			if (unk_0x38D063D8CF6D1967("TimerBars"))
			{
				uParam2->[0 /*9*/] = uParam2->[0 /*9*/] + (0.058f - 0.06f);
				uParam2->[0 /*9*/].f_1 = uParam2->[0 /*9*/].f_1 + -0.005f;
				uParam2->[0 /*9*/].f_2 = uParam2->[0 /*9*/].f_2 + (0.003f - 0.005f) + 0.002f;
				uParam2->[0 /*9*/].f_3 = uParam2->[0 /*9*/].f_3 + (0.009f - 0.01f);
				func_98(&uParam2->[0 /*9*/], iParam5);
				func_90("TimerBars", "Circle_checkpoints_Big", &uParam2->[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
	
		str = "TIMER_DASHES" /*~1~/~1~*/;
	
		if (bParam7 == true && iParam0 > 99 && iParam1 > 99)
			str = "TIMER_DASHES" /*~1~/~1~*/;
	
		func_53(uParam4, uParam3, str, iParam0, iParam1, 2, 0);
	}

	return;
}

void func_193(var uParam0) // Position - 0xD4EC
{
	uParam0->f_9 = ((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f;
	return;
}

void func_194(int iParam0) // Position - 0xD51B
{
	func_17(&Global_1655612.f_758[iParam0 /*2*/]);
	func_17(&Global_1655612.f_779[iParam0 /*2*/]);
	return;
}

void func_195(int iParam0) // Position - 0xD541
{
	func_17(&Global_1655612.f_254[iParam0 /*2*/]);
	func_17(&Global_1655612.f_275[iParam0 /*2*/]);
	Global_1655612.f_1775.f_205[iParam0] = -1;
	return;
}

void func_196(var uParam0) // Position - 0xD574
{
	float num;

	num = (0.88f - 0.062f) + 0.026f + 0.027f + 0.037f + 0.003f;
	uParam0->f_9 = num;
	return;
}

void func_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11) // Position - 0xD5A7
{
	float num;

	num = func_109(uParam5);

	if (iParam0 < 9)
		num = func_156(iParam11, false);

	*uParam1 = 0.795f;
	uParam1->f_1 = func_71(iParam7);
	uParam1->f_1 = uParam1->f_1 + func_108(uParam10);
	*uParam4 = 0.795f;
	uParam4->f_1 = uParam1->f_1 + func_107(uParam5);
	func_198(uParam2, iParam7, fParam8, fParam9);
	func_176(uParam6);

	if (!func_155(fParam8, fParam9))
		func_106(iParam7, -num);

	func_124(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_198(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xD636
{
	float num;
	float num2;

	if (!func_155(fParam2, fParam3))
	{
		num = func_72() + func_71(iParam1);
		num2 = func_178();
	}
	else
	{
		num = fParam3;
		num2 = fParam2;
	}

	uParam0->[0 /*9*/] = num2;
	uParam0->[0 /*9*/].f_1 = num;
	uParam0->[0 /*9*/].f_2 = 0.012f;
	uParam0->[0 /*9*/].f_3 = 0.023f;
	uParam0->[0 /*9*/].f_4 = 0;
	uParam0->[0 /*9*/].f_5 = 0;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = num2;
	uParam0->[1 /*9*/].f_1 = num;
	uParam0->[1 /*9*/].f_2 = 0.012f;
	uParam0->[1 /*9*/].f_3 = 0.023f;
	uParam0->[1 /*9*/].f_4 = 0;
	uParam0->[1 /*9*/].f_5 = 0;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = num2;
	uParam0->[2 /*9*/].f_1 = num;
	uParam0->[2 /*9*/].f_2 = 0.012f;
	uParam0->[2 /*9*/].f_3 = 0.023f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 250;
	uParam0->[3 /*9*/] = num2;
	uParam0->[3 /*9*/].f_1 = num;
	uParam0->[3 /*9*/].f_2 = 0.012f;
	uParam0->[3 /*9*/].f_3 = 0.023f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 250;
	uParam0->[4 /*9*/] = num2;
	uParam0->[4 /*9*/].f_1 = num;
	uParam0->[4 /*9*/].f_2 = 0.012f;
	uParam0->[4 /*9*/].f_3 = 0.023f;
	uParam0->[4 /*9*/].f_4 = 0;
	uParam0->[4 /*9*/].f_5 = 0;
	uParam0->[4 /*9*/].f_6 = 0;
	uParam0->[4 /*9*/].f_7 = 250;
	uParam0->[5 /*9*/] = num2;
	uParam0->[5 /*9*/].f_1 = num;
	uParam0->[5 /*9*/].f_2 = 0.012f;
	uParam0->[5 /*9*/].f_3 = 0.023f;
	uParam0->[5 /*9*/].f_4 = 0;
	uParam0->[5 /*9*/].f_5 = 0;
	uParam0->[5 /*9*/].f_6 = 0;
	uParam0->[5 /*9*/].f_7 = 250;
	uParam0->[6 /*9*/] = num2;
	uParam0->[6 /*9*/].f_1 = num;
	uParam0->[6 /*9*/].f_2 = 0.012f;
	uParam0->[6 /*9*/].f_3 = 0.023f;
	uParam0->[6 /*9*/].f_4 = 0;
	uParam0->[6 /*9*/].f_5 = 0;
	uParam0->[6 /*9*/].f_6 = 0;
	uParam0->[6 /*9*/].f_7 = 250;
	uParam0->[7 /*9*/] = num2;
	uParam0->[7 /*9*/].f_1 = num;
	uParam0->[7 /*9*/].f_2 = 0.012f;
	uParam0->[7 /*9*/].f_3 = 0.023f;
	uParam0->[7 /*9*/].f_4 = 0;
	uParam0->[7 /*9*/].f_5 = 0;
	uParam0->[7 /*9*/].f_6 = 0;
	uParam0->[7 /*9*/].f_7 = 250;
	uParam0->[8 /*9*/] = num2;
	uParam0->[8 /*9*/].f_1 = num;
	uParam0->[8 /*9*/].f_2 = 0.012f;
	uParam0->[8 /*9*/].f_3 = 0.023f;
	uParam0->[8 /*9*/].f_4 = 0;
	uParam0->[8 /*9*/].f_5 = 0;
	uParam0->[8 /*9*/].f_6 = 0;
	uParam0->[8 /*9*/].f_7 = 250;
	uParam0->[9 /*9*/] = num2;
	uParam0->[9 /*9*/].f_1 = num;
	uParam0->[9 /*9*/].f_2 = 0.012f;
	uParam0->[9 /*9*/].f_3 = 0.023f;
	uParam0->[9 /*9*/].f_4 = 0;
	uParam0->[9 /*9*/].f_5 = 0;
	uParam0->[9 /*9*/].f_6 = 0;
	uParam0->[9 /*9*/].f_7 = 250;
	return;
}

void func_199(var uParam0, int iParam1, int iParam2) // Position - 0xD950
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
	return;
}

void func_200(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, int iParam10, int iParam11, BOOL bParam12, int iParam13) // Position - 0xD9C1
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(5, iParam0))
		func_46(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, false, iParam2, false, 0, 0, "", false, iParam11, 255, false, 0, false, false, 1, false, 0, -1, false, false, bParam12, iParam13);

	return;
}

void func_201(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15) // Position - 0xDA15
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(4, iParam0))
		func_46(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, iParam2, false, 0, 0, "", bParam11, iParam13, iParam14, false, 0, bParam15, false, 1, false, 0, -1, false, false, false, 0);

	return;
}

void func_202(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, char* sParam7, int iParam8, BOOL bParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, var uParam14, int iParam15) // Position - 0xDA6A
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(3, iParam0))
		func_46(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, false, 0, bParam9, 0, 0, "", false, iParam12, 255, false, 0, false, false, 1, bParam13, uParam14, iParam15, false, false, false, 0);

	return;
}

void func_203(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, int iParam11, BOOL bParam12, int iParam13, BOOL bParam14, int iParam15, var uParam16, BOOL bParam17) // Position - 0xDABE
{
	var unk;
	var unk12;
	var unk23;
	var unk34;
	var unk36;
	var unk38;

	if (func_29(7, iParam0))
		func_204(iParam0, &unk, &unk12, &unk23, &unk34, &unk36, &unk38, iParam1, 1, iParam3, iParam4, sParam2, iParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13, bParam14, iParam15, uParam16, bParam17);

	return;
}

void func_204(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, BOOL bParam16, int iParam17, int iParam18, BOOL bParam19, int iParam20, BOOL bParam21, int iParam22, int iParam23, BOOL bParam24) // Position - 0xDB05
{
	var unk;
	var unk12;
	float num;
	BOOL flag;
	int num2;
	float num3;
	var unk30;

	Global_1655612 = Global_1655612 + 1;
	iParam17 == 2;
	func_124(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_111(7, iParam0);

	if (bParam21)
		func_120(uParam1, 0);
	else if (bParam16)
		func_121(uParam1, 3);
	else if (func_123())
		func_122(uParam1, 0);
	else
		func_120(uParam1, 0);

	func_218(&unk, 0);

	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_217(uParam3, 0);
				func_199(uParam2, 0, 0);
			}
			else
			{
				func_217(uParam3, 0);
				func_199(uParam2, 0, 5);
			}
		
			func_114(uParam2);
			func_114(uParam3);
			break;
	
		case 2:
			func_199(uParam2, 0, 0);
			func_114(&unk);
			func_114(uParam3);
			func_216(uParam2);
			break;
	
		case 3:
			func_199(uParam2, 0, 0);
			func_114(&unk);
			func_114(uParam3);
			func_216(uParam2);
			break;
	
		case 4:
			func_199(uParam3, 0, 0);
		
			if (bParam19)
				func_199(uParam2, 0, 0);
			else
				func_199(uParam2, 0, 5);
		
			func_114(uParam2);
			func_114(uParam3);
			break;
	}

	func_115(uParam1);

	if (Global_1655612.f_1172 == false && Global_1655612.f_1173 == false)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = uParam1->f_9 + -0.016f;
		
			if (func_123())
				uParam1->f_9 = uParam1->f_9 + -0.008f;
		}
	}
	else if (Global_1655612.f_1172 == false && Global_1655612.f_1173 == true)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = uParam1->f_9 + 0f;
		
			if (func_123())
				uParam1->f_9 = uParam1->f_9 + -0.009f;
		}
	}

	if (Global_1655612 == 1)
		func_110(iParam8);

	func_215(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &unk, &unk12);
	uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_112()));
	func_104(uParam2, iParam12);

	if (iParam14 == 0)
		func_214(iParam0);

	if (iParam18 == 0)
		func_213(iParam0);

	unk_0xD0D00ED689D6CA81("TimerBars", 0);

	if (unk_0x38D063D8CF6D1967("TimerBars"))
	{
		num2 = func_101();
		unk_0xA4F67CEB594AE064(num2);
	
		if (func_100(iParam14, &Global_1655612.f_170[iParam0 /*2*/], &Global_1655612.f_191[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		num = *uParam4;
		num.f_1 = uParam4->f_1;
	
		if (Global_1655612.f_1165 == 1)
			num = num + -0.113f;
	
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		
			case 2:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		
			case 3:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		
			case 4:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		}
	
		num3 = *uParam5 + 0.145f + 0.001f;
	
		if (func_123())
			num3.f_1 = (uParam5->f_1 + 0.019f) - 0.006f;
		else
			num3.f_1 = uParam5->f_1 + 0.019f;
	
		num3.f_2 = 0.016f + 0.003f;
		num3.f_3 = 0.032f + 0.004f;
		num3.f_7 = 255;
		func_98(&num3, 1);
		num3 = uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f);
	
		if (func_123())
			num3 = num3 - 0.003f;
	
		switch (iParam23)
		{
			case 5:
				num3.f_3 = num3.f_3 + -0.009f;
				num3.f_2 = num3.f_2 + -0.002f;
			
				if (func_123())
					num3.f_1 = num3.f_1 + 0.0055f;
				else
					num3.f_1 = num3.f_1 + 0.0025f;
			
				unk_0xD0D00ED689D6CA81("MPRPSymbol", 0);
			
				if (unk_0x38D063D8CF6D1967("MPRPSymbol"))
					func_90("MPRPSymbol", "RP", &num3, 1, 0, 4, 0);
				break;
		
			case 2:
				unk_0xD0D00ED689D6CA81("TimerBars", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBars"))
					func_90("TimerBars", "Rockets", &num3, 1, 0, 4, 0);
				break;
		
			case 1:
				unk_0xD0D00ED689D6CA81("TimerBars", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBars"))
					func_90("TimerBars", "Spikes", &num3, 1, 0, 4, 0);
				break;
		
			case 4:
				unk_0xD0D00ED689D6CA81("TimerBars", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBars"))
					func_90("TimerBars", "Boost", &num3, 1, 0, 4, 0);
				break;
		
			case 6:
				unk_0xD0D00ED689D6CA81("CrossTheLine", 0);
			
				if (unk_0x38D063D8CF6D1967("CrossTheLine"))
				{
					func_98(&num3, 18);
					func_90("CrossTheLine", "Timer_LargeTick_32", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 7:
				unk_0xD0D00ED689D6CA81("CrossTheLine", 0);
			
				if (unk_0x38D063D8CF6D1967("CrossTheLine"))
				{
					func_98(&num3, 6);
					func_90("CrossTheLine", "Timer_LargeCross_32", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 8:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Beast", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 9:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_B_Time", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 10:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Random", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 11:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Slow_Time", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 12:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Swap", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 13:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Testosterone", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 14:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Thermal", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 15:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Weed", &num3, 1, 0, 4, 0);
				}
				break;
		
			case 16:
				unk_0xD0D00ED689D6CA81("TimerBar_Icons", 0);
			
				if (unk_0x38D063D8CF6D1967("TimerBar_Icons"))
				{
					func_98(&num3, 118);
					func_90("TimerBar_Icons", "Pickup_Hidden", &num3, 1, 0, 4, 0);
				}
				break;
		}
	
		if (func_123())
		{
			num = num + -0.025f;
			num.f_2 = num.f_2 + 0.05f;
		}
	
		Global_1655612.f_7074 = Global_1655612.f_7074 + num.f_3;
	
		if (Global_1655612.f_1165 == 0)
		{
			if (iParam18 > 0)
			{
				unk30 = { num };
			
				if (func_252(&Global_1655612.f_1033[iParam0 /*2*/], 2000, false) == false)
				{
					if (func_99(Global_1655612.f_1033[iParam0 /*2*/], 1250, false))
						Global_1655612.f_1054[iParam0] = Global_1655612.f_1054[iParam0] - 17;
				
					unk30.f_7 = Global_1655612.f_1054[iParam0];
				
					if (iParam17 == 2)
						func_98(&unk30, 6);
					else if (iParam17 == 3)
						func_98(&unk30, 18);
					else
						func_98(&unk30, iParam12);
				
					func_90("TimerBars", "ALL_WHITE_bg", &unk30, 1, 0, num2, 0);
				}
			}
			else
			{
				Global_1655612.f_1054[iParam0] = 255;
				func_89(&Global_1655612.f_1033[iParam0 /*2*/], false, false);
			}
		
			func_90("TimerBars", "ALL_BLACK_bg", &num, 1, 0, num2, 0);
		}
	
		func_83(&num, iParam22);
	
		if (bParam16)
			if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
				uParam4->f_1 = uParam4->f_1 + -0.012f;
			else
				uParam4->f_1 = uParam4->f_1 + -0.004f;
		else if (func_123())
			if (unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 12)
				uParam4->f_1 = uParam4->f_1 + -0.012f;
			else
				uParam4->f_1 = uParam4->f_1 + -0.008f;
	
		num2 = func_101();
		unk_0xA4F67CEB594AE064(num2);
		func_104(uParam1, iParam20);
	
		if (Global_1655612.f_1165 == 0)
		{
			func_81(uParam1, false);
		
			if (func_55(sParam11) == false)
			{
				if (bParam21 == true)
				{
					func_60(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (bParam16 == true)
				{
					*uParam1 = 4;
					func_60(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_79(uParam4, uParam1, sParam11, 0, 1);
				}
				else
				{
					func_58(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
	
		if (flag)
		{
			if (iParam9 == 0)
				func_212(iParam0);
		
			if (iParam9 != 0 && func_252(&Global_1655612.f_4659.f_336[iParam0 /*2*/], 4000, false) == false)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_211(uParam3);
						func_210(uParam6, uParam3, iParam9, 66, "TIMER_POS" /*+~a~*/, 0, 1);
						func_209(uParam3);
					}
					else
					{
						func_208(uParam3);
						func_210(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_209(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_208(uParam3);
					func_210(uParam6, uParam3, iParam9, 66, "TIMER_POS" /*+~a~*/, 0, 1);
					func_209(uParam3);
				}
				else
				{
					func_211(uParam3);
					func_210(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_209(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
					if (iParam10 == 1)
						func_207(uParam2);
					else if (iParam10 == 2)
						func_206(uParam2);
					else if (iParam10 == 3)
						func_205(uParam2);
			
				if (Global_1655612.f_1165 == 1)
				{
					uParam2->f_7 = 0;
					unk_0xA4F67CEB594AE064(7);
				}
			
				func_81(uParam2, false);
			
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_60(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = *uParam5 + 0.117f;
						
							if (bParam24)
								func_210(uParam5, uParam2, iParam7, 2627, "", 0, 1);
							else
								func_210(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
				
					case 0:
						if (bParam19)
						{
							func_60(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = *uParam5 + 0.117f;
							func_210(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
				
					case 2:
						*uParam5 = *uParam5 + 0.12f;
						func_210(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_79(&unk12, &unk, "TIMER_AM_O" /*AM*/, 0, 1);
						break;
				
					case 3:
						*uParam5 = *uParam5 + 0.12f;
						func_210(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_79(&unk12, &unk, "TIMER_PM_O" /*PM*/, 0, 1);
						break;
				
					case 4:
						*uParam5 = *uParam5 + 0.12f;
					
						if (bParam19)
							func_60(uParam5, uParam2, "--:--:--", "", 1, 2);
						else
							func_210(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						break;
				
					case 5:
						*uParam5 = *uParam5 + 0.117f;
						func_210(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
				}
			}
		}
	
		func_47();
	}

	return;
}

void func_205(var uParam0) // Position - 0xE7B6
{
	func_82(uParam0, 109);
	return;
}

void func_206(var uParam0) // Position - 0xE7C6
{
	func_82(uParam0, 108);
	return;
}

void func_207(var uParam0) // Position - 0xE7D6
{
	func_82(uParam0, 107);
	return;
}

void func_208(var uParam0) // Position - 0xE7E6
{
	func_82(uParam0, 6);
	return;
}

void func_209(var uParam0) // Position - 0xE7F5
{
	func_82(uParam0, 1);
	return;
}

void func_210(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6) // Position - 0xE804
{
	char* str;

	if (func_51())
	{
		func_81(uParam1, false);
		unk_0x16EC7160BEBE7A6F(iParam6);
		unk_0xEAF65721ACB2FDFB(iParam5);
	
		if (func_55(sParam4))
			str = "STRING";
		else
			str = sParam4;
	
		unk_0xEAEB6E7D3FAEBD5B(str);
		unk_0xBD34A69071611974(iParam2, iParam3);
		unk_0x25DD447A6EB3A86F(func_50(*uParam0), func_49(uParam0->f_1), 0);
	}

	return;
}

void func_211(var uParam0) // Position - 0xE85D
{
	func_82(uParam0, 18);
	return;
}

void func_212(int iParam0) // Position - 0xE86D
{
	func_17(&Global_1655612.f_4659.f_336[iParam0 /*2*/]);
	return;
}

void func_213(int iParam0) // Position - 0xE887
{
	func_17(&Global_1655612.f_674[iParam0 /*2*/]);
	func_17(&Global_1655612.f_695[iParam0 /*2*/]);
	return;
}

void func_214(int iParam0) // Position - 0xE8AD
{
	func_17(&Global_1655612.f_170[iParam0 /*2*/]);
	func_17(&Global_1655612.f_191[iParam0 /*2*/]);
	return;
}

void func_215(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7) // Position - 0xE8D1
{
	float num;

	num = func_109(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_71(iParam4);
	uParam1->f_1 = uParam1->f_1 + func_108(uParam5);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_107(uParam0);
	*uParam7 = 0.795f;
	uParam7->f_1 = uParam1->f_1 + func_107(uParam6);
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_106(iParam4, -num);
	return;
}

void func_216(var uParam0) // Position - 0xE947
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f) + 0.014f) - 0.024f) + 0.005f;
	return;
}

void func_217(var uParam0, int iParam1) // Position - 0xE988
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
	return;
}

void func_218(var uParam0, int iParam1) // Position - 0xE9DA
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
	return;
}

BOOL func_219(int iParam0) // Position - 0xEA38
{
	int i;
	int num;

	if (func_229(iParam0))
	{
		num = 2;
	
		for (i = 0; i < num; i = i + 1)
		{
			if (Global_1652044[i] == iParam0)
				return true;
		}
	}

	return false;
}

void func_220(int iParam0, int iParam1) // Position - 0xEA71
{
	switch (iParam0)
	{
		case 7:
			func_203(iParam1, Global_1655612.f_4659[iParam1], &Global_1655612.f_4659.f_11[iParam1 /*16*/], Global_1655612.f_4659.f_172[iParam1], Global_1655612.f_4659.f_194[iParam1], Global_1655612.f_4659.f_216[iParam1], Global_1655612.f_4659.f_205[iParam1], Global_1655612.f_4659.f_183[iParam1], Global_1655612.f_4659.f_227[iParam1], Global_1655612.f_4659.f_260[iParam1], Global_1655612.f_4659.f_314[iParam1], Global_1655612.f_4659.f_325[iParam1], Global_1655612.f_4659.f_357[iParam1], Global_1655612.f_4659.f_238[iParam1], Global_1655612.f_4659.f_271[iParam1], Global_1655612.f_4659.f_368[iParam1], Global_1655612.f_4659.f_379[iParam1], Global_1655612.f_4659.f_390[iParam1]);
			break;
	
		case 3:
			func_202(iParam1, Global_1655612.f_2839[iParam1], &Global_1655612.f_2839.f_11[iParam1 /*16*/], Global_1655612.f_2839.f_183[iParam1], Global_1655612.f_2839.f_172[iParam1], Global_1655612.f_2839.f_194[iParam1], Global_1655612.f_2839.f_216[iParam1], &Global_1655612.f_2839.f_259[iParam1 /*16*/], Global_1655612.f_2839.f_420[iParam1], Global_1655612.f_2839.f_453[iParam1], Global_1655612.f_2839.f_431[iParam1], Global_1655612.f_2839.f_442[iParam1], Global_1655612.f_2839.f_464[iParam1], Global_1655612.f_2839.f_475[iParam1], Global_1655612.f_2839.f_486[iParam1], Global_1655612.f_2839.f_497[iParam1]);
			break;
	
		case 4:
			func_201(iParam1, Global_1655612.f_3347[iParam1], Global_1655612.f_3347.f_172[iParam1], &Global_1655612.f_3347.f_11[iParam1 /*16*/], Global_1655612.f_3347.f_194[iParam1], Global_1655612.f_3347.f_183[iParam1], Global_1655612.f_3347.f_205[iParam1], Global_1655612.f_3347.f_227[iParam1], Global_1655612.f_3347.f_270[iParam1], Global_1655612.f_3347.f_281[iParam1], Global_1655612.f_3347.f_292[iParam1], Global_1655612.f_3347.f_303[iParam1], Global_1655612.f_3347.f_314[iParam1], Global_1655612.f_3347.f_325[iParam1], Global_1655612.f_3347.f_336[iParam1], Global_1655612.f_3347.f_347[iParam1]);
			break;
	
		case 5:
			func_200(iParam1, Global_1655612.f_3705[iParam1], Global_1655612.f_3705.f_172[iParam1], &Global_1655612.f_3705.f_11[iParam1 /*16*/], Global_1655612.f_3705.f_194[iParam1], Global_1655612.f_3705.f_183[iParam1], Global_1655612.f_3705.f_205[iParam1], Global_1655612.f_3705.f_227[iParam1], Global_1655612.f_3705.f_270[iParam1], Global_1655612.f_3705.f_281[iParam1], Global_1655612.f_3705.f_292[iParam1], Global_1655612.f_3705.f_303[iParam1], Global_1655612.f_3705.f_314[iParam1], Global_1655612.f_3705.f_325[iParam1]);
			break;
	
		case 1:
			func_190(iParam1, Global_1655612.f_1775[iParam1], Global_1655612.f_1775.f_11[iParam1], &Global_1655612.f_1775.f_22[iParam1 /*16*/], Global_1655612.f_1775.f_194[iParam1], Global_1655612.f_1775.f_205[iParam1], Global_1655612.f_1775.f_258[iParam1], Global_1655612.f_1775.f_183[iParam1], Global_1655612.f_1775.f_227[iParam1 /*3*/], Global_1655612.f_1775.f_227[iParam1 /*3*/].f_1, Global_1655612.f_1775.f_312[iParam1], Global_1655612.f_1775.f_323[iParam1], Global_1655612.f_1775.f_269[iParam1], Global_2804286[iParam1], Global_2804297[iParam1], Global_2804308[iParam1], Global_2804319[iParam1], Global_2804330[iParam1], Global_2804341[iParam1], Global_2804352[iParam1], Global_2804363[iParam1], Global_1655612.f_1775.f_334[iParam1]);
			break;
	
		case 0:
			func_180(iParam1, Global_1655612.f_1177[iParam1], Global_1655612.f_1177.f_11[iParam1], &Global_1655612.f_1177.f_22[iParam1 /*16*/], Global_1655612.f_1177.f_194[iParam1], Global_1655612.f_1177.f_183[iParam1], Global_1655612.f_1177.f_227[iParam1 /*3*/], Global_1655612.f_1177.f_227[iParam1 /*3*/].f_1, Global_1655612.f_1177.f_258[iParam1], Global_1655612.f_1177.f_205[iParam1], Global_1655612.f_1177.f_269[iParam1], Global_1655612.f_1177.f_312[iParam1], Global_1655612.f_1177.f_323[iParam1], Global_1655612.f_1177.f_334[iParam1], Global_1655612.f_1177.f_345[iParam1], Global_1655612.f_1177.f_356[iParam1], Global_1655612.f_1177.f_367[iParam1], Global_1655612.f_1177.f_378[iParam1], Global_1655612.f_1177.f_389[iParam1], Global_1655612.f_1177.f_400[iParam1], Global_1655612.f_1177.f_411[iParam1], Global_1655612.f_1177.f_422[iParam1], Global_1655612.f_1177.f_433[iParam1], Global_1655612.f_1177.f_444[iParam1], Global_1655612.f_1177.f_455[iParam1], Global_1655612.f_1177.f_466[iParam1], Global_1655612.f_1177.f_477[iParam1], Global_1655612.f_1177.f_488[iParam1], Global_1655612.f_1177.f_499[iParam1], Global_1655612.f_1177.f_510[iParam1], Global_1655612.f_1177.f_521[iParam1], Global_1655612.f_1177.f_532[iParam1], Global_1655612.f_1177.f_543[iParam1], Global_1655612.f_1177.f_554[iParam1], Global_1655612.f_1177.f_565[iParam1], Global_1655612.f_1177.f_576[iParam1], Global_1655612.f_1177.f_587[iParam1]);
			break;
	
		case 6:
			func_179(iParam1, Global_1655612.f_4041[iParam1], &Global_1655612.f_4041.f_11[iParam1 /*16*/], Global_1655612.f_4041.f_183[iParam1], Global_1655612.f_4041.f_172[iParam1], Global_1655612.f_4041.f_194[iParam1], Global_1655612.f_4041.f_271[iParam1], &Global_1655612.f_4041.f_282[iParam1 /*16*/], Global_1655612.f_4041.f_443[iParam1], Global_1655612.f_4041.f_454[iParam1], Global_1655612.f_4041.f_497[iParam1], Global_1655612.f_4041.f_508[iParam1], Global_1655612.f_4041.f_205[iParam1], Global_1655612.f_4041.f_216[iParam1], Global_1655612.f_4041.f_227[iParam1], Global_1655612.f_4041.f_238[iParam1], Global_1655612.f_4041.f_249[iParam1], Global_1655612.f_4041.f_519[iParam1], Global_1655612.f_4041.f_530[iParam1], Global_1655612.f_4041.f_541[iParam1], Global_1655612.f_4041.f_552[iParam1], Global_1655612.f_4041.f_563[iParam1], Global_1655612.f_4041.f_574[iParam1], Global_1655612.f_4041.f_585[iParam1], Global_1655612.f_4041.f_596[iParam1], Global_1655612.f_4041.f_607[iParam1]);
			break;
	
		case 2:
			func_167(iParam1, Global_1655612.f_2120[iParam1], &Global_1655612.f_2120.f_99[iParam1 /*16*/], Global_1655612.f_2120.f_282[iParam1], Global_1655612.f_2120.f_293[iParam1], Global_1655612.f_2120.f_260[iParam1], Global_1655612.f_2120.f_11[iParam1], Global_1655612.f_2120.f_22[iParam1], Global_1655612.f_2120.f_33[iParam1], Global_1655612.f_2120.f_44[iParam1], Global_1655612.f_2120.f_55[iParam1], Global_1655612.f_2120.f_66[iParam1], Global_1655612.f_2120.f_77[iParam1], Global_1655612.f_2120.f_88[iParam1], Global_1655612.f_2120.f_271[iParam1], Global_1655612.f_2120.f_304[iParam1], Global_1655612.f_2120.f_357[iParam1], Global_1655612.f_2120.f_326[iParam1 /*3*/], Global_1655612.f_2120.f_326[iParam1 /*3*/].f_1, Global_1655612.f_2120.f_368[iParam1], Global_1655612.f_2120.f_379[iParam1], Global_1655612.f_2120.f_390[iParam1], Global_1655612.f_2120.f_401[iParam1], Global_1655612.f_2120.f_412[iParam1], Global_1655612.f_2120.f_423[iParam1], Global_1655612.f_2120.f_434[iParam1], Global_1655612.f_2120.f_445[iParam1], Global_1655612.f_2120.f_456[iParam1], Global_1655612.f_2120.f_467[iParam1], Global_1655612.f_2120.f_478[iParam1], Global_1655612.f_2120.f_489[iParam1], Global_1655612.f_2120.f_500[iParam1], Global_1655612.f_2120.f_511[iParam1], Global_1655612.f_2120.f_522[iParam1], Global_1655612.f_2120.f_533[iParam1], Global_1655612.f_2120.f_587[iParam1], Global_1655612.f_2120.f_598[iParam1], Global_1655612.f_2120.f_544[iParam1], Global_2804374[iParam1], Global_2804385[iParam1], Global_2804396[iParam1], Global_2804407[iParam1], Global_2804418[iParam1], Global_2804429[iParam1], Global_2804440[iParam1], Global_2804451[iParam1], Global_1655612.f_2120.f_609[iParam1], Global_1655612.f_2120.f_620[iParam1], Global_1655612.f_2120.f_631[iParam1], Global_1655612.f_2120.f_642[iParam1], Global_1655612.f_2120.f_653[iParam1], Global_1655612.f_2120.f_664[iParam1], Global_1655612.f_2120.f_675[iParam1], Global_1655612.f_2120.f_686[iParam1], Global_1655612.f_2120.f_697[iParam1], Global_1655612.f_2120.f_708[iParam1]);
			break;
	
		case 8:
			func_164(iParam1, &Global_1655612.f_5060.f_11[iParam1 /*16*/], Global_1655612.f_5060[iParam1], Global_1655612.f_5060.f_172[iParam1], Global_1655612.f_5060.f_183[iParam1], Global_1655612.f_5060.f_194[iParam1], Global_1655612.f_5060.f_205[iParam1]);
			break;
	
		case 9:
			func_158(iParam1, Global_1655612.f_5287[iParam1], Global_1655612.f_5287.f_11[iParam1]);
			break;
	
		case 10:
			func_143(iParam1, Global_1655612.f_5320.f_6[iParam1], Global_1655612.f_5320.f_17[iParam1], &Global_1655612.f_5320.f_28[iParam1 /*16*/], Global_1655612.f_5320.f_200[iParam1], Global_1655612.f_5320.f_189[iParam1], Global_1655612.f_5320.f_233[iParam1], Global_1655612.f_5320.f_211[iParam1], Global_1655612.f_5320.f_244[iParam1], Global_1655612.f_5320.f_287[iParam1], Global_1655612.f_5320.f_298[iParam1], &Global_1655612.f_5320.f_309[iParam1 /*16*/], &(Global_1655612.f_5320), Global_1655612.f_5320.f_470[iParam1], Global_1655612.f_5320.f_481[iParam1], Global_1655612.f_5320.f_492[iParam1]);
			break;
	
		case 11:
			func_140(iParam1, Global_1655612.f_5823[iParam1], Global_1655612.f_5823.f_11[iParam1], Global_1655612.f_5823.f_22[iParam1], Global_1655612.f_5823.f_33[iParam1], Global_1655612.f_5823.f_44[iParam1], Global_1655612.f_5823.f_55[iParam1], Global_1655612.f_5823.f_66[iParam1], Global_1655612.f_5823.f_77[iParam1], Global_1655612.f_5823.f_88[iParam1], Global_1655612.f_5823.f_110[iParam1], Global_1655612.f_5823.f_121[iParam1], Global_1655612.f_5823.f_132[iParam1], Global_1655612.f_5823.f_143[iParam1], Global_1655612.f_5823.f_154[iParam1]);
			break;
	
		case 12:
			func_131(iParam1, Global_1655612.f_5988[iParam1], Global_1655612.f_5988.f_22[iParam1], &Global_1655612.f_5988.f_33[iParam1 /*6*/], Global_1655612.f_5988.f_94[iParam1], Global_1655612.f_5988.f_11[iParam1], Global_1655612.f_5988.f_105[iParam1], Global_1655612.f_5988.f_116[iParam1], Global_1655612.f_5988.f_127[iParam1], Global_1655612.f_5988.f_138[iParam1], Global_1655612.f_5988.f_149[iParam1], Global_1655612.f_5988.f_160[iParam1], Global_1655612.f_5988.f_171[iParam1], Global_1655612.f_5988.f_182[iParam1], Global_1655612.f_5988.f_193[iParam1], Global_1655612.f_5988.f_204[iParam1], Global_1655612.f_5988.f_215[iParam1], Global_1655612.f_5988.f_226[iParam1], Global_1655612.f_5988.f_248[iParam1], Global_1655612.f_5988.f_259[iParam1], Global_1655612.f_5988.f_270[iParam1], Global_1655612.f_5988.f_281[iParam1], Global_1655612.f_5988.f_292[iParam1], Global_1655612.f_5988.f_303[iParam1], Global_1655612.f_5988.f_314[iParam1], Global_1655612.f_5988.f_325[iParam1], Global_1655612.f_5988.f_336[iParam1], Global_1655612.f_5988.f_347[iParam1], Global_1655612.f_5988.f_358[iParam1], Global_1655612.f_5988.f_369[iParam1], Global_1655612.f_5988.f_380[iParam1], Global_1655612.f_5988.f_391[iParam1]);
			break;
	
		case 13:
			func_126(iParam1, Global_1655612.f_6390[iParam1], Global_1655612.f_6390.f_11[iParam1], Global_1655612.f_6390.f_22[iParam1], Global_1655612.f_6390.f_33[iParam1], Global_1655612.f_6390.f_44[iParam1], Global_1655612.f_6390.f_55[iParam1], Global_1655612.f_6390.f_66[iParam1], Global_1655612.f_6390.f_77[iParam1], Global_1655612.f_6390.f_88[iParam1], Global_1655612.f_6390.f_99[iParam1], Global_1655612.f_6390.f_110[iParam1], Global_1655612.f_6390.f_121[iParam1], Global_1655612.f_6390.f_132[iParam1], Global_1655612.f_6390.f_154[iParam1], Global_1655612.f_6390.f_165[iParam1], Global_1655612.f_6390.f_176[iParam1], Global_1655612.f_6390.f_187[iParam1], Global_1655612.f_6390.f_198[iParam1], Global_1655612.f_6390.f_209[iParam1], Global_1655612.f_6390.f_220[iParam1]);
			break;
	
		case 14:
			func_45(iParam1, &Global_1655612.f_6621[iParam1 /*16*/], &Global_1655612.f_6621.f_161[iParam1 /*16*/], Global_1655612.f_6621.f_322[iParam1], Global_1655612.f_6621.f_333[iParam1], Global_1655612.f_6621.f_355[iParam1], Global_1655612.f_6621.f_366[iParam1], Global_1655612.f_6621.f_377[iParam1]);
			break;
	}

	return;
}

void func_221(BOOL bParam0) // Position - 0xFA55
{
	if (func_222())
		if (bParam0)
			unk_0xA66AC5949E305457(1);
		else
			unk_0xA66AC5949E305457(0);

	return;
}

BOOL func_222() // Position - 0xFA76
{
	if (func_223(unk_0x259BE71D8A81D4FA()))
		return true;

	return false;
}

BOOL func_223(int iParam0) // Position - 0xFA8E
{
	switch (func_224(iParam0))
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

int func_224(int iParam0) // Position - 0xFAEE
{
	return Global_1853988[iParam0 /*867*/].f_192;
}

BOOL func_225(int iParam0) // Position - 0xFB01
{
	if (Global_2696290 == 1)
		return false;

	if (func_228() == 0)
		if (unk_0x4D9174D8796EA622())
			return false;

	if (iParam0 != 1 && Global_1655612.f_1166 == 0 && Global_1655612.f_1167 == 0)
		if (func_226())
			return false;

	return true;
}

BOOL func_226() // Position - 0xFB57
{
	var unk;

	if (Global_20500.f_1 > 3)
		return true;

	if (func_227())
	{
		unk = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&unk);
	
		if (Global_20445 == 0)
			if (unk.f_1 > -119f)
				return true;
			else
				return false;
		else if (unk.f_1 > -101f)
			return true;
		else
			return false;
	}

	return false;
}

BOOL func_227() // Position - 0xFBC5
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

int func_228() // Position - 0xFBDF
{
	return Global_32283;
}

BOOL func_229(int iParam0) // Position - 0xFBEA
{
	return iParam0 > -1 && iParam0 < 15;
}

int func_230(int iParam0) // Position - 0xFC00
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

int func_231(int iParam0) // Position - 0xFCB7
{
	if (func_232(iParam0))
		return Global_1652044[iParam0];

	return -1;
}

BOOL func_232(int iParam0) // Position - 0xFCD4
{
	return iParam0 >= 0 && iParam0 < 2;
}

BOOL func_233(int iParam0) // Position - 0xFCE9
{
	if (func_232(iParam0))
		return Global_1652044[iParam0] != -1;

	return false;
}

BOOL func_234() // Position - 0xFD08
{
	int i;

	for (i = 0; i <= 14; i = i + 1)
	{
		if (Global_1655612.f_7025[i] != Global_1655612.f_7009[i])
			return true;
	}

	if (Global_1655612.f_7073)
	{
		Global_1655612.f_7073 = 0;
		return true;
	}

	return false;
}

void func_235() // Position - 0xFD57
{
	Global_1655612.f_7073 = 1;
	return;
}

BOOL func_236(int iParam0) // Position - 0xFD67
{
	if (func_238(iParam0, 0))
		return true;

	if (func_237())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_237() // Position - 0xFDA6
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_238(int iParam0, int iParam1) // Position - 0xFDB4
{
	BOOL flag;

	if (!func_241(iParam0))
		return false;

	if (iParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_239(-1, false) == 8;
	else
		flag = Global_1853988[iParam0 /*867*/].f_205 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(iParam0))
			flag = unk_0x1864096A95E36EBA(iParam0) == 8;

	return flag;
}

int func_239(int iParam0, BOOL bParam1) // Position - 0xFE0D
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_240();

	if (Global_1575043[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

int func_240() // Position - 0xFE4E
{
	return Global_1574918;
}

BOOL func_241(int iParam0) // Position - 0xFE5A
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_242() // Position - 0xFE7C
{
	if (Global_1574529)
		return false;

	if (Global_75816)
		return false;

	if (unk_0xF8EFC60132F8109F())
		return false;

	if (Global_1944768.f_4)
		return false;

	if (Global_1655612.f_1169 || Global_1655612.f_1170)
	{
		if (Global_1655612.f_1171 == false)
			if (func_246(unk_0x4A8C381C258A124D()))
				func_245();
	
		return true;
	}

	if (func_52())
	{
		if (Global_1655612.f_1171 == false)
			if (func_246(unk_0x4A8C381C258A124D()))
				func_245();
	
		return true;
	}

	if (Global_2696989)
		return false;

	if (Global_1577891)
		return false;

	if (func_244())
	{
		if (Global_1655612.f_1171 == false)
			if (func_246(unk_0x4A8C381C258A124D()))
				func_245();
	
		return true;
	}

	if (Global_23251.f_4 && func_223(unk_0x259BE71D8A81D4FA()) == false)
		return false;

	if (unk_0x3555462DB47B7AB1())
		return false;

	if (Global_1655612.f_1171 == false)
		if (func_246(unk_0x4A8C381C258A124D()))
			func_245();

	if (func_243(8, -1))
		return false;

	if (unk_0x5775F8AC61C2CAE1() == 0)
		return false;

	if (func_228() == 0)
		if (Global_2657704[unk_0x259BE71D8A81D4FA() /*463*/].f_232 != 99)
			if (unk_0xAD15761928FCF79C() == 0 && Global_1836590 == 0 && !IS_BIT_SET(Global_2672524.f_1685.f_756, 11) && Global_1853988[unk_0x259BE71D8A81D4FA() /*867*/] != 0)
				return false;

	if (IS_BIT_SET(Global_2621446, 11))
		return false;

	return true;
}

BOOL func_243(int iParam0, int iParam1) // Position - 0x10008
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1654054.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1654054.f_1048, iParam0);
}

BOOL func_244() // Position - 0x10040
{
	if (Global_1926479)
		return true;

	return false;
}

void func_245() // Position - 0x10054
{
	Global_1655612.f_1171 = 1;
	return;
}

BOOL func_246(var uParam0) // Position - 0x10064
{
	int num;

	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			unk_0x23B29877D0BE9547(uParam0, &num, 1);
		
			if (num == joaat("WEAPON_SNIPERRIFLE") || num == joaat("WEAPON_HEAVYSNIPER") || num == joaat("WEAPON_MARKSMANRIFLE") || num == joaat("WEAPON_HEAVYSNIPER_MK2"))
				return true;
		}
	}

	return false;
}

void func_247() // Position - 0x100C1
{
	int i;

	if (func_250(2))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(2, i) && func_29(2, i))
			{
				func_17(&Global_1655612.f_2120.f_555[i /*2*/]);
			}
			else if (func_252(&Global_1655612.f_2120.f_555[i /*2*/], Global_1655612.f_2120.f_576[i], false) == false)
			{
				Global_1655612.f_1 = 1;
				func_249(2, i);
			}
			else
			{
				func_248(2, i);
			}
		}
	}

	return;
}

void func_248(int iParam0, int iParam1) // Position - 0x1014C
{
	unk_0x8744D2E3FC95740E(&Global_1655612.f_7057[iParam0], iParam1);
	return;
}

void func_249(int iParam0, int iParam1) // Position - 0x10165
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1655612.f_7009[iParam0], iParam1);
	return;
}

BOOL func_250(int iParam0) // Position - 0x1017E
{
	if (Global_1655612.f_7057[iParam0] > 0)
		return true;

	return false;
}

void func_251(int iParam0) // Position - 0x1019A
{
	Global_1655612.f_1163 = iParam0;
	return;
}

BOOL func_252(var uParam0, int iParam1, BOOL bParam2) // Position - 0x101AB
{
	if (iParam1 == -1)
		return true;

	func_76(uParam0, bParam2, false);

	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
			return true;
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
		return true;

	return false;
}

