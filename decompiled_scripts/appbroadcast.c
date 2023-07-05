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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "CELL_212" /*YES*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_32, "CELL_213" /*NO*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_36, "CELL_39" /*Broadcast*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_40, "CELL_MP_300" /*Activate?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "CELL_MP_301" /*Deactivate?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_48, "CELL_MP_302" /*Unavailable*/, 16);
	unk_0x51CC1333A10C4E09();
	func_47(&uLocal_26);
	func_38();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!unk_0xBF52D447C795492B())
		{
			func_36(true);
			func_35();
		}
	
		if (!(Global_20500.f_1 == 9) && Global_20500.f_1 > 3)
		{
			func_3();
		
			if (Global_20500.f_1 != 8)
				if (func_2())
					func_35();
		}
	
		if (func_1())
			func_35();
	}

	return;
}

BOOL func_1() // Position - 0xDE
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 3 || Global_20500.f_1 == 0 || Global_20444 == 1)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x121
{
	if (Global_8976 == 1 || Global_20500.f_1 < 7)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x14A
{
	if (func_31(&uLocal_26))
	{
		if (func_17())
		{
			if (Global_2694515)
			{
				unk_0xF2EE6216DEB74ACC(0);
				func_10(1080503477, func_11(true, true));
				Global_2694515 = false;
			}
			else
			{
				unk_0xF2EE6216DEB74ACC(1);
				func_10(1793940769, func_11(true, true));
				Global_2694515 = true;
			}
		
			func_4(0);
			return;
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0x1A6
{
	if (func_9())
		return;

	if (Global_20704)
		if (func_8())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8371, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_21845 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8370, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8370, 30);

	if (!func_5())
		Global_20500.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x230
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x257
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_20704 = true;
		
			if (bParam1)
				unk_0x78C4EBB0251847E2(&Global_20437);
		
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20428);
		}
	}
	else if (Global_20704 == true)
	{
		Global_20704 = false;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
	
		if (bParam1)
			unk_0x6B7EA0158D00C600(Global_20437);
		else
			unk_0x6B7EA0158D00C600(Global_20428);
	}

	return;
}

BOOL func_7(int iParam0) // Position - 0x2CB
{
	if (iParam0 == 1)
		if (Global_20500.f_1 > 3)
			if (IS_BIT_SET(Global_8370, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20500.f_1 > 3)
		return true;

	return false;
}

BOOL func_8() // Position - 0x322
{
	return IS_BIT_SET(Global_1963795, 5);
}

BOOL func_9() // Position - 0x330
{
	return IS_BIT_SET(Global_1963795, 19);
}

void func_10(int iParam0, int iParam1) // Position - 0x33F
{
	int num;

	num = 800157557;
	num.f_1 = unk_0x259BE71D8A81D4FA();
	num.f_2 = iParam0;
	num.f_3 = unk_0xC5935DFB3F39785A(0, 9999);

	if (!(iParam1 == 0))
		if (unk_0x76CD105BCAC6EB9F())
			unk_0x01F0B819E78A18A1(1, &num, 4, iParam1);

	return;
}

int func_11(BOOL bParam0, BOOL bParam1) // Position - 0x384
{
	int unk;
	int i;
	int num;

	for (i = 0; i < 32; i = i + 1)
	{
		num = unk_0xB23E0F9B63D009A8(i);
	
		if (func_16(num, false, false))
			if (num != unk_0x259BE71D8A81D4FA() || bParam0)
				if (bParam1)
					unk_0x0B0C9A0F9AAEB7F0(&unk, i);
				else if (!func_12(num, 0))
					unk_0x0B0C9A0F9AAEB7F0(&unk, i);
	}

	return unk;
}

BOOL func_12(int iParam0, int iParam1) // Position - 0x3E9
{
	BOOL flag;

	if (!func_15(iParam0))
		return false;

	if (iParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_13(-1, false) == 8;
	else
		flag = Global_1853988[iParam0 /*867*/].f_205 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(iParam0))
			flag = unk_0x1864096A95E36EBA(iParam0) == 8;

	return flag;
}

int func_13(int iParam0, BOOL bParam1) // Position - 0x442
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_14();

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

int func_14() // Position - 0x483
{
	return Global_1574918;
}

BOOL func_15(int iParam0) // Position - 0x48F
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_16(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B1
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

BOOL func_17() // Position - 0x511
{
	if (!func_25(unk_0x259BE71D8A81D4FA(), true) && func_18())
		return true;

	return false;
}

BOOL func_18() // Position - 0x534
{
	if (!func_19())
		return false;

	return true;
}

BOOL func_19() // Position - 0x549
{
	if (Global_1574612)
		return true;

	if (func_24())
		return true;

	if (func_23())
		return true;

	return func_20(120, -1);
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x579
{
	var unk;
	int num;

	unk = func_21(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return 0;
}

var func_21(int iParam0, int iParam1) // Position - 0x59D
{
	return unk_0xD69CE161FE614531(2, iParam0, func_22(iParam1));
}

int func_22(int iParam0) // Position - 0x5B2
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_14();
	
		if (num2 > -1)
		{
			Global_2805862 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2805862 = 1;
		}
	}

	return num;
}

BOOL func_23() // Position - 0x5E6
{
	return Global_1575051;
}

BOOL func_24() // Position - 0x5F2
{
	return Global_1575053;
}

BOOL func_25(int iParam0, BOOL bParam1) // Position - 0x5FE
{
	if (func_30() != 0)
		return func_29(iParam0) != 0;

	return func_26(iParam0, bParam1, false);
}

BOOL func_26(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x625
{
	if (bParam1)
		if (func_27(iParam0))
			return 1;

	!bParam2;

	if (Global_1853988[iParam0 /*867*/] == -1)
		return 0;

	return 1;
}

BOOL func_27(int iParam0) // Position - 0x657
{
	return func_28(iParam0);
}

BOOL func_28(int iParam0) // Position - 0x665
{
	return IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_29(int iParam0) // Position - 0x67C
{
	if (func_16(iParam0, false, true))
		return Global_2657704[iParam0 /*463*/].f_1;

	return 0;
}

int func_30() // Position - 0x69E
{
	return Global_32283;
}

BOOL func_31(var uParam0) // Position - 0x6A9
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_20478)
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (!unk_0x875A214D5EBCA509(2, Global_20469))
		return false;

	func_32();
	Global_20478 = true;
	return true;
}

void func_32() // Position - 0x6ED
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20489, 1);
		func_33();
	}

	return;
}

void func_33() // Position - 0x712
{
	if (func_34())
		unk_0xBF3F90E670404C44(5);

	return;
}

BOOL func_34() // Position - 0x726
{
	var unk;
	int num;
	int num2;

	if (Global_78689)
		return false;

	num2 = 0;
	unk = unk_0xBF03D0685ADC793B();
	num = unk_0xBCF87EE3DC296C2A(unk);

	if (num == 4)
		num2 = 1;

	if (Global_4542580 || num2)
		return true;

	return true;
}

void func_35() // Position - 0x76D
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_36(BOOL bParam0) // Position - 0x779
{
	if (bParam0)
	{
		func_37();
	
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
			unk_0x0B0C9A0F9AAEB7F0(&Global_8371, 16);
	
		Global_20500.f_1 = 1;
	
		if (func_7(0))
			func_4(0);
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!(Global_20500.f_1 == 0))
			Global_20500.f_1 = 3;
	}

	return;
}

void func_37() // Position - 0x7DC
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}

	return;
}

void func_38() // Position - 0x805
{
	if (!(Global_20500.f_1 == 7))
		Global_20500.f_1 = 7;

	func_46(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);

	if (func_17())
		if (Global_2694515)
			func_45(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_44, 0, 0, 0, 0);
		else
			func_45(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_40, 0, 0, 0, 0);
	else
		func_45(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_48, 0, 0, 0, 0);

	func_46(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_42(&uLocal_36);

	if (func_17())
		func_39(13, &uLocal_28, 1, "", 4, &uLocal_32, &uLocal_26);
	else
		func_39(1, "", 1, "", 4, &uLocal_32, &uLocal_26);

	return;
}

void func_39(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6) // Position - 0x915
{
	func_40(2, iParam0, sParam1, 0, uParam6, -1);
	func_40(1, iParam2, sParam3, 1, uParam6, 17);
	func_40(3, iParam4, sParam5, 2, uParam6, -1);
	return;
}

void func_40(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5) // Position - 0x945
{
	if (iParam1 == 1)
	{
		func_45(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(uParam4, iParam3);
		func_41(iParam5, false);
		return;
	}

	if (Global_20488)
	{
		func_45(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
		func_41(iParam5, true);
		return;
	}

	func_45(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
	func_41(iParam5, true);
	return;
}

void func_41(int iParam0, BOOL bParam1) // Position - 0x9E7
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8370, iParam0);
		return;
	}

	unk_0x8744D2E3FC95740E(&Global_8370, iParam0);
	return;
}

void func_42(int iParam0) // Position - 0xA12
{
	func_43(Global_20481, "SET_HEADER", iParam0, 0, 0, 0, 0);
	return;
}

void func_43(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA2A
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_44(iParam2);

	if (!unk_0xD6F9DEE4765092A9(iParam3))
		func_44(iParam3);

	if (!unk_0xD6F9DEE4765092A9(iParam4))
		func_44(iParam4);

	if (!unk_0xD6F9DEE4765092A9(iParam5))
		func_44(iParam5);

	if (!unk_0xD6F9DEE4765092A9(iParam6))
		func_44(iParam6);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_44(int iParam0) // Position - 0xA85
{
	unk_0x882AEFD55B8D51FB(iParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xA97
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam6));

	if (!unk_0xD6F9DEE4765092A9(iParam7))
		func_44(iParam7);

	if (!unk_0xD6F9DEE4765092A9(iParam8))
		func_44(iParam8);

	if (!unk_0xD6F9DEE4765092A9(iParam9))
		func_44(iParam9);

	if (!unk_0xD6F9DEE4765092A9(iParam10))
		func_44(iParam10);

	if (!unk_0xD6F9DEE4765092A9(iParam11))
		func_44(iParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_46(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB4A
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam6));

	unk_0xE6B753D52F4CA222();
	return;
}

void func_47(var uParam0) // Position - 0xBAD
{
	*uParam0 = 0;
	return;
}

