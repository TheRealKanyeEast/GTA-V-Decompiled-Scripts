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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
#endregion

void main() // Position - 0x0
{
	int i;
	int num;
	int j;

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

	if (unk_0x96CFB880BAC634CE(50))
		func_23();

	while (true)
	{
		if (Global_113810.f_20413.f_145 > 0 || Global_112449)
		{
			if (!Global_112449)
			{
				if (Global_43377 != 6 && Global_43377 != 15 && !Global_96820)
					func_23();
			
				if (!Global_112448)
				{
					if (Global_113810.f_20413.f_145 > 0)
					{
						if (func_20(&Global_113810.f_20413[iLocal_35 /*16*/]))
						{
							if (func_18(func_19()))
							{
								if (IS_BIT_SET(Global_113810.f_20413[iLocal_35 /*16*/].f_11, func_12()))
								{
									if (Global_113810.f_20413[iLocal_35 /*16*/].f_12 == Global_113810.f_20413.f_146[func_12()])
									{
										if (unk_0x1DD05E817C89C737() > Global_112451)
										{
											if (unk_0x1DD05E817C89C737() > Global_113810.f_20413[iLocal_35 /*16*/].f_8)
											{
												if (unk_0x1B79E937E91F40C3(&(Global_113810.f_20413[iLocal_35 /*16*/].f_4), ""))
												{
													unk_0x3EC26139639016E5(1);
													func_11(&Global_113810.f_20413[iLocal_35 /*16*/]);
												}
												else
												{
													unk_0x3EC26139639016E5(1);
													func_10(&Global_113810.f_20413[iLocal_35 /*16*/], &(Global_113810.f_20413[iLocal_35 /*16*/].f_4));
												}
											
												if (Global_113810.f_20413[iLocal_35 /*16*/].f_13 != 0)
													func_9(Global_113810.f_20413[iLocal_35 /*16*/].f_13, 0);
											
												uLocal_18 = { Global_113810.f_20413[iLocal_35 /*16*/] };
												uLocal_18.f_4 = { Global_113810.f_20413[iLocal_35 /*16*/].f_4 };
												uLocal_18.f_8 = Global_113810.f_20413[iLocal_35 /*16*/].f_8;
												uLocal_18.f_10 = Global_113810.f_20413[iLocal_35 /*16*/].f_10;
												uLocal_18.f_9 = Global_113810.f_20413[iLocal_35 /*16*/].f_9;
												uLocal_18.f_11 = Global_113810.f_20413[iLocal_35 /*16*/].f_11;
												uLocal_18.f_12 = Global_113810.f_20413[iLocal_35 /*16*/].f_12;
												uLocal_18.f_13 = Global_113810.f_20413[iLocal_35 /*16*/].f_13;
												uLocal_18.f_14 = Global_113810.f_20413[iLocal_35 /*16*/].f_14;
												uLocal_18.f_15 = Global_113810.f_20413[iLocal_35 /*16*/].f_15;
												uLocal_18.f_16 = 0;
												Global_112452 = { Global_113810.f_20413[iLocal_35 /*16*/] };
												Global_112450 = unk_0x1DD05E817C89C737();
											
												for (i = iLocal_35; i <= Global_113810.f_20413.f_145 - 2; i = i + 1)
												{
													func_8(i, i + 1);
												}
											
												func_7(Global_113810.f_20413.f_145 - 1);
												Global_113810.f_20413.f_145 = Global_113810.f_20413.f_145 - 1;
												func_6();
												Global_112449 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x1B79E937E91F40C3(&(uLocal_18.f_4), ""))
					if (func_3(&uLocal_18))
						unk_0x428C32CC68809A35(0);
				else if (func_2(&uLocal_18, &(uLocal_18.f_4)))
					unk_0x428C32CC68809A35(0);
			
				if (unk_0x1DD05E817C89C737() - Global_112450 > 4000 || uLocal_18.f_16)
				{
					if (uLocal_18.f_14 != 0)
						func_9(uLocal_18.f_14, 0);
				
					Global_112451 = unk_0x1DD05E817C89C737() + 250;
				}
				else
				{
					if (uLocal_18.f_10 != -1)
						num = 20000;
					else
						num = -1;
				
					func_1(&uLocal_18, &(uLocal_18.f_4), uLocal_18.f_12, 1000, num, uLocal_18.f_9, uLocal_18.f_11, uLocal_18.f_13, uLocal_18.f_14, uLocal_18.f_15);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&uLocal_18, "", 16);
				TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_4), "", 16);
				uLocal_18.f_8 = 0;
				uLocal_18.f_9 = 0;
				uLocal_18.f_10 = -1;
				uLocal_18.f_11 = 0;
				uLocal_18.f_12 = 0;
				uLocal_18.f_13 = 0;
				uLocal_18.f_14 = 0;
				uLocal_18.f_15 = 0;
				uLocal_18.f_16 = 0;
				Global_112450 = 0;
				Global_112449 = false;
			}
		
			if (!unk_0x1B79E937E91F40C3(&Global_113810.f_20413[iLocal_35 /*16*/], &uLocal_18) && !unk_0x1B79E937E91F40C3(&Global_113810.f_20413[iLocal_35 /*16*/], ""))
			{
				if (Global_113810.f_20413[iLocal_35 /*16*/].f_10 != -1)
				{
					if (unk_0x1DD05E817C89C737() > Global_113810.f_20413[iLocal_35 /*16*/].f_10)
					{
						for (j = iLocal_35; j <= Global_113810.f_20413.f_145 - 2; j = j + 1)
						{
							func_8(j, j + 1);
						}
					
						func_7(Global_113810.f_20413.f_145 - 1);
						Global_113810.f_20413.f_145 = Global_113810.f_20413.f_145 - 1;
						func_6();
					}
				}
			}
		
			iLocal_35 = iLocal_35 + 1;
		
			if (iLocal_35 >= Global_113810.f_20413.f_145)
				iLocal_35 = 0;
		}
		else if (Global_43377 != 6 && Global_43377 != 15 && !Global_96820)
		{
			func_23();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9) // Position - 0x472
{
	int i;

	if (unk_0x1B79E937E91F40C3(sParam0, ""))
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

	for (i = 0; i < Global_113810.f_20413.f_145; i = i + 1)
	{
		if (unk_0x1B79E937E91F40C3(&Global_113810.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_113810.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8 = unk_0x1DD05E817C89C737() + iParam3;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15 = uParam9;
	
		if (iParam4 != -1)
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = unk_0x1DD05E817C89C737() + iParam3 + iParam4;
		else
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113810.f_20413.f_145 = Global_113810.f_20413.f_145 + 1;
		func_6();
	}

	return;
}

BOOL func_2(var uParam0, var uParam1) // Position - 0x644
{
	unk_0x39DCBE5519BD783A(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

BOOL func_3(var uParam0) // Position - 0x65D
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

BOOL func_4() // Position - 0x670
{
	if (unk_0xFD216000DC314A92())
		return false;

	if (func_5())
		return false;

	if (uLocal_18.f_9 != -1 && unk_0x1DD05E817C89C737() - Global_112450 > uLocal_18.f_9)
		return false;

	if (Global_112448)
		return false;

	if (unk_0xFD216000DC314A92())
		return false;

	if (unk_0x1B79E937E91F40C3(&(uLocal_18.f_4), ""))
	{
		if (!func_3(&uLocal_18))
		{
			uLocal_18.f_16 = 1;
			return false;
		}
	}
	else if (!func_2(&uLocal_18, &(uLocal_18.f_4)))
	{
		uLocal_18.f_16 = 1;
		return false;
	}

	return true;
}

BOOL func_5() // Position - 0x6FF
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

void func_6() // Position - 0x719
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113810.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_113810.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113810.f_20413[i /*16*/].f_11, 0))
			if (Global_113810.f_20413[i /*16*/].f_12 > Global_113810.f_20413.f_146[0])
				Global_113810.f_20413.f_146[0] = Global_113810.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113810.f_20413[i /*16*/].f_11, 1))
			if (Global_113810.f_20413[i /*16*/].f_12 > Global_113810.f_20413.f_146[1])
				Global_113810.f_20413.f_146[1] = Global_113810.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113810.f_20413[i /*16*/].f_11, 2))
			if (Global_113810.f_20413[i /*16*/].f_12 > Global_113810.f_20413.f_146[2])
				Global_113810.f_20413.f_146[2] = Global_113810.f_20413[i /*16*/].f_12;
	}

	return;
}

void func_7(int iParam0) // Position - 0x830
{
	TEXT_LABEL_ASSIGN_STRING(&Global_113810.f_20413[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113810.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113810.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113810.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113810.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113810.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113810.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113810.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113810.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113810.f_20413[iParam0 /*16*/].f_15 = 0;
	return;
}

void func_8(int iParam0, int iParam1) // Position - 0x8C8
{
	Global_113810.f_20413[iParam0 /*16*/] = { Global_113810.f_20413[iParam1 /*16*/] };
	Global_113810.f_20413[iParam0 /*16*/].f_4 = { Global_113810.f_20413[iParam1 /*16*/].f_4 };
	Global_113810.f_20413[iParam0 /*16*/].f_8 = Global_113810.f_20413[iParam1 /*16*/].f_8;
	Global_113810.f_20413[iParam0 /*16*/].f_10 = Global_113810.f_20413[iParam1 /*16*/].f_10;
	Global_113810.f_20413[iParam0 /*16*/].f_9 = Global_113810.f_20413[iParam1 /*16*/].f_9;
	Global_113810.f_20413[iParam0 /*16*/].f_11 = Global_113810.f_20413[iParam1 /*16*/].f_11;
	Global_113810.f_20413[iParam0 /*16*/].f_12 = Global_113810.f_20413[iParam1 /*16*/].f_12;
	Global_113810.f_20413[iParam0 /*16*/].f_13 = Global_113810.f_20413[iParam1 /*16*/].f_13;
	Global_113810.f_20413[iParam0 /*16*/].f_14 = Global_113810.f_20413[iParam1 /*16*/].f_14;
	Global_113810.f_20413[iParam0 /*16*/].f_15 = Global_113810.f_20413[iParam1 /*16*/].f_15;
	return;
}

void func_9(int iParam0, int iParam1) // Position - 0x9D8
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113810.f_8616[iParam0] = 1;
	Global_113810.f_8616.f_236[iParam0] = unk_0x1DD05E817C89C737() + iParam1;
	return;
}

void func_10(char* sParam0, char* sParam1) // Position - 0xA15
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
	return;
}

void func_11(char* sParam0) // Position - 0xA31
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
	return;
}

int func_12() // Position - 0xA47
{
	func_13();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_13() // Position - 0xA60
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_16(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_15(unk_0x4A8C381C258A124D());
		
			if (func_18(num) && !func_14(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_18(Global_113810.f_2366.f_539.f_4321))
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

BOOL func_14(int iParam0) // Position - 0xB5D
{
	return Global_43377 == iParam0;
}

int func_15(var uParam0) // Position - 0xB6B
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_16(i) == num)
				return i;
		}
	}

	return 145;
}

int func_16(int iParam0) // Position - 0xBA8
{
	if (func_18(iParam0))
		return func_17(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_17(int iParam0) // Position - 0xBCD
{
	return Global_2058[iParam0 /*29*/];
}

BOOL func_18(int iParam0) // Position - 0xBDC
{
	return iParam0 < 3;
}

int func_19() // Position - 0xBE8
{
	func_13();
	return Global_113810.f_2366.f_539.f_4321;
}

BOOL func_20(char* sParam0) // Position - 0xC01
{
	if (unk_0x4C705AAF75363287())
		return false;

	if (unk_0xFD216000DC314A92())
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (unk_0xB11671B812399BA2())
		return false;

	if (func_22())
		return false;

	if (func_5())
		return false;

	if (sParam0->f_12 < 3)
	{
		if (func_21())
			return false;
	
		if (Global_78687)
			return false;
	
		if (Global_97733)
			return false;
	
		if (!IS_BIT_SET(sParam0->f_15, 1))
			if (Global_97741)
				return false;
	}

	return true;
}

BOOL func_21() // Position - 0xC8B
{
	if (Global_78950)
		return true;
	else if (Global_63479 && !Global_63485)
		return true;

	return false;
}

BOOL func_22() // Position - 0xCB5
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98291.f_44 == 1;

	return false;
}

void func_23() // Position - 0xCD1
{
	if (Global_112449)
		if (unk_0x1B79E937E91F40C3(&(uLocal_18.f_4), ""))
			if (func_3(&uLocal_18))
				unk_0x428C32CC68809A35(1);
		else if (func_2(&uLocal_18, &(uLocal_18.f_4)))
			unk_0x428C32CC68809A35(1);

	Global_112450 = 0;
	Global_112449 = false;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

