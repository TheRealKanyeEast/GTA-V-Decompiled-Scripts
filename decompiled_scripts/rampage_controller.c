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
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
#endregion

void main() // Position - 0x0
{
	int i;

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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 77;
	iLocal_27 = 194;
	iLocal_28 = 52;
	iLocal_26 = 77;

	if (unk_0x486FF5D06E9659F1(joaat("rampage_controller")) > 1)
		unk_0xBBC29EBE6E1A48FA();

	if (unk_0x96CFB880BAC634CE(34))
		func_37();

	if (!func_36(108))
		func_37();

	func_35(23);

	for (i = 0; i < 5; i = i + 1)
	{
		func_27(iLocal_27 + i, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_113810.f_18577[iLocal_28 + i /*6*/], 3);
	}

	func_19(1);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!func_18(40))
		{
			switch (func_16("RAMP_NEW_ALL" /*All rampages are now unlocked.*/))
			{
				case 2:
					func_13("RAMP_NEW_ALL" /*All rampages are now unlocked.*/, 1, 0, 2000, 10000, 4, 0, 0, 0);
					break;
			
				case 1:
					func_12(40);
					break;
			}
		}
	
		if (func_1())
		{
			func_19(0);
		
			while (func_1())
			{
				SYSTEM::WAIT(0);
			}
		
			while (unk_0x46150A5112561134())
			{
				SYSTEM::WAIT(0);
			}
		
			func_19(1);
		}
	}

	return;
}

BOOL func_1() // Position - 0x13C
{
	return func_9(9) || Global_32286 || func_2() != 2 || Global_112897[56 /*10*/].f_3;
}

int func_2() // Position - 0x16F
{
	func_3();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_3() // Position - 0x188
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_7(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_6(unk_0x4A8C381C258A124D());
		
			if (func_5(num) && !func_4(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_5(Global_113810.f_2366.f_539.f_4321))
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

BOOL func_4(int iParam0) // Position - 0x285
{
	return Global_43377 == iParam0;
}

BOOL func_5(int iParam0) // Position - 0x293
{
	return iParam0 < 3;
}

int func_6(var uParam0) // Position - 0x29F
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_7(i) == num)
				return i;
		}
	}

	return 145;
}

int func_7(int iParam0) // Position - 0x2DC
{
	if (func_5(iParam0))
		return func_8(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_8(int iParam0) // Position - 0x301
{
	return Global_2058[iParam0 /*29*/];
}

int func_9(int iParam0) // Position - 0x310
{
	if (Global_43377 == 15)
		return 0;

	if (func_10(iParam0))
		return 0;

	return 1;
}

BOOL func_10(int iParam0) // Position - 0x332
{
	return func_11(iParam0, Global_43377);
}

BOOL func_11(int iParam0, int iParam1) // Position - 0x343
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

void func_12(int iParam0) // Position - 0x524
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		unk_0x0B0C9A0F9AAEB7F0(&Global_113810.f_20413.f_150[i], num);

	return;
}

void func_13(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x566
{
	func_14(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_14(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x587
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
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = unk_0x1DD05E817C89C737() + iParam3 + iParam4;
		else
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113810.f_20413.f_145 = Global_113810.f_20413.f_145 + 1;
		func_15();
	}

	return;
}

void func_15() // Position - 0x75A
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

int func_16(char* sParam0) // Position - 0x871
{
	if (unk_0x1B79E937E91F40C3(sParam0, &Global_112452))
		return 1;

	if (func_17(sParam0))
		return 0;

	return 2;
}

BOOL func_17(char* sParam0) // Position - 0x898
{
	int i;

	for (i = 0; i < Global_113810.f_20413.f_145; i = i + 1)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &Global_113810.f_20413[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_18(int iParam0) // Position - 0x8D3
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113810.f_20413.f_150[i], num);

	return false;
}

void func_19(int iParam0) // Position - 0x913
{
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		num = iLocal_26 + i;
		func_26(num, iParam0, false);
		func_24(num, true, 2, false);
		func_23(num, true);
		func_22(num, 44);
	
		if (Global_113810.f_2355[i /*2*/] >= 1 || func_36(108) == true || func_21(iLocal_27 + i, 0) || IS_BIT_SET(Global_113810.f_18577[iLocal_28 + i /*6*/], 3))
			func_20(num, true);
	}

	return;
}

void func_20(int iParam0, BOOL bParam1) // Position - 0x9A0
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32663[num /*23*/].f_11, 20))
		return;

	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 20);
	else
		unk_0x8744D2E3FC95740E(&(Global_32663[num /*23*/].f_11), 20);

	if (Global_32660 == 1)
		Global_32661 = 1;

	Global_32660 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 20);
	return;
}

BOOL func_21(int iParam0, int iParam1) // Position - 0xA26
{
	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		iParam1 == 1;
		return true;
	}

	return false;
}

void func_22(int iParam0, int iParam1) // Position - 0xA4D
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	unk_0xA11116C8E2E46ED4(&(Global_32663[num /*23*/].f_11), 21, 26, iParam1);

	if (Global_32660 == 1)
		Global_32661 = 1;

	Global_32660 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);
	return;
}

void func_23(int iParam0, BOOL bParam1) // Position - 0xAAB
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32663[num /*23*/].f_11, 7))
		return;

	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 7);
	else
		unk_0x8744D2E3FC95740E(&(Global_32663[num /*23*/].f_11), 7);

	if (Global_32660 == 1)
		Global_32661 = 1;

	Global_32660 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);
	return;
}

void func_24(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xB2E
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1)
	{
		if (!bParam3)
		{
			Global_32663[num /*23*/].f_17 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_32663[num /*23*/].f_11, 8))
				unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);
		
			unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 8);
		}
		else
		{
			Global_32663[num /*23*/].f_18 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_32663[num /*23*/].f_11, 10))
				unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);
		
			unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 10);
		}
	
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);
	}
	else
	{
		func_25(iParam0);
	}

	return;
}

void func_25(int iParam0) // Position - 0xBF6
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (IS_BIT_SET(Global_32663[num /*23*/].f_11, 8) || IS_BIT_SET(Global_32663[num /*23*/].f_11, 10))
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);

	unk_0x8744D2E3FC95740E(&(Global_32663[num /*23*/].f_11), 8);
	unk_0x8744D2E3FC95740E(&(Global_32663[num /*23*/].f_11), 10);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);
	return;
}

void func_26(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC81
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_32663[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_32663[num /*23*/].f_11, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 18);
	
		if (Global_32660 == 1)
			Global_32661 = 1;
	
		Global_32660 = 1;
	}

	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 15);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_32663[num /*23*/].f_11), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_32663[num /*23*/].f_11), 0);
		unk_0x8744D2E3FC95740E(&(Global_32663[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_32663[num /*23*/].f_11, 0))
	{
		if (unk_0xC450B06E5AAA0985(Global_32663[num /*23*/].f_19))
		{
			unk_0x9F83BF77C7204C05(1);
			unk_0xFE54B8568B2ABD12(&(Global_32663[num /*23*/].f_19));
			unk_0x9F83BF77C7204C05(0);
		}
	}

	return;
}

void func_27(int iParam0, int iParam1, int iParam2) // Position - 0xD81
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_33(891 + iParam0, 1, -1);
	}

	flag = true;

	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113810.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113810.f_10197[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113810.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113810.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_28();

	return;
}

void func_28() // Position - 0xE67
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int num9;

	num = 0;
	Global_113546 = 0;
	Global_113547 = 0;
	Global_113548 = 0;
	Global_113549 = 0;
	Global_113550 = 0;
	Global_113551 = 0;
	Global_113552 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113810.f_10197.f_3853;
	Global_113810.f_10197.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113810.f_10197[num /*12*/].f_5 == 1)
		{
			switch (Global_113810.f_10197[num /*12*/].f_6)
			{
				case 1:
					Global_113546 = Global_113546 + 1;
					num2 = num2 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113547 = Global_113547 + 1;
					num3 = num3 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113548 = Global_113548 + 1;
					num4 = num4 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113549 = Global_113549 + 1;
					num5 = num5 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113550 = Global_113550 + 1;
					num6 = num6 + (Global_113810.f_10197[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113551 = Global_113551 + 1;
					num7 = num7 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113552 = Global_113552 + 1;
					num8 = num8 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113529 > 0)
		if (Global_113546 == Global_113529)
			num2 = 55f;

	if (Global_113530 > 0)
		if (Global_113547 == Global_113530)
			num3 = 10f;

	if (Global_113531 > 0)
		if (Global_113548 == Global_113531)
			num4 = 0f;

	if (Global_113532 > 0)
		if (Global_113549 == Global_113532)
			num5 = 10f;

	if (Global_113533 > 0)
	{
		if (Global_113550 == Global_113533 || (Global_113533 * 10) / Global_113550 < 41 || Global_113550 > Global_113536 || Global_113550 == Global_113536)
		{
			if (!IS_BIT_SET(Global_113810.f_10197.f_3856, 14))
			{
				if (Global_113550 == Global_113533)
				{
					unk_0x8DD7F37773EBD5B9(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113533, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113810.f_10197.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113534 > 0)
		if (Global_113551 == Global_113534)
			num7 = 15f;

	if (Global_113535 > 0)
		if (Global_113552 == Global_113535)
			num8 = 5f;

	Global_113810.f_10197.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113550 > Global_113536 || Global_113550 == Global_113536)
		num9 = Global_113536;
	else
		num9 = Global_113550;

	unk_0x1164A75E490C27B6(joaat("NUM_MISSIONS_COMPLETED"), Global_113546, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISSIONS_AVAILABLE"), Global_113529, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MINIGAMES_COMPLETED"), Global_113547, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113530, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_ODDJOBS_COMPLETED"), Global_113548, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113531, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113549, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113532, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDEVENTS_COMPLETED"), num9, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113536, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISC_COMPLETED"), Global_113552 + Global_113551, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISC_AVAILABLE"), Global_113535 + Global_113534, 1);
	Global_113553 = (Global_113546 * 100) / Global_113529;
	Global_113555 = ((Global_113548 + Global_113547) * 100) / (Global_113531 + Global_113530);
	Global_113554 = ((Global_113549 + num9) * 100) / (Global_113532 + Global_113536);
	Global_113556 = ((Global_113551 + Global_113552) * 100) / (Global_113534 + Global_113535);
	unk_0x4F8678C02360C3D2(joaat("TOTAL_PROGRESS_MADE"), Global_113810.f_10197.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_STORY_MISSIONS"), Global_113553, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113554, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_ODDJOBS"), Global_113555, 1);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113810.f_10197.f_3853))
		func_32(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));

	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78689)
		{
			if (func_31() == 2 == false && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
					Global_113544 = 0;
			
				if (!Global_63485)
					func_29();
			}
		}
	}

	return;
}

int func_29() // Position - 0x1325
{
	if (func_30(false))
		return 0;

	if (Global_100872.f_8)
		if (Global_100872.f_10 > 0)
			return 0;
	else if (Global_100872.f_10 > 1)
		return 0;

	Global_100872.f_10 = Global_100872.f_10 + 1;
	return 1;
}

BOOL func_30(BOOL bParam0) // Position - 0x1370
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78938, 0);
}

int func_31() // Position - 0x1398
{
	return Global_32283;
}

int func_32(int iParam0, int iParam1) // Position - 0x13A3
{
	int num;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	num = unk_0xB3E8CE9ABB5AD331(iParam0);

	if (iParam1 > num)
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);

	return 0;
}

void func_33(int iParam0, int iParam1, int iParam2) // Position - 0x13F4
{
	if (iParam2 == -1)
		iParam2 = func_34();

	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
	return;
}

int func_34() // Position - 0x1412
{
	return Global_1574918;
}

int func_35(int iParam0) // Position - 0x141E
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113810.f_9088.f_99.f_219[num], num2))
		return 0;

	unk_0x0B0C9A0F9AAEB7F0(&Global_113810.f_9088.f_99.f_219[num], num2);
	return 1;
}

BOOL func_36(int iParam0) // Position - 0x1475
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113810.f_9088.f_99.f_58[iParam0];
}

void func_37() // Position - 0x14A2
{
	func_19(0);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

