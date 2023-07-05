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
#endregion

void main() // Position - 0x0
{
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

	if (unk_0x96CFB880BAC634CE(82))
		func_33();

	if (func_32())
		iLocal_26 = 1;

	while (true)
	{
		switch (iLocal_26)
		{
			case 0:
				if (func_10())
					iLocal_26 = 1;
				break;
		
			case 1:
				if (func_1())
					func_33();
				break;
		}
	
		SYSTEM::WAIT(1000);
	}

	return;
}

BOOL func_1() // Position - 0x9D
{
	switch (func_8("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/))
	{
		case 2:
			func_5("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/, 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
	
		case 1:
			func_4(57);
			func_2();
			return true;
	
		case 0:
			break;
	}

	return false;
}

int func_2() // Position - 0xED
{
	if (func_3(false))
		return 0;

	if (Global_100872.f_8)
		if (Global_100872.f_10 > 0)
			return 0;
	else if (Global_100872.f_10 > 1)
		return 0;

	Global_100872.f_10 = Global_100872.f_10 + 1;
	return 1;
}

BOOL func_3(BOOL bParam0) // Position - 0x138
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78938, 0);
}

void func_4(int iParam0) // Position - 0x160
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

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1A2
{
	func_6(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_6(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1C3
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
		func_7();
	}

	return;
}

void func_7() // Position - 0x396
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

int func_8(char* sParam0) // Position - 0x4AD
{
	if (unk_0x1B79E937E91F40C3(sParam0, &Global_112452))
		return 1;

	if (func_9(sParam0))
		return 0;

	return 2;
}

BOOL func_9(char* sParam0) // Position - 0x4D4
{
	int i;

	for (i = 0; i < Global_113810.f_20413.f_145; i = i + 1)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &Global_113810.f_20413[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_10() // Position - 0x50F
{
	if (func_31() || func_30() || func_29() || func_28() || func_27())
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) && !unk_0x3555462DB47B7AB1())
		{
			if (func_26(0))
			{
				func_11(48, 4, false);
				func_2();
				return true;
			}
		}
	}

	return false;
}

void func_11(int iParam0, int iParam1, BOOL bParam2) // Position - 0x582
{
	int num;

	Global_9056 = iParam0;

	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		func_18();
	
		if (iParam1 == 4)
		{
			func_17(iParam0, 0, 1);
			func_17(iParam0, 1, 1);
			func_17(iParam0, 2, 1);
			func_16(iParam0, 0, 1);
			func_16(iParam0, 1, 1);
			func_16(iParam0, 2, 1);
		}
		else
		{
			if (func_15(iParam0, iParam1) == 1 && func_14(iParam0, iParam1) == 1)
				bParam2 = false;
		
			num = iParam1;
			func_17(iParam0, num, 1);
			func_16(iParam0, num, 1);
		
			if (iParam0 == 172 && !IS_BIT_SET(Global_2794162.f_6892, 4))
				bParam2 = false;
		
			if (iParam0 == 171 && !IS_BIT_SET(Global_2794162.f_6892, 3))
				bParam2 = false;
		
			if (iParam0 == 173 && !IS_BIT_SET(Global_2794162.f_6892, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_78689)
			{
				if (iParam1 != 4)
				{
					if (Global_20500 != iParam1)
					{
						Global_9029[iParam1 /*4*/] = { func_13(iParam0) };
						Global_9046[iParam1] = 1;
						Global_9051[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20500)
					{
					}
					else
					{
						Global_8980[1 /*6*/] = { func_13(iParam0) };
						Global_8980[1 /*6*/].f_5 = iParam1;
						func_12();
					}
				}
				else
				{
					Global_8980[1 /*6*/] = { func_13(iParam0) };
					Global_8980[1 /*6*/].f_5 = iParam1;
					func_12();
				}
			}
			else
			{
				Global_8980[1 /*6*/] = { func_13(iParam0) };
				Global_8980[1 /*6*/].f_5 = iParam1;
				func_12();
			}
		}
	}

	return;
}

void func_12() // Position - 0x700
{
	var unk;
	var unk17;
	var unk33;

	TEXT_LABEL_ASSIGN_STRING(&unk, unk_0xFACCDE46E24AD056(&(Global_2058[Global_9056 /*29*/].f_7)), 64);

	if (Global_9075 == 0)
	{
		unk_0xCCDB0041859B85A6("");
		TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0xFACCDE46E24AD056(&Global_8980[1 /*6*/]), 64);
		unk33 = unk_0xFACCDE46E24AD056("CELL_253" /*New Contact*/);
		unk_0x5C7E2225D7451992(&unk, &unk, 0, 3, unk33, &unk17);
	}
	else
	{
		unk_0xCCDB0041859B85A6("CELL_255" /*New Contact: ~n~~a~*/);
		unk_0xACF853FB3F6EA7D4(&Global_8980[1 /*6*/]);
		unk_0x5C7E2225D7451992(&unk, &unk, 0, 3, "", 0);
	}

	unk_0x8744D2E3FC95740E(&Global_8370, 0);
	return;
}

struct<4> func_13(int iParam0) // Position - 0x779
{
	return Global_2058[iParam0 /*29*/].f_3;
}

int func_14(int iParam0, int iParam1) // Position - 0x78C
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2058[iParam0 /*29*/].f_24[iParam1];
}

int func_15(int iParam0, int iParam1) // Position - 0x7B6
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2058[iParam0 /*29*/].f_12[iParam1];
}

void func_16(int iParam0, int iParam1, int iParam2) // Position - 0x7E0
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2058[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_17(int iParam0, int iParam1, int iParam2) // Position - 0x825
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2058[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113810.f_28053[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

void func_18() // Position - 0x86A
{
	if (func_25(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113810.f_28053[0 /*29*/])
				Global_20500 = 0;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113810.f_28053[1 /*29*/])
				Global_20500 = 1;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113810.f_28053[2 /*29*/])
				Global_20500 = 2;
			else
				Global_20500 = 0;
	}
	else
	{
		Global_20500 = func_19();
	
		if (Global_20500 == 145)
			Global_20500 = 3;
	
		if (Global_78689)
			Global_20500 = 3;
	
		if (Global_20500 > 3)
			Global_20500 = 3;
	}

	return;
}

int func_19() // Position - 0x90C
{
	func_20();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_20() // Position - 0x925
{
	int num;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_23(Global_113810.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			num = func_22(unk_0x4A8C381C258A124D());
		
			if (func_21(num) && !func_25(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != num && func_21(Global_113810.f_2366.f_539.f_4321))
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

BOOL func_21(int iParam0) // Position - 0xA22
{
	return iParam0 < 3;
}

int func_22(var uParam0) // Position - 0xA2E
{
	int i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_23(i) == num)
				return i;
		}
	}

	return 145;
}

int func_23(int iParam0) // Position - 0xA6B
{
	if (func_21(iParam0))
		return func_24(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_24(int iParam0) // Position - 0xA90
{
	return Global_2058[iParam0 /*29*/];
}

BOOL func_25(int iParam0) // Position - 0xA9F
{
	return Global_43377 == iParam0;
}

BOOL func_26(int iParam0) // Position - 0xAAD
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113810.f_9088.f_330[iParam0 /*6*/];
}

BOOL func_27() // Position - 0xAD9
{
	var unk;

	if (Global_152686 == 2)
		return true;
	else if (Global_152686 == 3)
		return false;

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 2);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 6);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 0);
					unk_0xED11291F7127888E(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x76CA59C648318506())
		if (IS_BIT_SET(unk_0x38640D2193CB547F(866), 0))
			return true;

	return false;
}

BOOL func_28() // Position - 0xB91
{
	return false;
}

BOOL func_29() // Position - 0xB9A
{
	return true;
}

int func_30() // Position - 0xBA3
{
	return 1;
}

int func_31() // Position - 0xBAC
{
	if (unk_0x087611B922B50F13(-1226939934))
		return 1;

	return 0;
}

BOOL func_32() // Position - 0xBC5
{
	if (func_15(48, 0) == 1 && func_15(48, 1) == 1 && func_15(48, 2) == 1)
		if (func_31() || func_30() || func_29() || func_28() || func_27())
			return true;

	return false;
}

void func_33() // Position - 0xC29
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

